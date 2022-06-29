// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VarraySlice__Syms.h"


void VarraySlice___024root__trace_chg_sub_32(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_32\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 4546);
    // Body
    tracep->chgBit(oldp+0,(((0U == (0x3fffU & VL_MODDIV_III(14, 
                                                            (0x3fffU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_3_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                            & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_3_valid) 
                               & (IData)(vlSelf->outputStreamArrayData_3_ready)))));
    tracep->chgCData(oldp+1,(vlSymsp->TOP__arraySlice.realValue1_0_11),8);
    tracep->chgBit(oldp+2,(vlSymsp->TOP__arraySlice.debug_0_12));
    tracep->chgBit(oldp+3,(vlSymsp->TOP__arraySlice.debug_1_12));
    tracep->chgBit(oldp+4,(vlSymsp->TOP__arraySlice.debug_2_12));
    tracep->chgBit(oldp+5,(vlSymsp->TOP__arraySlice.debug_3_12));
    tracep->chgBit(oldp+6,(vlSymsp->TOP__arraySlice.debug_4_12));
    tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.debug_5_12));
    tracep->chgBit(oldp+8,(vlSymsp->TOP__arraySlice.debug_6_12));
    tracep->chgBit(oldp+9,(vlSymsp->TOP__arraySlice.debug_7_12));
    tracep->chgSData(oldp+10,(vlSymsp->TOP__arraySlice.realValue_0_96),9);
    tracep->chgBit(oldp+11,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_96) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+12,(vlSymsp->TOP__arraySlice.realValue_0_97),9);
    tracep->chgBit(oldp+13,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_97) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+14,(vlSymsp->TOP__arraySlice.realValue_0_98),9);
    tracep->chgBit(oldp+15,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_98) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+16,(vlSymsp->TOP__arraySlice.realValue_0_99),9);
    tracep->chgBit(oldp+17,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_99) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+18,(vlSymsp->TOP__arraySlice.realValue_0_100),9);
    tracep->chgBit(oldp+19,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_100) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+20,(vlSymsp->TOP__arraySlice.realValue_0_101),9);
    tracep->chgBit(oldp+21,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_101) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+22,(vlSymsp->TOP__arraySlice.realValue_0_102),9);
    tracep->chgBit(oldp+23,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_102) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+24,(vlSymsp->TOP__arraySlice.realValue_0_103),9);
    tracep->chgBit(oldp+25,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_103) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+26,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_12) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_12)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_12)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_12)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_12)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_12)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_12)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_12)))))));
    tracep->chgBit(oldp+27,(((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_4_valid) 
                             & (IData)(vlSelf->outputStreamArrayData_4_ready))));
    tracep->chgCData(oldp+28,(vlSymsp->TOP__arraySlice.realValue1_0_12),8);
    tracep->chgBit(oldp+29,(vlSymsp->TOP__arraySlice.debug_0_13));
    tracep->chgBit(oldp+30,(vlSymsp->TOP__arraySlice.debug_1_13));
    tracep->chgBit(oldp+31,(vlSymsp->TOP__arraySlice.debug_2_13));
    tracep->chgBit(oldp+32,(vlSymsp->TOP__arraySlice.debug_3_13));
    tracep->chgBit(oldp+33,(vlSymsp->TOP__arraySlice.debug_4_13));
    tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.debug_5_13));
    tracep->chgBit(oldp+35,(vlSymsp->TOP__arraySlice.debug_6_13));
    tracep->chgBit(oldp+36,(vlSymsp->TOP__arraySlice.debug_7_13));
    tracep->chgSData(oldp+37,(vlSymsp->TOP__arraySlice.realValue_0_104),9);
    tracep->chgBit(oldp+38,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_104) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+39,(vlSymsp->TOP__arraySlice.realValue_0_105),9);
    tracep->chgBit(oldp+40,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_105) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+41,(vlSymsp->TOP__arraySlice.realValue_0_106),9);
    tracep->chgBit(oldp+42,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_106) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+43,(vlSymsp->TOP__arraySlice.realValue_0_107),9);
    tracep->chgBit(oldp+44,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_107) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+45,(vlSymsp->TOP__arraySlice.realValue_0_108),9);
    tracep->chgBit(oldp+46,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_108) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+47,(vlSymsp->TOP__arraySlice.realValue_0_109),9);
    tracep->chgBit(oldp+48,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_109) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+49,(vlSymsp->TOP__arraySlice.realValue_0_110),9);
    tracep->chgBit(oldp+50,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_110) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+51,(vlSymsp->TOP__arraySlice.realValue_0_111),9);
    tracep->chgBit(oldp+52,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_111) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+53,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_13) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_13)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_13)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_13)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_13)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_13)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_13)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_13)))))));
    tracep->chgCData(oldp+54,(vlSymsp->TOP__arraySlice.realValue1_0_13),8);
    tracep->chgBit(oldp+55,(vlSymsp->TOP__arraySlice.debug_0_14));
    tracep->chgBit(oldp+56,(vlSymsp->TOP__arraySlice.debug_1_14));
    tracep->chgBit(oldp+57,(vlSymsp->TOP__arraySlice.debug_2_14));
    tracep->chgBit(oldp+58,(vlSymsp->TOP__arraySlice.debug_3_14));
    tracep->chgBit(oldp+59,(vlSymsp->TOP__arraySlice.debug_4_14));
    tracep->chgBit(oldp+60,(vlSymsp->TOP__arraySlice.debug_5_14));
    tracep->chgBit(oldp+61,(vlSymsp->TOP__arraySlice.debug_6_14));
    tracep->chgBit(oldp+62,(vlSymsp->TOP__arraySlice.debug_7_14));
    tracep->chgSData(oldp+63,(vlSymsp->TOP__arraySlice.realValue_0_112),9);
    tracep->chgBit(oldp+64,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_112) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+65,(vlSymsp->TOP__arraySlice.realValue_0_113),9);
    tracep->chgBit(oldp+66,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_113) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+67,(vlSymsp->TOP__arraySlice.realValue_0_114),9);
    tracep->chgBit(oldp+68,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_114) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

