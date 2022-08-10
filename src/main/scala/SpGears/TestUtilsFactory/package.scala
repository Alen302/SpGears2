package SpGears

import spinal.lib._
import spinal.core._
import spinal.core.sim._
import SpGears.TestUtilsFactory.DataCarrierUtils._
import SpGears.TestUtilsFactory.DataUtils._
import SpGears.Backend._
import spinal.sim.WaveFormat._

import java.io._
import java.nio.file._
import java.time._
import scala.collection.mutable._

package object TestUtilsFactory {

  implicit class SpinalSimUtils(target: SpinalSimConfig) {

    /** @param rtl
      *   the DUT of simulation
      * @tparam T
      *   the DUT type
      * @return
      *   SimCompiled[T] (for doSim)
      */
    def compileWithMake[T <: Component](rtl: => T) = {
      val compiled = target.compile(rtl)
      val genDir = target._workspaceName match {
        case null => Paths.get(target._workspacePath, compiled.report.toplevelName)
        case _    => Paths.get(target._workspacePath, target._workspaceName)
      }

      var makeContent = ""
      val genLog      = s"# ****** date : ${LocalDate.now()} \t time : ${LocalTime.now()} ******\n\n"
      target._waveFormat match {
        case FST =>
          val targetWaveFile = "test.fst"
          val makeTarget     = List("gtkwave", ":", targetWaveFile).mkString(" ") + s"\n"
          val makeCommand    = s"\t" + List("gtkwave", targetWaveFile).mkString(" ") + s"\n"
          makeContent = genLog + makeTarget + makeCommand
        case VCD =>
          val targetWaveFile = "test.vcd"
          val makeTarget     = List("gtkwave", ":", targetWaveFile).mkString(" ") + s"\n"
          val makeCommand    = s"\t" + List("gtkwave", targetWaveFile).mkString(" ") + s"\n"
          makeContent = genLog + makeTarget + makeCommand
        case FSDB =>
          val targetWaveFile = s"${compiled.report.toplevelName}.fsdb"
          val targetFileList = "filelist.f"
          val makeTarget     = List("verdi", ":", targetFileList, targetWaveFile).mkString(" ") + s"\n"
          val makeCommand    = List(s"\t", "verdi", "-f", targetFileList, "-ssf", targetWaveFile).mkString(" ") + s"\n"
          makeContent = genLog + makeTarget + makeCommand
        case _ =>
      }

      val targetMakefile       = Paths.get(genDir.toString, "Makefile").toFile
      val targetMakefileWriter = new FileWriter(targetMakefile)
      targetMakefileWriter.write(makeContent)
      targetMakefileWriter.close()

      compiled
    }
  }

  /** @param backend
    *   the simulation backend
    * @param workSpacePath
    *   the path of simulation generated file
    * @param workSpaceName
    *   the generated directory
    * @param config
    *   the simulation config information
    * @param vcsFlags
    *   the VCS simulation additional flag information
    * @return
    *   the return SpinalSimConfig class
    */
  def getSimConfig(
      backend: Backend      = VERILATOR,
      workSpacePath: String = "simWorkSpace",
      workSpaceName: String = null,
      config: SpinalConfig  = null,
      vcsFlags: VCSFlags    = VCSFlags(elaborateFlags = List("-LDFLAGS -Wl,--no-as-needed"))
  ): SpinalSimConfig = {
    (backend, workSpaceName, config) match {
      case (VERILATOR, null, null)            => SimConfig.withFstWave.workspacePath(s"./$workSpacePath").allOptimisation
      case (VERILATOR, workSpaceName, null)   => SimConfig.withFstWave.workspacePath(s"./$workSpacePath").workspaceName(workSpaceName).allOptimisation
      case (VERILATOR, null, config)          => SimConfig.withFstWave.withConfig(config).workspacePath(s"./$workSpacePath").allOptimisation
      case (VERILATOR, workSpaceName, config) => SimConfig.withFstWave.withConfig(config).workspacePath(s"./$workSpacePath").workspaceName(workSpaceName).allOptimisation

      case (VCS, null, null)            => SimConfig.withVCS(vcsFlags).withFSDBWave.workspacePath(s"./$workSpacePath").allOptimisation
      case (VCS, workSpaceName, null)   => SimConfig.withVCS(vcsFlags).withFSDBWave.workspacePath(s"./$workSpacePath").workspaceName(workSpaceName).allOptimisation
      case (VCS, null, config)          => SimConfig.withVCS(vcsFlags).withFSDBWave.withConfig(config).workspacePath(s"./$workSpacePath").allOptimisation
      case (VCS, workSpaceName, config) => SimConfig.withVCS(vcsFlags).withFSDBWave.withConfig(config).workspacePath(s"./$workSpacePath").workspaceName(workSpaceName).allOptimisation
    }

  }

  /** @param carrier
    *   it's the SpinalHDL DataCarrier type
    * @tparam H
    *   it's the SpinalHDL Data type
    */
  implicit class DataCarrierUtilsFactory[H <: Data](carrier: DataCarrier[H]) {

    /** This function can be use to drive DataCarrier randomly
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @return
      *   FlowDriver[H] or StreamDriver[H]
      */
    def setMasterRandomDriver(clockDomain: ClockDomain) = {
      carrier match {
        case flow: Flow[_] =>
          FlowMasterDriver(clockDomain, flow.asInstanceOf[Flow[H]], alwaysDrive = false, driveWhen = true) { payload =>
            payload.randomize()
            true
          }
        case stream: Stream[_] =>
          StreamMasterDriver(clockDomain, stream.asInstanceOf[Stream[H]], alwaysDrive = false, driveWhen = true) { payload =>
            payload.randomize()
            true
          }
        case _ => ???
      }

    }

    /** This function can be use to drive DataCarrier when condition valid
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @param driveWhen
      *   the drive condition
      * @return
      *   FlowDriver[H] or StreamDriver[H]
      */
    def setMasterRandomDriverWhen(clockDomain: ClockDomain, driveWhen: => Boolean) = {
      carrier match {
        case flow: Flow[_] =>
          FlowMasterDriver(clockDomain, flow.asInstanceOf[Flow[H]], alwaysDrive = true, driveWhen = driveWhen) { payload =>
            payload.randomize()
            true
          }
        case stream: Stream[_] =>
          StreamMasterDriver(clockDomain, stream.asInstanceOf[Stream[H]], alwaysDrive = true, driveWhen = driveWhen) { payload =>
            payload.randomize()
            true
          }
        case _ => ???
      }

    }

    /** This function can be use to drive DataCarrier in every free cycle
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @return
      *   FlowDriver[H] or StreamDriver[H]
      */
    def setMasterRandomDriverAlways(clockDomain: ClockDomain) = {
      carrier match {
        case flow: Flow[_] =>
          FlowMasterDriver(clockDomain, flow.asInstanceOf[Flow[H]], alwaysDrive = true, driveWhen = true) { payload =>
            payload.randomize()
            true
          }
        case stream: Stream[_] =>
          StreamMasterDriver(clockDomain, stream.asInstanceOf[Stream[H]], alwaysDrive = true, driveWhen = true) { payload =>
            payload.randomize()
            true
          }
        case _ => ???
      }

    }

    /** This function can be use to drive DataCarrier to "Zero" state randomly
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @return
      *   FlowDriver[H] or StreamDriver[H]
      */
    def setMasterZeroDriver(clockDomain: ClockDomain) = {
      carrier match {
        case flow: Flow[_] =>
          FlowMasterDriver(clockDomain, flow.asInstanceOf[Flow[H]], alwaysDrive = false, driveWhen = true) { payload =>
            payload.flattenForeach(_.assignBigInt(0))
            true
          }
        case stream: Stream[_] =>
          StreamMasterDriver(clockDomain, stream.asInstanceOf[Stream[H]], alwaysDrive = false, driveWhen = true) { payload =>
            payload.flattenForeach(_.assignBigInt(0))
            true
          }
        case _ => ???
      }

    }

    /** This function can be use to drive DataCarrier to "Zero" state when condition valid
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @param driveWhen
      *   the drive condition
      * @return
      *   FlowDriver[H] or StreamDriver[H]
      */
    def setMasterZeroDriverWhen(clockDomain: ClockDomain, driveWhen: => Boolean) = {
      carrier match {
        case flow: Flow[_] =>
          FlowMasterDriver(clockDomain, flow.asInstanceOf[Flow[H]], alwaysDrive = true, driveWhen = driveWhen) { payload =>
            payload.flattenForeach(_.assignBigInt(0))
            true
          }
        case stream: Stream[_] =>
          StreamMasterDriver(clockDomain, stream.asInstanceOf[Stream[H]], alwaysDrive = true, driveWhen = driveWhen) { payload =>
            payload.flattenForeach(_.assignBigInt(0))
            true
          }
        case _ => ???
      }

    }

    /** This function can be use to drive DataCarrier to "Zero" state in every free cycle
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @return
      *   FlowDriver[H] or StreamDriver[H]
      */
    def setMasterZeroDriverAlways(clockDomain: ClockDomain) = {
      carrier match {
        case flow: Flow[_] =>
          FlowMasterDriver(clockDomain, flow.asInstanceOf[Flow[H]], alwaysDrive = true, driveWhen = true) { payload =>
            payload.flattenForeach(_.assignBigInt(0))
            true
          }
        case stream: Stream[_] =>
          StreamMasterDriver(clockDomain, stream.asInstanceOf[Stream[H]], alwaysDrive = true, driveWhen = true) { payload =>
            payload.flattenForeach(_.assignBigInt(0))
            true
          }
        case _ => ???
      }

    }

    /** This function can be use to drive DataCarrier randomly by given stimulus
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
    def setMasterDriver[T](clockDomain: ClockDomain, stimulus: ArrayBuffer[T]*) = {
      val driverCases = stimulus.map(arrayBuffer => arrayBuffer.map(element => element))

      carrier match {
        case flow: Flow[_] =>
          FlowMasterDriver(clockDomain, flow.asInstanceOf[Flow[H]], alwaysDrive = false, driveWhen = true) { payload =>
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
          StreamMasterDriver(clockDomain, stream.asInstanceOf[Stream[H]], alwaysDrive = false, driveWhen = true) { payload =>
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

    /** This function can be use to drive DataCarrier by given stimulus when condition valid
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @param driveWhen
      *   the drive condition
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
    def setMasterDriverWhen[T](clockDomain: ClockDomain, driveWhen: => Boolean, stimulus: ArrayBuffer[T]*) = {
      val driverCases = stimulus.map(arrayBuffer => arrayBuffer.map(element => element))

      carrier match {
        case flow: Flow[_] =>
          FlowMasterDriver(clockDomain, flow.asInstanceOf[Flow[H]], alwaysDrive = true, driveWhen = driveWhen) { payload =>
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
          StreamMasterDriver(clockDomain, stream.asInstanceOf[Stream[H]], alwaysDrive = true, driveWhen = driveWhen) { payload =>
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

    /** This function can be use to drive DataCarrier by given stimulus in every free cycle
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
    def setMasterDriverAlways[T](clockDomain: ClockDomain, stimulus: ArrayBuffer[T]*) = {
      val driverCases = stimulus.map(arrayBuffer => arrayBuffer.map(element => element))

      carrier match {
        case flow: Flow[_] =>
          FlowMasterDriver(clockDomain, flow.asInstanceOf[Flow[H]], alwaysDrive = true, driveWhen = true) { payload =>
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
          StreamMasterDriver(clockDomain, stream.asInstanceOf[Stream[H]], alwaysDrive = true, driveWhen = true) { payload =>
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
    def setSlaveRandomReady(clockDomain: ClockDomain) = {
      carrier match {
        case stream: Stream[_] => StreamSlaveDriver(clockDomain, stream.asInstanceOf[Stream[H]], alwaysDrive = false, driveWhen = true)
        case _                 => ???
      }

    }

    /** This function can be use to drive the DataCarrier's ready valid in every cycle
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @return
      *   StreamReadyRandomizer[H]
      */
    def setSlaveReadyAlways(clockDomain: ClockDomain) = {
      carrier match {
        case stream: Stream[_] => StreamSlaveDriver(clockDomain, stream.asInstanceOf[Stream[H]], alwaysDrive = true, driveWhen = true)
        case _                 => ???
      }

    }

    /** This function can be use to drive the DataCarrier's ready valid when condition valid
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @param driveWhen
      *   the drive condition
      * @return
      *   StreamReadyRandomizer[H]
      */
    def setSlaveReadyWhen(clockDomain: ClockDomain, driveWhen: => Boolean) = {
      carrier match {
        case stream: Stream[_] => StreamSlaveDriver(clockDomain, stream.asInstanceOf[Stream[H]], alwaysDrive = true, driveWhen = driveWhen)
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
    def setStreamMonitor[T](clockDomain: ClockDomain, results: ArrayBuffer[T]*) = {
      carrier match {
        case flow: Flow[_] =>
          FlowMonitor(clockDomain, flow.asInstanceOf[Flow[H]], monitorWhen = true) { payload =>
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
          StreamMonitor(clockDomain, stream.asInstanceOf[Stream[H]], monitorWhen = true) { payload =>
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

    /** This function can be use to monitor the DataCarrier's transaction when condition valid
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @param monitorWhen
      *   the monitor condition
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
    def setStreamMonitorWhen[T](clockDomain: ClockDomain, monitorWhen: => Boolean, results: ArrayBuffer[T]*) = {
      carrier match {
        case flow: Flow[_] =>
          FlowMonitor(clockDomain, flow.asInstanceOf[Flow[H]], monitorWhen) { payload =>
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
          StreamMonitor(clockDomain, stream.asInstanceOf[Stream[H]], monitorWhen) { payload =>
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
    def setStreamAssert(clockDomain: ClockDomain) = {
      carrier match {
        case stream: Stream[_] =>
          StreamTransactionAssert(clockDomain, stream.asInstanceOf[Stream[H]])
        case _ => ???
      }

    }

    /** This function can be use to drive DataCarrier without delay and hold given cycle
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @param cycleCount
      *   the number of cycle for hold drive
      * @param stimulus
      *   the stimulus to DataCarrier for Simulation, if the port have more than one port, the stimulus should be a muti-Dimention ArraryBuffer, it will drive the ports in order, the stimulus's size should be equal to port's size, because the function is drive same data for every hold cycle
      * @tparam T
      *   * the stimulus type
      * --- if the port is Bool, it must be Boolean
      * --- if the port is BitVector, it must be BigInt
      * --- if the port is SpinalEnumCraft, it must be SpinalEnumElement[SpinalEnum]
      */
    def pokeOneShot[T](clockDomain: ClockDomain, cycleCount: Int, stimulus: ArrayBuffer[T]*) = {
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
      if (carrier.valid.isInput) {
        carrier.valid #= false
      } else {
        carrier match {
          case stream: Stream[_] => stream.ready #= false
          case _                 => ???
        }
      }

    }

    /** This function can be use to drive DataCarrier randomly without delay and hold given cycle
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @param cycleCount
      *   the number of cycle for hold drive
      */
    def pokeOneShotRandom(clockDomain: ClockDomain, cycleCount: Int = 1) = {
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
      if (carrier.valid.isInput) {
        carrier.valid #= false
      } else {
        carrier match {
          case stream: Stream[_] => stream.ready #= false
          case _                 => ???
        }
      }
    }

    /** This function can be use to drive "Zero" state to DataCarrier without delay and hold given cycle
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @param cycleCount
      *   the number of cycle for hold drive
      */
    def pokeOneShotZero(clockDomain: ClockDomain, cycleCount: Int = 1) = {
      if (carrier.valid.isInput) {
        carrier.valid #= true
        carrier.payload.flattenForeach(_.assignBigInt(0))
      } else {
        carrier match {
          case stream: Stream[_] => stream.ready #= false
          case _                 => ???
        }
      }
      clockDomain.waitSampling(cycleCount)
      if (carrier.valid.isInput) {
        carrier.valid #= false
      } else {
        carrier match {
          case stream: Stream[_] => stream.ready #= false
          case _                 => ???
        }
      }
    }

    /** This function can be use to halt DataCarrier for any number of cycle
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @param cycleCount
      *   the number of cycle for halt DataCarrier
      */
    def haltCycles(clockDomain: ClockDomain, cycleCount: Int = 1) = {
      if (carrier.valid.isInput) {
        carrier.valid #= false
        carrier.payload.randomize()
      } else {
        carrier match {
          case stream: Stream[_] => stream.ready #= false
          case _                 => ???
        }
      }
      clockDomain.waitSampling(cycleCount)
    }

    /** This function can be use to set the DataCarrier to "Zero" state for any number of cycle
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @param cycleCount
      *   the number of cycle for set DataCarrier to "Zero" state
      */
    def clearCycles(clockDomain: ClockDomain, cycleCount: Int = 1) = {
      if (carrier.valid.isInput) {
        carrier.valid #= false
        carrier.payload.flattenForeach(_.assignBigInt(0))
      } else {
        carrier match {
          case stream: Stream[_] => stream.ready #= false
          case _                 => ???
        }
      }
      clockDomain.waitSampling(cycleCount)
    }

  }

  implicit class DataUtilsFactory[D <: Data](signal: D) {

    /** This function can be use to drive the Data type port randomly and also can set drive delay
      * @param clockDomain
      *   the input ClockDomain for Data Simulation
      * @param waitTime
      *   the drive delay, it means that drive once randomly for every drive delay (waitTime); -1 means that random delay
      * @return
      *   DataDriver[D]
      */
    def setRandomDriver(clockDomain: ClockDomain, waitTime: Int = -1) = {
      DataDriver(clockDomain, signal, waitTime, driveWhen = true) { payload =>
        payload.randomize()
        true
      }
    }

    /** This function can be use to drive the Data type port randomly when condition valid
      * @param clockDomain
      *   the input ClockDomain for Data Simulation
      * @param driveWhen
      *   the drive condition
      * @return
      *   DataDriver[D]
      */
    def setRandomDriverWhen(clockDomain: ClockDomain, driveWhen: => Boolean) = {
      DataDriver(clockDomain, signal, 0, driveWhen) { payload =>
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
    def setZeroDriver(clockDomain: ClockDomain) = {
      DataDriver(clockDomain, signal, -1, driveWhen = true) { payload =>
        payload.flattenForeach(_.assignBigInt(0))
        true
      }
    }

    /** This function can be use to drive the Data type port by given stimulus and also can set drive delay
      * @param clockDomain
      *   the input ClockDomain for Data Simulation
      * @param waitTime
      *   the drive delay, it means that drive once by given stimulus for every drive cycle (waitTime); -1 means that random delay
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
    def setDriver[T](clockDomain: ClockDomain, waitTime: Int, stimulus: ArrayBuffer[T]*) = {
      val driverCases = stimulus.map(arrayBuffer => arrayBuffer.map(element => element))

      DataDriver(clockDomain, signal, waitTime, driveWhen = true) { payload =>
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

    /** This function can be use to drive the Data type port by given stimulus when condition valid
      * @param clockDomain
      *   the input ClockDomain for Data Simulation
      * @param driveWhen
      *   the drive condition
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
    def setDriverWhen[T](clockDomain: ClockDomain, driveWhen: => Boolean, stimulus: ArrayBuffer[T]*) = {
      val driverCases = stimulus.map(arrayBuffer => arrayBuffer.map(element => element))

      DataDriver(clockDomain, signal, 0, driveWhen) { payload =>
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

    /** This function can be use to monitor the Data type port and also can set the monitor delay
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
    def setMonitor[T](clockDomain: ClockDomain, waitTime: Int, results: ArrayBuffer[T]*) = {
      DataMonitor(clockDomain, signal, waitTime, monitorWhen = true) { payload =>
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

    /** This function can be use to monitor the Data type port when condition valid
      * @param clockDomain
      *   the input ClockDomain for Data Simulation
      * @param monitorWhen
      *   the monitor condition
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
    def setMonitorWhen[T](clockDomain: ClockDomain, monitorWhen: => Boolean, results: ArrayBuffer[T]*) = {
      DataMonitor(clockDomain, signal, 0, monitorWhen) { payload =>
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
      * @param cycleCount
      *   the number of cycle for hold drive
      * @param stimulus
      *   the stimulus to Data type port for Simulation, if the Data type port have more than one port, the stimulus should be a muti-Dimention ArraryBuffer, it will drive the ports in order, the stimulus's size should be equal to port's size, because the function is drive same data for every hold
      *   cycle
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
      * @param cycleCount
      *   the number of cycle for hold drive
      */
    def pokeRandom(clockDomain: ClockDomain, cycleCount: Int = 1) = {
      signal.flattenForeach(_.randomize())

      clockDomain.waitSampling(cycleCount)
    }

    /** This function can be use to drive "Zero" state to Data type port without delay and hold given cycle
      * @param clockDomain
      *   the input ClockDomain for Data type port Simulation
      * @param cycleCount
      *   the number of cycle for hold drive
      */
    def pokeZero(clockDomain: ClockDomain, cycleCount: Int = 1) = {
      signal.flattenForeach(_.assignBigInt(0))

      clockDomain.waitSampling(cycleCount)
    }

  }

}
