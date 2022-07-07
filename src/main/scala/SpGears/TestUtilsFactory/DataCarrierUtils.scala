package SpGears.TestUtilsFactory

import spinal.core._
import spinal.core.sim._
import spinal.lib._
import spinal.lib.sim.SimData

import scala.util.Random._
import scala.collection.mutable._

object DataCarrierUtils {

  object StreamMonitor {
    def apply[T <: Data](clockDomain: ClockDomain, stream: Stream[T], monitorWhen: => Boolean)(callback: (T) => Unit) = new StreamMonitor(clockDomain, stream, monitorWhen).addCallback(callback)
  }

  class StreamMonitor[T <: Data](clockDomain: ClockDomain, stream: Stream[T], monitorWhen: => Boolean) {
    val callbacks = ArrayBuffer[(T) => Unit]()

    def addCallback(callback: (T) => Unit): this.type = {
      callbacks += callback
      this
    }

    clockDomain.onSamplings {
      val valid = stream.valid.toBoolean
      val ready = stream.ready.toBoolean

      if (valid && ready && monitorWhen) {
        callbacks.foreach(_(stream.payload))
      }
    }

  }

  object StreamMasterDriver {
    def apply[T <: Data](clockDomain: ClockDomain, stream: Stream[T], alwaysDrive: Boolean, driveWhen: => Boolean)(driver: (T) => Boolean) =
      new StreamMasterDriver(clockDomain, stream, alwaysDrive, driveWhen, driver)
  }

  class StreamMasterDriver[T <: Data](clockDomain: ClockDomain, stream: Stream[T], alwaysDrive: Boolean, driveWhen: => Boolean, var driver: (T) => Boolean) {
    var transactionDelay: () => Int = () => {
      val x = nextDouble()
      (x * x * 10).toInt
    }

    var state = 0
    var delay = transactionDelay()
    if (alwaysDrive) { delay = 0 }

    stream.valid #= false
    stream.payload.randomize()

    def fsm(): Unit = {
      state match {
        case 0 => {
          if (delay == 0) {
            state += 1
            fsm()
          } else {
            delay -= 1
          }
        }
        case 1 => {
          if (driver(stream.payload)) {
            stream.valid #= true
            state += 1
          }
        }
        case 2 => {
          if (stream.ready.toBoolean) {
            stream.valid #= false
            stream.payload.randomize()
            if (alwaysDrive) {
              delay = 0
            } else {
              delay = transactionDelay()
            }
            state = 0
            fsm()
          }
        }
      }
    }

    clockDomain.onSamplings(if (driveWhen) fsm)

    def reset() {
      state = 0
      stream.valid #= false
    }
  }

  object StreamSlaveDriver {
    def apply[T <: Data](clockDomain: ClockDomain, stream: Stream[T], alwaysDrive: Boolean, driveWhen: => Boolean) = new StreamSlaveDriver(stream, clockDomain, alwaysDrive, driveWhen)
  }

  class StreamSlaveDriver[T <: Data](stream: Stream[T], clockDomain: ClockDomain, alwaysDrive: Boolean, driveWhen: => Boolean) {
    var factor = 0.5f
    clockDomain.onSamplings {
      if (driveWhen) {
        if (alwaysDrive) {
          stream.ready #= true
        } else {
          stream.ready #= nextFloat() < factor
        }
      } else {
        stream.ready #= false
      }
    }
  }

  object StreamTransactionAssert {
    def apply[T <: Data](clockDomain: ClockDomain, stream: Stream[T]) = new StreamTransactionAssert(clockDomain, stream)
  }

  class StreamTransactionAssert[T <: Data](clockDomain: ClockDomain, stream: Stream[T]) {
    var valid            = false
    var payload: SimData = null

    import spinal.core.sim._

    clockDomain.onSamplings {
      if (!valid) {
        if (stream.valid.toBoolean) {
          valid   = true
          payload = SimData.copy(stream.payload)
        }
      } else {
        assert(payload.equals(SimData.copy(stream.payload)))
      }
      if (stream.ready.toBoolean) {
        valid = false
      }
    }
  }

  object FlowMonitor {
    def apply[T <: Data](clockDomain: ClockDomain, flow: Flow[T], monitorWhen: => Boolean)(callback: (T) => Unit) = new FlowMonitor(clockDomain, flow, monitorWhen).addCallback(callback)
  }

  class FlowMonitor[T <: Data](clockDomain: ClockDomain, flow: Flow[T], monitorWhen: => Boolean) {
    val callbacks = ArrayBuffer[(T) => Unit]()

    def addCallback(callback: (T) => Unit): this.type = {
      callbacks += callback
      this
    }

    clockDomain.onSamplings {
      if (flow.valid.toBoolean && monitorWhen) callbacks.foreach(_(flow.payload))
    }
  }

  object FlowMasterDriver {
    def apply[T <: Data](clockDomain: ClockDomain, flow: Flow[T], alwaysDrive: Boolean, driveWhen: => Boolean)(driver: (T) => Boolean) =
      new FlowMasterDriver(clockDomain, flow, alwaysDrive, driveWhen, driver)
  }

  class FlowMasterDriver[T <: Data](clockDomain: ClockDomain, flow: Flow[T], alwaysDrive: Boolean, driveWhen: => Boolean, var driver: (T) => Boolean) {
    var transactionDelay: () => Int = () => {
      val x = nextDouble()
      (x * x * 10).toInt
    }

    var state = 0
    var delay = transactionDelay()
    if (alwaysDrive) { delay = 0 }
    flow.valid #= false
    flow.payload.randomize()

    def fsm(): Unit = {
      state match {
        case 0 => {
          if (delay == 0) {
            state += 1
            fsm()
          } else {
            delay -= 1
          }
        }
        case 1 => {
          if (driver(flow.payload)) {
            flow.valid #= true
            state += 1
          }
        }
        case 2 => {
          flow.valid #= false
          flow.payload.randomize()
          if (alwaysDrive) {
            delay = 0
          } else {
            delay = transactionDelay()
          }
          state = 0
          fsm()
        }
      }
    }

    clockDomain.onSamplings(if (driveWhen) fsm)

    def reset() {
      state = 0
      flow.valid #= false
    }
  }
}
