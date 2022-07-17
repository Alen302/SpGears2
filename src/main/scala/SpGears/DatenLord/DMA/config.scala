package SpGears.DatenLord.DMA

import spinal.core._

// the basic GUI panel

trait BasicPanelConfig
trait FunctionalMode extends BasicPanelConfig
trait Mode extends BasicPanelConfig
trait PCIeInterfaceConfig extends BasicPanelConfig
trait AxiInterfaceConfig extends BasicPanelConfig
trait DmaInterfaceOption extends AxiInterfaceConfig
trait DataProtection extends AxiInterfaceConfig

// functional mode
object DMA extends FunctionalMode
object Bridge extends FunctionalMode

// GT selection
case class GtSelection(enable: Boolean, gtGuad: Int) extends BasicPanelConfig {
  assert(gtGuad >= 224 && gtGuad <= 227, " the GT Guad is illegal !")
}

// mode
object Basic extends Mode
object Advanced extends Mode

// lane width
case class LaneWidth(width: Int) extends PCIeInterfaceConfig {
  require(
    width == 1 || width == 2 || width == 4 || width == 8 || width == 16,
    "the lane width is illegal !"
  )
}

// maximum link speed
case class MaxLinkSpeed(maxLinkSpeed: Double) extends PCIeInterfaceConfig {
  require(
    maxLinkSpeed == 2.5 || maxLinkSpeed == 5.0 || maxLinkSpeed == 8.0,
    " the maximum link speed is illegal !"
  )
}

// the PCIe Interface config
case class PCIeInterface(
    laneWidth: LaneWidth,
    maxLinkSpeed: MaxLinkSpeed
)

// axi interface data width
case class AxiDataWith(dataWidth: Int) extends AxiInterfaceConfig {
  require(
    dataWidth == 64 || dataWidth == 128 || dataWidth == 256 || dataWidth == 512,
    " the axi interface dataWith is illegal !"
  )
}

// axi interface clock frequency
case class AxiClockFrequency(clockFreq: Double) extends AxiInterfaceConfig {
  require(
    clockFreq == 62.5 || clockFreq == 125 || clockFreq == 250,
    " the axi clock frequency is illegal !"
  )
}

// axi interface option of XDMA
object MM extends DmaInterfaceOption
object ST extends DmaInterfaceOption

// data protection
object None extends DataProtection
object CheckParity extends DataProtection
object PropagateParity extends DataProtection

// the AXI Interface config
case class AxiInterface(
    dataWith: AxiDataWith,
    axiClockFrequency: AxiClockFrequency,
    dmaInterfaceOption: DmaInterfaceOption,
    dataProtection: DataProtection
)

