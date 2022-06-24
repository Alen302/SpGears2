package SpGears.TestUtilsFactory

import spinal.core._
import spinal.core.sim._

import scala.collection.mutable._
import scala.util.Random

object DataDriver {
  def apply[D <: Data](data: D, clockDomain: ClockDomain, waitTime: Int)(driver: (D) => Boolean) = new DataDriver(data, clockDomain, driver, waitTime)
}

class DataDriver[D <: Data](data: D, clockDomain: ClockDomain, var driver: (D) => Boolean, waitTime: Int = -1) {
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

  clockDomain.onSamplings(fsm)
}

object DataMonitor {
  def apply[D <: Data](data: D, clockDomain: ClockDomain, waitTime: Int)(callback: (D) => Unit) =
    new DataMonitor(data, clockDomain, waitTime).addCallback(callback)
}

class DataMonitor[D <: Data](data: D, clockDomain: ClockDomain, var waitTime: Int = -1) {
  val callbacks = ArrayBuffer[(D) => Unit]()

  def addCallback(callback: (D) => Unit): this.type = {
    callbacks += callback
    this
  }

  clockDomain.onSamplings {
    if (waitTime == -1) {
      callbacks.foreach(_(data))
    } else {
      waitTime -= 1
    }
  }
}
