package SpGears.Algos.SuperResolution

import org.scalatest.funsuite._
import org.slf4j._
import spinal.core.sim._

import scala.collection.mutable._
import scala.util.Random._

object simFuncForLite {
  def startSim(threshold: Int, sH: Int, sW: Int, testCases: ArrayBuffer[Int], golden: ArrayBuffer[Int], isPrint: Boolean = false) = {
    val compiled   = SimConfig.withFstWave.compile(IPWithAXILite(IPConfig(sH, sW, 8), 32, 32))
    val results    = ArrayBuffer[Int]()
    val rowEndOuts = ArrayBuffer[Boolean]()
    var inCount    = -1
    compiled.doSimUntilVoid { dut =>
      val logger = LoggerFactory.getLogger(s"Test : IPWithAXILite")

      dut.io.dataOut.ready                 #= false
      dut.io.rowEndIn                      #= false
      dut.io.frameStartIn                  #= false
      dut.io.axiLiteSignal.aw.payload.addr #= 128
      dut.io.axiLiteSignal.w.payload.data  #= 128
      dut.io.axiLiteSignal.w.payload.strb  #= 15

      val monitor = fork {
        while (true) {
          if (dut.io.dataOut.valid.toBoolean && dut.io.dataOut.ready.toBoolean) {
            results += dut.io.dataOut.payload.toInt
            rowEndOuts += dut.io.rowEndOut.toBoolean
          }
          sleep(2)
        }
      }

      dut.clockDomain.forkStimulus(2)
      val interpolation = fork {
        dut.clockDomain.waitSampling(5)
        dut.io.dataOut.ready         #= true
        dut.io.axiLiteSignal.b.ready #= true
        dut.clockDomain.waitSampling()
        var randomAwValid = nextBoolean()
        dut.io.axiLiteSignal.aw.payload.addr #= 0
        dut.io.axiLiteSignal.aw.valid        #= randomAwValid
        while (!randomAwValid) {
          dut.clockDomain.waitSampling()
          randomAwValid = nextBoolean()
          dut.io.axiLiteSignal.aw.valid #= randomAwValid
        }
        dut.clockDomain.waitSamplingWhere(dut.io.axiLiteSignal.aw.valid.toBoolean && dut.io.axiLiteSignal.aw.ready.toBoolean)

        dut.io.axiLiteSignal.w.payload.data #= sW
        var randomWValid = nextBoolean()

        while (!randomWValid) {
          dut.clockDomain.waitSampling()
          randomWValid = nextBoolean()
          dut.io.axiLiteSignal.w.valid #= randomWValid
        }
        dut.clockDomain.waitSamplingWhere(dut.io.axiLiteSignal.w.valid.toBoolean && dut.io.axiLiteSignal.w.ready.toBoolean)

        dut.io.axiLiteSignal.aw.payload.addr #= 4
        dut.io.axiLiteSignal.aw.valid        #= randomAwValid
        while (!randomAwValid) {
          dut.clockDomain.waitSampling()
          randomAwValid = nextBoolean()
          dut.io.axiLiteSignal.aw.valid #= randomAwValid
        }
        dut.clockDomain.waitSamplingWhere(dut.io.axiLiteSignal.aw.valid.toBoolean && dut.io.axiLiteSignal.aw.ready.toBoolean)

        dut.io.axiLiteSignal.w.payload.data #= sH

        while (!randomWValid) {
          dut.clockDomain.waitSampling()
          randomWValid = nextBoolean()
          dut.io.axiLiteSignal.w.valid #= randomWValid
        }
        dut.clockDomain.waitSamplingWhere(dut.io.axiLiteSignal.w.valid.toBoolean && dut.io.axiLiteSignal.w.ready.toBoolean)

        dut.io.axiLiteSignal.aw.payload.addr #= 8
        dut.io.axiLiteSignal.aw.valid        #= randomAwValid
        while (!randomAwValid) {
          dut.clockDomain.waitSampling()
          randomAwValid = nextBoolean()
          dut.io.axiLiteSignal.aw.valid #= randomAwValid
        }
        dut.clockDomain.waitSamplingWhere(dut.io.axiLiteSignal.aw.valid.toBoolean && dut.io.axiLiteSignal.aw.ready.toBoolean)

        dut.io.axiLiteSignal.w.payload.data #= threshold

        while (!randomWValid) {
          dut.clockDomain.waitSampling()
          randomWValid = nextBoolean()
          dut.io.axiLiteSignal.w.valid #= randomWValid
        }
        dut.clockDomain.waitSamplingWhere(dut.io.axiLiteSignal.w.valid.toBoolean && dut.io.axiLiteSignal.w.ready.toBoolean)

        dut.io.axiLiteSignal.aw.payload.addr #= 12
        dut.io.axiLiteSignal.aw.valid        #= randomAwValid
        while (!randomAwValid) {
          dut.clockDomain.waitSampling()
          randomAwValid = nextBoolean()
          dut.io.axiLiteSignal.aw.valid #= randomAwValid
        }
        dut.clockDomain.waitSamplingWhere(dut.io.axiLiteSignal.aw.valid.toBoolean && dut.io.axiLiteSignal.aw.ready.toBoolean)

        dut.io.axiLiteSignal.w.payload.data #= 1

        while (!randomWValid) {
          dut.clockDomain.waitSampling()
          randomWValid = nextBoolean()
          dut.io.axiLiteSignal.w.valid #= randomWValid
        }
        dut.clockDomain.waitSamplingWhere(dut.io.axiLiteSignal.w.valid.toBoolean && dut.io.axiLiteSignal.w.ready.toBoolean)

        inCount = 0
        testCases.foreach { testCase =>
          dut.io.dataIn.payload #= testCase
          dut.io.dataIn.valid   #= true
          if (inCount == 0) {
            dut.io.frameStartIn #= true
          } else {
            dut.io.frameStartIn #= false
          }
          if ((inCount + 1) % sW == 0) {
            dut.io.rowEndIn #= true
          } else {
            dut.io.rowEndIn #= false
          }
          dut.clockDomain.waitSamplingWhere(dut.io.dataIn.valid.toBoolean && dut.io.dataIn.ready.toBoolean)
          inCount += 1
          if (inCount == sW * sH) { dut.io.rowEndIn #= false }
        }

      }

      val getSimResult = fork {
        while (true) {
          if (results.length == 16 * sH * sW) {
            dut.clockDomain.waitSampling(2)
            if (isPrint) {
              val formatTestCases  = testCases.map(_.toString.padTo(5, ' ')).grouped(sW).toSeq.map(_.mkString("")).mkString("\n")
              val formatGolden     = golden.map(_.toString.padTo(5, ' ')).grouped(4 * sW).toSeq.map(_.mkString("")).mkString("\n")
              val formatResults    = results.map(_.toString.padTo(5, ' ')).grouped(4 * sW).toSeq.map(_.mkString("")).mkString("\n")
              val formatRowEndOuts = rowEndOuts.map(_.toString.padTo(7, ' ')).grouped(4 * sW).toSeq.map(_.mkString("")).mkString("\n")
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
              )
            }
            if (compareResults(results, golden)) {
              simSuccess()
            } else {
              simFailure("test fail !")
            }
          }
          //sleep(2)
          dut.clockDomain.waitSampling()
        }
      }

    }
  }

