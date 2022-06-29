// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VarraySlice__Syms.h"


void VarraySlice___024root__trace_chg_sub_40(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_40\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 5064);
    // Body
    tracep->chgSData(oldp+0,(vlSymsp->TOP__arraySlice.realValue_0_252),9);
    tracep->chgBit(oldp+1,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 2U)) <= (0x1ffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_252) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                           << 2U)))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+2,(vlSymsp->TOP__arraySlice.realValue_0_253),9);
    tracep->chgBit(oldp+3,(((0x7fU & ((IData)(3U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_253) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0xffU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+4,(vlSymsp->TOP__arraySlice.realValue_0_254),9);
    tracep->chgBit(oldp+5,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 1U)) <= (0x1ffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_254) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(6U) 
                                                           * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+6,(vlSymsp->TOP__arraySlice.realValue_0_255),9);
    tracep->chgBit(oldp+7,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_255) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0xffU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+8,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                      & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                     & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_31) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_1_31)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_2_31)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_3_31)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_4_31)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_5_31)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_6_31)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.debug_7_31)))))));
    tracep->chgCData(oldp+9,(vlSymsp->TOP__arraySlice.realValue1_0_30),8);
    tracep->chgBit(oldp+10,(vlSymsp->TOP__arraySlice.debug_0_32));
    tracep->chgBit(oldp+11,(vlSymsp->TOP__arraySlice.debug_1_32));
    tracep->chgBit(oldp+12,(vlSymsp->TOP__arraySlice.debug_2_32));
    tracep->chgBit(oldp+13,(vlSymsp->TOP__arraySlice.debug_3_32));
    tracep->chgBit(oldp+14,(vlSymsp->TOP__arraySlice.debug_4_32));
    tracep->chgBit(oldp+15,(vlSymsp->TOP__arraySlice.debug_5_32));
    tracep->chgBit(oldp+16,(vlSymsp->TOP__arraySlice.debug_6_32));
    tracep->chgBit(oldp+17,(vlSymsp->TOP__arraySlice.debug_7_32));
    tracep->chgSData(oldp+18,(vlSymsp->TOP__arraySlice.realValue_0_256),9);
    tracep->chgBit(oldp+19,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_256) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+20,(vlSymsp->TOP__arraySlice.realValue_0_257),9);
    tracep->chgBit(oldp+21,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_257) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+22,(vlSymsp->TOP__arraySlice.realValue_0_258),9);
    tracep->chgBit(oldp+23,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_258) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+24,(vlSymsp->TOP__arraySlice.realValue_0_259),9);
    tracep->chgBit(oldp+25,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_259) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+26,(vlSymsp->TOP__arraySlice.realValue_0_260),9);
    tracep->chgBit(oldp+27,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_260) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+28,(vlSymsp->TOP__arraySlice.realValue_0_261),9);
    tracep->chgBit(oldp+29,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_261) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+30,(vlSymsp->TOP__arraySlice.realValue_0_262),9);
    tracep->chgBit(oldp+31,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_262) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+32,(vlSymsp->TOP__arraySlice.realValue_0_263),9);
    tracep->chgBit(oldp+33,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_263) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+34,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_32) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_32)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_32)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_32)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_32)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_32)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_32)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_32)))))));
    tracep->chgCData(oldp+35,(vlSymsp->TOP__arraySlice.realValue1_0_31),8);
    tracep->chgBit(oldp+36,(vlSymsp->TOP__arraySlice.debug_0_33));
    tracep->chgBit(oldp+37,(vlSymsp->TOP__arraySlice.debug_1_33));
    tracep->chgBit(oldp+38,(vlSymsp->TOP__arraySlice.debug_2_33));
    tracep->chgBit(oldp+39,(vlSymsp->TOP__arraySlice.debug_3_33));
    tracep->chgBit(oldp+40,(vlSymsp->TOP__arraySlice.debug_4_33));
    tracep->chgBit(oldp+41,(vlSymsp->TOP__arraySlice.debug_5_33));
    tracep->chgBit(oldp+42,(vlSymsp->TOP__arraySlice.debug_6_33));
    tracep->chgBit(oldp+43,(vlSymsp->TOP__arraySlice.debug_7_33));
    tracep->chgSData(oldp+44,(vlSymsp->TOP__arraySlice.realValue_0_264),9);
    tracep->chgBit(oldp+45,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_264) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+46,(vlSymsp->TOP__arraySlice.realValue_0_265),9);
    tracep->chgBit(oldp+47,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_265) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+48,(vlSymsp->TOP__arraySlice.realValue_0_266),9);
    tracep->chgBit(oldp+49,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_266) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+50,(vlSymsp->TOP__arraySlice.realValue_0_267),9);
    tracep->chgBit(oldp+51,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_267) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+52,(vlSymsp->TOP__arraySlice.realValue_0_268),9);
    tracep->chgBit(oldp+53,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_268) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+54,(vlSymsp->TOP__arraySlice.realValue_0_269),9);
    tracep->chgBit(oldp+55,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_269) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+56,(vlSymsp->TOP__arraySlice.realValue_0_270),9);
    tracep->chgBit(oldp+57,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_270) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+58,(vlSymsp->TOP__arraySlice.realValue_0_271),9);
    tracep->chgBit(oldp+59,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_271) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+60,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_33) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_33)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_33)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_33)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_33)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_33)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_33)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_33)))))));
}

