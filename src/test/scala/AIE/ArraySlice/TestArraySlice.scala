package AIE.ArraySlice

import org.slf4j.{Logger, LoggerFactory}
import AIE.ArraySlice._
import TestUtil._
import org.scalatest.funsuite.AnyFunSuite
import spinal.core._
import spinal.lib._
import spinal.core.sim._

import scala.collection.immutable
import scala.collection.mutable._

import scala.util.Random

object simFunc {

  def startSim(H: Int, W: Int, M: Int, N: Int,
               ifmH: Int, ifmW: Int, ofmH: Int, ofmW: Int,
               isMasterRandom: Boolean, isSlaveRandom: Boolean,
               workspaceName: String, testName: String,
               latency: Int, isPrint: Boolean, isPrintRawData: Boolean) = {
    val compiled = SimConfig.workspaceName(workspaceName).withFstWave.withConfig(SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetActiveLevel = LOW)))
      .compile(ArraySlice(32, ArraySliceConfig(W, H, M, N)).setDefinitionName("arraySlice"))

    compiled.doSim { dut =>

      val logger = LoggerFactory.getLogger(s"Test - ${testName}\n")

      val testCases = ArrayBuffer.tabulate(ifmH * ifmW)(BigInt(_)) ++
        ArrayBuffer.tabulate(ifmH * ifmW)(BigInt(_))

      dut.inputFeatureMapHeight #= ifmH
      dut.inputFeatureMapWidth #= ifmW
      dut.outputFeatureMapHeight #= ofmH
      dut.outputFeatureMapWidth #= ofmW


      val slaveThread = fork {
        while (true) {
          if (!isSlaveRandom) {
            (0 until dut.outputStreamArrayData.size).foreach { i =>
              dut.outputStreamArrayData(i).ready #= true
            }
            dut.clockDomain.waitSampling()
          } else {
            (0 until dut.outputStreamArrayData.size).foreach { i =>
              dut.outputStreamArrayData(i).ready.randomize()
            }
            dut.clockDomain.waitSampling()
          }
        }
      }


      dut.inputStreamArrayData.clear()


      dut.clockDomain.assertReset()
      dut.clockDomain.forkStimulus(2)
      dut.clockDomain.waitSampling()


      import dut.{inputStreamArrayData, outputStreamArrayData}
      val returnResult = isMasterRandom match {
        case true => streamPeekPokeDataRandomOneToMore[BigInt, BigInt, Bits, Bits](dut, testCases, inputStreamArrayData, outputStreamArrayData, latency)
        case false => streamPeekPokeAllDataOneToMore[BigInt, BigInt, Bits, Bits](dut, testCases, inputStreamArrayData, outputStreamArrayData, latency)
      }

      val refResult = genRefResult(testCases, H, W, M, N, ifmH, ifmW, ofmH, ofmW)

      val printSize = (testCases ++ refResult.flatten ++ returnResult.flatten).map(_.toString.size).max
      val testCaseToString = testCases.grouped(ifmH).toSeq.transpose.map(_.map(_.toString.padTo(printSize, ' ')))
      val refResultToString = refResult.map(_.map(_.toString.padTo(printSize, ' ')))
      val dutResultToString = returnResult.map(_.map(_.toString.padTo(printSize, ' ')))
      val printTestCaseString = ArrayBuffer[String]()
      val printRefResultString = ArrayBuffer[String]()
      val printDutResultString = ArrayBuffer[String]()


      (0 until testCaseToString.length).foreach { i =>
        printTestCaseString += s"${testCaseToString(i).mkString(" ")}"
      }
      (0 until dutResultToString.length).foreach { i =>
        printDutResultString += s"${dutResultToString(i).mkString(" ")}"
      }
      (0 until refResultToString.length).foreach { i =>
        printRefResultString += s"${refResultToString(i).mkString(" ")}"
      }
      if (isPrint) {
        if (isPrintRawData) {
          logger.info(
            s"testCase: \n"
              + printTestCaseString.mkString("\n")
              + s"\n"
              + s"dutResult: \n"
              + printDutResultString.mkString("\n")
              + s"\n"
              + s"refResult: \n"
              + printRefResultString.mkString("\n")
          )
        } else {
          logger.info(
            s"dutResult: \n"
              + printDutResultString.mkString("\n")
              + s"\n"
              + s"refResult: \n"
              + printRefResultString.mkString("\n")
          )
        }
      }
      val difference = printDutResultString.diff(printRefResultString)
      assert(difference.isEmpty, s"This test failed ! \n The difference is: \n ${difference}")
      if(difference.isEmpty){
        logger.info(
          s"Test - ${testName} pass successful !"
        )
      }
    }
  }

  def startSimIOAlwaysTrans(H: Int, W: Int, M: Int, N: Int,
                            ifmH: Int, ifmW: Int, ofmH: Int, ofmW: Int,
                            workspaceName: String, testName: String,
                            latency: Int, isPrint: Boolean, isPrintRawData: Boolean) = {
    startSim(H, W, M, N, ifmH, ifmW, ofmH, ofmW, false, false, workspaceName, testName, latency, isPrint, isPrintRawData)
  }

  def startSimIORandom(H: Int, W: Int, M: Int, N: Int,
                       ifmH: Int, ifmW: Int, ofmH: Int, ofmW: Int,
                       workspaceName: String, testName: String,
                       latency: Int, isPrint: Boolean, isPrintRawData: Boolean): Unit = {
    startSim(H, W, M, N, ifmH, ifmW, ofmH, ofmW, true, true, workspaceName, testName, latency, isPrint, isPrintRawData)
  }


  def genRefResult(testCases: ArrayBuffer[BigInt], H: Int, W: Int, M: Int, N: Int,
                   ifmH: Int, ifmW: Int, ofmH: Int, ofmW: Int): ArrayBuffer[ArrayBuffer[BigInt]] = {

    val WPaddingValue = ifmW % (N * ofmW) match {
      case 0 => 0
      case _ => N * ofmW - ifmW % (N * ofmW)
    }

    val HPaddingValue = ifmH % (M * ofmH) match {
      case 0 => 0
      case _ => M * ofmH - ifmH % (M * ofmH)
    }
    val rawArray = testCases.grouped(ifmH * ifmW).map(_.toSeq).toSeq
    val rawArrayTransposedAndPadding = rawArray.map(_.grouped(ifmH).toSeq.transpose.map(_ ++ Seq.fill(WPaddingValue)(0.toBigInt))
      ++ Seq.fill(HPaddingValue)(ArrayBuffer.fill(ifmW + WPaddingValue)(0.toBigInt)))

    val reducedDimensionArray = ArrayBuffer.fill(ifmH + HPaddingValue)(ArrayBuffer[BigInt]())
    rawArrayTransposedAndPadding.indices.foreach { i =>
      rawArrayTransposedAndPadding(i).indices.foreach { j =>
        reducedDimensionArray(j) ++= rawArrayTransposedAndPadding(i)(j)
      }
    }

    val refResult = ArrayBuffer.fill(N)(ArrayBuffer[BigInt]())
    val yLoopTime = reducedDimensionArray(0).size / (N * ofmW)
    val xLoopTime = reducedDimensionArray.length / ofmH

    Range(0, N).foreach { p =>
      Range(0, yLoopTime).foreach { yl =>
        Range(0, xLoopTime).foreach { xl =>
          Range(0, ofmW).foreach { y =>
            Range(0, ofmH).foreach { x =>
              refResult(p) += reducedDimensionArray(x + xl * ofmH)(yl * N * ofmW + p * ofmW + y)
            }
          }
        }
      }
    }
    refResult

  }
}

