package SpGears.Algos.SuperResolution

import SpGears.TestUtilsFactory._
import scala.collection.mutable._
import spinal.core.sim._

object DDRDataWrapperTest extends App {
  getSimConfig().compile(DDRDataWrapper(IPConfig(10, 10))).doSim { dut =>
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
