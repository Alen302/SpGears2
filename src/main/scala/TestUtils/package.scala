import TestUtils.Testable
import org.slf4j.{Logger, LoggerFactory}
import spinal.lib._
import spinal.core._
import spinal.core.sim._
import spinal.sim.SimThread

import scala.collection.mutable.ArrayBuffer
import scala.util.Random

package object TestUtil {

  // set monitor for SpinalHDL BaseType
  def setMonitor[T <: BaseType](trigger: Bool, target: T, container: ArrayBuffer[T]): SimThread = fork {
    while (true) {
      if (trigger.toBoolean) container += target
      sleep(2)
    }
  }

  def setMonitorOnVec[T <: BaseType](trigger: Bool, target: Vec[T], Container: ArrayBuffer[T]): SimThread = fork {
    while (true) {
      if (trigger.toBoolean) Container ++= target.toBuffer
      sleep(2)
    }
  }

  // poke data of whatever type(bool, int), not type-safe(won't be found by linter)

  def pokeData[T](port: Data, data: T): Unit = {
    port match {
      case bool: Bool => bool #= data.asInstanceOf[Boolean]
      case bitVector: BitVector => bitVector #= data.asInstanceOf[BigInt]
      case vec: Vec[_] =>
        vec.head match {
          case bool: Bool => vec.asInstanceOf[Vec[Bool]].zip(data.asInstanceOf[Seq[Boolean]]).foreach { case (port, int) => port #= int }
          case bitVector: BitVector => vec.asInstanceOf[Vec[BitVector]].zip(data.asInstanceOf[Seq[BigInt]]).foreach { case (port, int) => port #= int }
        }
      case fragment: Fragment[_] =>
        fragment.fragment match {
          case bool: Bool => bool #= data.asInstanceOf[Boolean]
          case bitVector: BitVector => bitVector #= data.asInstanceOf[BigInt]
          case vec: Vec[_] =>
            vec.head match {
              case bool: Bool => vec.asInstanceOf[Vec[Bool]].zip(data.asInstanceOf[Seq[Boolean]]).foreach { case (port, int) => port #= int }
              case bitVector: BitVector => vec.asInstanceOf[Vec[BitVector]].zip(data.asInstanceOf[Seq[BigInt]]).foreach { case (port, int) => port #= int }
            }
        }
    }
  }

  def pokeZero[T](port: Data): Unit = {
    port match {
      case bool: Bool => bool #= false
      case bitVector: BitVector => bitVector #= 0
      case vec: Vec[_] =>
        vec.head match {
          case bool: Bool => vec.asInstanceOf[Vec[Bool]].foreach(_ #= false)
          case bitVector: BitVector => vec.asInstanceOf[Vec[BitVector]].foreach(_ #= 0)
        }
      case fragment: Fragment[_] =>
        fragment.fragment match {
          case bool: Bool => bool #= false
          case bitVector: BitVector => bitVector #= 0
          case vec: Vec[_] =>
            vec.head match {
              case bool: Bool => vec.asInstanceOf[Vec[Bool]].foreach(_ #= false)
              case bitVector: BitVector => vec.asInstanceOf[Vec[BitVector]].foreach(_ #= 0)
            }
        }
    }
  }

  // peek data of whatever type(bool, int), not type-safe(won't be found by linter)
  def peekData[T](port: Data): T = {
    port match {
      case baseType: BaseType => baseType.toBigInt.asInstanceOf[T]
      case vec: Vec[_] => vec.head match {
        case baseType: BaseType => vec.map(_.asInstanceOf[BaseType].toBigInt).asInstanceOf[T]
      }
      case fragment: Fragment[_] => fragment.fragment match {
        case baseType: BaseType => baseType.toBigInt.asInstanceOf[T]
        case vec: Vec[_] => vec.head match {
          case baseType: BaseType => vec.map(_.asInstanceOf[BaseType].toBigInt).asInstanceOf[T]
        }
      }
    }
  }

  // A test procedure for Flow => poke stimulus to dataIn Flow and monitor dataOut Flow
  def flowPeekPoke[To, Ti, Hi <: Data, Ho <: Data]
  (dut: Component, testCases: Seq[Ti], dataIn: DataCarrier[Hi], dataOut: DataCarrier[Ho], latency: Int = 0): ArrayBuffer[To] = {
    // init
    dataIn.clear()
    dut.clockDomain.waitSampling()
    // set monitor
    val dutResult = ArrayBuffer[To]()
    dataOut.setMonitor(dutResult)
    // poke stimulus
    testCases.indices.foreach { i =>
      dataIn.poke(testCases(i), lastWhen = i == (testCases.length - 1))
      dut.clockDomain.waitSampling()
    }
    // wait for result
    dataIn.clear()
    dut.clockDomain.waitSampling(latency + 1)
    dutResult
  }

  def doFlowPeekPokeTest[To, Ti, Hi <: Data, Ho <: Data]
  (name: String, dut: => Component with Testable[Hi, Ho], testCases: Seq[Ti], golden: Seq[To], initLength: Int = 0): ArrayBuffer[To] = {

    val logger: Logger = LoggerFactory.getLogger(s"test-${name}")

    val dutResult = ArrayBuffer[To]()
    SimConfig.withWave
      .workspaceName(name)
      .compile(dut).doSim { dut =>

      val outputSize = dut.dataOut.payload match {
        case vec: Vec[_] => vec.size
        case _ => 1
      }
      val innerGolden = golden.drop(initLength * outputSize)

      import dut.{clockDomain, dataIn, dataOut, latency}
      dataIn.halt()
      clockDomain.forkStimulus(5)

      dutResult ++= flowPeekPoke(dut, testCases, dataIn, dataOut, latency).drop(initLength * outputSize)

      if (innerGolden != null) {
        val printSize = (dutResult ++ innerGolden).map(_.toString.size).max
        logger.info(s"testing result:" +
          s"\nyours : ${dutResult.map(_.toString.padTo(printSize, ' ')).mkString(" ")}" +
          s"\ngolden: ${innerGolden.map(_.toString.padTo(printSize, ' ')).mkString(" ")}")

        val difference = dutResult.diff(innerGolden)
        assert(difference.isEmpty, difference.mkString(" "))
      }
    }
    dutResult
  }

  def streamPeekPokeAllDataOneToMore[To, Ti, Hi <: Data, Ho <: Data]
  (dut: Component, testCases: Seq[Ti], dataIn: Stream[Hi], dataOut: Vec[Stream[Ho]], latency: Int = 0): ArrayBuffer[ArrayBuffer[To]] = {
    // init
    dataIn.clear()
    dut.clockDomain.waitSampling()
    // set monitor
    val dutResult = ArrayBuffer.fill(dataOut.size)(ArrayBuffer[To]())
    (0 until dutResult.size).foreach { i =>
      dataOut(i).setMonitorForStream(dutResult(i))
    }
    // poke stimulus
    testCases.indices.foreach { i =>
      dataIn.poke(testCases(i), lastWhen = i == (testCases.length - 1))
      dut.clockDomain.waitRisingEdgeWhere(dataIn.valid.toBoolean && dataIn.ready.toBoolean)
    }
    // wait for result
    dataIn.clear()
    dut.clockDomain.waitSampling(latency + 1)
    dutResult
  }

  def streamPeekPokeDataRandomOneToMore[To, Ti, Hi <: Data, Ho <: Data]
  (dut: Component, testCases: Seq[Ti], dataIn: Stream[Hi], dataOut: Vec[Stream[Ho]], latency: Int = 0): ArrayBuffer[ArrayBuffer[To]] = {
    // init
    dataIn.clear()
    dut.clockDomain.waitSampling()
    // set monitor
    val dutResult = ArrayBuffer.fill(dataOut.size)(ArrayBuffer[To]())
    (0 until dutResult.size).foreach { i =>
      dataOut(i).setMonitorForStream(dutResult(i))
    }
    // poke stimulus
    val loopCond = ArrayBuffer.fill(testCases.size)(Random.nextBoolean())
    testCases.indices.foreach { i =>
      while(!loopCond(i)){
        dataIn.pokeInvalidData(BigInt(Random.nextInt(256)))
        dut.clockDomain.waitSampling()
        loopCond(i) = Random.nextBoolean()
      }
      if(loopCond(i)){
        dataIn.poke(testCases(i), lastWhen = i == (testCases.length - 1))
        dut.clockDomain.waitRisingEdgeWhere(dataIn.valid.toBoolean && dataIn.ready.toBoolean)
      }

    }
    // wait for result
    dataIn.clear()
    dut.clockDomain.waitSampling(latency + 1)
    dutResult
  }


  implicit class DataCarrierUtil[T <: Data](cut: DataCarrier[T]) {

    def halt() = {
      // slave
      if (cut.valid.isInput) {
        cut.valid #= false
        cut.payload match {
          case fragment: Fragment[T] => fragment.last #= false
          case _ =>
        }
      }
      // master
      else {
        cut match {
          case stream: Stream[_] => stream.ready #= false
          case _ =>
        }
      }
    }

    def clear() = {
      // slave
      if (cut.valid.isInput) {
        cut.valid #= false
        cut.payload match {
          case fragment: Fragment[T] => fragment.last #= false
            pokeZero(fragment.fragment)
          case payload => pokeZero(payload)
        }
      }
      // master
      else {
        cut match {
          case stream: Stream[_] => stream.ready #= false
          case _ => // do nothing
        }
      }
    }

    // poke stimulus for all kinds of DataCarrier
    def poke[D](data: D, lastWhen: Boolean = false) = {

      // deal with control signals
      cut.valid #= true
      cut.payload match {
        case fragment: Fragment[_] => fragment.last #= lastWhen
        case _ =>
      }

      // deal with payload
      pokeData(cut.payload, data)
    }

    // poke stimulus for all kinds of DataCarrier (the payload is random)
    def pokeRandom(lastWhen: Boolean = false) = {
      {

        // deal with control signals
        cut.valid #= true
        cut.payload match {
          case fragment: Fragment[_] => fragment.last #= lastWhen
          case _ =>
        }

        // deal with payload
        cut.payload.randomize()
      }
    }

    def pokeInvalidData[D](data: D, lastWhen: Boolean = false) = {

      // deal with control signals
      cut.valid #= false
      cut.payload match {
        case fragment: Fragment[_] => fragment.last #= lastWhen
        case _ =>
      }

      // deal with payload
      pokeData(cut.payload, data)
    }

    // fork a SimThread when this DataCarrier is valid
    def forkWhenValid(body: => Unit): SimThread = fork {
      while (true) {
        if (cut.valid.toBoolean) {
          body
        }
        sleep(2)
      }
    }

    // set monitors for all kinds of DataCarrier
    def setMonitor[T](Container: ArrayBuffer[T], name: String = ""): SimThread = forkWhenValid {
      cut.payload match {
        case vec: Vec[_] => Container ++= peekData(vec)
        case fragment: Fragment[_] =>
          fragment.fragment match {
            case vec: Vec[_] => Container ++= peekData(vec)
            case _ => Container += peekData(fragment.fragment)
          }
        case _ => Container += peekData(cut.payload)
      }
    }
  }

  implicit class StreamUtils[T <: Data](cut: Stream[T]) {

    def forkWhenFire(body: => Unit): SimThread = fork {
      while (true) {
        if (cut.valid.toBoolean && cut.ready.toBoolean) {
          body
        }
        sleep(2)
      }
    }

    def setMonitorForStream[T](Container: ArrayBuffer[T], name: String = ""): SimThread = forkWhenFire {
      cut.payload match {
        case vec: Vec[_] => Container ++= peekData(vec)
        case fragment: Fragment[_] =>
          fragment.fragment match {
            case vec: Vec[_] => Container ++= peekData(vec)
            case _ => Container += peekData(fragment.fragment)
          }
        case _ => Container += peekData(cut.payload)
      }
    }
  }
}