class TestArraySlice extends AnyFunSuite {

  /* dataIn all valid(if testCase nonEmpty or master always ready for output)
   dataOut all ready (slave always can receive data)
   */

  // pass sim
  test("case1: not use all mem depth and number, but will padding at both dimension") {
    simFunc.startSimIORandom(64, 128, 8, 8, 36, 90, 3, 3, "case1", "case1", 2500, false, false)
  }
  // pass sim
  test("case2: not use all mem depth and number, but will padding at W dimension") {
    simFunc.startSimIORandom(64, 128, 8, 8, 48, 90, 3, 3, "case2", "case2", 2500, false, false)
  }
  // pass sim
  test("case3: not use all mem depth and number, but will padding at H dimension") {
    simFunc.startSimIORandom(64, 128, 8, 8, 60, 96, 3, 3, "case3", "case3", 2500, false, false)
  }
  // pass sim
  test("case4: not use all mem depth, but will padding at W dimension") {
    simFunc.startSimIORandom(64, 100, 8, 8, 48, 100, 3, 3, "case4", "case4", 2500, false, false)
  }
  // pass sim
  test("case5: not use all mem number, but will padding at W dimension") {
    simFunc.startSimIORandom(48, 128, 8, 8, 48, 90, 3, 3, "case5", "case5", 2500, false, false)
  }
  // pass sim
  test("case5: not use all mem depth, but will padding at H dimension") {
    simFunc.startSimIORandom(64, 128, 8, 8, 32, 96, 3, 3, "case5", "case5", 2500, false, false)
  }
  // pass sim
  test("case6: not use all mem number, but will padding at H dimension") {
    simFunc.startSimIORandom(64, 128, 8, 8, 64, 96, 3, 3, "case6", "case6", 2500, false, false)
  }
  // pass sim
  test("case7: not use all mem depth and number, and will not padding") {
    simFunc.startSimIORandom(72, 128, 8, 8, 48, 96, 3, 3, "case7", "case7", 2500, false, false)
  }
  // pass sim
  test("case8: not use all mem depth, and will padding at both dimention") {
    simFunc.startSimIORandom(72, 100, 8, 8, 64, 100, 3, 3, "case8", "case8", 2500, false, false)
  }
  // pass sim
  test("case9: not use all mem depth, and will not padding") {
    simFunc.startSimIORandom(72, 120, 8, 8, 48, 120, 3, 3, "case9", "case9", 2500, false, false)
  }
  // pass sim
  test("case10: not use all mem number, but will padding at both dimension") {
    simFunc.startSimIORandom(64, 128, 8, 8, 64, 90, 3, 3, "case10", "case10", 2500, false, false)
  }
  // pass sim
  test("case11: not use all mem number, but will not padding") {
    simFunc.startSimIORandom(72, 128, 8, 8, 72, 96, 3, 3, "case11", "case11", 2500, false, false)
  }
  // pass sim
  test("case12: use all mem, and will padding at W dimension") {
    simFunc.startSimIORandom(72, 80, 8, 8, 72, 80, 3, 3, "case12", "case12", 2500, false, false)
  }
  // pass sim
  test("case13: use all mem, and will padding at H dimension") {
    simFunc.startSimIORandom(60, 120, 8, 8, 60, 120, 3, 3, "case13", "case13", 2500, false, false)
  }
  // pass sim
  test("case14: use all mem, and will padding at both dimension") {
    simFunc.startSimIORandom(65, 110, 8, 8, 65, 110, 3, 3, "case14", "case14", 2500, false, false)
  }
  // pass sim
  test("case15: use all mem, and will not padding") {
    simFunc.startSimIORandom(72, 120, 8, 8, 72, 120, 3, 3, "case15", "case15", 2500, false, false)
  }
  // pass sim
  test("case16: use all mem, and will not padding") {
    simFunc.startSimIORandom(72, 120, 8, 8, 72, 120, 3, 3, "case16", "case16", 2500, false, false)
  }
}
