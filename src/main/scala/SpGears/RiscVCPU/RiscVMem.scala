package SpGears.RiscVCPU

import spinal.lib._
import spinal.core._
import spinal.lib.bus.amba4.axilite._
import spinal.lib.bus.amba4.axilite.AxiLite4.prot._

import scala.math.pow

case class RiscVMem(config: CPUConfig) extends Component {
  def rvW   = config.rvWidth
  def instW = 32

  def algCkW: Int = {
    if (rvW == 64) { return 3 }
    else { return 2 }
  }
  def memN = rvW / 8

  // the instruction memory address space is 0x0000000000000000 ~ 0x000000000000xxxx
  // the instruction data   address space is 0x0000000000010000 ~ 0x000000000001xxxx
  val io = new Bundle {
    val memAcsBus = slave(AxiLite4(AxiLite4Config(rvW, rvW))) // the bus for access memory
  }
  noIoPrefix()

  /*-------------------------------define memory-------------------------------*/
  val memArray = Array.fill(rvW / 8)(Mem(Bits(8 bits), pow(2, 16 - algCkW).toInt).addAttribute("ram_style", "block"))

  /*-------------------------------write logic---------------------------------*/
  val setWResp = RegInit(False)
  val dataWrite = new Area {

    // get address for write
    val addrStore = RegNextWhen(io.memAcsBus.aw.addr, io.memAcsBus.aw.fire) init U(0, rvW bits)
    val acsAddr   = UInt(16 - algCkW bits)
    when(io.memAcsBus.aw.fire) {
      acsAddr := io.memAcsBus.aw.addr(15 downto algCkW)
    }.otherwise {
      acsAddr := addrStore(15 downto algCkW)
    }
    // write data/instructions
    when(io.memAcsBus.w.fire) {
      memArray.zipWithIndex.foreach { case (mem, idx) =>
        when(!io.memAcsBus.w.strb(idx)) {
          memArray(idx).write(acsAddr, io.memAcsBus.w.data(7 + idx * 8 downto idx * 8))
        }
      }
      setWResp := True
    }
    when(io.memAcsBus.b.fire && !io.memAcsBus.w.fire) { setWResp := False }
  }

  /*--------------------------axiLite4 aw channel logic-----------------------*/
  io.memAcsBus.aw.ready := True

  /*--------------------------axiLite4 w channel logic------------------------*/
  io.memAcsBus.w.ready := True

  /*--------------------------axiLite4 b channel logic------------------------*/
  io.memAcsBus.b.valid := setWResp
  io.memAcsBus.b.setOKAY()

  /*--------------------------------read logic--------------------------------*/
  io.memAcsBus.r.data := B(0, rvW bits)
  val setRResp = RegInit(False)

  val dataRead = new Area {

    // get address for read
    val acsAddr = io.memAcsBus.ar.addr(15 downto algCkW)

    // read data
    when(io.memAcsBus.ar.fire) {
      (0 to pow(2, algCkW).toInt - 1).foreach { idx1 =>
        when(acsAddr(algCkW - 1 downto 0) === U(idx1)) {
          (0 to pow(2, algCkW).toInt - 1).foreach { idx2 =>
            io.memAcsBus.r.data(7 + idx2 * 8 downto idx2 * 8) := memArray((idx2 + idx1) % pow(2, algCkW).toInt).readSync(acsAddr)
          }
          setRResp := True
        }
      }
    }

  }

  /*--------------------------axiLite4 ar channel logic-----------------------*/
  io.memAcsBus.ar.ready := True

  /*--------------------------axiLite4 r channel logic------------------------*/
  io.memAcsBus.r.valid := setRResp
  io.memAcsBus.r.setOKAY()
  when(io.memAcsBus.r.fire && !io.memAcsBus.ar.fire) { setRResp := False }

}

object genMem extends App {
  SpinalConfig(
    targetDirectory = "ysyxGenRTL",
    globalPrefix    = "ysyx_22040525_"
  ).generateVerilog(RiscVMem(CPUConfig()))
}