void VarraySlice___024root__trace_chg_sub_41(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_41\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 5125);
    // Body
    tracep->chgCData(oldp+0,(vlSymsp->TOP__arraySlice.realValue1_0_32),8);
    tracep->chgBit(oldp+1,(vlSymsp->TOP__arraySlice.debug_0_34));
    tracep->chgBit(oldp+2,(vlSymsp->TOP__arraySlice.debug_1_34));
    tracep->chgBit(oldp+3,(vlSymsp->TOP__arraySlice.debug_2_34));
    tracep->chgBit(oldp+4,(vlSymsp->TOP__arraySlice.debug_3_34));
    tracep->chgBit(oldp+5,(vlSymsp->TOP__arraySlice.debug_4_34));
    tracep->chgBit(oldp+6,(vlSymsp->TOP__arraySlice.debug_5_34));
    tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.debug_6_34));
    tracep->chgBit(oldp+8,(vlSymsp->TOP__arraySlice.debug_7_34));
    tracep->chgSData(oldp+9,(vlSymsp->TOP__arraySlice.realValue_0_272),9);
    tracep->chgBit(oldp+10,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_272) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+11,(vlSymsp->TOP__arraySlice.realValue_0_273),9);
    tracep->chgBit(oldp+12,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_273) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+13,(vlSymsp->TOP__arraySlice.realValue_0_274),9);
    tracep->chgBit(oldp+14,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_274) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+15,(vlSymsp->TOP__arraySlice.realValue_0_275),9);
    tracep->chgBit(oldp+16,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_275) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+17,(vlSymsp->TOP__arraySlice.realValue_0_276),9);
    tracep->chgBit(oldp+18,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_276) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+19,(vlSymsp->TOP__arraySlice.realValue_0_277),9);
    tracep->chgBit(oldp+20,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_277) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+21,(vlSymsp->TOP__arraySlice.realValue_0_278),9);
    tracep->chgBit(oldp+22,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_278) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+23,(vlSymsp->TOP__arraySlice.realValue_0_279),9);
    tracep->chgBit(oldp+24,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_279) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+25,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_34) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_34)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_34)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_34)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_34)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_34)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_34)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_34)))))));
    tracep->chgCData(oldp+26,(vlSymsp->TOP__arraySlice.realValue1_0_33),8);
    tracep->chgBit(oldp+27,(vlSymsp->TOP__arraySlice.debug_0_35));
    tracep->chgBit(oldp+28,(vlSymsp->TOP__arraySlice.debug_1_35));
    tracep->chgBit(oldp+29,(vlSymsp->TOP__arraySlice.debug_2_35));
    tracep->chgBit(oldp+30,(vlSymsp->TOP__arraySlice.debug_3_35));
    tracep->chgBit(oldp+31,(vlSymsp->TOP__arraySlice.debug_4_35));
    tracep->chgBit(oldp+32,(vlSymsp->TOP__arraySlice.debug_5_35));
    tracep->chgBit(oldp+33,(vlSymsp->TOP__arraySlice.debug_6_35));
    tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.debug_7_35));
    tracep->chgSData(oldp+35,(vlSymsp->TOP__arraySlice.realValue_0_280),9);
    tracep->chgBit(oldp+36,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_280) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+37,(vlSymsp->TOP__arraySlice.realValue_0_281),9);
    tracep->chgBit(oldp+38,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_281) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+39,(vlSymsp->TOP__arraySlice.realValue_0_282),9);
    tracep->chgBit(oldp+40,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_282) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+41,(vlSymsp->TOP__arraySlice.realValue_0_283),9);
    tracep->chgBit(oldp+42,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_283) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+43,(vlSymsp->TOP__arraySlice.realValue_0_284),9);
    tracep->chgBit(oldp+44,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_284) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+45,(vlSymsp->TOP__arraySlice.realValue_0_285),9);
    tracep->chgBit(oldp+46,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_285) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+47,(vlSymsp->TOP__arraySlice.realValue_0_286),9);
    tracep->chgBit(oldp+48,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_286) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+49,(vlSymsp->TOP__arraySlice.realValue_0_287),9);
    tracep->chgBit(oldp+50,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_287) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+51,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_35) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_35)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_35)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_35)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_35)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_35)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_35)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_35)))))));
    tracep->chgCData(oldp+52,(vlSymsp->TOP__arraySlice.realValue1_0_34),8);
    tracep->chgBit(oldp+53,(vlSymsp->TOP__arraySlice.debug_0_36));
    tracep->chgBit(oldp+54,(vlSymsp->TOP__arraySlice.debug_1_36));
    tracep->chgBit(oldp+55,(vlSymsp->TOP__arraySlice.debug_2_36));
    tracep->chgBit(oldp+56,(vlSymsp->TOP__arraySlice.debug_3_36));
    tracep->chgBit(oldp+57,(vlSymsp->TOP__arraySlice.debug_4_36));
    tracep->chgBit(oldp+58,(vlSymsp->TOP__arraySlice.debug_5_36));
    tracep->chgBit(oldp+59,(vlSymsp->TOP__arraySlice.debug_6_36));
    tracep->chgBit(oldp+60,(vlSymsp->TOP__arraySlice.debug_7_36));
    tracep->chgSData(oldp+61,(vlSymsp->TOP__arraySlice.realValue_0_288),9);
    tracep->chgBit(oldp+62,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_288) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+63,(vlSymsp->TOP__arraySlice.realValue_0_289),9);
    tracep->chgBit(oldp+64,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_289) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+65,(vlSymsp->TOP__arraySlice.realValue_0_290),9);
    tracep->chgBit(oldp+66,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_290) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+67,(vlSymsp->TOP__arraySlice.realValue_0_291),9);
    tracep->chgBit(oldp+68,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_291) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

