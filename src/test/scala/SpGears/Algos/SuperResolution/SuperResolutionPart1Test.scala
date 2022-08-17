package SpGears.Algos.SuperResolution

import org.scalatest.funsuite._
import org.slf4j._
import spinal.core.sim._

import scala.collection.mutable._
import scala.util.Random._
import SpGears.TestUtils.UVM._

object sim1Funcs {
  def startSim(threshold: Int, sH: Int, sW: Int, testCases: ArrayBuffer[BigInt], golden: ArrayBuffer[BigInt], isPrint: Boolean = false) = {
    val compiled         = SimConfig.withFstWave.compile(SuperResolutionPart1(IPConfig(sH, sW)))
    val pixelOuts        = ArrayBuffer[BigInt]()
    val frameStartOuts   = ArrayBuffer[Boolean]()
    val rowEndOuts       = ArrayBuffer[Boolean]()
    val frameStartIns    = true +: ArrayBuffer.fill(testCases.size - 1)(false)
    val rowEndIns        = ArrayBuffer.fill(testCases.size)(false).zipWithIndex.map { case (bool, i) => if ((i + 1) % sW == 0) true else false }
    val getTestCasesIns  = ArrayBuffer[BigInt]()
    val getFrameStartIns = ArrayBuffer[Boolean]()
    val getRowEndIns     = ArrayBuffer[Boolean]()

    compiled.doSimUntilVoid { dut =>
      val logger = LoggerFactory.getLogger(s"Test : SuperResolutionPart1Test")

      import dut.{clockDomain, io}
      clockDomain.forkStimulus(2)
      io.pixelsIn.setDriverRandomly(clockDomain, latency = 0, Seq(testCases, frameStartIns, rowEndIns): _*)
      io.pixelsIn.setMonitorAlways(clockDomain, latency  = 0, Seq(getTestCasesIns, getFrameStartIns, getRowEndIns): _*)
      io.pixelsOut.setMonitorAlways(clockDomain, latency = 0, Seq(pixelOuts, frameStartOuts, rowEndOuts): _*)
      io.pixelsOut.setRandomDriverRandomly(clockDomain)
      io.pixelsIn.rowEnd     #= false
      io.pixelsIn.frameStart #= false
      io.startIn             #= false
      io.widthIn             #= 1
      io.heightIn            #= 1
      io.inpThreeDoneIn      #= false
      io.inpTwoDoneIn        #= false
      clockDomain.waitSampling(3)
      io.widthIn     #= sW
      io.heightIn    #= sH
      io.thresholdIn #= threshold
      io.startIn     #= true
      clockDomain.waitSamplingWhere(pixelOuts.size == testCases.size * 4)
      io.startIn        #= false
      io.inpThreeDoneIn #= true
      io.inpTwoDoneIn   #= true
      dut.clockDomain.waitSampling(2)

      println(s" sim done at ${simTime()}")

      if (isPrint) {
        val formatTestCases      = testCases.map(_.toString.padTo(5, ' ')).grouped(sW).toSeq.map(_.mkString("")).mkString("\n")
        val formatGolden         = golden.map(_.toString.padTo(5, ' ')).grouped(2 * sW).toSeq.map(_.mkString("")).mkString("\n")
        val formatResults        = pixelOuts.map(_.toString.padTo(5, ' ')).grouped(2 * sW).toSeq.map(_.mkString("")).mkString("\n")
        val formatRowEndOuts     = rowEndOuts.map(_.toString.padTo(7, ' ')).grouped(2 * sW).toSeq.map(_.mkString("")).mkString("\n")
        val formatframeStartOuts = frameStartOuts.map(_.toString.padTo(7, ' ')).grouped(2 * sW).toSeq.map(_.mkString("")).mkString("\n")
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
            + formatframeStartOuts
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
    val golden        = ArrayBuffer[BigInt]()
    val rows          = testCases.grouped(sW).toBuffer
    val interRows     = rows.zip(rows.tail ++ rows.slice(sH - 1, sH))
    val inpEvenPixels = ArrayBuffer.fill(sH)(ArrayBuffer[BigInt]())
    val inpOddPixels  = ArrayBuffer.fill(sH)(ArrayBuffer[BigInt]())
    var eIdx          = 0
    var oIdx          = 0

    rows.foreach { r =>
      val lefts  = r
      val rights = r.tail ++ r.slice(sW - 1, sW)
      lefts.zip(rights).map { case (l, r) =>
        if ((l - r).abs >= threshold) {
          inpEvenPixels(eIdx) += l
        } else {
          inpEvenPixels(eIdx) += (l + r) / 2
        }
      }
      eIdx += 1
    }

    interRows.foreach { case (ints, ints1) =>
      Range(0, 2 * sW).foreach { i =>
        if (i % 2 == 0) {
          if ((ints(i / 2) - ints1(i / 2)).abs >= threshold) {
            inpOddPixels(oIdx) += ints(i / 2)
          } else {
            inpOddPixels(oIdx) += (ints(i / 2) + ints1(i / 2)) / 2
          }
        } else {
          if (i + 1 <= 2 * sW - 1) {
            val mainDiff  = (ints((i - 1) / 2) - ints1((i + 1) / 2)).abs
            val countDiff = (ints1((i - 1) / 2) - ints((i + 1) / 2)).abs
            val minDiff   = Seq(mainDiff, countDiff).min
            if (minDiff >= threshold) {
              if (mainDiff >= countDiff) {
                inpOddPixels(oIdx) += ints((i - 1) / 2)
              } else {
                inpOddPixels(oIdx) += ints1((i - 1) / 2)
              }
            } else {
              if (mainDiff >= countDiff) {
                inpOddPixels(oIdx) += (ints1((i - 1) / 2) + ints((i + 1) / 2)) / 2
              } else {
                inpOddPixels(oIdx) += (ints((i - 1) / 2) + ints1((i + 1) / 2)) / 2
              }
            }
          } else {
            val diff = (ints((i - 1) / 2) - ints1((i - 1) / 2)).abs
            if (diff >= threshold) {
              inpOddPixels(oIdx) += ints((i - 1) / 2)
            } else {
              inpOddPixels(oIdx) += (ints((i - 1) / 2) + ints1((i - 1) / 2)) / 2
            }
          }
        }
      }
      oIdx += 1
    }

//    println(inpEvenPixels.map(_.map(_.toString.padTo(3, ' ')).mkString("")).mkString("\n"))
//    println(inpOddPixels.map(_.map(_.toString.padTo(3, ' ')).mkString("")).mkString("\n"))

    val realRows = ArrayBuffer.fill(sH)(ArrayBuffer[BigInt]())
    Range(0, sH).foreach { i =>
      Range(0, 2 * sW).foreach { j =>
        if (j % 2 == 0) {
          realRows(i) += rows(i)(j / 2)
        } else {
          realRows(i) += inpEvenPixels(i)((j - 1) / 2)
        }
      }
    }
    Range(0, 2 * sH).foreach { h =>
      if (h % 2 == 0) {
        golden ++= realRows(h / 2)
      } else {
        golden ++= inpOddPixels((h - 1) / 2)
      }
    }
//    println(realRows.map(_.map(_.toString.padTo(3, ' ')).mkString("")).mkString("\n"))
//    println(golden.map(_.toString.padTo(3, ' ')).grouped(2 * sW).toSeq.map(_.mkString("")).mkString("\n"))
    golden
  }

  def compareResults(utArray: ArrayBuffer[BigInt], refArray: ArrayBuffer[BigInt]) = {
    require(utArray.size == refArray.size, "two array's size is not match !")
    var ret = true
    utArray.zip(refArray).foreach { case (int, int1) => if (int != int1) ret = false }
    ret
  }
}

class SuperResolutionPart1Test extends AnyFunSuite {
  test("Test SuperResolutionPart1 5 * 5 ") {
    val testCases = ArrayBuffer.fill(5 * 5)(BigInt(nextInt(32)))
    sim1Funcs.startSim(16, 5, 5, testCases, sim1Funcs.getGolden(16, 5, 5, testCases), true)
  }
  test("Test SuperResolutionPart1 Randomly !") {
    val h         = 540
    val w         = 960
    val thd       = 144
    val testCases = ArrayBuffer.fill(h * w)(BigInt(nextInt(255)))
    sim1Funcs.startSim(thd, h, w, testCases, sim1Funcs.getGolden(thd, h, w, testCases), true)
  }
  test("get vivado home") {
    println(sys.env.get("VIVADO_HOME"))
  }
  test("get path") {
    println(sys.env.get("PATH"))
  }
  test("get ld_library_path") {
    println(sys.env.get("LD_LIBRARY_PATH"))
  }
}
