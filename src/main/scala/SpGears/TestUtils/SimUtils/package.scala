package SpGears.TestUtils

import SpGears.TestUtils.Backend._
import SpGears.TestUtils.UVM.DataCarrierComponents._
import spinal.core.sim._
import spinal.core._
import spinal.lib._
import spinal.sim.WaveFormat._
import org.slf4j._

import java.io.FileWriter
import java.nio.file.Paths
import java.time._
import scala.collection.mutable._

package object SimUtils {

  /** @param target
    *   the SpinalSimConfig class
    */
  implicit class SpinalSimUtils(target: SpinalSimConfig) {

    /** @param rtl
      *   the DUT of simulation
      * @tparam T
      *   the DUT type
      * @return
      *   SimCompiled[T] (for doSim)
      */
    def compileWithMake[T <: Component](rtl: => T): SimCompiled[T] = {
      val logger: Logger = LoggerFactory.getLogger("compileWithMake")
      val compiled       = target.compile(rtl)
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
        case _ => logger.warn(s"This invoke is not generate valid Makefile file, Because the compileWithMake method of this type waveFormat : ${target._waveFormat.toString()} is not realize !")
      }

      val targetMakefile       = Paths.get(genDir.toString, "Makefile").toFile
      val targetMakefileWriter = new FileWriter(targetMakefile)
      targetMakefileWriter.write(makeContent)
      targetMakefileWriter.flush()
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

  implicit class DataSimUtils[D <: Data](port: D) {
    val logger: Logger = LoggerFactory.getLogger("DataSimUtils")

    /** This function can be use to check the handshake protocol transaction correctness
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      */
    def setStreamAssert(clockDomain: ClockDomain): Unit = {
      port match {
        case stream: Stream[_] =>
          StreamTransactionAssert(clockDomain, stream.asInstanceOf[Stream[D]])
        case _ =>
      }
    }

    /** This function can be use to drive Data port by given initialValues without delay and hold given cycle
      *
      * @param clockDomain
      *   the input ClockDomain for Data port Simulation
      * @param initialValues
      *   the stimulus to Data port for Simulation, if the data port have more than one port, the stimulus should be a muti-Dimention ArraryBuffer, it will drive the ports in order, the stimulus's size should be equal to port's size
      * @param holdCycles
      *   the number of cycle for hold drive
      * @tparam T
      *   * the stimulus type, it may be any type
      * --- if the port have Bool, it must contain Boolean
      * --- if the port have BitVector, it must contain BigInt
      * --- if the port have SpinalEnumCraft, it must contain SpinalEnumElement[SpinalEnum]
      */
    def setInitValue[T](clockDomain: ClockDomain, initialValues: ArrayBuffer[T], holdCycles: Int = 0): Unit = {
      val initCases: ArrayBuffer[T] = initialValues.map(element => element)
      port match {
        case flow: Flow[_] =>
          if (flow.valid.isInput) {
            require(
              initCases.size == flow.payload.flatten.size,
              s"the size of stimulus is not match this flow payload port size ! the stimulus size is ${initCases.size}\t the flow payload contain ${flow.payload.flatten.size} port !"
            )
            flow.payload.flatten.zip(initCases).foreach { case (baseType, driver) =>
              baseType match {
                case bool: Bool =>
                  bool #= driver.asInstanceOf[Boolean]
                case bitVector: BitVector =>
                  bitVector #= driver.asInstanceOf[BigInt]
                case enum: SpinalEnumCraft[_] =>
                  enum #= driver.asInstanceOf[SpinalEnumElement[SpinalEnum]]
                case _ => logger.warn(s"The setInitialValue function is fail to initiate this flow port : ${flow.getName()}")
              }
            }
            flow.valid #= false
          }
        case stream: Stream[_] =>
          if (stream.valid.isInput) {
            require(
              initCases.size == stream.payload.flatten.size,
              s"the size of stimulus is not match this stream payload port size !\t the stimulus size is ${initCases.size}\t the stream payload contain ${stream.payload.flatten.size} port !"
            )
            stream.payload.flatten.zip(initCases).foreach { case (baseType, driver) =>
              baseType match {
                case bool: Bool =>
                  bool #= driver.asInstanceOf[Boolean]
                case bitVector: BitVector =>
                  bitVector #= driver.asInstanceOf[BigInt]
                case enum: SpinalEnumCraft[_] =>
                  enum #= driver.asInstanceOf[SpinalEnumElement[SpinalEnum]]
                case _ => logger.warn(s"The setInitialValue function is fail to initiate this stream port : ${stream.getName()}")
              }
            }
            stream.valid #= false
          } else {
            stream.ready #= false
          }
        case data: Data =>
          require(
            initCases.size == data.flatten.size,
            s"the size of stimulus is not match this data port size! the stimulus size is ${initCases.size}\t the data port size is ${data.flatten.size} !"
          )
          data.flatten.zip(initCases).foreach { case (baseType, driver) =>
            baseType match {
              case bool: Bool =>
                bool #= driver.asInstanceOf[Boolean]
              case bitVector: BitVector =>
                bitVector #= driver.asInstanceOf[BigInt]
              case enum: SpinalEnumCraft[_] =>
                enum #= driver.asInstanceOf[SpinalEnumElement[SpinalEnum]]
              case _ => logger.warn(s"The setInitialValue function is fail to initiate this data port : ${data.getName()}")
            }
          }
        case _ => logger.warn(s"The setInitialValue function is not match this port ${port.getName()}")
      }
      clockDomain.waitSampling(holdCycles)
    }

    /** This function can be use to drive Data port by random value without delay and hold given cycle
      *
      * @param clockDomain
      *   the input ClockDomain for Data port Simulation
      * @param holdCycles
      *   the number of cycle for hold drive
      * @tparam T
      *   * the stimulus type, it may be any type
      * --- if the port have Bool, it must contain Boolean
      * --- if the port have BitVector, it must contain BigInt
      * --- if the port have SpinalEnumCraft, it must contain SpinalEnumElement[SpinalEnum]
      */
    def setRandomInitValue[T](clockDomain: ClockDomain, holdCycles: Int = 0): Unit = {
      port match {
        case flow: Flow[_] =>
          if (flow.valid.isInput) {
            flow.payload.randomize()
            flow.valid #= false
          }
        case stream: Stream[_] =>
          if (stream.valid.isInput) {
            stream.payload.randomize()
            stream.valid #= false
          } else {
            stream.ready #= false
          }
        case data: Data =>
          data.randomize()
        case _ => logger.warn(s"The setInitialValue function is not match this port ${port.getName()}")
      }
      clockDomain.waitSampling(holdCycles)
    }

    /** This function can be use to drive Data port by zero value without delay and hold given cycle
      *
      * @param clockDomain
      *   the input ClockDomain for Data port Simulation
      * @param holdCycles
      *   the number of cycle for hold drive
      * @tparam T
      *   * the stimulus type, it may be any type
      * --- if the port have Bool, it must contain Boolean
      * --- if the port have BitVector, it must contain BigInt
      * --- if the port have SpinalEnumCraft, it must contain SpinalEnumElement[SpinalEnum]
      */
    def setZeroInitValue[T](clockDomain: ClockDomain, holdCycles: Int = 0): Unit = {
      port match {
        case flow: Flow[_] =>
          if (flow.valid.isInput) {
            flow.payload.flattenForeach(_.assignBigInt(0))
            flow.valid #= false
          }
        case stream: Stream[_] =>
          if (stream.valid.isInput) {
            stream.payload.flattenForeach(_.assignBigInt(0))
            stream.valid #= false
          } else {
            stream.ready #= false
          }
        case data: Data =>
          data.flattenForeach(_.assignBigInt(0))
        case _ => logger.warn(s"The setInitialValue function is not match this port ${port.getName()}")
      }
      clockDomain.waitSampling(holdCycles)
    }

  }
}