void VarraySlice___024root__trace_chg_sub_42(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_42\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 5194);
    // Body
    tracep->chgSData(oldp+0,(vlSymsp->TOP__arraySlice.realValue_0_292),9);
    tracep->chgBit(oldp+1,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 2U)) <= (0x1ffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_292) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                           << 2U)))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+2,(vlSymsp->TOP__arraySlice.realValue_0_293),9);
    tracep->chgBit(oldp+3,(((0x7fU & ((IData)(3U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_293) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0xffU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+4,(vlSymsp->TOP__arraySlice.realValue_0_294),9);
    tracep->chgBit(oldp+5,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 1U)) <= (0x1ffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_294) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(6U) 
                                                           * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+6,(vlSymsp->TOP__arraySlice.realValue_0_295),9);
    tracep->chgBit(oldp+7,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_295) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0xffU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+8,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                      & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                     & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_36) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_1_36)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_2_36)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_3_36)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_4_36)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_5_36)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_6_36)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.debug_7_36)))))));
    tracep->chgCData(oldp+9,(vlSymsp->TOP__arraySlice.realValue1_0_35),8);
    tracep->chgBit(oldp+10,(vlSymsp->TOP__arraySlice.debug_0_37));
    tracep->chgBit(oldp+11,(vlSymsp->TOP__arraySlice.debug_1_37));
    tracep->chgBit(oldp+12,(vlSymsp->TOP__arraySlice.debug_2_37));
    tracep->chgBit(oldp+13,(vlSymsp->TOP__arraySlice.debug_3_37));
    tracep->chgBit(oldp+14,(vlSymsp->TOP__arraySlice.debug_4_37));
    tracep->chgBit(oldp+15,(vlSymsp->TOP__arraySlice.debug_5_37));
    tracep->chgBit(oldp+16,(vlSymsp->TOP__arraySlice.debug_6_37));
    tracep->chgBit(oldp+17,(vlSymsp->TOP__arraySlice.debug_7_37));
    tracep->chgSData(oldp+18,(vlSymsp->TOP__arraySlice.realValue_0_296),9);
    tracep->chgBit(oldp+19,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_296) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+20,(vlSymsp->TOP__arraySlice.realValue_0_297),9);
    tracep->chgBit(oldp+21,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_297) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+22,(vlSymsp->TOP__arraySlice.realValue_0_298),9);
    tracep->chgBit(oldp+23,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_298) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+24,(vlSymsp->TOP__arraySlice.realValue_0_299),9);
    tracep->chgBit(oldp+25,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_299) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+26,(vlSymsp->TOP__arraySlice.realValue_0_300),9);
    tracep->chgBit(oldp+27,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_300) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+28,(vlSymsp->TOP__arraySlice.realValue_0_301),9);
    tracep->chgBit(oldp+29,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_301) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+30,(vlSymsp->TOP__arraySlice.realValue_0_302),9);
    tracep->chgBit(oldp+31,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_302) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+32,(vlSymsp->TOP__arraySlice.realValue_0_303),9);
    tracep->chgBit(oldp+33,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_303) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+34,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_37) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_37)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_37)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_37)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_37)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_37)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_37)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_37)))))));
    tracep->chgCData(oldp+35,(vlSymsp->TOP__arraySlice.realValue1_0_36),8);
    tracep->chgBit(oldp+36,(vlSymsp->TOP__arraySlice.debug_0_38));
    tracep->chgBit(oldp+37,(vlSymsp->TOP__arraySlice.debug_1_38));
    tracep->chgBit(oldp+38,(vlSymsp->TOP__arraySlice.debug_2_38));
    tracep->chgBit(oldp+39,(vlSymsp->TOP__arraySlice.debug_3_38));
    tracep->chgBit(oldp+40,(vlSymsp->TOP__arraySlice.debug_4_38));
    tracep->chgBit(oldp+41,(vlSymsp->TOP__arraySlice.debug_5_38));
    tracep->chgBit(oldp+42,(vlSymsp->TOP__arraySlice.debug_6_38));
    tracep->chgBit(oldp+43,(vlSymsp->TOP__arraySlice.debug_7_38));
    tracep->chgSData(oldp+44,(vlSymsp->TOP__arraySlice.realValue_0_304),9);
    tracep->chgBit(oldp+45,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_304) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+46,(vlSymsp->TOP__arraySlice.realValue_0_305),9);
    tracep->chgBit(oldp+47,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_305) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+48,(vlSymsp->TOP__arraySlice.realValue_0_306),9);
    tracep->chgBit(oldp+49,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_306) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+50,(vlSymsp->TOP__arraySlice.realValue_0_307),9);
    tracep->chgBit(oldp+51,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_307) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+52,(vlSymsp->TOP__arraySlice.realValue_0_308),9);
    tracep->chgBit(oldp+53,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_308) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+54,(vlSymsp->TOP__arraySlice.realValue_0_309),9);
    tracep->chgBit(oldp+55,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_309) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+56,(vlSymsp->TOP__arraySlice.realValue_0_310),9);
    tracep->chgBit(oldp+57,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_310) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+58,(vlSymsp->TOP__arraySlice.realValue_0_311),9);
    tracep->chgBit(oldp+59,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_311) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+60,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_38) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_38)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_38)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_38)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_38)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_38)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_38)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_38)))))));
}