  def compareResults(utArray: ArrayBuffer[Int], refArray: ArrayBuffer[Int]) = {
    require(utArray.size == refArray.size, "two array's size is not match !")
    var ret = true
    utArray.foreach { i =>
      if (utArray(i) != refArray(i)) {
        ret = false
      }
    }
    ret
  }
}

class InterpolationTest extends AnyFunSuite {
  test("Test Interpolation 5 * 5 ") {
    val testCases = ArrayBuffer.fill(5 * 5)(nextInt(32) + 1)
    val golden    = sim3Funcs.getGolden(16, 5, 5, sim2Funcs.getGolden(16, 5, 5, sim1Funcs.getGolden(16, 5, 5, testCases), true), true)
    simFuncs.startSim(16, 5, 5, testCases, golden, false)
  }
  test("Test Interpolation Randomly !") {
    val h         = nextInt(541)
    val w         = nextInt(961)
    val thd       = nextInt(201)
    val testCases = ArrayBuffer.fill(h * w)(nextInt(255) + 1)
    val golden    = sim3Funcs.getGolden(thd, h, w, sim2Funcs.getGolden(thd, h, w, sim1Funcs.getGolden(thd, h, w, testCases, true), true), true)
    simFuncs.startSim(thd, h, w, testCases, golden, true)
  }
}