void VarraySlice___024root__trace_chg_sub_33(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_33\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 4615);
    // Body
    tracep->chgSData(oldp+0,(vlSymsp->TOP__arraySlice.realValue_0_115),9);
    tracep->chgBit(oldp+1,(((0xffU & ((IData)(5U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_115) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x7fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+2,(vlSymsp->TOP__arraySlice.realValue_0_116),9);
    tracep->chgBit(oldp+3,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 2U)) <= (0x1ffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_116) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                           << 2U)))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+4,(vlSymsp->TOP__arraySlice.realValue_0_117),9);
    tracep->chgBit(oldp+5,(((0x7fU & ((IData)(3U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_117) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0xffU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+6,(vlSymsp->TOP__arraySlice.realValue_0_118),9);
    tracep->chgBit(oldp+7,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 1U)) <= (0x1ffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_118) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(6U) 
                                                           * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+8,(vlSymsp->TOP__arraySlice.realValue_0_119),9);
    tracep->chgBit(oldp+9,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_119) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0xffU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+10,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_14) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_14)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_14)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_14)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_14)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_14)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_14)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_14)))))));
    tracep->chgBit(oldp+11,(((0U == (0x3fffU & VL_MODDIV_III(14, 
                                                             (0x3fffU 
                                                              & ((IData)(1U) 
                                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_4_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                             & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_4_valid) 
                                & (IData)(vlSelf->outputStreamArrayData_4_ready)))));
    tracep->chgCData(oldp+12,(vlSymsp->TOP__arraySlice.realValue1_0_14),8);
    tracep->chgBit(oldp+13,(vlSymsp->TOP__arraySlice.debug_0_15));
    tracep->chgBit(oldp+14,(vlSymsp->TOP__arraySlice.debug_1_15));
    tracep->chgBit(oldp+15,(vlSymsp->TOP__arraySlice.debug_2_15));
    tracep->chgBit(oldp+16,(vlSymsp->TOP__arraySlice.debug_3_15));
    tracep->chgBit(oldp+17,(vlSymsp->TOP__arraySlice.debug_4_15));
    tracep->chgBit(oldp+18,(vlSymsp->TOP__arraySlice.debug_5_15));
    tracep->chgBit(oldp+19,(vlSymsp->TOP__arraySlice.debug_6_15));
    tracep->chgBit(oldp+20,(vlSymsp->TOP__arraySlice.debug_7_15));
    tracep->chgSData(oldp+21,(vlSymsp->TOP__arraySlice.realValue_0_120),9);
    tracep->chgBit(oldp+22,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_120) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+23,(vlSymsp->TOP__arraySlice.realValue_0_121),9);
    tracep->chgBit(oldp+24,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_121) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+25,(vlSymsp->TOP__arraySlice.realValue_0_122),9);
    tracep->chgBit(oldp+26,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_122) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+27,(vlSymsp->TOP__arraySlice.realValue_0_123),9);
    tracep->chgBit(oldp+28,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_123) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+29,(vlSymsp->TOP__arraySlice.realValue_0_124),9);
    tracep->chgBit(oldp+30,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_124) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+31,(vlSymsp->TOP__arraySlice.realValue_0_125),9);
    tracep->chgBit(oldp+32,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_125) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+33,(vlSymsp->TOP__arraySlice.realValue_0_126),9);
    tracep->chgBit(oldp+34,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_126) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+35,(vlSymsp->TOP__arraySlice.realValue_0_127),9);
    tracep->chgBit(oldp+36,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_127) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+37,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_15) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_15)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_15)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_15)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_15)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_15)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_15)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_15)))))));
    tracep->chgBit(oldp+38,(((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_5_valid) 
                             & (IData)(vlSelf->outputStreamArrayData_5_ready))));
    tracep->chgCData(oldp+39,(vlSymsp->TOP__arraySlice.realValue1_0_15),8);
    tracep->chgBit(oldp+40,(vlSymsp->TOP__arraySlice.debug_0_16));
    tracep->chgBit(oldp+41,(vlSymsp->TOP__arraySlice.debug_1_16));
    tracep->chgBit(oldp+42,(vlSymsp->TOP__arraySlice.debug_2_16));
    tracep->chgBit(oldp+43,(vlSymsp->TOP__arraySlice.debug_3_16));
    tracep->chgBit(oldp+44,(vlSymsp->TOP__arraySlice.debug_4_16));
    tracep->chgBit(oldp+45,(vlSymsp->TOP__arraySlice.debug_5_16));
    tracep->chgBit(oldp+46,(vlSymsp->TOP__arraySlice.debug_6_16));
    tracep->chgBit(oldp+47,(vlSymsp->TOP__arraySlice.debug_7_16));
    tracep->chgSData(oldp+48,(vlSymsp->TOP__arraySlice.realValue_0_128),9);
    tracep->chgBit(oldp+49,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_128) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+50,(vlSymsp->TOP__arraySlice.realValue_0_129),9);
    tracep->chgBit(oldp+51,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_129) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+52,(vlSymsp->TOP__arraySlice.realValue_0_130),9);
    tracep->chgBit(oldp+53,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_130) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+54,(vlSymsp->TOP__arraySlice.realValue_0_131),9);
    tracep->chgBit(oldp+55,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_131) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+56,(vlSymsp->TOP__arraySlice.realValue_0_132),9);
    tracep->chgBit(oldp+57,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_132) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+58,(vlSymsp->TOP__arraySlice.realValue_0_133),9);
    tracep->chgBit(oldp+59,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_133) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+60,(vlSymsp->TOP__arraySlice.realValue_0_134),9);
    tracep->chgBit(oldp+61,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_134) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

