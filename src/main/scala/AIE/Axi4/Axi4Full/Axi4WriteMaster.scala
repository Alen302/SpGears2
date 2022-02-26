package AIE.Axi4.Axi4Full

import spinal.core.sim._
import spinal.core.{U, _}
import spinal.lib._
import spinal.lib.bus.amba4.axi._


/**
 * this is a stream to axi4 interface define
 *
 * @param addressWidth The width of address which we use to write data to ddr
 * @param number       The total number of data from fifo in each transfer in a burst
 * @param len          The total number of data transfers within a burst.
 * @param widthPerData The width of each data from fifo
 */
case class Axi4WriteMaster(addressWidth: Int, len: Int = 256, widthPerData: Int = 32) extends Bundle {

  require(len > 0 & len <= 256, "the define of the number of transfer in a burst is illegal !")
  // -------------------set the config information--------------------
  val config = Axi4Config(
    addressWidth = addressWidth,
    dataWidth = widthPerData,
    useId = false,
    useLock = false
  )

  // ------------------declare the interface we need-------------------
  val stream = slave Stream Bits(widthPerData bits)
  val t = master(Axi4(config))

  def StreamInterface: Stream[Bits] = stream

  def writeMasterInterface: Axi4 = t

  // --------------------the interconnection logic---------------------

  // record the times of write op in write channel
  val writeCounter = Counter(0, len)

  // record the times of handshake between fifo and Axi4Module.Axi4Full.Axi4WriteMaster interface
  val handshakeCounter: Counter = Counter(0, len)

  // ----------------fifo to Axi4Module.Axi4Full.Axi4WriteMaster channel map-------------------

  // register the fifo data (or fifo data buffer)

  val fifoDataBuffer: Vec[Bits] = Vec(List.tabulate(len)(i => RegInit(B(0, widthPerData bits))))

  // handshake between fifo and Axi4Module.Axi4Full.Axi4WriteMaster
  when(StreamInterface.fire) {
    fifoDataBuffer(handshakeCounter.resized) := StreamInterface.payload
    handshakeCounter.increment()
  }

  StreamInterface.ready := False
  when(!handshakeCounter.willOverflowIfInc) {
    StreamInterface.ready := True
  }

  // when the write channel complete a burst, the buffer can receive next burst data from fifo

  when(writeCounter.willOverflowIfInc) {
    handshakeCounter.clear()
  }


  // ----------------------the write address channel map----------------------

  // compute the start address for each transfer in each burst
  val address: UInt = Reg(UInt(addressWidth bits)) init (U(0, addressWidth bits)) simPublic()
  when(writeMasterInterface.w.fire) {
    address := Axi4.incr(address,
      writeMasterInterface.aw.burst,
      writeMasterInterface.aw.len,
      writeMasterInterface.aw.size,
      config.bytePerWord)
  }
  // handshake logic
  val controlAwValid = RegInit(False)

  val isTransferAfterReset = RegInit(True)
  when(ClockDomain.current.readResetWire) {
    isTransferAfterReset := False
  }
  // Asynchronous LOW Level reset
  // TODO: fix
  when(ClockDomain.current.readResetWire) {
    when(writeMasterInterface.aw.fire) {
      controlAwValid := False
    }
    when(writeCounter.willOverflowIfInc || isTransferAfterReset) {
      controlAwValid := True
    }
  }

  writeMasterInterface.aw.valid := controlAwValid


  // data logic
  val initialAddress = Reg(UInt(addressWidth bits)) init (U(0, addressWidth bits))

  /* the writeMasterInterface's aw channel's addr port
     should give a startAddress for each burst
   */
  when(writeCounter.willOverflowIfInc) {
    initialAddress := address
  }
  // when a burst complete, the start address should change
  when(writeCounter.willOverflowIfInc) {
    writeMasterInterface.aw.payload.addr := address
  } otherwise {
    writeMasterInterface.aw.payload.addr := initialAddress
  }

  // other logic

  import Axi4.burst._

  writeMasterInterface.aw.payload.region := B(0, 4 bits)
  writeMasterInterface.aw.payload.burst := INCR
  writeMasterInterface.aw.payload.len := U(len - 1, 8 bits)
  writeMasterInterface.aw.payload.size := U(log2Up(config.bytePerWord), 3 bits)
  writeMasterInterface.aw.payload.cache := B(0, 4 bits)
  writeMasterInterface.aw.payload.qos := B(0, 4 bits)
  writeMasterInterface.aw.payload.prot := B(0, 3 bits)

  // --------------------------the write channel map--------------------------

  // data logic
  writeMasterInterface.w.payload.data := B(0, widthPerData bits)
  when(writeMasterInterface.w.valid) {
    writeMasterInterface.w.payload.data := fifoDataBuffer(writeCounter.resized)
  }
  when(writeMasterInterface.w.fire) {
    writeCounter.increment()
  }

  // handshake logic
  writeMasterInterface.w.valid := False
  when(handshakeCounter > U(0) & writeCounter < handshakeCounter & !writeCounter.willOverflowIfInc) {
    writeMasterInterface.w.valid := True
  }
  // when a burst complete reset counter for next burst
  when(writeCounter.willOverflowIfInc) {
    writeCounter.clear()
  }

  // other logic
  writeMasterInterface.w.setStrb()
  writeMasterInterface.w.last := writeCounter === U(len - 1)

  // ------------------------The write respond map---------------------------
  // when the first transfer start in a burst, we can receive the bResp signal
  val controlBReady = RegInit(False)
  when(writeMasterInterface.w.valid.rise()) {
    controlBReady := True
  }
  when(writeMasterInterface.b.fire) {
    controlBReady := False
  }
  writeMasterInterface.b.ready := controlBReady


  // --------------------The read address channel map -----------------------
  // in this interface, we not read the slave, so we can set the default value for this channel
  writeMasterInterface.ar.payload.addr := U(0, addressWidth bits)
  writeMasterInterface.ar.payload.region := B(0, 4 bits)
  writeMasterInterface.ar.payload.burst := INCR
  writeMasterInterface.ar.payload.len := U(len - 1, 8 bits)
  writeMasterInterface.ar.payload.size := U(config.bytePerWord, 3 bits)
  writeMasterInterface.ar.payload.cache := B(0, 4 bits)
  writeMasterInterface.ar.payload.qos := B(0, 4 bits)
  writeMasterInterface.ar.payload.prot := B(0, 3 bits)
  writeMasterInterface.ar.valid := False

  // ------------------------The read channel map-----------------------------
  // in this interface, noting to do
  writeMasterInterface.r.ready := False
}


