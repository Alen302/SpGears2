package SpGears.TestUtils.UVM

import spinal.core._
import spinal.core.sim._
import spinal.lib._
import spinal.lib.sim.SimData

import scala.util.Random._
import scala.collection.mutable._

object DataCarrierComponents {

  object StreamMonitor {
    def apply[T <: Data](clockDomain: ClockDomain, stream: Stream[T], latency: Int, monitorGap: Int, monitorWhen: => Boolean)(callback: T => Unit): StreamMonitor[T] = new StreamMonitor(clockDomain, stream, latency, monitorGap, monitorWhen).addCallback(callback)
  }

  class StreamMonitor[T <: Data](clockDomain: ClockDomain, stream: Stream[T], latency: Int, monitorGap: Int, monitorWhen: => Boolean) {
    var initialDelay: Int = latency
    require(initialDelay >= 0, "The stream monitor latency should great or equal to 0 !")
    var interMonitorDelay: Int = monitorGap
    require(interMonitorDelay >= 1, "The stream monitor gap should great or equal to 1 !")

    val callbacks: ArrayBuffer[T => Unit] = ArrayBuffer[T => Unit]()

    def addCallback(callback: T => Unit): this.type = {
      callbacks += callback
      this
    }

    clockDomain.onSamplings {
      val valid = stream.valid.toBoolean
      val ready = stream.ready.toBoolean

      if (monitorWhen) {
        if (initialDelay == 0) {
          if (interMonitorDelay == 1 && valid && ready) {
            callbacks.foreach(_(stream.payload))
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

  object StreamMasterDriver {
    def apply[T <: Data](clockDomain: ClockDomain, stream: Stream[T], latency: Int, driveGap: Int, randomMode: Boolean, driveWhen: => Boolean)(driver: T => Boolean) =
      new StreamMasterDriver(clockDomain, stream, latency, driveGap, randomMode, driveWhen, driver)
  }

  class StreamMasterDriver[T <: Data](clockDomain: ClockDomain, stream: Stream[T], latency: Int, driveGap: Int, randomMode: Boolean, driveWhen: => Boolean, var driver: T => Boolean) {
    var initialDelay: Int = latency
    require(initialDelay >= 0, "The stream master driver latency should great or equal to 0 !")
    var interDriverDelay: Int = driveGap
    require(interDriverDelay >= 1, "The stream driver gap should great or equal to 1 !")

    var genRandomDelay: () => Int = () => {
      val x = nextDouble()
      (x * x * 10 + 1).toInt
    }

    var state = 0
    if (randomMode) { interDriverDelay = genRandomDelay() }

    stream.valid #= false
    stream.payload.randomize()

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
          if (driver(stream.payload)) {
            stream.valid #= true
          } else {
            stream.valid #= false
          }
          state += 1
        case 2 =>
          if (stream.ready.toBoolean) {
            stream.valid #= false
            stream.payload.randomize()
            if (!randomMode) {
              interDriverDelay = driveGap
            } else {
              interDriverDelay = genRandomDelay()
            }
            state = 0
            fsm()
          }
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

    def reset(): Unit = {
      state = 0
      stream.valid #= false
    }
  }

  object StreamSlaveDriver {
    def apply[T <: Data](clockDomain: ClockDomain, stream: Stream[T], latency: Int, driveGap: Int, randomMode: Boolean, driveWhen: => Boolean, activeLevel: Boolean = true) = new StreamSlaveDriver(stream, clockDomain, latency, driveGap, randomMode, driveWhen, activeLevel)
  }

  class StreamSlaveDriver[T <: Data](stream: Stream[T], clockDomain: ClockDomain, latency: Int, driveGap: Int, randomMode: Boolean, driveWhen: => Boolean, activeLevel: Boolean) {
    var initialDelay: Int = latency
    require(initialDelay >= 0, "The stream slave driver latency should great or equal to 0 !")
    var interDriverDelay: Int = driveGap
    require(interDriverDelay >= 1, "The stream driver gap should great or equal to 1 !")

    var factor = 0.5f
    clockDomain.onSamplings {
      if (driveWhen) {
        if (initialDelay == 0) {
          if (!randomMode) {
            if (interDriverDelay == 1) {
              stream.ready #= activeLevel
              interDriverDelay = driveGap
            } else {
              interDriverDelay -= 1
            }
          } else {
            stream.ready #= nextFloat() < factor
          }
        } else {
          stream.ready #= !activeLevel
          initialDelay -= 1
        }
      }
    }
  }

  object StreamTransactionAssert {
    def apply[T <: Data](clockDomain: ClockDomain, stream: Stream[T]) = new StreamTransactionAssert(clockDomain, stream)
  }

  class StreamTransactionAssert[T <: Data](clockDomain: ClockDomain, stream: Stream[T]) {
    var valid            = false
    var payload: SimData = _

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
    def apply[T <: Data](clockDomain: ClockDomain, flow: Flow[T], latency: Int, monitorGap: Int, monitorWhen: => Boolean)(callback: T => Unit): FlowMonitor[T] = new FlowMonitor(clockDomain, flow, latency, monitorGap, monitorWhen).addCallback(callback)
  }

  class FlowMonitor[T <: Data](clockDomain: ClockDomain, flow: Flow[T], latency: Int, monitorGap: Int, monitorWhen: => Boolean) {
    var initialDelay: Int = latency
    require(initialDelay >= 0, "The flow monitor latency should great or equal to 0 !")
    var interMonitorDelay: Int = monitorGap
    require(interMonitorDelay >= 1, "The flow monitor gap should great or equal to 1 !")

    val callbacks: ArrayBuffer[T => Unit] = ArrayBuffer[T => Unit]()

    def addCallback(callback: T => Unit): this.type = {
      callbacks += callback
      this
    }

    clockDomain.onSamplings {
      if (monitorWhen) {
        if (initialDelay == 0) {
          if (interMonitorDelay == 1 && flow.valid.toBoolean) {
            callbacks.foreach(_(flow.payload))
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

  object FlowMasterDriver {
    def apply[T <: Data](clockDomain: ClockDomain, flow: Flow[T], latency: Int, driveGap: Int, randomMode: Boolean, driveWhen: => Boolean)(driver: T => Boolean) =
      new FlowMasterDriver(clockDomain, flow, latency, driveGap, randomMode, driveWhen, driver)
  }

  class FlowMasterDriver[T <: Data](clockDomain: ClockDomain, flow: Flow[T], latency: Int, driveGap: Int, randomMode: Boolean, driveWhen: => Boolean, var driver: T => Boolean) {
    var initialDelay: Int = latency
    require(initialDelay >= 0, "The flow master driver latency should great or equal to 0 !")
    var interDriverDelay: Int = driveGap
    require(interDriverDelay >= 1, "The flow driver gap should great or equal to 1 !")

    var genRandomDelay: () => Int = () => {
      val x = nextDouble()
      (x * x * 10 + 1).toInt
    }

    var state = 0
    if (randomMode) { interDriverDelay = genRandomDelay() }
    flow.valid #= false
    flow.payload.randomize()

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
          if (driver(flow.payload)) {
            flow.valid #= true
          } else {
            flow.valid #= false
          }
          state += 1
        case 2 =>
          flow.valid #= false
          flow.payload.randomize()
          if (!randomMode) {
            interDriverDelay = driveGap
          } else {
            interDriverDelay = genRandomDelay()
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

    def reset(): Unit = {
      state = 0
      flow.valid #= false
    }
  }
}
