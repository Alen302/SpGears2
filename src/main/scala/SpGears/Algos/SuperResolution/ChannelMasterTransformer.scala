package SpGears.Algos.SuperResolution

import spinal.lib._
import spinal.core._

case class ChannelMasterTransformer(config: IPConfig) extends Component {
  val allPixelChannelIn = slave Stream PixelData(config, allChannel = true)
  val bPixelChannelOut  = master Stream PixelData(config)
  val gPixelChannelOut  = master Stream PixelData(config)
  val rPixelChannelOut  = master Stream PixelData(config)

  val pixelsDispatcher = StreamFork(allPixelChannelIn, 3, synchronous = true)

  bPixelChannelOut <-/< pixelsDispatcher(0)
    .translateWith {
      val bChanel = Stream(bPixelChannelOut.payloadType)
      bChanel.pixel      := pixelsDispatcher(0).pixel.subdivideIn(3 slices)(0)
      bChanel.frameStart := pixelsDispatcher(0).frameStart
      bChanel.rowEnd     := pixelsDispatcher(0).rowEnd
      bChanel
    }

  gPixelChannelOut <-/< pixelsDispatcher(1)
    .translateWith {
      val gChanel = Stream(gPixelChannelOut.payloadType)
      gChanel.pixel      := pixelsDispatcher(1).pixel.subdivideIn(3 slices)(1)
      gChanel.frameStart := pixelsDispatcher(1).frameStart
      gChanel.rowEnd     := pixelsDispatcher(1).rowEnd
      gChanel
    }

  rPixelChannelOut <-/< pixelsDispatcher(2)
    .translateWith {
      val rChanel = Stream(rPixelChannelOut.payloadType)
      rChanel.pixel      := pixelsDispatcher(2).pixel.subdivideIn(3 slices)(2)
      rChanel.frameStart := pixelsDispatcher(2).frameStart
      rChanel.rowEnd     := pixelsDispatcher(2).rowEnd
      rChanel
    }

}
