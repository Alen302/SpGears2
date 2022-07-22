package SpGears.Algos.SuperResolution

import SpGears.TestUtilsFactory._
import org.scalatest.funsuite._
import org.slf4j._
import spinal.core.sim._

import scala.collection.mutable._
import scala.util.Random._

object sim2Funcs {
  def startSim(threshold: Int, sH: Int, sW: Int, testCases: ArrayBuffer[BigInt], golden: ArrayBuffer[BigInt], isPrint: Boolean = false) = {
    val compiled         = SimConfig.withFstWave.compile(SuperResolutionPart2(IPConfig(sH, sW)))
    val pixelOuts        = ArrayBuffer[BigInt]()
    val frameStartOuts   = ArrayBuffer[Boolean]()
    val rowEndOuts       = ArrayBuffer[Boolean]()
    val inpValidOuts     = ArrayBuffer[Boolean]()
    val frameStartIns    = true +: ArrayBuffer.fill(testCases.size - 1)(false)
    val rowEndIns        = ArrayBuffer.fill(testCases.size)(false).zipWithIndex.map { case (bool, i) => if ((i + 1) % (2 * sW) == 0) true else false }
    val getTestCasesIns  = ArrayBuffer[BigInt]()
    val getFrameStartIns = ArrayBuffer[Boolean]()
    val getRowEndIns     = ArrayBuffer[Boolean]()

    compiled.doSimUntilVoid { dut =>
      val logger = LoggerFactory.getLogger(s"Test : SuperResolutionPart2Test")

      import dut.{clockDomain, io}
      clockDomain.forkStimulus(2)
      io.pixelsIn.setMasterDriver(clockDomain, Seq(testCases, frameStartIns, rowEndIns): _*)
      io.pixelsIn.setStreamMonitor(clockDomain, Seq(getTestCasesIns, getFrameStartIns, getRowEndIns): _*)
      io.pixelsOut.setStreamMonitor(clockDomain, Seq(pixelOuts, frameStartOuts, rowEndOuts, inpValidOuts): _*)
      io.pixelsOut.setSlaveRandomReady(clockDomain)
      io.pixelsIn.rowEnd     #= false
      io.pixelsIn.frameStart #= false
      io.startIn             #= false
      io.widthIn             #= 1
      io.heightIn            #= 1
      io.inpThreeDoneIn      #= false
      clockDomain.waitSampling(3)
      io.widthIn     #= sW
      io.heightIn    #= sH
      io.thresholdIn #= threshold
      io.startIn     #= true
      clockDomain.waitSamplingWhere(pixelOuts.size == testCases.size * 4)
      io.startIn        #= false
      io.inpThreeDoneIn #= true
      dut.clockDomain.waitSampling(2)

      println(s" sim done at ${simTime()}")

      if (isPrint) {
        val formatTestCases      = testCases.map(_.toString.padTo(5, ' ')).grouped(2 * sW).toSeq.map(_.mkString("")).mkString("\n")
        val formatGolden         = golden.map(_.toString.padTo(5, ' ')).grouped(4 * sW).toSeq.map(_.mkString("")).mkString("\n")
        val formatResults        = pixelOuts.map(_.toString.padTo(5, ' ')).grouped(4 * sW).toSeq.map(_.mkString("")).mkString("\n")
        val formatRowEndOuts     = rowEndOuts.map(_.toString.padTo(7, ' ')).grouped(4 * sW).toSeq.map(_.mkString("")).mkString("\n")
        val formatFrameStartOuts = frameStartOuts.map(_.toString.padTo(7, ' ')).grouped(4 * sW).toSeq.map(_.mkString("")).mkString("\n")
        val formatInpValidOuts   = inpValidOuts.map(_.toString.padTo(7, ' ')).grouped(4 * sW).toSeq.map(_.mkString("")).mkString("\n")
        logger.info(
          s"\n"
            + "testCases : \n"
            + formatTestCases
            + s"\n"
            + "golden : \n"
            + formatGolden
            + s"\n"
            + s"results : \n"
            + formatResults
            + s"\n"
            + s"rowEndOuts : \n"
            + formatRowEndOuts
            + s"\n"
            + s"frameStartOuts: \n"
            + formatFrameStartOuts
            + s"\n"
            + s"inpValidOuts: \n"
            + formatInpValidOuts
            + s"\n"
        )
      }
      if (compareResults(pixelOuts, golden)) {
        simSuccess()
      } else {
        simFailure("test fail !")
      }
    }
  }