void VarraySlice___024root__trace_chg_sub_34(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_34\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 4677);
    // Body
    tracep->chgSData(oldp+0,(vlSymsp->TOP__arraySlice.realValue_0_135),9);
    tracep->chgBit(oldp+1,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_135) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0xffU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+2,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                      & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                     & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_16) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_1_16)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_2_16)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_3_16)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_4_16)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_5_16)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_6_16)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.debug_7_16)))))));
    tracep->chgCData(oldp+3,(vlSymsp->TOP__arraySlice.realValue1_0_16),8);
    tracep->chgBit(oldp+4,(vlSymsp->TOP__arraySlice.debug_0_17));
    tracep->chgBit(oldp+5,(vlSymsp->TOP__arraySlice.debug_1_17));
    tracep->chgBit(oldp+6,(vlSymsp->TOP__arraySlice.debug_2_17));
    tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.debug_3_17));
    tracep->chgBit(oldp+8,(vlSymsp->TOP__arraySlice.debug_4_17));
    tracep->chgBit(oldp+9,(vlSymsp->TOP__arraySlice.debug_5_17));
    tracep->chgBit(oldp+10,(vlSymsp->TOP__arraySlice.debug_6_17));
    tracep->chgBit(oldp+11,(vlSymsp->TOP__arraySlice.debug_7_17));
    tracep->chgSData(oldp+12,(vlSymsp->TOP__arraySlice.realValue_0_136),9);
    tracep->chgBit(oldp+13,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_136) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+14,(vlSymsp->TOP__arraySlice.realValue_0_137),9);
    tracep->chgBit(oldp+15,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_137) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+16,(vlSymsp->TOP__arraySlice.realValue_0_138),9);
    tracep->chgBit(oldp+17,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_138) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+18,(vlSymsp->TOP__arraySlice.realValue_0_139),9);
    tracep->chgBit(oldp+19,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_139) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+20,(vlSymsp->TOP__arraySlice.realValue_0_140),9);
    tracep->chgBit(oldp+21,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_140) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+22,(vlSymsp->TOP__arraySlice.realValue_0_141),9);
    tracep->chgBit(oldp+23,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_141) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+24,(vlSymsp->TOP__arraySlice.realValue_0_142),9);
    tracep->chgBit(oldp+25,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_142) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+26,(vlSymsp->TOP__arraySlice.realValue_0_143),9);
    tracep->chgBit(oldp+27,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_143) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+28,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_17) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_17)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_17)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_17)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_17)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_17)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_17)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_17)))))));
    tracep->chgBit(oldp+29,(((0U == (0x3fffU & VL_MODDIV_III(14, 
                                                             (0x3fffU 
                                                              & ((IData)(1U) 
                                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_5_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                             & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_5_valid) 
                                & (IData)(vlSelf->outputStreamArrayData_5_ready)))));
    tracep->chgCData(oldp+30,(vlSymsp->TOP__arraySlice.realValue1_0_17),8);
    tracep->chgBit(oldp+31,(vlSymsp->TOP__arraySlice.debug_0_18));
    tracep->chgBit(oldp+32,(vlSymsp->TOP__arraySlice.debug_1_18));
    tracep->chgBit(oldp+33,(vlSymsp->TOP__arraySlice.debug_2_18));
    tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.debug_3_18));
    tracep->chgBit(oldp+35,(vlSymsp->TOP__arraySlice.debug_4_18));
    tracep->chgBit(oldp+36,(vlSymsp->TOP__arraySlice.debug_5_18));
    tracep->chgBit(oldp+37,(vlSymsp->TOP__arraySlice.debug_6_18));
    tracep->chgBit(oldp+38,(vlSymsp->TOP__arraySlice.debug_7_18));
    tracep->chgSData(oldp+39,(vlSymsp->TOP__arraySlice.realValue_0_144),9);
    tracep->chgBit(oldp+40,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_144) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+41,(vlSymsp->TOP__arraySlice.realValue_0_145),9);
    tracep->chgBit(oldp+42,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_145) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+43,(vlSymsp->TOP__arraySlice.realValue_0_146),9);
    tracep->chgBit(oldp+44,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_146) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+45,(vlSymsp->TOP__arraySlice.realValue_0_147),9);
    tracep->chgBit(oldp+46,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_147) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+47,(vlSymsp->TOP__arraySlice.realValue_0_148),9);
    tracep->chgBit(oldp+48,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_148) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+49,(vlSymsp->TOP__arraySlice.realValue_0_149),9);
    tracep->chgBit(oldp+50,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_149) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+51,(vlSymsp->TOP__arraySlice.realValue_0_150),9);
    tracep->chgBit(oldp+52,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_150) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+53,(vlSymsp->TOP__arraySlice.realValue_0_151),9);
    tracep->chgBit(oldp+54,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_151) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+55,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_18) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_18)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_18)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_18)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_18)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_18)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_18)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_18)))))));
    tracep->chgBit(oldp+56,(((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_6_valid) 
                             & (IData)(vlSelf->outputStreamArrayData_6_ready))));
    tracep->chgCData(oldp+57,(vlSymsp->TOP__arraySlice.realValue1_0_18),8);
    tracep->chgBit(oldp+58,(vlSymsp->TOP__arraySlice.debug_0_19));
    tracep->chgBit(oldp+59,(vlSymsp->TOP__arraySlice.debug_1_19));
    tracep->chgBit(oldp+60,(vlSymsp->TOP__arraySlice.debug_2_19));
    tracep->chgBit(oldp+61,(vlSymsp->TOP__arraySlice.debug_3_19));
    tracep->chgBit(oldp+62,(vlSymsp->TOP__arraySlice.debug_4_19));
    tracep->chgBit(oldp+63,(vlSymsp->TOP__arraySlice.debug_5_19));
    tracep->chgBit(oldp+64,(vlSymsp->TOP__arraySlice.debug_6_19));
    tracep->chgBit(oldp+65,(vlSymsp->TOP__arraySlice.debug_7_19));
    tracep->chgSData(oldp+66,(vlSymsp->TOP__arraySlice.realValue_0_152),9);
}

