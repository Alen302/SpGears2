package SpGears

import spinal.lib._
import spinal.core._
import spinal.core.sim._
import spinal.lib.sim._
import SpGears.Backend._

import scala.collection.mutable._

package object TestUtilsFactory {

  /** @param backend
    *   the simulation backend
    * @param vcsFlags
    *   the VCS simulation additional flag information
    * @param pathName
    *   the path of simulation generated file
    * @param workSpaceName
    *   the generated directory
    * @param config
    *   the simulation config information
    * @return
    *   the return SpinalSimConfig class
    */
  def simConfig(
      backend: Backend      = VERILATOR,
      vcsFlags: VCSFlags    = VCSFlags(elaborateFlags = List("-LDFLAGS -Wl,--no-as-needed")),
      pathName: String      = "simWaves",
      workSpaceName: String = null,
      config: SpinalConfig  = null
  ): SpinalSimConfig = {
    (backend, workSpaceName, config) match {
      case (VERILATOR, null, null)            => SimConfig.withFstWave.workspacePath(s"./${pathName}").allOptimisation
      case (VERILATOR, workSpaceName, null)   => SimConfig.withFstWave.workspacePath(s"./${pathName}").workspaceName(workSpaceName).allOptimisation
      case (VERILATOR, null, config)          => SimConfig.withFstWave.withConfig(config).workspacePath(s"./${pathName}").allOptimisation
      case (VERILATOR, workSpaceName, config) => SimConfig.withFstWave.withConfig(config).workspacePath(s"./${pathName}").workspaceName(workSpaceName).allOptimisation

      case (VCS, null, null)            => SimConfig.withVCS(vcsFlags).withFSDBWave.workspacePath(s"./${pathName}").allOptimisation
      case (VCS, workSpaceName, null)   => SimConfig.withVCS(vcsFlags).withFSDBWave.workspacePath(s"./${pathName}").workspaceName(workSpaceName).allOptimisation
      case (VCS, null, config)          => SimConfig.withVCS(vcsFlags).withFSDBWave.withConfig(config).workspacePath(s"./${pathName}").allOptimisation
      case (VCS, workSpaceName, config) => SimConfig.withVCS(vcsFlags).withFSDBWave.withConfig(config).workspacePath(s"./${pathName}").workspaceName(workSpaceName).allOptimisation
    }

  }

  /** @param data
    *   it's the SpinalHDL DataCarrier type
    * @tparam H
    *   it's the SpinalHDL Data type
    */
  implicit class DataCarrierUtilsFactory[H <: Data](carrier: DataCarrier[H]) {

    /** This function can be use to drive DataCarrier Randomly
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @return
      *   FlowDriver[H] or StreamDriver[H]
      */
    def setRandomDriver(clockDomain: ClockDomain) = {
      carrier match {
        case flow: Flow[_] =>
          FlowDriver(flow.asInstanceOf[Flow[H]], clockDomain) { payload =>
            payload.randomize()
            true
          }
        case stream: Stream[_] =>
          StreamDriver(stream.asInstanceOf[Stream[H]], clockDomain) { payload =>
            payload.randomize()
            true
          }
        case _ => ???
      }

    }

    /** This function can be use to drive DataCarrier to "Zero" state
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @return
      *   FlowDriver[H] or StreamDriver[H]
      */
    def setZeroDriver(clockDomain: ClockDomain) = {
      carrier match {
        case flow: Flow[_] =>
          FlowDriver(flow.asInstanceOf[Flow[H]], clockDomain) { payload =>
            payload.flattenForeach(_.assignBigInt(0))
            true
          }
        case stream: Stream[_] =>
          StreamDriver(stream.asInstanceOf[Stream[H]], clockDomain) { payload =>
            payload.flattenForeach(_.assignBigInt(0))
            true
          }
        case _ => ???
      }

    }

    /** This function can be use to drive DataCarrier by given stimulus
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @param stimulus
      *   the stimulus to DataCarrier for Simulation, if the port have more than one port, the stimulus should be a muti-Dimention ArraryBuffer, it will drive the ports in order
      * @tparam T
      *   the stimulus type
      * --- if the port is Bool, it must be Boolean
      * --- if the port is BitVector, it must be BigInt
      * --- if the port is SpinalEnumCraft, it must be SpinalEnumElement[SpinalEnum]
      * @return
      *   FlowDriver[H] or StreamDriver[H]
      */
    def setDriver[T](clockDomain: ClockDomain, stimulus: ArrayBuffer[T]*) = {
      val driverCases = stimulus.map(arrayBuffer => arrayBuffer.map(element => element))

      carrier match {
        case flow: Flow[_] =>
          FlowDriver(flow.asInstanceOf[Flow[H]], clockDomain) { payload =>
            val payloads = payload.flatten
            assert(payloads.size == driverCases.size, s"the testCase size ${driverCases.size} is not match !")
            payloads.zip(driverCases).foreach { case (baseType, driverCase) =>
              if (driverCase.isEmpty) {
                baseType.assignBigInt(0)
              } else {
                baseType match {
                  case bool: Bool =>
                    bool #= driverCase(0).asInstanceOf[Boolean]
                    driverCase.remove(0)
                  case bitVector: BitVector =>
                    bitVector #= driverCase(0).asInstanceOf[BigInt]
                    driverCase.remove(0)
                  case enum: SpinalEnumCraft[_] =>
                    enum #= driverCase(0).asInstanceOf[SpinalEnumElement[SpinalEnum]]
                    driverCase.remove(0)
                  case _ => ???
                }
              }
            }
            true
          }
        case stream: Stream[_] =>
          StreamDriver(stream.asInstanceOf[Stream[H]], clockDomain) { payload =>
            val payloads = payload.flatten
            assert(payloads.size == driverCases.size, s"the testCase size ${driverCases.size} is not match !")
            payloads.zip(driverCases).foreach { case (baseType, driverCase) =>
              if (driverCase.isEmpty) {
                baseType.assignBigInt(0)
              } else {
                baseType match {
                  case bool: Bool =>
                    bool #= driverCase(0).asInstanceOf[Boolean]
                    driverCase.remove(0)
                  case bitVector: BitVector =>
                    bitVector #= driverCase(0).asInstanceOf[BigInt]
                    driverCase.remove(0)
                  case enum: SpinalEnumCraft[_] =>
                    enum #= driverCase(0).asInstanceOf[SpinalEnumElement[SpinalEnum]]
                    driverCase.remove(0)
                  case _ => ???
                }
              }
            }
            true
          }
        case _ => ???
      }
    }

    /** This function can be use to drive the DataCarrier's ready randomly
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @return
      *   StreamReadyRandomizer[H]
      */
    def setRandomReady(clockDomain: ClockDomain) = {
      carrier match {
        case flow: Flow[_]     => ???
        case stream: Stream[_] => StreamReadyRandomizer(stream.asInstanceOf[Stream[H]], clockDomain)
        case _                 => ???
      }

    }

    /** This function can be use to monitor the DataCarrier's transaction
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @param results
      *   the transaction data container
      * @tparam T
      *   the data container's data type
      * --- if the port is Bool, it must be Boolean
      * --- if the port is BitVector, it must be BigInt
      * --- if the port is SpinalEnumCraft, it must be SpinalEnumElement[SpinalEnum]
      * @return
      *   FlowMonitor[H] or StreamMonitor[H]
      */
    def setMonitor[T](clockDomain: ClockDomain, results: ArrayBuffer[T]*) = {
      carrier match {
        case flow: Flow[_] =>
          FlowMonitor(flow.asInstanceOf[Flow[H]], clockDomain) { payload =>
            val payloads = payload.flatten
            assert(payloads.size == results.size, s"the Monitor Container size ${results.size} is not match !")
            results.zip(payloads).foreach { case (result, baseType) =>
              baseType match {
                case bool: Bool               => result += bool.toBoolean.asInstanceOf[T]
                case bitVector: BitVector     => result += bitVector.toBigInt.asInstanceOf[T]
                case enum: SpinalEnumCraft[_] => result += enum.toEnum.asInstanceOf[T]
                case _                        => ???
              }

            }
          }
        case stream: Stream[_] =>
          StreamMonitor(stream.asInstanceOf[Stream[H]], clockDomain) { payload =>
            val payloads = payload.flatten
            assert(payloads.size == results.size, s"the Monitor Container size ${results.size} is not match !")
            results.zip(payloads).foreach { case (result, baseType) =>
              baseType match {
                case bool: Bool               => result += bool.toBoolean.asInstanceOf[T]
                case bitVector: BitVector     => result += bitVector.toBigInt.asInstanceOf[T]
                case enum: SpinalEnumCraft[_] => result += enum.toEnum.asInstanceOf[T]
                case _                        => ???
              }
            }
          }
        case _ => ???
      }

    }

    /** This function can be use to check the handshake protocol transaction correctness
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @return
      *   SimStreamAssert[H]
      */
    def setAssert(clockDomain: ClockDomain) = {
      carrier match {
        case flow: Flow[_] => ???
        case stream: Stream[_] =>
          new SimStreamAssert(stream.asInstanceOf[Stream[H]], clockDomain)
        case _ => ???
      }

    }

    /** This function can be use to drive DataCarrier without delay and hold given cycle
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @cycleCount
      *   the number of cycle for hold drive
      * @param stimulus
      *   the stimulus to DataCarrier for Simulation, if the port have more than one port, the stimulus should be a muti-Dimention ArraryBuffer, it will drive the ports in order, the stimulus's size
      *   should be equal to port's size, because the function is drive same data for every hold cycle
      * @tparam T
      *   * the stimulus type
      * --- if the port is Bool, it must be Boolean
      * --- if the port is BitVector, it must be BigInt
      * --- if the port is SpinalEnumCraft, it must be SpinalEnumElement[SpinalEnum]
      */
    def poke[T](clockDomain: ClockDomain, cycleCount: Int, stimulus: ArrayBuffer[T]*) = {
      val driverCases = stimulus.map(arrayBuffer => arrayBuffer.map(element => element))

      if (carrier.valid.isInput) {
        assert(driverCases.flatten.size == carrier.payload.flatten.size, "the stimulus's size is not match for poke !")
        carrier.valid #= true
        carrier.payload.flatten.zip(driverCases.flatten).foreach { case (baseType, driver) =>
          baseType match {
            case bool: Bool =>
              bool #= driver.asInstanceOf[Boolean]
            case bitVector: BitVector =>
              bitVector #= driver.asInstanceOf[BigInt]
            case enum: SpinalEnumCraft[_] =>
              enum #= driver.asInstanceOf[SpinalEnumElement[SpinalEnum]]
            case _ => ???
          }
        }
      } else {
        carrier match {
          case stream: Stream[_] => stream.ready #= true
          case _                 => ???
        }
      }
      clockDomain.waitSampling(cycleCount)
    }

    /** This function can be use to drive DataCarrier randomly without delay and hold given cycle
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @cycleCount
      *   the number of cycle for hold drive
      */
    def pokeRandom(clockDomain: ClockDomain, cycleCount: Int = 1) = {
      if (carrier.valid.isInput) {
        carrier.valid #= true
        carrier.payload.randomize()
      } else {
        carrier match {
          case stream: Stream[_] => stream.ready.randomize()
          case _                 => ???
        }
      }
      clockDomain.waitSampling(cycleCount)
    }

    /** This function can be use to drive "Zero" state to DataCarrier without delay and hold given cycle
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @cycleCount
      *   the number of cycle for hold drive
      */
    def pokeZero(clockDomain: ClockDomain, cyclesCount: Int = 1) = {
      if (carrier.valid.isInput) {
        carrier.valid #= true
        carrier.payload.flattenForeach(_.assignBigInt(0))
      } else {
        carrier match {
          case stream: Stream[_] => stream.ready #= false
          case _                 => ???
        }
      }
      clockDomain.waitSampling(cyclesCount)
    }

    /** This function can be use to halt DataCarrier for any number of cycle
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @param cyclesCount
      *   the number of cycle for halt DataCarrier
      */
    def halt(clockDomain: ClockDomain, cyclesCount: Int = 1) = {
      if (carrier.valid.isInput) {
        carrier.valid #= false
        carrier.payload.randomize()
      } else {
        carrier match {
          case stream: Stream[_] => stream.ready #= false
          case _                 => ???
        }
      }
      clockDomain.waitSampling(cyclesCount)
    }

    /** This function can be use to set the DataCarrier to "Zero" state for any number of cycle
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @param cyclesCount
      *   the number of cycle for set DataCarrier to "Zero" state
      */
    def clear(clockDomain: ClockDomain, cyclesCount: Int = 1) = {
      if (carrier.valid.isInput) {
        carrier.valid #= false
        carrier.payload.flattenForeach(_.assignBigInt(0))
      } else {
        carrier match {
          case stream: Stream[_] => stream.ready #= false
          case _                 => ???
        }
      }
      clockDomain.waitSampling(cyclesCount)
    }

  }

  implicit class DataUtilsFactory[D <: Data](signal: D) {

    /** This function can be use to drive the Data type port randomly and also can set drive delay
      * @param clockDomain
      *   the input ClockDomain for Data Simulation
      * @param waitTime
      *   the drive delay, it means that drive once randomly for every drive delay (waitTime)
      * @return
      *   DataDriver[D]
      */
    def getRandomDriver(clockDomain: ClockDomain, waitTime: Int = -1) = {
      DataDriver(signal, clockDomain, waitTime) { payload =>
        payload.randomize()
        true
      }
    }

    /** This function can be use to drive zero to the Data type port
      * @param clockDomain
      *   the input ClockDomain for Data Simulation
      * @return
      *   DataDriver[D]
      */
    def getZeroDriver(clockDomain: ClockDomain) = {
      DataDriver(signal, clockDomain, -1) { payload =>
        payload.flattenForeach(_.assignBigInt(0))
        true
      }
    }

    /** This function can be use to drive the Data type port by given stimulus and also can set drive delay
      * @param clockDomain
      *   the input ClockDomain for Data Simulation
      * @param waitTime
      *   the drive delay, it means that drive once by given stimulus for every drive cycle (waitTime)
      * @param stimulus
      *   the stimulus to Data for Simulation, if the Data type port have more than one port, the stimulus should be a muti-Dimention ArraryBuffer, it will drive the ports in order
      * @tparam T
      *   the stimulus type
      * --- if the port is Bool, it must be Boolean
      * --- if the port is BitVector, it must be BigInt
      * --- if the port is SpinalEnumCraft, it must be SpinalEnumElement[SpinalEnum]
      * @return
      *   DataDriver[D]
      */
    def getDriver[T](clockDomain: ClockDomain, waitTime: Int, stimulus: ArrayBuffer[T]*) = {
      val driverCases = stimulus.map(arrayBuffer => arrayBuffer.map(element => element))

      DataDriver(signal, clockDomain, waitTime) { payload =>
        val payloads = payload.flatten
        assert(payloads.size == driverCases.size, s"the testCase size ${driverCases.size} is not match !")
        payloads.zip(driverCases).foreach { case (baseType, driverCase) =>
          if (driverCase.isEmpty) {
            baseType.assignBigInt(0)
          } else {
            baseType match {
              case bool: Bool =>
                bool #= driverCase(0).asInstanceOf[Boolean]
                driverCase.remove(0)
              case bitVector: BitVector =>
                bitVector #= driverCase(0).asInstanceOf[BigInt]
                driverCase.remove(0)
              case enum: SpinalEnumCraft[_] =>
                enum #= driverCase(0).asInstanceOf[SpinalEnumElement[SpinalEnum]]
                driverCase.remove(0)
              case _ => ???
            }
          }
        }
        true
      }
    }

    /** This function can be use to monitor the Data type port
      * @param clockDomain
      *   the input ClockDomain for Data Simulation
      * @param waitTime
      *   the monitor delay, it means that wait waitTime cycle (drive zero) and then monitor Data port for every cycle
      * @param results
      *   the output data container
      * @tparam T
      *   the data container's data type
      * --- if the port is Bool, it must be Boolean
      * --- if the port is BitVector, it must be BigInt
      * --- if the port is SpinalEnumCraft, it must be SpinalEnumElement[SpinalEnum]
      * @return
      *   DataMonitor[D]
      */
    def getMonitor[T](clockDomain: ClockDomain, waitTime: Int, results: ArrayBuffer[T]*) = {
      DataMonitor(signal, clockDomain, waitTime) { payload =>
        val payloads = payload.flatten
        assert(payloads.size == results.size, s"the Monitor Container size ${results.size} is not match !")
        results.zip(payloads).foreach { case (result, baseType) =>
          baseType match {
            case bool: Bool               => result += bool.toBoolean.asInstanceOf[T]
            case bitVector: BitVector     => result += bitVector.toBigInt.asInstanceOf[T]
            case enum: SpinalEnumCraft[_] => result += enum.toEnum.asInstanceOf[T]
            case _                        => ???
          }
        }
      }
    }

    /** This function can be use to drive Data type port without delay and hold given cycle
      * @param clockDomain
      *   the input ClockDomain for Data type port Simulation
      * @cycleCount
      *   the number of cycle for hold drive
      * @param stimulus
      *   the stimulus to Data type port for Simulation, if the Data type port have more than one port, the stimulus should be a muti-Dimention ArraryBuffer, it will drive the ports in order, the
      *   stimulus's size should be equal to port's size, because the function is drive same data for every hold cycle
      * @tparam T
      *   * the stimulus type
      * --- if the port is Bool, it must be Boolean
      * --- if the port is BitVector, it must be BigInt
      * --- if the port is SpinalEnumCraft, it must be SpinalEnumElement[SpinalEnum]
      */
    def poke[T](clockDomain: ClockDomain, cycleCount: Int, stimulus: ArrayBuffer[T]*) = {
      val driverCases = stimulus.map(arrayBuffer => arrayBuffer.map(element => element))

      assert(driverCases.flatten.size == signal.flatten.size, "the stimulus's size is not match for poke !")
      signal.flatten.zip(driverCases.flatten).foreach { case (baseType, driver) =>
        baseType match {
          case bool: Bool =>
            bool #= driver.asInstanceOf[Boolean]
          case bitVector: BitVector =>
            bitVector #= driver.asInstanceOf[BigInt]
          case enum: SpinalEnumCraft[_] =>
            enum #= driver.asInstanceOf[SpinalEnumElement[SpinalEnum]]
          case _ => ???
        }
      }

      clockDomain.waitSampling(cycleCount)
    }

    /** This function can be use to drive Data type port randomly without delay and hold given cycle
      * @param clockDomain
      *   the input ClockDomain for Data type port Simulation
      * @cycleCount
      *   the number of cycle for hold drive
      */
    def pokeRandom(clockDomain: ClockDomain, cycleCount: Int = 1) = {
      signal.flattenForeach(_.randomize())

      clockDomain.waitSampling(cycleCount)
    }

    /** This function can be use to drive "Zero" state to Data type port without delay and hold given cycle
      * @param clockDomain
      *   the input ClockDomain for Data type port Simulation
      * @cycleCount
      *   the number of cycle for hold drive
      */
    def pokeZero(clockDomain: ClockDomain, cyclesCount: Int = 1) = {
      signal.flattenForeach(_.assignBigInt(0))

      clockDomain.waitSampling(cyclesCount)
    }

  }

}