void VarraySlice___024root__trace_chg_sub_43(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_43\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 5255);
    // Body
    tracep->chgCData(oldp+0,(vlSymsp->TOP__arraySlice.realValue1_0_37),8);
    tracep->chgBit(oldp+1,(vlSymsp->TOP__arraySlice.debug_0_39));
    tracep->chgBit(oldp+2,(vlSymsp->TOP__arraySlice.debug_1_39));
    tracep->chgBit(oldp+3,(vlSymsp->TOP__arraySlice.debug_2_39));
    tracep->chgBit(oldp+4,(vlSymsp->TOP__arraySlice.debug_3_39));
    tracep->chgBit(oldp+5,(vlSymsp->TOP__arraySlice.debug_4_39));
    tracep->chgBit(oldp+6,(vlSymsp->TOP__arraySlice.debug_5_39));
    tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.debug_6_39));
    tracep->chgBit(oldp+8,(vlSymsp->TOP__arraySlice.debug_7_39));
    tracep->chgSData(oldp+9,(vlSymsp->TOP__arraySlice.realValue_0_312),9);
    tracep->chgBit(oldp+10,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_312) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+11,(vlSymsp->TOP__arraySlice.realValue_0_313),9);
    tracep->chgBit(oldp+12,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_313) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+13,(vlSymsp->TOP__arraySlice.realValue_0_314),9);
    tracep->chgBit(oldp+14,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_314) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+15,(vlSymsp->TOP__arraySlice.realValue_0_315),9);
    tracep->chgBit(oldp+16,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_315) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+17,(vlSymsp->TOP__arraySlice.realValue_0_316),9);
    tracep->chgBit(oldp+18,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_316) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+19,(vlSymsp->TOP__arraySlice.realValue_0_317),9);
    tracep->chgBit(oldp+20,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_317) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+21,(vlSymsp->TOP__arraySlice.realValue_0_318),9);
    tracep->chgBit(oldp+22,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_318) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+23,(vlSymsp->TOP__arraySlice.realValue_0_319),9);
    tracep->chgBit(oldp+24,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_319) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+25,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_39) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_39)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_39)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_39)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_39)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_39)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_39)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_39)))))));
    tracep->chgCData(oldp+26,(vlSymsp->TOP__arraySlice.realValue1_0_38),8);
    tracep->chgBit(oldp+27,(vlSymsp->TOP__arraySlice.debug_0_40));
    tracep->chgBit(oldp+28,(vlSymsp->TOP__arraySlice.debug_1_40));
    tracep->chgBit(oldp+29,(vlSymsp->TOP__arraySlice.debug_2_40));
    tracep->chgBit(oldp+30,(vlSymsp->TOP__arraySlice.debug_3_40));
    tracep->chgBit(oldp+31,(vlSymsp->TOP__arraySlice.debug_4_40));
    tracep->chgBit(oldp+32,(vlSymsp->TOP__arraySlice.debug_5_40));
    tracep->chgBit(oldp+33,(vlSymsp->TOP__arraySlice.debug_6_40));
    tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.debug_7_40));
    tracep->chgSData(oldp+35,(vlSymsp->TOP__arraySlice.realValue_0_320),9);
    tracep->chgBit(oldp+36,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_320) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+37,(vlSymsp->TOP__arraySlice.realValue_0_321),9);
    tracep->chgBit(oldp+38,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_321) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+39,(vlSymsp->TOP__arraySlice.realValue_0_322),9);
    tracep->chgBit(oldp+40,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_322) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+41,(vlSymsp->TOP__arraySlice.realValue_0_323),9);
    tracep->chgBit(oldp+42,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_323) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+43,(vlSymsp->TOP__arraySlice.realValue_0_324),9);
    tracep->chgBit(oldp+44,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_324) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+45,(vlSymsp->TOP__arraySlice.realValue_0_325),9);
    tracep->chgBit(oldp+46,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_325) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+47,(vlSymsp->TOP__arraySlice.realValue_0_326),9);
    tracep->chgBit(oldp+48,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_326) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+49,(vlSymsp->TOP__arraySlice.realValue_0_327),9);
    tracep->chgBit(oldp+50,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_327) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+51,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_40) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_40)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_40)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_40)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_40)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_40)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_40)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_40)))))));
    tracep->chgCData(oldp+52,(vlSymsp->TOP__arraySlice.realValue1_0_39),8);
    tracep->chgBit(oldp+53,(vlSymsp->TOP__arraySlice.debug_0_41));
    tracep->chgBit(oldp+54,(vlSymsp->TOP__arraySlice.debug_1_41));
    tracep->chgBit(oldp+55,(vlSymsp->TOP__arraySlice.debug_2_41));
    tracep->chgBit(oldp+56,(vlSymsp->TOP__arraySlice.debug_3_41));
    tracep->chgBit(oldp+57,(vlSymsp->TOP__arraySlice.debug_4_41));
    tracep->chgBit(oldp+58,(vlSymsp->TOP__arraySlice.debug_5_41));
    tracep->chgBit(oldp+59,(vlSymsp->TOP__arraySlice.debug_6_41));
    tracep->chgBit(oldp+60,(vlSymsp->TOP__arraySlice.debug_7_41));
    tracep->chgSData(oldp+61,(vlSymsp->TOP__arraySlice.realValue_0_328),9);
    tracep->chgBit(oldp+62,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_328) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+63,(vlSymsp->TOP__arraySlice.realValue_0_329),9);
    tracep->chgBit(oldp+64,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_329) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+65,(vlSymsp->TOP__arraySlice.realValue_0_330),9);
    tracep->chgBit(oldp+66,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_330) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+67,(vlSymsp->TOP__arraySlice.realValue_0_331),9);
    tracep->chgBit(oldp+68,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_331) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

