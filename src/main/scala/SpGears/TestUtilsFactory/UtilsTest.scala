package SpGears.TestUtilsFactory

import spinal.core._
import spinal.lib._

case class Signals() extends Bundle {
  val a = UInt(8 bits)
  val b = Bool()
}
case class UtilsTest() extends Component {
  val dataIn  = slave Stream Signals()
  val baseIn  = in UInt (8 bits)
  val dataOut = master Stream Signals()
  val baseOut = out UInt (8 bits)

  dataOut <-/< dataIn
  baseOut := RegNext(baseIn)
}
