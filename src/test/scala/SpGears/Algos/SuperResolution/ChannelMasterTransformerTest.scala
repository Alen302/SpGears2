package SpGears.Algos.SuperResolution

import SpGears.TestUtils.UVM._
import SpGears.TestUtils.SimUtils._
import spinal.core.sim._

import scala.collection.mutable.ArrayBuffer
import scala.util.Random._

object ChannelMasterTransformerTest extends App {
  getSimConfig().compile(ChannelMasterTransformer(IPConfig())).doSim { dut =>
    dut.clockDomain.forkStimulus(10)

    val testSize = 100

    // initialize
    dut.allPixelChannelIn.setRandomInitValue(dut.clockDomain)
    dut.bPixelChannelOut.setRandomInitValue(dut.clockDomain)
    dut.gPixelChannelOut.setRandomInitValue(dut.clockDomain)
    dut.rPixelChannelOut.setRandomInitValue(dut.clockDomain)

    // driver
    val pixelDriver      = ArrayBuffer.fill(testSize)(BigInt(nextInt(255) + 1 << 16))
    val frameStarts      = ArrayBuffer.fill(testSize)(false)
    val frameStartDriver = frameStarts.zipWithIndex.map { case (e, i) => if (i == 0) true else false }
    val rowEnds          = ArrayBuffer.fill(testSize)(false)
    val rowEndsDriver    = rowEnds.zipWithIndex.map { case (e, i) => if ((i + 1) % 10 == 0) true else false }

    dut.allPixelChannelIn.setDriverRandomly(dut.clockDomain, latency = 0, Seq(pixelDriver, frameStartDriver, rowEndsDriver): _*)
    dut.bPixelChannelOut.setRandomDriverRandomly(dut.clockDomain)
    dut.gPixelChannelOut.setRandomDriverRandomly(dut.clockDomain)
    dut.rPixelChannelOut.setRandomDriverRandomly(dut.clockDomain)

    // monitor
    val pixelIns      = ArrayBuffer[BigInt]()
    val rowEndIns     = ArrayBuffer[Boolean]()
    val frameStartIns = ArrayBuffer[Boolean]()

    val bPixelOuts      = ArrayBuffer[BigInt]()
    val bRowEndOuts     = ArrayBuffer[Boolean]()
    val bFrameStartOuts = ArrayBuffer[Boolean]()

    val rPixelOuts      = ArrayBuffer[BigInt]()
    val rRowEndOuts     = ArrayBuffer[Boolean]()
    val rFrameStartOuts = ArrayBuffer[Boolean]()

    val gPixelOuts      = ArrayBuffer[BigInt]()
    val gRowEndOuts     = ArrayBuffer[Boolean]()
    val gFrameStartOuts = ArrayBuffer[Boolean]()

    dut.allPixelChannelIn.setMonitorAlways(dut.clockDomain, latency = 0, Seq(pixelIns, frameStartIns, rowEndIns): _*)
    dut.bPixelChannelOut.setMonitorAlways(dut.clockDomain, latency  = 0, Seq(bPixelOuts, bFrameStartOuts, bRowEndOuts): _*)
    dut.gPixelChannelOut.setMonitorAlways(dut.clockDomain, latency  = 0, Seq(gPixelOuts, gFrameStartOuts, gRowEndOuts): _*)
    dut.rPixelChannelOut.setMonitorAlways(dut.clockDomain, latency  = 0, Seq(rPixelOuts, rFrameStartOuts, rRowEndOuts): _*)

    dut.clockDomain.waitSamplingWhere(bRowEndOuts.size >= testSize && gRowEndOuts.size >= testSize && rRowEndOuts.size >= testSize)

    // output log

    val bChanelPixelResult = pixelIns.take(testSize).zip(bPixelOuts.take(testSize)).map { case (ins, bOuts) =>
      Integer.parseInt(ins.toInt.toBinaryString.takeRight(8), 2) == Integer.parseInt(bOuts.toInt.toBinaryString, 2)
    }
    val gChanelPixelResult = pixelIns.take(testSize).zip(gPixelOuts.take(testSize)).map { case (ins, gOuts) =>
      Integer.parseInt(ins.toInt.toBinaryString.dropRight(8).takeRight(8), 2) == Integer.parseInt(gOuts.toInt.toBinaryString, 2)
    }
    val rChanelPixelResult = pixelIns.take(testSize).zip(rPixelOuts.take(testSize)).map { case (ins, rOuts) =>
      Integer.parseInt(ins.toInt.toBinaryString.dropRight(16).takeRight(8), 2) == Integer.parseInt(rOuts.toInt.toBinaryString, 2)
    }

    val bChanelFrameStartResult = frameStartIns.take(testSize).zip(bFrameStartOuts.take(testSize)).map { case (ins, bOuts) =>
      ins == bOuts
    }
    val gChanelFrameStartResult = frameStartIns.take(testSize).zip(gFrameStartOuts.take(testSize)).map { case (ins, gOuts) =>
      ins == gOuts
    }
    val rChanelFrameStartResult = frameStartIns.take(testSize).zip(rFrameStartOuts.take(testSize)).map { case (ins, rOuts) =>
      ins == rOuts
    }

    val bChanelRowEndResult = rowEndIns.take(testSize).zip(bRowEndOuts.take(testSize)).map { case (ins, bOuts) =>
      ins == bOuts
    }
    val gChanelRowEndResult = rowEndIns.take(testSize).zip(gRowEndOuts.take(testSize)).map { case (ins, gOuts) =>
      ins == gOuts
    }
    val rChanelRowEndResult = rowEndIns.take(testSize).zip(rRowEndOuts.take(testSize)).map { case (ins, rOuts) =>
      ins == rOuts
    }

    if (bChanelPixelResult.forall(_ == true)) { println("b channel's pixel test pass !") }
    else { println(s" b channel's pixel results : ${bChanelPixelResult.map(_.toString.padTo(7, ' ')).mkString(" ")}") }
    if (gChanelPixelResult.forall(_ == true)) { println("g channel's pixel test pass !") }
    else { println(s" g channel's pixel results : ${gChanelPixelResult.map(_.toString.padTo(7, ' ')).mkString(" ")}") }
    if (rChanelPixelResult.forall(_ == true)) { println("r channel's pixel test pass !") }
    else { println(s" r channel's pixel results : ${rChanelPixelResult.map(_.toString.padTo(7, ' ')).mkString(" ")}") }

    if (bChanelFrameStartResult.forall(_ == true)) { println("b channel's frameStart test pass !") }
    else { println(s" b channel's frameStart results : ${bChanelFrameStartResult.map(_.toString.padTo(7, ' ')).mkString(" ")}") }
    if (gChanelFrameStartResult.forall(_ == true)) { println("g channel's frameStart test pass !") }
    else { println(s" g channel's frameStart results : ${gChanelFrameStartResult.map(_.toString.padTo(7, ' ')).mkString(" ")}") }
    if (rChanelFrameStartResult.forall(_ == true)) { println("r channel's frameStart test pass !") }
    else { println(s" r channel's frameStart results : ${rChanelFrameStartResult.map(_.toString.padTo(7, ' ')).mkString(" ")}") }

    if (bChanelRowEndResult.forall(_ == true)) { println("b channel's rowEnd test pass !") }
    else { println(s" b channel's rowEnd results : ${bChanelRowEndResult.map(_.toString.padTo(7, ' ')).mkString(" ")}") }
    if (gChanelRowEndResult.forall(_ == true)) { println("b channel's rowEnd test pass !") }
    else { println(s" g channel's rowEnd results : ${gChanelRowEndResult.map(_.toString.padTo(7, ' ')).mkString(" ")}") }
    if (rChanelRowEndResult.forall(_ == true)) { println("b channel's rowEnd test pass !") }
    else { println(s" r channel's rowEnd results : ${rChanelRowEndResult.map(_.toString.padTo(7, ' ')).mkString(" ")}") }
  }
}
