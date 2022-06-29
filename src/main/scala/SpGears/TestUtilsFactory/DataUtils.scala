package SpGears.TestUtilsFactory

import spinal.core._
import spinal.core.sim._

import scala.collection.mutable._
import scala.util.Random

object DataUtils {

  object DataDriver {
    def apply[D <: Data](clockDomain: ClockDomain, data: D, waitTime: Int, driveWhen: => Boolean)(driver: (D) => Boolean) = new DataDriver(clockDomain, data, waitTime, driveWhen, driver)
  }

  class DataDriver[D <: Data](clockDomain: ClockDomain, data: D, waitTime: Int, driveWhen: => Boolean, var driver: (D) => Boolean) {
    var transactionDelay: () => Int = () => {
      val x = Random.nextDouble()
      (x * x * 10).toInt
    }

    var state = 0
    var delay = 0
    if (waitTime == -1) {
      delay = transactionDelay()
    } else {
      delay = waitTime
    }

    data.flattenForeach(_.assignBigInt(0))

    def fsm(): Unit = {
      state match {
        case 0 =>
          if (delay == 0) {
            state += 1
            fsm()
          } else {
            delay -= 1
          }

        case 1 =>
          if (driver(data)) {
            state += 1
          }

        case 2 =>
          if (waitTime == -1) {
            delay = transactionDelay()
          } else {
            delay = waitTime
          }
          state = 0
          fsm()

      }
    }

    clockDomain.onSamplings(if (driveWhen) fsm)
  }

  object DataMonitor {
    def apply[D <: Data](clockDomain: ClockDomain, data: D, waitTime: Int, monitorWhen: => Boolean)(callback: (D) => Unit) =
      new DataMonitor(clockDomain, data, waitTime, monitorWhen).addCallback(callback)
  }

  class DataMonitor[D <: Data](clockDomain: ClockDomain, data: D, var waitTime: Int, monitorWhen: => Boolean) {
    val callbacks = ArrayBuffer[(D) => Unit]()

    def addCallback(callback: (D) => Unit): this.type = {
      callbacks += callback
      this
    }

    clockDomain.onSamplings {
      if (waitTime == 0) {
        if (monitorWhen) {
          callbacks.foreach(_(data))
        }
      } else {
        waitTime -= 1
      }
    }
  }
}