void VarraySlice___024root__trace_chg_sub_35(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_35\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 4744);
    // Body
    tracep->chgBit(oldp+0,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 3U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_152) 
                                                       - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+1,(vlSymsp->TOP__arraySlice.realValue_0_153),9);
    tracep->chgBit(oldp+2,(((0xffU & ((IData)(7U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_153) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                              + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+3,(vlSymsp->TOP__arraySlice.realValue_0_154),9);
    tracep->chgBit(oldp+4,(((0xffU & ((IData)(6U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_154) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+5,(vlSymsp->TOP__arraySlice.realValue_0_155),9);
    tracep->chgBit(oldp+6,(((0xffU & ((IData)(5U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_155) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x7fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+7,(vlSymsp->TOP__arraySlice.realValue_0_156),9);
    tracep->chgBit(oldp+8,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 2U)) <= (0x1ffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_156) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                           << 2U)))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+9,(vlSymsp->TOP__arraySlice.realValue_0_157),9);
    tracep->chgBit(oldp+10,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_157) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+11,(vlSymsp->TOP__arraySlice.realValue_0_158),9);
    tracep->chgBit(oldp+12,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_158) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+13,(vlSymsp->TOP__arraySlice.realValue_0_159),9);
    tracep->chgBit(oldp+14,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_159) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+15,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_19) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_19)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_19)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_19)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_19)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_19)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_19)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_19)))))));
    tracep->chgCData(oldp+16,(vlSymsp->TOP__arraySlice.realValue1_0_19),8);
    tracep->chgBit(oldp+17,(vlSymsp->TOP__arraySlice.debug_0_20));
    tracep->chgBit(oldp+18,(vlSymsp->TOP__arraySlice.debug_1_20));
    tracep->chgBit(oldp+19,(vlSymsp->TOP__arraySlice.debug_2_20));
    tracep->chgBit(oldp+20,(vlSymsp->TOP__arraySlice.debug_3_20));
    tracep->chgBit(oldp+21,(vlSymsp->TOP__arraySlice.debug_4_20));
    tracep->chgBit(oldp+22,(vlSymsp->TOP__arraySlice.debug_5_20));
    tracep->chgBit(oldp+23,(vlSymsp->TOP__arraySlice.debug_6_20));
    tracep->chgBit(oldp+24,(vlSymsp->TOP__arraySlice.debug_7_20));
    tracep->chgSData(oldp+25,(vlSymsp->TOP__arraySlice.realValue_0_160),9);
    tracep->chgBit(oldp+26,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_160) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+27,(vlSymsp->TOP__arraySlice.realValue_0_161),9);
    tracep->chgBit(oldp+28,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_161) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+29,(vlSymsp->TOP__arraySlice.realValue_0_162),9);
    tracep->chgBit(oldp+30,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_162) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+31,(vlSymsp->TOP__arraySlice.realValue_0_163),9);
    tracep->chgBit(oldp+32,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_163) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+33,(vlSymsp->TOP__arraySlice.realValue_0_164),9);
    tracep->chgBit(oldp+34,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_164) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+35,(vlSymsp->TOP__arraySlice.realValue_0_165),9);
    tracep->chgBit(oldp+36,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_165) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+37,(vlSymsp->TOP__arraySlice.realValue_0_166),9);
    tracep->chgBit(oldp+38,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_166) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+39,(vlSymsp->TOP__arraySlice.realValue_0_167),9);
    tracep->chgBit(oldp+40,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_167) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+41,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_20) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_20)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_20)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_20)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_20)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_20)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_20)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_20)))))));
    tracep->chgBit(oldp+42,(((0U == (0x3fffU & VL_MODDIV_III(14, 
                                                             (0x3fffU 
                                                              & ((IData)(1U) 
                                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_6_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                             & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_6_valid) 
                                & (IData)(vlSelf->outputStreamArrayData_6_ready)))));
    tracep->chgCData(oldp+43,(vlSymsp->TOP__arraySlice.realValue1_0_20),8);
    tracep->chgBit(oldp+44,(vlSymsp->TOP__arraySlice.debug_0_21));
    tracep->chgBit(oldp+45,(vlSymsp->TOP__arraySlice.debug_1_21));
    tracep->chgBit(oldp+46,(vlSymsp->TOP__arraySlice.debug_2_21));
    tracep->chgBit(oldp+47,(vlSymsp->TOP__arraySlice.debug_3_21));
    tracep->chgBit(oldp+48,(vlSymsp->TOP__arraySlice.debug_4_21));
    tracep->chgBit(oldp+49,(vlSymsp->TOP__arraySlice.debug_5_21));
    tracep->chgBit(oldp+50,(vlSymsp->TOP__arraySlice.debug_6_21));
    tracep->chgBit(oldp+51,(vlSymsp->TOP__arraySlice.debug_7_21));
    tracep->chgSData(oldp+52,(vlSymsp->TOP__arraySlice.realValue_0_168),9);
    tracep->chgBit(oldp+53,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_168) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+54,(vlSymsp->TOP__arraySlice.realValue_0_169),9);
    tracep->chgBit(oldp+55,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_169) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+56,(vlSymsp->TOP__arraySlice.realValue_0_170),9);
    tracep->chgBit(oldp+57,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_170) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+58,(vlSymsp->TOP__arraySlice.realValue_0_171),9);
    tracep->chgBit(oldp+59,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_171) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+60,(vlSymsp->TOP__arraySlice.realValue_0_172),9);
}