case class Basic(
    functionalMode: FunctionalMode,
    mode: Mode,
    pcieInterface: PCIeInterface,
    axiInterface: AxiInterface,
    haveAxiLiteSlave: Boolean
) {
  // do some config check
  pcieInterface.laneWidth.width match {
    case 1 =>
      require(
        axiInterface.dataWith.dataWidth == 64,
        " the axi data width is illegal !"
      )
      pcieInterface.maxLinkSpeed.maxLinkSpeed match {
        case 2.5 =>
        case 5.0 =>
        case 8.0 =>
          require(
            axiInterface.axiClockFrequency.clockFreq != 62.5,
            " the axi clock frequency is illegal !"
          )
        case _ => ???
      }

    case 2 =>
      pcieInterface.maxLinkSpeed.maxLinkSpeed match {
        case 2.5 =>
          require(
            axiInterface.dataWith.dataWidth == 64,
            " the axi data width is illegal !"
          )
        case 5.0 =>
          require(
            axiInterface.axiClockFrequency.clockFreq != 62.5,
            " the axi clock frequency is illegal !"
          )
          require(
            axiInterface.dataWith.dataWidth == 64,
            " the axi data width is illegal !"
          )
        case 8.0 =>
          require(
            axiInterface.axiClockFrequency.clockFreq == 250,
            " the axi clock frequency is illegal !"
          )
          require(
            axiInterface.dataWith.dataWidth == 64 || axiInterface.dataWith.dataWidth == 128,
            " the axi data width is illegal !"
          )
        case _ => ???
      }

    case 4 =>
      pcieInterface.maxLinkSpeed.maxLinkSpeed match {
        case 2.5 =>
          require(
            axiInterface.axiClockFrequency.clockFreq != 62.5,
            " the axi clock frequency is illegal !"
          )
          require(
            axiInterface.dataWith.dataWidth == 64,
            " the axi data width is illegal !"
          )
        case 5.0 =>
          require(
            axiInterface.axiClockFrequency.clockFreq == 250,
            " the axi clock frequency is illegal !"
          )
          require(
            axiInterface.dataWith.dataWidth == 64 || axiInterface.dataWith.dataWidth == 128,
            " the axi data width is illegal !"
          )
        case 8.0 =>
          require(
            axiInterface.axiClockFrequency.clockFreq == 250,
            " the axi clock frequency is illegal !"
          )
          require(
            axiInterface.dataWith.dataWidth == 128 || axiInterface.dataWith.dataWidth == 256,
            " the axi data width is illegal !"
          )
        case _ => ???
      }

    case 8 =>
      require(
        axiInterface.axiClockFrequency.clockFreq == 250,
        " the axi clock frequency is illegal !"
      )
      pcieInterface.maxLinkSpeed.maxLinkSpeed match {
        case 2.5 =>
          require(
            axiInterface.dataWith.dataWidth == 64 || axiInterface.dataWith.dataWidth == 128,
            " the axi data width is illegal !"
          )
        case 5.0 =>
          require(
            axiInterface.dataWith.dataWidth == 128 || axiInterface.dataWith.dataWidth == 256,
            " the axi data width is illegal !"
          )
        case 8.0 =>
          require(
            axiInterface.dataWith.dataWidth == 256,
            " the axi data width is illegal !"
          )
        case _ => ???
      }

    case 16 =>
      require(
        axiInterface.axiClockFrequency.clockFreq == 250,
        " the axi clock frequency is illegal !"
      )
      pcieInterface.maxLinkSpeed.maxLinkSpeed match {
        case 2.5 =>
          require(
            axiInterface.dataWith.dataWidth == 128,
            " the axi data width is illegal !"
          )
        case 5.0 =>
          require(
            axiInterface.dataWith.dataWidth == 256,
            " the axi data width is illegal !"
          )
        case 8.0 =>
          require(
            axiInterface.dataWith.dataWidth == 512,
            " the axi data width is illegal !"
          )
        case _ => ???
      }
  }

}

// the BARs GUI panel
case class BARs(haveAxiLiteMaster: Boolean, haveDmaByPass: Boolean)

// the MISC GUI panel
case class MISC(
    userInterNumber: Int,
    msiCapability: Boolean,
    msixCapability: Boolean
) {
  require(
    userInterNumber >= 1 && userInterNumber <= 16,
    " the user interrupt number is illegal!"
  )
}

trait DscBypassType

object CloseAll extends DscBypassType
object OpenOne extends DscBypassType
object OpenTwo extends DscBypassType
object OpenTwoOne extends DscBypassType
object OpenThree extends DscBypassType
object OpenThreeOne extends DscBypassType
object OpenThreeTwo extends DscBypassType
object OpenThreeTwoOne extends DscBypassType
object OpenFour extends DscBypassType
object OpenFourOne extends DscBypassType
object OpenFourTwo extends DscBypassType
object OpenFourTwoOne extends DscBypassType
object OpenFourThree extends DscBypassType
object OpenFourThreeOne extends DscBypassType
object OpenFourThreeTwo extends DscBypassType
object OpenAll extends DscBypassType

