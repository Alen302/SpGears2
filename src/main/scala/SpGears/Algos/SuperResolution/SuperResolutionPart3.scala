package SpGears.Algos.SuperResolution

import spinal.lib._
import spinal.core._
import spinal.lib.fsm._

case class ControlInfo(config: IPConfig) extends Bundle {
  def dW = config.dataW
  def sW = config.srcW

  val frameStart = Bool()
  val rowEnd     = Bool()

  val pipeValid = Bool()
  val firstRow  = Bool()
  val lastRow   = Bool()

  val finalResult = Bool()

  val mainCompare       = Bool()
  val counterCompare    = Bool()
  val horizontalCompare = Bool()
  val verticalCompare   = Bool()
  val mainDiff          = UInt(dW bits)
  val counterDiff       = UInt(dW bits)
  val horizontalDiff    = UInt(dW bits)
  val verticalDiff      = UInt(dW bits)

  val isHorizontalMin = Bool()
  val minDiff         = UInt(dW bits)

  val currentPosition = UInt(2 bits)
  val nextPosition    = UInt(2 bits)

  val horizontalDirectionValid = Bool()
  val verticalDirectionValid   = Bool()
  val mainDirectionValid       = Bool()
  val counterDirectionValid    = Bool()
  val inValidMinDiff           = Bool()

}

