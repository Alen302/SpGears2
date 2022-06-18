package DatenLord.BCAM

import DatenLord.BCAM.BCAMBuildType.{BCAMBuildType, BRUTE, SEGMENT}
import spinal.lib._
import spinal.core._
import spinal.core.internals.Operator
import spinal.lib.UIntPimper
import spinal.core.sim._

import scala.math._

case class WriteChannel(config: BCAMConfig) extends Bundle {
  def Cd = config.Cd

  def Pw = config.Pw

  val wAddr = in UInt (log2Up(Cd) bits) // the write address
  val wPatt = in UInt (Pw bits)         // the write pattern
  val wr    = in Bool ()                // the write enable signal
}

case class MAddrChannel(config: BCAMConfig) extends Bundle {
  def Cd = config.Cd

  val mAddr     = out UInt (log2Up(Cd) bits) // the address which match the MPatt
  val matchFlag = out Bool ()                // the flag signal which indicate this match is successful
}

case class MPattChannel(config: BCAMConfig) extends Bundle {
  def Pw = config.Pw

  val mPatt = UInt(Pw bits)
}

/** @param buildType
  *   : the build type of BCAM
  * @param config
  *   : the config information of BCAM the build type of BCAM the paper url : [[https://people.ece.ubc.ca/lemieux/publications/abdelhadi-fpt2014.pdf]]
  */
