package SpGears.Algos.SuperResolution
import spinal.lib._
import spinal.core._
import spinal.core.internals.Operator
import spinal.lib.fsm._

case class SuperResolutionPart2(config: IPConfig) extends Component {
  def dW = config.dataW

  def sW = config.srcW

  def sH = config.srcH

  val io = new Bundle {
    // from master
    val pixelsIn = slave Stream PixelData(config)
    val startIn  = in Bool ()

    // from slave
    val inpThreeDoneIn = in Bool ()

    // to slave
    val pixelsOut = master Stream PixelData(config, isInternal = true)
    val startOut  = out Bool ()

    // to master
    val inpTwoDoneOut = out Bool ()

    // wait for axi-lite config signal
    val thresholdIn = in UInt (dW bits)
    val widthIn     = in UInt (log2Up(sW + 1) bits)
    val heightIn    = in UInt (log2Up(sH + 1) bits)
  }
  noIoPrefix()

  /* set the initial state */
  io.setInvalid()

  /* the signal indicate this part interpolation is complete */
  val inpTwoDone = RegInit(False).clearWhen(io.inpThreeDoneIn)

  /* this signal can be use to hold the startRead signal */
  val readDone = RegInit(False).clearWhen(inpTwoDone || io.startIn.fall())

  /* the signal which start read buffer */
  val startRead = RegInit(False).setWhen(io.startIn && !readDone).clearWhen(io.startIn.fall())

  /* register the startOut signal */
  val slaveStart = RegInit(False).setWhen(!io.inpThreeDoneIn && io.pixelsIn.fire).clearWhen(io.inpThreeDoneIn || io.startIn.fall())

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
  val writeDone = RegInit(False).clearWhen(inpTwoDone)

  /* record the number of row which is buffered */
  val bufferRowCount = Counter(2 * sH + 1)

  /* indicate buffer reuse for padding */
  val bufferReuse = RegInit(False).clearWhen(inpTwoDone)

  /* the write enable signal of lineBuffer */
  val bufferEnable = RegInit(False).setWhen(io.startIn && !holdBuffer && !writeDone).clearWhen(!io.startIn || holdBuffer || writeDone)

  /* when this signal is True, it means that the dataIn should be store in lineBufferTwo when we can receive dataIn */
  val bufferSwitch = RegInit(U(0, 2 bits))

  /* when it be true, it means the lineBufferTwo now is store the next row */
  val nextRowBuffer = RegInit(True).setWhen(!startRead)

  /* address Counter for write data to buffer */
  val bufferWAddr = Counter(2 * sW)

  /* address Counter for output pixels */
  val outPixelAddr = Counter(4 * sW)

  /* the number of row which is already output*/
  val outRowCount = Counter(4 * sH + 1)

  /* some flag signals */
  val outReachRowEnd   = RegInit(False)
  val outReachFinalRow = RegInit(False)

  val bufferReachRowEnd   = RegInit(False)
  val bufferReachFinalRow = RegInit(False)

  val oddBufferRow = RegInit(False).clearWhen(io.startIn.fall() || inpTwoDone)

  val zeroInFourOutPixelAddr  = RegInit(True).setWhen(io.startIn.fall() || inpTwoDone)
  val oneInFourOutPixelAddr   = RegInit(False).clearWhen(io.startIn.fall() || inpTwoDone)
  val twoInFourOutPixelAddr   = RegInit(False).clearWhen(io.startIn.fall() || inpTwoDone)
  val threeInFourOutPixelAddr = RegInit(False).clearWhen(io.startIn.fall() || inpTwoDone)

  val zeroInFourOutRow  = RegInit(True).setWhen(io.startIn.fall() || inpTwoDone)
  val oneInFourOutRow   = RegInit(False).clearWhen(io.startIn.fall() || inpTwoDone)
  val twoInFourOutRow   = RegInit(False).clearWhen(io.startIn.fall() || inpTwoDone)
  val threeInFourOutRow = RegInit(False).clearWhen(io.startIn.fall() || inpTwoDone)

  val currentState = UInt(3 bits)

  val willHoldToTwice           = RegInit(False).clearWhen(io.startIn.fall() || inpTwoDone)
  val willPassToHoldCaseOne     = RegInit(False).clearWhen(io.startIn.fall() || inpTwoDone)
  val willPassToHoldCaseTwo     = RegInit(False).clearWhen(io.startIn.fall() || inpTwoDone)
  val holdWillPassToHoldCaseTwo = RegInit(False).clearWhen(io.startIn.fall() || inpTwoDone)
  val willOnceToHoldCaseOne     = RegInit(False).clearWhen(io.startIn.fall() || inpTwoDone)
  val willOnceToHoldCaseTwo     = RegInit(False).clearWhen(io.startIn.fall() || inpTwoDone)
  val willOnceToHoldCaseThree   = RegInit(False).clearWhen(io.startIn.fall() || inpTwoDone)

  /* the following lineBuffer is used to store three line pixels of source bmp */
  val lineBufferOne = Mem(UInt(dW bits), 2 * sW).init(Seq.fill(2 * sW)(U(0).resized))
  val lineBufferTwo = Mem(UInt(dW bits), 2 * sW).init(Seq.fill(2 * sW)(U(0).resized))
  val lineBufferOdd = Mem(UInt(dW bits), 2 * sW).init(Seq.fill(2 * sW)(U(0).resized))

  // for initial state
  when(!startRead) { bufferSwitch.clearAll() }

  /* the address for read lineBufferOne and lineBufferTwo and lineBufferOdd */
  val mainAddrOne    = UInt(log2Up(2 * sW) bits)
  val counterAddrOne = UInt(log2Up(2 * sW) bits)
  val mainAddrTwo    = UInt(log2Up(2 * sW) bits)
  val counterAddrTwo = UInt(log2Up(2 * sW) bits)
  val oddAddr        = UInt(log2Up(2 * sW) bits)

  mainAddrOne    := (outPixelAddr / U(2)).resized
  counterAddrOne := (outPixelAddr / U(2)).resized
  mainAddrTwo    := (outPixelAddr / U(2)).resized
  counterAddrTwo := (outPixelAddr / U(2)).resized
  oddAddr        := (outPixelAddr / U(2)).resized

  /* define a drive stream for valid */
  val validStream = Event
  validStream.valid.set()
  validStream.ready.allowOverride

  /* pipelineStream convey the information through the stream pipeline */
  val controlStream = Stream(ControlSignal(config, withInpValid = true, withOddFlag = true))

  val controls = ControlSignal(config, withInpValid = true, withOddFlag = true)

  // the empty pipeline operation
  controls.assignFromBits(B(0, controls.getBitsWidth bits))
  controlStream.translateFrom(validStream.continueWhen(startRead)) { (pipe, _) => pipe := controls }

  /* the address Stream for read buffer */
  val mainAddrOneStream    = Stream(UInt(log2Up(2 * sW) bits))
  val counterAddrOneStream = Stream(UInt(log2Up(2 * sW) bits))
  val mainAddrTwoStream    = Stream(UInt(log2Up(2 * sW) bits))
  val counterAddrTwoStream = Stream(UInt(log2Up(2 * sW) bits))
  val oddAddrStream        = Stream(UInt(log2Up(2 * sW) bits))

  mainAddrOneStream.translateFrom(validStream.continueWhen(startRead)) { (addr, _) => addr := mainAddrOne }
  counterAddrOneStream.translateFrom(validStream.continueWhen(startRead)) { (addr, _) => addr := counterAddrOne }
  mainAddrTwoStream.translateFrom(validStream.continueWhen(startRead)) { (addr, _) => addr := mainAddrTwo }
  counterAddrTwoStream.translateFrom(validStream.continueWhen(startRead)) { (addr, _) => addr := counterAddrTwo }
  oddAddrStream.translateFrom(validStream.continueWhen(startRead)) { (addr, _) => addr := oddAddr }

  /* control the write process by bufferEnable */
  io.pixelsIn.ready.allowOverride
  val passPixels = io.pixelsIn.pipelined(m2s = true, s2m = true).continueWhen(bufferEnable)
  passPixels.freeRun()

  bufferReachRowEnd.setWhen(bufferWAddr === U(2) * bmpWidth - U(2) && passPixels.fire)
  bufferReachFinalRow.setWhen(bufferRowCount === U(2) * bmpHeight - U(2) && bufferReachRowEnd && passPixels.fire)

  /* control the bufferRowCount */
  when(passPixels.rowEnd && passPixels.fire) {
    when(bufferReachFinalRow) {
      bufferRowCount.clear()
      bufferReachRowEnd.clear()
      bufferReachFinalRow.clear()
      bufferReuse.set()
    }.otherwise {
      bufferRowCount.increment()
      bufferReachRowEnd.clear()
    }
    when(bufferRowCount % U(2) === U(0)) { oddBufferRow.set() }
      .otherwise { oddBufferRow.clear() }
  }

  /* the bufferSwitch and bufferEnable logic */
  when(passPixels.rowEnd && passPixels.fire) {
    when(bufferSwitch === U(2) || bufferSwitch === U(0)) { bufferSwitch := U(1, 2 bits) }
      .otherwise {
        when(nextRowBuffer) { bufferSwitch := bufferSwitch + U(1) }
          .otherwise { bufferSwitch := bufferSwitch - U(1) }
      }
  }
  when(bufferRowCount =/= U(0) && passPixels.rowEnd && passPixels.fire) {
    when(bufferSwitch =/= U(1)) {
      holdBuffer.set()
      bufferEnable.clear()
    }
    when(bufferReachFinalRow && bufferReachRowEnd) {
      writeDone.set()
      bufferEnable.clear()
    }
  }

  when(outRowCount % U(4) === U(3) && controlStream.rowEnd && controlStream.fire) {
    holdBuffer.clear()
    nextRowBuffer.toggleWhen(True)
  }

  /* the frameStart logic */
  when(passPixels.frameStart && passPixels.fire) { frameStart.set() }

  /* the startOut logic */
  io.startOut.allowOverride
  io.startOut := slaveStart

  /* the interComplete logic */
  io.inpTwoDoneOut.allowOverride
  io.inpTwoDoneOut := inpTwoDone

  /** *********************** write data to buffer logic ***************************************
    */

  lineBufferOne.write(bufferWAddr, passPixels.pixel, passPixels.fire && bufferSwitch === U(0))
  lineBufferOdd.write(bufferWAddr, passPixels.pixel, passPixels.fire && bufferSwitch === U(1))
  lineBufferTwo.write(bufferWAddr, passPixels.pixel, passPixels.fire && bufferSwitch === U(2))

  when(passPixels.fire) {
    when(passPixels.rowEnd) { bufferWAddr.clear() }
      .otherwise { bufferWAddr.increment() }
  }

  val pushing       = passPixels.fire && !controlStream.fire
  val poping        = !passPixels.fire && controlStream.fire
  val pushAndPoping = passPixels.fire && controlStream.fire

  /** *************************** interpolation pipeline ****************************************
    */

  // read Stage
  val readStage = new Area {
    val mainOnePixelStream    = lineBufferOne.streamReadSync(mainAddrOneStream.pipelined(m2s = true, s2m = true)).pipelined(m2s = true, s2m = true)
    val counterOnePixelStream = lineBufferOne.streamReadSync(counterAddrOneStream.pipelined(m2s = true, s2m = true)).pipelined(m2s = true, s2m = true)
    val mainTwoPixelStream    = lineBufferTwo.streamReadSync(mainAddrTwoStream.pipelined(m2s = true, s2m = true)).pipelined(m2s = true, s2m = true)
    val counterTwoPixelStream = lineBufferTwo.streamReadSync(counterAddrTwoStream.pipelined(m2s = true, s2m = true)).pipelined(m2s = true, s2m = true)
    val oddRowPixelStream     = lineBufferOdd.streamReadSync(oddAddrStream.pipelined(m2s = true, s2m = true)).pipelined(m2s = true, s2m = true)
    val controlPipe           = controlStream.pipelined(m2s = true, s2m = true).stage().pipelined(m2s = true, s2m = true)
  }

  val compareStage = new Area {
    val mainOnePixelStream    = readStage.mainOnePixelStream.pipelined(m2s = true, s2m = true)
    val counterOnePixelStream = readStage.counterOnePixelStream.pipelined(m2s = true, s2m = true)
    val mainTwoPixelStream    = readStage.mainTwoPixelStream.pipelined(m2s = true, s2m = true)
    val counterTwoPixelStream = readStage.counterTwoPixelStream.pipelined(m2s = true, s2m = true)
    val oddRowPixelStream     = readStage.oddRowPixelStream.pipelined(m2s = true, s2m = true)
    val controlPipe = readStage.controlPipe
      .translateWith {
        val comparedControl = ControlSignal(config, withInpValid = true, withOddFlag = true)
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
      .pipelined(m2s = true, s2m = true)
  }

  val diffStage = new Area {
    val mainOnePixelStream    = compareStage.mainOnePixelStream.pipelined(m2s = true, s2m = true)
    val counterOnePixelStream = compareStage.counterOnePixelStream.pipelined(m2s = true, s2m = true)
    val mainTwoPixelStream    = compareStage.mainTwoPixelStream.pipelined(m2s = true, s2m = true)
    val counterTwoPixelStream = compareStage.counterTwoPixelStream.pipelined(m2s = true, s2m = true)
    val oddRowPixelStream     = compareStage.oddRowPixelStream.pipelined(m2s = true, s2m = true)
    val controlPipe = compareStage.controlPipe
      .translateWith {
        val diffedControl = ControlSignal(config, withInpValid = true, withOddFlag = true)
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
      .pipelined(m2s = true, s2m = true)
  }

  val resultStage = new Area {
    val mainOnePixelStream    = diffStage.mainOnePixelStream.pipelined(m2s = true, s2m = true)
    val counterOnePixelStream = diffStage.counterOnePixelStream.pipelined(m2s = true, s2m = true)
    val mainTwoPixelStream    = diffStage.mainTwoPixelStream.pipelined(m2s = true, s2m = true)
    val counterTwoPixelStream = diffStage.counterTwoPixelStream.pipelined(m2s = true, s2m = true)
    val oddRowPixelStream     = diffStage.oddRowPixelStream.pipelined(m2s = true, s2m = true)
    val forkControlPipe       = StreamFork(diffStage.controlPipe, 2, synchronous = true)
    val controlPipe = forkControlPipe(0)
      .translateWith {
        val resultControl = ControlSignal(config, withInpValid = true, withOddFlag = true)
        resultControl.assignSomeByName(diffStage.controlPipe.payload)
        when(resultControl.onceValid) {
          switch(resultControl.onceMode) {
            is(U(0)) { when(resultControl.mainDiff >= inpThreshold) { resultControl.inpValidFlag.clear() } }
            is(U(1)) { when(resultControl.mainDiff >= inpThreshold) { resultControl.inpValidFlag.clear() } }
            is(U(2)) { when(resultControl.mainDiff >= inpThreshold) { resultControl.inpValidFlag.clear() } }
            is(U(3)) { when(resultControl.mainDiff >= inpThreshold) { resultControl.inpValidFlag.clear() } }
          }
        }

        when(resultControl.twiceCompValid) {
          switch(resultControl.twiceMode) {
            is(U(0)) { when(resultControl.mainDiff >= inpThreshold && resultControl.counterDiff >= inpThreshold) { resultControl.inpValidFlag.clear() } }
            is(U(1)) { when(resultControl.mainDiff >= inpThreshold && resultControl.counterDiff >= inpThreshold) { resultControl.inpValidFlag.clear() } }
            is(U(3)) { when(resultControl.mainDiff >= inpThreshold) { resultControl.inpValidFlag.clear() } }
            is(U(5)) { when(resultControl.mainDiff >= inpThreshold) { resultControl.inpValidFlag.clear() } }
          }
        }
        resultControl
      }
      .pipelined(m2s = true, s2m = true)
    val pixelStream = Stream(UInt(dW bits))
    val resultStream = pixelStream
      .translateFrom(forkControlPipe(1)) { (pixel, control) =>
        pixel.assignFromBits(B(0, dW bits))
        when(control.passValid) {
          when(control.passMode) { pixel := diffStage.mainTwoPixelStream.payload }
            .otherwise { pixel := diffStage.mainOnePixelStream.payload }
        }

        when(control.oddValid) { pixel := diffStage.oddRowPixelStream.payload }

        when(control.onceValid) {
          switch(control.onceMode) {
            is(U(0)) {
              when(control.mainDiff >= inpThreshold) { pixel := diffStage.mainOnePixelStream.payload.getZero }
                .otherwise { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
            }
            is(U(1)) {
              when(control.mainDiff >= inpThreshold) { pixel := diffStage.mainTwoPixelStream.payload.getZero }
                .otherwise { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
            }
            is(U(2)) {
              when(control.mainDiff >= inpThreshold) { pixel := diffStage.mainOnePixelStream.payload.getZero }
                .otherwise { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.mainTwoPixelStream.payload) / U(2)).resized }
            }
            is(U(3)) {
              when(control.mainDiff >= inpThreshold) { pixel := diffStage.mainTwoPixelStream.payload.getZero }
                .otherwise { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.mainOnePixelStream.payload) / U(2)).resized }
            }
            is(U(4)) { pixel := diffStage.mainOnePixelStream.payload }
            is(U(5)) { pixel := diffStage.mainTwoPixelStream.payload }
          }
        }

        when(control.twiceCompValid) {
          switch(control.twiceMode) {
            is(U(0)) {
              when(control.mainDiff >= inpThreshold && control.counterDiff >= inpThreshold) {
                pixel := diffStage.mainOnePixelStream.payload.getZero
              }.otherwise {
                when(control.mainDiff >= control.counterDiff) { pixel := ((diffStage.counterOnePixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                  .otherwise { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.mainTwoPixelStream.payload) / U(2)).resized }
              }
            }
            is(U(1)) {
              when(control.mainDiff >= inpThreshold && control.counterDiff >= inpThreshold) {
                pixel := diffStage.mainTwoPixelStream.payload.getZero
              }.otherwise {
                when(control.mainDiff >= control.counterDiff) { pixel := ((diffStage.counterOnePixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
                  .otherwise { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.mainTwoPixelStream.payload) / U(2)).resized }
              }
            }
            is(U(2)) { pixel := diffStage.mainTwoPixelStream.payload }
            is(U(3)) {
              when(control.mainDiff >= inpThreshold) { pixel := diffStage.mainTwoPixelStream.payload.getZero }
                .otherwise { pixel := ((diffStage.mainTwoPixelStream.payload +^ diffStage.counterTwoPixelStream.payload) / U(2)).resized }
            }
            is(U(4)) { pixel := diffStage.mainOnePixelStream.payload }
            is(U(5)) {
              when(control.mainDiff >= inpThreshold) { pixel := diffStage.mainOnePixelStream.payload.getZero }
                .otherwise { pixel := ((diffStage.mainOnePixelStream.payload +^ diffStage.counterOnePixelStream.payload) / U(2)).resized }
            }
          }
        }
      }
      .pipelined(m2s = true, s2m = true)
  }

  /* the pixelsOut logic */
  val resultsJoin = StreamJoin(
    Seq(
      resultStage.resultStream,
      resultStage.mainOnePixelStream,
      resultStage.counterOnePixelStream,
      resultStage.mainTwoPixelStream,
      resultStage.counterTwoPixelStream,
      resultStage.controlPipe,
      resultStage.oddRowPixelStream
    )
  ).throwWhen(!resultStage.controlPipe.passValid && !resultStage.controlPipe.onceValid && !resultStage.controlPipe.twiceCompValid && !resultStage.controlPipe.oddValid)

  io.pixelsOut.flattenForeach(_.allowOverride)
  val pixelsStream = Stream(io.pixelsOut.payloadType)
  pixelsStream.translateFrom(resultsJoin) { (data, _) =>
    data.pixel      := resultStage.resultStream.payload
    data.frameStart := resultStage.controlPipe.frameStart
    data.rowEnd     := resultStage.controlPipe.rowEnd
    data.inpValid   := resultStage.controlPipe.inpValidFlag
  }
  io.pixelsOut << pixelsStream.pipelined(m2s = true, s2m = true)

  /** ****************************StateMachine logic for read buffer ******************************
    */

  val controlStateMachine = new StateMachine {
    val HOLD              = StateEntryPoint()
    val PASS, ONCE, TWICE = State()

    HOLD.whenIsActive {
      controls.inpValidFlag.set()

      when(zeroInFourOutRow) {
        when(passPixels.fire) {
          when(threeInFourOutPixelAddr) { goto(ONCE) }
            .otherwise {
              goto(PASS)
              holdWillPassToHoldCaseTwo.set()
            }
        }
      }.elsewhen(twoInFourOutRow) {
        when(passPixels.fire) { goto(PASS) }
      }.elsewhen(threeInFourOutRow) {
        when(passPixels.fire) {
          when(threeInFourOutPixelAddr) {
            when(willHoldToTwice) {
              goto(TWICE)
              willHoldToTwice.clear()
            }
          }.otherwise { goto(ONCE) }
        }
      }

      when(passPixels.fire) {
        when(U(2) * bufferWAddr === outPixelAddr) { willHoldToTwice.set() }
          .otherwise { willHoldToTwice.clear() }
      }

    }

    PASS.whenIsActive {
      controls.inpValidFlag.set()

      when(controlStream.fire) {
        when(oneInFourOutPixelAddr) {
          when(oneInFourOutRow) { goto(PASS) }
            .elsewhen(twoInFourOutRow) {
              when(oddBufferRow && !holdBuffer && willPassToHoldCaseOne && !passPixels.fire && !bufferReuse) {
                goto(HOLD)
              }.otherwise { goto(PASS) }
            }
            .otherwise {
              when(!oddBufferRow && !holdBuffer && willPassToHoldCaseOne && !passPixels.fire && !bufferReuse) {
                goto(HOLD)
              }.otherwise { goto(PASS) }
            }
        }.elsewhen(twoInFourOutPixelAddr) {
          when(oneInFourOutRow) {
            goto(ONCE)
            when(oddBufferRow && !holdBuffer && !bufferReachRowEnd) { willOnceToHoldCaseOne.set() }
          }.elsewhen(twoInFourOutRow) {
            goto(ONCE)
            when(!oddBufferRow && !bufferReuse && !bufferReachRowEnd) { willOnceToHoldCaseTwo.set() }
          }.otherwise {
            when(!oddBufferRow && !holdBuffer && !bufferReuse && (willPassToHoldCaseTwo || holdWillPassToHoldCaseTwo) && !passPixels.fire) {
              goto(HOLD)
              holdWillPassToHoldCaseTwo.clear()
            }.otherwise { goto(ONCE) }
          }
        }.otherwise { goto(PASS) }

        willPassToHoldCaseOne.clear()
        willPassToHoldCaseTwo.clear()

      }

      when(poping && U(2) * bufferWAddr === U(2) +^ outPixelAddr) { willPassToHoldCaseOne.set() }
      when(pushAndPoping && U(2) * bufferWAddr === outPixelAddr) { willPassToHoldCaseOne.set() }

      when(poping && U(2) * bufferWAddr === U(3) +^ outPixelAddr) { willPassToHoldCaseTwo.set() }
      when(pushAndPoping && U(2) * bufferWAddr === U(1) +^ outPixelAddr) { willPassToHoldCaseTwo.set() }

      when(twoInFourOutRow) {
        when(outPixelAddr % U(2) === U(0)) { controls.oddValid.set() }
          .otherwise {
            controls.passValid.set()
            when(nextRowBuffer) { controls.passMode.clear() }
              .otherwise { controls.passMode.set() }
          }
      }.elsewhen(oneInFourOutRow) {
        controls.passValid.set()
        when(nextRowBuffer) {
          controls.passMode.clear()
          when(twoInFourOutPixelAddr) { mainAddrOne := ((outPixelAddr - U(2)) / U(2)).resized }
        }.otherwise {
          controls.passMode.set()
          when(twoInFourOutPixelAddr) { mainAddrTwo := ((outPixelAddr - U(2)) / U(2)).resized }
        }
      }.otherwise {
        controls.passValid.set()
        when(nextRowBuffer) { controls.passMode.clear() }
          .otherwise { controls.passMode.set() }
      }

      when(frameStart && controlStream.fire) { frameStart := False }
      when(frameStart) { controls.frameStart.set() }

    }

    ONCE.whenIsActive {
      controls.inpValidFlag.set()
      controls.onceValid.set()

      when(controlStream.fire) {
        when(zeroInFourOutRow) { goto(PASS) }
          .elsewhen(oneInFourOutRow) {
            when(outReachRowEnd && willOnceToHoldCaseOne && bufferWAddr === U(0) && !passPixels.fire) { goto(HOLD) }
              .otherwise { goto(PASS) }
          }
          .elsewhen(twoInFourOutRow) {
            when(outReachRowEnd) {
              when(bufferWAddr === U(0) && !passPixels.fire && willOnceToHoldCaseTwo) { goto(HOLD) }
                .otherwise { goto(ONCE) }
            }.otherwise { goto(PASS) }
          }
          .otherwise {
            when(twoInFourOutPixelAddr) {
              when(!oddBufferRow && willOnceToHoldCaseThree && !passPixels.fire && !bufferReuse) { goto(HOLD) }
                .otherwise { goto(TWICE) }
            }.otherwise { goto(ONCE) }
          }
        willOnceToHoldCaseOne.clear()
        willOnceToHoldCaseTwo.clear()
        willOnceToHoldCaseThree.clear()
      }

      when(passPixels.fire && bufferReachRowEnd) {
        willOnceToHoldCaseOne.clear()
        willOnceToHoldCaseTwo.clear()
      }

      when(poping && U(2) * bufferWAddr - U(2) === U(1) +^ outPixelAddr) { willOnceToHoldCaseThree.set() }
      when(pushAndPoping && U(2) * bufferWAddr === U(1) +^ outPixelAddr) { willOnceToHoldCaseThree.set() }

      when(threeInFourOutRow) {
        when(twoInFourOutPixelAddr) {
          mainAddrOne := ((outPixelAddr - U(2)) / U(2)).resized
          mainAddrTwo := ((outPixelAddr - U(2)) / U(2)).resized
        }
        when(outReachFinalRow) {
          when(nextRowBuffer) { controls.onceMode := U(4).resized }
            .otherwise { controls.onceMode := U(5).resized }
        }.otherwise {
          when(nextRowBuffer) { controls.onceMode := U(2).resized }
            .otherwise { controls.onceMode := U(3).resized }
        }
      }.otherwise {
        when(nextRowBuffer) {
          controls.onceMode := U(0).resized
          mainAddrOne       := ((outPixelAddr - U(3)) / U(2)).resized
          when(outReachRowEnd) { counterAddrOne := ((outPixelAddr - U(3)) / U(2)).resized }
            .otherwise { counterAddrOne := ((U(1) + outPixelAddr) / U(2)).resized }
        }.otherwise {
          controls.onceMode := U(1).resized
          mainAddrTwo       := ((outPixelAddr - U(3)) / U(2)).resized
          when(outReachRowEnd) { counterAddrTwo := ((outPixelAddr - U(3)) / U(2)).resized }
            .otherwise { counterAddrTwo := ((U(1) + outPixelAddr) / U(2)).resized }
        }
      }

    }

    TWICE.whenIsActive {
      controls.inpValidFlag.set()
      controls.twiceCompValid.set()

      when(controlStream.fire) {
        when(outReachRowEnd) { goto(PASS) }
          .otherwise { goto(ONCE) }
      }

      when(outReachFinalRow) {
        when(nextRowBuffer) {
          when(outReachRowEnd) {
            controls.twiceMode := U(4).resized
            mainAddrOne        := ((outPixelAddr - U(3)) / U(2)).resized
          }.otherwise {
            controls.twiceMode := U(5).resized
            mainAddrOne        := ((outPixelAddr - U(3)) / U(2)).resized
            counterAddrOne     := ((U(1) +^ outPixelAddr) / U(2)).resized
          }
        }.otherwise {
          when(outReachRowEnd) {
            controls.twiceMode := U(2).resized
            mainAddrTwo        := ((outPixelAddr - U(3)) / U(2)).resized
          }.otherwise {
            controls.twiceMode := U(3).resized
            mainAddrTwo        := ((outPixelAddr - U(3)) / U(2)).resized
            counterAddrTwo     := ((U(1) +^ outPixelAddr) / U(2)).resized
          }
        }
      }.otherwise {
        when(nextRowBuffer) {
          controls.twiceMode := U(0).resized
          mainAddrOne        := ((outPixelAddr - U(3)) / U(2)).resized
          counterAddrTwo     := ((outPixelAddr - U(3)) / U(2)).resized
          when(outReachRowEnd) {
            mainAddrTwo    := ((outPixelAddr - U(3)) / U(2)).resized
            counterAddrOne := ((outPixelAddr - U(3)) / U(2)).resized
          }.otherwise {
            mainAddrTwo    := ((outPixelAddr +^ U(1)) / U(2)).resized
            counterAddrOne := ((outPixelAddr +^ U(1)) / U(2)).resized
          }
        }.otherwise {
          controls.twiceMode := U(1).resized
          mainAddrTwo        := ((outPixelAddr - U(3)) / U(2)).resized
          counterAddrOne     := ((outPixelAddr - U(3)) / U(2)).resized
          when(outReachRowEnd) {
            mainAddrOne    := ((outPixelAddr - U(3)) / U(2)).resized
            counterAddrTwo := ((outPixelAddr - U(3)) / U(2)).resized
          }.otherwise {
            mainAddrOne    := ((outPixelAddr +^ U(1)) / U(2)).resized
            counterAddrTwo := ((outPixelAddr +^ U(1)) / U(2)).resized
          }
        }
      }

    }

  }

  addPrePopTask(() => currentState.assignFromBits(controlStateMachine.stateReg.asBits))
  when(currentState === U(2) || currentState === U(3) || currentState === U(4)) {

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
        when(outRowCount % U(4) === U(0)) { oneInFourOutRow.set() }
          .otherwise { oneInFourOutRow.clear() }
        when(outRowCount % U(4) === U(1)) { twoInFourOutRow.set() }
          .otherwise { twoInFourOutRow.clear() }
        when(outRowCount % U(4) === U(2)) { threeInFourOutRow.set() }
          .otherwise { threeInFourOutRow.clear() }
        when(outRowCount % U(4) === U(3)) { zeroInFourOutRow.set() }
          .otherwise { zeroInFourOutRow.clear() }
      }.otherwise { outPixelAddr.increment() }

      when(outPixelAddr % U(4) === U(0)) { oneInFourOutPixelAddr.set() }
      when(oneInFourOutPixelAddr) { oneInFourOutPixelAddr.clear() }

      when(outPixelAddr % U(4) === U(1)) { twoInFourOutPixelAddr.set() }
      when(twoInFourOutPixelAddr) { twoInFourOutPixelAddr.clear() }

      when(outPixelAddr % U(4) === U(2)) { threeInFourOutPixelAddr.set() }
      when(threeInFourOutPixelAddr) { threeInFourOutPixelAddr.clear() }

      when(outPixelAddr % U(4) === U(3)) { zeroInFourOutPixelAddr.set() }
      when(zeroInFourOutPixelAddr) { zeroInFourOutPixelAddr.clear() }

    }
    when(outReachRowEnd) { controls.rowEnd.set() }
  }

}
