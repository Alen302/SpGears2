package SpGears.RiscVCPU

import spinal.lib._
import spinal.core._
import SpGears.RiscVCPU.insType.{BType, IType, JType, RType, SType, UType, insType}
import SpGears.RiscVCPU.opType.{ASrl, Add, And, Div, EBreak, Eq, Ge, Jump, Load, Lt, Mul, Neq, Or, Rem, Sll, Slt, Srl, Store, Sub, Ua, Ul, Xor, opType}

case class RiscVIDU(config: CPUConfig) extends Component {
  def rvW   = config.rvWidth
  def instW = 32

  val io = new Bundle {
    // the pipeline register list
    val fmIfPC = in UInt (rvW bits)   // the PC from IFU which will be transform to EXU
    val fmIfIR = in Bits (instW bits) // the IR from IFU which will be used to decode for generating control signal
    // which will be used in following pipeline segment
    val fmIfNew = in Bool () // indicate whether is new instruction

    val toExPC   = out UInt (rvW bits) // the PC value which will be use branch or jump instruction
    val toExRrs1 = out UInt (rvW bits) // the R[rs1]
    val toExRrs2 = out UInt (rvW bits) // the R[rs2]
    val toExRd   = out UInt (5 bits)   // the Rd
    val toExImm  = out UInt (rvW bits) // the EXT[imm]

    // the control signal list
    val aluASrc  = out Bool ()       // indicate the ALU A Port's source (1 -> PC, 0 -> R[rs1])
    val aluBSrc  = out Bits (2 bits) // indicate the ALU B Port's source (00 -> R[rs2], 01 -> constant, 10 -> EXT[imm])
    val aluCtrl  = out Bits (4 bits) // indicate the ALU operation type
    val aluOpSg  = out Bits (2 bits) // indicate the ALU operand's sign (00 -> u/u, 01 -> u/s, 10 -> s/u, 11 ->s/s)
    val aluATrc  = out Bits (2 bits) // indicate the ALU operand's bits which be used (00 -> full, 01 -> half, 10 -> 6 bits, 11 -> 5 bits)
    val aluBTrc  = out Bits (2 bits) // indicate the ALU operand's bits which be used (00 -> full, 01 -> half, 10 -> 6 bits, 11 -> 5 bits)
    val aluRsTrc = out Bits (2 bits) // indicate the ALU result whether should be truncated (00 -> none, 01 -> truncate High, 10 -> truncate Low)
    val aluRsExd = out Bits (2 bits) // indicate the ALU result whether should be extended bits (00 -> none, 01 -> signEx, 10 -> UnSignEx)
    val aluRsSet = out Bool ()       // indicate the ALU result whether set according to zero flag
    val aluMuTrc = out Bool ()       // indicate the ALU Multiply result truncate type (0 -> truncate Low, 1 -> Truncate High)
    val memWr    = out Bool ()       // indicate whether write data to Memory (SType -> 1, otherType -> 0)
    val lsType   = out Bits (2 bits) // indicate which type Store/Load instruction (0 -> w, 1 -> h, 2-> b, 3 -> d)
    val lsSign   = out Bool ()       // when Store/Load is in unsigned pattern, it should be False
    val brType   = out Bits (3 bits) // indicate which branch type instruction be detect (0 -> beq, 1 -> bne, 2 -> blt, 3 ->bge, MAX -> none)
    val isJump   = out Bool ()       // when the IDU decode the instruction is jump type this signal is 1
    val rJump    = out Bool ()       // when the IDU decode the instruction is jalr, this signal is 1
    val isEBrk   = out Bool ()       // when the IDU decode the instruction is EBreak, this signal is 1
    val memToReg = out Bool ()       // indicate which source should be write into R[rd] (1 -> Mem, 0 -> ALU)
    val regWr    = out Bool ()       // when the instruction operation should write register , this signal should be set 1

    // the read regFile signal list
    val rs1Ao = out UInt (5 bits)  // the rs1 which be used to read register value
    val rs2Ao = out UInt (5 bits)  // the rs2 which be used to read register value
    val rs1Di = in UInt (rvW bits) // the R[rs1] which from RegFile
    val rs2Di = in UInt (rvW bits) // the R[rs2] which from RegFile

  }
  noIoPrefix()

  /*-----------------------------------------default output--------------------------------------------*/

  val exRs1 = RegNext(io.rs1Di)
  val exRs2 = RegNext(io.rs2Di)
  val exImm = RegInit(U(0).resize(rvW))
  val aSrc  = RegInit(False)
  val bSrc  = RegInit(B(0).resize(2))
  val ctrl  = RegInit(B(0).resize(4))
  val opSg  = RegInit(B(0).resize(2))
  val aTrc  = RegInit(B(0).resize(2))
  val bTrc  = RegInit(B(0).resize(2))
  val rsTrc = RegInit(B(0).resize(2))
  val rsExd = RegInit(B(0).resize(2))
  val rsSet = RegInit(False)
  val muTrc = RegInit(False)
  val mWr   = RegInit(False)
  val lsTp = RegInit(if (rvW == 64) { io.lsType.getAllTrue }
  else { B(0).resized })
  val lsSg   = RegInit(True)
  val brTp   = RegInit(io.brType.getAllTrue)
  val isJp   = RegInit(False)
  val rJp    = RegInit(False)
  val eBrk   = RegInit(False)
  val mToReg = RegInit(False)
  val rWr    = RegInit(False)

  val decodePC = Mux(io.fmIfNew, io.fmIfPC, U(0, rvW bits))
  val decodeIR = Mux(io.fmIfNew, io.fmIfIR, B(0, 32 bits))

  io.toExPC   := RegNext(decodePC)
  io.toExRd   := RegNext(decodeIR(rdRange)).asUInt
  io.toExImm  := exImm
  io.toExRrs1 := exRs1
  io.toExRrs2 := exRs2
  io.aluASrc  := aSrc
  io.aluBSrc  := bSrc
  io.aluCtrl  := ctrl
  io.aluOpSg  := opSg
  io.aluATrc  := aTrc
  io.aluBTrc  := bTrc
  io.aluRsTrc := rsTrc
  io.aluRsExd := rsExd
  io.aluRsSet := rsSet
  io.aluMuTrc := muTrc
  io.memWr    := mWr
  io.lsType   := lsTp
  io.lsSign   := lsSg
  io.brType   := brTp
  io.isJump   := isJp
  io.rJump    := rJp
  io.isEBrk   := eBrk
  io.memToReg := mToReg
  io.regWr    := rWr
  io.rs1Ao    := decodeIR(rs1Range).asUInt
  io.rs2Ao    := decodeIR(rs2Range).asUInt

  /*------------------------------------decode for getting operands------------------------------------*/
  instArray.foreach { opd =>
    opd.instType match {
      case RType =>
        when(decodeIR === opd.instLiter) {
          when(decodeIR(3)) { // xxxw
            opd.optType match {
              case Sll => bTrc := B(3).resized
              case Srl | ASrl =>
                aTrc := B(1).resized
                bTrc := B(3).resized
              case Div | Rem =>
                aTrc := B(1).resized
                bTrc := B(1).resized
              case _ =>
            }
          }.otherwise {
            opd.optType match {
              case Sll | Srl | ASrl =>
                if (rvW == 64) { bTrc := B(2).resized }
                else { bTrc := B(3).resized }
              case _ =>
            }
          }
        }
      case SType =>
        when(decodeIR === opd.instLiter) {
          exImm := (decodeIR(immUpForS) ## decodeIR(immDownForS)).asSInt.resize(rvW).asUInt
        }
      case BType =>
        when(decodeIR === opd.instLiter) {
          exImm := (decodeIR(imm12ForB) ## decodeIR(imm11ForB) ##
            decodeIR(imm10To5ForB) ## decodeIR(imm4To1ForB) ## B(0, 1 bits)).asSInt.resize(rvW).asUInt
        }
      case IType =>
        when(decodeIR === opd.instLiter) {
          exImm := decodeIR(immForI).asSInt.resize(rvW).asUInt
          opd.optType match {
            case Sll => bTrc := B(2).resized // Imm[5 : 0] -> 6 bits
            case Srl | ASrl =>
              bTrc := B(2).resized // Imm[5 : 0] -> 6 bits
              when(decodeIR(3) === True) { // srliw, sraiw
                aTrc := B(1).resized // half -> R[rs1][31 : 0]
              }
            case _ =>
          }
        }
      case UType =>
        when(decodeIR === opd.instLiter) {
          exImm := decodeIR(imm31To12ForU).asBits.resizeLeft(rvW).asUInt
        }
      case JType =>
        when(decodeIR === opd.instLiter) {
          exImm := (decodeIR(imm20ForJ) ## decodeIR(imm19To12ForJ) ##
            decodeIR(imm11ForJ) ## decodeIR(imm10To1ForJ) ## U(0, 1 bits)).asUInt.resize(rvW)
        }
    }
  }

  /*---------------------------------decode for getting control signal---------------------------------*/
  instArray.foreach { ctl =>
    ctl.instType match {
      case RType =>
        when(decodeIR === ctl.instLiter) {
          io.regWr := True
          when(decodeIR(3)) { // xxxw inst
            ctl.optType match {
              case Add =>
                rsExd := B(1).resized
                rsTrc := B(1).resized
              case Sub =>
                rsExd := B(1).resized
                rsTrc := B(1).resized
                ctrl := B(1).resized // -
              case Sll =>
                rsExd := B(1).resized
                rsTrc := B(1).resized
                ctrl := B(5).resized // <<
              case Srl  => ctrl := B(6).resized // >>u
              case ASrl => ctrl := B(7).resized // >>s
              case Mul =>
                rsExd := B(1).resized
                rsTrc := B(1).resized
                ctrl := B(2).resized // *
              case Div =>
                rsExd := B(1).resized
                ctrl  := B(3).resized // '/'
                when(!decodeIR(12)) {
                  opSg := B(3).resized // sign /
                }
              case Rem =>
                rsExd := B(1).resized
                ctrl  := B(4).resized // %
                when(!decodeIR(12)) {
                  opSg := B(3).resized // sign %
                }
              case _ =>
            }
          }.otherwise {
            ctl.optType match {
              case Sub => ctrl := B(1).resized // -
              case Slt =>
                ctrl  := B(1).resized // -
                rsSet := True
                when(!decodeIR(12)) {
                  opSg := B(3).resized // sign -
                }
              case Sll  => ctrl := B(5).resized  // <<
              case Srl  => ctrl := B(6).resized  // >>u
              case ASrl => ctrl := B(7).resized  // >>s
              case Xor  => ctrl := B(8).resized  // xor
              case Or   => ctrl := B(9).resized  // or
              case And  => ctrl := B(10).resized // and
              case Mul =>
                ctrl := B(2).resized // *
                when(decodeIR(13 downto 12) === B(0)) {
                  muTrc := True
                }.elsewhen(decodeIR(13 downto 12) === B(1)) {
                  opSg := B(3).resized // sign *
                }.elsewhen(decodeIR(13 downto 12) === B(2)) {
                  opSg := B(2).resized // sign-unSign *
                }
              case Div =>
                ctrl := B(3).resized // '/'
                when(!decodeIR(12)) {
                  opSg := B(3).resized // sign "/"
                }
              case Rem =>
                ctrl := B(5).resized // %
                when(!decodeIR(12)) {
                  opSg := B(3).resized // sign %
                }
              case _ =>
            }
          }
        }
      case SType =>
        when(decodeIR === ctl.instLiter) {
          mWr  := True
          bSrc := B(2).resized // EXT[Imm]
          when(decodeIR(13 downto 12) === B(0)) {
            lsTp := B(2).resized // sb
          }.elsewhen(decodeIR(13 downto 12) === B(1)) {
            lsTp := B(1).resized // sh
          }.elsewhen(decodeIR(13 downto 12) === B(2)) {
            lsTp := B(0).resized // sw
          }.elsewhen(decodeIR(13 downto 12) === B(3)) {
            lsTp := B(3).resized // sd
          }
        }
      case BType =>
        when(decodeIR === ctl.instLiter) {
          ctrl := B(1).resized // -
          ctl.optType match {
            case Eq  => brTp := B(0).resized
            case Neq => brTp := B(1).resized
            case Lt =>
              brTp := B(2).resized
              when(!decodeIR(13)) {
                opSg := B(3).resized
              }
            case Ge =>
              brTp := B(3).resized
              when(!decodeIR(13)) {
                opSg := B(3).resized
              }
            case _ =>
          }
        }
      case IType =>
        when(decodeIR === ctl.instLiter) {
          if (ctl.optType != Jump) {
            bSrc := B(2).resized // EXT[Imm]
          }
          if (ctl.optType != EBreak) {
            rWr := True
          }
          ctl.optType match {
            case Load =>
              when(decodeIR(14)) { // xxu
                mToReg := True // R[rd]'s source from Memory
                lsSg   := False
                when(decodeIR(13 downto 12) === B(0)) {
                  lsTp := B(2).resized // lbu
                }.elsewhen(decodeIR(13 downto 12) === B(1)) {
                  lsTp := B(1).resized // lhu
                }.elsewhen(decodeIR(13 downto 12) === B(2)) {
                  lsTp := B(0).resized // lwu
                }
              }.otherwise {
                when(decodeIR(13 downto 12) === B(0)) {
                  lsTp := B(2).resized // lb
                }.elsewhen(decodeIR(13 downto 12) === B(1)) {
                  lsTp := B(1).resized // lh
                }.elsewhen(decodeIR(13 downto 12) === B(2)) {
                  lsTp := B(0).resized // lw
                }.otherwise {
                  lsTp := B(3).resized // ld
                }
              }
            case Add =>
              when(decodeIR(3)) { // addiw
                rsExd := B(1).resized
                rsTrc := B(1).resized
              }
            case Slt =>
              rsSet := True
              when(!decodeIR(12)) { // sltiu
                opSg := B(3).resized // sign -
              }
            case Sll =>
              ctrl := B(5).resized // <<
              when(decodeIR(3)) { // slliw
                rsExd := B(1).resized
                rsTrc := B(1).resized
              }
            case Srl  => ctrl := B(6).resized  // >>u
            case ASrl => ctrl := B(7).resized  // >>s
            case Xor  => ctrl := B(8).resized  // xor
            case Or   => ctrl := B(9).resized  // or
            case And  => ctrl := B(10).resized // and
            case Jump =>
              aSrc := True         // pc
              bSrc := B(1).resized // constant
              rJp  := True
            case EBreak => eBrk := True
            case _      =>
          }
        }
      case UType =>
        when(decodeIR === ctl.instLiter) {
          aSrc := True         // pc
          bSrc := B(2).resized // EXT[Imm]
          rWr  := True
          ctl.optType match {
            case Ul => ctrl := B(11).resized // pass
            case _  =>
          }
        }
      case JType =>
        when(decodeIR === ctl.instLiter) {
          aSrc := True         // pc
          bSrc := B(1).resized // constant
          rWr  := True
          isJp := True
        }
    }
  }

}

object genIDU extends App {
  SpinalConfig(
    targetDirectory = "ysyxGenRTL",
    globalPrefix    = "ysyx_22040525_"
  ).generateVerilog(RiscVIDU(CPUConfig()))
}