void VarraySlice___024root__trace_chg_sub_36(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_36\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 4805);
    // Body
    tracep->chgBit(oldp+0,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 2U)) <= (0x1ffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_172) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                           << 2U)))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+1,(vlSymsp->TOP__arraySlice.realValue_0_173),9);
    tracep->chgBit(oldp+2,(((0x7fU & ((IData)(3U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_173) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0xffU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+3,(vlSymsp->TOP__arraySlice.realValue_0_174),9);
    tracep->chgBit(oldp+4,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 1U)) <= (0x1ffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_174) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(6U) 
                                                           * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+5,(vlSymsp->TOP__arraySlice.realValue_0_175),9);
    tracep->chgBit(oldp+6,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_175) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0xffU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+7,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                      & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                     & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_21) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_1_21)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_2_21)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_3_21)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_4_21)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_5_21)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_6_21)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.debug_7_21)))))));
    tracep->chgBit(oldp+8,(((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_7_valid) 
                            & (IData)(vlSelf->outputStreamArrayData_7_ready))));
    tracep->chgCData(oldp+9,(vlSymsp->TOP__arraySlice.realValue1_0_21),8);
    tracep->chgBit(oldp+10,(vlSymsp->TOP__arraySlice.debug_0_22));
    tracep->chgBit(oldp+11,(vlSymsp->TOP__arraySlice.debug_1_22));
    tracep->chgBit(oldp+12,(vlSymsp->TOP__arraySlice.debug_2_22));
    tracep->chgBit(oldp+13,(vlSymsp->TOP__arraySlice.debug_3_22));
    tracep->chgBit(oldp+14,(vlSymsp->TOP__arraySlice.debug_4_22));
    tracep->chgBit(oldp+15,(vlSymsp->TOP__arraySlice.debug_5_22));
    tracep->chgBit(oldp+16,(vlSymsp->TOP__arraySlice.debug_6_22));
    tracep->chgBit(oldp+17,(vlSymsp->TOP__arraySlice.debug_7_22));
    tracep->chgSData(oldp+18,(vlSymsp->TOP__arraySlice.realValue_0_176),9);
    tracep->chgBit(oldp+19,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_176) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+20,(vlSymsp->TOP__arraySlice.realValue_0_177),9);
    tracep->chgBit(oldp+21,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_177) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+22,(vlSymsp->TOP__arraySlice.realValue_0_178),9);
    tracep->chgBit(oldp+23,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_178) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+24,(vlSymsp->TOP__arraySlice.realValue_0_179),9);
    tracep->chgBit(oldp+25,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_179) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+26,(vlSymsp->TOP__arraySlice.realValue_0_180),9);
    tracep->chgBit(oldp+27,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_180) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+28,(vlSymsp->TOP__arraySlice.realValue_0_181),9);
    tracep->chgBit(oldp+29,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_181) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+30,(vlSymsp->TOP__arraySlice.realValue_0_182),9);
    tracep->chgBit(oldp+31,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_182) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+32,(vlSymsp->TOP__arraySlice.realValue_0_183),9);
    tracep->chgBit(oldp+33,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_183) 
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
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_22) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_22)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_22)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_22)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_22)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_22)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_22)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_22)))))));
    tracep->chgCData(oldp+35,(vlSymsp->TOP__arraySlice.realValue1_0_22),8);
    tracep->chgBit(oldp+36,(vlSymsp->TOP__arraySlice.debug_0_23));
    tracep->chgBit(oldp+37,(vlSymsp->TOP__arraySlice.debug_1_23));
    tracep->chgBit(oldp+38,(vlSymsp->TOP__arraySlice.debug_2_23));
    tracep->chgBit(oldp+39,(vlSymsp->TOP__arraySlice.debug_3_23));
    tracep->chgBit(oldp+40,(vlSymsp->TOP__arraySlice.debug_4_23));
    tracep->chgBit(oldp+41,(vlSymsp->TOP__arraySlice.debug_5_23));
    tracep->chgBit(oldp+42,(vlSymsp->TOP__arraySlice.debug_6_23));
    tracep->chgBit(oldp+43,(vlSymsp->TOP__arraySlice.debug_7_23));
    tracep->chgSData(oldp+44,(vlSymsp->TOP__arraySlice.realValue_0_184),9);
    tracep->chgBit(oldp+45,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_184) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+46,(vlSymsp->TOP__arraySlice.realValue_0_185),9);
    tracep->chgBit(oldp+47,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_185) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+48,(vlSymsp->TOP__arraySlice.realValue_0_186),9);
    tracep->chgBit(oldp+49,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_186) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+50,(vlSymsp->TOP__arraySlice.realValue_0_187),9);
    tracep->chgBit(oldp+51,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_187) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+52,(vlSymsp->TOP__arraySlice.realValue_0_188),9);
    tracep->chgBit(oldp+53,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_188) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+54,(vlSymsp->TOP__arraySlice.realValue_0_189),9);
    tracep->chgBit(oldp+55,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_189) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+56,(vlSymsp->TOP__arraySlice.realValue_0_190),9);
    tracep->chgBit(oldp+57,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_190) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+58,(vlSymsp->TOP__arraySlice.realValue_0_191),9);
    tracep->chgBit(oldp+59,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_191) 
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
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_23) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_23)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_23)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_23)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_23)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_23)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_23)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_23)))))));
}

