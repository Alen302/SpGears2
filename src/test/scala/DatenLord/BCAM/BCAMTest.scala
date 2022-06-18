package DatenLord.BCAM

import DatenLord.BCAM.BCAMBuildType._
import spinal.lib._
import spinal.core._
import spinal.core.sim._
import org.slf4j._
import org.scalatest.funsuite._
import scala.util.Random._
import scala.math._
import scala.collection.mutable._

object BCAMSimFuncs {
  def doBCAMSim(buildType: BCAMBuildType, config: BCAMConfig, testTime: Int) = {

    def Pw = config.Pw
    def Cd = config.Cd

    val testCasePatt       = ArrayBuffer[Int]()
    val testCaseAddr       = ArrayBuffer[Int]()
    val mappingPattCase    = ArrayBuffer[Int]()
    val mappingResultAddr  = ArrayBuffer[Int]()
    val mappingResultMatch = ArrayBuffer[Boolean]()

    var addr         = 0
    var wPatt        = 0
    var isValid      = false
    var mapValid     = false
    var mapReady     = false
    var mapPatt      = 0
    var wTimes       = 0
    var mPattTimes   = 0
    var mAddrTimes   = 0
    var monitorTimes = 0

    val compiledDut = SimConfig.withFstWave.compile(BCAM(buildType, config))

    compiledDut.doSimUntilVoid { dut =>
      val logger = LoggerFactory.getLogger(s"Test : BCAM for ${BCAMBuildType.asString(buildType)}")

      dut.io.wStream.valid #= false
      dut.io.wStream.wPatt #= 0
      dut.io.wStream.wAddr #= 0
      dut.io.wStream.wr    #= false

      dut.io.mPattStream.valid #= false
      dut.io.mPattStream.mPatt #= 0

      dut.io.mPattStream.ready #= false

      dut.clockDomain.forkStimulus(6)

      val write = fork {
        dut.clockDomain.waitSampling(3)
        while (wTimes < testTime) {
          addr    = nextInt(Cd)
          wPatt   = nextInt(pow(2, Pw).toInt)
          isValid = nextBoolean()
          if (isValid) {
            dut.io.wStream.valid #= isValid
            dut.io.wStream.wAddr #= addr
            dut.io.wStream.wPatt #= wPatt
            dut.io.wStream.wr    #= true
            wTimes += 1
            dut.clockDomain.waitSamplingWhere(dut.io.wStream.valid.toBoolean && dut.io.wStream.ready.toBoolean)
          } else {
            dut.io.wStream.valid #= isValid
            dut.clockDomain.waitSampling()
          }
        }
      }

      val mappingPatt = fork {
        dut.clockDomain.waitSampling(3)
        while (mPattTimes < testTime) {
          mapValid = nextBoolean()
          mapPatt  = nextInt(pow(2, Pw).toInt)
          if (mapValid) {
            dut.io.mPattStream.valid #= mapValid
            dut.io.mPattStream.mPatt #= mapPatt
            mPattTimes += 1
            dut.clockDomain.waitSamplingWhere(dut.io.mPattStream.valid.toBoolean && dut.io.mPattStream.ready.toBoolean)
          } else {
            dut.io.mPattStream.valid #= mapValid
            dut.clockDomain.waitSampling()
          }
        }
      }

      val mappingAddr = fork {
        dut.clockDomain.waitSampling(3)
        while (mAddrTimes < testTime) {
          mapReady = nextBoolean()
          if (mapReady) {
            dut.io.mAddrStream.ready #= mapReady
            mAddrTimes += 1
            dut.clockDomain.waitSamplingWhere(dut.io.mAddrStream.valid.toBoolean && dut.io.mAddrStream.ready.toBoolean)
          } else {
            dut.io.mAddrStream.ready #= mapReady
            dut.clockDomain.waitSampling()
          }
        }
      }
      val exitSim = fork {
        while (true) {
          if (wTimes == testTime && mPattTimes == testTime && mAddrTimes == testTime && monitorTimes == testTime * 2) {
            val testCaseAddrString       = testCaseAddr.map(_.toString.padTo(7, ' ')).mkString("")
            val testCasePattString       = testCasePatt.map(_.toString.padTo(7, ' ')).mkString("")
            val mappingPattCaseString    = mappingPattCase.map(_.toString.padTo(7, ' ')).mkString("")
            val mappingResultAddrString  = mappingResultAddr.map(_.toString.padTo(7, ' ')).mkString("")
            val mappingResultMatchString = mappingResultMatch.map(_.toString.padTo(7, ' ')).mkString("")

            logger.info(
              s"\n"
                + s"write : \n"
                + "Addr :".padTo(10, ' ')
                + testCaseAddrString
                + s"\n"
                + "Pattern :".padTo(10, ' ')
                + testCasePattString
                + s"\n"
                + s"mapping result : \n"
                + "MPatt :".padTo(15, ' ')
                + mappingPattCaseString
                + s"\n"
                + "MatchResult :".padTo(15, ' ')
                + mappingResultMatchString
                + s"\n"
                + "AddrResult :".padTo(15, ' ')
                + mappingResultAddrString
                + s"\n"
            )

            simSuccess()
          } else {
            dut.clockDomain.waitSampling()
          }
        }
      }

      val monitor = fork {
        dut.clockDomain.waitSampling(3)
        while (monitorTimes < testTime * 2) {
          if (dut.io.mAddrStream.valid.toBoolean && dut.io.mAddrStream.ready.toBoolean) {
            mappingResultAddr += dut.io.mAddrStream.mAddr.toInt
            mappingResultMatch += dut.io.mAddrStream.matchFlag.toBoolean
          }
          if (dut.io.mPattStream.valid.toBoolean && dut.io.mPattStream.ready.toBoolean) {
            mappingPattCase += dut.io.mPattStream.mPatt.toInt
          }

          if (dut.io.wStream.valid.toBoolean && dut.io.wStream.ready.toBoolean) {
            testCaseAddr += dut.io.wStream.wAddr.toInt
            testCasePatt += dut.io.wStream.wPatt.toInt
          }
          monitorTimes += 1
          sleep(6)

        }
      }

    }
  }

}

class BCAMTest extends AnyFunSuite {
  test("random test for BRUTE-FORCE !") {
    BCAMSimFuncs.doBCAMSim(BRUTE, BCAMConfig(16, 3), 500)
  }

  test("random test for SEGMENT!") {
    BCAMSimFuncs.doBCAMSim(SEGMENT, BCAMConfig(8, 2, 2), 500)
  }
}
