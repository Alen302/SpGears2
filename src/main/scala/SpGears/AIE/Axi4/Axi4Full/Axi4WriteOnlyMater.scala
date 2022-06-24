package SpGears.AIE.Axi4.Axi4Full

import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba4.axi._

import spinal.core.sim._

/** this is a stream to axi4 interface define
  *
  * @param addressWidth
  *   The width of address which we use to write data to axiSlave
  * @param maxBurstLen
  *   The maximum number of transfer within a burst.
  * @param dataWidth
  *   The width of each data from stream interface
  */
case class Axi4WriteOnlyMaster(addressWidth: Int = 32, maxBurstLen: Int = 256, dataWidth: Int = 32) extends Bundle {

  // ********************set the config information*******************
  val config = Axi4Config(
    addressWidth = addressWidth,
    dataWidth    = dataWidth,
    useId        = false,
    useLock      = false
  )

  // *******************declare the interface we need******************
  // dataType define
  val transferDataType = Bits(dataWidth bits)

  // interface define
  val start          = in Bool ()
  val burstLen       = in UInt (8 bits)
  val startAddr      = in UInt (addressWidth bits)
  val offset         = in UInt (addressWidth bits)
  val pathNumb       = in UInt (8 bits)
  val stream         = slave Stream transferDataType
  val full           = master(Axi4WriteOnly(config))
  val transInterrupt = out Bool ()

  // the start signal which indicate a burst can be initiated
  def startSignal: Bool = start

  // the burst length information signal
  def burstLength: UInt = burstLen

  // the start address signal
  def startAddressSignal: UInt = startAddr

  // the offset address signal
  def offsetAddressSignal: UInt = offset

  // the data path number(stream data path) the maximum number is 255(means that have 256 path)
  def dataPathNumber: UInt = pathNumb

  // the stream data channel
  def StreamInterface: Stream[Bits] = stream

  // the axi4 write channel
  def writeOnlyMasterInterface: Axi4WriteOnly = full

  // the feedback signal for interrupt
  def interruptSignal: Bool = transInterrupt

  // *********define some signal by using port signal for map**********

  // record the times of write op in write channel
  val writeHandshakeCounter: Counter = Counter(0, maxBurstLen)

  // define a signal(named startSendSignal) which indicate a burst data can be send
  // it also mean that when this signal is low, the input and output interface will not handshake

  // we want to start send data by recognizing the narrow pulse of startSignal
  // so we define a internalClockDomain for it
  val resetStartSendSignal: Bool = writeOnlyMasterInterface.w.payload.last.fall()
  val startSendClockDomainConfig = ClockDomainConfig(clockEdge = RISING, resetKind = ASYNC, resetActiveLevel = HIGH)
  val startSendClockDomain: ClockDomain =
    ClockDomain(clock = startSignal, reset = resetStartSendSignal || !ClockDomain.current.readResetWire, config = startSendClockDomainConfig)
  val startSendArea = new ClockingArea(startSendClockDomain) {
    val startSendSignal: Bool = RegNext(True) init (False)
  }.setName("")
  startSendArea.startSendSignal.addTag(crossClockDomain)

  // record the times of handshake between streamInterface and streamDataBuffer
  val getDataHandshakeCounter: Counter = Counter(0, maxBurstLen)

  // register the burstLength
  val burstLengthReg = RegNext(burstLength) init U(maxBurstLen - 1, 8 bits)

  // *************stream to Axi4WriteOnlyMaster channel map****************

  // define a streamFifo as buffer for storing the stream data
  val streamDataBuffer = StreamFifo(transferDataType, 256)

  // connect stream interface and dataBuffer
  StreamInterface.ready            := False
  streamDataBuffer.io.push.payload := StreamInterface.payload
  streamDataBuffer.io.push.valid   := False
  when(getDataHandshakeCounter < burstLengthReg && startSendArea.startSendSignal) {
    StreamInterface >> streamDataBuffer.io.push
  }

  // recording the number of stream data which be send into buffer in a burst
  when(streamDataBuffer.io.push.fire) {
    getDataHandshakeCounter.increment()
  }
  // when a burst complete(the write response channel handshake successful), reset this counter for next burst transfer
  when(writeOnlyMasterInterface.b.fire) {
    getDataHandshakeCounter.clear()
  }

  // ********************the write address channel map*********************

  // ------------------------------handshake logic---------------------------

  // indicate whether is a new Burst transfer
  val newBurst = RegInit(True)
  when(writeOnlyMasterInterface.b.fire) {
    newBurst := True
  }

  // Asynchronous LOW Level reset
  val controlAwValidSignal = RegInit(False)
  when(ClockDomain.current.readResetWire && startSendArea.startSendSignal) {
    when(writeOnlyMasterInterface.aw.fire) {
      controlAwValidSignal := False
      newBurst             := False
    }.elsewhen(newBurst) {
      controlAwValidSignal := True
    }
  }

  writeOnlyMasterInterface.aw.valid := controlAwValidSignal

  // ----------------------------- payload logic------------------------------
  // the writeMasterInterface's aw channel's addr port should give a startAddress for each burst
  // send address according to the specific address port(startAddr and offset) for each burst
  val iterateCounter   = Counter(0, 255)
  val isInitialIterate = iterateCounter === U(0, 8 bits)
  isInitialIterate.simPublic()
  val isRefreshAddr = RegInit(True)

  when(writeOnlyMasterInterface.b.fire) { isRefreshAddr := True }
  when(writeOnlyMasterInterface.b.fire) { iterateCounter.increment() }
  when(iterateCounter === dataPathNumber && writeOnlyMasterInterface.b.fire) { iterateCounter.clear() }

  val offsetAddressReg = RegInit(U(0, addressWidth bits))
  val finalAddressReg  = RegInit(U(0, addressWidth bits))

  when(isRefreshAddr && startSendArea.startSendSignal && isInitialIterate) {
    offsetAddressReg := offsetAddressSignal
    finalAddressReg  := startAddressSignal
    isRefreshAddr    := False
  }
  when(isRefreshAddr && startSendArea.startSendSignal && !isInitialIterate) {
    finalAddressReg := finalAddressReg + offsetAddressReg
    isRefreshAddr   := False
  }
  writeOnlyMasterInterface.aw.payload.addr := finalAddressReg

  import Axi4.burst._

  writeOnlyMasterInterface.aw.payload.region := B(0, 4 bits)
  writeOnlyMasterInterface.aw.payload.burst  := INCR
  writeOnlyMasterInterface.aw.payload.len    := burstLengthReg - U(1, 8 bits)
  writeOnlyMasterInterface.aw.payload.size   := U(log2Up(config.bytePerWord), 3 bits)
  writeOnlyMasterInterface.aw.payload.cache  := B(0, 4 bits)
  writeOnlyMasterInterface.aw.payload.qos    := B(0, 4 bits)
  writeOnlyMasterInterface.aw.payload.prot   := B(0, 3 bits)

  // *************************the write channel map*****************************

  // ----------------------payload and handshake logic-------------------------

  writeOnlyMasterInterface.w.valid        := False
  writeOnlyMasterInterface.w.payload.data := streamDataBuffer.io.pop.payload
  streamDataBuffer.io.pop.ready           := False
  when(writeHandshakeCounter < burstLengthReg && startSendArea.startSendSignal) {
    val pipePopInterface = streamDataBuffer.io.pop.stage()
    pipePopInterface.ready                  := writeOnlyMasterInterface.w.ready
    writeOnlyMasterInterface.w.valid        := pipePopInterface.valid
    writeOnlyMasterInterface.w.payload.data := pipePopInterface.payload
  }
  // recording the data which send to outside by axi4 interface
  when(writeOnlyMasterInterface.w.fire) {
    writeHandshakeCounter.increment()
  }
  // when a burst complete reset counter for next burst
  when(writeOnlyMasterInterface.b.fire) {
    writeHandshakeCounter.clear()
  }

  // default setting is not use mask with write data
  writeOnlyMasterInterface.w.setStrb()
  writeOnlyMasterInterface.w.last := writeHandshakeCounter === burstLengthReg - U(1, 8 bits)

  // ***************************The write respond map***************************
  // when the first transfer start in a burst, we can receive the bResp signal

  val controlBReady = RegInit(False)
  when(writeOnlyMasterInterface.w.valid) {
    controlBReady := True
  }
  when(writeOnlyMasterInterface.b.fire) {
    controlBReady := False
  }
  writeOnlyMasterInterface.b.ready := controlBReady

  // **************************setting interrupt signal**************************
  // indicate this burst complete, it be defined as a pulse signal
  val isBurstComplete = RegNext(writeOnlyMasterInterface.b.fire)
  when(isBurstComplete) {
    isBurstComplete := False
  }
  interruptSignal := isBurstComplete
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
        if (port.getName().startsWith(name + "_full_")) port.setName(port.getName().replaceFirst(name + "_full_", "m_axi_"))
        if (port.getName().startsWith(name + "_stream")) port.setName(port.getName().replaceFirst(name + "_stream", "s_axis_"))
        if (port.getName().startsWith("io_" + name + "_full_")) port.setName(port.getName().replaceFirst("io_" + name + "_full_", "m_axi_"))
        if (port.getName().startsWith("io_" + name + "_stream")) port.setName(port.getName().replaceFirst("io_" + name + "_stream", "s_axis_"))
        if (port.getName().startsWith(name + "_start")) port.setName(port.getName().replaceFirst(name + "_start", "start"))
        if (port.getName().startsWith(name + "_burstLen")) port.setName(port.getName().replaceFirst(name + "_burstLen", "burstLen"))
        if (port.getName().startsWith(name + "_offset")) port.setName(port.getName().replaceFirst(name + "_offset", "offset"))
        if (port.getName().startsWith(name + "_transInterrupt")) port.setName(port.getName().replaceFirst(name + "_transInterrupt", "transInterrupt"))
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
