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
    val ap_done       = in Bool ()
    val srcWidth      = out UInt (log2Up(sW + 1) bits)
    val srcHeight     = out UInt (log2Up(sH + 1) bits)
    val threshold     = out UInt (dW bits)
    val apStart       = out Bool ()
  }
  noIoPrefix()
  val regSrcW      = Reg(UInt(log2Up(sW + 1) bits)) init (0)
  val regSrcH      = Reg(UInt(log2Up(sH + 1) bits)) init (0)
  val regThreshold = Reg(UInt(dW bits)) init (255)
  val regApStart   = Reg(Bool()) init (False)

  val regWrAddr    = Reg(UInt(8 bits)) init (255)
  val regRAddr     = Reg(UInt(8 bits)) init (255)
  val updateWrAdrr = Reg(Bool()) init (true)
  val updateRAdrr  = Reg(Bool()) init (true)
  val writeSuccess = Reg(Bool()) init (false)

  //--------------------------AXI-LITE write logic, address bus -------------------------
  io.axiLiteSignal.aw.ready := updateWrAdrr
  when(io.axiLiteSignal.aw.fire) {
    regWrAddr := io.axiLiteSignal.aw.payload.addr(7 downto 0)
  }

  when(io.axiLiteSignal.aw.fire) {
    updateWrAdrr := False
  } elsewhen (io.axiLiteSignal.w.fire) {
    updateWrAdrr := True
  }

  //--------------------------AXI-LITE write logic, data bus -------------------------
  io.axiLiteSignal.w.ready := !updateWrAdrr

  when(io.axiLiteSignal.w.fire) {
    switch(regWrAddr) {
      is(0 * axiLiteConfig.dataWidth / 8) {
        regSrcW := io.axiLiteSignal.w.payload.data(log2Up(sW + 1) - 1 downto 0).asUInt
      }
      is(1 * axiLiteConfig.dataWidth / 8) {
        regSrcH := io.axiLiteSignal.w.payload.data(log2Up(sH + 1) - 1 downto 0).asUInt
      }
      is(2 * axiLiteConfig.dataWidth / 8) {
        regThreshold := io.axiLiteSignal.w.payload.data(dW - 1 downto 0).asUInt
      }
      is(3 * axiLiteConfig.dataWidth / 8) {
        regApStart := io.axiLiteSignal.w.payload.data(0 downto 0).asBool
      }
    }
  }

  when(io.axiLiteSignal.w.fire) {
    writeSuccess := True
  } elsewhen (io.axiLiteSignal.b.fire) {
    writeSuccess := False
  }

  //--------------------------AXI-LITE write logic, b bus -------------------------
  io.axiLiteSignal.b.valid        := writeSuccess
  io.axiLiteSignal.b.payload.resp := 0

  //--------------------------AXI-LITE read logic, address bus -------------------------
  io.axiLiteSignal.ar.ready := updateRAdrr
  when(io.axiLiteSignal.ar.fire) {
    regRAddr := io.axiLiteSignal.ar.payload.addr(7 downto 0)

  }
  when(io.axiLiteSignal.ar.fire) {
    updateRAdrr := False
  } elsewhen (io.axiLiteSignal.r.fire) {
    updateRAdrr := True
  }
  //--------------------------AXI-LITE read logic, data bus -------------------------
  io.axiLiteSignal.r.payload.resp := 0
  when(!updateRAdrr) {
    io.axiLiteSignal.r.valid := True
    switch(regRAddr) {
      is(0 * axiLiteConfig.dataWidth / 8) {
        io.axiLiteSignal.r.payload.data := regSrcW.asBits.resized
      }
      is(1 * axiLiteConfig.dataWidth / 8) {
        io.axiLiteSignal.r.payload.data := regSrcH.asBits.resized
      }
      is(2 * axiLiteConfig.dataWidth / 8) {
        io.axiLiteSignal.r.payload.data := regThreshold.asBits.resized
      }
      is(3 * axiLiteConfig.dataWidth / 8) {
        io.axiLiteSignal.r.payload.data := regApStart.asBits.resized
      }
      default {
        io.axiLiteSignal.r.payload.data := 0
      }
    }
  } otherwise {
    io.axiLiteSignal.r.valid        := False
    io.axiLiteSignal.r.payload.data := 0
  }
  when(io.ap_done) {
    regApStart := False
  }
  //io.src_Width := 0
  io.srcWidth  := regSrcW
  io.srcHeight := regSrcH
  io.threshold := regThreshold
  io.apStart   := regApStart
}

object InpConfig extends App {
  val DW         = 32
  val AW         = 32
  val list_addr  = List(0, 4, 8, 12)
  val list_wdata = List(0, 1, 2, 3)
  var idx        = 0
  var idy        = 0
  var idz        = 0
  var idr        = 0
  var idp        = 0
  //SpinalVerilog(OutConfig_L(DW,AW))
  val compiled = SimConfig.withFstWave.allOptimisation.compile(InpConfig(IPConfig(960, 540, 8), AxiLite4Config(addressWidth = AW, dataWidth = DW)))
  compiled.doSim { dut =>
    import dut.{clockDomain, io}
    clockDomain.forkStimulus(10)
    io.axiLiteSignal.aw.payload.addr #= 1023
    io.axiLiteSignal.w.payload.data  #= 1023
    io.axiLiteSignal.w.payload.strb  #= 15
    while (true) {
      clockDomain.waitSampling()
      if (idz <= 5) {
        io.ap_done               #= false
        io.axiLiteSignal.b.ready #= true
        io.axiLiteSignal.aw.valid.randomize()
        if (dut.io.axiLiteSignal.aw.valid.toBoolean && dut.io.axiLiteSignal.aw.ready.toBoolean) {
          if (idx != 3) {
            idx = idx + 1
          } else {
            idx = idx
          }
        }
        io.axiLiteSignal.aw.payload.addr #= list_addr(idx)
        io.axiLiteSignal.w.valid.randomize()
        if (io.axiLiteSignal.w.valid.toBoolean & io.axiLiteSignal.w.ready.toBoolean) {
          if (idy != 3) {
            idy = idy + 1
          } else {
            idy = idy
          }
          idz = idz + 1
        }
        io.axiLiteSignal.w.payload.data #= list_wdata(idy)
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
        io.axiLiteSignal.ar.payload.addr #= list_addr(idr)
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
