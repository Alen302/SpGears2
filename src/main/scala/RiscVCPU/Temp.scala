//package RiscVCPU
//
//import spinal.lib._
//import spinal.core._
//
//import scala.math.pow

//
//case class RiscVDataMem(config: CPUConfig) extends Component {
//  def rvW = config.rvWidth
//  def instW = 32
//
//  def lsW:Int = {
//    if (rvW == 64) {return 3}
//    else {return 2}
//  }
//
//  def algCkW:Int = {
//    if(rvW == 64){return 3}
//    else {return 2}
//  }
//
//  def memN = rvW / 8
//
//  val io = new Bundle {
//    // for access data
//    val memWr  = in Bool()             // the memory write enable signal
//    val lsType = in UInt(lsW bits)     // indicate which Store/Load instruction
//    val lsSign = in Bool()             // indicate the pattern of Store/Load instruction
//    val wAi    = in UInt (rvW bits)    // write data address
//    val rAi    = in UInt (rvW bits)    // read  data address
//    val wDi    = in UInt (rvW bits)    // the data which will be write into memory
//    val rDo    = out UInt (rvW bits)   // the data which read from memory in the address rAi
//  }
//  noIoPrefix()
//
//  /*-------------------------------define memory-------------------------------*/
//  val memGroup = Array.fill(memN)(Mem(UInt(8 bits), pow(2, 16 - algCkW).toInt).addAttribute("ram_style", "block"))
//
//  //    // decide which writeEnable should valid
//  //    val pickMem = Array.fill(memN)(False)
//  //    (0 to 3).foreach { id1 =>
//  //      when(io.lsType === U(id1)){
//  //        // lw/sw
//  //        if(id1 == 0){
//  //          if(memN == 4) {pickMem.foreach(_ := True)}
//  //          else {
//  //            (0 to 3).foreach { id2 =>
//  //              when(io.wAi(2) === True){pickMem(id2 + 4) := True}
//  //                .otherwise{pickMem(id2) := True}
//  //            }
//  //          }
//  //        }
//  //        // lh/sh
//  //        if(id1 == 1) {
//  //          if (memN == 4) {
//  //            (0 to 1).foreach { id3 =>
//  //              when(io.wAi(1).asUInt === U(id3)) {
//  //                pickMem(2 * id3) := True
//  //                pickMem(2 * id3 + 1) := True
//  //              }
//  //            }
//  //          }else{
//  //            (0 to 3).foreach { id4 =>
//  //              when(io.wAi(2 downto 1) === U(id4)) {
//  //                pickMem(2 * id4) := True
//  //                pickMem(2 * id4 + 1) := True
//  //              }
//  //            }
//  //          }
//  //        }
//  //        // lb/sb
//  //        if(id1 == 2){
//  //          if(memN == 4) {
//  //            (0 to 3).foreach { id5 =>
//  //              when(io.wAi(1 downto 0) === U(id5)) {
//  //                pickMem(id5) := True
//  //              }
//  //            }
//  //          }else{
//  //            (0 to 7).foreach { id6 =>
//  //              when(io.wAi(2 downto 0) === U(id6)) {
//  //                pickMem(id6) := True
//  //              }
//  //            }
//  //          }
//  //        }
//  //        // ld/ld (for RV64)
//  //        if(id1 == 3 && memN == 8){
//  //          pickMem.foreach(_ := True)
//  //        }
//  //      }
//  //    }
//
//
//  //    // decide which readEnable should valid
//  //    val pickMem = Array.fill(memN)(False)
//  //    (0 to 3).foreach { id7 =>
//  //      when(io.lsType === U(id7)){
//  //        // lw/sw
//  //        if(id7 == 0){
//  //          if(memN == 4) {pickMem.foreach(_ := True)}
//  //          else {
//  //            (0 to 3).foreach { id8 =>
//  //              when(io.rAi(2) === True){pickMem(id8 + 4) := True}
//  //                .otherwise{pickMem(id8) := True}
//  //            }
//  //          }
//  //        }
//  //        // lh/sh
//  //        if(id7 == 1) {
//  //          if (memN == 4) {
//  //            (0 to 1).foreach { id9 =>
//  //              when(io.rAi(1).asUInt === U(id9)) {
//  //                pickMem(2 * id9) := True
//  //                pickMem(2 * id9 + 1) := True
//  //              }
//  //            }
//  //          }else{
//  //            (0 to 3).foreach { id10 =>
//  //              when(io.rAi(2 downto 1) === U(id10)) {
//  //                pickMem(2 * id10) := True
//  //                pickMem(2 * id10 + 1) := True
//  //              }
//  //            }
//  //          }
//  //        }
//  //        // lb/sb
//  //        if(id7 == 2){
//  //          if(memN == 4) {
//  //            (0 to 3).foreach { id11 =>
//  //              when(io.rAi(1 downto 0) === U(id11)) {
//  //                pickMem(id11) := True
//  //              }
//  //            }
//  //          }else{
//  //            (0 to 7).foreach { id12 =>
//  //              when(io.rAi(2 downto 0) === U(id12)) {
//  //                pickMem(id12) := True
//  //              }
//  //            }
//  //          }
//  //        }
//  //        // ld/ld (for RV64)
//  //        if(id7 == 3 && memN == 8){
//  //          pickMem.foreach(_ := True)
//  //        }
//  //      }
//  //    }
//
//
//
//
//  //      // lh/sh
//  //      when(io.lsType === U(1)){
//  //        if(memN == 4) {
//  //          when(pickMem(0) === True) {
//  //            when(io.lsSign) {
//  //              io.rDo := (memGroup(1).readSync(acsAddr) @@ memGroup(0).readSync(acsAddr)).asSInt.resize(rvW).asUInt
//  //            }.otherwise{
//  //              io.rDo := (memGroup(1).readSync(acsAddr) @@ memGroup(0).readSync(acsAddr)).resize(rvW)
//  //            }
//  //          }.otherwise {
//  //            when(io.lsSign) {
//  //              io.rDo := (memGroup(3).readSync(acsAddr) @@ memGroup(2).readSync(acsAddr)).asSInt.resize(rvW).asUInt
//  //            }.otherwise{
//  //              io.rDo := (memGroup(3).readSync(acsAddr) @@ memGroup(2).readSync(acsAddr)).resize(rvW)
//  //            }
//  //          }
//  //        }else{
//  //          when(pickMem(0) === True) {
//  //            when(io.lsSign) {
//  //              io.rDo := (memGroup(1).readSync(acsAddr) @@ memGroup(0).readSync(acsAddr)).asSInt.resize(rvW).asUInt
//  //            }.otherwise{
//  //              io.rDo := (memGroup(1).readSync(acsAddr) @@ memGroup(0).readSync(acsAddr)).resize(rvW)
//  //            }
//  //          }.elsewhen(pickMem(2) === True){
//  //            when(io.lsSign) {
//  //              io.rDo := (memGroup(3).readSync(acsAddr) @@ memGroup(2).readSync(acsAddr)).asSInt.resize(rvW).asUInt
//  //            }.otherwise{
//  //              io.rDo := (memGroup(3).readSync(acsAddr) @@ memGroup(2).readSync(acsAddr)).resize(rvW)
//  //            }
//  //          }.elsewhen(pickMem(4) === True){
//  //            when(io.lsSign) {
//  //              io.rDo := (memGroup(5).readSync(acsAddr) @@ memGroup(4).readSync(acsAddr)).asSInt.resize(rvW).asUInt
//  //            }.otherwise{
//  //              io.rDo := (memGroup(5).readSync(acsAddr) @@ memGroup(4).readSync(acsAddr)).resize(rvW)
//  //            }
//  //          }.otherwise {
//  //            when(io.lsSign) {
//  //              io.rDo := (memGroup(7).readSync(acsAddr) @@ memGroup(6).readSync(acsAddr)).asSInt.resize(rvW).asUInt
//  //            }.otherwise{
//  //              io.rDo := (memGroup(7).readSync(acsAddr) @@ memGroup(6).readSync(acsAddr)).resize(rvW)
//  //            }
//  //          }
//  //        }
//  //      }
//  //      // lb/sb
//  //      when(io.lsType === U(2)) {
//  //        if (memN == 4) {
//  //          (0 to 3).foreach { id13 =>
//  //            when(pickMem(id13) === True) {
//  //              when(io.lsSign) {
//  //                io.rDo := memGroup(id13).readSync(acsAddr).asSInt.resize(rvW).asUInt
//  //              }.otherwise{
//  //                io.rDo := memGroup(id13).readSync(acsAddr).resize(rvW)
//  //              }
//  //            }
//  //          }
//  //        }else{
//  //          (0 to 7).foreach { id14 =>
//  //            when(pickMem(id14) === True) {
//  //              when(io.lsSign) {
//  //                io.rDo := memGroup(id14).readSync(acsAddr).asSInt.resize(rvW).asUInt
//  //              }.otherwise{
//  //                io.rDo := memGroup(id14).readSync(acsAddr).resize(rvW)
//  //              }
//  //            }
//  //          }
//  //        }
//  //      }
//  //      // ld/ld (for RV64)
//  //      if(memN == 8) {
//  //        when(io.lsType === U(3)){
//  //          memGroup.zipWithIndex.foreach { case (mem, idx2) =>
//  //            io.rDo(7 + idx2 * 8 downto idx2 * 8) := memGroup(idx2).readSync(acsAddr)
//  //          }
//  //        }
//  //      }
//  //    }
//
//}
//
//object genDataMem extends App {
//  SpinalConfig(
//    targetDirectory = "ysyxGenRTL",
//    globalPrefix = "ysyx_22040525_"
//  ).generateVerilog(RiscVDataMem(CPUConfig()))
//}