void VarraySlice___024root__trace_chg_sub_44(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_44\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 5324);
    // Body
    tracep->chgSData(oldp+0,(vlSymsp->TOP__arraySlice.realValue_0_332),9);
    tracep->chgBit(oldp+1,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 2U)) <= (0x1ffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_332) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                           << 2U)))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+2,(vlSymsp->TOP__arraySlice.realValue_0_333),9);
    tracep->chgBit(oldp+3,(((0x7fU & ((IData)(3U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_333) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0xffU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+4,(vlSymsp->TOP__arraySlice.realValue_0_334),9);
    tracep->chgBit(oldp+5,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 1U)) <= (0x1ffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_334) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(6U) 
                                                           * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+6,(vlSymsp->TOP__arraySlice.realValue_0_335),9);
    tracep->chgBit(oldp+7,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_335) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0xffU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+8,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                      & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                     & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_41) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_1_41)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_2_41)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_3_41)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_4_41)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_5_41)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_6_41)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.debug_7_41)))))));
    tracep->chgCData(oldp+9,(vlSymsp->TOP__arraySlice.realValue1_0_40),8);
    tracep->chgBit(oldp+10,(vlSymsp->TOP__arraySlice.debug_0_42));
    tracep->chgBit(oldp+11,(vlSymsp->TOP__arraySlice.debug_1_42));
    tracep->chgBit(oldp+12,(vlSymsp->TOP__arraySlice.debug_2_42));
    tracep->chgBit(oldp+13,(vlSymsp->TOP__arraySlice.debug_3_42));
    tracep->chgBit(oldp+14,(vlSymsp->TOP__arraySlice.debug_4_42));
    tracep->chgBit(oldp+15,(vlSymsp->TOP__arraySlice.debug_5_42));
    tracep->chgBit(oldp+16,(vlSymsp->TOP__arraySlice.debug_6_42));
    tracep->chgBit(oldp+17,(vlSymsp->TOP__arraySlice.debug_7_42));
    tracep->chgSData(oldp+18,(vlSymsp->TOP__arraySlice.realValue_0_336),9);
    tracep->chgBit(oldp+19,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_336) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+20,(vlSymsp->TOP__arraySlice.realValue_0_337),9);
    tracep->chgBit(oldp+21,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_337) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+22,(vlSymsp->TOP__arraySlice.realValue_0_338),9);
    tracep->chgBit(oldp+23,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_338) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+24,(vlSymsp->TOP__arraySlice.realValue_0_339),9);
    tracep->chgBit(oldp+25,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_339) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+26,(vlSymsp->TOP__arraySlice.realValue_0_340),9);
    tracep->chgBit(oldp+27,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_340) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+28,(vlSymsp->TOP__arraySlice.realValue_0_341),9);
    tracep->chgBit(oldp+29,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_341) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+30,(vlSymsp->TOP__arraySlice.realValue_0_342),9);
    tracep->chgBit(oldp+31,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_342) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+32,(vlSymsp->TOP__arraySlice.realValue_0_343),9);
    tracep->chgBit(oldp+33,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_343) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+34,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->chgCData(oldp+35,(vlSymsp->TOP__arraySlice.realValue1_0_41),8);
    tracep->chgBit(oldp+36,(vlSymsp->TOP__arraySlice.debug_0_43));
    tracep->chgBit(oldp+37,(vlSymsp->TOP__arraySlice.debug_1_43));
    tracep->chgBit(oldp+38,(vlSymsp->TOP__arraySlice.debug_2_43));
    tracep->chgBit(oldp+39,(vlSymsp->TOP__arraySlice.debug_3_43));
    tracep->chgBit(oldp+40,(vlSymsp->TOP__arraySlice.debug_4_43));
    tracep->chgBit(oldp+41,(vlSymsp->TOP__arraySlice.debug_5_43));
    tracep->chgBit(oldp+42,(vlSymsp->TOP__arraySlice.debug_6_43));
    tracep->chgBit(oldp+43,(vlSymsp->TOP__arraySlice.debug_7_43));
    tracep->chgSData(oldp+44,(vlSymsp->TOP__arraySlice.realValue_0_344),9);
    tracep->chgBit(oldp+45,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_344) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+46,(vlSymsp->TOP__arraySlice.realValue_0_345),9);
    tracep->chgBit(oldp+47,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_345) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+48,(vlSymsp->TOP__arraySlice.realValue_0_346),9);
    tracep->chgBit(oldp+49,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_346) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+50,(vlSymsp->TOP__arraySlice.realValue_0_347),9);
    tracep->chgBit(oldp+51,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_347) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+52,(vlSymsp->TOP__arraySlice.realValue_0_348),9);
    tracep->chgBit(oldp+53,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_348) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+54,(vlSymsp->TOP__arraySlice.realValue_0_349),9);
    tracep->chgBit(oldp+55,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_349) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+56,(vlSymsp->TOP__arraySlice.realValue_0_350),9);
    tracep->chgBit(oldp+57,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_350) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+58,(vlSymsp->TOP__arraySlice.realValue_0_351),9);
    tracep->chgBit(oldp+59,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_351) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+60,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
}

