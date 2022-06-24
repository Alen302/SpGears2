package SpGears.Algos.SuperResolution

import spinal.core._
import spinal.lib._
import spinal.lib.bus.amba4.axilite.{AxiLite4, AxiLite4Config}

case class IPWithAXILite(config: IPConfig, Aw: Int, Dw: Int) extends Component {

  def dW = config.dataW

  def sW = config.srcW

  def sH = config.srcH

  val axiLiteConfig = AxiLite4Config(addressWidth = Aw, dataWidth = Dw)

  val io = new Bundle {
    val axiLiteSignal = slave(AxiLite4(axiLiteConfig))
    val inpDone       = out Bool ()
    // from master
    val dataIn       = slave Stream UInt(dW bits)
    val frameStartIn = in Bool ()
    val rowEndIn     = in Bool ()

    // to slave
    val dataOut       = master Stream UInt(dW bits)
    val startOut      = out Bool ()
    val frameStartOut = out Bool ()
    val rowEndOut     = out Bool ()
    val inpValidOut   = out Bool ()

  }

  val axiLiteInst    = OutConfig_L(config, Aw, Dw)
  val upSamplingInst = Interpolation(config)

  io.inpDone             := upSamplingInst.io.inpCompleteOut
  io.axiLiteSignal       >> axiLiteInst.io.axiLiteSignal
  axiLiteInst.io.ap_done := upSamplingInst.io.inpCompleteOut

  io.dataIn                      >> upSamplingInst.io.dataIn
  upSamplingInst.io.StartIn      := axiLiteInst.io.ap_start
  upSamplingInst.io.frameStartIn := io.frameStartIn
  upSamplingInst.io.rowEndIn     := io.rowEndIn

  upSamplingInst.io.thresholdIn := axiLiteInst.io.threshold
  upSamplingInst.io.widthIn     := axiLiteInst.io.src_Width
  upSamplingInst.io.heightIn    := axiLiteInst.io.src_Height

  upSamplingInst.io.dataOut >> io.dataOut
  io.startOut               := upSamplingInst.io.startOut
  io.frameStartOut          := upSamplingInst.io.frameStartOut
  io.rowEndOut              := upSamplingInst.io.rowEndOut
  io.inpValidOut            := upSamplingInst.io.inpValidOut

}

object GenIPWithAXILite extends App {
  SpinalVerilog(IPWithAXILite(IPConfig(5, 10, 8), 32, 32)).printPruned()
}
