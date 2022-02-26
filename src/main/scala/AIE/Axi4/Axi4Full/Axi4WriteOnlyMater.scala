package AIE.Axi4.Axi4Full

import spinal.lib._
import spinal.core._
import spinal.lib.bus.amba4.axi._
import spinal.core.sim._


/**
 * this is a stream to axi4 interface define
 *
 * @param addressWidth The width of address which we use to write data to ddr
 * @param number       The total number of data from fifo in each transfer in a burst
 * @param len          The total number of data transfers within a burst.
 * @param widthPerData The width of each data from fifo
 */
case class Axi4WriteOnlyMaster(addressWidth: Int, len: Int = 256, widthPerData: Int = 32) extends Bundle {

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
  val t = master(Axi4WriteOnly(config))

  def StreamInterface: Stream[Bits] = stream

  def writeOnlyMasterInterface: Axi4WriteOnly = t

  // --------------------the interconnection logic---------------------

  // record the times of write op in write channel
  val writeCounter = Counter(0, len)

  // record the times of handshake between fifo and Axi4WriteMaster interface
  val handshakeCounter: Counter = Counter(0, len)

  // ----------------fifo to Axi4WriteMaster channel map-------------------

  // register the fifo data (or fifo data buffer)

  val fifoDataBuffer: Vec[Bits] = Vec(List.tabulate(len)(i => RegInit(B(0, widthPerData bits))))

  // handshake between fifo and Axi4WriteMaster
  when(StreamInterface.fire) {
    fifoDataBuffer(handshakeCounter.resized) := StreamInterface.payload
    handshakeCounter.increment()
  }

  StreamInterface.ready := False
  when(!handshakeCounter.willOverflowIfInc) {
    StreamInterface.ready := True
  }

  // when the write channel complete a burst, the buffer can receive next burst data from fifo

  import Axi4.resp._

  when(writeCounter.willOverflowIfInc) {
    handshakeCounter.clear()
  }


  // ----------------------the write address channel map----------------------

  // compute the start address for each transfer in each burst and store it
  val address: UInt = Reg(UInt(addressWidth bits)) init (U(0, addressWidth bits))
  address.setName("debugAddress").simPublic()
  when(writeOnlyMasterInterface.w.fire) {
    address := Axi4.incr(address,
      writeOnlyMasterInterface.aw.burst,
      writeOnlyMasterInterface.aw.len,
      writeOnlyMasterInterface.aw.size,
      config.bytePerWord)
  }
  // handshake logic
  val controlAwValid = RegInit(False)

  val isTransferAfterReset = RegInit(True)
  when(ClockDomain.current.readResetWire) {
    isTransferAfterReset := False
  }
  // Asynchronous LOW Level reset
  when(ClockDomain.current.readResetWire) {
    when(writeOnlyMasterInterface.aw.fire) {
      controlAwValid := False
    }
    when(writeCounter.willOverflowIfInc || isTransferAfterReset) {
      controlAwValid := True
    }
  }

  writeOnlyMasterInterface.aw.valid := controlAwValid
  writeCounter.value.setName("writeCounter").simPublic()

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
    writeOnlyMasterInterface.aw.payload.addr := address
  } otherwise {
    writeOnlyMasterInterface.aw.payload.addr := initialAddress
  }

  // other logic

  import Axi4.burst._

  writeOnlyMasterInterface.aw.payload.region := B(0, 4 bits)
  writeOnlyMasterInterface.aw.payload.burst := INCR
  writeOnlyMasterInterface.aw.payload.len := U(len - 1, 8 bits)
  writeOnlyMasterInterface.aw.payload.size := U(log2Up(config.bytePerWord), 3 bits)
  writeOnlyMasterInterface.aw.payload.cache := B(0, 4 bits)
  writeOnlyMasterInterface.aw.payload.qos := B(0, 4 bits)
  writeOnlyMasterInterface.aw.payload.prot := B(0, 3 bits)

  // --------------------------the write channel map--------------------------

  // data logic
  writeOnlyMasterInterface.w.payload.data := B(0, widthPerData bits)
  when(writeOnlyMasterInterface.w.valid) {
    writeOnlyMasterInterface.w.payload.data := fifoDataBuffer(writeCounter.resized)
  }
  when(writeOnlyMasterInterface.w.fire) {
    writeCounter.increment()
  }

  // handshake logic
  handshakeCounter.value.setName("handshakeCounter").simPublic()
  writeOnlyMasterInterface.w.valid := False
  when(handshakeCounter > U(0) & writeCounter < handshakeCounter & !writeCounter.willOverflowIfInc) {
    writeOnlyMasterInterface.w.valid := True
  }
  // when a burst complete reset counter for next burst
  when(writeCounter.willOverflowIfInc) {
    writeCounter.clear()
  }

  // other logic
  writeOnlyMasterInterface.w.setStrb()
  writeOnlyMasterInterface.w.last := writeCounter === U(len - 1)

  // ------------------------The write respond map---------------------------
  // when the first transfer start in a burst, we can receive the bResp signal

  val controlBReady = RegInit(False)
  when(writeOnlyMasterInterface.w.valid.rise()) {
    controlBReady := True
  }
  when(writeOnlyMasterInterface.b.fire) {
    controlBReady := False
  }
  writeOnlyMasterInterface.b.ready := controlBReady


}


object Axi4WriteOnlyMasterSpecRenamer {
  def apply(that: Axi4WriteOnlyMaster): Unit = {
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

  def apply(that: Axi4WriteOnly): Unit = {
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