void VarraySlice___024root__trace_chg_sub_45(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_45\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 5385);
    // Body
    tracep->chgCData(oldp+0,(vlSymsp->TOP__arraySlice.realValue1_0_42),8);
    tracep->chgBit(oldp+1,(vlSymsp->TOP__arraySlice.debug_0_44));
    tracep->chgBit(oldp+2,(vlSymsp->TOP__arraySlice.debug_1_44));
    tracep->chgBit(oldp+3,(vlSymsp->TOP__arraySlice.debug_2_44));
    tracep->chgBit(oldp+4,(vlSymsp->TOP__arraySlice.debug_3_44));
    tracep->chgBit(oldp+5,(vlSymsp->TOP__arraySlice.debug_4_44));
    tracep->chgBit(oldp+6,(vlSymsp->TOP__arraySlice.debug_5_44));
    tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.debug_6_44));
    tracep->chgBit(oldp+8,(vlSymsp->TOP__arraySlice.debug_7_44));
    tracep->chgSData(oldp+9,(vlSymsp->TOP__arraySlice.realValue_0_352),9);
    tracep->chgBit(oldp+10,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_352) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+11,(vlSymsp->TOP__arraySlice.realValue_0_353),9);
    tracep->chgBit(oldp+12,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_353) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+13,(vlSymsp->TOP__arraySlice.realValue_0_354),9);
    tracep->chgBit(oldp+14,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_354) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+15,(vlSymsp->TOP__arraySlice.realValue_0_355),9);
    tracep->chgBit(oldp+16,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_355) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+17,(vlSymsp->TOP__arraySlice.realValue_0_356),9);
    tracep->chgBit(oldp+18,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_356) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+19,(vlSymsp->TOP__arraySlice.realValue_0_357),9);
    tracep->chgBit(oldp+20,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_357) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+21,(vlSymsp->TOP__arraySlice.realValue_0_358),9);
    tracep->chgBit(oldp+22,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_358) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+23,(vlSymsp->TOP__arraySlice.realValue_0_359),9);
    tracep->chgBit(oldp+24,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_359) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+25,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->chgCData(oldp+26,(vlSymsp->TOP__arraySlice.realValue1_0_43),8);
    tracep->chgBit(oldp+27,(vlSymsp->TOP__arraySlice.debug_0_45));
    tracep->chgBit(oldp+28,(vlSymsp->TOP__arraySlice.debug_1_45));
    tracep->chgBit(oldp+29,(vlSymsp->TOP__arraySlice.debug_2_45));
    tracep->chgBit(oldp+30,(vlSymsp->TOP__arraySlice.debug_3_45));
    tracep->chgBit(oldp+31,(vlSymsp->TOP__arraySlice.debug_4_45));
    tracep->chgBit(oldp+32,(vlSymsp->TOP__arraySlice.debug_5_45));
    tracep->chgBit(oldp+33,(vlSymsp->TOP__arraySlice.debug_6_45));
    tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.debug_7_45));
    tracep->chgSData(oldp+35,(vlSymsp->TOP__arraySlice.realValue_0_360),9);
    tracep->chgBit(oldp+36,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_360) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+37,(vlSymsp->TOP__arraySlice.realValue_0_361),9);
    tracep->chgBit(oldp+38,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_361) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+39,(vlSymsp->TOP__arraySlice.realValue_0_362),9);
    tracep->chgBit(oldp+40,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_362) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+41,(vlSymsp->TOP__arraySlice.realValue_0_363),9);
    tracep->chgBit(oldp+42,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_363) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+43,(vlSymsp->TOP__arraySlice.realValue_0_364),9);
    tracep->chgBit(oldp+44,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_364) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+45,(vlSymsp->TOP__arraySlice.realValue_0_365),9);
    tracep->chgBit(oldp+46,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_365) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+47,(vlSymsp->TOP__arraySlice.realValue_0_366),9);
    tracep->chgBit(oldp+48,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_366) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+49,(vlSymsp->TOP__arraySlice.realValue_0_367),9);
    tracep->chgBit(oldp+50,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_367) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+51,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->chgCData(oldp+52,(vlSymsp->TOP__arraySlice.realValue1_0_44),8);
    tracep->chgBit(oldp+53,(vlSymsp->TOP__arraySlice.debug_0_46));
    tracep->chgBit(oldp+54,(vlSymsp->TOP__arraySlice.debug_1_46));
    tracep->chgBit(oldp+55,(vlSymsp->TOP__arraySlice.debug_2_46));
    tracep->chgBit(oldp+56,(vlSymsp->TOP__arraySlice.debug_3_46));
    tracep->chgBit(oldp+57,(vlSymsp->TOP__arraySlice.debug_4_46));
    tracep->chgBit(oldp+58,(vlSymsp->TOP__arraySlice.debug_5_46));
    tracep->chgBit(oldp+59,(vlSymsp->TOP__arraySlice.debug_6_46));
    tracep->chgBit(oldp+60,(vlSymsp->TOP__arraySlice.debug_7_46));
    tracep->chgSData(oldp+61,(vlSymsp->TOP__arraySlice.realValue_0_368),9);
    tracep->chgBit(oldp+62,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_368) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+63,(vlSymsp->TOP__arraySlice.realValue_0_369),9);
    tracep->chgBit(oldp+64,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_369) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+65,(vlSymsp->TOP__arraySlice.realValue_0_370),9);
    tracep->chgBit(oldp+66,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_370) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+67,(vlSymsp->TOP__arraySlice.realValue_0_371),9);
    tracep->chgBit(oldp+68,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_371) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

