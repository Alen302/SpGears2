package SpGears

import spinal.lib._
import spinal.core._
import spinal.core.sim._
import spinal.lib.sim._
import SpGears.Backend._

import scala.collection.mutable._

package object TestUtilsFactory {
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

      case (VCS, workSpaceName, config) => SimConfig.withVCS(vcsFlags).withFSDBWave.withConfig(config).workspacePath(s"./${pathName}").workspaceName(workSpaceName).allOptimisation
      case (VCS, null, null)            => SimConfig.withVCS(vcsFlags).withFSDBWave.workspacePath(s"./${pathName}").allOptimisation
      case (VCS, workSpaceName, null)   => SimConfig.withVCS(vcsFlags).withFSDBWave.workspacePath(s"./${pathName}").workspaceName(workSpaceName).allOptimisation
      case (VCS, null, config)          => SimConfig.withVCS(vcsFlags).withFSDBWave.withConfig(config).workspacePath(s"./${pathName}").allOptimisation
    }

  }

  /** @param data
    *   it's the SpinalHDL DataCarrier type
    * @tparam H
    *   it's the SpinalHDL Data type
    */
  implicit class DataCarrierUtilsFactory[H <: Data](data: DataCarrier[H]) {

    /** This function can be use to set DataCarrier's Stimulus Randomly
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @return
      *   FlowDriver[H] or StreamDriver[H]
      */
    def setRandomDriver(clockDomain: ClockDomain) = {
      data match {
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

    /** This function can be use to set DataCarrier's zero Stimulus
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @return
      *   FlowDriver[H] or StreamDriver[H]
      */
    def setZeroDriver(clockDomain: ClockDomain) = {
      data match {
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

    /** This function can be use to set DataCarrier's Stimulus by input some testCases
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @param stimulus
      *   the stimulus to DataCarrier for Simulation, if the port have more than one port, the stimulus should be a muti-Dimention Queue, it will drive the ports in order
      * @tparam T
      *   the stimulus type
      * --- if the port is Bool, it must be Boolean
      * --- if the port is BitVector, it must be BigInt
      * --- if the port is SpinalEnumCraft, it must be SpinalEnumElement[SpinalEnum]
      * @return
      *   FlowDriver[H] or StreamDriver[H]
      */
    def setDriver[T](clockDomain: ClockDomain, stimulus: ArrayBuffer[T]*) = {
      val driverCases = new ArrayBuffer[ArrayBuffer[T]]()
      stimulus.copyToBuffer(driverCases)

      data match {
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
      data match {
        case flow: Flow[_]     => ???
        case stream: Stream[_] => StreamReadyRandomizer(stream.asInstanceOf[Stream[H]], clockDomain)
        case _                 => ???
      }

    }

    /** This function can be use to monitor the DataCarrier's output
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @param results
      *   the output data container
      * @tparam T
      *   the data container's data type
      * --- if the port is Bool, it must be Boolean
      * --- if the port is BitVector, it must be BigInt
      * --- if the port is SpinalEnumCraft, it must be SpinalEnumElement[SpinalEnum]
      * @return
      *   FlowMonitor[H] or StreamMonitor[H]
      */
    def setMonitor[T](clockDomain: ClockDomain, results: ArrayBuffer[T]*) = {
      data match {
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
      data match {
        case flow: Flow[_] => ???
        case stream: Stream[_] =>
          new SimStreamAssert(stream.asInstanceOf[Stream[H]], clockDomain)
        case _ => ???
      }

    }

    /** This function can be use to halt DataCarrier's transaction
      */
    def halt() = {
      if (data.valid.isInput) {
        data.valid #= false
        data.payload.randomize()
      } else {
        data match {
          case stream: Stream[_] => stream.ready #= false
          case _                 => ???
        }
      }
    }

    /** This function can be use to initiate the DataCarrier to "Zero"
      */
    def clear() = {
      if (data.valid.isInput) {
        data.valid #= false
        data.payload.flattenForeach(_.assignBigInt(0))
      } else {
        data match {
          case stream: Stream[_] => stream.ready #= false
          case _                 => ???
        }
      }
    }

  }

  implicit class DataUtilsFactory[D <: Data](data: D) {

    /** This function can be use to drive the Data type port randomly and it can set driver delay
      * @param clockDomain
      *   the input ClockDomain for Data Simulation
      * @param waitTime
      *   the driver delay, it means that wait waitTime cycle (drive zero) and then driver randomly for every driver cycle (waitTime + 1)
      * @return
      *   DataDriver[D]
      */
    def getRandomDriver(clockDomain: ClockDomain, waitTime: Int = -1) = {
      DataDriver(data, clockDomain, waitTime) { payload =>
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
      DataDriver(data, clockDomain, -1) { payload =>
        payload.flattenForeach(_.assignBigInt(0))
        true
      }
    }

    /** @param clockDomain
      *   the input ClockDomain for Data Simulation
      * @param waitTime
      *   the driver delay, it means that wait waitTime cycle (drive zero) and then driver randomly for every driver cycle (waitTime + 1)
      * @param stimulus
      *   the stimulus to Data for Simulation, if the port have more than one port, the stimulus should be a muti-Dimention Queue, it will drive the ports in order
      * @tparam T
      *   the stimulus type
      * --- if the port is Bool, it must be Boolean
      * --- if the port is BitVector, it must be BigInt
      * --- if the port is SpinalEnumCraft, it must be SpinalEnumElement[SpinalEnum]
      * @return
      *   DataDriver[D]
      */
    def getDriver[T](clockDomain: ClockDomain, waitTime: Int, stimulus: ArrayBuffer[T]*) = {
      val driverCases = new ArrayBuffer[ArrayBuffer[T]]()
      stimulus.copyToBuffer(driverCases)

      DataDriver(data, clockDomain, waitTime) { payload =>
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

    /** @param clockDomain
      *   the input ClockDomain for Data Simulation
      * @param waitTime
      *   the driver delay, it means that wait waitTime cycle (drive zero) and then driver randomly for every driver cycle (waitTime + 1)
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
      DataMonitor(data, clockDomain, waitTime) { payload =>
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

  }

}
