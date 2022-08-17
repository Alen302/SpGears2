package SpGears.TestUtils

import SpGears.TestUtils.SimUtils._
import SpGears.TestUtils.UVM._
import org.scalatest.funsuite._
import spinal.core.sim._

import scala.collection.mutable._
import scala.util.Random._

object UtilsTester extends App {

  // style one
  def startSim(printEnable: Boolean = false) = {
    val compiled = getSimConfig().compileWithMake(UtilsTest())

    compiled.doSimUntilVoid { dut =>
      import dut._
      dut.clockDomain.forkStimulus(10)
      val tc1 = ArrayBuffer.fill(500)(BigInt(nextInt(255) + 1)).distinct
      val tc2 = ArrayBuffer.fill(500)(nextBoolean())
      val tc3 = ArrayBuffer.fill(500)(BigInt(nextInt(255) + 1)).distinct
      dataIn.setDriverRandomly(dut.clockDomain, latency = 0, Seq(tc1, tc2): _*)
//      dataIn.setZeroDriverRandomly(clockDomain, latency = 0)
      //    dataIn.setZeroDriver(dut.clockDomain)
      baseIn.setDriver(dut.clockDomain, latency = 1, driveGap = 2, randomMode = false, driveWhen = true, tc3)
      val tc4 = new ArrayBuffer[BigInt]()
      val tc5 = new ArrayBuffer[Boolean]()
      val tc6 = new ArrayBuffer[BigInt]()
      dataIn.setMonitorAlways(clockDomain, latency     = 0, Seq(tc4, tc5): _*)
      baseIn.setMonitorAlways(dut.clockDomain, latency = 1, tc6)
      dataOut.setRandomDriverRandomly(dut.clockDomain)
      val q1 = new ArrayBuffer[BigInt]()
      val q2 = new ArrayBuffer[Boolean]()
      val q3 = new ArrayBuffer[BigInt]()
      dataOut.setMonitorAlways(dut.clockDomain, latency = 0, Seq(q1, q2): _*)
      baseOut.setMonitorAlways(dut.clockDomain, latency = 2, q3)
      dataIn.setStreamAssert(dut.clockDomain)
      dataOut.setStreamAssert(dut.clockDomain)
      dut.clockDomain.waitSampling(100)

      if (printEnable) {
        println(tc1.map(_.toString().padTo(10, ' ')).mkString(""))
        println(tc2.map(_.toString().padTo(10, ' ')).mkString(""))
        println(tc3.map(_.toString().padTo(10, ' ')).mkString(""))
        println(tc4.map(_.toString().padTo(10, ' ')).mkString(""))
        println(tc5.map(_.toString().padTo(10, ' ')).mkString(""))
        println(tc6.filter(_ != 0).distinct.map(_.toString().padTo(10, ' ')).mkString(""))
        println(q1.map(_.toString().padTo(10, ' ')).mkString(""))
        println(q2.map(_.toString().padTo(10, ' ')).mkString(""))
        println(q3.map(_.toString().padTo(10, ' ')).mkString(""))
      }

      val baseCorrect      = tc3.zip(tc6.filter(_ != 0).distinct).forall { case (int, int1) => int == int1 } && q3.filter(_ != 0).distinct.zip(tc6.filter(_ != 0).distinct).forall { case (int, int1) => int == int1 }
      val dataInCorrectOne = tc1.zip(tc4).forall { case (int, int1) => int == int1 } && tc4.zip(q1).forall { case (int, int1) => int == int1 }
      val dataInCorrectTwo = tc2.zip(tc5).forall { case (int, int1) => int == int1 } && tc5.zip(q2).forall { case (int, int1) => int == int1 }
      if (baseCorrect && dataInCorrectOne && dataInCorrectTwo) {
        println("This test pass !")
        simSuccess()
      } else {
        simFailure(s"baseCorrect : ${baseCorrect}\t dataInCorrectOne : ${dataInCorrectOne}\t dataInCorrectTwo : ${dataInCorrectTwo}")
      }
    }
  }
}

class StyleOne extends AnyFunSuite {
  test("style one test !") {
    UtilsTester.startSim(printEnable = true)
  }
}
