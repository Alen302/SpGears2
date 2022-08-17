package SpGears.TestUtils

import spinal.lib._
import spinal.core._
import spinal.core.sim._
import SpGears.TestUtils.UVM.DataCarrierComponents._
import SpGears.TestUtils.UVM.DataComponents._

import org.slf4j._
import scala.collection.mutable._

package object UVM {

  /** This package which contain some method for build UVM component
    * @param port
    *   it's the SpinalHDL DataCarrier type
    * @tparam D
    *   it's the SpinalHDL Data type
    */
  implicit class UVMComponentFactory[D <: Data](port: D) {

    val logger: Logger = LoggerFactory.getLogger("UVMComponentFactory")

    /** This method which can be use to drive Data port by random value
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @param latency
      *   the drive latency, it means that the driver will wait latency cycles then begin drive if driveWhen enable
      * @param driveGap
      *   the cycle gap of drive
      * @param randomMode
      *   if randomMode be set, it means that the driveGap is a random number
      * @param driveWhen
      *   the drive enable signal
      */
    def setRandomDriver(clockDomain: ClockDomain, latency: Int, driveGap: Int, randomMode: Boolean, driveWhen: => Boolean): Unit = {
      port match {
        case flow: Flow[_] =>
          FlowMasterDriver(clockDomain, flow.asInstanceOf[Flow[D]], latency, driveGap, randomMode, driveWhen) { payload =>
            payload.randomize()
            true
          }
        case stream: Stream[_] =>
          if (stream.valid.isInput) {
            StreamMasterDriver(clockDomain, stream.asInstanceOf[Stream[D]], latency, driveGap, randomMode, driveWhen) { payload =>
              payload.randomize()
              true
            }
          } else {
            StreamSlaveDriver(clockDomain, stream.asInstanceOf[Stream[D]], latency, driveGap, randomMode, driveWhen)
          }
        case data: Data =>
          DataDriver(clockDomain, data, latency, driveGap, randomMode, driveWhen) { payload =>
            payload.randomize()
            true
          }
        case _ => logger.warn(s"The setRandomDriver function is not match this Data port : ${port.getName()}")
      }

    }

    /** This method which can be use to drive Data port by random value with random drive gap
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @param latency
      *   the drive latency, it means that the driver will wait latency cycles then begin drive
      */
    def setRandomDriverRandomly(clockDomain: ClockDomain, latency: Int = 0): Unit = {
      setRandomDriver(clockDomain, latency, driveGap = 1, randomMode = true, driveWhen = true)
    }

    /** This method can be use to drive Data port by random value which the drive gap is one
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @param latency
      *   the drive latency, it means that the driver will wait latency cycles then begin drive
      */
    def setRandomDriverAlways(clockDomain: ClockDomain, latency: Int = 0): Unit = {
      setRandomDriver(clockDomain, latency, driveGap = 1, randomMode = false, driveWhen = true)
    }

    /** This method which can be use to drive Data port by zero
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @param latency
      *   the drive latency, it means that the driver will wait latency cycles then begin drive if driveWhen enable
      * @param driveGap
      *   the cycle gap of drive
      * @param randomMode
      *   if randomMode be set, it means that the driveGap is a random number
      * @param driveWhen
      *   the drive enable signal
      */
    def setZeroDriver(clockDomain: ClockDomain, latency: Int, driveGap: Int, randomMode: Boolean, driveWhen: => Boolean): Unit = {
      port match {
        case flow: Flow[_] =>
          FlowMasterDriver(clockDomain, flow.asInstanceOf[Flow[D]], latency, driveGap, randomMode, driveWhen) { payload =>
            payload.flattenForeach(_.assignBigInt(0))
            true
          }
        case stream: Stream[_] =>
          if (stream.valid.isInput) {
            StreamMasterDriver(clockDomain, stream.asInstanceOf[Stream[D]], latency, driveGap, randomMode, driveWhen) { payload =>
              payload.flattenForeach(_.assignBigInt(0))
              true
            }
          } else {
            StreamSlaveDriver(clockDomain, stream.asInstanceOf[Stream[D]], latency, driveGap, randomMode, driveWhen = true, activeLevel = false)
          }
        case data: Data =>
          DataDriver(clockDomain, data, latency, driveGap, randomMode, driveWhen) { payload =>
            payload.flattenForeach(_.assignBigInt(0))
            true
          }
        case _ => logger.warn(s"The setZeroDriver function is not match this Data port : ${port.getName()}")
      }

    }

    /** This method which can be use to drive Data port by zero and with random drive gap
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @param latency
      *   the drive latency, it means that the driver will wait latency cycles then begin drive
      */
    def setZeroDriverRandomly(clockDomain: ClockDomain, latency: Int = 0): Unit = {
      setZeroDriver(clockDomain, latency, driveGap = 1, randomMode = true, driveWhen = true)
    }

    /** This method can be use to drive Data port by zero which the drive gap is one
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @param latency
      *   the drive latency, it means that the driver will wait latency cycles then begin drive
      */
    def setZeroDriverAlways(clockDomain: ClockDomain, latency: Int = 0): Unit = {
      setZeroDriver(clockDomain, latency, driveGap = 1, randomMode = false, driveWhen = true)
    }

    /** This function can be use to drive Data port by given stimulus
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @param latency
      *   the drive latency, it means that the driver will wait latency cycles then begin drive
      * @param driveGap
      *   the cycle gap of drive
      * @param randomMode
      *   if randomMode be set, it means that the driveGap is a random number
      * @param driveWhen
      *   the drive enable signal
      * @param stimulus
      *   the stimulus to Data port for Simulation, if the port have more than one port, the stimulus should be a muti-Dimention ArraryBuffer, it will drive the ports in order
      * @tparam T
      *   the stimulus type
      * --- if the port payload is Bool, it must be Boolean
      * --- if the port payload is BitVector, it must be BigInt
      * --- if the port payload is SpinalEnumCraft, it must be SpinalEnumElement[SpinalEnum]
      */
    def setDriver[T](clockDomain: ClockDomain, latency: Int, driveGap: Int, randomMode: Boolean, driveWhen: => Boolean, stimulus: ArrayBuffer[T]*): Unit = {
      val driverCases = stimulus.map(arrayBuffer => arrayBuffer.map(element => element))
      var driveEnable = true
      port match {
        case flow: Flow[_] =>
          FlowMasterDriver(clockDomain, flow.asInstanceOf[Flow[D]], latency, driveGap, randomMode, driveWhen) { payload =>
            val payloads = payload.flatten
            assert(payloads.size == driverCases.size, s"the testCase size is not match ! port number : ${payloads.size}\t testCases size : ${driverCases.size}")
            payloads.zip(driverCases).foreach { case (baseType, driverCase) =>
              if (driverCase.isEmpty) {
                baseType.assignBigInt(0)
                driveEnable = false
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
                  case _ =>
                }
                driveEnable = true
              }
            }
            driveEnable
          }
        case stream: Stream[_] =>
          if (stream.valid.isInput) {
            StreamMasterDriver(clockDomain, stream.asInstanceOf[Stream[D]], latency, driveGap, randomMode, driveWhen) { payload =>
              val payloads = payload.flatten
              assert(payloads.size == driverCases.size, s"the testCase size is not match ! port number : ${payloads.size}\t testCases size : ${driverCases.size}")
              payloads.zip(driverCases).foreach { case (baseType, driverCase) =>
                if (driverCase.isEmpty) {
                  baseType.assignBigInt(0)
                  driveEnable = false
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
                    case _ =>
                  }
                  driveEnable = true
                }
              }
              driveEnable
            }
          } else {
            StreamSlaveDriver(clockDomain, stream.asInstanceOf[Stream[D]], latency, driveGap, randomMode, driveWhen)
          }
        case data: Data =>
          DataDriver(clockDomain, data, latency, driveGap, randomMode, driveWhen) { payload =>
            val payloads = payload.flatten
            assert(payloads.size == driverCases.size, s"the testCase size is not match ! port number : ${payloads.size}\t testCases size : ${driverCases.size}")
            payloads.zip(driverCases).foreach { case (baseType, driverCase) =>
              if (driverCase.isEmpty) {
                baseType.assignBigInt(0)
                driveEnable = false
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
                  case _ =>
                }
                driveEnable = true
              }
            }
            driveEnable
          }
        case _ => logger.warn(s"The setDriver function is not match this Data port : ${port.getName()}")
      }
    }

    /** This function can be use to drive Data port by given stimulus with random drive gap
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @param latency
      *   the drive latency, it means that the driver will wait latency cycles then begin drive
      * @param stimulus
      *   the stimulus to Data port for Simulation, if the port have more than one port, the stimulus should be a muti-Dimention ArraryBuffer, it will drive the ports in order
      * @tparam T
      *   the stimulus type
      * --- if the port payload is Bool, it must be Boolean
      * --- if the port payload is BitVector, it must be BigInt
      * --- if the port payload is SpinalEnumCraft, it must be SpinalEnumElement[SpinalEnum]
      */
    def setDriverRandomly[T](clockDomain: ClockDomain, latency: Int, stimulus: ArrayBuffer[T]*): Unit = {
      val driverCases = stimulus.map(arrayBuffer => arrayBuffer.map(element => element))
      var driveEnable = true
      port match {
        case flow: Flow[_] =>
          FlowMasterDriver(clockDomain, flow.asInstanceOf[Flow[D]], latency, driveGap = 1, randomMode = true, driveWhen = true) { payload =>
            val payloads = payload.flatten
            assert(payloads.size == driverCases.size, s"the testCase size is not match ! port number : ${payloads.size}\t testCases size : ${driverCases.size}")
            payloads.zip(driverCases).foreach { case (baseType, driverCase) =>
              if (driverCase.isEmpty) {
                baseType.assignBigInt(0)
                driveEnable = false
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
                  case _ =>
                }
                driveEnable = true
              }
            }
            driveEnable
          }
        case stream: Stream[_] =>
          if (stream.valid.isInput) {
            StreamMasterDriver(clockDomain, stream.asInstanceOf[Stream[D]], latency, driveGap = 1, randomMode = true, driveWhen = true) { payload =>
              val payloads = payload.flatten
              assert(payloads.size == driverCases.size, s"the testCase size is not match ! port number : ${payloads.size}\t testCases size : ${driverCases.size}")
              payloads.zip(driverCases).foreach { case (baseType, driverCase) =>
                if (driverCase.isEmpty) {
                  baseType.assignBigInt(0)
                  driveEnable = false
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
                    case _ =>
                  }
                  driveEnable = true
                }
              }
              driveEnable
            }
          } else {
            StreamSlaveDriver(clockDomain, stream.asInstanceOf[Stream[D]], latency, driveGap = 1, randomMode = true, driveWhen = true)
          }
        case data: Data =>
          DataDriver(clockDomain, data, latency, driveGap = 1, randomMode = true, driveWhen = true) { payload =>
            val payloads = payload.flatten
            assert(payloads.size == driverCases.size, s"the testCase size is not match ! port number : ${payloads.size}\t testCases size : ${driverCases.size}")
            payloads.zip(driverCases).foreach { case (baseType, driverCase) =>
              if (driverCase.isEmpty) {
                baseType.assignBigInt(0)
                driveEnable = false
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
                  case _ =>
                }
                driveEnable = true
              }
            }
            driveEnable
          }
        case _ => logger.warn(s"The setDriverRandomly function is not match this Data port : ${port.getName()}")
      }
    }

    /** This function can be use to drive Data port by given stimulus which the driveGap is one
      * @param clockDomain
      *   the input ClockDomain for DataCarrier Simulation
      * @param latency
      *   the drive latency, it means that the driver will wait latency cycles then begin drive
      * @param stimulus
      *   the stimulus to Data port for Simulation, if the port have more than one port, the stimulus should be a muti-Dimention ArraryBuffer, it will drive the ports in order
      * @tparam T
      *   the stimulus type
      * --- if the port payload is Bool, it must be Boolean
      * --- if the port payload is BitVector, it must be BigInt
      * --- if the port payload is SpinalEnumCraft, it must be SpinalEnumElement[SpinalEnum]
      */
    def setDriverAlways[T](clockDomain: ClockDomain, latency: Int, stimulus: ArrayBuffer[T]*): Unit = {
      val driverCases = stimulus.map(arrayBuffer => arrayBuffer.map(element => element))
      var driveEnable = true
      port match {
        case flow: Flow[_] =>
          FlowMasterDriver(clockDomain, flow.asInstanceOf[Flow[D]], latency, driveGap = 1, randomMode = false, driveWhen = true) { payload =>
            val payloads = payload.flatten
            assert(payloads.size == driverCases.size, s"the testCase size is not match ! port number : ${payloads.size}\t testCases size : ${driverCases.size}")
            payloads.zip(driverCases).foreach { case (baseType, driverCase) =>
              if (driverCase.isEmpty) {
                baseType.assignBigInt(0)
                driveEnable = false
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
                  case _ =>
                }
                driveEnable = true
              }
            }
            driveEnable
          }
        case stream: Stream[_] =>
          if (stream.valid.isInput) {
            StreamMasterDriver(clockDomain, stream.asInstanceOf[Stream[D]], latency, driveGap = 1, randomMode = false, driveWhen = true) { payload =>
              val payloads = payload.flatten
              assert(payloads.size == driverCases.size, s"the testCase size is not match ! port number : ${payloads.size}\t testCases size : ${driverCases.size}")
              payloads.zip(driverCases).foreach { case (baseType, driverCase) =>
                if (driverCase.isEmpty) {
                  baseType.assignBigInt(0)
                  driveEnable = false
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
                    case _ =>
                  }
                  driveEnable = true
                }
              }
              driveEnable
            }
          } else {
            StreamSlaveDriver(clockDomain, stream.asInstanceOf[Stream[D]], latency, driveGap = 1, randomMode = false, driveWhen = true)
          }
        case data: Data =>
          DataDriver(clockDomain, data, latency, driveGap = 1, randomMode = false, driveWhen = true) { payload =>
            val payloads = payload.flatten
            assert(payloads.size == driverCases.size, s"the testCase size is not match ! port number : ${payloads.size}\t testCases size : ${driverCases.size}")
            payloads.zip(driverCases).foreach { case (baseType, driverCase) =>
              if (driverCase.isEmpty) {
                baseType.assignBigInt(0)
                driveEnable = false
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
                  case _ =>
                }
                driveEnable = true
              }
            }
            driveEnable
          }
        case _ => logger.warn(s"The setDriverAlways function is not match this Data port : ${port.getName()}")
      }
    }

    /** This function can be use to monitor the Data port transaction
      * @param clockDomain
      *   the input ClockDomain for Data port Simulation
      * @param latency
      *   the monitor latency, it means that the monitor will wait latency cycles then begin monitor
      * @param monitorGap
      *   the monitor gap of monitor
      * @param monitorWhen
      *   the monitor enable signal
      * @param results
      *   the transaction data container
      * @tparam T
      *   the data container's data type
      * --- if the port is Bool, it must be Boolean
      * --- if the port is BitVector, it must be BigInt
      * --- if the port is SpinalEnumCraft, it must be SpinalEnumElement[SpinalEnum]
      */
    def setMonitor[T](clockDomain: ClockDomain, latency: Int, monitorGap: Int, monitorWhen: => Boolean, results: ArrayBuffer[T]*): Unit = {
      port match {
        case flow: Flow[_] =>
          FlowMonitor(clockDomain, flow.asInstanceOf[Flow[D]], latency, monitorGap, monitorWhen) { payload =>
            val payloads = payload.flatten
            assert(payloads.size == results.size, s"the monitor container size is not match ! port number : ${payloads.size}\t container size : ${results.size}")
            results.zip(payloads).foreach { case (result, baseType) =>
              baseType match {
                case bool: Bool               => result += bool.toBoolean.asInstanceOf[T]
                case bitVector: BitVector     => result += bitVector.toBigInt.asInstanceOf[T]
                case enum: SpinalEnumCraft[_] => result += enum.toEnum.asInstanceOf[T]
                case _                        => logger.warn(s"The setMonitor function is fail to monitor this flow port : ${flow.getName()}")
              }
            }
          }
        case stream: Stream[_] =>
          StreamMonitor(clockDomain, stream.asInstanceOf[Stream[D]], latency, monitorGap, monitorWhen) { payload =>
            val payloads = payload.flatten
            assert(payloads.size == results.size, s"the monitor container size is not match ! port number : ${payloads.size}\t container size : ${results.size}")
            results.zip(payloads).foreach { case (result, baseType) =>
              baseType match {
                case bool: Bool               => result += bool.toBoolean.asInstanceOf[T]
                case bitVector: BitVector     => result += bitVector.toBigInt.asInstanceOf[T]
                case enum: SpinalEnumCraft[_] => result += enum.toEnum.asInstanceOf[T]
                case _                        => logger.warn(s"The setMonitor function is fail to monitor this stream port : ${stream.getName()}")
              }
            }
          }
        case data: Data =>
          DataMonitor(clockDomain, data, latency, monitorGap, monitorWhen) { payload =>
            val payloads = payload.flatten
            assert(payloads.size == results.size, s"the monitor container size is not match ! port number : ${payloads.size}\t container size : ${results.size}")
            results.zip(payloads).foreach { case (result, baseType) =>
              baseType match {
                case bool: Bool               => result += bool.toBoolean.asInstanceOf[T]
                case bitVector: BitVector     => result += bitVector.toBigInt.asInstanceOf[T]
                case enum: SpinalEnumCraft[_] => result += enum.toEnum.asInstanceOf[T]
                case _                        => logger.warn(s"The setMonitor function is fail to monitor this data port : ${data.getName()}")
              }
            }
          }
        case _ => logger.warn(s"The setMonitor function is not match this Data port : ${port.getName()}")
      }

    }

    /** This function can be use to monitor the Data port transaction which monitor gap is one
      * @param clockDomain
      *   the input ClockDomain for Data port Simulation
      * @param latency
      *   the monitor latency, it means that the monitor will wait latency cycles then begin monitor
      * @param results
      *   the transaction data container
      * @tparam T
      *   the data container's data type
      * --- if the port is Bool, it must be Boolean
      * --- if the port is BitVector, it must be BigInt
      * --- if the port is SpinalEnumCraft, it must be SpinalEnumElement[SpinalEnum]
      */
    def setMonitorAlways[T](clockDomain: ClockDomain, latency: Int, results: ArrayBuffer[T]*): Unit = {
      port match {
        case flow: Flow[_] =>
          FlowMonitor(clockDomain, flow.asInstanceOf[Flow[D]], latency, monitorGap = 1, monitorWhen = true) { payload =>
            val payloads = payload.flatten
            assert(payloads.size == results.size, s"the monitor container size is not match ! port number : ${payloads.size}\t container size : ${results.size}")
            results.zip(payloads).foreach { case (result, baseType) =>
              baseType match {
                case bool: Bool               => result += bool.toBoolean.asInstanceOf[T]
                case bitVector: BitVector     => result += bitVector.toBigInt.asInstanceOf[T]
                case enum: SpinalEnumCraft[_] => result += enum.toEnum.asInstanceOf[T]
                case _                        => logger.warn(s"The setMonitorAlways function is fail to monitor this flow port : ${flow.getName()}")
              }
            }
          }
        case stream: Stream[_] =>
          StreamMonitor(clockDomain, stream.asInstanceOf[Stream[D]], latency, monitorGap = 1, monitorWhen = true) { payload =>
            val payloads = payload.flatten
            assert(payloads.size == results.size, s"the monitor container size is not match ! port number : ${payloads.size}\t container size : ${results.size}")
            results.zip(payloads).foreach { case (result, baseType) =>
              baseType match {
                case bool: Bool               => result += bool.toBoolean.asInstanceOf[T]
                case bitVector: BitVector     => result += bitVector.toBigInt.asInstanceOf[T]
                case enum: SpinalEnumCraft[_] => result += enum.toEnum.asInstanceOf[T]
                case _                        => logger.warn(s"The setMonitorAlways function is fail to monitor this stream port : ${stream.getName()}")
              }
            }
          }
        case data: Data =>
          DataMonitor(clockDomain, data, latency, monitorGap = 1, monitorWhen = true) { payload =>
            val payloads = payload.flatten
            assert(payloads.size == results.size, s"the monitor container size is not match ! port number : ${payloads.size}\t container size : ${results.size}")
            results.zip(payloads).foreach { case (result, baseType) =>
              baseType match {
                case bool: Bool               => result += bool.toBoolean.asInstanceOf[T]
                case bitVector: BitVector     => result += bitVector.toBigInt.asInstanceOf[T]
                case enum: SpinalEnumCraft[_] => result += enum.toEnum.asInstanceOf[T]
                case _                        => logger.warn(s"The setMonitorAlways function is fail to monitor this data port : ${data.getName()}")
              }
            }
          }

        case _ => logger.warn(s"The setMonitorAlways function is not match this Data port : ${port.getName()}")
      }

    }

  }

}