object Axi4WriteMasterSpecRenamer {
  def apply(that: Axi4WriteMaster): Unit = {
    def doIt() = {
      val name: String = that.getName()
      that.flatten.foreach { port =>
        port.setName(port.getName().replace("_payload_", ""))
        port.setName(port.getName().replace("_payload", "payload"))
        port.setName(port.getName().replace("_valid", "valid"))
        port.setName(port.getName().replace("_ready", "ready"))
        if (port.getName().startsWith(name + "_t_")) port.setName(port.getName().replaceFirst(name + "_t_", "m_axi_"))
        if (port.getName().startsWith(name + "_stream")) port.setName(port.getName().replaceFirst(name + "_stream", "s_axis_"))
        if (port.getName().startsWith("io_" + name + "_t_")) port.setName(port.getName().replaceFirst("io_" + name + "_t_", "m_axi_"))
        if (port.getName().startsWith("io_" + name + "_stream")) port.setName(port.getName().replaceFirst("io_" + name + "_stream", "s_axis_"))
      }
    }

    if (Component.current == that.component) {
      that.component.addPrePopTask(() => doIt)
    } else {
      doIt
    }
  }


  def apply(that: Axi4): Unit = {
    def doIt() = {
      val name: String = that.getName()
      that.flatten.foreach { port =>
        port.setName(port.getName().replace("_payload_", ""))
        port.setName(port.getName().replace("_valid", "valid"))
        port.setName(port.getName().replace("_ready", "ready"))
        if (port.getName().startsWith(name + "_")) port.setName(port.getName().replaceFirst(name + "_", "m_axi_"))
        if (port.getName().startsWith("io_" + name + "_")) port.setName(port.getName().replaceFirst("io_" + name + "_", "m_axi_"))
      }
    }

    if (Component.current == that.component) {
      that.component.addPrePopTask(() => doIt)
    } else {
      doIt
    }
  }

}
