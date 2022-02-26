package AIE.Axi4.Axi4Full

import spinal.core._
import spinal.core.sim._
import spinal.lib._
import spinal.lib.bus.amba4.axi._

case class Stream2Axi4WriteMasterInterface(addressWidth: Int, len: Int = 256, widthPerData: Int = 32) extends Component {
  val axi4Interface = Axi4WriteMaster(addressWidth, len, widthPerData)
  Axi4WriteMasterSpecRenamer(axi4Interface)
  ClockDomain.current.clock.setName("aclk")
  ClockDomain.current.reset.setName("aresetn")
}

case class Stream2Axi4WriteMasterInterfaceAddFifo(addressWidth: Int, len: Int = 256, widthPerData: Int = 32) extends Component {
  val config = Axi4Config(
    addressWidth = addressWidth,
    dataWidth = widthPerData,
    useId = false,
    useLock = false
  )
  val streamInterface = slave Stream Bits(widthPerData bits)
  // rename streamInterface
  val bundleName = streamInterface.getName()
  streamInterface.flatten.foreach { port =>
    port.setName(port.getName().replace(bundleName, "s_axis"))
  }

  val axi4WriteMasterInterface = master(Axi4(config))
  Axi4WriteMasterSpecRenamer(axi4WriteMasterInterface)

  val axi4Interconnection = Stream2Axi4WriteMasterInterface(addressWidth, len, widthPerData)
  val fifoInstance = StreamFifo(Bits(widthPerData bits), len)
  streamInterface >> fifoInstance.io.push
  fifoInstance.io.pop >> axi4Interconnection.axi4Interface.stream
  axi4Interconnection.axi4Interface.writeMasterInterface >> axi4WriteMasterInterface

  ClockDomain.current.clock.setName("aclk")
  ClockDomain.current.reset.setName("aresetn")
}

object TestAxi4WriteMasterInterface extends App {

  import scala.collection.mutable._
  import scala.util.Random

  SimConfig.withWave.allOptimisation.compile(Stream2Axi4WriteMasterInterfaceAddFifo(32))
    .doSim { dut =>

      val testCase = ArrayBuffer[BigInt]()
      val writeData = ArrayBuffer[BigInt]()
      dut.axi4WriteMasterInterface.w.ready #= false
      dut.axi4WriteMasterInterface.aw.ready #= false
      dut.axi4WriteMasterInterface.b.resp #= 0
      dut.axi4WriteMasterInterface.b.valid #= false

      dut.streamInterface.payload #= 32
      dut.streamInterface.valid #= false

      dut.clockDomain.assertReset()
      dut.clockDomain.forkStimulus(10)
      dut.clockDomain.waitSampling()

      def doSim(): Unit = {
        val readySignal = Random.nextBoolean()
        dut.streamInterface.payload #= Random.nextInt(256)
        dut.streamInterface.valid #= true
        dut.axi4WriteMasterInterface.aw.ready #= readySignal
        dut.axi4WriteMasterInterface.w.ready #= readySignal
        if (dut.axi4WriteMasterInterface.w.payload.last.toBoolean) {
          dut.axi4WriteMasterInterface.b.valid #= true
        }
        if (dut.streamInterface.valid.toBoolean & dut.streamInterface.ready.toBoolean) {
          testCase += dut.streamInterface.payload.toBigInt
        }
        if (dut.axi4WriteMasterInterface.w.valid.toBoolean & dut.axi4WriteMasterInterface.w.ready.toBoolean) {
          writeData += dut.axi4WriteMasterInterface.w.payload.data.toBigInt
        }
        dut.clockDomain.waitSampling()
      }

      for (i <- 0 to 256 * 5) {
        if (i != 100) {
          doSim()
        } else {
          println(s"the testCase is :${testCase.mkString(",")}")
          println(s"the writeData is ${writeData.mkString(",")}")
        }
      }

    }
}