void VarraySlice___024root__trace_chg_sub_46(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_46\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 5454);
    // Body
    tracep->chgSData(oldp+0,(vlSymsp->TOP__arraySlice.realValue_0_372),9);
    tracep->chgBit(oldp+1,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 2U)) <= (0x1ffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_372) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                           << 2U)))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+2,(vlSymsp->TOP__arraySlice.realValue_0_373),9);
    tracep->chgBit(oldp+3,(((0x7fU & ((IData)(3U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_373) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0xffU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+4,(vlSymsp->TOP__arraySlice.realValue_0_374),9);
    tracep->chgBit(oldp+5,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 1U)) <= (0x1ffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_374) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(6U) 
                                                           * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+6,(vlSymsp->TOP__arraySlice.realValue_0_375),9);
    tracep->chgBit(oldp+7,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_375) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0xffU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+8,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->chgCData(oldp+9,(vlSymsp->TOP__arraySlice.realValue1_0_45),8);
    tracep->chgBit(oldp+10,(vlSymsp->TOP__arraySlice.debug_0_47));
    tracep->chgBit(oldp+11,(vlSymsp->TOP__arraySlice.debug_1_47));
    tracep->chgBit(oldp+12,(vlSymsp->TOP__arraySlice.debug_2_47));
    tracep->chgBit(oldp+13,(vlSymsp->TOP__arraySlice.debug_3_47));
    tracep->chgBit(oldp+14,(vlSymsp->TOP__arraySlice.debug_4_47));
    tracep->chgBit(oldp+15,(vlSymsp->TOP__arraySlice.debug_5_47));
    tracep->chgBit(oldp+16,(vlSymsp->TOP__arraySlice.debug_6_47));
    tracep->chgBit(oldp+17,(vlSymsp->TOP__arraySlice.debug_7_47));
    tracep->chgSData(oldp+18,(vlSymsp->TOP__arraySlice.realValue_0_376),9);
    tracep->chgBit(oldp+19,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_376) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+20,(vlSymsp->TOP__arraySlice.realValue_0_377),9);
    tracep->chgBit(oldp+21,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_377) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+22,(vlSymsp->TOP__arraySlice.realValue_0_378),9);
    tracep->chgBit(oldp+23,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_378) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+24,(vlSymsp->TOP__arraySlice.realValue_0_379),9);
    tracep->chgBit(oldp+25,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_379) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+26,(vlSymsp->TOP__arraySlice.realValue_0_380),9);
    tracep->chgBit(oldp+27,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_380) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+28,(vlSymsp->TOP__arraySlice.realValue_0_381),9);
    tracep->chgBit(oldp+29,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_381) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+30,(vlSymsp->TOP__arraySlice.realValue_0_382),9);
    tracep->chgBit(oldp+31,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_382) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+32,(vlSymsp->TOP__arraySlice.realValue_0_383),9);
    tracep->chgBit(oldp+33,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_383) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+34,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->chgCData(oldp+35,(vlSymsp->TOP__arraySlice.realValue1_0_46),8);
    tracep->chgBit(oldp+36,(vlSymsp->TOP__arraySlice.debug_0_48));
    tracep->chgBit(oldp+37,(vlSymsp->TOP__arraySlice.debug_1_48));
    tracep->chgBit(oldp+38,(vlSymsp->TOP__arraySlice.debug_2_48));
    tracep->chgBit(oldp+39,(vlSymsp->TOP__arraySlice.debug_3_48));
    tracep->chgBit(oldp+40,(vlSymsp->TOP__arraySlice.debug_4_48));
    tracep->chgBit(oldp+41,(vlSymsp->TOP__arraySlice.debug_5_48));
    tracep->chgBit(oldp+42,(vlSymsp->TOP__arraySlice.debug_6_48));
    tracep->chgBit(oldp+43,(vlSymsp->TOP__arraySlice.debug_7_48));
    tracep->chgSData(oldp+44,(vlSymsp->TOP__arraySlice.realValue_0_384),9);
    tracep->chgBit(oldp+45,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_384) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+46,(vlSymsp->TOP__arraySlice.realValue_0_385),9);
    tracep->chgBit(oldp+47,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_385) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+48,(vlSymsp->TOP__arraySlice.realValue_0_386),9);
    tracep->chgBit(oldp+49,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_386) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+50,(vlSymsp->TOP__arraySlice.realValue_0_387),9);
    tracep->chgBit(oldp+51,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_387) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+52,(vlSymsp->TOP__arraySlice.realValue_0_388),9);
    tracep->chgBit(oldp+53,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_388) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+54,(vlSymsp->TOP__arraySlice.realValue_0_389),9);
    tracep->chgBit(oldp+55,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_389) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+56,(vlSymsp->TOP__arraySlice.realValue_0_390),9);
    tracep->chgBit(oldp+57,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_390) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+58,(vlSymsp->TOP__arraySlice.realValue_0_391),9);
    tracep->chgBit(oldp+59,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_391) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+60,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
}

