package SpGears.Algos.SuperResolution

import spinal.lib._
import spinal.core._

import SpGears.TestUtilsFactory._
import scala.collection.mutable._
import spinal.core.sim._

case class FlagSignalGenerator(config: IPConfig) extends Component {
  def dW = config.dataW

  def sW = config.srcW

  val ddrIn     = slave Stream UInt(dW bits)
  val pixelsOut = master Stream PixelData(config)
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

object FlagSignalGeneratorTest extends App {
  simConfig().compile(FlagSignalGenerator(IPConfig(10, 10))).doSim { dut =>
    dut.clockDomain.forkStimulus(10)

    // initiate
    dut.ddrIn.haltCycles(dut.clockDomain)
    dut.pixelsOut.haltCycles(dut.clockDomain)
    dut.inpDone  #= false
    dut.bmpWidth #= 0

    // driver
    dut.ddrIn.setMasterRandomDriver(dut.clockDomain)
    dut.pixelsOut.setSlaveRandomReady(dut.clockDomain)
    dut.bmpWidth #= 10

    // monitor
    val ddrIns      = ArrayBuffer[BigInt]()
    val pixels      = ArrayBuffer[BigInt]()
    val rowEnds     = ArrayBuffer[Boolean]()
    val frameStarts = ArrayBuffer[Boolean]()

    dut.ddrIn.setStreamMonitor(dut.clockDomain, ddrIns)
    dut.pixelsOut.setStreamMonitor(dut.clockDomain, Seq(pixels, frameStarts, rowEnds): _*)

    dut.clockDomain.waitSamplingWhere(pixels.size == 100)
    dut.inpDone #= true
    dut.clockDomain.waitSampling()
    dut.inpDone #= false
    println(s" ddrIns : ${ddrIns.map(_.toString.padTo(7, ' ')).mkString("")}")
    println(s" pixels : ${pixels.map(_.toString.padTo(7, ' ')).mkString("")}")
    println(s" frameStarts : ${frameStarts.map(_.toString.padTo(7, ' ')).mkString("")}")
    println(s" rowEnds : ${rowEnds.map(_.toString.padTo(7, ' ')).mkString("")}")
  }
}
