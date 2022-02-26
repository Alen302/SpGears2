package AIE.Axi4.Axi4Full

import spinal.lib._
import spinal.core._
import spinal.core.sim._
import spinal.lib.bus.amba4.axi._

case class Stream2Axi4WriteOnlyMasterInterface(addressWidth: Int, len: Int = 256, widthPerData: Int = 32) extends Component {
  val axi4Interface = Axi4WriteOnlyMaster(addressWidth, len, widthPerData)
  Axi4WriteOnlyMasterSpecRenamer(axi4Interface)
  ClockDomain.current.clock.setName("aclk")
  ClockDomain.current.reset.setName("aresetn")
}

case class Stream2Axi4WriteOnlyMasterInterfaceAddFifo(addressWidth: Int, len: Int = 256, widthPerData: Int = 32) extends Component {
  val config = Axi4Config(
    addressWidth = addressWidth,
    dataWidth = widthPerData,
    useId = false,
    useLock = false
  )
  val streamInterface = slave Stream Bits(widthPerData bits)
  // rename streamInterface
  val bundleName = streamInterface.getName()
  streamInterface.flatten.foreach{ port =>
    port.setName(port.getName().replace(bundleName, "s_axis"))
  }
  val axi4WriteOnlyMasterInterface = master(Axi4WriteOnly(config))
  Axi4WriteOnlyMasterSpecRenamer(axi4WriteOnlyMasterInterface)

  val axi4Interconnection = Stream2Axi4WriteOnlyMasterInterface(addressWidth, len, widthPerData)
  val fifoInstance = StreamFifo(Bits(widthPerData bits), len)
  streamInterface >> fifoInstance.io.push
  fifoInstance.io.pop >> axi4Interconnection.axi4Interface.stream
  axi4Interconnection.axi4Interface.writeOnlyMasterInterface >> axi4WriteOnlyMasterInterface

  ClockDomain.current.clock.setName("aclk")
  ClockDomain.current.reset.setName("aresetn")

}

object TestAxi4WriteOnlyMasterInterface extends App {

  import scala.util.Random
  import scala.collection.mutable._

  SimConfig.withWave.allOptimisation
    .withConfig(SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetActiveLevel = LOW)))
    .compile(Stream2Axi4WriteOnlyMasterInterfaceAddFifo(32))
    .doSim { dut =>

      val testCase = ArrayBuffer[BigInt]()
      val writeData = ArrayBuffer[BigInt]()

      import Axi4.resp._
      dut.axi4WriteOnlyMasterInterface.w.ready #= false
      dut.axi4WriteOnlyMasterInterface.aw.ready #= false
      dut.axi4WriteOnlyMasterInterface.b.resp #= 0
      dut.axi4WriteOnlyMasterInterface.b.valid #= false

      dut.streamInterface.payload #= 32
      dut.streamInterface.valid #= false

      dut.clockDomain.assertReset()
      dut.clockDomain.forkStimulus(10)
      dut.clockDomain.waitSampling()

      def doSim(): Unit = {
        val readySignal = Random.nextBoolean()
        dut.streamInterface.payload #= Random.nextInt(256)
        dut.streamInterface.valid #= Random.nextBoolean()
        dut.axi4WriteOnlyMasterInterface.aw.ready #= readySignal
        dut.axi4WriteOnlyMasterInterface.w.ready #= readySignal
        if(dut.axi4WriteOnlyMasterInterface.w.payload.last.toBoolean){
          dut.axi4WriteOnlyMasterInterface.b.valid #= true
        }
        if (dut.streamInterface.valid.toBoolean & dut.streamInterface.ready.toBoolean) {
          testCase += dut.streamInterface.payload.toBigInt
        }
        if (dut.axi4WriteOnlyMasterInterface.w.valid.toBoolean & dut.axi4WriteOnlyMasterInterface.w.ready.toBoolean) {
          writeData += dut.axi4WriteOnlyMasterInterface.w.payload.data.toBigInt
        }
        dut.clockDomain.waitSampling()
      }

      for (i <- 0 to 256 * 10) {
        if (i != 100) {
          doSim()
        } else {
          println(s"the testCase is :${testCase.mkString(",")}")
          println(s"the writeData is ${writeData.mkString(",")}")
        }
      }

    }
}

