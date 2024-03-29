package SpGears.Algos.SuperResolution

import SpGears.Algos.SuperResolution.sim1Funcs.compareResults
import SpGears.TestUtils.SimUtils.DataSimUtils
import SpGears.TestUtils.UVM._
import org.scalatest.funsuite._
import org.slf4j._
import spinal.core.sim._

import scala.collection.mutable._
import scala.util.Random._
import spinal.lib.bus.amba4.axilite._

import scala.collection.mutable

object simCoreFunc {
  def startSim(threshold: Int, sH: Int, sW: Int, testCases: ArrayBuffer[BigInt], golden: ArrayBuffer[BigInt], isPrint: Boolean = false) = {
    val compiled        = SimConfig.withFstWave.compile(SuperResolutionCore(IPConfig(sH, sW), AxiLite4Config(addressWidth = 32, dataWidth = 32)))
    val pixelOuts       = ArrayBuffer[BigInt]()
    val frameStartOuts  = ArrayBuffer[Boolean]()
    val rowEndOuts      = ArrayBuffer[Boolean]()
    val inpDoneOuts     = ArrayBuffer[Boolean]()
    val axiLiteRespOuts = ArrayBuffer[Boolean]()
    val getTestCasesIns = ArrayBuffer[BigInt]()
    val getAxiLiteAw    = ArrayBuffer[BigInt]()
    val getAxiLiteProt  = ArrayBuffer[BigInt]()
    val getAxiLIteW     = ArrayBuffer[BigInt]()
    val getAxiLiteStrb  = ArrayBuffer[BigInt]()

    val ipConfigAddr = ArrayBuffer(BigInt(4), BigInt(8), BigInt(12), BigInt(16))
    val ipConfigData = ArrayBuffer(BigInt(sW), BigInt(sH), BigInt(threshold), BigInt(1))

    compiled.doSimUntilVoid { dut =>
      val logger = LoggerFactory.getLogger(s"Test : SuperResolutionCoreTest")

      dut.clockDomain.forkStimulus(10)
      dut.ddrDataIn.setRandomInitValue(dut.clockDomain)
      dut.inpDataOut.setRandomInitValue(dut.clockDomain)
      dut.ipConfig.aw.setRandomInitValue(dut.clockDomain)
      dut.ipConfig.w.setRandomInitValue(dut.clockDomain)
      dut.ipConfig.b.setRandomInitValue(dut.clockDomain)
      dut.ipConfig.ar.setRandomInitValue(dut.clockDomain)
      dut.ipConfig.r.setRandomInitValue(dut.clockDomain)

      dut.ddrDataIn.setDriverRandomly(dut.clockDomain, latency = 0, testCases)
      dut.ddrDataIn.setMonitorAlways(dut.clockDomain, latency  = 0, getTestCasesIns)
//      dut.inpDone.setMonitor(dut.clockDomain, waitTime = 0, inpDoneOuts)
      dut.inpDataOut.setRandomDriverRandomly(dut.clockDomain)
      dut.inpDataOut.setMonitorAlways(dut.clockDomain, latency   = 0, Seq(pixelOuts, frameStartOuts, rowEndOuts): _*)
      dut.ipConfig.aw.setMonitorAlways(dut.clockDomain, latency  = 0, Seq(getAxiLiteAw, getAxiLiteProt): _*)
      dut.ipConfig.aw.setDriverRandomly(dut.clockDomain, latency = 0, Seq(ipConfigAddr, ArrayBuffer.fill(4)(BigInt(0))): _*)
      dut.ipConfig.w.setMonitorAlways(dut.clockDomain, latency   = 0, Seq(getAxiLIteW, getAxiLiteStrb): _*)
      dut.ipConfig.w.setDriverRandomly(dut.clockDomain, latency  = 0, Seq(ipConfigData, ArrayBuffer.fill(4)(BigInt(15))): _*)
      dut.ipConfig.b.setMonitorAlways(dut.clockDomain, latency   = 0, axiLiteRespOuts)
      dut.ipConfig.b.setDriverAlways(dut.clockDomain, latency    = 0, ArrayBuffer(true))

      dut.clockDomain.waitSamplingWhere(getAxiLiteAw.size == 4 && getAxiLIteW.size == 4)
      println(s"ip config successful in time : ${simTime()} !")

      dut.clockDomain.waitSamplingWhere {
        println(s"pixelsOuts size : ${pixelOuts.size}")
        pixelOuts.size == testCases.size * 16
      }
      println(s"interpolate successful in time : ${simTime()} !")

      dut.clockDomain.waitSampling(2)

      if (isPrint) {
        val formatTestCases      = testCases.map(_.toString.padTo(5, ' ')).grouped(sW).toSeq.map(_.mkString("")).mkString("\n")
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
            + s"diff: \n"
            + formatDiff
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

class SuperResolutionCoreTest extends AnyFunSuite {
  test("Test SuperResolutionCore 5 * 5 ") {
    val testCases = ArrayBuffer.fill(5 * 5)(BigInt(nextInt(32) + 1))
    val golden    = sim3Funcs.getGolden(16, 5, 5, sim2Funcs.getGolden(16, 5, 5, sim1Funcs.getGolden(16, 5, 5, testCases), true), true)
    simCoreFunc.startSim(16, 5, 5, testCases, golden, true)
  }
  test("Test SuperResolutionCore Randomly !") {
    val h         = 540
    val w         = 960
    val thd       = 144
    val testCases = ArrayBuffer.fill(h * w)(BigInt(nextInt(255) + 1))
    val golden    = sim3Funcs.getGolden(thd, h, w, sim2Funcs.getGolden(thd, h, w, sim1Funcs.getGolden(thd, h, w, testCases, true), true), true)
    simCoreFunc.startSim(thd, h, w, testCases, golden, true)
  }
}
