package SpGears.Algos.SuperResolution

import spinal.lib._
import spinal.core._
import spinal.core.internals.Operator
import spinal.lib.fsm._

import scala.language.postfixOps

case class PixelData(config: IPConfig, isInternal: Boolean = false, allChannel: Boolean = false) extends Bundle {
  def dW = config.dataW

  val pixel      = if (!allChannel) UInt(dW bits) else UInt(4 * dW bits)
  val frameStart = Bool()
  val rowEnd     = Bool()
  val inpValid   = isInternal generate Bool()
}

case class ControlSignal(config: IPConfig, withInpValid: Boolean = false, withOddFlag: Boolean = false) extends Bundle {
  def dW = config.dataW
  def sW = config.srcW

  val frameStart = Bool()
  val rowEnd     = Bool()

  val passMode  = Bool()
  val passValid = Bool()

  val onceMode  = UInt(3 bits)
  val onceValid = Bool()

  val mainCompare    = Bool()
  val counterCompare = Bool()
  val mainDiff       = UInt(dW bits)
  val counterDiff    = UInt(dW bits)
  val twiceCompValid = Bool()
  val twiceMode      = UInt(3 bits)

  val inpValidFlag = withInpValid generate Bool()
  val oddValid     = withOddFlag generate Bool()

}

