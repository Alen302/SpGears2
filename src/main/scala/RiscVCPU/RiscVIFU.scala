package RiscVCPU

import spinal.lib._
import spinal.core._
import RiscVCPU.insType.{insType, RType, SType, BType, IType, UType, JType}
import RiscVCPU.opType.{opType, Add, Sub, Mul, Div, Sll, Srl, Load, Store, Slt, ASrl, Ul, Ua, Xor, Or, And, Jump, Eq, Neq, Lt, Ge, Rem, EBreak}
import spinal.lib.bus.amba4.axilite._
import spinal.lib.bus.amba4.axilite.AxiLite4.prot._

case class RiscVIFU(config: CPUConfig) extends Component {
  def rvW   = config.rvWidth
  def instW = 32

  def initPC = 0
//  def outStandingNumb = 16
//  def cacheNumb = 16

  val io = new Bundle {
    val toIdPC   = out UInt (rvW bits)                                // current Instruction's PC value (to IDU)
    val toIdIR   = out Bits (instW bits)                              // current Instruction (to IDU)
    val newInst  = out Bool ()                                        // indicate whether instruction is new
    val brPC     = in UInt (rvW bits)                                 // when occur branch jump , the next PC value should be brPC from EXU
    val brJump   = in Bool ()                                         // indicate whether branch jump successful
    val readInst = master(AxiLite4ReadOnly(AxiLite4Config(rvW, rvW))) // the axiLite4 for fetch instruction
  }
  noIoPrefix()

  /*----------------------------Branch/Jump detect---------------------------*/
  val brFlag = RegInit(B(0, 2 bits))
  instArray.foreach { inst =>
    (inst.instType, inst.optType) match {
      case (IType, Jump) | (BType, _) | (JType, _) =>
        if (rvW == 64) {
          when(
            io.readInst.r.data(31 downto 0) === inst.instLiter &&
              io.readInst.r.fire
          ) {
            brFlag := B(1)
          }
          when(
            io.readInst.r.data(63 downto 32) === inst.instLiter &&
              io.readInst.r.fire
          ) {
            brFlag := B(2)
          }
        } else {
          when(io.readInst.r.data === inst.instLiter && io.readInst.r.fire) {
            brFlag := B(1)
          }
        }
      case (_, _) =>
    }
  }

  /*-----------------------------------PC-----------------------------------*/
  // current PC and AR
  val PC, AR, lastAR = RegInit(U(initPC, rvW bits))
  val lastIR         = RegInit(B(0, instW bits))

  /*---------------------------the instruction cache------------------------*/
  val instCache  = RegNextWhen(io.readInst.r.data(rvW - 1 downto rvW - 32), io.readInst.r.fire)
  val iAddrCache = RegNextWhen(AR + U((rvW - 32) / 8), io.readInst.r.fire)
  val fetchHalt  = Reg(Bool()) init False
  if (rvW == 64) {
    fetchHalt.setWhen(io.readInst.r.fire).clearWhen(fetchHalt)
  } else {
    fetchHalt.clearWhen(fetchHalt)
  }

  /*-------------update the PC value for next Instruction fetch-------------*/
  val updatePC = new Area {
    when(io.readInst.ar.fire) {
      when(io.brJump) {
        PC     := io.brPC
        brFlag := B(0)
      }.elsewhen(brFlag =/= B(0)) {
        PC := PC
      }.otherwise {
        PC := PC + U(rvW / 8) // read two instruction once in RV64 CPU
      }

      AR := io.readInst.ar.addr
    }

    when(io.readInst.r.fire) {
      io.toIdPC  := AR
      lastAR     := AR
      io.newInst := True
    }.elsewhen(brFlag === B(1)) {
      io.toIdPC  := lastAR
      iAddrCache := lastAR
      io.newInst := False
    }.otherwise {
      io.toIdPC  := iAddrCache
      lastAR     := iAddrCache
      io.newInst := lastAR =/= iAddrCache
    }

  }
  /*-----------------------update the IR value for IDU-----------------------*/
  val updateIR = new Area {
    when(io.readInst.r.fire) {
      io.toIdIR := io.readInst.r.data(31 downto 0)
      lastIR    := io.readInst.r.data(31 downto 0)
    }.elsewhen(brFlag === B(1)) {
      io.toIdIR := lastIR
      instCache := lastIR
    }.otherwise {
      io.toIdIR := instCache
    }
  }

  /*--------------------axiLite4 read data channel logic---------------------*/
  io.readInst.r.ready := True

  /*--------------------axiLite4 read address channel logic------------------*/
  io.readInst.ar.addr := PC
  when(brFlag =/= B(0) || fetchHalt) {
    io.readInst.ar.valid := False
  }.otherwise {
    io.readInst.ar.valid := True
  }

  io.readInst.ar.setPermissions(INSTRUCTION_ACCESS)

  // rename the axiLite4 bus
  AxiLite4SpecRenamer(io.readInst)
}

object genIFU extends App {
  import scala.util.Random
  //println(Integer.parseInt(instArray(0).instLiter.toString.drop(2).dropRight(1).toSeq.map(s => if(s == '-') {Random.nextInt(2).toString} else {s}).mkString(""), 2)) //get the instruction for random data
  SpinalConfig(
    targetDirectory = "ysyxGenRTL",
    globalPrefix    = "ysyx_22040525_"
  ).generateVerilog(RiscVIFU(CPUConfig())).printPruned()
}
