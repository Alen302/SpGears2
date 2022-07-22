package SpGears.Algos.SuperResolution

import spinal.lib._
import spinal.core._

case class ChannelSlaveTransformer(config: IPConfig) extends Component {
  val bPixelChannelIn    = slave Stream PixelData(config)
  val gPixelChannelIn    = slave Stream PixelData(config)
  val rPixelChannelIn    = slave Stream PixelData(config)
  val allPixelChannelOut = master Stream PixelData(config, allChannel = true)

  val pixelChannelJoin = StreamJoin.vec(Vec(bPixelChannelIn.m2sPipe(), gPixelChannelIn.m2sPipe(), rPixelChannelIn.m2sPipe()))

  allPixelChannelOut <-/< pixelChannelJoin.translateWith {
    val allPixelChannel = Stream(allPixelChannelOut.payloadType)
    allPixelChannel.pixel      := (U(0, config.dataW bits) ## pixelChannelJoin.payload(2).pixel ## pixelChannelJoin.payload(1).pixel ## pixelChannelJoin.payload(0).pixel).asUInt
    allPixelChannel.frameStart := pixelChannelJoin.payload(2).frameStart
    allPixelChannel.rowEnd     := pixelChannelJoin.payload(2).rowEnd
    allPixelChannel
  }

}
