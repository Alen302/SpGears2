package SpGears.Algos.SuperResolution

import SpGears.Algos.SuperResolution.sim1Funcs.compareResults
import SpGears.TestUtilsFactory._
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
    val axiLiteResp     = ArrayBuffer[Boolean]()
    val getTestCasesIns = ArrayBuffer[BigInt]()

    val ipConfigAddr = mutable.Queue(BigInt(0), BigInt(4), BigInt(8), BigInt(12))
    val ipConfigData = mutable.Queue((BigInt(sW), BigInt(sH), BigInt(threshold), BigInt(1)))

    compiled.doSimUntilVoid { dut =>
      val logger = LoggerFactory.getLogger(s"Test : SuperResolutionCoreTest")

      dut.clockDomain.forkStimulus(10)
      dut.ddrDataIn.haltCycles(dut.clockDomain, cycleCount   = 0)
      dut.inpDataOut.haltCycles(dut.clockDomain, cycleCount  = 0)
      dut.ipConfig.aw.haltCycles(dut.clockDomain, cycleCount = 0)
      dut.ipConfig.w.haltCycles(dut.clockDomain, cycleCount  = 0)
      dut.ipConfig.b.haltCycles(dut.clockDomain, cycleCount  = 0)
      dut.ipConfig.ar.haltCycles(dut.clockDomain, cycleCount = 0)
      dut.ipConfig.r.haltCycles(dut.clockDomain, cycleCount  = 0)

      dut.ddrDataIn.setMasterDriver(dut.clockDomain, testCases)
      dut.ddrDataIn.setStreamMonitor(dut.clockDomain, getTestCasesIns)
      dut.inpDone.setMonitor(dut.clockDomain, waitTime = 0, inpDoneOuts)
      dut.inpDataOut.setSlaveRandomReady(dut.clockDomain)
      dut.inpDataOut.setStreamMonitor(dut.clockDomain, Seq(pixelOuts, frameStartOuts, rowEndOuts): _*)
      dut.ipConfig.aw.setMasterDriverWhen(dut.clockDomain, !ipConfigAddr.isEmpty, Seq(ArrayBuffer(ipConfigAddr.dequeue()), ArrayBuffer(BigInt(0))): _*)
      dut.ipConfig.w.setMasterDriverWhen(dut.clockDomain, !ipConfigData.isEmpty, Seq(ArrayBuffer(ipConfigData.dequeue()), ArrayBuffer(BigInt(15))): _*)
      dut.ipConfig.b.setStreamMonitor(dut.clockDomain, axiLiteResp)
      dut.ipConfig.b.setSlaveReadyAlways(dut.clockDomain)

      dut.clockDomain.waitSamplingWhere(ipConfigAddr.isEmpty && ipConfigData.isEmpty)
      println(s"ip config successful in time : ${simTime()} !")

      dut.clockDomain.waitSamplingWhere(pixelOuts.size == testCases.size * 4)
      println(s"interpolate successful in time : ${simTime()} !")

      dut.clockDomain.waitSampling(2)

      if (isPrint) {
        val formatTestCases      = testCases.map(_.toString.padTo(5, ' ')).grouped(sW).toSeq.map(_.mkString("")).mkString("\n")
        val formatGolden         = golden.map(_.toString.padTo(5, ' ')).grouped(2 * sW).toSeq.map(_.mkString("")).mkString("\n")
        val formatResults        = pixelOuts.map(_.toString.padTo(5, ' ')).grouped(2 * sW).toSeq.map(_.mkString("")).mkString("\n")
        val formatRowEndOuts     = rowEndOuts.map(_.toString.padTo(7, ' ')).grouped(2 * sW).toSeq.map(_.mkString("")).mkString("\n")
        val formatFrameStartOuts = frameStartOuts.map(_.toString.padTo(7, ' ')).grouped(2 * sW).toSeq.map(_.mkString("")).mkString("\n")
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

}

class SuperResolutionCoreTest extends AnyFunSuite {
  test("Test SuperResolutionCore 5 * 5 ") {
    val testCases = ArrayBuffer.fill(5 * 5)(BigInt(nextInt(32) + 1))
    val golden    = sim3Funcs.getGolden(16, 5, 5, sim2Funcs.getGolden(16, 5, 5, sim1Funcs.getGolden(16, 5, 5, testCases), true), true)
    simCoreFunc.startSim(16, 5, 5, testCases, golden, false)
  }
  test("Test SuperResolutionCore Randomly !") {
    val h         = nextInt(541)
    val w         = nextInt(961)
    val thd       = nextInt(201)
    val testCases = ArrayBuffer.fill(h * w)(BigInt(nextInt(255) + 1))
    val golden    = sim3Funcs.getGolden(thd, h, w, sim2Funcs.getGolden(thd, h, w, sim1Funcs.getGolden(thd, h, w, testCases, true), true), true)
    simCoreFunc.startSim(thd, h, w, testCases, golden, true)
  }
}
