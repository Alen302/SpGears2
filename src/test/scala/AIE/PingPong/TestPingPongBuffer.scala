package AIE.PingPong

import AIE.Axi4.Axi4Full.{Axi4WriteOnlyMaster, Axi4WriteOnlyMasterSpecRenamer}
import spinal.lib._
import spinal.core._
import spinal.lib.bus.amba4.axi.{Axi4Config, Axi4WriteOnly}
import spinal.lib.fsm._
import spinal.core.sim._

import scala.collection.mutable.ArrayBuffer

case class Stream2Axi4WriteOnlyMasterInterface(addressWidth: Int = 32, maxBurstLen: Int = 256, dataWidth: Int = 32) extends Component {
  val axi4Interface = Axi4WriteOnlyMaster(addressWidth, maxBurstLen, dataWidth)
  ClockDomain.current.clock.setName("aclk")
  ClockDomain.current.reset.setName("aresetn")
  Axi4WriteOnlyMasterSpecRenamer(axi4Interface)
}

case class PingPongBufferWithWriteOnlyMater(addressWidth: Int = 32, maxBurstLen: Int = 256, dataWidth: Int = 32) extends Component {
  val streamIn = slave Stream Bits(dataWidth bits)
  val startIn = in Bool()
  val bufferDepthIn = in UInt (8 bits)
  val interruptOut = out Bool()
  val startAddr = in UInt(addressWidth bits)
  val offset = in UInt(addressWidth bits)
  val pathNumb = in UInt(8 bits)
  val config = Axi4Config(
    addressWidth = addressWidth,
    dataWidth = dataWidth,
    useId = false,
    useLock = false
  )

  val full = master(Axi4WriteOnly(config))

  val pingPongBuffer = PingPongBuffer(addressWidth, dataWidth, maxBurstLen)
  val writeOnlyMater = Stream2Axi4WriteOnlyMasterInterface(addressWidth, maxBurstLen, dataWidth)

  // set name
  pingPongBuffer.streamIn.valid.setName("s_axis_valid")
  pingPongBuffer.streamIn.payload.setName("s_axis_payload")
  pingPongBuffer.streamIn.ready.setName("s_axis_ready")

  pingPongBuffer.streamOut.valid.setName("m_axis_valid")
  pingPongBuffer.streamOut.payload.setName("m_axis_payload")
  pingPongBuffer.streamOut.ready.setName("m_axis_ready")

  // connection
  pingPongBuffer.streamIn << streamIn
  pingPongBuffer.startIn := startIn
  pingPongBuffer.bufferDepthIn := bufferDepthIn
  interruptOut := pingPongBuffer.outputInterruptSignal

  pingPongBuffer.streamOut >> writeOnlyMater.axi4Interface.StreamInterface
  writeOnlyMater.axi4Interface.start := pingPongBuffer.startOut
  writeOnlyMater.axi4Interface.burstLen := pingPongBuffer.bufferDepthOut
  pingPongBuffer.interruptIn := writeOnlyMater.axi4Interface.transInterrupt

  writeOnlyMater.axi4Interface.full >> full
  writeOnlyMater.axi4Interface.startAddr := startAddr
  writeOnlyMater.axi4Interface.offset := offset
  writeOnlyMater.axi4Interface.pathNumb := pathNumb
  writeOnlyMater.axi4Interface.pathNumb.setName("pathNumb")
}

object TestPingPongBuffer extends App {
  SimConfig.withWave.withConfig(SpinalConfig(defaultConfigForClockDomains = ClockDomainConfig(resetActiveLevel = LOW)))
    .compile(PingPongBufferWithWriteOnlyMater(32, 256, 32).setDefinitionName("PingPongBufferWithWriteOnlyMaster"))
    .doSim { dut =>
      import scala.util.Random

      val testCase = ArrayBuffer[BigInt]()
      val writeData = ArrayBuffer[BigInt]()

      dut.streamIn.valid #= false
      dut.streamIn.payload #= 0
      dut.startIn #= false
      dut.startAddr #= 0
      dut.offset #= 512
      dut.pathNumb #= 32

      dut.full.w.ready #= false
      dut.full.aw.ready #= false
      dut.full.b.resp #= 0
      dut.full.b.valid #= false


      dut.clockDomain.assertReset()
      dut.clockDomain.forkStimulus(15)
      dut.clockDomain.waitSampling()

      sleep(30)
      dut.startIn #= true
      dut.startAddr #= 0
      dut.offset #= 512
      dut.bufferDepthIn #= 128
      sleep(5)
      dut.startIn #= false

      def doSim(): Unit = {
        if (dut.interruptOut.toBoolean) {
          sleep(5)
          dut.startIn #= true
          sleep(4)
          dut.startIn #= false
        }
        if(dut.writeOnlyMater.axi4Interface.isInitialIterate.toBoolean){dut.startAddr #= Random.nextInt(16)}
        dut.streamIn.valid #= Random.nextBoolean()
        dut.streamIn.payload #= Random.nextInt(256)

        val readySignal = Random.nextBoolean()
        dut.full.aw.ready #= readySignal
        dut.full.w.ready #= readySignal
        if (dut.full.w.payload.last.toBoolean && dut.full.w.valid.toBoolean
          && dut.full.w.ready.toBoolean) {
          dut.full.b.valid #= true
        }
        if (dut.full.b.valid.toBoolean) {
          dut.full.b.valid #= false
        }

        if (dut.streamIn.valid.toBoolean && dut.streamIn.ready.toBoolean) {
          testCase += dut.streamIn.payload.toBigInt
        }
        if (dut.full.w.valid.toBoolean && dut.full.w.ready.toBoolean) {
          writeData += dut.full.w.payload.data.toBigInt
        }

        dut.clockDomain.waitSampling()
      }

      for (i <- 0 to 256 * 20) {
        if (i < 256 * 10) {
          doSim()
        } else{
          dut.clockDomain.waitSampling()
        }
      }
      val dataSize = Seq(testCase.size , writeData.size).min
      val realTestCase = testCase.dropRight(testCase.size - dataSize)
      val isCorrect = realTestCase.diff(writeData).isEmpty
      if(isCorrect){println("Sim pass !")} else {
        println(s"the testCase is :${realTestCase.mkString(",")}")
        println(s"the writeData is ${writeData.mkString(",")}")
      }
    }
}
