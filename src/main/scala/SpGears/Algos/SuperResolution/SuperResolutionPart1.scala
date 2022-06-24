package SpGears.Algos.SuperResolution

import spinal.lib._
import spinal.core._

case class PixelData(config: IPConfig, isInternal: Boolean = false) extends Bundle {
  def dW = config.dataW

  val pixel      = UInt(dW bits)
  val frameStart = Bool()
  val rowEnd     = Bool()
  val inpValid   = if (isInternal) Bool() else null
}

case class SuperResolutionPart1(config: IPConfig) extends Component {
  def dW = config.dataW

  def sW = config.srcW

  def sH = config.srcH

  val io = new Bundle {
    // from master
    val pixelsIn = slave Stream PixelData(config)
    val StartIn  = in Bool ()

    // from slave
    val inpTwoDoneIn   = in Bool ()
    val inpThreeDoneIn = in Bool ()

    // to slave
    val pixelsOut = master Stream PixelData(config, true)
    val startOut  = out Bool ()

    // to master
    val inpCompleteOut = out Bool ()

    // wait for axi-lite config signal
    val thresholdIn = in UInt (dW bits)
    val widthIn     = in UInt (log2Up(sW + 1) bits)
    val heightIn    = in UInt (log2Up(sH + 1) bits)

  }
  noIoPrefix()

  /* set the initial state */
  io.setInvalid()

  /* register the start work signal */
  val masterStart = RegNext(io.StartIn).init(False)

  /* register the startOut signal */
  val slaveStart = RegInit(False).setWhen(!io.inpTwoDoneIn && io.pixelsIn.fire).clearWhen(io.inpTwoDoneIn)

  /* register the frame start signal */
  val frameStart = RegInit(False).setWhen(io.pixelsIn.frameStart && io.pixelsIn.fire)

  /* register the threshold */
  val inpThreshold = RegNext(io.thresholdIn).init(U(128, dW bits))

  /* input bmp picture width */
  val bmpWidth = RegNext(io.widthIn).init(U(sW, log2Up(sW + 1) bits))

  /* input bmp picture height */
  val bmpHeight = RegNext(io.heightIn).init(U(sH, log2Up(sH + 1) bits))

  /* this signal can be use to halt the dataIn */
  val holdBuffer = RegInit(False).clearWhen(!io.StartIn)

  /* the signal indicate last interpolation is complete */
  val interComplete = RegInit(False).setWhen(io.inpThreeDoneIn).clearWhen(io.StartIn)

  /* record the number of row which is buffered */
  val bufferRowCount = Counter(sH + 1)

  /* when this signal is True, it means that the dataIn should be store in lineBufferTwo when we can receive dataIn */
  val bufferSwitch = RegInit(False).clearWhen(io.StartIn)

  /* the write enable signal of lineBuffer*/
  val bufferEnable = RegInit(False).setWhen(io.StartIn && !holdBuffer).clearWhen(!io.StartIn || holdBuffer)

  /* when it be true, it means the lineBufferTwo now is store the next row */
  val nextRowBuffer = RegInit(True).setWhen(io.StartIn)

  /* address Counter for write data to buffer */
  val bufferWAddr = Counter(sW)

  /* address Counter for output pixels */
  val outPixelAddr = Counter(2 * sW)

  /* the number of row which is already output*/
  val outRowCount = Counter(2 * sH + 1)

  /* the following lineBuffer is used to store two line pixels of source bmp */
  val lineBufferOne = Mem(UInt(dW bits), sW).init(Seq.fill(sW)(U(0).resized))
  val lineBufferTwo = Mem(UInt(dW bits), sW).init(Seq.fill(sW)(U(0).resized))

  /* control the frameStartOut and frameStart */
  when(frameStart && io.pixelsOut.valid) { io.pixelsOut.frameStart := True }
  when(frameStart && io.pixelsOut.fire) { frameStart := False }

  /* control the bufferRowCount */
  when(io.pixelsIn.rowEnd && io.pixelsIn.fire) { bufferRowCount.increment() }

  /* the bufferSwitch and bufferEnable logic */
  when(io.pixelsIn.rowEnd && io.pixelsIn.fire) { bufferSwitch := ~bufferSwitch }
  when(bufferRowCount =/= U(0) && io.pixelsIn.rowEnd && io.pixelsIn.fire) { holdBuffer.set() }
  when(outRowCount % U(2) === U(1) && io.pixelsOut.rowEnd && !holdBuffer) { holdBuffer.clear() }

  /* write data to buffer logic */
  io.pixelsIn.ready.allowOverride
  val dataStream = io.pixelsIn.continueWhen(bufferEnable)
  dataStream.freeRun()

  lineBufferTwo.write(bufferWAddr, dataStream.pixel, dataStream.fire && bufferSwitch)
  lineBufferOne.write(bufferWAddr, dataStream.pixel, dataStream.fire && !bufferSwitch)

  when(dataStream.fire) {
    when(io.pixelsIn.rowEnd) {
      bufferWAddr.clear()
    }.otherwise {
      bufferWAddr.increment()
    }
  }

}

object GenS extends App {
  SpinalVerilog(SuperResolutionPart1(IPConfig()))
}