  def getGolden(threshold: Int, sH: Int, sW: Int, testCases: ArrayBuffer[BigInt], isPrint: Boolean = false) = {
    val golden          = ArrayBuffer[BigInt]()
    val rows            = testCases.grouped(2 * sW).toBuffer
    val inpFirstPixels  = ArrayBuffer.fill(sH)(ArrayBuffer[BigInt]())
    val inpSecondPixels = ArrayBuffer.fill(sH)(ArrayBuffer[BigInt]())
    val inpThirdPixels  = ArrayBuffer.fill(sH)(ArrayBuffer[BigInt]())
    val inpFourthPixels = ArrayBuffer.fill(sH)(ArrayBuffer[BigInt]())

    Range(0, sH).foreach { fIdx =>
      val lastRow = 2 * fIdx
      Range(0, 4 * sW).foreach { i =>
        if (i % 4 == 0 || i % 4 == 2) {
          inpFirstPixels(fIdx) += rows(lastRow)(i / 2)
        } else {
          if (i % 4 == 1) {
            inpFirstPixels(fIdx) += rows(lastRow)((i - 1) / 2)
          } else {
            if (i + 1 <= 4 * sW - 1) {
              if ((rows(lastRow)((i - 3) / 2) - rows(lastRow)((i + 1) / 2)).abs >= threshold) {
                inpFirstPixels(fIdx) += 0
              } else {
                inpFirstPixels(fIdx) += (rows(lastRow)((i - 3) / 2) + rows(lastRow)((i + 1) / 2)) / 2
              }
            } else {
              inpFirstPixels(fIdx) += rows(lastRow)((i - 3) / 2)
            }
          }
        }
      }
    }

    Range(0, sH).foreach { sIdx =>
      val lastRow = 2 * sIdx
      var nextRow = 2 * sIdx + 2
      if (nextRow > 2 * sH - 1) { nextRow = nextRow - 2 }
      Range(0, 4 * sW).foreach { i =>
        if (i % 4 == 0 || i % 4 == 1 || i % 4 == 2) {
          inpSecondPixels(sIdx) += rows(lastRow)((i - i % 4) / 2)
          if ((rows(lastRow)((i - i % 4) / 2) - rows(nextRow)((i - i % 4) / 2)).abs >= threshold) {
            inpFourthPixels(sIdx) += 0
          } else {
            inpFourthPixels(sIdx) += (rows(lastRow)((i - i % 4) / 2) + rows(nextRow)((i - i % 4) / 2)) / 2
          }
        } else {
          if (i + 1 <= 4 * sW - 1) {
            val mDiff = (rows(lastRow)((i - 3) / 2) - rows(nextRow)((i + 1) / 2)).abs
            val cDiff = (rows(nextRow)((i - 3) / 2) - rows(lastRow)((i + 1) / 2)).abs
            if ((rows(lastRow)((i - 3) / 2) - rows(lastRow)((i + 1) / 2)).abs >= threshold) {
              inpSecondPixels(sIdx) += 0
            } else {
              inpSecondPixels(sIdx) += (rows(lastRow)((i - 3) / 2) + rows(lastRow)((i + 1) / 2)) / 2
            }

            if (Seq(mDiff, cDiff).min >= threshold) {
              inpFourthPixels(sIdx) += 0
            } else {
              if (mDiff >= cDiff) {
                inpFourthPixels(sIdx) += (rows(nextRow)((i - 3) / 2) + rows(lastRow)((i + 1) / 2)) / 2
              } else {
                inpFourthPixels(sIdx) += (rows(lastRow)((i - 3) / 2) + rows(nextRow)((i + 1) / 2)) / 2
              }
            }
          } else {
            inpSecondPixels(sIdx) += rows(lastRow)((i - 3) / 2)
            if ((rows(lastRow)((i - 3) / 2) - rows(nextRow)((i - 3) / 2)).abs >= threshold) {
              inpFourthPixels(sIdx) += 0
            } else {
              inpFourthPixels(sIdx) += (rows(lastRow)((i - 3) / 2) + rows(nextRow)((i - 3) / 2)) / 2
            }
          }
        }
      }
    }

    Range(0, sH).foreach { tIdx =>
      val lastRow = 2 * tIdx + 1
      Range(0, 4 * sW).foreach { i =>
        if (i % 4 == 0 || i % 4 == 2) {
          inpThirdPixels(tIdx) += rows(lastRow)(i / 2)
        } else {
          if (i % 4 == 1) {
            inpThirdPixels(tIdx) += rows(lastRow - 1)((i - 1) / 2)
          } else {
            if (i + 1 <= 4 * sW - 1) {
              if ((rows(lastRow - 1)((i - 3) / 2) - rows(lastRow - 1)((i + 1) / 2)).abs >= threshold) {
                inpThirdPixels(tIdx) += 0
              } else {
                inpThirdPixels(tIdx) += (rows(lastRow - 1)((i - 3) / 2) + rows(lastRow - 1)((i + 1) / 2)) / 2
              }
            } else {
              inpThirdPixels(tIdx) += rows(lastRow - 1)((i - 3) / 2)
            }
          }
        }
      }
    }

//    println(rows.map(_.map(_.toString.padTo(3, ' ')).mkString("")).mkString("\n"))
//    println("----")
//    println(inpFirstPixels.map(_.map(_.toString.padTo(3, ' ')).mkString("")).mkString("\n"))
//    println("----")
//    println(inpSecondPixels.map(_.map(_.toString.padTo(3, ' ')).mkString("")).mkString("\n"))
//    println("----")
//    println(inpThirdPixels.map(_.map(_.toString.padTo(3, ' ')).mkString("")).mkString("\n"))
//    println("----")
//    println(inpFourthPixels.map(_.map(_.toString.padTo(3, ' ')).mkString("")).mkString("\n"))

    Range(0, 4 * sH).foreach { h =>
      h % 4 match {
        case 0 => golden ++= inpFirstPixels(h / 4)
        case 1 => golden ++= inpSecondPixels(h / 4)
        case 2 => golden ++= inpThirdPixels(h / 4)
        case 3 => golden ++= inpFourthPixels(h / 4)
      }
    }

//    println("***")
//    println(golden.map(_.toString.padTo(3, ' ')).grouped(4 * sW).toSeq.map(_.mkString("")).mkString("\n"))

    golden
  }

  def compareResults(utArray: ArrayBuffer[BigInt], refArray: ArrayBuffer[BigInt]) = {
    require(utArray.size == refArray.size, "two array's size is not match !")
    var ret = true
    utArray.zip(refArray).foreach { case (int, int1) => if (int != int1) ret = false }
    ret
  }

}

class SuperResolutionPart2Test extends AnyFunSuite {
  test("Test SuperResolutionPart2 5 * 5 ") {
    val testCases = ArrayBuffer.fill(10 * 10)(BigInt(nextInt(32) + 1))
    sim2Funcs.startSim(16, 5, 5, testCases, sim2Funcs.getGolden(16, 5, 5, testCases), true)

  }
  test("Test SuperResolutionPart2 Randomly !") {
    val h         = 540
    val w         = 960
    val thd       = 144
    val testCases = ArrayBuffer.fill(4 * h * w)(BigInt(nextInt(255) + 1))
    sim2Funcs.startSim(thd, h, w, testCases, sim2Funcs.getGolden(thd, h, w, testCases), true)
  }
}