void VarraySlice___024root__trace_chg_sub_37(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_37\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 4866);
    // Body
    tracep->chgBit(oldp+0,(((0U == (0x3fffU & VL_MODDIV_III(14, 
                                                            (0x3fffU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_7_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                            & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_7_valid) 
                               & (IData)(vlSelf->outputStreamArrayData_7_ready)))));
    tracep->chgCData(oldp+1,(vlSymsp->TOP__arraySlice.realValue1_0_23),8);
    tracep->chgBit(oldp+2,(vlSymsp->TOP__arraySlice.debug_0_24));
    tracep->chgBit(oldp+3,(vlSymsp->TOP__arraySlice.debug_1_24));
    tracep->chgBit(oldp+4,(vlSymsp->TOP__arraySlice.debug_2_24));
    tracep->chgBit(oldp+5,(vlSymsp->TOP__arraySlice.debug_3_24));
    tracep->chgBit(oldp+6,(vlSymsp->TOP__arraySlice.debug_4_24));
    tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.debug_5_24));
    tracep->chgBit(oldp+8,(vlSymsp->TOP__arraySlice.debug_6_24));
    tracep->chgBit(oldp+9,(vlSymsp->TOP__arraySlice.debug_7_24));
    tracep->chgSData(oldp+10,(vlSymsp->TOP__arraySlice.realValue_0_192),9);
    tracep->chgBit(oldp+11,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_192) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+12,(vlSymsp->TOP__arraySlice.realValue_0_193),9);
    tracep->chgBit(oldp+13,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_193) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+14,(vlSymsp->TOP__arraySlice.realValue_0_194),9);
    tracep->chgBit(oldp+15,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_194) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+16,(vlSymsp->TOP__arraySlice.realValue_0_195),9);
    tracep->chgBit(oldp+17,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_195) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+18,(vlSymsp->TOP__arraySlice.realValue_0_196),9);
    tracep->chgBit(oldp+19,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_196) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+20,(vlSymsp->TOP__arraySlice.realValue_0_197),9);
    tracep->chgBit(oldp+21,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_197) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+22,(vlSymsp->TOP__arraySlice.realValue_0_198),9);
    tracep->chgBit(oldp+23,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_198) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+24,(vlSymsp->TOP__arraySlice.realValue_0_199),9);
    tracep->chgBit(oldp+25,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_199) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+26,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_24) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_24)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_24)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_24)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_24)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_24)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_24)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_24)))))));
    tracep->chgBit(oldp+27,(vlSymsp->TOP__arraySlice.debug_0_25));
    tracep->chgBit(oldp+28,(vlSymsp->TOP__arraySlice.debug_1_25));
    tracep->chgBit(oldp+29,(vlSymsp->TOP__arraySlice.debug_2_25));
    tracep->chgBit(oldp+30,(vlSymsp->TOP__arraySlice.debug_3_25));
    tracep->chgBit(oldp+31,(vlSymsp->TOP__arraySlice.debug_4_25));
    tracep->chgBit(oldp+32,(vlSymsp->TOP__arraySlice.debug_5_25));
    tracep->chgBit(oldp+33,(vlSymsp->TOP__arraySlice.debug_6_25));
    tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.debug_7_25));
    tracep->chgSData(oldp+35,(vlSymsp->TOP__arraySlice.realValue_0_200),9);
    tracep->chgBit(oldp+36,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_200) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+37,(vlSymsp->TOP__arraySlice.realValue_0_201),9);
    tracep->chgBit(oldp+38,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_201) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+39,(vlSymsp->TOP__arraySlice.realValue_0_202),9);
    tracep->chgBit(oldp+40,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_202) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+41,(vlSymsp->TOP__arraySlice.realValue_0_203),9);
    tracep->chgBit(oldp+42,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_203) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+43,(vlSymsp->TOP__arraySlice.realValue_0_204),9);
    tracep->chgBit(oldp+44,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_204) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+45,(vlSymsp->TOP__arraySlice.realValue_0_205),9);
    tracep->chgBit(oldp+46,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_205) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+47,(vlSymsp->TOP__arraySlice.realValue_0_206),9);
    tracep->chgBit(oldp+48,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_206) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+49,(vlSymsp->TOP__arraySlice.realValue_0_207),9);
    tracep->chgBit(oldp+50,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_207) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgCData(oldp+51,(vlSymsp->TOP__arraySlice.realValue1_0_24),8);
    tracep->chgBit(oldp+52,(vlSymsp->TOP__arraySlice.debug_0_26));
    tracep->chgBit(oldp+53,(vlSymsp->TOP__arraySlice.debug_1_26));
    tracep->chgBit(oldp+54,(vlSymsp->TOP__arraySlice.debug_2_26));
    tracep->chgBit(oldp+55,(vlSymsp->TOP__arraySlice.debug_3_26));
    tracep->chgBit(oldp+56,(vlSymsp->TOP__arraySlice.debug_4_26));
    tracep->chgBit(oldp+57,(vlSymsp->TOP__arraySlice.debug_5_26));
    tracep->chgBit(oldp+58,(vlSymsp->TOP__arraySlice.debug_6_26));
    tracep->chgBit(oldp+59,(vlSymsp->TOP__arraySlice.debug_7_26));
    tracep->chgSData(oldp+60,(vlSymsp->TOP__arraySlice.realValue_0_208),9);
    tracep->chgBit(oldp+61,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_208) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+62,(vlSymsp->TOP__arraySlice.realValue_0_209),9);
    tracep->chgBit(oldp+63,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_209) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+64,(vlSymsp->TOP__arraySlice.realValue_0_210),9);
    tracep->chgBit(oldp+65,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_210) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+66,(vlSymsp->TOP__arraySlice.realValue_0_211),9);
    tracep->chgBit(oldp+67,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_211) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+68,(vlSymsp->TOP__arraySlice.realValue_0_212),9);
    tracep->chgBit(oldp+69,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_212) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

