package SpGears.Other

import spinal.lib._
import spinal.core._

case class IBundle() extends Bundle {
  val a = in UInt (8 bits)
}
case class SpinalHDLTest(opt: MaskedLiteral) extends Component {
  val dataIn  = Seq(IBundle())
  val dataOut = out Bool ()

  dataOut := False
  when(opt === B(0, 3 bits)) {
    dataOut := RegNext(True)
  }
}

object genTest extends App {
  SpinalVerilog(SpinalHDLTest(M"000"))
  Range(0, 4).foreach(println(_))
}
