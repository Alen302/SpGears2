package SpGears.DatenLord.DMA

import spinal.lib._
import spinal.core._
import spinal.lib.bus.amba4.axi._
import spinal.lib.bus.amba4.axis._
import spinal.lib.bus.amba4.axilite._

import scala.language.postfixOps

case class DscByPass(idx: Int) extends Bundle with IMasterSlave {

  val dscByPassCtrl    = Bits(16 bits)
  val dscByPassSrcAddr = UInt(64 bits)
  val dscByPassDstAddr = UInt(64 bits)
  val dscByPassLen     = UInt(28 bits)
  val dscByPassLoad    = Bool()
  val dscByPassReady   = Bool()

  override def asMaster(): Unit = {
    out(
      dscByPassCtrl,
      dscByPassSrcAddr,
      dscByPassDstAddr,
      dscByPassLen,
      dscByPassLoad
    )
    in(dscByPassReady)
  }

}

case class CfgMgmt() extends Bundle with IMasterSlave {

  val cfgMgmtAddr          = UInt(19 bits)
  val cfgMgmtByteEnable    = Bits(4 bits)
  val cfgMgmtReadData      = Bits(32 bits)
  val cfgMgmtRead          = Bool()
  val cfgMgmtReadWriteDone = Bool()
  val cfgMgmtWriteData     = Bits(32 bits)
  val cfgMgmtWrite         = Bool()

  override def asMaster(): Unit = {
    out(
      cfgMgmtAddr,
      cfgMgmtByteEnable,
      cfgMgmtRead,
      cfgMgmtWriteData,
      cfgMgmtWrite
    )
    in(cfgMgmtReadData, cfgMgmtReadWriteDone)
  }
}

case class DmaIO(dmaConfig: DMAConfig) extends Bundle {

  val mAxi =
    (dmaConfig.basic.axiInterface.dmaInterfaceOption == MM) generate master(
      Axi4(
        Axi4Config(
          64,
          dmaConfig.basic.axiInterface.dataWith.dataWidth,
          dmaConfig.dma.axiIdWidth,
          useRegion = false,
          useQos    = false
        )
      )
    )

  val mAxisH2C =
    (dmaConfig.basic.axiInterface.dmaInterfaceOption == ST) generate Vec(
      master(
        Axi4Stream(
          Axi4StreamConfig(
            dmaConfig.basic.axiInterface.dataWith.dataWidth / 8,
            dmaConfig.dma.axiIdWidth,
            useKeep = true,
            useLast = true
          )
        )
      ),
      dmaConfig.dma.h2cChannelNumber
    )

  val sAxisC2H =
    (dmaConfig.basic.axiInterface.dmaInterfaceOption == ST) generate Vec(
      slave(
        Axi4Stream(
          Axi4StreamConfig(
            dmaConfig.basic.axiInterface.dataWith.dataWidth / 8,
            dmaConfig.dma.axiIdWidth,
            useKeep = true,
            useLast = true
          )
        )
      ),
      dmaConfig.dma.c2hChannelNumber
    )

  val usrIrqReq = in Bits (dmaConfig.misc.userInterNumber bits)

  val usrIrqAck = in Bits (dmaConfig.misc.userInterNumber bits)

  val sAxiLite = (dmaConfig.basic.haveAxiLiteSlave) generate slave(
    AxiLite4(
      AxiLite4Config(
        32,
        32
      )
    )
  )

  val mAxiLite = (dmaConfig.bars.haveAxiLiteMaster) generate master(
    AxiLite4(
      AxiLite4Config(
        32,
        32
      )
    )
  )

  val mAxiByPass = (dmaConfig.bars.haveDmaByPass) generate master(
    Axi4(
      Axi4Config(
        64,
        dmaConfig.basic.axiInterface.dataWith.dataWidth,
        dmaConfig.dma.axiIdWidth,
        useRegion = false,
        useQos    = false
      )
    )
  )

  val sAxibRuser =
    (dmaConfig.basic.axiInterface.dataProtection == PropagateParity) generate out Bits (16 bits)

  val dscByPassC2H0 = (dmaConfig.dma.c2hDescriptorByPass
    .toString()
    .drop(2)
    .dropRight(1)(
      0
    ) == '1') generate slave(DscByPass(0))

  val dscByPassC2H1 = (dmaConfig.dma.c2hDescriptorByPass
    .toString()
    .drop(2)
    .dropRight(1)(
      1
    ) == '1') generate slave(DscByPass(1))

  val dscByPassC2H2 = (dmaConfig.dma.c2hDescriptorByPass
    .toString()
    .drop(2)
    .dropRight(1)(
      2
    ) == '1') generate slave(DscByPass(2))

  val dscByPassC2H3 = (dmaConfig.dma.c2hDescriptorByPass
    .toString()
    .drop(2)
    .dropRight(1)(
      3
    ) == '1') generate slave(DscByPass(3))

  val dscByPassH2C0 = (dmaConfig.dma.h2cDescriptorByPass
    .toString()
    .drop(2)
    .dropRight(1)(
      0
    ) == '1') generate slave(DscByPass(0))

  val dscByPassH2C1 = (dmaConfig.dma.h2cDescriptorByPass
    .toString()
    .drop(2)
    .dropRight(1)(
      1
    ) == '1') generate slave(DscByPass(1))

  val dscByPassH2C2 = (dmaConfig.dma.h2cDescriptorByPass
    .toString()
    .drop(2)
    .dropRight(1)(
      2
    ) == '1') generate slave(DscByPass(2))

  val dscByPassH2C3 = (dmaConfig.dma.h2cDescriptorByPass
    .toString()
    .drop(2)
    .dropRight(1)(
      3
    ) == '1') generate slave(DscByPass(3))

  val cfgMgmt = slave(CfgMgmt())

  val sys = ClockDomain.external(
    "sys",
    ClockDomainConfig(resetKind = SYNC, resetActiveLevel = LOW)
  )

  ClockDomain.current.clock.setName("axi_aclk")
  ClockDomain.current.reset.setName("axi_aresetn")
  sys.clock.setName("sys_clk")
  sys.reset.setName("sys_rst_n")

  val msiEnable      = dmaConfig.misc.msiCapability generate (out Bool ())
  val msiVectorWidth = dmaConfig.misc.msiCapability generate (out Bits (3 bits))

  val msiXEnable = dmaConfig.misc.msixCapability generate (out Bool ())

  XDMAReName(this)

}

case class GenTestComponent(dmaConfig: DMAConfig) extends Component {
  val io = new Bundle {
    val xdmaIo = DmaIO(dmaConfig)
  }
  noIoPrefix()
  import Utils.InitUtils
  io.setInvalid()
}

object GenTest extends App {
  SpinalVerilog(
    GenTestComponent(
      XDMAConfig(
        Basic(
          DMA,
          Basic,
          PCIeInterface(LaneWidth(8), MaxLinkSpeed(8.0)),
          AxiInterface(
            AxiDataWith(256),
            AxiClockFrequency(250),
            ST,
            PropagateParity
          ),
          false
        ),
        BARs(haveAxiLiteMaster = false, haveDmaByPass = false),
        MISC(8, msiCapability  = true, msixCapability = true),
        DMA(4, 4, CloseAll, CloseAll, 4)
      )
    )
  )

}