void VarraySlice___024root__trace_chg_sub_38(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_38\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 4936);
    // Body
    tracep->chgSData(oldp+0,(vlSymsp->TOP__arraySlice.realValue_0_213),9);
    tracep->chgBit(oldp+1,(((0x7fU & ((IData)(3U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_213) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0xffU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+2,(vlSymsp->TOP__arraySlice.realValue_0_214),9);
    tracep->chgBit(oldp+3,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 1U)) <= (0x1ffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_214) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(6U) 
                                                           * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+4,(vlSymsp->TOP__arraySlice.realValue_0_215),9);
    tracep->chgBit(oldp+5,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_215) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0xffU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+6,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                      & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                     & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_26) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_1_26)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_2_26)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_3_26)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_4_26)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_5_26)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_6_26)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.debug_7_26)))))));
    tracep->chgCData(oldp+7,(vlSymsp->TOP__arraySlice.realValue1_0_25),8);
    tracep->chgBit(oldp+8,(vlSymsp->TOP__arraySlice.debug_0_27));
    tracep->chgBit(oldp+9,(vlSymsp->TOP__arraySlice.debug_1_27));
    tracep->chgBit(oldp+10,(vlSymsp->TOP__arraySlice.debug_2_27));
    tracep->chgBit(oldp+11,(vlSymsp->TOP__arraySlice.debug_3_27));
    tracep->chgBit(oldp+12,(vlSymsp->TOP__arraySlice.debug_4_27));
    tracep->chgBit(oldp+13,(vlSymsp->TOP__arraySlice.debug_5_27));
    tracep->chgBit(oldp+14,(vlSymsp->TOP__arraySlice.debug_6_27));
    tracep->chgBit(oldp+15,(vlSymsp->TOP__arraySlice.debug_7_27));
    tracep->chgSData(oldp+16,(vlSymsp->TOP__arraySlice.realValue_0_216),9);
    tracep->chgBit(oldp+17,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_216) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+18,(vlSymsp->TOP__arraySlice.realValue_0_217),9);
    tracep->chgBit(oldp+19,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_217) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+20,(vlSymsp->TOP__arraySlice.realValue_0_218),9);
    tracep->chgBit(oldp+21,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_218) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+22,(vlSymsp->TOP__arraySlice.realValue_0_219),9);
    tracep->chgBit(oldp+23,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_219) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+24,(vlSymsp->TOP__arraySlice.realValue_0_220),9);
    tracep->chgBit(oldp+25,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_220) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+26,(vlSymsp->TOP__arraySlice.realValue_0_221),9);
    tracep->chgBit(oldp+27,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_221) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+28,(vlSymsp->TOP__arraySlice.realValue_0_222),9);
    tracep->chgBit(oldp+29,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_222) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+30,(vlSymsp->TOP__arraySlice.realValue_0_223),9);
    tracep->chgBit(oldp+31,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_223) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+32,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_27) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_27)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_27)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_27)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_27)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_27)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_27)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_27)))))));
    tracep->chgCData(oldp+33,(vlSymsp->TOP__arraySlice.realValue1_0_26),8);
    tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.debug_0_28));
    tracep->chgBit(oldp+35,(vlSymsp->TOP__arraySlice.debug_1_28));
    tracep->chgBit(oldp+36,(vlSymsp->TOP__arraySlice.debug_2_28));
    tracep->chgBit(oldp+37,(vlSymsp->TOP__arraySlice.debug_3_28));
    tracep->chgBit(oldp+38,(vlSymsp->TOP__arraySlice.debug_4_28));
    tracep->chgBit(oldp+39,(vlSymsp->TOP__arraySlice.debug_5_28));
    tracep->chgBit(oldp+40,(vlSymsp->TOP__arraySlice.debug_6_28));
    tracep->chgBit(oldp+41,(vlSymsp->TOP__arraySlice.debug_7_28));
    tracep->chgSData(oldp+42,(vlSymsp->TOP__arraySlice.realValue_0_224),9);
    tracep->chgBit(oldp+43,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_224) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+44,(vlSymsp->TOP__arraySlice.realValue_0_225),9);
    tracep->chgBit(oldp+45,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_225) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+46,(vlSymsp->TOP__arraySlice.realValue_0_226),9);
    tracep->chgBit(oldp+47,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_226) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+48,(vlSymsp->TOP__arraySlice.realValue_0_227),9);
    tracep->chgBit(oldp+49,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_227) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+50,(vlSymsp->TOP__arraySlice.realValue_0_228),9);
    tracep->chgBit(oldp+51,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_228) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+52,(vlSymsp->TOP__arraySlice.realValue_0_229),9);
    tracep->chgBit(oldp+53,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_229) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+54,(vlSymsp->TOP__arraySlice.realValue_0_230),9);
    tracep->chgBit(oldp+55,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_230) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+56,(vlSymsp->TOP__arraySlice.realValue_0_231),9);
    tracep->chgBit(oldp+57,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_231) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+58,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_28) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_28)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_28)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_28)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_28)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_28)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_28)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_28)))))));
}

