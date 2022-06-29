// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VarraySlice.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VarraySlice_arraySlice.h"

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__61(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__61\n"); );
    // Body
    vlSelf->debug_2_20 = 0U;
    vlSelf->debug_2_20 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                      + (0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 1U)))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(6U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSelf->__PVT__bReg) 
                                                     << 1U))))))
                           : ((0xffU & ((IData)(6U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_162) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_3_20 = 0U;
    vlSelf->debug_3_20 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                      + (0x7fU & ((IData)(3U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(5U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0xffU & ((IData)(5U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_163) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_4_20 = 0U;
    vlSelf->debug_4_20 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                      + (0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 2U)))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 2U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                            + (0xffU 
                                               & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 2U))))))
                           : ((0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 2U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_164) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_5_20 = 0U;
    vlSelf->debug_5_20 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                      + (0xffU & ((IData)(5U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x7fU & ((IData)(3U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0x7fU & ((IData)(3U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_165) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_6_20 = 0U;
    vlSelf->debug_6_20 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                      + (0xffU & ((IData)(6U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 1U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                            + (0xffU 
                                               & ((IData)(6U) 
                                                  * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 1U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_166) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_7_20 = 0U;
    vlSelf->debug_7_20 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                      + (0xffU & ((IData)(7U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((IData)(vlSelf->__PVT__bReg) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((IData)(vlSelf->__PVT__bReg) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_167) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_0_21 = 0U;
    vlSelf->debug_0_21 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_168) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_21 = 0U;
    vlSelf->debug_1_21 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_169) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_2_21 = 0U;
    vlSelf->debug_2_21 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                      + (0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 1U)))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(6U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSelf->__PVT__bReg) 
                                                     << 1U))))))
                           : ((0xffU & ((IData)(6U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_170) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_3_21 = 0U;
    vlSelf->debug_3_21 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                      + (0x7fU & ((IData)(3U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(5U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0xffU & ((IData)(5U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_171) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_4_21 = 0U;
    vlSelf->debug_4_21 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                      + (0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 2U)))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 2U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                            + (0xffU 
                                               & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 2U))))))
                           : ((0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 2U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_172) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__62(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__62\n"); );
    // Body
    vlSelf->debug_5_21 = 0U;
    vlSelf->debug_5_21 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                      + (0xffU & ((IData)(5U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x7fU & ((IData)(3U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0x7fU & ((IData)(3U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_173) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_6_21 = 0U;
    vlSelf->debug_6_21 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                      + (0xffU & ((IData)(6U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 1U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                            + (0xffU 
                                               & ((IData)(6U) 
                                                  * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 1U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_174) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_7_21 = 0U;
    vlSelf->debug_7_21 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                      + (0xffU & ((IData)(7U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((IData)(vlSelf->__PVT__bReg) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((IData)(vlSelf->__PVT__bReg) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_175) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_0_22 = 0U;
    vlSelf->debug_0_22 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_176) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_22 = 0U;
    vlSelf->debug_1_22 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_177) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_2_22 = 0U;
    vlSelf->debug_2_22 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                      + (0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 1U)))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(6U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSelf->__PVT__bReg) 
                                                     << 1U))))))
                           : ((0xffU & ((IData)(6U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_178) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_3_22 = 0U;
    vlSelf->debug_3_22 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                      + (0x7fU & ((IData)(3U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(5U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0xffU & ((IData)(5U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_179) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_4_22 = 0U;
    vlSelf->debug_4_22 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                      + (0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 2U)))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 2U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                            + (0xffU 
                                               & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 2U))))))
                           : ((0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 2U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_180) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_5_22 = 0U;
    vlSelf->debug_5_22 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                      + (0xffU & ((IData)(5U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x7fU & ((IData)(3U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0x7fU & ((IData)(3U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_181) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_6_22 = 0U;
    vlSelf->debug_6_22 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                      + (0xffU & ((IData)(6U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 1U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                            + (0xffU 
                                               & ((IData)(6U) 
                                                  * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 1U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_182) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_7_22 = 0U;
    vlSelf->debug_7_22 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                      + (0xffU & ((IData)(7U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((IData)(vlSelf->__PVT__bReg) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((IData)(vlSelf->__PVT__bReg) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_183) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__63(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__63\n"); );
    // Body
    vlSelf->debug_0_23 = 0U;
    vlSelf->debug_0_23 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_184) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_23 = 0U;
    vlSelf->debug_1_23 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_185) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_2_23 = 0U;
    vlSelf->debug_2_23 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                      + (0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 1U)))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(6U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSelf->__PVT__bReg) 
                                                     << 1U))))))
                           : ((0xffU & ((IData)(6U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_186) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_3_23 = 0U;
    vlSelf->debug_3_23 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                      + (0x7fU & ((IData)(3U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(5U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0xffU & ((IData)(5U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_187) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_4_23 = 0U;
    vlSelf->debug_4_23 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                      + (0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 2U)))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 2U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                            + (0xffU 
                                               & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 2U))))))
                           : ((0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 2U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_188) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_5_23 = 0U;
    vlSelf->debug_5_23 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                      + (0xffU & ((IData)(5U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x7fU & ((IData)(3U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0x7fU & ((IData)(3U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_189) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_6_23 = 0U;
    vlSelf->debug_6_23 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                      + (0xffU & ((IData)(6U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 1U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                            + (0xffU 
                                               & ((IData)(6U) 
                                                  * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 1U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_190) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_7_23 = 0U;
    vlSelf->debug_7_23 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                      + (0xffU & ((IData)(7U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((IData)(vlSelf->__PVT__bReg) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((IData)(vlSelf->__PVT__bReg) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_191) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_0_24 = 0U;
    vlSelf->debug_0_24 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_192) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_24 = 0U;
    vlSelf->debug_1_24 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_193) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_2_24 = 0U;
    vlSelf->debug_2_24 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                      + (0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 1U)))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(6U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSelf->__PVT__bReg) 
                                                     << 1U))))))
                           : ((0xffU & ((IData)(6U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_194) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_3_24 = 0U;
    vlSelf->debug_3_24 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                      + (0x7fU & ((IData)(3U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(5U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0xffU & ((IData)(5U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_195) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__64(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__64\n"); );
    // Body
    vlSelf->debug_4_24 = 0U;
    vlSelf->debug_4_24 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                      + (0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 2U)))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 2U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                            + (0xffU 
                                               & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 2U))))))
                           : ((0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 2U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_196) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_5_24 = 0U;
    vlSelf->debug_5_24 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                      + (0xffU & ((IData)(5U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x7fU & ((IData)(3U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0x7fU & ((IData)(3U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_197) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_6_24 = 0U;
    vlSelf->debug_6_24 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                      + (0xffU & ((IData)(6U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 1U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                            + (0xffU 
                                               & ((IData)(6U) 
                                                  * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 1U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_198) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_7_24 = 0U;
    vlSelf->debug_7_24 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                      + (0xffU & ((IData)(7U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((IData)(vlSelf->__PVT__bReg) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((IData)(vlSelf->__PVT__bReg) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_199) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_0_26 = 0U;
    vlSelf->debug_0_26 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_208) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_26 = 0U;
    vlSelf->debug_1_26 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_209) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_2_26 = 0U;
    vlSelf->debug_2_26 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                      + (0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 1U)))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(6U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSelf->__PVT__bReg) 
                                                     << 1U))))))
                           : ((0xffU & ((IData)(6U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_210) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_3_26 = 0U;
    vlSelf->debug_3_26 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                      + (0x7fU & ((IData)(3U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(5U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0xffU & ((IData)(5U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_211) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_4_26 = 0U;
    vlSelf->debug_4_26 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                      + (0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 2U)))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 2U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                            + (0xffU 
                                               & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 2U))))))
                           : ((0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 2U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_212) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_5_26 = 0U;
    vlSelf->debug_5_26 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                      + (0xffU & ((IData)(5U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x7fU & ((IData)(3U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0x7fU & ((IData)(3U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_213) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_6_26 = 0U;
    vlSelf->debug_6_26 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                      + (0xffU & ((IData)(6U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 1U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                            + (0xffU 
                                               & ((IData)(6U) 
                                                  * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 1U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_214) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__65(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__65\n"); );
    // Body
    vlSelf->debug_7_26 = 0U;
    vlSelf->debug_7_26 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                      + (0xffU & ((IData)(7U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((IData)(vlSelf->__PVT__bReg) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((IData)(vlSelf->__PVT__bReg) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_215) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_0_27 = 0U;
    vlSelf->debug_0_27 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_216) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_27 = 0U;
    vlSelf->debug_1_27 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_217) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_2_27 = 0U;
    vlSelf->debug_2_27 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                      + (0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 1U)))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(6U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSelf->__PVT__bReg) 
                                                     << 1U))))))
                           : ((0xffU & ((IData)(6U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_218) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_3_27 = 0U;
    vlSelf->debug_3_27 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                      + (0x7fU & ((IData)(3U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(5U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0xffU & ((IData)(5U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_219) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_4_27 = 0U;
    vlSelf->debug_4_27 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                      + (0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 2U)))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 2U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                            + (0xffU 
                                               & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 2U))))))
                           : ((0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 2U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_220) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_5_27 = 0U;
    vlSelf->debug_5_27 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                      + (0xffU & ((IData)(5U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x7fU & ((IData)(3U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0x7fU & ((IData)(3U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_221) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_6_27 = 0U;
    vlSelf->debug_6_27 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                      + (0xffU & ((IData)(6U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 1U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                            + (0xffU 
                                               & ((IData)(6U) 
                                                  * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 1U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_222) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_7_27 = 0U;
    vlSelf->debug_7_27 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                      + (0xffU & ((IData)(7U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((IData)(vlSelf->__PVT__bReg) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((IData)(vlSelf->__PVT__bReg) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_223) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_0_28 = 0U;
    vlSelf->debug_0_28 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_224) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_28 = 0U;
    vlSelf->debug_1_28 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_225) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_2_28 = 0U;
    vlSelf->debug_2_28 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                      + (0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 1U)))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(6U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSelf->__PVT__bReg) 
                                                     << 1U))))))
                           : ((0xffU & ((IData)(6U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_226) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__66(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__66\n"); );
    // Body
    vlSelf->debug_3_28 = 0U;
    vlSelf->debug_3_28 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                      + (0x7fU & ((IData)(3U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(5U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0xffU & ((IData)(5U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_227) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_4_28 = 0U;
    vlSelf->debug_4_28 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                      + (0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 2U)))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 2U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                            + (0xffU 
                                               & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 2U))))))
                           : ((0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 2U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_228) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_5_28 = 0U;
    vlSelf->debug_5_28 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                      + (0xffU & ((IData)(5U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x7fU & ((IData)(3U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0x7fU & ((IData)(3U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_229) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_6_28 = 0U;
    vlSelf->debug_6_28 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                      + (0xffU & ((IData)(6U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 1U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                            + (0xffU 
                                               & ((IData)(6U) 
                                                  * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 1U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_230) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_7_28 = 0U;
    vlSelf->debug_7_28 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                      + (0xffU & ((IData)(7U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((IData)(vlSelf->__PVT__bReg) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((IData)(vlSelf->__PVT__bReg) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_231) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_0_29 = 0U;
    vlSelf->debug_0_29 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_232) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_29 = 0U;
    vlSelf->debug_1_29 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_233) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_2_29 = 0U;
    vlSelf->debug_2_29 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                      + (0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 1U)))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(6U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSelf->__PVT__bReg) 
                                                     << 1U))))))
                           : ((0xffU & ((IData)(6U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_234) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_3_29 = 0U;
    vlSelf->debug_3_29 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                      + (0x7fU & ((IData)(3U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(5U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0xffU & ((IData)(5U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_235) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_4_29 = 0U;
    vlSelf->debug_4_29 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                      + (0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 2U)))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 2U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                            + (0xffU 
                                               & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 2U))))))
                           : ((0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 2U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_236) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_5_29 = 0U;
    vlSelf->debug_5_29 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                      + (0xffU & ((IData)(5U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x7fU & ((IData)(3U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0x7fU & ((IData)(3U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_237) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__67(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__67\n"); );
    // Body
    vlSelf->debug_6_29 = 0U;
    vlSelf->debug_6_29 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                      + (0xffU & ((IData)(6U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 1U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                            + (0xffU 
                                               & ((IData)(6U) 
                                                  * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 1U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_238) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_7_29 = 0U;
    vlSelf->debug_7_29 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                      + (0xffU & ((IData)(7U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((IData)(vlSelf->__PVT__bReg) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((IData)(vlSelf->__PVT__bReg) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_239) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_0_30 = 0U;
    vlSelf->debug_0_30 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_240) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_30 = 0U;
    vlSelf->debug_1_30 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_241) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_2_30 = 0U;
    vlSelf->debug_2_30 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                      + (0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 1U)))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(6U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSelf->__PVT__bReg) 
                                                     << 1U))))))
                           : ((0xffU & ((IData)(6U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_242) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_3_30 = 0U;
    vlSelf->debug_3_30 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                      + (0x7fU & ((IData)(3U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(5U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0xffU & ((IData)(5U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_243) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_4_30 = 0U;
    vlSelf->debug_4_30 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                      + (0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 2U)))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 2U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                            + (0xffU 
                                               & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 2U))))))
                           : ((0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 2U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_244) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_5_30 = 0U;
    vlSelf->debug_5_30 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                      + (0xffU & ((IData)(5U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x7fU & ((IData)(3U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0x7fU & ((IData)(3U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_245) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_6_30 = 0U;
    vlSelf->debug_6_30 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                      + (0xffU & ((IData)(6U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 1U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                            + (0xffU 
                                               & ((IData)(6U) 
                                                  * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 1U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_246) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_7_30 = 0U;
    vlSelf->debug_7_30 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                      + (0xffU & ((IData)(7U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((IData)(vlSelf->__PVT__bReg) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((IData)(vlSelf->__PVT__bReg) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_247) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_0_31 = 0U;
    vlSelf->debug_0_31 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_248) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_31 = 0U;
    vlSelf->debug_1_31 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_249) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__68(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__68\n"); );
    // Body
    vlSelf->debug_2_31 = 0U;
    vlSelf->debug_2_31 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                      + (0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 1U)))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(6U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSelf->__PVT__bReg) 
                                                     << 1U))))))
                           : ((0xffU & ((IData)(6U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_250) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_3_31 = 0U;
    vlSelf->debug_3_31 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                      + (0x7fU & ((IData)(3U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(5U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0xffU & ((IData)(5U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_251) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_4_31 = 0U;
    vlSelf->debug_4_31 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                      + (0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 2U)))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 2U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                            + (0xffU 
                                               & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 2U))))))
                           : ((0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 2U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_252) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_5_31 = 0U;
    vlSelf->debug_5_31 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                      + (0xffU & ((IData)(5U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x7fU & ((IData)(3U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0x7fU & ((IData)(3U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_253) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_6_31 = 0U;
    vlSelf->debug_6_31 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                      + (0xffU & ((IData)(6U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 1U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                            + (0xffU 
                                               & ((IData)(6U) 
                                                  * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 1U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_254) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_7_31 = 0U;
    vlSelf->debug_7_31 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                      + (0xffU & ((IData)(7U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((IData)(vlSelf->__PVT__bReg) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((IData)(vlSelf->__PVT__bReg) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_255) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_0_32 = 0U;
    vlSelf->debug_0_32 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_256) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_32 = 0U;
    vlSelf->debug_1_32 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_257) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_2_32 = 0U;
    vlSelf->debug_2_32 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                      + (0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 1U)))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(6U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSelf->__PVT__bReg) 
                                                     << 1U))))))
                           : ((0xffU & ((IData)(6U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_258) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_3_32 = 0U;
    vlSelf->debug_3_32 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                      + (0x7fU & ((IData)(3U) 
                                                  * (IData)(vlSelf->__PVT__bReg))))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(5U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->__PVT__bReg)))))))
                           : ((0xffU & ((IData)(5U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_259) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_4_32 = 0U;
    vlSelf->debug_4_32 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                      + (0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 2U)))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 2U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                            + (0xffU 
                                               & ((IData)(vlSelf->__PVT__bReg) 
                                                  << 2U))))))
                           : ((0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 2U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_260) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
}
