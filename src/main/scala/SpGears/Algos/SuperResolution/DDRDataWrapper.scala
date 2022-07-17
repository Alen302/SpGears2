package SpGears.Algos.SuperResolution

import spinal.lib._
import spinal.core._

import SpGears.TestUtilsFactory._
import scala.collection.mutable._
import spinal.core.sim._

case class DDRDataWrapper(config: IPConfig) extends Component {
  def dW = config.dataW

  def sW = config.srcW

  val ddrIn     = slave Stream UInt(3 * dW bits)
  val pixelsOut = master Stream PixelData(config, allChannel = true)
  val inpDone   = in Bool ()
  val bmpWidth  = in UInt (log2Up(sW + 1) bits)

  val isNewTransfer = RegInit(True).setWhen(inpDone).clearWhen(pixelsOut.frameStart && pixelsOut.fire)
  val imgWidth      = RegNext(bmpWidth).init(bmpWidth.getAllTrue)

  val transactionCounter = StreamTransactionCounter(ddrIn, pixelsOut, imgWidth - U(1))

  pixelsOut.translateFrom(ddrIn.stage()) { (pOut, dIn) =>
    pOut.pixel      := dIn
    pOut.rowEnd     := transactionCounter.io.last
    pOut.frameStart := isNewTransfer && transactionCounter.io.value === U(0)
  }

}
