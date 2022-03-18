package Other

import spinal.core._
import spinal.lib._


case class SpinalHDLTest() extends Component {
  val io = new Bundle {
    val in1 = in UInt (8 bits)
    val in2 = in UInt (6 bits)

    val out1 = out UInt (6 bits)
    val out2 = out UInt (6 bits)
    val out3 = out UInt (6 bits)
    val out4 = out UInt (6 bits)
    val out5 = out UInt (6 bits)
    val out6 = out Bool()
    //val out7 = out UInt (6 bits)
  }

  noIoPrefix()

  /*  val area1 = new Area {
    val name1 = U(8, 8 bits)
    val name2 = name1 + io.in1
    io.out1 := io.in1 + io.in2 + name1
  }
  val cond = io.in1 === io.in2
  when(cond){
    io.out1 := io.in1 + U(1)
  }*/
  io.out1 := (io.in1 + io.in2).resized
  io.out2 := (io.in1 - io.in2).resized
  io.out3 := (io.in1 * io.in2).resized
  io.out4 := (io.in1 / io.in2).resized
  io.out5 := (io.in1 % io.in2).resized
  io.out6 := io.in1 > io.in2

  val flow = master Flow UInt(8 bits)

}
object RunTest extends App{
  SpinalVerilog(SpinalHDLTest())
}
