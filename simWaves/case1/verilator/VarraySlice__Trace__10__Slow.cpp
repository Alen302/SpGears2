// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VarraySlice__Syms.h"


VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_44(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_44\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullSData(oldp+5348,(vlSymsp->TOP__arraySlice.realValue_0_339),9);
    tracep->fullBit(oldp+5349,(((0xffU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_339) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5350,(vlSymsp->TOP__arraySlice.realValue_0_340),9);
    tracep->fullBit(oldp+5351,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_340) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                               + (0xffU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 2U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5352,(vlSymsp->TOP__arraySlice.realValue_0_341),9);
    tracep->fullBit(oldp+5353,(((0x7fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_341) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5354,(vlSymsp->TOP__arraySlice.realValue_0_342),9);
    tracep->fullBit(oldp+5355,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_342) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5356,(vlSymsp->TOP__arraySlice.realValue_0_343),9);
    tracep->fullBit(oldp+5357,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_343) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+5358,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_42) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_42)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_42)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_42)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_42)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_42)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_42)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_42)))))));
    tracep->fullCData(oldp+5359,(vlSymsp->TOP__arraySlice.realValue1_0_41),8);
    tracep->fullBit(oldp+5360,(vlSymsp->TOP__arraySlice.debug_0_43));
    tracep->fullBit(oldp+5361,(vlSymsp->TOP__arraySlice.debug_1_43));
    tracep->fullBit(oldp+5362,(vlSymsp->TOP__arraySlice.debug_2_43));
    tracep->fullBit(oldp+5363,(vlSymsp->TOP__arraySlice.debug_3_43));
    tracep->fullBit(oldp+5364,(vlSymsp->TOP__arraySlice.debug_4_43));
    tracep->fullBit(oldp+5365,(vlSymsp->TOP__arraySlice.debug_5_43));
    tracep->fullBit(oldp+5366,(vlSymsp->TOP__arraySlice.debug_6_43));
    tracep->fullBit(oldp+5367,(vlSymsp->TOP__arraySlice.debug_7_43));
    tracep->fullSData(oldp+5368,(vlSymsp->TOP__arraySlice.realValue_0_344),9);
    tracep->fullBit(oldp+5369,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                           << 3U)) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_344) 
                                               - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5370,(vlSymsp->TOP__arraySlice.realValue_0_345),9);
    tracep->fullBit(oldp+5371,(((0xffU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_345) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5372,(vlSymsp->TOP__arraySlice.realValue_0_346),9);
    tracep->fullBit(oldp+5373,(((0xffU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_346) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                      << 1U)))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5374,(vlSymsp->TOP__arraySlice.realValue_0_347),9);
    tracep->fullBit(oldp+5375,(((0xffU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_347) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5376,(vlSymsp->TOP__arraySlice.realValue_0_348),9);
    tracep->fullBit(oldp+5377,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_348) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                               + (0xffU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 2U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5378,(vlSymsp->TOP__arraySlice.realValue_0_349),9);
    tracep->fullBit(oldp+5379,(((0x7fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_349) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5380,(vlSymsp->TOP__arraySlice.realValue_0_350),9);
    tracep->fullBit(oldp+5381,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_350) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5382,(vlSymsp->TOP__arraySlice.realValue_0_351),9);
    tracep->fullBit(oldp+5383,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_351) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+5384,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_43) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_43)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_43)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_43)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_43)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_43)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_43)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_43)))))));
    tracep->fullCData(oldp+5385,(vlSymsp->TOP__arraySlice.realValue1_0_42),8);
    tracep->fullBit(oldp+5386,(vlSymsp->TOP__arraySlice.debug_0_44));
    tracep->fullBit(oldp+5387,(vlSymsp->TOP__arraySlice.debug_1_44));
    tracep->fullBit(oldp+5388,(vlSymsp->TOP__arraySlice.debug_2_44));
    tracep->fullBit(oldp+5389,(vlSymsp->TOP__arraySlice.debug_3_44));
    tracep->fullBit(oldp+5390,(vlSymsp->TOP__arraySlice.debug_4_44));
    tracep->fullBit(oldp+5391,(vlSymsp->TOP__arraySlice.debug_5_44));
    tracep->fullBit(oldp+5392,(vlSymsp->TOP__arraySlice.debug_6_44));
    tracep->fullBit(oldp+5393,(vlSymsp->TOP__arraySlice.debug_7_44));
    tracep->fullSData(oldp+5394,(vlSymsp->TOP__arraySlice.realValue_0_352),9);
    tracep->fullBit(oldp+5395,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                           << 3U)) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_352) 
                                               - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5396,(vlSymsp->TOP__arraySlice.realValue_0_353),9);
    tracep->fullBit(oldp+5397,(((0xffU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_353) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5398,(vlSymsp->TOP__arraySlice.realValue_0_354),9);
    tracep->fullBit(oldp+5399,(((0xffU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_354) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                      << 1U)))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5400,(vlSymsp->TOP__arraySlice.realValue_0_355),9);
    tracep->fullBit(oldp+5401,(((0xffU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_355) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5402,(vlSymsp->TOP__arraySlice.realValue_0_356),9);
    tracep->fullBit(oldp+5403,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_356) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                               + (0xffU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 2U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5404,(vlSymsp->TOP__arraySlice.realValue_0_357),9);
    tracep->fullBit(oldp+5405,(((0x7fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_357) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5406,(vlSymsp->TOP__arraySlice.realValue_0_358),9);
    tracep->fullBit(oldp+5407,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_358) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5408,(vlSymsp->TOP__arraySlice.realValue_0_359),9);
    tracep->fullBit(oldp+5409,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_359) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_45(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_45\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+5410,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_44) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_44)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_44)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_44)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_44)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_44)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_44)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_44)))))));
    tracep->fullCData(oldp+5411,(vlSymsp->TOP__arraySlice.realValue1_0_43),8);
    tracep->fullBit(oldp+5412,(vlSymsp->TOP__arraySlice.debug_0_45));
    tracep->fullBit(oldp+5413,(vlSymsp->TOP__arraySlice.debug_1_45));
    tracep->fullBit(oldp+5414,(vlSymsp->TOP__arraySlice.debug_2_45));
    tracep->fullBit(oldp+5415,(vlSymsp->TOP__arraySlice.debug_3_45));
    tracep->fullBit(oldp+5416,(vlSymsp->TOP__arraySlice.debug_4_45));
    tracep->fullBit(oldp+5417,(vlSymsp->TOP__arraySlice.debug_5_45));
    tracep->fullBit(oldp+5418,(vlSymsp->TOP__arraySlice.debug_6_45));
    tracep->fullBit(oldp+5419,(vlSymsp->TOP__arraySlice.debug_7_45));
    tracep->fullSData(oldp+5420,(vlSymsp->TOP__arraySlice.realValue_0_360),9);
    tracep->fullBit(oldp+5421,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                           << 3U)) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_360) 
                                               - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5422,(vlSymsp->TOP__arraySlice.realValue_0_361),9);
    tracep->fullBit(oldp+5423,(((0xffU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_361) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5424,(vlSymsp->TOP__arraySlice.realValue_0_362),9);
    tracep->fullBit(oldp+5425,(((0xffU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_362) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                      << 1U)))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5426,(vlSymsp->TOP__arraySlice.realValue_0_363),9);
    tracep->fullBit(oldp+5427,(((0xffU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_363) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5428,(vlSymsp->TOP__arraySlice.realValue_0_364),9);
    tracep->fullBit(oldp+5429,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_364) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                               + (0xffU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 2U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5430,(vlSymsp->TOP__arraySlice.realValue_0_365),9);
    tracep->fullBit(oldp+5431,(((0x7fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_365) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5432,(vlSymsp->TOP__arraySlice.realValue_0_366),9);
    tracep->fullBit(oldp+5433,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_366) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5434,(vlSymsp->TOP__arraySlice.realValue_0_367),9);
    tracep->fullBit(oldp+5435,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_367) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+5436,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_45) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_45)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_45)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_45)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_45)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_45)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_45)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_45)))))));
    tracep->fullCData(oldp+5437,(vlSymsp->TOP__arraySlice.realValue1_0_44),8);
    tracep->fullBit(oldp+5438,(vlSymsp->TOP__arraySlice.debug_0_46));
    tracep->fullBit(oldp+5439,(vlSymsp->TOP__arraySlice.debug_1_46));
    tracep->fullBit(oldp+5440,(vlSymsp->TOP__arraySlice.debug_2_46));
    tracep->fullBit(oldp+5441,(vlSymsp->TOP__arraySlice.debug_3_46));
    tracep->fullBit(oldp+5442,(vlSymsp->TOP__arraySlice.debug_4_46));
    tracep->fullBit(oldp+5443,(vlSymsp->TOP__arraySlice.debug_5_46));
    tracep->fullBit(oldp+5444,(vlSymsp->TOP__arraySlice.debug_6_46));
    tracep->fullBit(oldp+5445,(vlSymsp->TOP__arraySlice.debug_7_46));
    tracep->fullSData(oldp+5446,(vlSymsp->TOP__arraySlice.realValue_0_368),9);
    tracep->fullBit(oldp+5447,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                           << 3U)) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_368) 
                                               - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5448,(vlSymsp->TOP__arraySlice.realValue_0_369),9);
    tracep->fullBit(oldp+5449,(((0xffU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_369) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5450,(vlSymsp->TOP__arraySlice.realValue_0_370),9);
    tracep->fullBit(oldp+5451,(((0xffU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_370) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                      << 1U)))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5452,(vlSymsp->TOP__arraySlice.realValue_0_371),9);
    tracep->fullBit(oldp+5453,(((0xffU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_371) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5454,(vlSymsp->TOP__arraySlice.realValue_0_372),9);
    tracep->fullBit(oldp+5455,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_372) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                               + (0xffU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 2U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5456,(vlSymsp->TOP__arraySlice.realValue_0_373),9);
    tracep->fullBit(oldp+5457,(((0x7fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_373) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5458,(vlSymsp->TOP__arraySlice.realValue_0_374),9);
    tracep->fullBit(oldp+5459,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_374) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5460,(vlSymsp->TOP__arraySlice.realValue_0_375),9);
    tracep->fullBit(oldp+5461,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_375) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+5462,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_46) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_46)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_46)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_46)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_46)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_46)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_46)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_46)))))));
    tracep->fullCData(oldp+5463,(vlSymsp->TOP__arraySlice.realValue1_0_45),8);
    tracep->fullBit(oldp+5464,(vlSymsp->TOP__arraySlice.debug_0_47));
    tracep->fullBit(oldp+5465,(vlSymsp->TOP__arraySlice.debug_1_47));
    tracep->fullBit(oldp+5466,(vlSymsp->TOP__arraySlice.debug_2_47));
    tracep->fullBit(oldp+5467,(vlSymsp->TOP__arraySlice.debug_3_47));
    tracep->fullBit(oldp+5468,(vlSymsp->TOP__arraySlice.debug_4_47));
    tracep->fullBit(oldp+5469,(vlSymsp->TOP__arraySlice.debug_5_47));
    tracep->fullBit(oldp+5470,(vlSymsp->TOP__arraySlice.debug_6_47));
    tracep->fullBit(oldp+5471,(vlSymsp->TOP__arraySlice.debug_7_47));
    tracep->fullSData(oldp+5472,(vlSymsp->TOP__arraySlice.realValue_0_376),9);
    tracep->fullBit(oldp+5473,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                           << 3U)) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_376) 
                                               - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5474,(vlSymsp->TOP__arraySlice.realValue_0_377),9);
    tracep->fullBit(oldp+5475,(((0xffU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_377) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5476,(vlSymsp->TOP__arraySlice.realValue_0_378),9);
    tracep->fullBit(oldp+5477,(((0xffU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_378) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                      << 1U)))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_46(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_46\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullSData(oldp+5478,(vlSymsp->TOP__arraySlice.realValue_0_379),9);
    tracep->fullBit(oldp+5479,(((0xffU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_379) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5480,(vlSymsp->TOP__arraySlice.realValue_0_380),9);
    tracep->fullBit(oldp+5481,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_380) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                               + (0xffU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 2U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5482,(vlSymsp->TOP__arraySlice.realValue_0_381),9);
    tracep->fullBit(oldp+5483,(((0x7fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_381) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5484,(vlSymsp->TOP__arraySlice.realValue_0_382),9);
    tracep->fullBit(oldp+5485,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_382) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5486,(vlSymsp->TOP__arraySlice.realValue_0_383),9);
    tracep->fullBit(oldp+5487,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_383) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+5488,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_47) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_47)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_47)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_47)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_47)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_47)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_47)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_47)))))));
    tracep->fullCData(oldp+5489,(vlSymsp->TOP__arraySlice.realValue1_0_46),8);
    tracep->fullBit(oldp+5490,(vlSymsp->TOP__arraySlice.debug_0_48));
    tracep->fullBit(oldp+5491,(vlSymsp->TOP__arraySlice.debug_1_48));
    tracep->fullBit(oldp+5492,(vlSymsp->TOP__arraySlice.debug_2_48));
    tracep->fullBit(oldp+5493,(vlSymsp->TOP__arraySlice.debug_3_48));
    tracep->fullBit(oldp+5494,(vlSymsp->TOP__arraySlice.debug_4_48));
    tracep->fullBit(oldp+5495,(vlSymsp->TOP__arraySlice.debug_5_48));
    tracep->fullBit(oldp+5496,(vlSymsp->TOP__arraySlice.debug_6_48));
    tracep->fullBit(oldp+5497,(vlSymsp->TOP__arraySlice.debug_7_48));
    tracep->fullSData(oldp+5498,(vlSymsp->TOP__arraySlice.realValue_0_384),9);
    tracep->fullBit(oldp+5499,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                           << 3U)) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_384) 
                                               - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5500,(vlSymsp->TOP__arraySlice.realValue_0_385),9);
    tracep->fullBit(oldp+5501,(((0xffU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_385) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5502,(vlSymsp->TOP__arraySlice.realValue_0_386),9);
    tracep->fullBit(oldp+5503,(((0xffU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_386) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                      << 1U)))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5504,(vlSymsp->TOP__arraySlice.realValue_0_387),9);
    tracep->fullBit(oldp+5505,(((0xffU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_387) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5506,(vlSymsp->TOP__arraySlice.realValue_0_388),9);
    tracep->fullBit(oldp+5507,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_388) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                               + (0xffU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 2U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5508,(vlSymsp->TOP__arraySlice.realValue_0_389),9);
    tracep->fullBit(oldp+5509,(((0x7fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_389) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5510,(vlSymsp->TOP__arraySlice.realValue_0_390),9);
    tracep->fullBit(oldp+5511,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_390) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5512,(vlSymsp->TOP__arraySlice.realValue_0_391),9);
    tracep->fullBit(oldp+5513,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_391) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+5514,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_48) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_48)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_48)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_48)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_48)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_48)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_48)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_48)))))));
    tracep->fullCData(oldp+5515,(vlSymsp->TOP__arraySlice.realValue1_0_47),8);
    tracep->fullBit(oldp+5516,(vlSymsp->TOP__arraySlice.debug_0_49));
    tracep->fullBit(oldp+5517,(vlSymsp->TOP__arraySlice.debug_1_49));
    tracep->fullBit(oldp+5518,(vlSymsp->TOP__arraySlice.debug_2_49));
    tracep->fullBit(oldp+5519,(vlSymsp->TOP__arraySlice.debug_3_49));
    tracep->fullBit(oldp+5520,(vlSymsp->TOP__arraySlice.debug_4_49));
    tracep->fullBit(oldp+5521,(vlSymsp->TOP__arraySlice.debug_5_49));
    tracep->fullBit(oldp+5522,(vlSymsp->TOP__arraySlice.debug_6_49));
    tracep->fullBit(oldp+5523,(vlSymsp->TOP__arraySlice.debug_7_49));
    tracep->fullSData(oldp+5524,(vlSymsp->TOP__arraySlice.realValue_0_392),9);
    tracep->fullBit(oldp+5525,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                           << 3U)) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_392) 
                                               - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5526,(vlSymsp->TOP__arraySlice.realValue_0_393),9);
    tracep->fullBit(oldp+5527,(((0xffU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_393) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5528,(vlSymsp->TOP__arraySlice.realValue_0_394),9);
    tracep->fullBit(oldp+5529,(((0xffU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_394) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                      << 1U)))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5530,(vlSymsp->TOP__arraySlice.realValue_0_395),9);
    tracep->fullBit(oldp+5531,(((0xffU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_395) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5532,(vlSymsp->TOP__arraySlice.realValue_0_396),9);
    tracep->fullBit(oldp+5533,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_396) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                               + (0xffU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 2U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5534,(vlSymsp->TOP__arraySlice.realValue_0_397),9);
    tracep->fullBit(oldp+5535,(((0x7fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_397) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5536,(vlSymsp->TOP__arraySlice.realValue_0_398),9);
    tracep->fullBit(oldp+5537,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_398) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5538,(vlSymsp->TOP__arraySlice.realValue_0_399),9);
    tracep->fullBit(oldp+5539,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_399) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_47(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_47\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+5540,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                         & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_49) 
                                                  & (IData)(vlSymsp->TOP__arraySlice.debug_1_49)) 
                                                 & (IData)(vlSymsp->TOP__arraySlice.debug_2_49)) 
                                                & (IData)(vlSymsp->TOP__arraySlice.debug_3_49)) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_4_49)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_5_49)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_6_49)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_7_49)))))));
    tracep->fullBit(oldp+5541,((((IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l334) 
                                 == (0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__hReg) 
                                              - (IData)(1U)))) 
                                & ((IData)(vlSelf->inputStreamArrayData_valid) 
                                   & (IData)(vlSymsp->TOP__arraySlice.inputStreamArrayData_ready)))));
    tracep->fullBit(oldp+5542,(vlSymsp->TOP__arraySlice.debug_0_50));
    tracep->fullBit(oldp+5543,(vlSymsp->TOP__arraySlice.debug_1_50));
    tracep->fullBit(oldp+5544,(vlSymsp->TOP__arraySlice.debug_2_50));
    tracep->fullBit(oldp+5545,(vlSymsp->TOP__arraySlice.debug_3_50));
    tracep->fullBit(oldp+5546,(vlSymsp->TOP__arraySlice.debug_4_50));
    tracep->fullBit(oldp+5547,(vlSymsp->TOP__arraySlice.debug_5_50));
    tracep->fullBit(oldp+5548,(vlSymsp->TOP__arraySlice.debug_6_50));
    tracep->fullBit(oldp+5549,(vlSymsp->TOP__arraySlice.debug_7_50));
    tracep->fullSData(oldp+5550,(vlSymsp->TOP__arraySlice.realValue_0_400),9);
    tracep->fullBit(oldp+5551,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                           << 3U)) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_400) 
                                               - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5552,(vlSymsp->TOP__arraySlice.realValue_0_401),9);
    tracep->fullBit(oldp+5553,(((0xffU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_401) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5554,(vlSymsp->TOP__arraySlice.realValue_0_402),9);
    tracep->fullBit(oldp+5555,(((0xffU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_402) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                      << 1U)))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5556,(vlSymsp->TOP__arraySlice.realValue_0_403),9);
    tracep->fullBit(oldp+5557,(((0xffU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_403) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5558,(vlSymsp->TOP__arraySlice.realValue_0_404),9);
    tracep->fullBit(oldp+5559,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_404) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                               + (0xffU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 2U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5560,(vlSymsp->TOP__arraySlice.realValue_0_405),9);
    tracep->fullBit(oldp+5561,(((0x7fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_405) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5562,(vlSymsp->TOP__arraySlice.realValue_0_406),9);
    tracep->fullBit(oldp+5563,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_406) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5564,(vlSymsp->TOP__arraySlice.realValue_0_407),9);
    tracep->fullBit(oldp+5565,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_407) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+5566,((((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                      & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                    & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                   & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_50) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_1_50)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.debug_2_50)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.debug_3_50)) 
                                      & (IData)(vlSymsp->TOP__arraySlice.debug_4_50)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.debug_5_50)) 
                                    & (IData)(vlSymsp->TOP__arraySlice.debug_6_50)) 
                                   & (IData)(vlSymsp->TOP__arraySlice.debug_7_50)))));
    tracep->fullBit(oldp+5567,(vlSymsp->TOP__arraySlice.debug_0_51));
    tracep->fullBit(oldp+5568,(vlSymsp->TOP__arraySlice.debug_1_51));
    tracep->fullBit(oldp+5569,(vlSymsp->TOP__arraySlice.debug_2_51));
    tracep->fullBit(oldp+5570,(vlSymsp->TOP__arraySlice.debug_3_51));
    tracep->fullBit(oldp+5571,(vlSymsp->TOP__arraySlice.debug_4_51));
    tracep->fullBit(oldp+5572,(vlSymsp->TOP__arraySlice.debug_5_51));
    tracep->fullBit(oldp+5573,(vlSymsp->TOP__arraySlice.debug_6_51));
    tracep->fullBit(oldp+5574,(vlSymsp->TOP__arraySlice.debug_7_51));
    tracep->fullSData(oldp+5575,(vlSymsp->TOP__arraySlice.realValue_0_408),9);
    tracep->fullBit(oldp+5576,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                           << 3U)) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_408) 
                                               - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5577,(vlSymsp->TOP__arraySlice.realValue_0_409),9);
    tracep->fullBit(oldp+5578,(((0xffU & ((IData)(7U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_409) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                  + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5579,(vlSymsp->TOP__arraySlice.realValue_0_410),9);
    tracep->fullBit(oldp+5580,(((0xffU & ((IData)(6U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_410) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                      << 1U)))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5581,(vlSymsp->TOP__arraySlice.realValue_0_411),9);
    tracep->fullBit(oldp+5582,(((0xffU & ((IData)(5U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_411) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5583,(vlSymsp->TOP__arraySlice.realValue_0_412),9);
    tracep->fullBit(oldp+5584,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 2U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_412) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                               + (0xffU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 2U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5585,(vlSymsp->TOP__arraySlice.realValue_0_413),9);
    tracep->fullBit(oldp+5586,(((0x7fU & ((IData)(3U) 
                                          * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_413) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5587,(vlSymsp->TOP__arraySlice.realValue_0_414),9);
    tracep->fullBit(oldp+5588,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                          << 1U)) <= 
                                (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_414) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                               + (0xffU 
                                                  & ((IData)(6U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullSData(oldp+5589,(vlSymsp->TOP__arraySlice.realValue_0_415),9);
    tracep->fullBit(oldp+5590,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_415) 
                                               - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->fullBit(oldp+5591,(((((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                      & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                    & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                   & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                 & (~ ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_51) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_1_51)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_2_51)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_3_51)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_4_51)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_5_51)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.debug_6_51)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.debug_7_51)))) 
                                & (~ ((((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                              == (0x1ffU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0) 
                                                     - 
                                                     VL_MODDIV_III(9, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                                ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_0))) 
                                            | (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                                == 
                                                (0x1ffU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                    - 
                                                    VL_MODDIV_III(9, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                               & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                                  ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_1)))) 
                                           | (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                               == (0x1ffU 
                                                   & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                      - 
                                                      VL_MODDIV_III(9, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                                 ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_2)))) 
                                          | (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                              == (0x1ffU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                     - 
                                                     VL_MODDIV_III(9, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                             & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                                ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_3)))) 
                                         | (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                             == (0x1ffU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                    - 
                                                    VL_MODDIV_III(9, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                            & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                               ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_4)))) 
                                        | (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                            == (0x1ffU 
                                                & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                                   - 
                                                   VL_MODDIV_III(9, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                              ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_5)))) 
                                       | (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                           == (0x1ffU 
                                               & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                  - 
                                                  VL_MODDIV_III(9, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                             ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_6)))) 
                                      | (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                          == (0x1ffU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                                 - 
                                                 VL_MODDIV_III(9, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                            ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_7))))))));
}

VL_ATTR_COLD void VarraySlice___024root__trace_full_sub_48(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_full_sub_48\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+5592,(0U),2);
    tracep->fullCData(oldp+5593,(1U),2);
    tracep->fullCData(oldp+5594,(2U),2);
    tracep->fullCData(oldp+5595,(3U),2);
    tracep->fullIData(oldp+5596,(vlSymsp->TOP__arraySlice.__PVT__arrayDataType),32);
    tracep->fullBit(oldp+5597,(0U));
}
