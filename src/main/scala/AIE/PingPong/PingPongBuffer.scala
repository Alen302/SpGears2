package AIE.PingPong

import AIE.Axi4.Axi4Full.{Axi4WriteOnlyMaster, Axi4WriteOnlyMasterSpecRenamer}
import spinal.lib._
import spinal.core._
import spinal.lib.fsm._
import spinal.core.sim._
import spinal.lib.bus.amba4.axi.{Axi4Config, Axi4WriteOnly}

import scala.collection.mutable.ArrayBuffer

case class PingPongBuffer(addressWidth: Int = 32, dataWidth: Int = 32, bufferSize: Int = 256) extends Component {
  // define this Component's port

  // slave side
  val streamIn = slave Stream Bits(dataWidth bits)
  val startIn = in Bool()
  val bufferDepthIn = in UInt (8 bits)
  val interruptOut = out Bool()
  // val dataOffsetIn = in UInt(addressWidth bits)
  // master side
  val streamOut = master Stream Bits(dataWidth bits)
  val startOut = out Bool()
  val bufferDepthOut = out UInt (8 bits)
  val interruptIn = in Bool()
  // val dataOffsetOut = out UInt(addressWidth bits)

  def inputStreamInterface: Stream[Bits] = streamIn

  def inputStartSignal: Bool = startIn

  def inputBufferDepth: UInt = bufferDepthIn

  def outputInterruptSignal: Bool = interruptOut

  // def inputDataOffsetSignal: UInt = dataOffsetIn

  def outputStreamInterface: Stream[Bits] = streamOut

  def outputStartSignal: Bool = startOut

  def outputBufferDepth: UInt = bufferDepthOut

  def inputInterruptSignal: Bool = interruptIn

  // def outputDataOffsetSignal: UInt = dataOffsetOut

  // register the inputBufferDepth
  val bufferDepthReg = RegNext(inputBufferDepth) init U(bufferSize - 1, 8 bits)

  // define two streamFifo for store input data as buffer function
  val bufferFifoA, bufferFifoB = StreamFifo(Bits(dataWidth bits), bufferSize)

  // define counter to record the input and output data handshake times
  val inCounter = Counter(bufferSize)
  val outCounter = Counter(bufferSize)

  // a pointer to indicate which buffer will be write and read
  val isWriteBufferA = RegInit(True)
  val isReadBufferA = RegInit(True)

  // according to the inputBufferDepth, define a signal for indicating whether willOverflow
  val inCounterWillOverflow = inCounter === bufferDepthReg - U(1).resized && inputStreamInterface.fire
  val outCounterWillOverflow = outCounter === bufferDepthReg - U(1).resized && outputStreamInterface.fire

  when(inputStreamInterface.fire){inCounter.increment()}
  when(outputStreamInterface.fire){outCounter.increment()}
  when(inCounterWillOverflow){
    isWriteBufferA := ~isWriteBufferA
    inCounter.clear()
  }
  when(outCounterWillOverflow){
    isReadBufferA := ~isReadBufferA
    outCounter.clear()
  }


  // we want to run PingPongBuffer by recognizing the narrow pulse of startSignal
  // so we define a internalClockDomain for it
  val startReceiveClockDomainConfig = ClockDomainConfig(clockEdge = RISING,
    resetKind = ASYNC,
    resetActiveLevel = HIGH)
  val startReceiveResetSignal = Bool(false)
  val startReceiveClockDomain: ClockDomain = ClockDomain(clock = inputStartSignal,
    reset = !ClockDomain.current.readResetWire || startReceiveResetSignal,
    config = startReceiveClockDomainConfig
  )
  val startReceiveArea = new ClockingArea(startReceiveClockDomain) {
    val startReceiveSignal: Bool = RegNext(True) init (False)
  }.setName("")
  startReceiveArea.startReceiveSignal.addTag(crossClockDomain)

  val realStartSignal = startReceiveArea.startReceiveSignal || startReceiveArea.startReceiveSignal.fall()

  // define this clockDomain for monitor whether last burst complete(can start next burst)
  val lastBurstCompleteClockDomainConfig = ClockDomainConfig(clockEdge = RISING,
    resetKind = ASYNC,
    resetActiveLevel = HIGH)
  val lastBurstCompleteClockDomain: ClockDomain = ClockDomain(clock = inputInterruptSignal,
    reset = !ClockDomain.current.readResetWire || outputStartSignal,
    config = startReceiveClockDomainConfig
  )
  val lastBurstCompleteArea = new ClockingArea(lastBurstCompleteClockDomain) {
    val lastBurstCompleteSignal: Bool = RegNext(True) init (False)
  }.setName("")
  lastBurstCompleteArea.lastBurstCompleteSignal.addTag(crossClockDomain)



  // indicate the state which is the first clockEdge after reset
  val isAfterResetState = RegInit(True)
  when(ClockDomain.current.readResetWire) {
    isAfterResetState := False
  }

  // val currentState = UInt(2 bits)

  // delay for timing
  val pipedBufferAPop = bufferFifoA.io.pop.stage()
  val pipedBufferBPop = bufferFifoB.io.pop.stage()

  bufferFifoA.io.push.valid := False
  bufferFifoA.io.push.payload := inputStreamInterface.payload

  bufferFifoB.io.push.valid := False
  bufferFifoB.io.push.payload := inputStreamInterface.payload

  pipedBufferAPop.ready := False
  pipedBufferBPop.ready := False

  outputStreamInterface.valid := False
  outputStreamInterface.payload := pipedBufferAPop.payload

  inputStreamInterface.ready := False


  // use StateMachine to manage pingPongBuffer
  val pingPongBufferStateMachine = new StateMachine {
    val EMPTY = StateEntryPoint()
    val HALF, FULL = State()

    EMPTY.onEntry{when(isAfterResetState){outputInterruptSignalState := True}}
    EMPTY.whenIsActive {
      outputInterruptSignalState := False
      // if start Signal valid, start to run pingPong buffer input process
      when(realStartSignal && isWriteBufferA) {
        bufferFifoA.io.push << inputStreamInterface
        when(inCounterWillOverflow) {
          outputInterruptSignalState := True
          goto(HALF)
        }
      }
      when(realStartSignal && !isWriteBufferA) {
        bufferFifoB.io.push << inputStreamInterface
        when(inCounterWillOverflow) {
          outputInterruptSignalState := True
          goto(HALF)
        }
      }
    }
    EMPTY.onExit(startReceiveResetSignal := True)

    HALF.whenIsActive {
      outputInterruptSignalState := False
      // state transform logic
      when(inCounterWillOverflow && outCounterWillOverflow) {
        startReceiveResetSignal := True
        outputInterruptSignalState := True
        goto(HALF)
      }.elsewhen(inCounterWillOverflow){goto(FULL)}
        .elsewhen(outCounterWillOverflow){goto(EMPTY)}

      // pop logic
      when(isReadBufferA){outputStreamInterface << pipedBufferAPop}
      when(!isReadBufferA){outputStreamInterface << pipedBufferBPop}

      // start push logic
      when(realStartSignal && isWriteBufferA) {bufferFifoA.io.push << inputStreamInterface}
      when(realStartSignal && !isWriteBufferA) {bufferFifoB.io.push << inputStreamInterface}
    }

    FULL.whenIsActive {
      when(isReadBufferA) {
        outputStreamInterface << pipedBufferAPop
        when(outCounterWillOverflow) {
          outputInterruptSignalState := True
          goto(HALF)
        }
      }
      when(!isWriteBufferA) {
        outputStreamInterface << pipedBufferBPop
        when(outCounterWillOverflow) {
          outputInterruptSignalState := True
          goto(HALF)
        }
      }
    }
    FULL.onExit(startReceiveResetSignal := True)
  }

  // other signal port logic
  val outputInterruptSignalState = RegInit(False)
  outputInterruptSignal := outputInterruptSignalState

  outputBufferDepth := bufferDepthReg

  //  // define two register to store the offset address corresponding data and accompany a valid signal
  //  val offsetA, offsetB = RegInit(U(0, addressWidth bits))
  //  when(realStartSignal){
  //    when(isWriteBufferA){offsetA := inputDataOffsetSignal}
  //    when(!isWriteBufferA){offsetB := inputDataOffsetSignal}
  //  }

  // get currentState
  val currentState = UInt(2 bits)
  addPrePopTask(() => currentState := pingPongBufferStateMachine.stateReg.asBits.asUInt)

  val canReadData = currentState === U(2, 2 bits) || currentState === U(3, 2 bits)

  val readyForNextTransfer = RegInit(False)
  when(isAfterResetState){readyForNextTransfer := True}
  when(lastBurstCompleteArea.lastBurstCompleteSignal){readyForNextTransfer := True}

  // val outputDataOffsetReg = RegInit(U(0, addressWidth bits))
  val outputStartSignalReg = RegInit(False)
  when(readyForNextTransfer && canReadData && isReadBufferA){
    outputStartSignalReg := readyForNextTransfer
    // outputDataOffsetReg := offsetA
    readyForNextTransfer := False
  }
  when(readyForNextTransfer && canReadData && !isReadBufferA){
    outputStartSignalReg := readyForNextTransfer
    // outputDataOffsetReg := offsetB
    readyForNextTransfer := False
  }
  when(outputStartSignalReg){outputStartSignalReg := False}


  // outputDataOffsetSignal := outputDataOffsetReg
  outputStartSignal := outputStartSignalReg


}
