package TestUtils

import spinal.core._
import spinal.lib._

trait Testable[Di <: Data, Do <: Data] {
  val dataIn: Flow[Di]
  val dataOut: Flow[Do]
  val latency: Int
}
