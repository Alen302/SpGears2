package SpGears.Algos.SuperResolution

import SpGears.TestUtils.UVM._
import SpGears.TestUtils.SimUtils._
import scala.collection.mutable._
import spinal.core.sim._

object DDRDataWrapperTest extends App {
  getSimConfig().compile(DDRDataWrapper(IPConfig(10, 10))).doSim { dut =>
    dut.clockDomain.forkStimulus(10)

    // initiate
    dut.ddrIn.setRandomInitValue(dut.clockDomain)
    dut.pixelsOut.setRandomInitValue(dut.clockDomain)
    dut.inpDone  #= false
    dut.bmpWidth #= 0

    // driver
    dut.ddrIn.setRandomDriverRandomly(dut.clockDomain)
    dut.pixelsOut.setRandomDriverRandomly(dut.clockDomain)
    dut.bmpWidth #= 10

    // monitor
    val ddrIns      = ArrayBuffer[BigInt]()
    val pixels      = ArrayBuffer[BigInt]()
    val rowEnds     = ArrayBuffer[Boolean]()
    val frameStarts = ArrayBuffer[Boolean]()

    dut.ddrIn.setMonitorAlways(dut.clockDomain, latency     = 0, ddrIns)
    dut.pixelsOut.setMonitorAlways(dut.clockDomain, latency = 0, Seq(pixels, frameStarts, rowEnds): _*)

    dut.clockDomain.waitSamplingWhere(pixels.size == 100)
    dut.inpDone #= true
    dut.clockDomain.waitSampling()
    dut.inpDone #= false
    println(s" ddrIns : ${ddrIns.map(_.toString.padTo(15, ' ')).mkString("")}")
    println(s" pixels : ${pixels.map(_.toString.padTo(15, ' ')).mkString("")}")
    println(s" frameStarts : ${frameStarts.map(_.toString.padTo(7, ' ')).mkString("")}")
    println(s" rowEnds : ${rowEnds.map(_.toString.padTo(7, ' ')).mkString("")}")
  }
}
