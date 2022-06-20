package TestUtils

import spinal.core._
import spinal.lib._
import spinal.core.sim._

import scala.collection.mutable._

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
