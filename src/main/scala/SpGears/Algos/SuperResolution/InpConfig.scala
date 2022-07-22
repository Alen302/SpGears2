package SpGears.Algos.SuperResolution

import spinal.core._
import spinal.core.sim._
import spinal.lib._
import spinal.lib.bus.amba4.axilite._

case class InpConfig(config: IPConfig, axiLiteConfig: AxiLite4Config) extends Component {
  def dW = config.dataW

  def sW = config.srcW

  def sH = config.srcH

  val io = new Bundle {
    val axiLiteSignal = slave(AxiLite4(axiLiteConfig))
    val apDone        = in Bool ()
    val srcWidth      = out UInt (log2Up(sW + 1) bits)
    val srcHeight     = out UInt (log2Up(sH + 1) bits)
    val threshold     = out UInt (dW bits)
    val apStart       = out Bool ()
  }
  noIoPrefix()
  val regSrcW      = RegInit(U(0, log2Up(sW + 1) bits))
  val regSrcH      = RegInit(U(0, log2Up(sH + 1) bits))
  val regThreshold = RegInit(U(255, dW bits))
  val regApStart   = RegInit(False)

  val regWrAddr    = RegInit(U(255, 8 bits))
  val regRAddr     = RegInit(U(255, 8 bits))
  val updateWrAddr = RegInit(True)
  val updateRAddr  = RegInit(True)
  val writeSuccess = RegInit(False)

  //--------------------------AXI-LITE write logic, address bus -------------------------
  io.axiLiteSignal.aw.ready := updateWrAddr
  when(io.axiLiteSignal.aw.fire) { regWrAddr := io.axiLiteSignal.aw.payload.addr(7 downto 0) }

  when(io.axiLiteSignal.aw.fire) { updateWrAddr.clear() }
    .elsewhen(io.axiLiteSignal.w.fire) { updateWrAddr.set() }

  //--------------------------AXI-LITE write logic, data bus -------------------------
  io.axiLiteSignal.w.ready := !updateWrAddr

  when(io.axiLiteSignal.w.fire) {
    switch(regWrAddr) {
      is(U(1 * axiLiteConfig.bytePerWord)) { regSrcW := io.axiLiteSignal.w.payload.data(log2Up(sW + 1) - 1 downto 0).asUInt }
      is(U(2 * axiLiteConfig.bytePerWord)) { regSrcH := io.axiLiteSignal.w.payload.data(log2Up(sH + 1) - 1 downto 0).asUInt }
      is(U(3 * axiLiteConfig.bytePerWord)) { regThreshold := io.axiLiteSignal.w.payload.data(dW - 1 downto 0).asUInt }
      is(U(4 * axiLiteConfig.bytePerWord)) { regApStart := io.axiLiteSignal.w.payload.data(0 downto 0).asBool }
    }
  }

  when(io.axiLiteSignal.w.fire) { writeSuccess.set() }
    .elsewhen(io.axiLiteSignal.b.fire) { writeSuccess.clear() }

  //--------------------------AXI-LITE write logic, b bus -------------------------
  io.axiLiteSignal.b.valid := writeSuccess
  io.axiLiteSignal.b.payload.resp.clearAll()

  //--------------------------AXI-LITE read logic, address bus -------------------------
  io.axiLiteSignal.ar.ready := updateRAddr
  when(io.axiLiteSignal.ar.fire) { regRAddr := io.axiLiteSignal.ar.payload.addr(7 downto 0) }
  when(io.axiLiteSignal.ar.fire) { updateRAddr.clear() }
    .elsewhen(io.axiLiteSignal.r.fire) { updateRAddr.set() }

  //--------------------------AXI-LITE read logic, data bus -------------------------
  io.axiLiteSignal.r.payload.resp.clearAll()
  when(!updateRAddr) {
    io.axiLiteSignal.r.valid.set()
    switch(regRAddr) {
      is(U(1 * axiLiteConfig.bytePerWord)) { io.axiLiteSignal.r.payload.data := regSrcW.asBits.resized }
      is(U(2 * axiLiteConfig.bytePerWord)) { io.axiLiteSignal.r.payload.data := regSrcH.asBits.resized }
      is(U(3 * axiLiteConfig.bytePerWord)) { io.axiLiteSignal.r.payload.data := regThreshold.asBits.resized }
      is(U(4 * axiLiteConfig.bytePerWord)) { io.axiLiteSignal.r.payload.data := regApStart.asBits.resized }
      default { io.axiLiteSignal.r.payload.data.clearAll() }
    }
  } otherwise {
    io.axiLiteSignal.r.valid.set()
    io.axiLiteSignal.r.payload.data.clearAll()
  }
  when(io.apDone) { regApStart.clear() }
  //io.src_Width := 0
  io.srcWidth  := regSrcW
  io.srcHeight := regSrcH
  io.threshold := regThreshold
  io.apStart   := regApStart
}

object InpConfig extends App {
  val DW        = 32
  val AW        = 32
  val listAddr  = List(4, 8, 12, 16)
  val listWData = List(0, 1, 2, 3)
  var idx       = 0
  var idy       = 0
  var idz       = 0
  var idr       = 0
  var idp       = 0
  //SpinalVerilog(OutConfig_L(DW,AW))
  val compiled = SimConfig.withFstWave.allOptimisation.compile(InpConfig(IPConfig(540, 960, 8), AxiLite4Config(addressWidth = AW, dataWidth = DW)))
  compiled.doSim { dut =>
    import dut.{clockDomain, io}
    clockDomain.forkStimulus(10)
    io.axiLiteSignal.aw.payload.addr #= 1023
    io.axiLiteSignal.w.payload.data  #= 1023
    io.axiLiteSignal.w.payload.strb  #= 15
    while (true) {
      clockDomain.waitSampling()
      if (idz <= 5) {
        io.apDone                #= false
        io.axiLiteSignal.b.ready #= true
        io.axiLiteSignal.aw.valid.randomize()
        if (dut.io.axiLiteSignal.aw.valid.toBoolean && dut.io.axiLiteSignal.aw.ready.toBoolean) {
          if (idx != 3) {
            idx = idx + 1
          } else {
            idx = idx
          }
        }
        io.axiLiteSignal.aw.payload.addr #= listAddr(idx)
        io.axiLiteSignal.w.valid.randomize()
        if (io.axiLiteSignal.w.valid.toBoolean & io.axiLiteSignal.w.ready.toBoolean) {
          if (idy != 3) {
            idy = idy + 1
          } else {
            idy = idy
          }
          idz = idz + 1
        }
        io.axiLiteSignal.w.payload.data #= listWData(idy)
        //      if(idz == 5){
        //        simSuccess()
        //      }
      } else {
        io.axiLiteSignal.ar.valid.randomize()
        if (dut.io.axiLiteSignal.ar.valid.toBoolean && dut.io.axiLiteSignal.ar.ready.toBoolean) {
          if (idr != 3) {
            idr = idr + 1
          } else {
            idr = idr
          }
        }
        io.axiLiteSignal.ar.payload.addr #= listAddr(idr)
        io.axiLiteSignal.r.ready.randomize()
        if (io.axiLiteSignal.r.valid.toBoolean & io.axiLiteSignal.r.ready.toBoolean) {
          println(io.axiLiteSignal.r.payload.data.toBigInt)
          println(io.axiLiteSignal.r.payload.resp.toInt)
          idp = idp + 1
          println(s"idp : ${idp}")
        }
        if (idp == 5) { simSuccess() }
        //simSuccess()
      }
    }
  }
}