void VarraySlice___024root__trace_chg_sub_39(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_39\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 4995);
    // Body
    tracep->chgCData(oldp+0,(vlSymsp->TOP__arraySlice.realValue1_0_27),8);
    tracep->chgBit(oldp+1,(vlSymsp->TOP__arraySlice.debug_0_29));
    tracep->chgBit(oldp+2,(vlSymsp->TOP__arraySlice.debug_1_29));
    tracep->chgBit(oldp+3,(vlSymsp->TOP__arraySlice.debug_2_29));
    tracep->chgBit(oldp+4,(vlSymsp->TOP__arraySlice.debug_3_29));
    tracep->chgBit(oldp+5,(vlSymsp->TOP__arraySlice.debug_4_29));
    tracep->chgBit(oldp+6,(vlSymsp->TOP__arraySlice.debug_5_29));
    tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.debug_6_29));
    tracep->chgBit(oldp+8,(vlSymsp->TOP__arraySlice.debug_7_29));
    tracep->chgSData(oldp+9,(vlSymsp->TOP__arraySlice.realValue_0_232),9);
    tracep->chgBit(oldp+10,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_232) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+11,(vlSymsp->TOP__arraySlice.realValue_0_233),9);
    tracep->chgBit(oldp+12,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_233) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+13,(vlSymsp->TOP__arraySlice.realValue_0_234),9);
    tracep->chgBit(oldp+14,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_234) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+15,(vlSymsp->TOP__arraySlice.realValue_0_235),9);
    tracep->chgBit(oldp+16,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_235) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+17,(vlSymsp->TOP__arraySlice.realValue_0_236),9);
    tracep->chgBit(oldp+18,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_236) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+19,(vlSymsp->TOP__arraySlice.realValue_0_237),9);
    tracep->chgBit(oldp+20,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_237) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+21,(vlSymsp->TOP__arraySlice.realValue_0_238),9);
    tracep->chgBit(oldp+22,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_238) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+23,(vlSymsp->TOP__arraySlice.realValue_0_239),9);
    tracep->chgBit(oldp+24,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_239) 
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
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_29) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_29)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_29)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_29)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_29)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_29)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_29)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_29)))))));
    tracep->chgCData(oldp+26,(vlSymsp->TOP__arraySlice.realValue1_0_28),8);
    tracep->chgBit(oldp+27,(vlSymsp->TOP__arraySlice.debug_0_30));
    tracep->chgBit(oldp+28,(vlSymsp->TOP__arraySlice.debug_1_30));
    tracep->chgBit(oldp+29,(vlSymsp->TOP__arraySlice.debug_2_30));
    tracep->chgBit(oldp+30,(vlSymsp->TOP__arraySlice.debug_3_30));
    tracep->chgBit(oldp+31,(vlSymsp->TOP__arraySlice.debug_4_30));
    tracep->chgBit(oldp+32,(vlSymsp->TOP__arraySlice.debug_5_30));
    tracep->chgBit(oldp+33,(vlSymsp->TOP__arraySlice.debug_6_30));
    tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.debug_7_30));
    tracep->chgSData(oldp+35,(vlSymsp->TOP__arraySlice.realValue_0_240),9);
    tracep->chgBit(oldp+36,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_240) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+37,(vlSymsp->TOP__arraySlice.realValue_0_241),9);
    tracep->chgBit(oldp+38,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_241) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+39,(vlSymsp->TOP__arraySlice.realValue_0_242),9);
    tracep->chgBit(oldp+40,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_242) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+41,(vlSymsp->TOP__arraySlice.realValue_0_243),9);
    tracep->chgBit(oldp+42,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_243) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+43,(vlSymsp->TOP__arraySlice.realValue_0_244),9);
    tracep->chgBit(oldp+44,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_244) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+45,(vlSymsp->TOP__arraySlice.realValue_0_245),9);
    tracep->chgBit(oldp+46,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_245) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+47,(vlSymsp->TOP__arraySlice.realValue_0_246),9);
    tracep->chgBit(oldp+48,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_246) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+49,(vlSymsp->TOP__arraySlice.realValue_0_247),9);
    tracep->chgBit(oldp+50,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_247) 
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
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_30) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_30)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_30)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_30)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_30)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_30)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_30)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_30)))))));
    tracep->chgCData(oldp+52,(vlSymsp->TOP__arraySlice.realValue1_0_29),8);
    tracep->chgBit(oldp+53,(vlSymsp->TOP__arraySlice.debug_0_31));
    tracep->chgBit(oldp+54,(vlSymsp->TOP__arraySlice.debug_1_31));
    tracep->chgBit(oldp+55,(vlSymsp->TOP__arraySlice.debug_2_31));
    tracep->chgBit(oldp+56,(vlSymsp->TOP__arraySlice.debug_3_31));
    tracep->chgBit(oldp+57,(vlSymsp->TOP__arraySlice.debug_4_31));
    tracep->chgBit(oldp+58,(vlSymsp->TOP__arraySlice.debug_5_31));
    tracep->chgBit(oldp+59,(vlSymsp->TOP__arraySlice.debug_6_31));
    tracep->chgBit(oldp+60,(vlSymsp->TOP__arraySlice.debug_7_31));
    tracep->chgSData(oldp+61,(vlSymsp->TOP__arraySlice.realValue_0_248),9);
    tracep->chgBit(oldp+62,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_248) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+63,(vlSymsp->TOP__arraySlice.realValue_0_249),9);
    tracep->chgBit(oldp+64,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_249) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+65,(vlSymsp->TOP__arraySlice.realValue_0_250),9);
    tracep->chgBit(oldp+66,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_250) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+67,(vlSymsp->TOP__arraySlice.realValue_0_251),9);
    tracep->chgBit(oldp+68,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_251) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}
