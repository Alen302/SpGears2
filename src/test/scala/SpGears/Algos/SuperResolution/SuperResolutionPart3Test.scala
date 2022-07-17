package SpGears.Algos.SuperResolution

import org.scalatest.funsuite._
import org.slf4j._
import spinal.core.sim._
import SpGears.TestUtilsFactory._

import scala.collection.mutable._
import scala.util.Random._

object sim3Funcs {
  def startSim(threshold: Int, sH: Int, sW: Int, testCases: ArrayBuffer[BigInt], golden: ArrayBuffer[BigInt], isPrint: Boolean = false) = {
    val compiled = SimConfig.withFstWave.compile(SuperResolutionPart3(IPConfig(sH, sW)))

    val pixelOuts        = ArrayBuffer[BigInt]()
    val frameStartOuts   = ArrayBuffer[Boolean]()
    val rowEndOuts       = ArrayBuffer[Boolean]()
    val frameStartIns    = true +: ArrayBuffer.fill(testCases.size - 1)(false)
    val rowEndIns        = ArrayBuffer.fill(testCases.size)(false).zipWithIndex.map { case (bool, i) => if ((i + 1) % (4 * sW) == 0) true else false }
    val inpValidIns      = testCases.map(e => if (e == 0) false else true)
    val getTestCasesIns  = ArrayBuffer[BigInt]()
    val getFrameStartIns = ArrayBuffer[Boolean]()
    val getRowEndIns     = ArrayBuffer[Boolean]()
    val getInpValidIns   = ArrayBuffer[Boolean]()

    compiled.doSimUntilVoid { dut =>
      val logger = LoggerFactory.getLogger(s"Test : SuperResolutionPart3Test")

      import dut.{clockDomain, io}
      clockDomain.forkStimulus(2)
      io.pixelsIn.setMasterDriver(clockDomain, Seq(testCases, frameStartIns, rowEndIns, inpValidIns): _*)
      io.pixelsIn.setStreamMonitor(clockDomain, Seq(getTestCasesIns, getFrameStartIns, getRowEndIns, getInpValidIns): _*)
      io.pixelsOut.setStreamMonitor(clockDomain, Seq(pixelOuts, frameStartOuts, rowEndOuts): _*)
      io.pixelsOut.setSlaveRandomReady(clockDomain)
      io.pixelsIn.rowEnd     #= false
      io.pixelsIn.frameStart #= false
      io.startIn             #= false
      io.widthIn             #= 1
      io.heightIn            #= 1
      clockDomain.waitSampling(3)
      io.widthIn     #= sW
      io.heightIn    #= sH
      io.thresholdIn #= threshold
      io.startIn     #= true
      clockDomain.waitSamplingWhere(pixelOuts.size == testCases.size)
      io.startIn #= false
      dut.clockDomain.waitSampling(2)

      println(s" sim done at ${simTime()}")

      if (isPrint) {
        val formatTestCases      = testCases.map(_.toString.padTo(5, ' ')).grouped(4 * sW).toSeq.map(_.mkString("")).mkString("\n")
        val formatInpValidIns    = inpValidIns.map(_.toString.padTo(7, ' ')).grouped(4 * sW).toSeq.map(_.mkString("")).mkString("\n")
        val formatGolden         = golden.map(_.toString.padTo(5, ' ')).grouped(4 * sW).toSeq.map(_.mkString("")).mkString("\n")
        val formatResults        = pixelOuts.map(_.toString.padTo(5, ' ')).grouped(4 * sW).toSeq.map(_.mkString("")).mkString("\n")
        val formatRowEndOuts     = rowEndOuts.map(_.toString.padTo(7, ' ')).grouped(4 * sW).toSeq.map(_.mkString("")).mkString("\n")
        val formatFrameStartOuts = frameStartOuts.map(_.toString.padTo(7, ' ')).grouped(4 * sW).toSeq.map(_.mkString("")).mkString("\n")
        val formatDiff           = showDiff(pixelOuts, golden).map(_.toString.padTo(7, ' ')).grouped(4 * sW).toSeq.map(_.mkString("")).mkString("\n")
        logger.info(
          s"\n"
            + "testCases : \n"
            + formatTestCases
            + s"\n"
            + "inpValidIns : \n"
            + formatInpValidIns
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
//            + s"\n"
//            + s"diff: \n"
//            + formatDiff
//            + s"\n"
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
    val golden = ArrayBuffer[BigInt]()
    val rows   = testCases.grouped(4 * sW).toBuffer

    Range(0, 4 * sH).foreach { rIdx =>
      Range(0, 4 * sW).foreach { cIdx =>
        val lastRow = rIdx match {
          case r if r == 0 => 1
          case r           => r - 1
        }
        val nextRow = rIdx match {
          case r if r == 4 * sH - 1 => 4 * sH - 2
          case r                    => r + 1
        }
        val leftIdx = cIdx match {
          case c if c == 0 => 1
          case c           => c - 1
        }
        val rightIdx = cIdx match {
          case c if c == 4 * sW - 1 => 4 * sW - 2
          case c                    => c + 1
        }
        if (rows(rIdx)(cIdx) == 0) {
          val candidate = ArrayBuffer[Tuple2[BigInt, BigInt]]()
          if (rows(rIdx)(leftIdx) != 0 && rows(rIdx)(rightIdx) != 0) {
            candidate += Tuple2((rows(rIdx)(leftIdx) - rows(rIdx)(rightIdx)).abs, (rows(rIdx)(leftIdx) + rows(rIdx)(rightIdx)) / 2)
          }

          if (rows(lastRow)(cIdx) != 0 && rows(nextRow)(cIdx) != 0) {
            candidate += Tuple2((rows(lastRow)(cIdx) - rows(nextRow)(cIdx)).abs, (rows(lastRow)(cIdx) + rows(nextRow)(cIdx)) / 2)
          }

          if (rows(lastRow)(leftIdx) != 0 && rows(nextRow)(rightIdx) != 0) {
            candidate += Tuple2((rows(lastRow)(leftIdx) - rows(nextRow)(rightIdx)).abs, (rows(lastRow)(leftIdx) + rows(nextRow)(rightIdx)) / 2)
          }

          if (rows(lastRow)(rightIdx) != 0 && rows(nextRow)(leftIdx) != 0) {
            candidate += Tuple2((rows(lastRow)(rightIdx) - rows(nextRow)(leftIdx)).abs, (rows(lastRow)(rightIdx) + rows(nextRow)(leftIdx)) / 2)
          }

          val sortedCandidate = candidate.sortBy(_._1)
          golden += sortedCandidate(0)._2

        } else {
          golden += rows(rIdx)(cIdx)
        }
      }
    }

//        println("***")
//        println(golden.map(_.toString.padTo(3, ' ')).grouped(4 * sW).toSeq.map(_.mkString("")).mkString("\n"))
    golden
  }

  def compareResults(utArray: ArrayBuffer[BigInt], refArray: ArrayBuffer[BigInt]) = {
    require(utArray.size == refArray.size, "two array's size is not match !")
    var ret = true
    utArray.zip(refArray).foreach { case (int, int1) => if (int != int1) ret = false }
    ret
  }
  def showDiff(utArray: ArrayBuffer[BigInt], refArray: ArrayBuffer[BigInt]) = {
    require(utArray.size == refArray.size, "two array's size is not match !")
    val ret = ArrayBuffer[Boolean]()
    utArray.zip(refArray).foreach { case (int, int1) => if (int != int1) ret += false else ret += true }
    ret
  }
}

class InterpolationStep3Test extends AnyFunSuite {
  test("Test SuperResolutionPart3 5 * 5 ") {
    val testCases = ArrayBuffer.fill(10 * 10)(BigInt(nextInt(32) + 1))
    sim3Funcs.startSim(16, 5, 5, sim2Funcs.getGolden(16, 5, 5, testCases), sim3Funcs.getGolden(16, 5, 5, sim2Funcs.getGolden(16, 5, 5, testCases)), true)

  }
  test("Test SuperResolutionPart3 Randomly !") {
    val h         = nextInt(541)
    val w         = nextInt(961)
    val thd       = nextInt(201)
    val testCases = ArrayBuffer.fill(4 * h * w)(BigInt(nextInt(255) + 1))
    sim3Funcs.startSim(thd, h, w, sim2Funcs.getGolden(thd, h, w, testCases), sim3Funcs.getGolden(thd, h, w, sim2Funcs.getGolden(thd, h, w, testCases)), true)
  }
}