void VarraySlice___024root__trace_chg_sub_47(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_47\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 5515);
    // Body
    tracep->chgCData(oldp+0,(vlSymsp->TOP__arraySlice.realValue1_0_47),8);
    tracep->chgBit(oldp+1,(vlSymsp->TOP__arraySlice.debug_0_49));
    tracep->chgBit(oldp+2,(vlSymsp->TOP__arraySlice.debug_1_49));
    tracep->chgBit(oldp+3,(vlSymsp->TOP__arraySlice.debug_2_49));
    tracep->chgBit(oldp+4,(vlSymsp->TOP__arraySlice.debug_3_49));
    tracep->chgBit(oldp+5,(vlSymsp->TOP__arraySlice.debug_4_49));
    tracep->chgBit(oldp+6,(vlSymsp->TOP__arraySlice.debug_5_49));
    tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.debug_6_49));
    tracep->chgBit(oldp+8,(vlSymsp->TOP__arraySlice.debug_7_49));
    tracep->chgSData(oldp+9,(vlSymsp->TOP__arraySlice.realValue_0_392),9);
    tracep->chgBit(oldp+10,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_392) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+11,(vlSymsp->TOP__arraySlice.realValue_0_393),9);
    tracep->chgBit(oldp+12,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_393) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+13,(vlSymsp->TOP__arraySlice.realValue_0_394),9);
    tracep->chgBit(oldp+14,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_394) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+15,(vlSymsp->TOP__arraySlice.realValue_0_395),9);
    tracep->chgBit(oldp+16,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_395) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+17,(vlSymsp->TOP__arraySlice.realValue_0_396),9);
    tracep->chgBit(oldp+18,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_396) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+19,(vlSymsp->TOP__arraySlice.realValue_0_397),9);
    tracep->chgBit(oldp+20,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_397) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+21,(vlSymsp->TOP__arraySlice.realValue_0_398),9);
    tracep->chgBit(oldp+22,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_398) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+23,(vlSymsp->TOP__arraySlice.realValue_0_399),9);
    tracep->chgBit(oldp+24,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_399) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+25,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->chgBit(oldp+26,((((IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l334) 
                              == (0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__hReg) 
                                           - (IData)(1U)))) 
                             & ((IData)(vlSelf->inputStreamArrayData_valid) 
                                & (IData)(vlSymsp->TOP__arraySlice.inputStreamArrayData_ready)))));
    tracep->chgBit(oldp+27,(vlSymsp->TOP__arraySlice.debug_0_50));
    tracep->chgBit(oldp+28,(vlSymsp->TOP__arraySlice.debug_1_50));
    tracep->chgBit(oldp+29,(vlSymsp->TOP__arraySlice.debug_2_50));
    tracep->chgBit(oldp+30,(vlSymsp->TOP__arraySlice.debug_3_50));
    tracep->chgBit(oldp+31,(vlSymsp->TOP__arraySlice.debug_4_50));
    tracep->chgBit(oldp+32,(vlSymsp->TOP__arraySlice.debug_5_50));
    tracep->chgBit(oldp+33,(vlSymsp->TOP__arraySlice.debug_6_50));
    tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.debug_7_50));
    tracep->chgSData(oldp+35,(vlSymsp->TOP__arraySlice.realValue_0_400),9);
    tracep->chgBit(oldp+36,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_400) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+37,(vlSymsp->TOP__arraySlice.realValue_0_401),9);
    tracep->chgBit(oldp+38,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_401) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+39,(vlSymsp->TOP__arraySlice.realValue_0_402),9);
    tracep->chgBit(oldp+40,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_402) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+41,(vlSymsp->TOP__arraySlice.realValue_0_403),9);
    tracep->chgBit(oldp+42,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_403) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+43,(vlSymsp->TOP__arraySlice.realValue_0_404),9);
    tracep->chgBit(oldp+44,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_404) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+45,(vlSymsp->TOP__arraySlice.realValue_0_405),9);
    tracep->chgBit(oldp+46,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_405) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+47,(vlSymsp->TOP__arraySlice.realValue_0_406),9);
    tracep->chgBit(oldp+48,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_406) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+49,(vlSymsp->TOP__arraySlice.realValue_0_407),9);
    tracep->chgBit(oldp+50,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_407) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+51,((((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
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
    tracep->chgBit(oldp+52,(vlSymsp->TOP__arraySlice.debug_0_51));
    tracep->chgBit(oldp+53,(vlSymsp->TOP__arraySlice.debug_1_51));
    tracep->chgBit(oldp+54,(vlSymsp->TOP__arraySlice.debug_2_51));
    tracep->chgBit(oldp+55,(vlSymsp->TOP__arraySlice.debug_3_51));
    tracep->chgBit(oldp+56,(vlSymsp->TOP__arraySlice.debug_4_51));
    tracep->chgBit(oldp+57,(vlSymsp->TOP__arraySlice.debug_5_51));
    tracep->chgBit(oldp+58,(vlSymsp->TOP__arraySlice.debug_6_51));
    tracep->chgBit(oldp+59,(vlSymsp->TOP__arraySlice.debug_7_51));
    tracep->chgSData(oldp+60,(vlSymsp->TOP__arraySlice.realValue_0_408),9);
    tracep->chgBit(oldp+61,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_408) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+62,(vlSymsp->TOP__arraySlice.realValue_0_409),9);
    tracep->chgBit(oldp+63,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_409) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+64,(vlSymsp->TOP__arraySlice.realValue_0_410),9);
    tracep->chgBit(oldp+65,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_410) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+66,(vlSymsp->TOP__arraySlice.realValue_0_411),9);
    tracep->chgBit(oldp+67,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_411) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}