case class BCAM(buildType: BCAMBuildType = BRUTE, config: BCAMConfig) extends Component {

  def Cd = config.Cd

  def Pw = config.Pw

  def Sw = config.Sw

  val io = new Bundle {
    val wStream     = slave Stream WriteChannel(config)  // the stream for write BCAM
    val mPattStream = slave Stream MPattChannel(config)  // the pattern Stream which will be addressed
    val mAddrStream = master Stream MAddrChannel(config) // the mapping result stream
  }

  val halfRateWStream = io.wStream.halfPipe()
  if (buildType != SEGMENT) {
    halfRateWStream.freeRun()
  }
  val continueWr = RegInit(False).setWhen(halfRateWStream.fire).clearWhen(!halfRateWStream.fire)

  buildType match {
    case BRUTE =>
      // instantiate the BRAMs which is used to build BCAM for Brute-force type
      val tiRAM = Mem(UInt(Cd bits), pow(2, Pw).toInt).init(Seq.fill(pow(2, Pw).toInt)(0)).addAttribute("ram_style", "block")
      val erRAM = Mem(UInt(Pw bits), Cd).init(Seq.fill(Cd)(0)).addAttribute("ram_style", "block")

      val erWr         = RegInit(False) // True -> Write Mode; False -> Read Mode
      val tiWr         = RegInit(True)  // True -> Write Mode; False -> Erase Mode
      val setAllPatt   = UInt(Cd bits).setAll()
      val clearAllPatt = UInt(Cd bits).clearAll()
      val tiWMask      = halfRateWStream.wAddr.toOneHot

      erRAM.write(halfRateWStream.wAddr, halfRateWStream.wPatt, erWr && halfRateWStream.wr && continueWr)
      val erRData = erRAM.readSync(halfRateWStream.wAddr, !erWr && halfRateWStream.wr && halfRateWStream.fire)

      val tiWPatt = Mux(tiWr, halfRateWStream.wPatt, erRData)
      tiRAM.write(tiWPatt, setAllPatt, tiWr && halfRateWStream.wr && halfRateWStream.fire, tiWMask) // Write TiRAM
      tiRAM.write(tiWPatt, clearAllPatt, !tiWr && halfRateWStream.wr && continueWr, tiWMask)        // Erase TiRAM

      when(halfRateWStream.fire) { // two cycle for write data to BCAM
        tiWr.clear()
        erWr.set()
      }.otherwise {
        tiWr.set()
        erWr.clear()
      }

      val streamRead = tiRAM.streamReadSync(io.mPattStream ~ io.mPattStream.mPatt)
      io.mAddrStream.arbitrationFrom(streamRead)

      // Priority Encoder for MAddr
      io.mAddrStream.mAddr     := OHToUInt(OHMasking.first(streamRead.payload))
      io.mAddrStream.matchFlag := streamRead.payload.asBools.reduceBalancedTree(_ | _)

    case SEGMENT =>
      // instantiate the BRAMs which is used to build BCAM for Brute-force type
      val sTiRAM =
        Mem(UInt(Cd / Sw bits), pow(2, Pw).toInt).init(Seq.fill(pow(2, Pw).toInt)(0)).addAttribute("ram_style", "block")
      val segRAM = Mem(UInt(Sw * Pw bits), Cd / Sw).init(Seq.fill(Cd / Sw)(0)).addAttribute("ram_style", "block")

      val segWr = RegInit(False) // True -> Write Mode; False -> Read Mode
      val sTiWr = RegInit(True)  // True -> Write Mode; False -> Erase Mode

      // Mapping Logic

      val halfRateMPatt = io.mPattStream.halfPipe()

      val mPattTwoPipe = History(halfRateMPatt.mPatt, 3)

      val mIndcStream = sTiRAM.streamReadSync(halfRateMPatt ~ halfRateMPatt.mPatt)

      val segAddr   = OHToUInt(OHMasking.first(mIndcStream.payload))
      val highMAddr = RegNext(segAddr).init(segAddr.getZero)

      val rMatch =
        RegNextWhen(mIndcStream.payload.asBools.reduceBalancedTree(_ | _), mIndcStream.fire).clearWhen(io.mAddrStream.fire)

      //      io.mAddrStream.matchFlag := rMatch

      //      io.mAddrStream.arbitrationFrom(mIndcStream.m2sPipe())

      //      val rDataForMapping = segRAM.readSync(segAddr, mIndcStream.fire)

      val rDataForMapStream = segRAM.streamReadSync(mIndcStream ~ segAddr)
      val intraSegPEInput   = Vec(False, Sw)

      Range(0, Sw).foreach { s =>
        when(rDataForMapStream.fire) {
          when(rDataForMapStream.payload(U(s * Pw), Pw bits) === mPattTwoPipe(U(2))) {
            intraSegPEInput(s) := True
          }
        }
      }

      //      io.mAddrStream.mAddr := Cat(highMAddr, OHToUInt(OHMasking.first(intraSegPEInput))).asUInt

      io.mAddrStream <-< rDataForMapStream.translateInto(cloneOf(io.mAddrStream)) { (d, _) =>
        d.matchFlag := rMatch
        d.mAddr     := Cat(highMAddr, OHToUInt(OHMasking.first(intraSegPEInput))).asUInt
      }
      // Write Logic : Cycle One

      val sTiWMask = halfRateWStream.wAddr(U(log2Up(Sw)), log2Up(Cd / Sw) bits).toOneHot
      val regWMask = halfRateWStream.wAddr(U(0), log2Up(Sw) bits).toOneHot

      val setAllPatt   = UInt(Cd / Sw bits).setAll()
      val clearAllPatt = UInt(Cd / Sw bits).clearAll()

      //      val rDataForWrite =
      //        segRAM
      //          .readSync(halfRateWStream.wAddr(log2Up(Sw), log2Up(Cd / Sw) bits), !segWr && halfRateWStream.fire) // Read Data from SegRAM
      val rDataForWriteStream =
        segRAM
          .streamReadSync(halfRateWStream.translateInto(Stream(UInt(log2Up(Cd / Sw) bits))) { (d, s) =>
            d := s.wAddr(log2Up(Sw), log2Up(Cd / Sw) bits)
          }) // Read Data from SegRAM

      rDataForWriteStream.freeRun()

      val pattToRmMuxOutput =
        halfRateWStream
          .wAddr(U(0), log2Up(Sw) bits)
          .muxList(for (i <- 0 until Sw) yield (i, rDataForWriteStream.payload(U(i) * Pw, Pw bits)))

      val sTiWPatt = Mux(sTiWr, halfRateWStream.wPatt, pattToRmMuxOutput)
      sTiRAM.write(sTiWPatt, setAllPatt, sTiWr && halfRateWStream.fire, sTiWMask) // Write data to STiRAM

      val ocurrIndcResults = Vec(False, Sw)

      Range(0, Sw).foreach { s =>
        when(rDataForWriteStream.payload(U(s * Pw), Pw bits) === pattToRmMuxOutput) {
          ocurrIndcResults(s) := True
        }
      }

      val MaskingControl = (ocurrIndcResults.asBits & ~regWMask.asBits).asBools.reduceBalancedTree(_ | _)

      // Write Logic : Cycle Two

      val notErase = Mux(MaskingControl, True, sTiWr)
      sTiRAM.write(sTiWPatt, clearAllPatt, !notErase && continueWr, sTiWMask) // Conditional erase data from STiRAM

      val segWriteData = Cat(Vec(halfRateWStream.wPatt, Sw): _*).asUInt
      segRAM.write(halfRateWStream.wAddr(U(log2Up(Sw)), log2Up(Cd / Sw) bits), segWriteData, segWr && continueWr, regWMask)

      // Write Controller

      when(halfRateWStream.fire) {
        segWr.set()
        sTiWr.clear()
      }.otherwise {
        segWr.clear()
        sTiWr.set()
      }
    case _ =>
  }

}

object Gen extends App {
  SpinalVerilog(BCAM(SEGMENT, BCAMConfig(8, 2)))
}