// the DMA GUI panel
case class DMA(
    h2cChannelNumber: Int,
    c2hChannelNumber: Int,
    h2cDescriptorByPass: DscBypassType,
    c2hDescriptorByPass: DscBypassType,
    axiIdWidth: Int
) {
  require(
    h2cChannelNumber >= 1 && h2cChannelNumber <= 4,
    " the h2c channel number is illegal !"
  )
  require(
    c2hChannelNumber >= 1 && h2cChannelNumber <= 4,
    " the c2h channel number is illegal !"
  )
  require(axiIdWidth == 2 || axiIdWidth == 4, " the axi id width is illegal !")

  h2cChannelNumber match {
    case 1 =>
      require(
        h2cDescriptorByPass == CloseAll || h2cDescriptorByPass == OpenOne,
        " the h2c descriptor bypass is illegal !"
      )
    case 2 =>
      require(
        h2cDescriptorByPass == CloseAll || h2cDescriptorByPass == OpenOne || h2cDescriptorByPass == OpenTwo || h2cDescriptorByPass == OpenTwoOne,
        " the h2c descriptor bypass is illegal !"
      )
    case 3 =>
      require(
        h2cDescriptorByPass == CloseAll || h2cDescriptorByPass == OpenOne || h2cDescriptorByPass == OpenTwo || h2cDescriptorByPass == OpenTwoOne
          || h2cDescriptorByPass == OpenThree || h2cDescriptorByPass == OpenThreeOne || h2cDescriptorByPass == OpenFourThreeTwo || h2cDescriptorByPass == OpenThreeTwoOne,
        " the h2c descriptor bypass is illegal !"
      )
    case _ =>
  }

  c2hChannelNumber match {
    case 1 =>
      require(
        c2hDescriptorByPass == CloseAll || c2hDescriptorByPass == OpenOne,
        " the h2c descriptor bypass is illegal !"
      )
    case 2 =>
      require(
        c2hDescriptorByPass == CloseAll || c2hDescriptorByPass == OpenOne || c2hDescriptorByPass == OpenTwo || c2hDescriptorByPass == OpenTwoOne,
        " the h2c descriptor bypass is illegal !"
      )
    case 3 =>
      require(
        c2hDescriptorByPass == CloseAll || c2hDescriptorByPass == OpenOne || c2hDescriptorByPass == OpenTwo || c2hDescriptorByPass == OpenTwoOne
          || c2hDescriptorByPass == OpenThree || c2hDescriptorByPass == OpenThreeOne || c2hDescriptorByPass == OpenFourThreeTwo || c2hDescriptorByPass == OpenThreeTwoOne,
        " the h2c descriptor bypass is illegal !"
      )
    case _ =>
  }
}

trait DMAConfig {
  val basic: Basic
  val bars: BARs
  val misc: MISC
  val dma: DMA
}

case class XDMAConfig(basic: Basic, bars: BARs, misc: MISC, dma: DMA) extends DMAConfig {}