case class SuperResolutionPart1(config: IPConfig) extends Component {
  def dW = config.dataW

  def sW = config.srcW

  def sH = config.srcH

  val io = new Bundle {
    // from master
    val pixelsIn = slave Stream PixelData(config)
    val startIn  = in Bool ()

    // from slave
    val inpTwoDoneIn   = in Bool ()
    val inpThreeDoneIn = in Bool ()

    // to slave
    val pixelsOut = master Stream PixelData(config)
    val startOut  = out Bool ()

    // to master
    val inpDoneOut = out Bool ()

    // wait for axi-lite config signal
    val thresholdIn = in UInt (dW bits)
    val widthIn     = in UInt (log2Up(sW + 1) bits)
    val heightIn    = in UInt (log2Up(sH + 1) bits)

  }
  noIoPrefix()

  /* set the initial state */
  io.setInvalid()

  /* the signal indicate last interpolation is complete */
  val inpDone = RegInit(False).setWhen(io.inpThreeDoneIn && io.inpTwoDoneIn).clearWhen(io.startIn.rise())

  /* this signal can be use to hold the startRead signal */
  val readDone = RegInit(False).clearWhen(inpDone || io.startIn.fall())

  /* the signal which start read buffer */
  val startRead = RegInit(False).setWhen(io.startIn && !readDone).clearWhen(io.startIn.fall())

  /* register the startOut signal */
  val slaveStart = RegInit(False).setWhen(!io.inpTwoDoneIn && io.pixelsIn.fire).clearWhen(io.inpTwoDoneIn || io.startIn.fall())

  /* register the frame start signal */
  val frameStart = RegInit(False)

  /* register the threshold */
  val inpThreshold = RegNext(io.thresholdIn).init(U(128, dW bits))

  /* input bmp picture width */
  val bmpWidth = RegNext(io.widthIn).init(U(sW, log2Up(sW + 1) bits))

  /* input bmp picture height */
  val bmpHeight = RegNext(io.heightIn).init(U(sH, log2Up(sH + 1) bits))

  /* this signal can be use to halt the dataIn */
  val holdBuffer = RegInit(False).clearWhen(!io.startIn || inpDone)

  /* indicate write buffer done for given size */
  val writeDone = RegInit(False).clearWhen(inpDone)

  /* record the number of row which is buffered */
  val bufferRowCount = Counter(sH + 1)

  /* the write enable signal of lineBuffer*/
  val bufferEnable = RegInit(False).setWhen(io.startIn && !holdBuffer && !writeDone).clearWhen(!io.startIn || holdBuffer || writeDone)

  /* when this signal is True, it means that the dataIn should be store in lineBufferTwo when we can receive dataIn */
  val bufferSwitch = RegInit(False).clearWhen(!startRead)

  /* when it be true, it means the lineBufferTwo now is store the next row */
  val nextRowBuffer = RegInit(True).setWhen(!startRead)

  /* indicate buffer reuse for padding */
  val bufferReuse = RegInit(False).clearWhen(inpDone)

  /* address Counter for write data to buffer */
  val bufferWAddr = Counter(sW)

  /* address Counter for output pixels */
  val outPixelAddr = Counter(2 * sW)

  /* the number of row which is already output*/
  val outRowCount = Counter(2 * sH + 1)

  /* some flag signals */
  val outReachRowEnd   = RegInit(False)
  val outReachFinalRow = RegInit(False)

  val bufferReachRowEnd   = RegInit(False)
  val bufferReachFinalRow = RegInit(False)

  /* the following lineBuffer is used to store two line pixels of source bmp */
  val lineBufferOne = Mem(UInt(dW bits), sW).init(Seq.fill(sW)(U(0).resized))
  val lineBufferTwo = Mem(UInt(dW bits), sW).init(Seq.fill(sW)(U(0).resized))

  /* the address for read lineBufferOne and lineBufferTwo */
  val mainAddrOne    = UInt(log2Up(sW) bits)
  val counterAddrOne = UInt(log2Up(sW) bits)
  val mainAddrTwo    = UInt(log2Up(sW) bits)
  val counterAddrTwo = UInt(log2Up(sW) bits)

  mainAddrOne    := (outPixelAddr / U(2)).resized
  counterAddrOne := (outPixelAddr / U(2)).resized
  mainAddrTwo    := (outPixelAddr / U(2)).resized
  counterAddrTwo := (outPixelAddr / U(2)).resized

  /* define a drive stream for valid */
  val validStream = Event
  validStream.valid.set()
  validStream.ready.allowOverride

  /* pipelineStream convey the information through the stream pipeline */
  val controlStream = Stream(ControlSignal(config))

  val controls = ControlSignal(config)

  // the empty pipeline operation
  controls.assignFromBits(B(0, controls.getBitsWidth bits))
  controlStream.translateFrom(validStream.continueWhen(startRead)) { (pipe, _) =>
    pipe := controls
  }

  /* the address Stream for read buffer */
  val mainAddrOneStream    = Stream(UInt(log2Up(sW) bits))
  val counterAddrOneStream = Stream(UInt(log2Up(sW) bits))
  val mainAddrTwoStream    = Stream(UInt(log2Up(sW) bits))
  val counterAddrTwoStream = Stream(UInt(log2Up(sW) bits))

  mainAddrOneStream.translateFrom(validStream.continueWhen(startRead)) { (addr, _) => addr := mainAddrOne }
  counterAddrOneStream.translateFrom(validStream.continueWhen(startRead)) { (addr, _) => addr := counterAddrOne }
  mainAddrTwoStream.translateFrom(validStream.continueWhen(startRead)) { (addr, _) => addr := mainAddrTwo }
  counterAddrTwoStream.translateFrom(validStream.continueWhen(startRead)) { (addr, _) => addr := counterAddrTwo }

  /** *************************** interpolation pipeline ****************************************
    */

  // read Stage
  val readStage = new Area {
    val mainOnePixelStream    = lineBufferOne.streamReadSync(mainAddrOneStream.pipelined(m2s = true, s2m = true)).pipelined(m2s = true, s2m = true)
    val counterOnePixelStream = lineBufferOne.streamReadSync(counterAddrOneStream.pipelined(m2s = true, s2m = true)).pipelined(m2s = true, s2m = true)
    val mainTwoPixelStream    = lineBufferTwo.streamReadSync(mainAddrTwoStream.pipelined(m2s = true, s2m = true)).pipelined(m2s = true, s2m = true)
    val counterTwoPixelStream = lineBufferTwo.streamReadSync(counterAddrTwoStream.pipelined(m2s = true, s2m = true)).pipelined(m2s = true, s2m = true)
    val controlPipe           = controlStream.pipelined(true, true).stage().pipelined(m2s = true, s2m = true)
  }

  val compareStage = new Area {
    val mainOnePixelStream    = readStage.mainOnePixelStream.pipelined(true, true)
    val counterOnePixelStream = readStage.counterOnePixelStream.pipelined(true, true)
    val mainTwoPixelStream    = readStage.mainTwoPixelStream.pipelined(true, true)
    val counterTwoPixelStream = readStage.counterTwoPixelStream.pipelined(true, true)
    val controlPipe = readStage.controlPipe
      .translateWith {
        val comparedControl = ControlSignal(config)
        comparedControl.assignSomeByName(readStage.controlPipe.payload)
        when(readStage.controlPipe.onceValid) {
          switch(readStage.controlPipe.onceMode) {
            is(U(0)) {
              when(readStage.mainOnePixelStream.payload >= readStage.counterOnePixelStream.payload) { comparedControl.mainCompare.set() }
                .otherwise { comparedControl.mainCompare.clear() }
            }
            is(U(1)) {
              when(readStage.mainTwoPixelStream.payload >= readStage.counterTwoPixelStream.payload) { comparedControl.mainCompare.set() }
                .otherwise { comparedControl.mainCompare.clear() }
            }
            is(U(2)) {
              when(readStage.mainOnePixelStream.payload >= readStage.mainTwoPixelStream.payload) { comparedControl.mainCompare.set() }
                .otherwise { comparedControl.mainCompare.clear() }
            }
            is(U(3)) {
              when(readStage.mainTwoPixelStream.payload >= readStage.mainOnePixelStream.payload) { comparedControl.mainCompare.set() }
                .otherwise { comparedControl.mainCompare.clear() }
            }
            is(U(4)) { comparedControl.mainCompare.set() }
            is(U(5)) { comparedControl.mainCompare.set() }
          }
        }

        when(readStage.controlPipe.twiceCompValid) {
          switch(readStage.controlPipe.twiceMode) {
            is(U(0)) {
              when(readStage.mainOnePixelStream.payload >= readStage.mainTwoPixelStream.payload) { comparedControl.mainCompare.set() }
                .otherwise { comparedControl.mainCompare.clear() }
              when(readStage.counterTwoPixelStream.payload >= readStage.counterOnePixelStream.payload) { comparedControl.counterCompare.set() }
                .otherwise { comparedControl.counterCompare.clear() }
            }
            is(U(1)) {
              when(readStage.mainTwoPixelStream.payload >= readStage.mainOnePixelStream.payload) { comparedControl.mainCompare.set() }
                .otherwise { comparedControl.mainCompare.clear() }
              when(readStage.counterOnePixelStream.payload >= readStage.counterTwoPixelStream.payload) { comparedControl.counterCompare.set() }
                .otherwise { comparedControl.counterCompare.clear() }
            }
            is(U(2)) { comparedControl.mainCompare.set() }
            is(U(3)) {
              when(readStage.mainTwoPixelStream.payload >= readStage.counterTwoPixelStream.payload) { comparedControl.mainCompare.set() }
                .otherwise { comparedControl.mainCompare.clear() }
            }
            is(U(4)) { comparedControl.mainCompare.set() }
            is(U(5)) {
              when(readStage.mainOnePixelStream.payload >= readStage.counterOnePixelStream.payload) { comparedControl.mainCompare.set() }
                .otherwise { comparedControl.mainCompare.clear() }
            }
          }
        }
        comparedControl
      }
      .pipelined(true, true)
  }

  val diffStage = new Area {
    val mainOnePixelStream    = compareStage.mainOnePixelStream.pipelined(true, true)
    val counterOnePixelStream = compareStage.counterOnePixelStream.pipelined(true, true)
    val mainTwoPixelStream    = compareStage.mainTwoPixelStream.pipelined(true, true)
    val counterTwoPixelStream = compareStage.counterTwoPixelStream.pipelined(true, true)
    val controlPipe = compareStage.controlPipe
      .translateWith {
        val diffedControl = ControlSignal(config)
        diffedControl.assignSomeByName(compareStage.controlPipe.payload)
        when(compareStage.controlPipe.onceValid) {
          switch(compareStage.controlPipe.onceMode) {
            is(U(0)) {
              when(compareStage.controlPipe.mainCompare) { diffedControl.mainDiff := compareStage.mainOnePixelStream.payload - compareStage.counterOnePixelStream.payload }
                .otherwise { diffedControl.mainDiff := compareStage.counterOnePixelStream.payload - compareStage.mainOnePixelStream.payload }
            }
            is(U(1)) {
              when(compareStage.controlPipe.mainCompare) { diffedControl.mainDiff := compareStage.mainTwoPixelStream.payload - compareStage.counterTwoPixelStream.payload }
                .otherwise { diffedControl.mainDiff := compareStage.counterTwoPixelStream.payload - compareStage.mainTwoPixelStream.payload }
            }
            is(U(2)) {
              when(compareStage.controlPipe.mainCompare) { diffedControl.mainDiff := compareStage.mainOnePixelStream.payload - compareStage.mainTwoPixelStream.payload }
                .otherwise { diffedControl.mainDiff := compareStage.mainTwoPixelStream.payload - compareStage.mainOnePixelStream.payload }
            }
            is(U(3)) {
              when(compareStage.controlPipe.mainCompare) { diffedControl.mainDiff := compareStage.mainTwoPixelStream.payload - compareStage.mainOnePixelStream.payload }
                .otherwise { diffedControl.mainDiff := compareStage.mainOnePixelStream.payload - compareStage.mainTwoPixelStream.payload }
            }
            is(U(4)) { diffedControl.mainDiff := U(0).resized }
            is(U(5)) { diffedControl.mainDiff := U(0).resized }
          }
        }

        when(compareStage.controlPipe.twiceCompValid) {
          switch(compareStage.controlPipe.twiceMode) {
            is(U(0)) {
              when(compareStage.controlPipe.mainCompare) { diffedControl.mainDiff := compareStage.mainOnePixelStream.payload - compareStage.mainTwoPixelStream.payload }
                .otherwise { diffedControl.mainDiff := compareStage.mainTwoPixelStream.payload - compareStage.mainOnePixelStream.payload }
              when(compareStage.controlPipe.counterCompare) { diffedControl.counterDiff := compareStage.counterTwoPixelStream.payload - compareStage.counterOnePixelStream.payload }
                .otherwise { diffedControl.counterDiff := compareStage.counterOnePixelStream.payload - compareStage.counterTwoPixelStream.payload }

            }
            is(U(1)) {
              when(compareStage.controlPipe.mainCompare) { diffedControl.mainDiff := compareStage.mainTwoPixelStream.payload - compareStage.mainOnePixelStream.payload }
                .otherwise { diffedControl.mainDiff := compareStage.mainOnePixelStream.payload - compareStage.mainTwoPixelStream.payload }
              when(compareStage.controlPipe.counterCompare) { diffedControl.counterDiff := compareStage.counterOnePixelStream.payload - compareStage.counterTwoPixelStream.payload }
                .otherwise { diffedControl.counterDiff := compareStage.counterTwoPixelStream.payload - compareStage.counterOnePixelStream.payload }
            }
            is(U(2)) { diffedControl.mainDiff := U(0).resized }
            is(U(3)) {
              when(compareStage.controlPipe.mainCompare) { diffedControl.mainDiff := compareStage.mainTwoPixelStream.payload - compareStage.counterTwoPixelStream.payload }
                .otherwise { diffedControl.mainDiff := compareStage.counterTwoPixelStream.payload - compareStage.mainTwoPixelStream.payload }
            }
            is(U(4)) { diffedControl.mainDiff := U(0).resized }
            is(U(5)) {
              when(compareStage.controlPipe.mainCompare) { diffedControl.mainDiff := compareStage.mainOnePixelStream.payload - compareStage.counterOnePixelStream.payload }
                .otherwise { diffedControl.mainDiff := compareStage.counterOnePixelStream.payload - compareStage.mainOnePixelStream.payload }
            }
          }
        }
        diffedControl
      }
      .pipelined(true, true)
  }

  val resultStage = new Area {
    val mainOnePixelStream    = diffStage.mainOnePixelStream.pipelined(true, true)
    val counterOnePixelStream = diffStage.counterOnePixelStream.pipelined(true, true)
    val mainTwoPixelStream    = diffStage.mainTwoPixelStream.pipelined(true, true)
    val counterTwoPixelStream = diffStage.counterTwoPixelStream.pipelined(true, true)
    val forkControlPipe       = StreamFork(diffStage.controlPipe, 2, synchronous = true)
    val controlPipe           = forkControlPipe(0).pipelined(true, true)
    val pixelStream           = Stream(UInt(dW bits))
    val resultStream = pixelStream
      .translateFrom(forkControlPipe(1)) { (pixel, control) =>
        pixel.assignFromBits(B(0, dW bits))
        when(control.passValid) {
          when(control.passMode) { pixel := diffStage.mainTwoPixelStream.payload }
            .otherwise { pixel := diffStage.mainOnePixelStream.payload }
        }

        when(control.onceValid) {
          switch(control.onceMode) {
            is(U(0)) {
              when(control.mainDiff >= inpThreshold) { pixel := diffStage.mainOnePixelStream.payload }
                .otherwise { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
            }
            is(U(1)) {
              when(control.mainDiff >= inpThreshold) { pixel := diffStage.mainTwoPixelStream.payload }
                .otherwise { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
            }
            is(U(2)) {
              when(control.mainDiff >= inpThreshold) { pixel := diffStage.mainOnePixelStream.payload }
                .otherwise { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.mainTwoPixelStream.payload) / U(2)).resized }
            }
            is(U(3)) {
              when(control.mainDiff >= inpThreshold) { pixel := diffStage.mainTwoPixelStream.payload }
                .otherwise { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.mainOnePixelStream.payload) / U(2)).resized }
            }
            is(U(4)) { pixel := diffStage.mainTwoPixelStream.payload }
            is(U(5)) { pixel := diffStage.mainOnePixelStream.payload }
          }
        }

        when(control.twiceCompValid) {
          switch(control.twiceMode) {
            is(U(0)) {
              when(control.mainDiff >= inpThreshold && control.counterDiff >= inpThreshold) {
                when(control.mainDiff >= control.counterDiff) { pixel := diffStage.mainOnePixelStream.payload }
                  .otherwise { pixel := diffStage.counterTwoPixelStream.payload }
              }.otherwise {
                when(control.mainDiff >= control.counterDiff) { pixel := ((diffStage.counterOnePixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                  .otherwise { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.mainTwoPixelStream.payload) / U(2)).resized }
              }
            }
            is(U(1)) {
              when(control.mainDiff >= inpThreshold && control.counterDiff >= inpThreshold) {
                when(control.mainDiff >= control.counterDiff) { pixel := diffStage.mainTwoPixelStream.payload }
                  .otherwise { pixel := diffStage.counterOnePixelStream.payload }
              }.otherwise {
                when(control.mainDiff >= control.counterDiff) { pixel := ((diffStage.counterOnePixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                  .otherwise { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.mainTwoPixelStream.payload) / U(2)).resized }
              }
            }
            is(U(2)) { pixel := diffStage.mainTwoPixelStream.payload }
            is(U(3)) {
              when(control.mainDiff >= inpThreshold) { pixel := diffStage.mainTwoPixelStream.payload }
                .otherwise { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
            }
            is(U(4)) { pixel := diffStage.mainOnePixelStream.payload }
            is(U(5)) {
              when(control.mainDiff >= inpThreshold) { pixel := diffStage.mainOnePixelStream.payload }
                .otherwise { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
            }
          }
        }
      }
      .pipelined(true, true)
  }

  /* the pixelsOut logic */
  val resultsJoin = StreamJoin(
    Seq(
      resultStage.resultStream,
      resultStage.mainOnePixelStream,
      resultStage.counterOnePixelStream,
      resultStage.mainTwoPixelStream,
      resultStage.counterTwoPixelStream,
      resultStage.controlPipe
    )
  ).throwWhen(!resultStage.controlPipe.passValid && !resultStage.controlPipe.onceValid && !resultStage.controlPipe.twiceCompValid)

  io.pixelsOut.flattenForeach(_.allowOverride)
  val pixelsStream = Stream(io.pixelsOut.payloadType)
  pixelsStream.translateFrom(resultsJoin) { (data, _) =>
    data.pixel      := resultStage.resultStream.payload
    data.frameStart := resultStage.controlPipe.frameStart
    data.rowEnd     := resultStage.controlPipe.rowEnd
  }
  io.pixelsOut << pixelsStream.pipelined(m2s = true, s2m = true)

  /* control the write process by bufferEnable */
  io.pixelsIn.ready.allowOverride
  val passPixels = io.pixelsIn.pipelined(m2s = true, s2m = true).continueWhen(bufferEnable)
  passPixels.freeRun()

  bufferReachRowEnd.setWhen(bufferWAddr === bmpWidth - U(2) && passPixels.fire)
  bufferReachFinalRow.setWhen(bufferRowCount === bmpHeight - U(2) && bufferReachRowEnd && passPixels.fire)

  /* control the bufferRowCount */
  when(passPixels.rowEnd && passPixels.fire) {
    when(bufferReachFinalRow) {
      bufferRowCount.clear()
      bufferReuse.set()
      bufferReachRowEnd.clear()
      bufferReachFinalRow.clear()
    }.otherwise {
      bufferRowCount.increment()
      bufferReachRowEnd.clear()
    }
  }

  /* the bufferSwitch and bufferEnable logic */
  when(passPixels.rowEnd && passPixels.fire) { bufferSwitch := ~bufferSwitch }
  when(bufferRowCount =/= U(0) && passPixels.rowEnd && passPixels.fire) {
    holdBuffer.set()
    bufferEnable.clear()
    when(bufferReachFinalRow && bufferReachRowEnd) {
      writeDone.set()
      bufferEnable.clear()
    }
  }
  when(outRowCount % U(2) === U(1) && controlStream.rowEnd && controlStream.fire) {
    holdBuffer.clear()
    nextRowBuffer.toggleWhen(True)
  }

  /* the frameStart logic */
  when(passPixels.frameStart && passPixels.fire) { frameStart.set() }

  /* the startOut logic */
  io.startOut.allowOverride
  io.startOut := slaveStart

  /* the interComplete logic */
  io.inpDoneOut.allowOverride
  io.inpDoneOut := inpDone
  when(inpDone) { inpDone := False }

  /** *********************** write data to buffer logic ***************************************
    */

  lineBufferTwo.write(bufferWAddr, passPixels.pixel, passPixels.fire && bufferSwitch)
  lineBufferOne.write(bufferWAddr, passPixels.pixel, passPixels.fire && !bufferSwitch)

  when(passPixels.fire) {
    when(passPixels.rowEnd) { bufferWAddr.clear() }
      .otherwise { bufferWAddr.increment() }
  }

  /** ****************************StateMachine logic for read buffer ******************************
    */
  val controlStateMachine = new StateMachine {
    val HOLD              = StateEntryPoint()
    val PASS, ONCE, TWICE = State()

    HOLD.whenIsActive {
      when(outRowCount % U(2) === U(0)) {
        when(passPixels.fire) {
          when(outPixelAddr % U(2) === U(0)) { goto(PASS) }
            .otherwise { goto(ONCE) }
        }
      }.otherwise {
        when(passPixels.fire) {
          when(outPixelAddr % U(2) === U(0)) { goto(ONCE) }
            .otherwise { goto(TWICE) }
        }
      }
    }

    PASS.whenIsActive {
      controls.passValid.set()
      when(controlStream.fire) {
        when(U(2) * bufferRowCount > outRowCount || bufferReuse) { goto(ONCE) }
          .otherwise {
            when(U(2) * bufferWAddr === outPixelAddr +^ U(2) && !passPixels.fire) { goto(HOLD) }
              .otherwise { goto(ONCE) }
          }
      }

      when(nextRowBuffer) { controls.passMode.clear() }
        .otherwise { controls.passMode.set() }
      when(frameStart && controlStream.fire) { frameStart := False }
      when(frameStart) { controls.frameStart.set() }

      outReachRowEnd.setWhen(controlStream.fire && outPixelAddr === U(2) * bmpWidth - U(2))
      outReachFinalRow.setWhen(outReachRowEnd && outRowCount === U(2) * bmpHeight - U(2) && controlStream.fire)

      when(controlStream.fire && outReachRowEnd) {
        when(outReachFinalRow) {
          outRowCount.clear()
          startRead.clear()
          readDone.set()
          outReachRowEnd.clear()
          outReachFinalRow.clear()
        }.otherwise {
          outRowCount.increment()
          outReachRowEnd.clear()
        }
      }

      when(controlStream.fire) {
        when(outReachRowEnd) {
          outPixelAddr.clear()
          outReachRowEnd.clear()
        }.otherwise { outPixelAddr.increment() }
      }
      when(outReachRowEnd) { controls.rowEnd.set() }
    }

    ONCE.whenIsActive {
      controls.onceValid.set()
      when(outRowCount % U(2) === U(0)) {
        when(controlStream.fire) {
          when(outReachRowEnd) {
            when(bufferReuse) { goto(ONCE) }
              .otherwise {
                when(bufferWAddr === U(0) && U(2) + outRowCount === U(2) * bufferRowCount) { goto(HOLD) }
                  .otherwise { goto(ONCE) }
              }
          }.otherwise { goto(PASS) }
        }

        when(nextRowBuffer) {
          controls.onceMode := U(0).resized
          mainAddrOne       := ((outPixelAddr - U(1)) / U(2)).resized
          when(outReachRowEnd) { counterAddrOne := ((outPixelAddr - U(1)) / U(2)).resized }
            .otherwise { counterAddrOne := ((outPixelAddr +^ U(1)) / U(2)).resized }
        }.otherwise {
          controls.onceMode := U(1).resized
          mainAddrTwo       := ((outPixelAddr - U(1)) / U(2)).resized
          when(outReachRowEnd) { counterAddrTwo := ((outPixelAddr - U(1)) / U(2)).resized }
            .otherwise { counterAddrTwo := ((outPixelAddr +^ U(1)) / U(2)).resized }
        }
      }.otherwise {
        when(controlStream.fire) {
          when(bufferReuse)(goto(TWICE))
            .otherwise {
              when(U(2) * bufferWAddr === outPixelAddr +^ U(2) && !passPixels.fire) { goto(HOLD) }
                .otherwise { goto(TWICE) }
            }
        }
        when(outReachFinalRow) {
          when(nextRowBuffer) { controls.onceMode := U(5).resized }
            .otherwise { controls.onceMode := U(4).resized }
        }.otherwise {
          when(nextRowBuffer) { controls.onceMode := U(2).resized }
            .otherwise { controls.onceMode := U(3).resized }
        }
        mainAddrOne := (outPixelAddr / U(2)).resized
        mainAddrTwo := (outPixelAddr / U(2)).resized
      }

      outReachRowEnd.setWhen(controlStream.fire && outPixelAddr === U(2) * bmpWidth - U(2))
      outReachFinalRow.setWhen(outReachRowEnd && outRowCount === U(2) * bmpHeight - U(2) && controlStream.fire)

      when(controlStream.fire && outReachRowEnd) {
        when(outReachFinalRow) {
          outRowCount.clear()
          startRead.clear()
          readDone.set()
          outReachRowEnd.clear()
          outReachFinalRow.clear()
        }.otherwise {
          outRowCount.increment()
          outReachRowEnd.clear()
        }
      }

      when(controlStream.fire) {
        when(outReachRowEnd) {
          outPixelAddr.clear()
          outReachRowEnd.clear()
        }.otherwise { outPixelAddr.increment() }
      }
      when(outReachRowEnd) { controls.rowEnd.set() }

    }

    TWICE.whenIsActive {
      controls.twiceCompValid.set()
      when(controlStream.fire) {
        when(outReachRowEnd) {
          when(bufferReuse) { goto(PASS) }
            .otherwise {
              when(bufferWAddr === U(0)) { goto(HOLD) }
                .otherwise { goto(PASS) }
            }
        }.otherwise { goto(ONCE) }
      }

      when(outReachFinalRow) {
        when(nextRowBuffer) {
          when(outReachRowEnd) {
            controls.twiceMode := U(4)
            mainAddrOne        := ((outPixelAddr - U(1)) / U(2)).resized
          }.otherwise {
            controls.twiceMode := U(5)
            mainAddrOne        := ((outPixelAddr - U(1)) / U(2)).resized
            counterAddrOne     := ((outPixelAddr +^ U(1)) / U(2)).resized
          }
        }.otherwise {
          when(outReachRowEnd) {
            controls.twiceMode := U(2)
            mainAddrTwo        := ((outPixelAddr - U(1)) / U(2)).resized
          }.otherwise {
            controls.twiceMode := U(3)
            mainAddrTwo        := ((outPixelAddr - U(1)) / U(2)).resized
            counterAddrTwo     := ((outPixelAddr +^ U(1)) / U(2)).resized
          }
        }
      }.otherwise {
        when(nextRowBuffer) {
          controls.twiceMode := U(0)
          mainAddrOne        := ((outPixelAddr - U(1)) / U(2)).resized
          counterAddrTwo     := ((outPixelAddr - U(1)) / U(2)).resized
          when(outReachRowEnd) {
            mainAddrTwo    := ((outPixelAddr - U(1)) / U(2)).resized
            counterAddrOne := ((outPixelAddr - U(1)) / U(2)).resized
          }.otherwise {
            mainAddrTwo    := ((outPixelAddr +^ U(1)) / U(2)).resized
            counterAddrOne := ((outPixelAddr +^ U(1)) / U(2)).resized
          }
        }.otherwise {
          controls.twiceMode := U(1)
          mainAddrTwo        := ((outPixelAddr - U(1)) / U(2)).resized
          counterAddrOne     := ((outPixelAddr - U(1)) / U(2)).resized
          when(outReachRowEnd) {
            mainAddrOne    := ((outPixelAddr - U(1)) / U(2)).resized
            counterAddrTwo := ((outPixelAddr - U(1)) / U(2)).resized
          }.otherwise {
            mainAddrOne    := ((outPixelAddr +^ U(1)) / U(2)).resized
            counterAddrTwo := ((outPixelAddr +^ U(1)) / U(2)).resized
          }
        }
      }

      outReachRowEnd.setWhen(controlStream.fire && outPixelAddr === U(2) * bmpWidth - U(2))
      outReachFinalRow.setWhen(outReachRowEnd && outRowCount === U(2) * bmpHeight - U(2) && controlStream.fire)

      when(controlStream.fire && outReachRowEnd) {
        when(outReachFinalRow) {
          outRowCount.clear()
          startRead.clear()
          readDone.set()
          outReachRowEnd.clear()
          outReachFinalRow.clear()
        }.otherwise {
          outRowCount.increment()
          outReachRowEnd.clear()
        }
      }

      when(controlStream.fire) {
        when(outReachRowEnd) {
          outPixelAddr.clear()
          outReachRowEnd.clear()
        }.otherwise { outPixelAddr.increment() }
      }
      when(outReachRowEnd) { controls.rowEnd.set() }
    }

  }

}

object GenS extends App {
  SpinalVerilog(SuperResolutionPart1(IPConfig())).printPruned()
}