//  // define a address queue using shift register
//  val addrQueue = History(PC, outStandingNumb + 1, io.readInst.ar.fire)
//  // operation type
//  val enqTask = io.readInst.ar.fire && !io.readInst.r.fire
//  val enqAndDeq = io.readInst.ar.fire && io.readInst.r.fire
//  val deqTask = !io.readInst.ar.fire && io.readInst.r.fire

//  // indicate address queue's valid address (task) number
//  val taskNumb = Counter(outStandingNumb + 1)
//  /*---------------------------update the taskNumb state---------------------*/
//  val updateCounter = new Area {
//    when(enqTask){taskNumb.increment()}  // enqueue task
//    when(deqTask){taskNumb := taskNumb - U(1)} // dequeue task
//  }

//    when(deqTask || enqAndDeq){
//      AR := addrQueue(taskNumb - U(1))
//    }.otherwise {
//      AR := addrQueue(taskNumb)
//    }

//  /*-------logic for RV64: because in RV64, read two instruction once-------*/
//
//  /*----------------------------Logic for RV64 CPU--------------------------*/
//  if(rvW == 64) {
//    // define instruction cache queue
//    val lowCache   = History(io.readInst.r.data(31 downto 0), cacheNumb + 1, io.readInst.r.fire)
//    val lAddrCache = History(AR + U(4), cacheNumb + 1, io.readInst.r.fire)
//
//    val highCache  = History(io.readInst.r.data(63 downto 32), cacheNumb + 1, io.readInst.r.fire)
//    val hAddrCache = History(AR, cacheNumb + 1, io.readInst.r.fire)
//    // indicate cache queue's valid data number
//    val lowCNumb  = Counter(cacheNumb + 1)
//    val highCNumb = Counter(cacheNumb + 1)
//    // indicate pick which Cache
//    val pickHigh = RegInit(True)  // highCache store first instruction, So First pick highCache
//
//    val cacheInst = Bits(32 bits)
//    val cacheAR   = UInt(rvW bits)
//
//    // update the cache queue's valid number
//    when(io.readInst.r.fire){
//      when(pickHigh){
//        lowCNumb.increment()
//        cacheInst := highCache(highCNumb)
//        cacheAR   := hAddrCache(highCNumb)
//      }.otherwise{
//        highCNumb.increment()
//        cacheInst := lowCache(lowCNumb)
//        cacheAR   := lAddrCache(lowCNumb)
//      }
//    }.otherwise{
//      when(pickHigh){
//        highCNumb := highCNumb - U(1)
//        cacheInst := highCache(highCNumb)
//        cacheAR   := hAddrCache(highCNumb)
//      }.otherwise{
//        lowCNumb := lowCNumb - U(1)
//        cacheInst := lowCache(lowCNumb)
//        cacheAR   := lAddrCache(lowCNumb)
//      }
//    }
//
//
//    when(!pickHigh || highCNumb =/= U(0) || lowCNumb =/= U(0) || io.readInst.r.fire){
//      pickHigh := ~pickHigh
//      io.newInst := True
//    }.otherwise{
//      io.newInst := False
//    }