object XDMAReName {
  def apply(that: DmaIO): Unit = {
    def doIt() = {
      that.flatten.foreach { port =>
        port.setName(
          port.getName().replace(that.getName() + "_sAxibRuser", "s_axib_ruser")
        )
        port.setName(
          port.getName().replace(that.getName() + "_mAxi_", "m_axi_")
        )
        port.setName(
          port.getName().replace(that.getName() + "_mAxisH2C_", "m_axis_h2c_")
        )
        port.setName(
          port.getName().replace(that.getName() + "_sAxisC2H_", "s_axis_c2h_")
        )
        port.setName(
          port.getName().replace(that.getName() + "_usrIrqReq", "usr_irq_req")
        )
        port.setName(
          port.getName().replace(that.getName() + "_usrIrqAck", "usr_irq_ack")
        )
        port.setName(
          port.getName().replace(that.getName() + "_sAxiLite_", "s_axil_")
        )

        port.setName(
          port.getName().replace(that.getName() + "_mAxiLite_", "m_axil_")
        )

        port.setName(
          port.getName().replace(that.getName() + "_mAxiByPass_", "m_axib_")
        )

        port.setName(
          port.getName().replace(that.getName() + "_mAxibRuser", "s_axib_ruser")
        )
        port.setName(port.getName().replace("_payload_", ""))
        port.setName(port.getName().replace("_valid", "valid"))
        port.setName(port.getName().replace("_ready", "ready"))

        Range(0, 4).foreach { i =>
          port.setName(port.getName().replace(s"${i}ready", s"tready_${i}"))
          port.setName(port.getName().replace(s"${i}valid", s"tvalid_${i}"))
          port.setName(port.getName().replace(s"${i}data", s"tdata_${i}"))
          port.setName(port.getName().replace(s"${i}keep", s"tkeep_${i}"))
          port.setName(port.getName().replace(s"${i}last", s"tlast_${i}"))
        }

        Range(0, 4).foreach { i =>
          port.setName(
            port
              .getName()
              .replace(
                that.getName() + s"_dscByPassH2C${i}_dscByPassCtrl",
                s"h2c_dsc_byp_ctl_${i}"
              )
          )
          port.setName(
            port
              .getName()
              .replace(
                that.getName() + s"_dscByPassH2C${i}_dscByPassSrcAddr",
                s"h2c_dsc_byp_src_addr_${i}"
              )
          )
          port.setName(
            port
              .getName()
              .replace(
                that.getName() + s"_dscByPassH2C${i}_dscByPassDstAddr",
                s"h2c_dsc_byp_dst_addr_${i}"
              )
          )
          port.setName(
            port
              .getName()
              .replace(
                that.getName() + s"_dscByPassH2C${i}_dscByPassLen",
                s"h2c_dsc_byp_len_${i}"
              )
          )
          port.setName(
            port
              .getName()
              .replace(
                that.getName() + s"_dscByPassH2C${i}_dscByPassLoad",
                s"h2c_dsc_byp_load_${i}"
              )
          )
          port.setName(
            port
              .getName()
              .replace(
                that.getName() + s"_dscByPassH2C${i}_dscByPassReady",
                s"h2c_dsc_byp_ready_${i}"
              )
          )
        }

        Range(0, 4).foreach { i =>
          port.setName(
            port
              .getName()
              .replace(
                that.getName() + s"_dscByPassC2H${i}_dscByPassCtrl",
                s"c2h_dsc_byp_ctl_${i}"
              )
          )
          port.setName(
            port
              .getName()
              .replace(
                that.getName() + s"_dscByPassC2H${i}_dscByPassSrcAddr",
                s"c2h_dsc_byp_src_addr_${i}"
              )
          )
          port.setName(
            port
              .getName()
              .replace(
                that.getName() + s"_dscByPassC2H${i}_dscByPassDstAddr",
                s"c2h_dsc_byp_dst_addr_${i}"
              )
          )
          port.setName(
            port
              .getName()
              .replace(
                that.getName() + s"_dscByPassC2H${i}_dscByPassLen",
                s"c2h_dsc_byp_len_${i}"
              )
          )
          port.setName(
            port
              .getName()
              .replace(
                that.getName() + s"_dscByPassC2H${i}_dscByPassLoad",
                s"c2h_dsc_byp_load_${i}"
              )
          )
          port.setName(
            port
              .getName()
              .replace(
                that.getName() + s"_dscByPassC2H${i}_dscByPassReady",
                s"c2h_dsc_byp_ready_${i}"
              )
          )
        }

        port.setName(
          port
            .getName()
            .replace(that.getName() + "_cfgMgmt_cfgMgmtAddr", "cfg_mgmt_addr")
        )
        port.setName(
          port
            .getName()
            .replace(
              that.getName() + "_cfgMgmt_cfgMgmtByteEnable",
              "cfg_mgmt_enable"
            )
        )
        port.setName(
          port
            .getName()
            .replace(
              that.getName() + "_cfgMgmt_cfgMgmtReadData",
              "cfg_mgmt_read_data"
            )
        )
        port.setName(
          port
            .getName()
            .replace(
              that.getName() + "_cfgMgmt_cfgMgmtReadWriteDone",
              "cfg_mgmt_read_write_done"
            )
        )
        port.setName(
          port
            .getName()
            .replace(that.getName() + "_cfgMgmt_cfgMgmtRead", "cfg_mgmt_read")
        )
        port.setName(
          port
            .getName()
            .replace(
              that.getName() + "_cfgMgmt_cfgMgmtWriteData",
              "cfg_mgmt_write_data"
            )
        )
        port.setName(
          port
            .getName()
            .replace(that.getName() + "_cfgMgmt_cfgMgmtWrite", "cfg_mgmt_write")
        )

        port.setName(
          port
            .getName()
            .replace(that.getName() + "_msiEnable", "msi_enable")
        )

        port.setName(
          port
            .getName()
            .replace(that.getName() + "_msiVectorWidth", "msi_vector_width")
        )

        port.setName(
          port
            .getName()
            .replace(that.getName() + "_msiXEnable", "msix_enable")
        )

      }
    }

    if (Component.current == that.component) {
      that.component.addPrePopTask(() => doIt())
    } else {
      doIt()
    }
  }
}

object Utils {
  implicit class InitUtils(port: Bundle) {
    def setInvalid(): Unit = {
      port.flatten.foreach {
        case bool: Bool =>
          if (bool.isOutput) bool := False
        case bitVector: BitVector =>
          if (bitVector.isOutput) bitVector match {
            case uint: UInt => uint := U(0).resized
            case bits: Bits => bits := B(0).resized
            case _          =>
          }
        case _ =>
      }
    }
  }
}
