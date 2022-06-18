/*
 * this package object be use to define all element which can be use in all component
 */
import spinal.lib._
import spinal.core._
import RiscVCPU.insType.{insType, RType, SType, BType, IType, UType, JType}
import RiscVCPU.opType.{opType, Add, Sub, Mul, Div, Sll, Srl, Load, Store, Slt, ASrl, Ul, Ua, Xor, Or, And, Jump, Eq, Neq, Lt, Ge, Rem, EBreak}

import scala.collection.mutable.ArrayBuffer

package object RiscVCPU {

  /*---------------------------the instruction type---------------------------*/
  object insType extends Enumeration {
    type insType = Value
    val RType, SType, BType, IType, UType, JType = Value
  }

  /*----------------------the instruction operation type----------------------*/
  object opType extends Enumeration {
    type opType = Value
    val Add, Sub, Mul, Div, Sll, Srl, Load, Store, Slt, ASrl, Ul, Ua, Xor, Or, And, Jump, Eq, Neq, Lt, Ge, Rem, EBreak = Value
  }

  /*---------------------------the CPU config class---------------------------*/
  case class CPUConfig(rvWidth: Int = 64)

  /*--------------the class which express instruction information--------------*/
  case class Instruction(instType: insType, instLiter: MaskedLiteral, optType: opType)

  /*-----------------store the instruction which we implement-----------------*/
  val instArray = ArrayBuffer[Instruction]()

  /*-----------------the range for decode and add instruction-----------------*/
  def opcRange  = 6 downto 0
  def rdRange   = 11 downto 7
  def fun3Range = 14 downto 12
  def rs1Range  = 19 downto 15
  def rs2Range  = 24 downto 20

  // for R-type
  def fun7ForR = 31 downto 25

  // for S-type
  def immUpForS   = 31 downto 25
  def immDownForS = 11 downto 7

  // for B-type
  def imm11ForB    = 7
  def imm4To1ForB  = 11 downto 8
  def imm10To5ForB = 30 downto 25
  def imm12ForB    = 31

  // for I-type
  def immForI = 31 downto 20

  // for U-type
  def imm31To12ForU = 31 downto 12

  // for J-type
  def imm19To12ForJ = 19 downto 12
  def imm11ForJ     = 20
  def imm10To1ForJ  = 30 downto 21
  def imm20ForJ     = 31

  /*---------the function which can be use to add instruction in this cpu---------*/
  def addInst(instLiter: MaskedLiteral, instType: insType, optType: opType) = {
    instType match {
      case RType => instArray += Instruction(RType, instLiter, optType)
      case SType => instArray += Instruction(SType, instLiter, optType)
      case BType => instArray += Instruction(BType, instLiter, optType)
      case IType => instArray += Instruction(IType, instLiter, optType)
      case UType => instArray += Instruction(UType, instLiter, optType)
      case JType => instArray += Instruction(JType, instLiter, optType)
      case _     => instArray
    }
  }

  /*-----------------add instruction which this cpu will support-----------------*/

  /*------------------------------------RV64I------------------------------------*/

  /*--------------------------------RType----------------------------*/
  addInst(M"0000000_-----_-----_000_-----_0110011", RType, Add) // add
  addInst(M"0000000_-----_-----_000_-----_0111011", RType, Add) // addw
  addInst(M"0100000_-----_-----_000_-----_0110011", RType, Sub) // sub
  addInst(M"0100000_-----_-----_000_-----_0111011", RType, Sub) // subw

  addInst(M"0000000_-----_-----_010_-----_0110011", RType, Slt) // slt
  addInst(M"0000000_-----_-----_011_-----_0110011", RType, Slt) // sltu

  addInst(M"0000000_-----_-----_001_-----_0110011", RType, Sll)  // sll
  addInst(M"0000000_-----_-----_001_-----_0111011", RType, Sll)  // sllw
  addInst(M"0000000_-----_-----_101_-----_0110011", RType, Srl)  // srl
  addInst(M"0000000_-----_-----_101_-----_0111011", RType, Srl)  // srlw
  addInst(M"0100000_-----_-----_101_-----_0110011", RType, ASrl) // sra
  addInst(M"0100000_-----_-----_101_-----_0111011", RType, ASrl) // sraw

  addInst(M"0000000_-----_-----_100_-----_0110011", RType, Xor) // xor
  addInst(M"0000000_-----_-----_110_-----_0110011", RType, Or)  // or
  addInst(M"0000000_-----_-----_111_-----_0110011", RType, And) // and

  /*--------------------------------SType----------------------------*/
  addInst(M"-------_-----_-----_000_-----_0100011", SType, Store) // sb
  addInst(M"-------_-----_-----_001_-----_0100011", SType, Store) // sh
  addInst(M"-------_-----_-----_010_-----_0100011", SType, Store) // sw
  addInst(M"-------_-----_-----_011_-----_0100011", SType, Store) // sd
  /*--------------------------------BType----------------------------*/
  addInst(M"-------_-----_-----_000_-----_1100011", BType, Eq)  // beq
  addInst(M"-------_-----_-----_001_-----_1100011", BType, Neq) // bne
  addInst(M"-------_-----_-----_100_-----_1100011", BType, Lt)  // blt
  addInst(M"-------_-----_-----_101_-----_1100011", BType, Ge)  // bge
  addInst(M"-------_-----_-----_110_-----_1100011", BType, Lt)  // bltu
  addInst(M"-------_-----_-----_111_-----_1100011", BType, Ge)  // bgeu
  /*--------------------------------IType----------------------------*/
  addInst(M"-------_-----_-----_000_-----_0000011", IType, Load) // lb
  addInst(M"-------_-----_-----_001_-----_0000011", IType, Load) // lh
  addInst(M"-------_-----_-----_010_-----_0000011", IType, Load) // lw
  addInst(M"-------_-----_-----_011_-----_0000011", IType, Load) // ld
  addInst(M"-------_-----_-----_100_-----_0000011", IType, Load) // lbu
  addInst(M"-------_-----_-----_101_-----_0000011", IType, Load) // lhu
  addInst(M"-------_-----_-----_110_-----_0000011", IType, Load) // lwu

  addInst(M"-------_-----_-----_000_-----_0010011", IType, Add) // addi
  addInst(M"-------_-----_-----_000_-----_0011011", IType, Add) // addiw

  addInst(M"-------_-----_-----_010_-----_0010011", IType, Slt) // slti
  addInst(M"-------_-----_-----_011_-----_0010011", IType, Slt) // sltu

  addInst(M"-------_-----_-----_001_-----_0010011", IType, Sll)  // slli
  addInst(M"-------_-----_-----_101_-----_0010011", IType, Srl)  // srli
  addInst(M"0100000_-----_-----_101_-----_0010011", IType, ASrl) // srai
  addInst(M"-------_-----_-----_001_-----_0011011", IType, Sll)  // slliw
  addInst(M"-------_-----_-----_101_-----_0011011", IType, Srl)  // srliw
  addInst(M"0100000_-----_-----_101_-----_0011011", IType, ASrl) // sraiw

  addInst(M"-------_-----_-----_100_-----_0010011", IType, Xor) // xori
  addInst(M"-------_-----_-----_110_-----_0010011", IType, Or)  // ori
  addInst(M"-------_-----_-----_111_-----_0010011", IType, And) // andi

  addInst(M"-------_-----_-----_000_-----_1100111", IType, Jump)   // jalr
  addInst(M"0000000_00000_00000_000_-----_1110011", IType, EBreak) // ebreak

  /*--------------------------------UType----------------------------*/
  addInst(M"-------_-----_-----_---_-----_0110111", UType, Ul) // lui
  addInst(M"-------_-----_-----_---_-----_0010111", UType, Ua) // auipc

  /*--------------------------------JType----------------------------*/
  addInst(M"-------_-----_-----_---_-----_1101111", JType, Jump) // jal

  /*------------------------------------RV64M------------------------------------*/

  addInst(M"0000001_-----_-----_000_-----_0110011", RType, Mul) // mul
  addInst(M"0000001_-----_-----_001_-----_0110011", RType, Mul) // mulh
  addInst(M"0000001_-----_-----_010_-----_0110011", RType, Mul) // mulhsu
  addInst(M"0000001_-----_-----_011_-----_0110011", RType, Mul) // mulhu
  addInst(M"0000001_-----_-----_100_-----_0110011", RType, Div) // div
  addInst(M"0000001_-----_-----_101_-----_0110011", RType, Div) // divu
  addInst(M"0000001_-----_-----_110_-----_0110011", RType, Rem) // rem
  addInst(M"0000001_-----_-----_111_-----_0110011", RType, Rem) // remu

  addInst(M"0000001_-----_-----_000_-----_0111011", RType, Mul) // mulw
  addInst(M"0000001_-----_-----_100_-----_0111011", RType, Div) // divw
  addInst(M"0000001_-----_-----_101_-----_0111011", RType, Div) // divuw
  addInst(M"0000001_-----_-----_110_-----_0111011", RType, Rem) // remw
  addInst(M"0000001_-----_-----_111_-----_0111011", RType, Rem) // remuw
}
