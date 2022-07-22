package SpGears.Algos.SuperResolution

import SpGears.TestUtilsFactory._
import spinal.core.sim._
import scala.collection.mutable.ArrayBuffer
import scala.util.Random._

object ChannelSlaveTransformerTest extends App {
  simConfig().compile(ChannelSlaveTransformer(IPConfig())).doSim { dut =>
    dut.clockDomain.forkStimulus(10)

    val testSize = 100

    // initialize
    dut.bPixelChannelIn.haltCycles(dut.clockDomain, cycleCount    = 0)
    dut.gPixelChannelIn.haltCycles(dut.clockDomain, cycleCount    = 0)
    dut.rPixelChannelIn.haltCycles(dut.clockDomain, cycleCount    = 0)
    dut.allPixelChannelOut.haltCycles(dut.clockDomain, cycleCount = 0)

    // driver
    val bPixelDriver = ArrayBuffer.fill(testSize)(BigInt(nextInt(255) + 1))
    val gPixelDriver = ArrayBuffer.fill(testSize)(BigInt(nextInt(255) + 1))
    val rPixelDriver = ArrayBuffer.fill(testSize)(BigInt(nextInt(255) + 1))

    val frameStarts      = ArrayBuffer.fill(testSize)(false)
    val frameStartDriver = frameStarts.zipWithIndex.map { case (e, i) => if (i == 0) true else false }
    val rowEnds          = ArrayBuffer.fill(testSize)(false)
    val rowEndsDriver    = rowEnds.zipWithIndex.map { case (e, i) => if ((i + 1) % 10 == 0) true else false }

    dut.bPixelChannelIn.setMasterDriver(dut.clockDomain, Seq(bPixelDriver, frameStartDriver, rowEndsDriver): _*)
    dut.gPixelChannelIn.setMasterDriver(dut.clockDomain, Seq(gPixelDriver, frameStartDriver, rowEndsDriver): _*)
    dut.rPixelChannelIn.setMasterDriver(dut.clockDomain, Seq(rPixelDriver, frameStartDriver, rowEndsDriver): _*)
    dut.allPixelChannelOut.setSlaveRandomReady(dut.clockDomain)

    // monitor
    val bPixelIns      = ArrayBuffer[BigInt]()
    val bRowEndIns     = ArrayBuffer[Boolean]()
    val bFrameStartIns = ArrayBuffer[Boolean]()

    val rPixelIns      = ArrayBuffer[BigInt]()
    val rRowEndIns     = ArrayBuffer[Boolean]()
    val rFrameStartIns = ArrayBuffer[Boolean]()

    val gPixelIns      = ArrayBuffer[BigInt]()
    val gRowEndIns     = ArrayBuffer[Boolean]()
    val gFrameStartIns = ArrayBuffer[Boolean]()

    val pixelOuts      = ArrayBuffer[BigInt]()
    val rowEndOuts     = ArrayBuffer[Boolean]()
    val frameStartOuts = ArrayBuffer[Boolean]()

    dut.bPixelChannelIn.setStreamMonitor(dut.clockDomain, Seq(bPixelIns, bFrameStartIns, bRowEndIns): _*)
    dut.gPixelChannelIn.setStreamMonitor(dut.clockDomain, Seq(gPixelIns, gFrameStartIns, gRowEndIns): _*)
    dut.rPixelChannelIn.setStreamMonitor(dut.clockDomain, Seq(rPixelIns, rFrameStartIns, rRowEndIns): _*)
    dut.allPixelChannelOut.setStreamMonitor(dut.clockDomain, Seq(pixelOuts, frameStartOuts, rowEndOuts): _*)

    dut.clockDomain.waitSamplingWhere(pixelOuts.size == testSize)

    val bChanelPixelResult = pixelOuts.take(testSize).zip(bPixelIns.take(testSize)).map { case (outs, bIns) =>
      Integer.parseInt(outs.toInt.toBinaryString.takeRight(8), 2) == Integer.parseInt(bIns.toInt.toBinaryString, 2)
    }
    val gChanelPixelResult = pixelOuts.take(testSize).zip(gPixelIns.take(testSize)).map { case (outs, gIns) =>
      Integer.parseInt(outs.toInt.toBinaryString.dropRight(8).takeRight(8), 2) == Integer.parseInt(gIns.toInt.toBinaryString, 2)
    }
    val rChanelPixelResult = pixelOuts.take(testSize).zip(rPixelIns.take(testSize)).map { case (outs, rIns) =>
      Integer.parseInt(outs.toInt.toBinaryString.dropRight(16).takeRight(8), 2) == Integer.parseInt(rIns.toInt.toBinaryString, 2)
    }

    val bChanelFrameStartResult = frameStartOuts.take(testSize).zip(bFrameStartIns.take(testSize)).map { case (outs, bIns) =>
      outs == bIns
    }
    val gChanelFrameStartResult = frameStartOuts.take(testSize).zip(gFrameStartIns.take(testSize)).map { case (outs, gIns) =>
      outs == gIns
    }
    val rChanelFrameStartResult = frameStartOuts.take(testSize).zip(rFrameStartIns.take(testSize)).map { case (outs, rIns) =>
      outs == rIns
    }

    val bChanelRowEndResult = rowEndOuts.take(testSize).zip(bRowEndIns.take(testSize)).map { case (outs, bIns) =>
      outs == bIns
    }
    val gChanelRowEndResult = rowEndOuts.take(testSize).zip(gRowEndIns.take(testSize)).map { case (outs, gIns) =>
      outs == gIns
    }
    val rChanelRowEndResult = rowEndOuts.take(testSize).zip(rRowEndIns.take(testSize)).map { case (outs, rIns) =>
      outs == rIns
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
