package SpGears.AIE.ArraySlice

import spinal.core._
import spinal.lib._
import spinal.lib.fsm._

import spinal.core.sim._
import scala.collection.mutable._

// config class
case class ArraySliceConfig(W: Int, H: Int, M: Int, N: Int)

case class ArraySlice(dataWidth: Int, arraySliceConfig: ArraySliceConfig) extends Component {

  // define io port

  val arrayDataType = Bits(dataWidth bits)

  val inputStreamArrayData: Stream[Bits] = slave Stream arrayDataType
  val inputFeatureMapWidth: UInt         = in UInt (log2Up(arraySliceConfig.W + 1) bits)
  val inputFeatureMapHeight: UInt        = in UInt (log2Up(arraySliceConfig.H + 1) bits)
  val outputFeatureMapHeight             = in UInt (log2Up((arraySliceConfig.H / arraySliceConfig.M) + 1) bits)
  val outputFeatureMapWidth              = in UInt (log2Up((arraySliceConfig.W / arraySliceConfig.N) + 1) bits)

  val outputStreamArrayData: Vec[Stream[Bits]] = Vec(master Stream arrayDataType, arraySliceConfig.N)

  // register for timing
  val wReg = RegNext(inputFeatureMapWidth) init inputFeatureMapWidth.getAllTrue
  val hReg = RegNext(inputFeatureMapHeight) init inputFeatureMapHeight.getAllTrue
  val aReg = RegNext(outputFeatureMapHeight) init outputFeatureMapHeight.getAllTrue
  val bReg = RegNext(outputFeatureMapWidth) init outputFeatureMapWidth.getAllTrue

  // represent io port

  def ifmData: Stream[Bits] = inputStreamArrayData

  def w: UInt = wReg

  def h: UInt = hReg

  def a: UInt = aReg

  def b: UInt = bReg

  def ofmData: Vec[Stream[Bits]] = outputStreamArrayData

  // represent parameter
  def W: Int = arraySliceConfig.W

  def H: Int = arraySliceConfig.H

  def M: Int = arraySliceConfig.M

  def N: Int = arraySliceConfig.N

  // record handshake times
  val handshakeTimes = ArrayBuffer.fill(N)(Counter(0, W * H))

  // define the mem we need
  val fifoGroup: ArrayBuffer[StreamFifo[Bits]] =
    ArrayBuffer.fill(W)(StreamFifo(arrayDataType, H))

  // define the counter to indicate which memory will be used
  val selectWriteFifo = Reg(UInt(log2Up(W + 1) bits)).init(U(0).resized).allowUnsetRegToAvoidLatch
  val selectReadFifo  = ArrayBuffer.fill(N)(Reg(UInt((log2Up(W + 1) + 1) bits)).init(U(0).resized).allowUnsetRegToAvoidLatch)

  val holdReadOp   = ArrayBuffer.fill(N)(RegInit(False))
  val allowPadding = ArrayBuffer.fill(N)(RegInit(True))
  val outSliceNumb = ArrayBuffer.fill(N)(Counter(0, H))
  val writeAround  = RegInit(False)
  val readAround   = ArrayBuffer.fill(N)(RegInit(False))

  // initial state
  ifmData.ready := False
  (0 until N).foreach { n =>
    ofmData(n).valid   := False
    ofmData(n).payload := B(0).resized
  }
  (0 until W).foreach { n =>
    fifoGroup(n).io.push.valid   := False
    fifoGroup(n).io.push.payload := B(0).resized
    fifoGroup(n).io.pop.ready    := False
  }

  // decide real fifo depth which be used
  def realFifoDepth: UInt = {
    val realFifoDepthValue = UInt((log2Up(H + 1) + 1) bits)
    val realDepth          = h
    // a * M should not large than 2 * H
    val res = realDepth.resize((a * U(M)).getBitsWidth) % (a * U(M))
    when(res =/= U(0).resized) {
      realFifoDepthValue := (realDepth + a * U(M) - res).resized
    }.otherwise {
      realFifoDepthValue := realDepth.resized
    }
    Vec(realFifoDepthValue).simPublic().setName("realValue1")
    realFifoDepthValue
  }

  // decide the number of fifo which be used
  def realFifoNumb: UInt = {
    val realFifoNumbValue = UInt((log2Up(W + 1) + 1) bits)
    val realNumb          = w
    // b * N should not large than 2 * W
    val res = realNumb.resize((b * U(N)).getBitsWidth) % (b * U(N))
    when(res =/= U(0).resized) {
      realFifoNumbValue := (realNumb + b * U(N) - res).resized
    } otherwise {
      realFifoNumbValue := realNumb.resized
    }
    Vec(realFifoNumbValue).simPublic().setName("realValue")
    realFifoNumbValue
  }

  // decide which fifo can be read
  def realReadFifo(n: Int): UInt = selectReadFifo(n) + b * U(n)

  // select the fifo we need
  def selectFifoPush(index: UInt): Stream[Bits] = {
    val pushValids   = Vec(fifoGroup.map(_.io.push.valid).toSeq)
    val pushPayloads = Vec(fifoGroup.map(_.io.push.payload).toSeq)
    val pushReadys   = Vec(fifoGroup.map(_.io.push.ready).toSeq)
    val returnStream = Stream(arrayDataType)
    pushValids(index.resized)   := returnStream.valid
    pushPayloads(index.resized) := returnStream.payload
    returnStream.ready          := pushReadys(index.resized)
    returnStream
  }

  def selectFifoPop(index: UInt): Stream[Bits] = {
    val popValids    = Vec(fifoGroup.map(_.io.pop.valid).toSeq)
    val popPayloads  = Vec(fifoGroup.map(_.io.pop.payload).toSeq)
    val popReadys    = Vec(fifoGroup.map(_.io.pop.ready).toSeq)
    val returnStream = Stream(arrayDataType)
    returnStream.valid       := popValids(index.resized)
    returnStream.payload     := popPayloads(index.resized)
    popReadys(index.resized) := returnStream.ready

    returnStream
  }

  def selectFifoOccupancy(index: UInt): UInt = {
    val fifoOccupancys  = Vec(fifoGroup.map(_.io.occupancy).toSeq)
    val returnOccupancy = fifoOccupancys(index.resized)
    returnOccupancy
  }

  // define some indicate function
  def allReadHold: Bool = Vec(holdReadOp) === Vec(True, N)

  def nextPatchDataReady: Bool = {
    val dataReady = Vec(Bool(false), N)
    (0 until N).foreach { p =>
      when(selectWriteFifo >= realReadFifo(p)) {
        when(selectWriteFifo - realReadFifo(p) >= (U(N - p) * b)) {
          dataReady(p) := True
        }
          .otherwise {
            dataReady(p) := False
          }
      }.otherwise {
        when(realFifoNumb - realReadFifo(p) + selectWriteFifo >= (U(N - p) * b)) {
          dataReady(p) := True
        }
          .otherwise {
            dataReady(p) := False
          }
      }
    }
    dataReady.simPublic().setName("debug")
    dataReady === Vec(True, N)
  }

  def banWriteFifo: Bool = {
    val banWriteFlag = Vec(Bool(), N)
    (0 until N).foreach { p =>
      when(selectWriteFifo === (selectReadFifo(p) - selectReadFifo(p) % b)) {
        when(writeAround ^ readAround(p)) {
          banWriteFlag(p) := True
        }.otherwise {
          banWriteFlag(p) := False
        }
      }
        .otherwise {
          banWriteFlag(p) := False
        }
    }
    banWriteFlag =/= Vec(False, N)
  }

  // define stateMachine to indicate the data storage
  val arraySliceStateMachine: StateMachine = new StateMachine {
    val writeDataOnly: State               = StateEntryPoint()
    val readDataOnly, readWriteData: State = State()

    writeDataOnly.whenIsActive {

      // write data logic
      when(selectFifoOccupancy(selectWriteFifo) < h) {
        selectFifoPush(selectWriteFifo) << ifmData
      }

      when(selectFifoOccupancy(selectWriteFifo) === h - U(1) && ifmData.fire) {
        when(selectWriteFifo === w - U(1)) {
          selectWriteFifo := U(0).resized
          writeAround     := ~writeAround
        }.otherwise {
          selectWriteFifo := selectWriteFifo + U(1)
        }
      }
      when(nextPatchDataReady) {
        goto(readWriteData)
        (0 until N).foreach { p =>
          when(holdReadOp(p)) {
            holdReadOp(p) := False
          }
          when(!allowPadding(p)) {
            allowPadding(p) := True
          }
        }
      }

    }

    readWriteData.whenIsActive {
      // read data logic
      (0 until N).foreach { n =>
        when(realReadFifo(n) < w) {
          when(!holdReadOp(n) && selectFifoOccupancy(realReadFifo(n)) =/= U(0)) {
            selectFifoPop(realReadFifo(n)) >> ofmData(n)
          }

          // selection logic
          when(!holdReadOp(n)) {
            when(selectFifoOccupancy(realReadFifo(n)) > U(1) && ofmData(n).fire) {
              when(handshakeTimes(n) === b * a - U(1)) {
                selectReadFifo(n) := selectReadFifo(n) - b + U(1)
                outSliceNumb(n).increment()
              }.elsewhen((handshakeTimes(n).value + U(1)) % a === U(0)) {
                selectReadFifo(n) := selectReadFifo(n) + U(1)
              }
            }

            when(selectFifoOccupancy(realReadFifo(n)) === U(1) && ofmData(n).fire) {
              when(handshakeTimes(n) === b * a - U(1)) {

                when((outSliceNumb(n).value + U(1)) < (realFifoDepth / a)) {
                  selectReadFifo(n) := selectReadFifo(n) - b + U(1).resized
                  outSliceNumb(n).increment()
                }.otherwise {
                  outSliceNumb(n).clear()
                  when(!(allReadHold && nextPatchDataReady)) {
                    holdReadOp(n) := True
                  }
                  when((selectReadFifo(n) + U(N - 1) * b + U(1) + b * U(n)) >= w) {
                    allowPadding(n) := False
                  }
                  when((selectReadFifo(n) + U(N - 1) * b + U(1)) >= w) {
                    selectReadFifo(n) := U(0).resized
                    readAround(n)     := ~readAround(n)
                  }.otherwise {
                    selectReadFifo(n) := selectReadFifo(n) + U(N - 1) * b + U(1)
                  }
                }
              }.elsewhen((handshakeTimes(n).value + U(1)) % a === U(0)) {
                selectReadFifo(n) := selectReadFifo(n) + U(1)
              }
            }
            when(selectFifoOccupancy(realReadFifo(n)) === U(0)) {
              when(handshakeTimes(n) === b * a - U(1).resized && ofmData(n).fire) {

                when((outSliceNumb(n).value + U(1)) < (realFifoDepth / a)) {
                  selectReadFifo(n) := selectReadFifo(n) - b + U(1)
                  outSliceNumb(n).increment()
                }.otherwise {
                  outSliceNumb(n).clear()
                  when(!(allReadHold && nextPatchDataReady)) {
                    holdReadOp(n) := True
                  }
                  when((selectReadFifo(n) + U(N - 1) * b + U(1) + b * U(n)) >= w) {
                    allowPadding(n) := False
                  }
                  when((selectReadFifo(n) + U(N - 1) * b + U(1)) >= w) {
                    selectReadFifo(n) := U(0).resized
                    readAround(n)     := ~readAround(n)
                  }.otherwise {
                    selectReadFifo(n) := selectReadFifo(n) + U(N - 1) * b + U(1)
                  }
                }
              }.elsewhen((handshakeTimes(n).value + U(1)) % a === U(0) && ofmData(n).fire) {
                selectReadFifo(n) := selectReadFifo(n) + U(1)
              }
              ofmData(n).valid := True

            }

          }
        }.elsewhen(allowPadding(n) && realReadFifo(n) >= w) {
          ofmData(n).valid := True
          when(handshakeTimes(n) === b * a - U(1) && ofmData(n).fire) {
            when((outSliceNumb(n).value + U(1)).resized < (realFifoDepth / a)) {
              selectReadFifo(n) := selectReadFifo(n) - b + U(1)
              outSliceNumb(n).increment()
            }.otherwise {
              selectReadFifo(n) := U(0).resized
              readAround(n)     := ~readAround(n)
              outSliceNumb(n).clear()
              when(!(allReadHold && nextPatchDataReady)) {
                holdReadOp(n) := True
              }
            }
          }.elsewhen((handshakeTimes(n).value + U(1)) % a === U(0) && ofmData(n).fire) {
            selectReadFifo(n) := selectReadFifo(n) + U(1)
          }
        }

        when(ofmData(n).fire) {
          when(handshakeTimes(n) === b * a - U(1)) {
            handshakeTimes(n).clear()
          } otherwise {
            handshakeTimes(n).increment()
          }

        }

      }

      // write data logic
      when(!banWriteFifo) {
        when(selectFifoOccupancy(selectWriteFifo) < h) {
          selectFifoPush(selectWriteFifo) << ifmData
        }

        when(selectFifoOccupancy(selectWriteFifo) === h - U(1) && ifmData.fire) {
          when(selectWriteFifo === w - U(1)) {
            selectWriteFifo := U(0).resized
            writeAround     := ~writeAround
          }.otherwise {
            selectWriteFifo := selectWriteFifo + U(1)
          }
        }
      }

      // state transform logic

      when(allReadHold && nextPatchDataReady) {
        (0 until N).foreach(p => holdReadOp(p) := False)
      }

      when(allReadHold && !nextPatchDataReady && !banWriteFifo) {
        goto(writeDataOnly)
      }

      when(banWriteFifo) {
        goto(readDataOnly)
        (0 until N).foreach { p =>
          when(!allowPadding(p)) {
            allowPadding(p) := True
          }
        }
      }

    }

    readDataOnly.whenIsActive {

      // read data logic
      (0 until N).foreach { n =>
        when(realReadFifo(n) < w) {
          when(!holdReadOp(n) && selectFifoOccupancy(realReadFifo(n)) =/= U(0)) {
            selectFifoPop(realReadFifo(n)) >> ofmData(n)
          }

          // selection logic
          when(!holdReadOp(n)) {
            when(selectFifoOccupancy(realReadFifo(n)) > U(1) && ofmData(n).fire) {
              when(handshakeTimes(n) === b * a - U(1)) {
                selectReadFifo(n) := selectReadFifo(n) - b + U(1)
                outSliceNumb(n).increment()
              }.elsewhen((handshakeTimes(n).value + U(1)) % a === U(0)) {
                selectReadFifo(n) := selectReadFifo(n) + U(1)
              }
            }

            when(selectFifoOccupancy(realReadFifo(n)) === U(1) && ofmData(n).fire) {
              when(handshakeTimes(n) === b * a - U(1)) {

                when((outSliceNumb(n).value + U(1)) < (realFifoDepth / a)) {
                  selectReadFifo(n) := selectReadFifo(n) - b + U(1).resized
                  outSliceNumb(n).increment()
                }.otherwise {
                  outSliceNumb(n).clear()
                  when(!(allReadHold && nextPatchDataReady)) {
                    holdReadOp(n) := True
                  }
                  when((selectReadFifo(n) + U(N - 1) * b + U(1) + b * U(n)) >= w) {
                    allowPadding(n) := False
                  }
                  when((selectReadFifo(n) + U(N - 1) * b + U(1)) >= w) {
                    selectReadFifo(n) := U(0).resized
                    readAround(n)     := ~readAround(n)
                  }.otherwise {
                    selectReadFifo(n) := selectReadFifo(n) + U(N - 1) * b + U(1)
                  }
                }
              }.elsewhen((handshakeTimes(n).value + U(1)) % a === U(0)) {
                selectReadFifo(n) := selectReadFifo(n) + U(1)
              }
            }
            when(selectFifoOccupancy(realReadFifo(n)) === U(0)) {
              when(handshakeTimes(n) === b * a - U(1).resized && ofmData(n).fire) {

                when((outSliceNumb(n).value + U(1)) < (realFifoDepth / a)) {
                  selectReadFifo(n) := selectReadFifo(n) - b + U(1)
                  outSliceNumb(n).increment()
                }.otherwise {
                  outSliceNumb(n).clear()
                  when(!(allReadHold && nextPatchDataReady)) {
                    holdReadOp(n) := True
                  }
                  when((selectReadFifo(n) + U(N - 1) * b + U(1) + b * U(n)) >= w) {
                    allowPadding(n) := False
                  }
                  when((selectReadFifo(n) + U(N - 1) * b + U(1)) >= w) {
                    selectReadFifo(n) := U(0).resized
                    readAround(n)     := ~readAround(n)
                  }.otherwise {
                    selectReadFifo(n) := selectReadFifo(n) + U(N - 1) * b + U(1)
                  }
                }
              }.elsewhen((handshakeTimes(n).value + U(1)) % a === U(0) && ofmData(n).fire) {
                selectReadFifo(n) := selectReadFifo(n) + U(1)
              }
              ofmData(n).valid := True

            }

          }
        }.elsewhen(allowPadding(n) && realReadFifo(n) >= w) {
          ofmData(n).valid := True
          when(handshakeTimes(n) === b * a - U(1) && ofmData(n).fire) {
            when((outSliceNumb(n).value + U(1)).resized < (realFifoDepth / a)) {
              selectReadFifo(n) := selectReadFifo(n) - b + U(1)
              outSliceNumb(n).increment()
            }.otherwise {
              selectReadFifo(n) := U(0).resized
              readAround(n)     := ~readAround(n)
              outSliceNumb(n).clear()
              when(!(allReadHold && nextPatchDataReady)) {
                holdReadOp(n) := True
              }
            }
          }.elsewhen((handshakeTimes(n).value + U(1)) % a === U(0) && ofmData(n).fire) {
            selectReadFifo(n) := selectReadFifo(n) + U(1)
          }
        }

        when(ofmData(n).fire) {
          when(handshakeTimes(n) === b * a - U(1)) {
            handshakeTimes(n).clear()
          } otherwise {
            handshakeTimes(n).increment()
          }

        }

      }
      // state transform logic
      when(allReadHold && nextPatchDataReady) {
        (0 until N).foreach { p =>
          holdReadOp(p) := False
          when(!allowPadding(p)) {
            allowPadding(p) := True
          }
        }
        goto(readWriteData)
      }
    }
  }
  // for debug
  val stateIndicate = UInt()
  addPrePopTask(() => stateIndicate.assignFromBits(arraySliceStateMachine.stateReg.asBits))

}
