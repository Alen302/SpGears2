package AIE.Axi4.Axi4Stream

import spinal.core._
import spinal.lib._

// define a config class for Axi4Module.Axi4Stream.Axi4Stream
case class Axi4StreamConfig(dataWidth: Int,
                            dataNumber: Int,
                            useStrb: Boolean = true,
                            useKeep: Boolean = true,
                            useLast: Boolean = true,
                            useId: Boolean = true,
                            useDest: Boolean = true,
                            useUser: Boolean = true,
                            tIdWidth: Int = -1,
                            tDestWidth: Int = -1,
                            tUserWidth: Int = -1
                           ) {
  // when use the ID, DEST, USER signal, some condition should be met
  if (useId) {
    require(tIdWidth >= 0, "You shoud set the tIdWidth in this config !")
  }

  if (useDest) {
    require(tDestWidth >= 0, "You shoud set the tDestWidth in this config !")
  }

  if (useUser) {
    require(tUserWidth >= 0, "You shoud set the tUserWidth in this config !")
  }

  val dataType = HardType(Bits(dataWidth bits))

}

case class Axi4StreamBus(config: Axi4StreamConfig) extends Bundle {
  // define some interface signals which we need to define this interface
  val Data = Bits(config.dataWidth * config.dataNumber bits)
  val Strb = if (config.useStrb) Bits(config.dataNumber bits) else null
  val Keep = if (config.useKeep) Bits(config.dataNumber bits) else null
  val Last = if (config.useLast) Bool() else null
  val Id = if (config.useId) Bits(config.tIdWidth bits) else null
  val Dest = if (config.useDest) Bits(config.tDestWidth bits) else null
  val User = if (config.useUser) Bits(config.tUserWidth bits) else null

}

case class Axi4Stream(config: Axi4StreamConfig) extends Bundle {
  val t = Stream(Axi4StreamBus(config))

  def axi4_s_interface: Stream[Axi4StreamBus] = t
}

object Axi4StreamSpecRenamer {
  def apply(that: Axi4Stream): Unit = {
    def doIt() = {
      that.flatten.foreach { port =>
        port.setName(port.getName().replace("_payload_", ""))
        port.setName(port.getName().replace("_valid", "Valid"))
        port.setName(port.getName().replace("_ready", "Ready"))
        if (port.getName().startsWith("io_")) port.setName(port.getName().replaceFirst("io_", ""))
      }
    }

    if (Component.current == that.component) {
      that.component.addPrePopTask(() => doIt)
    } else {
      doIt
    }
  }
}