//    /*--------------------------update IR for RV64------------------------*/
//    val updateIR = new Area {
//      io.toIdIR := cacheInst
//    }
//
//    // connect some signal to EXU for RV64
//    io.toIdPC := cacheAR
//
//
//
//    /*--------------axiLite4 read data channel logic for RV64---------------*/
//    when(!lowCNumb.willOverflowIfInc && !highCNumb.willOverflowIfInc){
//      io.readInst.r.ready := False
//    }.otherwise{
//      io.readInst.r.ready := True
//    }
//  }
//
//  /*----------------------------Logic for RV32 CPU--------------------------*/
//  else{
//    // last instruction
//    val IR = RegInit(B(0, 32 bits))
//    val lastAR = RegInit(U(initPC, rvW bits))
//
//    when(deqTask || enqAndDeq){
//      lastAR := AR
//    }.otherwise {
//      lastAR := AR
//    }
//    /*--------------------------update IR for RV32------------------------*/
//    val updateIR = new Area {
//      when(io.readInst.r.fire) {
//        io.toIdIR := io.readInst.r.data
//        IR := io.readInst.r.data
//      }.otherwise{
//        io.toIdIR := IR
//      }
//    }
//
//    // connect some signal to EXU for RV32
//    when(io.readInst.r.fire) {
//      io.toIdPC := AR
//      io.newInst := True
//    }.otherwise {
//      io.toIdPC := lastAR
//      io.newInst := False
//    }
//
//    /*--------------axiLite4 read data channel logic for RV32---------------*/
//    io.readInst.r.ready := True
//
//  }

