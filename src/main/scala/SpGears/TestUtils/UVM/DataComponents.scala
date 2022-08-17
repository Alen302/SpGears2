package SpGears.TestUtils.UVM

import spinal.core._
import spinal.core.sim._

import scala.collection.mutable._
import scala.util.Random

object DataComponents {

  object DataDriver {
    def apply[D <: Data](clockDomain: ClockDomain, data: D, latency: Int, driveGap: Int, randomMode: Boolean, driveWhen: => Boolean)(driver: D => Boolean) = new DataDriver(clockDomain, data, latency, driveGap, randomMode, driveWhen, driver)
  }

  class DataDriver[D <: Data](clockDomain: ClockDomain, data: D, latency: Int, driveGap: Int, randomMode: Boolean, driveWhen: => Boolean, var driver: D => Boolean) {
    var initialDelay: Int = latency
    require(initialDelay >= 0, "The data driver latency should great or equal to 0 !")
    var interDriverDelay: Int = driveGap
    require(interDriverDelay >= 1, "The data driver driverGap should great or equal to 1 !")

    var genRandomDelay: () => Int = () => {
      val x: Double = Random.nextDouble()
      (x * x * 10 + 1).toInt
    }

    var state = 0
    if (randomMode) { interDriverDelay = genRandomDelay() }

    data.flattenForeach(_.assignBigInt(0))

    def fsm(): Unit = {
      state match {
        case 0 =>
          if (interDriverDelay == 1) {
            state += 1
            fsm()
          } else {
            interDriverDelay -= 1
          }

        case 1 =>
          driver(data)
          state += 1

        case 2 =>
          if (randomMode) {
            interDriverDelay = genRandomDelay()
          } else {
            interDriverDelay = driveGap
          }
          state = 0
          fsm()

      }
    }

    clockDomain.onSamplings {
      if (driveWhen) {
        if (initialDelay == 0) {
          fsm()
        } else {
          initialDelay -= 1
        }
      }
    }
  }

  object DataMonitor {
    def apply[D <: Data](clockDomain: ClockDomain, data: D, latency: Int, monitorGap: Int, monitorWhen: => Boolean)(callback: D => Unit): DataMonitor[D] =
      new DataMonitor(clockDomain, data, latency, monitorGap, monitorWhen).addCallback(callback)
  }

  class DataMonitor[D <: Data](clockDomain: ClockDomain, data: D, latency: Int, monitorGap: Int, monitorWhen: => Boolean) {
    var initialDelay: Int = latency
    require(initialDelay >= 0, "The data monitor latency should great or equal to 0 !")
    var interMonitorDelay: Int = monitorGap
    require(interMonitorDelay >= 1, "The data monitor gap should great or equal to 1 !")

    val callbacks: ArrayBuffer[D => Unit] = ArrayBuffer[D => Unit]()

    def addCallback(callback: D => Unit): this.type = {
      callbacks += callback
      this
    }

    clockDomain.onSamplings {
      if (monitorWhen) {
        if (initialDelay == 0) {
          if (interMonitorDelay == 1) {
            callbacks.foreach(_(data))
            interMonitorDelay = monitorGap
          } else {
            if (interMonitorDelay > 1) { interMonitorDelay -= 1 }
          }
        } else {
          initialDelay -= 1
        }
      }
    }
  }
}
