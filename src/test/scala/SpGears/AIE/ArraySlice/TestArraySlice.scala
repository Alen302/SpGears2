package SpGears.AIE.ArraySlice

import org.slf4j.{Logger, LoggerFactory}
import org.scalatest.funsuite.AnyFunSuite
import spinal.core._
import spinal.lib._
import spinal.core.sim._

import SpGears.TestUtilsFactory._
import scala.collection.mutable._

object simFunc {

  def startSim(
      H: Int,
      W: Int,
      M: Int,
      N: Int,
      ifmH: Int,
      ifmW: Int,
      ofmH: Int,
      ofmW: Int,
      workspaceName: String,
      testName: String,
      isPrint: Boolean,
      isPrintRawData: Boolean
  ) = {
    val compiled = simConfig(workSpaceName = workspaceName, config = SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetActiveLevel = LOW)))
      .compile(ArraySlice(32, ArraySliceConfig(W, H, M, N)).setDefinitionName("arraySlice"))

    compiled.doSim { dut =>
      val logger = LoggerFactory.getLogger(s"Test - ${testName}\n")

      val testCases = ArrayBuffer.tabulate(ifmH * ifmW)(BigInt(_)) ++
        ArrayBuffer.tabulate(ifmH * ifmW)(BigInt(_))

      dut.inputFeatureMapHeight  #= ifmH
      dut.inputFeatureMapWidth   #= ifmW
      dut.outputFeatureMapHeight #= ofmH
      dut.outputFeatureMapWidth  #= ofmW

      dut.clockDomain.forkStimulus(2)

      import dut.{inputStreamArrayData, outputStreamArrayData}

      val returnResult = ArrayBuffer.fill(outputStreamArrayData.size)(new ArrayBuffer[BigInt]())
      inputStreamArrayData.setDriver(dut.clockDomain, testCases)
      (0 until dut.outputStreamArrayData.size).foreach { i =>
        outputStreamArrayData(i).setRandomReady(dut.clockDomain)
        outputStreamArrayData(i).setMonitor(dut.clockDomain, returnResult(i))
      }

      val refResult = genRefResult(testCases, H, W, M, N, ifmH, ifmW, ofmH, ofmW)

      dut.clockDomain.waitSamplingWhere {
        Range(0, returnResult.size).forall { i =>
          returnResult(i).size == refResult(i).size
        }
      }

      val printSize            = (testCases ++ refResult.flatten ++ returnResult.flatten).map(_.toString.size).max
      val testCaseToString     = testCases.grouped(ifmH).toSeq.transpose.map(_.map(_.toString.padTo(printSize, ' ')))
      val refResultToString    = refResult.map(_.map(_.toString.padTo(printSize, ' ')))
      val dutResultToString    = returnResult.map(_.map(_.toString.padTo(printSize, ' ')))
      val printRefResultString = ArrayBuffer[String]()
      val printDutResultString = ArrayBuffer[String]()
      val printTestCaseString  = ArrayBuffer[String]()

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
      if (difference.isEmpty) {
        logger.info(
          s"Test - ${testName} pass successful !"
        )
      }
    }
  }

  def genRefResult(testCases: ArrayBuffer[BigInt], H: Int, W: Int, M: Int, N: Int, ifmH: Int, ifmW: Int, ofmH: Int, ofmW: Int)
      : ArrayBuffer[ArrayBuffer[BigInt]] = {

    val WPaddingValue = ifmW % (N * ofmW) match {
      case 0 => 0
      case _ => N * ofmW - ifmW % (N * ofmW)
    }

    val HPaddingValue = ifmH % (M * ofmH) match {
      case 0 => 0
      case _ => M * ofmH - ifmH % (M * ofmH)
    }
    val rawArray = testCases.grouped(ifmH * ifmW).map(_.toSeq).toSeq
    val rawArrayTransposedAndPadding = rawArray.map(
      _.grouped(ifmH).toSeq.transpose.map(_ ++ Seq.fill(WPaddingValue)(0.toBigInt))
        ++ Seq.fill(HPaddingValue)(ArrayBuffer.fill(ifmW + WPaddingValue)(0.toBigInt))
    )

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
    simFunc.startSim(64, 128, 8, 8, 36, 90, 3, 3, "case1", "case1", false, false)
  }
  // pass sim
  test("case2: not use all mem depth and number, but will padding at W dimension") {
    simFunc.startSim(64, 128, 8, 8, 48, 90, 3, 3, "case2", "case2", false, false)
  }
  // pass sim
  test("case3: not use all mem depth and number, but will padding at H dimension") {
    simFunc.startSim(64, 128, 8, 8, 60, 96, 3, 3, "case3", "case3", false, false)
  }
  // pass sim
  test("case4: not use all mem depth, but will padding at W dimension") {
    simFunc.startSim(64, 100, 8, 8, 48, 100, 3, 3, "case4", "case4", true, true)
  }
  // pass sim
  test("case5: not use all mem number, but will padding at W dimension") {
    simFunc.startSim(48, 128, 8, 8, 48, 90, 3, 3, "case5", "case5", false, false)
  }
  // pass sim
  test("case6: not use all mem depth, but will padding at H dimension") {
    simFunc.startSim(64, 128, 8, 8, 32, 96, 3, 3, "case5", "case5", false, false)
  }
  // pass sim
  test("case7: not use all mem number, but will padding at H dimension") {
    simFunc.startSim(64, 128, 8, 8, 64, 96, 3, 3, "case6", "case6", false, false)
  }
  // pass sim
  test("case8: not use all mem depth and number, and will not padding") {
    simFunc.startSim(72, 128, 8, 8, 48, 96, 3, 3, "case7", "case7", false, false)
  }
  // pass sim
  test("case9: not use all mem depth, and will padding at both dimention") {
    simFunc.startSim(72, 100, 8, 8, 64, 100, 3, 3, "case8", "case8", false, false)
  }
  // pass sim
  test("case10: not use all mem depth, and will not padding") {
    simFunc.startSim(72, 120, 8, 8, 48, 120, 3, 3, "case9", "case9", false, false)
  }
  // pass sim
  test("case11: not use all mem number, but will padding at both dimension") {
    simFunc.startSim(64, 128, 8, 8, 64, 90, 3, 3, "case10", "case10", false, false)
  }
  // pass sim
  test("case12: not use all mem number, but will not padding") {
    simFunc.startSim(72, 128, 8, 8, 72, 96, 3, 3, "case11", "case11", false, false)
  }
  // pass sim
  test("case13: use all mem, and will padding at W dimension") {
    simFunc.startSim(72, 80, 8, 8, 72, 80, 3, 3, "case12", "case12", false, false)
  }
  // pass sim
  test("case14: use all mem, and will padding at H dimension") {
    simFunc.startSim(60, 120, 8, 8, 60, 120, 3, 3, "case13", "case13", false, false)
  }
  // pass sim
  test("case15: use all mem, and will padding at both dimension") {
    simFunc.startSim(65, 110, 8, 8, 65, 110, 3, 3, "case14", "case14", false, false)
  }
  // pass sim
  test("case16: use all mem, and will not padding") {
    simFunc.startSim(72, 120, 8, 8, 72, 120, 3, 3, "case15", "case15", false, false)
  }
  // pass sim
  test("case17: use all mem, and will not padding") {
    simFunc.startSim(72, 120, 8, 8, 72, 120, 3, 3, "case16", "case16", false, false)
  }
}