//  when(!taskNumb.willOverflowIfInc && !brFlag){
//    io.readInst.ar.valid := True
//  }.otherwise{
//    io.readInst.ar.valid := False
//  }

//when(io.memAcsBus.ar.fire) {
//  if(memN == 4) {
//    when(io.rdType(4 downto 3) === B(0)){ // lw/sw
//      memArray.zipWithIndex.foreach { case (mem, idx1) =>
//        io.memAcsBus.r.data(7 + idx1 * 8 downto idx1 * 8) := memArray(idx1).readSync(acsAddr)
//      }
//      setRResp := True
//    }
//    when(io.rdType(4 downto 3) === B(1)){ // lh/sh
//      (0 to 1).foreach { idx2 =>
//        when(io.rdType(0).asBits === B(idx2)) {
//          when(io.exSign) {
//            io.memAcsBus.r.data := (memArray(2 * idx2 + 1).readSync(acsAddr) ## memArray(2 * idx2).readSync(acsAddr)).asSInt.resize(rvW).asBits
//          }.otherwise {
//            io.memAcsBus.r.data := (memArray(2 * idx2 + 1).readSync(acsAddr) ## memArray(2 * idx2).readSync(acsAddr)).asUInt.resize(rvW).asBits
//          }
//        }
//      }
//      setRResp := True
//    }
//    when(io.rdType(4 downto 3) === B(2)){ // lb/sb
//      (0 to 3).foreach { idx3 =>
//        when(io.rdType(1 downto 0) === B(idx3)) {
//          when(io.exSign) {
//            io.memAcsBus.r.data := memArray(idx3).readSync(acsAddr).asSInt.resize(rvW).asBits
//          }.otherwise {
//            io.memAcsBus.r.data := memArray(idx3).readSync(acsAddr).asUInt.resize(rvW).asBits
//          }
//        }
//      }
//      setRResp := True
//    }
//  }else{
//    when(io.rdType(4 downto 3) === B(3)){ // ld/sd
//      memArray.zipWithIndex.foreach { case (mem, idx4) =>
//        io.memAcsBus.r.data(7 + idx4 * 8 downto idx4 * 8) := memArray(idx4).readSync(acsAddr)
//      }
//      setRResp := True
//    }
//
//    when(io.rdType(4 downto 3) === B(0)){ // lw/sw
//      (0 to 1).foreach { idx5 =>
//        when(io.rdType(0).asBits === B(idx5)) {
//          when(io.exSign) {
//            io.memAcsBus.r.data := (memArray(4 * idx5 + 3).readSync(acsAddr) ## memArray(4 * idx5 + 2).readSync(acsAddr) ##
//              memArray(4 * idx5 + 1).readSync(acsAddr) ## memArray(4 * idx5).readSync(acsAddr)).asSInt.resize(rvW).asBits
//          }.otherwise {
//            io.memAcsBus.r.data := (memArray(4 * idx5 + 3).readSync(acsAddr) ## memArray(4 * idx5 + 2).readSync(acsAddr) ##
//              memArray(4 * idx5 + 1).readSync(acsAddr) ## memArray(4 * idx5).readSync(acsAddr)).asUInt.resize(rvW).asBits
//          }
//        }
//      }
//      setRResp := True
//    }
//    when(io.rdType(4 downto 3) === B(1)){ // lh/sh
//      (0 to 3).foreach { idx6 =>
//        when(io.rdType(1 downto 0) === B(idx6)) {
//          when(io.exSign) {
//            io.memAcsBus.r.data := (memArray(2 * idx6 + 1).readSync(acsAddr) ## memArray(2 * idx6).readSync(acsAddr)).asSInt.resize(rvW).asBits
//          }.otherwise {
//            io.memAcsBus.r.data := (memArray(2 * idx6 + 1).readSync(acsAddr) ## memArray(2 * idx6).readSync(acsAddr)).asUInt.resize(rvW).asBits
//          }
//        }
//      }
//      setRResp := True
//    }
//    when(io.rdType(4 downto 3) === B(2)){ // lb/sb
//      (0 to 3).foreach { idx7 =>
//        when(io.rdType(2 downto 0) === B(idx7)){
//          when(io.exSign) {
//            io.memAcsBus.r.data := memArray(idx7).readSync(acsAddr).asSInt.resize(rvW).asBits
//          }.otherwise {
//            io.memAcsBus.r.data := memArray(idx7).readSync(acsAddr).asUInt.resize(rvW).asBits
//          }
//        }
//      }
//      setRResp := True
//    }
//
//  }
//}