case class SuperResolutionPart3(config: IPConfig) extends Component {
  def dW = config.dataW

  def sW = config.srcW

  def sH = config.srcH

  val io = new Bundle {
    // from master
    val pixelsIn = slave Stream PixelData(config, isInternal = true)
    val startIn  = in Bool ()

    // to slave
    val pixelsOut = master Stream PixelData(config)

    // to master
    val inpThreeDoneOut = out Bool ()

    // wait for axi-lite config signal
    val thresholdIn = in UInt (dW bits)
    val widthIn     = in UInt (log2Up(sW + 1) bits)
    val heightIn    = in UInt (log2Up(sH + 1) bits)
  }
  noIoPrefix()

  /* set the initial state */
  io.setInvalid()

  /* the signal indicate this part interpolation is complete */
  val inpThreeDone = RegInit(False).clearWhen(io.startIn.fall())

  /* this signal can be use to hold the startRead signal */
  val readDone = RegInit(False).clearWhen(inpThreeDone || io.startIn.fall())

  /* the signal which start read buffer */
  val startRead = RegInit(False).setWhen(io.startIn && !readDone).clearWhen(io.startIn.fall())

  /* register the frame start signal */
  val frameStart = RegInit(False)

  /* register the threshold */
  val inpThreshold = RegNext(io.thresholdIn).init(U(128, dW bits))

  /* input bmp picture width */
  val bmpWidth = RegNext(io.widthIn).init(U(sW, log2Up(sW + 1) bits))

  /* input bmp picture height */
  val bmpHeight = RegNext(io.heightIn).init(U(sH, log2Up(sH + 1) bits))

  /* this signal can be use to halt the dataIn */
  val holdBuffer = RegInit(False).clearWhen(!io.startIn)

  /* indicate write buffer done for given size */
  val writeDone = RegInit(False).clearWhen(inpThreeDone)

  /* record the number of row which is buffered */
  val bufferRowCount = Counter(4 * sH + 1)

  /* the write enable signal of lineBuffer*/
  val bufferEnable = RegInit(False).setWhen(io.startIn && !holdBuffer && !writeDone).clearWhen(!io.startIn || holdBuffer || writeDone)

  /* when this signal is True, it means that the dataIn should be store in lineBufferTwo when we can receive dataIn */
  val bufferSwitch = RegInit(U(0, 2 bits))

  /* indicate which lineBuffer is next buffer after current out buffer */
  val nextRowBuffer = RegInit(U(1, 2 bits))

  /* indicate which is out buffer */
  val currentRowBuffer = RegInit(U(0, 2 bits))

  /* indicate buffer reuse for padding */
  val bufferReuse = RegInit(False).clearWhen(inpThreeDone)

  /* address Counter for write data to buffer */
  val bufferWAddr = Counter(4 * sW)

  /* address Counter for output pixels */
  val outPixelAddr = Counter(4 * sW)

  /* the number of row which is already output*/
  val outRowCount = Counter(4 * sH + 1)

  /* some flag signals */
  val outReachRowEnd   = RegInit(False)
  val outReachFinalRow = RegInit(False)

  val bufferReachRowEnd   = RegInit(False)
  val bufferReachFinalRow = RegInit(False)

  /* the reg for storing pipeline information */
  val minDiff               = RegInit(U(0, dW bits))
  val candidatePixel        = RegInit(U(0, dW bits))
  val isHorizontalDirection = RegInit(False)
  val inValidMinDiff        = RegInit(False)

  /* the following lineBuffer is used to store three line pixels of source bmp */
  val lineBufferOne   = Mem(UInt(dW bits), 4 * sW).init(Seq.fill(4 * sW)(U(0).resized))
  val lineBufferTwo   = Mem(UInt(dW bits), 4 * sW).init(Seq.fill(4 * sW)(U(0).resized))
  val lineBufferThree = Mem(UInt(dW bits), 4 * sW).init(Seq.fill(4 * sW)(U(0).resized))

  val validBufferOne   = Mem(Bool(), 4 * sW).init(Seq.fill(4 * sW)(True))
  val validBufferTwo   = Mem(Bool(), 4 * sW).init(Seq.fill(4 * sW)(True))
  val validBufferThree = Mem(Bool(), 4 * sW).init(Seq.fill(4 * sW)(True))

  // for initial state
  when(!startRead || io.startIn.fall()) {
    bufferSwitch.clearAll()
    nextRowBuffer := U(1).resized
    currentRowBuffer.clearAll()
    minDiff.clearAll()
    candidatePixel.clearAll()
    isHorizontalDirection.clear()
  }

  /* the address for read lineBufferOne and lineBufferTwo and lineBufferOdd */
  val mainAddrOne      = UInt(log2Up(4 * sW) bits)
  val counterAddrOne   = UInt(log2Up(4 * sW) bits)
  val mainAddrTwo      = UInt(log2Up(4 * sW) bits)
  val counterAddrTwo   = UInt(log2Up(4 * sW) bits)
  val mainAddrThree    = UInt(log2Up(4 * sW) bits)
  val counterAddrThree = UInt(log2Up(4 * sW) bits)

  mainAddrOne      := outPixelAddr
  counterAddrOne   := outPixelAddr
  mainAddrTwo      := outPixelAddr
  counterAddrTwo   := outPixelAddr
  mainAddrThree    := outPixelAddr
  counterAddrThree := outPixelAddr

  /* define a drive stream for valid */
  val validStream = Event
  validStream.valid.set()
  validStream.ready.allowOverride

  /* pipelineStream convey the information through the stream pipeline */
  val controlStream = Stream(ControlInfo(config))

  val controls = ControlInfo(config)

  // the empty pipeline operation
  controls.assignFromBits(B(0, controls.getBitsWidth bits))
  controlStream.translateFrom(validStream.continueWhen(startRead)) { (pipe, _) => pipe := controls }

  /* the address Stream for read buffer */
  val mainPixelAddrOneStream      = Stream(UInt(log2Up(4 * sW) bits))
  val counterPixelAddrOneStream   = Stream(UInt(log2Up(4 * sW) bits))
  val mainPixelAddrTwoStream      = Stream(UInt(log2Up(4 * sW) bits))
  val counterPixelAddrTwoStream   = Stream(UInt(log2Up(4 * sW) bits))
  val mainPixelAddrThreeStream    = Stream(UInt(log2Up(4 * sW) bits))
  val counterPixelAddrThreeStream = Stream(UInt(log2Up(4 * sW) bits))

  val mainValidAddrOneStream      = Stream(UInt(log2Up(4 * sW) bits))
  val counterValidAddrOneStream   = Stream(UInt(log2Up(4 * sW) bits))
  val mainValidAddrTwoStream      = Stream(UInt(log2Up(4 * sW) bits))
  val counterValidAddrTwoStream   = Stream(UInt(log2Up(4 * sW) bits))
  val mainValidAddrThreeStream    = Stream(UInt(log2Up(4 * sW) bits))
  val counterValidAddrThreeStream = Stream(UInt(log2Up(4 * sW) bits))

  mainPixelAddrOneStream.translateFrom(validStream.continueWhen(startRead)) { (addr, _) => addr := mainAddrOne }
  counterPixelAddrOneStream.translateFrom(validStream.continueWhen(startRead)) { (addr, _) => addr := counterAddrOne }
  mainPixelAddrTwoStream.translateFrom(validStream.continueWhen(startRead)) { (addr, _) => addr := mainAddrTwo }
  counterPixelAddrTwoStream.translateFrom(validStream.continueWhen(startRead)) { (addr, _) => addr := counterAddrTwo }
  mainPixelAddrThreeStream.translateFrom(validStream.continueWhen(startRead)) { (addr, _) => addr := mainAddrThree }
  counterPixelAddrThreeStream.translateFrom(validStream.continueWhen(startRead)) { (addr, _) => addr := counterAddrThree }

  mainValidAddrOneStream.translateFrom(validStream.continueWhen(startRead)) { (addr, _) => addr := mainAddrOne }
  counterValidAddrOneStream.translateFrom(validStream.continueWhen(startRead)) { (addr, _) => addr := counterAddrOne }
  mainValidAddrTwoStream.translateFrom(validStream.continueWhen(startRead)) { (addr, _) => addr := mainAddrTwo }
  counterValidAddrTwoStream.translateFrom(validStream.continueWhen(startRead)) { (addr, _) => addr := counterAddrTwo }
  mainValidAddrThreeStream.translateFrom(validStream.continueWhen(startRead)) { (addr, _) => addr := mainAddrThree }
  counterValidAddrThreeStream.translateFrom(validStream.continueWhen(startRead)) { (addr, _) => addr := counterAddrThree }

  /* control the write process by bufferEnable */
  io.pixelsIn.ready.allowOverride
  val passPixels = io.pixelsIn.pipelined(m2s = true, s2m = true).continueWhen(bufferEnable)
  passPixels.freeRun()

  bufferReachRowEnd.setWhen(bufferWAddr === U(4) * bmpWidth - U(2) && passPixels.fire)
  bufferReachFinalRow.setWhen(bufferRowCount === U(4) * bmpHeight - U(2) && bufferReachRowEnd && passPixels.fire)

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
  when(passPixels.rowEnd && passPixels.fire) {
    when(bufferSwitch === U(2)) {
      bufferSwitch := U(0, 2 bits)
    }.otherwise {
      bufferSwitch := bufferSwitch + U(1)
    }
  }

  when(bufferRowCount >= U(2) && passPixels.rowEnd && passPixels.fire) {
    holdBuffer.set()
    bufferEnable.clear()

    when(bufferReachFinalRow && bufferReachRowEnd) {
      writeDone.set()
      bufferEnable.clear()
    }
  }

  /* the frameStart logic */
  when(passPixels.frameStart && passPixels.fire) { frameStart.set() }

  /* the interComplete logic */
  io.inpThreeDoneOut.allowOverride
  io.inpThreeDoneOut := inpThreeDone

  /** *********************** write data to buffer logic ***************************************
    */

  lineBufferOne.write(bufferWAddr, passPixels.pixel, passPixels.fire && bufferSwitch === U(0))
  lineBufferTwo.write(bufferWAddr, passPixels.pixel, passPixels.fire && bufferSwitch === U(1))
  lineBufferThree.write(bufferWAddr, passPixels.pixel, passPixels.fire && bufferSwitch === U(2))

  validBufferOne.write(bufferWAddr, passPixels.inpValid, passPixels.fire && bufferSwitch === U(0))
  validBufferTwo.write(bufferWAddr, passPixels.inpValid, passPixels.fire && bufferSwitch === U(1))
  validBufferThree.write(bufferWAddr, passPixels.inpValid, passPixels.fire && bufferSwitch === U(2))

  when(passPixels.fire) {
    when(passPixels.rowEnd) { bufferWAddr.clear() }
      .otherwise { bufferWAddr.increment() }
  }

  /** *************************** interpolation pipeline ****************************************
    */

  // read Stage
  val readStage = new Area {
    val mainOnePixelStream      = lineBufferOne.streamReadSync(mainPixelAddrOneStream)
    val counterOnePixelStream   = lineBufferOne.streamReadSync(counterPixelAddrOneStream)
    val mainTwoPixelStream      = lineBufferTwo.streamReadSync(mainPixelAddrTwoStream)
    val counterTwoPixelStream   = lineBufferTwo.streamReadSync(counterPixelAddrTwoStream)
    val mainThreePixelStream    = lineBufferThree.streamReadSync(mainPixelAddrThreeStream)
    val counterThreePixelStream = lineBufferThree.streamReadSync(counterPixelAddrThreeStream)

    val mainOneValidStream      = validBufferOne.streamReadSync(mainValidAddrOneStream)
    val counterOneValidStream   = validBufferOne.streamReadSync(counterValidAddrOneStream)
    val mainTwoValidStream      = validBufferTwo.streamReadSync(mainValidAddrTwoStream)
    val counterTwoValidStream   = validBufferTwo.streamReadSync(counterValidAddrTwoStream)
    val mainThreeValidStream    = validBufferThree.streamReadSync(mainValidAddrThreeStream)
    val counterThreeValidStream = validBufferThree.streamReadSync(counterValidAddrThreeStream)

    val controlPipe = controlStream.stage()
  }

  val compareStage = new Area {
    val mainOnePixelStream      = readStage.mainOnePixelStream.stage()
    val counterOnePixelStream   = readStage.counterOnePixelStream.stage()
    val mainTwoPixelStream      = readStage.mainTwoPixelStream.stage()
    val counterTwoPixelStream   = readStage.counterTwoPixelStream.stage()
    val mainThreePixelStream    = readStage.mainThreePixelStream.stage()
    val counterThreePixelStream = readStage.counterThreePixelStream.stage()

    val mainOneValidStream      = readStage.mainOneValidStream.stage()
    val counterOneValidStream   = readStage.counterOneValidStream.stage()
    val mainTwoValidStream      = readStage.mainTwoValidStream.stage()
    val counterTwoValidStream   = readStage.counterTwoValidStream.stage()
    val mainThreeValidStream    = readStage.mainThreeValidStream.stage()
    val counterThreeValidStream = readStage.counterThreeValidStream.stage()

    val controlPipe = readStage.controlPipe
      .translateWith {
        val comparedControl = ControlInfo(config)
        comparedControl.assignSomeByName(readStage.controlPipe.payload)
        when(readStage.controlPipe.finalResult) {
          when(readStage.controlPipe.firstRow || readStage.controlPipe.lastRow) { comparedControl.verticalCompare.set() }
            .otherwise {
              when(readStage.controlPipe.currentPosition === U(0)) {
                when(readStage.mainTwoPixelStream.payload >= readStage.mainThreePixelStream.payload) { comparedControl.verticalCompare.set() }
                  .otherwise { comparedControl.verticalCompare.clear() }
              }.elsewhen(readStage.controlPipe.currentPosition === U(1)) {
                when(readStage.mainOnePixelStream.payload >= readStage.mainThreePixelStream.payload) { comparedControl.verticalCompare.set() }
                  .otherwise { comparedControl.verticalCompare.clear() }
              }.otherwise {
                when(readStage.mainOnePixelStream.payload >= readStage.mainTwoPixelStream.payload) { comparedControl.verticalCompare.set() }
                  .otherwise { comparedControl.verticalCompare.clear() }
              }
            }

          when(readStage.controlPipe.currentPosition === U(0)) {
            when(readStage.controlPipe.nextPosition === U(1)) {
              when(readStage.controlPipe.firstRow) {
                when(readStage.mainTwoValidStream.payload) { comparedControl.verticalDirectionValid.set() }
                  .otherwise { comparedControl.verticalDirectionValid.clear() }
              }.elsewhen(readStage.controlPipe.lastRow) {
                when(readStage.mainThreeValidStream.payload) { comparedControl.verticalDirectionValid.set() }
                  .otherwise { comparedControl.verticalDirectionValid.clear() }
              }.otherwise {
                when(readStage.mainTwoValidStream.payload && readStage.mainThreeValidStream.payload) { comparedControl.verticalDirectionValid.set() }
                  .otherwise { comparedControl.verticalDirectionValid.clear() }
              }
            }.otherwise {
              when(readStage.controlPipe.lastRow) {
                when(readStage.mainTwoValidStream.payload) { comparedControl.verticalDirectionValid.set() }
                  .otherwise { comparedControl.verticalDirectionValid.clear() }
              }.otherwise {
                when(readStage.mainTwoValidStream.payload && readStage.mainThreeValidStream.payload) { comparedControl.verticalDirectionValid.set() }
                  .otherwise { comparedControl.verticalDirectionValid.clear() }
              }
            }
          }.elsewhen(readStage.controlPipe.currentPosition === U(1)) {
            when(readStage.controlPipe.nextPosition === U(0)) {
              when(readStage.controlPipe.lastRow) {
                when(readStage.mainThreeValidStream.payload) { comparedControl.verticalDirectionValid.set() }
                  .otherwise { comparedControl.verticalDirectionValid.clear() }
              }.otherwise {
                when(readStage.mainOneValidStream.payload && readStage.mainThreeValidStream.payload) { comparedControl.verticalDirectionValid.set() }
                  .otherwise { comparedControl.verticalDirectionValid.clear() }
              }
            }.otherwise {
              when(readStage.controlPipe.lastRow) {
                when(readStage.mainOneValidStream.payload) { comparedControl.verticalDirectionValid.set() }
                  .otherwise { comparedControl.verticalDirectionValid.clear() }
              }.otherwise {
                when(readStage.mainOneValidStream.payload && readStage.mainThreeValidStream.payload) { comparedControl.verticalDirectionValid.set() }
                  .otherwise { comparedControl.verticalDirectionValid.clear() }
              }
            }
          }.otherwise {
            when(readStage.controlPipe.nextPosition === U(0)) {
              when(readStage.controlPipe.lastRow) {
                when(readStage.mainTwoValidStream.payload) { comparedControl.verticalDirectionValid.set() }
                  .otherwise { comparedControl.verticalDirectionValid.clear() }
              }.otherwise {
                when(readStage.mainOneValidStream.payload && readStage.mainTwoValidStream.payload) { comparedControl.verticalDirectionValid.set() }
                  .otherwise { comparedControl.verticalDirectionValid.clear() }
              }
            }.otherwise {
              when(readStage.controlPipe.lastRow) {
                when(readStage.mainOneValidStream.payload) { comparedControl.verticalDirectionValid.set() }
                  .otherwise { comparedControl.verticalDirectionValid.clear() }
              }.otherwise {
                when(readStage.mainOneValidStream.payload && readStage.mainTwoValidStream.payload) { comparedControl.verticalDirectionValid.set() }
                  .otherwise { comparedControl.verticalDirectionValid.clear() }
              }
            }
          }
        }.otherwise {
          when(readStage.controlPipe.currentPosition === U(0)) {
            when(readStage.mainOneValidStream.payload && readStage.counterOneValidStream.payload) { comparedControl.horizontalDirectionValid.set() }
              .otherwise { comparedControl.horizontalDirectionValid.clear() }

            when(readStage.mainOnePixelStream.payload >= readStage.counterOnePixelStream.payload) { comparedControl.horizontalCompare.set() }
              .otherwise { comparedControl.horizontalCompare.clear() }

            when(readStage.controlPipe.nextPosition === U(1)) {
              when(readStage.controlPipe.firstRow) {
                when(readStage.mainTwoValidStream.payload && readStage.counterTwoValidStream.payload) {
                  comparedControl.mainDirectionValid.set()
                  comparedControl.counterDirectionValid.set()
                }.otherwise {
                  comparedControl.mainDirectionValid.clear()
                  comparedControl.counterDirectionValid.clear()
                }

                when(readStage.mainTwoPixelStream.payload >= readStage.counterTwoPixelStream.payload) {
                  comparedControl.mainCompare.set()
                  comparedControl.counterCompare.set()
                }.otherwise {
                  comparedControl.mainCompare.clear()
                  comparedControl.counterCompare.clear()
                }
              }
                .elsewhen(readStage.controlPipe.lastRow) {
                  when(readStage.mainThreeValidStream.payload && readStage.counterThreeValidStream.payload) {
                    comparedControl.mainDirectionValid.set()
                    comparedControl.counterDirectionValid.set()
                  }.otherwise {
                    comparedControl.mainDirectionValid.clear()
                    comparedControl.counterDirectionValid.clear()
                  }

                  when(readStage.mainThreePixelStream.payload >= readStage.counterThreePixelStream.payload) {
                    comparedControl.mainCompare.set()
                    comparedControl.counterCompare.set()
                  }.otherwise {
                    comparedControl.mainCompare.clear()
                    comparedControl.counterCompare.clear()
                  }
                }
                .otherwise {
                  when(readStage.mainThreeValidStream.payload && readStage.counterTwoValidStream.payload) { comparedControl.mainDirectionValid.set() }
                    .otherwise { comparedControl.mainDirectionValid.clear() }
                  when(readStage.mainTwoValidStream.payload && readStage.counterThreeValidStream.payload) { comparedControl.counterDirectionValid.set() }
                    .otherwise { comparedControl.counterDirectionValid.clear() }

                  when(readStage.mainThreePixelStream.payload >= readStage.counterTwoPixelStream.payload) { comparedControl.mainCompare.set() }
                    .otherwise { comparedControl.mainCompare.clear() }
                  when(readStage.mainTwoPixelStream.payload >= readStage.counterThreePixelStream.payload) { comparedControl.counterCompare.set() }
                    .otherwise { comparedControl.counterCompare.clear() }
                }
            }.otherwise {
              when(readStage.controlPipe.lastRow) {
                when(readStage.mainTwoValidStream.payload && readStage.counterTwoValidStream.payload) {
                  comparedControl.mainDirectionValid.set()
                  comparedControl.counterDirectionValid.set()
                }.otherwise {
                  comparedControl.mainDirectionValid.clear()
                  comparedControl.counterDirectionValid.clear()
                }
                when(readStage.mainTwoPixelStream.payload >= readStage.counterTwoPixelStream.payload) {
                  comparedControl.mainCompare.set()
                  comparedControl.counterCompare.set()
                }.otherwise {
                  comparedControl.mainCompare.clear()
                  comparedControl.counterCompare.clear()
                }
              }.otherwise {
                when(readStage.mainTwoValidStream.payload && readStage.counterThreeValidStream.payload) { comparedControl.mainDirectionValid.set() }
                  .otherwise { comparedControl.mainDirectionValid.clear() }
                when(readStage.mainThreeValidStream.payload && readStage.counterTwoValidStream.payload) { comparedControl.counterDirectionValid.set() }
                  .otherwise { comparedControl.counterDirectionValid.clear() }

                when(readStage.mainTwoPixelStream.payload >= readStage.counterThreePixelStream.payload) { comparedControl.mainCompare.set() }
                  .otherwise { comparedControl.mainCompare.clear() }
                when(readStage.mainThreePixelStream.payload >= readStage.counterTwoPixelStream.payload) { comparedControl.counterCompare.set() }
                  .otherwise { comparedControl.counterCompare.clear() }
              }
            }
          }.elsewhen(readStage.controlPipe.currentPosition === U(1)) {
            when(readStage.mainTwoValidStream.payload && readStage.counterTwoValidStream.payload) { comparedControl.horizontalDirectionValid.set() }
              .otherwise { comparedControl.horizontalDirectionValid.clear() }

            when(readStage.mainTwoPixelStream.payload >= readStage.counterTwoPixelStream.payload) { comparedControl.horizontalCompare.set() }
              .otherwise { comparedControl.horizontalCompare.clear() }
            when(readStage.controlPipe.nextPosition === U(0)) {
              when(readStage.controlPipe.lastRow) {
                when(readStage.mainThreeValidStream.payload && readStage.counterThreeValidStream.payload) {
                  comparedControl.mainDirectionValid.set()
                  comparedControl.counterDirectionValid.set()
                }.otherwise {
                  comparedControl.mainDirectionValid.clear()
                  comparedControl.counterDirectionValid.clear()
                }
                when(readStage.mainThreePixelStream.payload >= readStage.counterThreePixelStream.payload) {
                  comparedControl.mainCompare.set()
                  comparedControl.counterCompare.set()
                }.otherwise {
                  comparedControl.mainCompare.clear()
                  comparedControl.counterCompare.clear()
                }
              }.otherwise {
                when(readStage.mainThreeValidStream.payload && readStage.counterOneValidStream.payload) { comparedControl.mainDirectionValid.set() }
                  .otherwise { comparedControl.mainDirectionValid.clear() }
                when(readStage.mainOneValidStream.payload && readStage.counterThreeValidStream.payload) { comparedControl.counterDirectionValid.set() }
                  .otherwise { comparedControl.counterDirectionValid.clear() }

                when(readStage.mainThreePixelStream.payload >= readStage.counterOnePixelStream.payload) { comparedControl.mainCompare.set() }
                  .otherwise { comparedControl.mainCompare.clear() }
                when(readStage.mainOnePixelStream.payload >= readStage.counterThreePixelStream.payload) { comparedControl.counterCompare.set() }
                  .otherwise { comparedControl.counterCompare.clear() }
              }
            }.otherwise {
              when(readStage.controlPipe.lastRow) {
                when(readStage.mainOneValidStream.payload && readStage.counterOneValidStream.payload) {
                  comparedControl.mainDirectionValid.set()
                  comparedControl.counterDirectionValid.set()
                }.otherwise {
                  comparedControl.mainDirectionValid.clear()
                  comparedControl.counterDirectionValid.clear()
                }

                when(readStage.mainOnePixelStream.payload >= readStage.counterOnePixelStream.payload) {
                  comparedControl.mainCompare.set()
                  comparedControl.counterCompare.set()
                }.otherwise {
                  comparedControl.mainCompare.clear()
                  comparedControl.counterCompare.clear()
                }
              }.otherwise {
                when(readStage.mainOneValidStream.payload && readStage.counterThreeValidStream.payload) { comparedControl.mainDirectionValid.set() }
                  .otherwise { comparedControl.mainDirectionValid.clear() }
                when(readStage.mainThreeValidStream.payload && readStage.counterOneValidStream.payload) { comparedControl.counterDirectionValid.set() }
                  .otherwise { comparedControl.counterDirectionValid.clear() }

                when(readStage.mainOnePixelStream.payload >= readStage.counterThreePixelStream.payload) { comparedControl.mainCompare.set() }
                  .otherwise { comparedControl.mainCompare.clear() }
                when(readStage.mainThreePixelStream.payload >= readStage.counterOnePixelStream.payload) { comparedControl.counterCompare.set() }
                  .otherwise { comparedControl.counterCompare.clear() }
              }
            }
          }.otherwise {
            when(readStage.mainThreeValidStream.payload && readStage.counterThreeValidStream.payload) { comparedControl.horizontalDirectionValid.set() }
              .otherwise { comparedControl.horizontalDirectionValid.clear() }

            when(readStage.mainThreePixelStream.payload >= readStage.counterThreePixelStream.payload) { comparedControl.horizontalCompare.set() }
              .otherwise { comparedControl.horizontalCompare.clear() }
            when(readStage.controlPipe.nextPosition === U(0)) {
              when(readStage.controlPipe.lastRow) {
                when(readStage.mainTwoValidStream.payload && readStage.counterTwoValidStream.payload) {
                  comparedControl.mainDirectionValid.set()
                  comparedControl.counterDirectionValid.set()
                }.otherwise {
                  comparedControl.mainDirectionValid.clear()
                  comparedControl.counterDirectionValid.clear()
                }
                when(readStage.mainTwoPixelStream.payload >= readStage.counterTwoPixelStream.payload) {
                  comparedControl.mainCompare.set()
                  comparedControl.counterCompare.set()
                }.otherwise {
                  comparedControl.mainCompare.clear()
                  comparedControl.counterCompare.clear()
                }
              }.otherwise {
                when(readStage.mainTwoValidStream.payload && readStage.counterOneValidStream.payload) { comparedControl.mainDirectionValid.set() }
                  .otherwise { comparedControl.mainDirectionValid.clear() }
                when(readStage.mainOneValidStream.payload && readStage.counterTwoValidStream.payload) { comparedControl.counterDirectionValid.set() }
                  .otherwise { comparedControl.counterDirectionValid.clear() }

                when(readStage.mainTwoPixelStream.payload >= readStage.counterOnePixelStream.payload) { comparedControl.mainCompare.set() }
                  .otherwise { comparedControl.mainCompare.clear() }
                when(readStage.mainOnePixelStream.payload >= readStage.counterTwoPixelStream.payload) { comparedControl.counterCompare.set() }
                  .otherwise { comparedControl.counterCompare.clear() }
              }
            }.otherwise {
              when(readStage.controlPipe.lastRow) {
                when(readStage.mainOneValidStream.payload && readStage.counterOneValidStream.payload) {
                  comparedControl.mainDirectionValid.set()
                  comparedControl.counterDirectionValid.set()
                }.otherwise {
                  comparedControl.mainDirectionValid.clear()
                  comparedControl.counterDirectionValid.clear()
                }

                when(readStage.mainOnePixelStream.payload >= readStage.counterOnePixelStream.payload) {
                  comparedControl.mainCompare.set()
                  comparedControl.counterCompare.set()
                }.otherwise {
                  comparedControl.mainCompare.clear()
                  comparedControl.counterCompare.clear()
                }
              }.otherwise {
                when(readStage.mainOneValidStream.payload && readStage.counterTwoValidStream.payload) { comparedControl.mainDirectionValid.set() }
                  .otherwise { comparedControl.mainDirectionValid.clear() }
                when(readStage.mainTwoValidStream.payload && readStage.counterOneValidStream.payload) { comparedControl.counterDirectionValid.set() }
                  .otherwise { comparedControl.counterDirectionValid.clear() }

                when(readStage.mainOnePixelStream.payload >= readStage.counterTwoPixelStream.payload) { comparedControl.mainCompare.set() }
                  .otherwise { comparedControl.mainCompare.clear() }
                when(readStage.mainTwoPixelStream.payload >= readStage.counterOnePixelStream.payload) { comparedControl.counterCompare.set() }
                  .otherwise { comparedControl.counterCompare.clear() }
              }
            }
          }
        }
        comparedControl
      }
      .stage()
  }

  val diffStage = new Area {
    val mainOnePixelStream      = compareStage.mainOnePixelStream.stage()
    val counterOnePixelStream   = compareStage.counterOnePixelStream.stage()
    val mainTwoPixelStream      = compareStage.mainTwoPixelStream.stage()
    val counterTwoPixelStream   = compareStage.counterTwoPixelStream.stage()
    val mainThreePixelStream    = compareStage.mainThreePixelStream.stage()
    val counterThreePixelStream = compareStage.counterThreePixelStream.stage()

    val mainOneValidStream      = compareStage.mainOneValidStream.stage()
    val counterOneValidStream   = compareStage.counterOneValidStream.stage()
    val mainTwoValidStream      = compareStage.mainTwoValidStream.stage()
    val counterTwoValidStream   = compareStage.counterTwoValidStream.stage()
    val mainThreeValidStream    = compareStage.mainThreeValidStream.stage()
    val counterThreeValidStream = compareStage.counterThreeValidStream.stage()

    val controlPipe = compareStage.controlPipe
      .translateWith {
        val diffedControl = ControlInfo(config)
        diffedControl.assignSomeByName(compareStage.controlPipe.payload)
        when(compareStage.controlPipe.finalResult) {
          when(compareStage.controlPipe.firstRow || compareStage.controlPipe.lastRow) { diffedControl.verticalDiff := U(0).resized }
            .otherwise {
              when(compareStage.controlPipe.currentPosition === U(0)) {
                when(compareStage.controlPipe.verticalCompare) { diffedControl.verticalDiff := compareStage.mainTwoPixelStream.payload - compareStage.mainThreePixelStream.payload }
                  .otherwise { diffedControl.verticalDiff := compareStage.mainThreePixelStream.payload - compareStage.mainTwoPixelStream.payload }
              }.elsewhen(compareStage.controlPipe.currentPosition === U(1)) {
                when(compareStage.controlPipe.verticalCompare) { diffedControl.verticalDiff := compareStage.mainOnePixelStream.payload - compareStage.mainThreePixelStream.payload }
                  .otherwise { diffedControl.verticalDiff := compareStage.mainThreePixelStream.payload - compareStage.mainOnePixelStream.payload }
              }.otherwise {
                when(compareStage.controlPipe.verticalCompare) { diffedControl.verticalDiff := compareStage.mainOnePixelStream.payload - compareStage.mainTwoPixelStream.payload }
                  .otherwise { diffedControl.verticalDiff := compareStage.mainTwoPixelStream.payload - compareStage.mainOnePixelStream.payload }
              }
            }
        }.otherwise {
          when(compareStage.controlPipe.currentPosition === U(0)) {
            when(compareStage.controlPipe.horizontalCompare) { diffedControl.horizontalDiff := compareStage.mainOnePixelStream.payload - compareStage.counterOnePixelStream.payload }
              .otherwise { diffedControl.horizontalDiff := compareStage.counterOnePixelStream.payload - compareStage.mainOnePixelStream.payload }
            when(compareStage.controlPipe.nextPosition === U(1)) {
              when(compareStage.controlPipe.firstRow) {
                when(compareStage.controlPipe.mainCompare) { diffedControl.mainDiff := compareStage.mainTwoPixelStream.payload - compareStage.counterTwoPixelStream.payload }
                  .otherwise { diffedControl.mainDiff := compareStage.counterTwoPixelStream.payload - compareStage.mainTwoPixelStream.payload }
                when(compareStage.controlPipe.counterCompare) { diffedControl.counterDiff := compareStage.mainTwoPixelStream.payload - compareStage.counterTwoPixelStream.payload }
                  .otherwise { diffedControl.counterDiff := compareStage.counterTwoPixelStream.payload - compareStage.mainTwoPixelStream.payload }
              }.elsewhen(compareStage.controlPipe.lastRow) {
                when(compareStage.controlPipe.mainCompare) { diffedControl.mainDiff := compareStage.mainThreePixelStream.payload - compareStage.counterThreePixelStream.payload }
                  .otherwise { diffedControl.mainDiff := compareStage.counterThreePixelStream.payload - compareStage.mainThreePixelStream.payload }
                when(compareStage.controlPipe.counterCompare) { diffedControl.counterDiff := compareStage.mainThreePixelStream.payload - compareStage.counterThreePixelStream.payload }
                  .otherwise { diffedControl.counterDiff := compareStage.counterThreePixelStream.payload - compareStage.mainThreePixelStream.payload }
              }.otherwise {
                when(compareStage.controlPipe.mainCompare) { diffedControl.mainDiff := compareStage.mainThreePixelStream.payload - compareStage.counterTwoPixelStream.payload }
                  .otherwise { diffedControl.mainDiff := compareStage.counterTwoPixelStream.payload - compareStage.mainThreePixelStream.payload }
                when(compareStage.controlPipe.counterCompare) { diffedControl.counterDiff := compareStage.mainTwoPixelStream.payload - compareStage.counterThreePixelStream.payload }
                  .otherwise { diffedControl.counterDiff := compareStage.counterThreePixelStream.payload - compareStage.mainTwoPixelStream.payload }
              }
            }.otherwise {
              when(compareStage.controlPipe.lastRow) {
                when(compareStage.controlPipe.mainCompare) { diffedControl.mainDiff := compareStage.mainTwoPixelStream.payload - compareStage.counterTwoPixelStream.payload }
                  .otherwise { diffedControl.mainDiff := compareStage.counterTwoPixelStream.payload - compareStage.mainTwoPixelStream.payload }
                when(compareStage.controlPipe.counterCompare) { diffedControl.counterDiff := compareStage.mainTwoPixelStream.payload - compareStage.counterTwoPixelStream.payload }
                  .otherwise { diffedControl.counterDiff := compareStage.counterTwoPixelStream.payload - compareStage.mainTwoPixelStream.payload }
              }.otherwise {
                when(compareStage.controlPipe.mainCompare) { diffedControl.mainDiff := compareStage.mainTwoPixelStream.payload - compareStage.counterThreePixelStream.payload }
                  .otherwise { diffedControl.mainDiff := compareStage.counterThreePixelStream.payload - compareStage.mainTwoPixelStream.payload }
                when(compareStage.controlPipe.counterCompare) { diffedControl.counterDiff := compareStage.mainThreePixelStream.payload - compareStage.counterTwoPixelStream.payload }
                  .otherwise { diffedControl.counterDiff := compareStage.counterTwoPixelStream.payload - compareStage.mainThreePixelStream.payload }
              }
            }
          }.elsewhen(compareStage.controlPipe.currentPosition === U(1)) {
            when(compareStage.controlPipe.horizontalCompare) { diffedControl.horizontalDiff := compareStage.mainTwoPixelStream.payload - compareStage.counterTwoPixelStream.payload }
              .otherwise { diffedControl.horizontalDiff := compareStage.counterTwoPixelStream.payload - compareStage.mainTwoPixelStream.payload }
            when(compareStage.controlPipe.nextPosition === U(0)) {
              when(compareStage.controlPipe.lastRow) {
                when(compareStage.controlPipe.mainCompare) { diffedControl.mainDiff := compareStage.mainThreePixelStream.payload - compareStage.counterThreePixelStream.payload }
                  .otherwise { diffedControl.mainDiff := compareStage.counterThreePixelStream.payload - compareStage.mainThreePixelStream.payload }
                when(compareStage.controlPipe.counterCompare) { diffedControl.counterDiff := compareStage.mainThreePixelStream.payload - compareStage.counterThreePixelStream.payload }
                  .otherwise { diffedControl.counterDiff := compareStage.counterThreePixelStream.payload - compareStage.mainThreePixelStream.payload }
              }.otherwise {
                when(compareStage.controlPipe.mainCompare) { diffedControl.mainDiff := compareStage.mainThreePixelStream.payload - compareStage.counterOnePixelStream.payload }
                  .otherwise { diffedControl.mainDiff := compareStage.counterOnePixelStream.payload - compareStage.mainThreePixelStream.payload }
                when(compareStage.controlPipe.counterCompare) { diffedControl.counterDiff := compareStage.mainOnePixelStream.payload - compareStage.counterThreePixelStream.payload }
                  .otherwise { diffedControl.counterDiff := compareStage.counterThreePixelStream.payload - compareStage.mainOnePixelStream.payload }
              }
            }.otherwise {
              when(compareStage.controlPipe.lastRow) {
                when(compareStage.controlPipe.mainCompare) { diffedControl.mainDiff := compareStage.mainOnePixelStream.payload - compareStage.counterOnePixelStream.payload }
                  .otherwise { diffedControl.mainDiff := compareStage.counterOnePixelStream.payload - compareStage.mainOnePixelStream.payload }
                when(compareStage.controlPipe.counterCompare) { diffedControl.counterDiff := compareStage.mainOnePixelStream.payload - compareStage.counterOnePixelStream.payload }
                  .otherwise { diffedControl.counterDiff := compareStage.counterOnePixelStream.payload - compareStage.mainOnePixelStream.payload }
              }.otherwise {
                when(compareStage.controlPipe.mainCompare) { diffedControl.mainDiff := compareStage.mainOnePixelStream.payload - compareStage.counterThreePixelStream.payload }
                  .otherwise { diffedControl.mainDiff := compareStage.counterThreePixelStream.payload - compareStage.mainOnePixelStream.payload }
                when(compareStage.controlPipe.counterCompare) { diffedControl.counterDiff := compareStage.mainThreePixelStream.payload - compareStage.counterOnePixelStream.payload }
                  .otherwise { diffedControl.counterDiff := compareStage.counterOnePixelStream.payload - compareStage.mainThreePixelStream.payload }
              }
            }
          }.otherwise {
            when(compareStage.controlPipe.horizontalCompare) { diffedControl.horizontalDiff := compareStage.mainThreePixelStream.payload - compareStage.counterThreePixelStream.payload }
              .otherwise { diffedControl.horizontalDiff := compareStage.counterThreePixelStream.payload - compareStage.mainThreePixelStream.payload }
            when(compareStage.controlPipe.nextPosition === U(0)) {
              when(compareStage.controlPipe.lastRow) {
                when(compareStage.controlPipe.mainCompare) { diffedControl.mainDiff := compareStage.mainTwoPixelStream.payload - compareStage.counterTwoPixelStream.payload }
                  .otherwise { diffedControl.mainDiff := compareStage.counterTwoPixelStream.payload - compareStage.mainTwoPixelStream.payload }
                when(compareStage.controlPipe.counterCompare) { diffedControl.counterDiff := compareStage.mainTwoPixelStream.payload - compareStage.counterTwoPixelStream.payload }
                  .otherwise { diffedControl.counterDiff := compareStage.counterTwoPixelStream.payload - compareStage.mainTwoPixelStream.payload }
              }.otherwise {
                when(compareStage.controlPipe.mainCompare) { diffedControl.mainDiff := compareStage.mainTwoPixelStream.payload - compareStage.counterOnePixelStream.payload }
                  .otherwise { diffedControl.mainDiff := compareStage.counterOnePixelStream.payload - compareStage.mainTwoPixelStream.payload }
                when(compareStage.controlPipe.counterCompare) { diffedControl.counterDiff := compareStage.mainOnePixelStream.payload - compareStage.counterTwoPixelStream.payload }
                  .otherwise { diffedControl.counterDiff := compareStage.counterTwoPixelStream.payload - compareStage.mainOnePixelStream.payload }
              }
            }.otherwise {
              when(compareStage.controlPipe.lastRow) {
                when(compareStage.controlPipe.mainCompare) { diffedControl.mainDiff := compareStage.mainOnePixelStream.payload - compareStage.counterOnePixelStream.payload }
                  .otherwise { diffedControl.mainDiff := compareStage.counterOnePixelStream.payload - compareStage.mainOnePixelStream.payload }
                when(compareStage.controlPipe.counterCompare) { diffedControl.counterDiff := compareStage.mainOnePixelStream.payload - compareStage.counterOnePixelStream.payload }
                  .otherwise { diffedControl.counterDiff := compareStage.counterOnePixelStream.payload - compareStage.mainOnePixelStream.payload }
              }.otherwise {
                when(compareStage.controlPipe.mainCompare) { diffedControl.mainDiff := compareStage.mainOnePixelStream.payload - compareStage.counterTwoPixelStream.payload }
                  .otherwise { diffedControl.mainDiff := compareStage.counterTwoPixelStream.payload - compareStage.mainOnePixelStream.payload }
                when(compareStage.controlPipe.counterCompare) { diffedControl.counterDiff := compareStage.mainTwoPixelStream.payload - compareStage.counterOnePixelStream.payload }
                  .otherwise { diffedControl.counterDiff := compareStage.counterOnePixelStream.payload - compareStage.mainTwoPixelStream.payload }
              }
            }
          }
        }

        when(!compareStage.controlPipe.finalResult && !compareStage.controlPipe.mainDirectionValid && !compareStage.controlPipe.counterDirectionValid && !compareStage.controlPipe.horizontalDirectionValid) {
          diffedControl.inValidMinDiff.set()
        }

        diffedControl
      }
      .stage()
  }

  val resultStage = new Area {
    val mainOnePixelStream      = diffStage.mainOnePixelStream.stage()
    val counterOnePixelStream   = diffStage.counterOnePixelStream.stage()
    val mainTwoPixelStream      = diffStage.mainTwoPixelStream.stage()
    val counterTwoPixelStream   = diffStage.counterTwoPixelStream.stage()
    val mainThreePixelStream    = diffStage.mainThreePixelStream.stage()
    val counterThreePixelStream = diffStage.counterThreePixelStream.stage()

    val mainOneValidStream      = diffStage.mainOneValidStream.stage()
    val counterOneValidStream   = diffStage.counterOneValidStream.stage()
    val mainTwoValidStream      = diffStage.mainTwoValidStream.stage()
    val counterTwoValidStream   = diffStage.counterTwoValidStream.stage()
    val mainThreeValidStream    = diffStage.mainThreeValidStream.stage()
    val counterThreeValidStream = diffStage.counterThreeValidStream.stage()

    val forkControlPipe = StreamFork(diffStage.controlPipe, 2, synchronous = true)

    val controlPipeBeforePipe = forkControlPipe(0)
      .translateWith {
        val resultControl = ControlInfo(config)
        resultControl.assignSomeByName(diffStage.controlPipe.payload)
        when(!diffStage.controlPipe.finalResult) {
          when(diffStage.controlPipe.horizontalDirectionValid && diffStage.controlPipe.mainDirectionValid && diffStage.controlPipe.counterDirectionValid) {
            when(diffStage.controlPipe.mainDiff >= diffStage.controlPipe.horizontalDiff && diffStage.controlPipe.counterDiff >= diffStage.controlPipe.horizontalDiff) {
              resultControl.isHorizontalMin.set()
              resultControl.minDiff := diffStage.controlPipe.horizontalDiff
            }.elsewhen(diffStage.controlPipe.horizontalDiff > diffStage.controlPipe.mainDiff && diffStage.controlPipe.counterDiff >= diffStage.controlPipe.mainDiff) {
              resultControl.isHorizontalMin.clear()
              resultControl.minDiff := diffStage.controlPipe.mainDiff
            }.otherwise {
              resultControl.isHorizontalMin.clear()
              resultControl.minDiff := diffStage.controlPipe.counterDiff
            }
          }.elsewhen(!diffStage.controlPipe.horizontalDirectionValid && diffStage.controlPipe.mainDirectionValid && diffStage.controlPipe.counterDirectionValid) {
            when(diffStage.controlPipe.counterDiff >= diffStage.controlPipe.mainDiff) {
              resultControl.isHorizontalMin.clear()
              resultControl.minDiff := diffStage.controlPipe.mainDiff
            }.otherwise {
              resultControl.isHorizontalMin.clear()
              resultControl.minDiff := diffStage.controlPipe.counterDiff
            }
          }.elsewhen(diffStage.controlPipe.horizontalDirectionValid && !diffStage.controlPipe.mainDirectionValid && diffStage.controlPipe.counterDirectionValid) {
            when(diffStage.controlPipe.counterDiff >= diffStage.controlPipe.horizontalDiff) {
              resultControl.isHorizontalMin.set()
              resultControl.minDiff := diffStage.controlPipe.horizontalDiff
            }.otherwise {
              resultControl.isHorizontalMin.clear()
              resultControl.minDiff := diffStage.controlPipe.counterDiff
            }
          }.elsewhen(diffStage.controlPipe.horizontalDirectionValid && diffStage.controlPipe.mainDirectionValid && !diffStage.controlPipe.counterDirectionValid) {
            when(diffStage.controlPipe.mainDiff >= diffStage.controlPipe.horizontalDiff) {
              resultControl.isHorizontalMin.set()
              resultControl.minDiff := diffStage.controlPipe.horizontalDiff
            }.otherwise {
              resultControl.isHorizontalMin.clear()
              resultControl.minDiff := diffStage.controlPipe.mainDiff
            }
          }.elsewhen(!diffStage.controlPipe.horizontalDirectionValid && !diffStage.controlPipe.mainDirectionValid && diffStage.controlPipe.counterDirectionValid) {
            resultControl.isHorizontalMin.clear()
            resultControl.minDiff := diffStage.controlPipe.counterDiff
          }.elsewhen(diffStage.controlPipe.horizontalDirectionValid && !diffStage.controlPipe.mainDirectionValid && !diffStage.controlPipe.counterDirectionValid) {
            resultControl.isHorizontalMin.set()
            resultControl.minDiff := diffStage.controlPipe.horizontalDiff
          }.elsewhen(!diffStage.controlPipe.horizontalDirectionValid && diffStage.controlPipe.mainDirectionValid && !diffStage.controlPipe.counterDirectionValid) {
            resultControl.isHorizontalMin.clear()
            resultControl.minDiff := diffStage.controlPipe.mainDiff
          }
        }
        resultControl
      }

    val controlPipe = controlPipeBeforePipe.stage()

    val pixelStream = Stream(UInt(dW bits))
    val resultStreamBeforePipe = pixelStream
      .translateFrom(forkControlPipe(1)) { (pixel, control) =>
        pixel.assignFromBits(B(0, dW bits))
        when(diffStage.controlPipe.finalResult) {
          when(diffStage.controlPipe.currentPosition === U(0) && diffStage.mainOneValidStream.payload) { pixel := diffStage.mainOnePixelStream.payload }
            .elsewhen(diffStage.controlPipe.currentPosition === U(1) && diffStage.mainTwoValidStream.payload) { pixel := diffStage.mainTwoPixelStream.payload }
            .elsewhen(diffStage.controlPipe.currentPosition === U(2) && diffStage.mainThreeValidStream.payload) { pixel := diffStage.mainThreePixelStream.payload }
            .otherwise {
              when(diffStage.controlPipe.verticalDirectionValid) {
                when(inValidMinDiff) {
                  when(diffStage.controlPipe.currentPosition === U(0)) { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.mainThreePixelStream.payload) / U(2)).resized }
                    .elsewhen(diffStage.controlPipe.currentPosition === U(1)) { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.mainThreePixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.mainTwoPixelStream.payload) / U(2)).resized }
                }.otherwise {
                  when(diffStage.controlPipe.verticalDiff > minDiff) { pixel := candidatePixel }
                    .elsewhen(diffStage.controlPipe.verticalDiff === minDiff) {
                      when(isHorizontalDirection) { pixel := candidatePixel }
                        .otherwise {
                          when(diffStage.controlPipe.currentPosition === U(0)) { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.mainThreePixelStream.payload) / U(2)).resized }
                            .elsewhen(diffStage.controlPipe.currentPosition === U(1)) { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.mainThreePixelStream.payload) / U(2)).resized }
                            .otherwise { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.mainTwoPixelStream.payload) / U(2)).resized }
                        }
                    }
                    .otherwise {
                      when(diffStage.controlPipe.currentPosition === U(0)) { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.mainThreePixelStream.payload) / U(2)).resized }
                        .elsewhen(diffStage.controlPipe.currentPosition === U(1)) { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.mainThreePixelStream.payload) / U(2)).resized }
                        .otherwise { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.mainTwoPixelStream.payload) / U(2)).resized }
                    }
                }
              }.otherwise { pixel := candidatePixel }
            }

        }.otherwise {
          when(diffStage.controlPipe.horizontalDirectionValid && diffStage.controlPipe.mainDirectionValid && diffStage.controlPipe.counterDirectionValid) {
            when(diffStage.controlPipe.mainDiff >= diffStage.controlPipe.horizontalDiff && diffStage.controlPipe.counterDiff >= diffStage.controlPipe.horizontalDiff) {
              when(diffStage.controlPipe.currentPosition === U(0)) { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
                .elsewhen(diffStage.controlPipe.currentPosition === U(1)) { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                .otherwise { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
            }.elsewhen(diffStage.controlPipe.horizontalDiff > diffStage.controlPipe.mainDiff && diffStage.controlPipe.counterDiff >= diffStage.controlPipe.mainDiff) {
              when(diffStage.controlPipe.currentPosition === U(0)) {
                when(diffStage.controlPipe.nextPosition === U(1)) {
                  when(diffStage.controlPipe.firstRow) { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                    .elsewhen(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                }.otherwise {
                  when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
                }
              }.elsewhen(diffStage.controlPipe.currentPosition === U(1)) {
                when(diffStage.controlPipe.nextPosition === U(0)) {
                  when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
                }.otherwise {
                  when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
                }
              }.otherwise {
                when(diffStage.controlPipe.nextPosition === U(0)) {
                  when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
                }.otherwise {
                  when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                }
              }
            }.otherwise {
              when(diffStage.controlPipe.currentPosition === U(0)) {
                when(diffStage.controlPipe.nextPosition === U(1)) {
                  when(diffStage.controlPipe.firstRow) { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                    .elsewhen(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
                }.otherwise {
                  when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                }
              }.elsewhen(diffStage.controlPipe.currentPosition === U(1)) {
                when(diffStage.controlPipe.nextPosition === U(0)) {
                  when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
                }.otherwise {
                  when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
                }
              }.otherwise {
                when(diffStage.controlPipe.nextPosition === U(0)) {
                  when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                }.otherwise {
                  when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
                }
              }
            }
          }.elsewhen(!diffStage.controlPipe.horizontalDirectionValid && diffStage.controlPipe.mainDirectionValid && diffStage.controlPipe.counterDirectionValid) {
            when(diffStage.controlPipe.counterDiff >= diffStage.controlPipe.mainDiff) {
              when(diffStage.controlPipe.currentPosition === U(0)) {
                when(diffStage.controlPipe.nextPosition === U(1)) {
                  when(diffStage.controlPipe.firstRow) { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                    .elsewhen(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                }.otherwise {
                  when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
                }
              }.elsewhen(diffStage.controlPipe.currentPosition === U(1)) {
                when(diffStage.controlPipe.nextPosition === U(0)) {
                  when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
                }.otherwise {
                  when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
                }
              }.otherwise {
                when(diffStage.controlPipe.nextPosition === U(0)) {
                  when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
                }.otherwise {
                  when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                }
              }
            }.otherwise {
              when(diffStage.controlPipe.currentPosition === U(0)) {
                when(diffStage.controlPipe.nextPosition === U(1)) {
                  when(diffStage.controlPipe.firstRow) { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                    .elsewhen(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
                }.otherwise {
                  when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                }
              }.elsewhen(diffStage.controlPipe.currentPosition === U(1)) {
                when(diffStage.controlPipe.nextPosition === U(0)) {
                  when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
                }.otherwise {
                  when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
                }
              }.otherwise {
                when(diffStage.controlPipe.nextPosition === U(0)) {
                  when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                }.otherwise {
                  when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
                }
              }
            }
          }.elsewhen(diffStage.controlPipe.horizontalDirectionValid && !diffStage.controlPipe.mainDirectionValid && diffStage.controlPipe.counterDirectionValid) {
            when(diffStage.controlPipe.counterDiff >= diffStage.controlPipe.horizontalDiff) {
              when(diffStage.controlPipe.currentPosition === U(0)) { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
                .elsewhen(diffStage.controlPipe.currentPosition === U(1)) { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                .otherwise { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
            }.otherwise {
              when(diffStage.controlPipe.currentPosition === U(0)) {
                when(diffStage.controlPipe.nextPosition === U(1)) {
                  when(diffStage.controlPipe.firstRow) { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                    .elsewhen(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
                }.otherwise {
                  when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                }
              }.elsewhen(diffStage.controlPipe.currentPosition === U(1)) {
                when(diffStage.controlPipe.nextPosition === U(0)) {
                  when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
                }.otherwise {
                  when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
                }
              }.otherwise {
                when(diffStage.controlPipe.nextPosition === U(0)) {
                  when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                }.otherwise {
                  when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
                }
              }
            }
          }.elsewhen(diffStage.controlPipe.horizontalDirectionValid && diffStage.controlPipe.mainDirectionValid && !diffStage.controlPipe.counterDirectionValid) {
            when(diffStage.controlPipe.mainDiff >= diffStage.controlPipe.horizontalDiff) {
              when(diffStage.controlPipe.currentPosition === U(0)) { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
                .elsewhen(diffStage.controlPipe.currentPosition === U(1)) { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                .otherwise { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
            }.otherwise {
              when(diffStage.controlPipe.currentPosition === U(0)) {
                when(diffStage.controlPipe.nextPosition === U(1)) {
                  when(diffStage.controlPipe.firstRow) { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                    .elsewhen(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                }.otherwise {
                  when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
                }
              }.elsewhen(diffStage.controlPipe.currentPosition === U(1)) {
                when(diffStage.controlPipe.nextPosition === U(0)) {
                  when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
                }.otherwise {
                  when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
                }
              }.otherwise {
                when(diffStage.controlPipe.nextPosition === U(0)) {
                  when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
                }.otherwise {
                  when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
                    .otherwise { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                }
              }
            }
          }.elsewhen(!diffStage.controlPipe.horizontalDirectionValid && !diffStage.controlPipe.mainDirectionValid && diffStage.controlPipe.counterDirectionValid) {
            when(diffStage.controlPipe.currentPosition === U(0)) {
              when(diffStage.controlPipe.nextPosition === U(1)) {
                when(diffStage.controlPipe.firstRow) { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                  .elsewhen(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
                  .otherwise { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
              }.otherwise {
                when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                  .otherwise { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
              }
            }.elsewhen(diffStage.controlPipe.currentPosition === U(1)) {
              when(diffStage.controlPipe.nextPosition === U(0)) {
                when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
                  .otherwise { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
              }.otherwise {
                when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
                  .otherwise { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
              }
            }.otherwise {
              when(diffStage.controlPipe.nextPosition === U(0)) {
                when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                  .otherwise { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
              }.otherwise {
                when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
                  .otherwise { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
              }
            }
          }.elsewhen(diffStage.controlPipe.horizontalDirectionValid && !diffStage.controlPipe.mainDirectionValid && !diffStage.controlPipe.counterDirectionValid) {
            when(diffStage.controlPipe.currentPosition === U(0)) { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
              .elsewhen(diffStage.controlPipe.currentPosition === U(1)) { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
              .otherwise { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
          }.elsewhen(!diffStage.controlPipe.horizontalDirectionValid && diffStage.controlPipe.mainDirectionValid && !diffStage.controlPipe.counterDirectionValid) {
            when(diffStage.controlPipe.currentPosition === U(0)) {
              when(diffStage.controlPipe.nextPosition === U(1)) {
                when(diffStage.controlPipe.firstRow) { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                  .elsewhen(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
                  .otherwise { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
              }.otherwise {
                when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                  .otherwise { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
              }
            }.elsewhen(diffStage.controlPipe.currentPosition === U(1)) {
              when(diffStage.controlPipe.nextPosition === U(0)) {
                when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
                  .otherwise { pixel := ((diffStage.mainThreePixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
              }.otherwise {
                when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
                  .otherwise { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterThreePixelStream.payload) / U(2)).resized }
              }
            }.otherwise {
              when(diffStage.controlPipe.nextPosition === U(0)) {
                when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                  .otherwise { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
              }.otherwise {
                when(diffStage.controlPipe.lastRow) { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
                  .otherwise { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
              }
            }
          }
        }
      }

    val resultStream = resultStreamBeforePipe.stage()

    when(!controlPipeBeforePipe.finalResult) {
      isHorizontalDirection := controlPipeBeforePipe.isHorizontalMin
      minDiff               := controlPipeBeforePipe.minDiff
      candidatePixel        := resultStreamBeforePipe.payload
    }
    when(diffStage.controlPipe.fire) { inValidMinDiff := diffStage.controlPipe.inValidMinDiff }
  }

  /* the pixelsOut logic */
  val resultsJoin = StreamJoin(
    Seq(
      resultStage.resultStream,
      resultStage.mainOnePixelStream,
      resultStage.counterOnePixelStream,
      resultStage.mainTwoPixelStream,
      resultStage.counterTwoPixelStream,
      resultStage.mainThreePixelStream,
      resultStage.counterThreePixelStream,
      resultStage.mainOneValidStream,
      resultStage.counterOneValidStream,
      resultStage.mainTwoValidStream,
      resultStage.counterTwoValidStream,
      resultStage.mainThreeValidStream,
      resultStage.counterThreeValidStream,
      resultStage.controlPipe
    )
  ).throwWhen(!resultStage.controlPipe.pipeValid || !resultStage.controlPipe.finalResult)

  io.pixelsOut.flattenForeach(_.allowOverride)
  val pixelsStream = Stream(io.pixelsOut.payloadType)
    .translateFrom(resultsJoin) { (data, _) =>
      data.pixel      := resultStage.resultStream.payload
      data.frameStart := resultStage.controlPipe.frameStart
      data.rowEnd     := resultStage.controlPipe.rowEnd
    }
  io.pixelsOut << pixelsStream.pipelined(m2s = true, s2m = true)

  val controlStateMachine = new StateMachine {
    val HOLD        = StateEntryPoint()
    val PASS, EXTRA = State()

    HOLD.whenIsActive {
      when(passPixels.fire) {
        when(bufferRowCount === U(1) + outRowCount && bufferWAddr === U(1) + outPixelAddr) { goto(PASS) }
      }
    }

    PASS.whenIsActive {
      when(controlStream.fire) { goto(EXTRA) }
      controls.pipeValid.set()
      controls.currentPosition := currentRowBuffer
      controls.nextPosition    := nextRowBuffer

      when(outPixelAddr === U(0)) {
        mainAddrOne   := U(1) + outPixelAddr
        mainAddrTwo   := U(1) + outPixelAddr
        mainAddrThree := U(1) + outPixelAddr
      }.otherwise {
        mainAddrOne   := outPixelAddr - U(1)
        mainAddrTwo   := outPixelAddr - U(1)
        mainAddrThree := outPixelAddr - U(1)
      }

      when(outReachRowEnd) {
        counterAddrOne   := outPixelAddr - U(1)
        counterAddrTwo   := outPixelAddr - U(1)
        counterAddrThree := outPixelAddr - U(1)
      }.otherwise {
        counterAddrOne   := U(1) + outPixelAddr
        counterAddrTwo   := U(1) + outPixelAddr
        counterAddrThree := U(1) + outPixelAddr
      }

      when(outRowCount === U(0)) { controls.firstRow.set() }
      when(outReachFinalRow) { controls.lastRow.set() }

      when(frameStart) { controls.frameStart.set() }
      when(outReachRowEnd) { controls.rowEnd.set() }

    }

    EXTRA.whenIsActive {
      when(controlStream.fire) {
        when(writeDone) { goto(PASS) }
          .elsewhen(outReachRowEnd) {
            when(bufferRowCount === U(3) + outRowCount || bufferWAddr > U(1) || bufferWAddr === U(1) && passPixels.fire) { goto(PASS) }
              .otherwise { goto(HOLD) }
          }
          .otherwise {
            when(bufferRowCount > U(1) + outRowCount || bufferWAddr === U(2) + outPixelAddr && passPixels.fire || bufferWAddr > U(2) + outPixelAddr) { goto(PASS) }
              .otherwise { goto(HOLD) }
          }
//        when(writeDone || bufferRowCount > U(1) + outRowCount || bufferWAddr === U(2) + outPixelAddr && passPixels.fire || bufferWAddr > U(2) + outPixelAddr) { goto(PASS) }
//          .otherwise { goto(HOLD) }
      }

      controls.pipeValid.set()
      controls.finalResult.set()
      controls.currentPosition := currentRowBuffer
      controls.nextPosition    := nextRowBuffer

      when(outRowCount === U(0)) { controls.firstRow.set() }
      when(outReachFinalRow) { controls.lastRow.set() }

      when(frameStart && controlStream.fire) { frameStart := False }
      when(frameStart) { controls.frameStart.set() }

      outReachRowEnd.setWhen(controlStream.fire && outPixelAddr === U(4) * bmpWidth - U(2))
      outReachFinalRow.setWhen(outReachRowEnd && outRowCount === U(4) * bmpHeight - U(2) && controlStream.fire)

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

      when(controlStream.rowEnd && controlStream.fire) {
        when(outRowCount =/= U(0)) { holdBuffer.clear() }

        when(currentRowBuffer === U(2)) { currentRowBuffer := U(0).resized }
          .otherwise { currentRowBuffer := currentRowBuffer + U(1) }
        when(nextRowBuffer === U(2)) { nextRowBuffer := U(0).resized }
          .otherwise { nextRowBuffer := nextRowBuffer + U(1) }
      }
    }

  }

}
