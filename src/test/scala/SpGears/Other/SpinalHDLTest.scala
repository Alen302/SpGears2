package SpGears.Other

import spinal.lib._
import spinal.core._
import SpGears.TestUtils.UVM._
import spinal.core.sim._

import scala.collection.mutable.ArrayBuffer
import scala.util.Random._

case class SpinalHDLTest() extends Component {
  val io = new Bundle {
    val cond0 = in Bool ()
    val cond1 = in Bool ()
    val flag  = out Bool ()
    val state = out UInt (8 bits)
  }
  val counter = Reg(UInt(8 bits)) init (0)

  when(io.cond0) {
    counter := counter + 1
  }

  io.state := counter
  io.flag  := (counter === 0) | io.cond1
}

object genTest extends App {
  SimConfig.withWave.withXSim.compile(SpinalHDLTest()).doSim { dut =>
    //Fork a process to generate the reset and the clock on the dut
    dut.clockDomain.forkStimulus(period = 10)

    var modelState = 0
    for (idx <- 0 to 99) {
      //Drive the dut inputs with random values
      dut.io.cond0 #= nextBoolean()
      dut.io.cond1 #= nextBoolean()

      //Wait a rising edge on the clock
      dut.clockDomain.waitRisingEdge()

      //Check that the dut values match with the reference model ones
      val modelFlag = modelState == 0 || dut.io.cond1.toBoolean
      assert(dut.io.state.toInt == modelState)
      assert(dut.io.flag.toBoolean == modelFlag)

      //Update the reference model value
      if (dut.io.cond0.toBoolean) {
        modelState = (modelState + 1) & 0xff
      }
    }
  }
}
