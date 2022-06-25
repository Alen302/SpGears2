package SpGears.TestUtilFactory

import SpGears.TestUtilsFactory._
import spinal.core.sim._

import scala.collection.mutable._
import scala.util.Random._
import SpGears.Backend._

object UtilsTester extends App {
  val compiled = simConfig(VCS).compile(UtilsTest())

  compiled.doSimUntilVoid { dut =>
    import dut._
    dut.clockDomain.forkStimulus(10)
    val tc1 = ArrayBuffer.fill(500)(BigInt(nextInt(64)))
    val tc2 = ArrayBuffer.fill(500)(nextBoolean())
    val tc3 = ArrayBuffer.fill(500)(BigInt(nextInt(64)))
    dataIn.setDriver(dut.clockDomain, Seq(tc1, tc2): _*)
//    dataIn.setZeroDriver(dut.clockDomain)
    baseIn.getDriver(dut.clockDomain, 2, tc3)
    val tc4 = new ArrayBuffer[BigInt]()
    val tc5 = new ArrayBuffer[Boolean]()
    val tc6 = new ArrayBuffer[BigInt]()
    dataIn.setMonitor(dut.clockDomain, Seq(tc4, tc5): _*)
    baseIn.getMonitor(dut.clockDomain, 2, tc6)
    dataOut.setRandomReady(dut.clockDomain)
    val q1 = new ArrayBuffer[BigInt]()
    val q2 = new ArrayBuffer[Boolean]()
    val q3 = new ArrayBuffer[BigInt]()
    dataOut.setMonitor(dut.clockDomain, Seq(q1, q2): _*)
    baseOut.getMonitor(dut.clockDomain, 2, q3)
    dut.clockDomain.waitSampling(100)
    dataIn.setAssert(dut.clockDomain)
    dataOut.setAssert(dut.clockDomain)
    println(tc4.map(_.toString().padTo(10, ' ')).mkString(""))
    println(tc5.map(_.toString().padTo(10, ' ')).mkString(""))
    println(tc6.map(_.toString().padTo(10, ' ')).mkString(""))
    println(q1.map(_.toString().padTo(10, ' ')).mkString(""))
    println(q2.map(_.toString().padTo(10, ' ')).mkString(""))
    println(q3.map(_.toString().padTo(10, ' ')).mkString(""))

    simSuccess()
  }
}
