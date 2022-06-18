package RiscVCPU

import spinal.lib._
import spinal.core._

case class RiscVRegFile(config: CPUConfig) extends Component {
  def rvW = config.rvWidth

  val io = new Bundle {
    val regWr = in Bool ()          // register file write enable signal
    val rs1Ai = in UInt (5 bits)    // rs1 segment (as read register address)
    val rs2Ai = in UInt (5 bits)    // rs2 segment (as read register address)
    val rdAi  = in UInt (5 bits)    // rd  segment (as write register address)
    val rdDi  = in UInt (rvW bits)  // rd  register data which will be write into corresponding register
    val rs1Do = out UInt (rvW bits) // register value which be select by rs1 segment
    val rs2Do = out UInt (rvW bits) // register value which be select by rs2 segment
  }
  noIoPrefix()

  /*------------------------general purpose register group------------------------*/
  val regFile = Array.fill(32)(RegInit(U(0, rvW bits)))

  /*-------------------------------default  output-------------------------------*/
  io.rs1Do := regFile(0)
  io.rs2Do := regFile(0)

  /*-------------------------------read   register-------------------------------*/
  val readReg = new Area {
    when(!io.regWr) {
      regFile.zipWithIndex.foreach { case (reg, idx) =>
        when(io.rs1Ai === U(idx)) { io.rs1Do := regFile(idx) }
        when(io.rs2Ai === U(idx)) { io.rs2Do := regFile(idx) }
      }
    }
  }

  /*-------------------------------write register-------------------------------*/
  val writeReg = new Area {
    when(io.regWr) {
      regFile.zipWithIndex.foreach { case (reg, idx) =>
        when(io.rdAi === U(idx)) { regFile(idx) := io.rdDi }
      }
    }
  }

}

object genRegFile extends App {
  SpinalConfig(
    targetDirectory = "ysyxGenRTL",
    globalPrefix    = "ysyx_22040525_"
  ).generateVerilog(RiscVRegFile(CPUConfig()))
}
