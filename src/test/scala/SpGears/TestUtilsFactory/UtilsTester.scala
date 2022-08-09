package SpGears.TestUtilsFactory

import SpGears.TestUtilsFactory._
import spinal.core.sim._

import scala.collection.mutable._
import scala.util.Random._
import SpGears.Backend._
import org.scalatest.funsuite._

object UtilsTester extends App {

  // style one
  def startSim() = {
    val compiled = simConfig(backend = VCS).compile(UtilsTest())

    compiled.doSimUntilVoid { dut =>
      import dut._
      dut.clockDomain.forkStimulus(10)
      val tc1 = ArrayBuffer.fill(500)(BigInt(nextInt(64)))
      val tc2 = ArrayBuffer.fill(500)(nextBoolean())
      val tc3 = ArrayBuffer.fill(500)(BigInt(nextInt(64)))
      dataIn.setMasterDriver(dut.clockDomain, Seq(tc1, tc2): _*)
      //    dataIn.setZeroDriver(dut.clockDomain)
      baseIn.setDriver(dut.clockDomain, 2, tc3)
      val tc4 = new ArrayBuffer[BigInt]()
      val tc5 = new ArrayBuffer[Boolean]()
      val tc6 = new ArrayBuffer[BigInt]()
      dataIn.setStreamMonitor(dut.clockDomain, Seq(tc4, tc5): _*)
      baseIn.setMonitor(dut.clockDomain, 2, tc6)
      dataOut.setSlaveRandomReady(dut.clockDomain)
      val q1 = new ArrayBuffer[BigInt]()
      val q2 = new ArrayBuffer[Boolean]()
      val q3 = new ArrayBuffer[BigInt]()
      dataOut.setStreamMonitor(dut.clockDomain, Seq(q1, q2): _*)
      baseOut.setMonitor(dut.clockDomain, 2, q3)
      dataIn.setStreamAssert(dut.clockDomain)
      dataOut.setStreamAssert(dut.clockDomain)
      dut.clockDomain.waitSampling(100)
      println(tc4.map(_.toString().padTo(10, ' ')).mkString(""))
      println(tc5.map(_.toString().padTo(10, ' ')).mkString(""))
      println(tc6.map(_.toString().padTo(10, ' ')).mkString(""))
      println(q1.map(_.toString().padTo(10, ' ')).mkString(""))
      println(q2.map(_.toString().padTo(10, ' ')).mkString(""))
      println(q3.map(_.toString().padTo(10, ' ')).mkString(""))

      simSuccess()
    }
  }

  // style two
  val compiled = simConfig(backend = VCS).compile(UtilsTest())

  compiled.doSimUntilVoid { dut =>
    import dut._
    dut.clockDomain.forkStimulus(10)
    val tc1 = ArrayBuffer.fill(500)(BigInt(nextInt(64)))
    val tc2 = ArrayBuffer.fill(500)(nextBoolean())
    val tc3 = ArrayBuffer.fill(500)(BigInt(nextInt(64)))
    dataIn.setMasterDriver(dut.clockDomain, Seq(tc1, tc2): _*)
//    dataIn.setZeroDriver(dut.clockDomain)
    baseIn.setDriver(dut.clockDomain, 2, tc3)
    val tc4 = new ArrayBuffer[BigInt]()
    val tc5 = new ArrayBuffer[Boolean]()
    val tc6 = new ArrayBuffer[BigInt]()
    dataIn.setStreamMonitor(dut.clockDomain, Seq(tc4, tc5): _*)
    baseIn.setMonitor(dut.clockDomain, 2, tc6)
    dataOut.setSlaveRandomReady(dut.clockDomain)
    val q1 = new ArrayBuffer[BigInt]()
    val q2 = new ArrayBuffer[Boolean]()
    val q3 = new ArrayBuffer[BigInt]()
    dataOut.setStreamMonitor(dut.clockDomain, Seq(q1, q2): _*)
    baseOut.setMonitor(dut.clockDomain, 2, q3)
    dataIn.setStreamAssert(dut.clockDomain)
    dataOut.setStreamAssert(dut.clockDomain)
    dut.clockDomain.waitSampling(100)
    println(tc4.map(_.toString().padTo(10, ' ')).mkString(""))
    println(tc5.map(_.toString().padTo(10, ' ')).mkString(""))
    println(tc6.map(_.toString().padTo(10, ' ')).mkString(""))
    println(q1.map(_.toString().padTo(10, ' ')).mkString(""))
    println(q2.map(_.toString().padTo(10, ' ')).mkString(""))
    println(q3.map(_.toString().padTo(10, ' ')).mkString(""))

    simSuccess()
  }
}

class StyleOne extends AnyFunSuite {
  test("style one test !"){
    UtilsTester.startSim()
  }
}
