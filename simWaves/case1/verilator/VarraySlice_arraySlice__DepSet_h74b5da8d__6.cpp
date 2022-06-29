// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VarraySlice.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VarraySlice_arraySlice.h"

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__69(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__69\n"); );
    // Body
    vlSelf->debug_5_32 = 0U;
    vlSelf->debug_5_32 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_261) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_6_32 = 0U;
    vlSelf->debug_6_32 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_262) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_7_32 = 0U;
    vlSelf->debug_7_32 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_263) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_0_33 = 0U;
    vlSelf->debug_0_33 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_264) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_33 = 0U;
    vlSelf->debug_1_33 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_265) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_2_33 = 0U;
    vlSelf->debug_2_33 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_266) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_3_33 = 0U;
    vlSelf->debug_3_33 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_267) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_4_33 = 0U;
    vlSelf->debug_4_33 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_268) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_5_33 = 0U;
    vlSelf->debug_5_33 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_269) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_6_33 = 0U;
    vlSelf->debug_6_33 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_270) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_7_33 = 0U;
    vlSelf->debug_7_33 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_271) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__70(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__70\n"); );
    // Body
    vlSelf->debug_0_34 = 0U;
    vlSelf->debug_0_34 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_272) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_34 = 0U;
    vlSelf->debug_1_34 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_273) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_2_34 = 0U;
    vlSelf->debug_2_34 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_274) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_3_34 = 0U;
    vlSelf->debug_3_34 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_275) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_4_34 = 0U;
    vlSelf->debug_4_34 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_276) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_5_34 = 0U;
    vlSelf->debug_5_34 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_277) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_6_34 = 0U;
    vlSelf->debug_6_34 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_278) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_7_34 = 0U;
    vlSelf->debug_7_34 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_279) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_0_35 = 0U;
    vlSelf->debug_0_35 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_280) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_35 = 0U;
    vlSelf->debug_1_35 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_281) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_2_35 = 0U;
    vlSelf->debug_2_35 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_282) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_3_35 = 0U;
    vlSelf->debug_3_35 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_283) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__71(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__71\n"); );
    // Body
    vlSelf->debug_4_35 = 0U;
    vlSelf->debug_4_35 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_284) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_5_35 = 0U;
    vlSelf->debug_5_35 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_285) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_6_35 = 0U;
    vlSelf->debug_6_35 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_286) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_7_35 = 0U;
    vlSelf->debug_7_35 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_287) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_0_36 = 0U;
    vlSelf->debug_0_36 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_288) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_36 = 0U;
    vlSelf->debug_1_36 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_289) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_2_36 = 0U;
    vlSelf->debug_2_36 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_290) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_3_36 = 0U;
    vlSelf->debug_3_36 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_291) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_4_36 = 0U;
    vlSelf->debug_4_36 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_292) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_5_36 = 0U;
    vlSelf->debug_5_36 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_293) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_6_36 = 0U;
    vlSelf->debug_6_36 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_294) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__72(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__72\n"); );
    // Body
    vlSelf->debug_7_36 = 0U;
    vlSelf->debug_7_36 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_295) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_0_37 = 0U;
    vlSelf->debug_0_37 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_296) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_37 = 0U;
    vlSelf->debug_1_37 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_297) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_2_37 = 0U;
    vlSelf->debug_2_37 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_298) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_3_37 = 0U;
    vlSelf->debug_3_37 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_299) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_4_37 = 0U;
    vlSelf->debug_4_37 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_300) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_5_37 = 0U;
    vlSelf->debug_5_37 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_301) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_6_37 = 0U;
    vlSelf->debug_6_37 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_302) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_7_37 = 0U;
    vlSelf->debug_7_37 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_303) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_0_38 = 0U;
    vlSelf->debug_0_38 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_304) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_38 = 0U;
    vlSelf->debug_1_38 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_305) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_2_38 = 0U;
    vlSelf->debug_2_38 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_306) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__73(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__73\n"); );
    // Body
    vlSelf->debug_3_38 = 0U;
    vlSelf->debug_3_38 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_307) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_4_38 = 0U;
    vlSelf->debug_4_38 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_308) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_5_38 = 0U;
    vlSelf->debug_5_38 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_309) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_6_38 = 0U;
    vlSelf->debug_6_38 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_310) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_7_38 = 0U;
    vlSelf->debug_7_38 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_311) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_0_39 = 0U;
    vlSelf->debug_0_39 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_312) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_39 = 0U;
    vlSelf->debug_1_39 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_313) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_2_39 = 0U;
    vlSelf->debug_2_39 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_314) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_3_39 = 0U;
    vlSelf->debug_3_39 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_315) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_4_39 = 0U;
    vlSelf->debug_4_39 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_316) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_5_39 = 0U;
    vlSelf->debug_5_39 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_317) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__74(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__74\n"); );
    // Body
    vlSelf->debug_6_39 = 0U;
    vlSelf->debug_6_39 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_318) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_7_39 = 0U;
    vlSelf->debug_7_39 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_319) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_0_40 = 0U;
    vlSelf->debug_0_40 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_320) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_40 = 0U;
    vlSelf->debug_1_40 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_321) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_2_40 = 0U;
    vlSelf->debug_2_40 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_322) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_3_40 = 0U;
    vlSelf->debug_3_40 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_323) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_4_40 = 0U;
    vlSelf->debug_4_40 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_324) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_5_40 = 0U;
    vlSelf->debug_5_40 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_325) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_6_40 = 0U;
    vlSelf->debug_6_40 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_326) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_7_40 = 0U;
    vlSelf->debug_7_40 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_327) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_0_41 = 0U;
    vlSelf->debug_0_41 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_328) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_41 = 0U;
    vlSelf->debug_1_41 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_329) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__75(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__75\n"); );
    // Body
    vlSelf->debug_2_41 = 0U;
    vlSelf->debug_2_41 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_330) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_3_41 = 0U;
    vlSelf->debug_3_41 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_331) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_4_41 = 0U;
    vlSelf->debug_4_41 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_332) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_5_41 = 0U;
    vlSelf->debug_5_41 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_333) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_6_41 = 0U;
    vlSelf->debug_6_41 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_334) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_7_41 = 0U;
    vlSelf->debug_7_41 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_335) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_0_42 = 0U;
    vlSelf->debug_0_42 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_336) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_42 = 0U;
    vlSelf->debug_1_42 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_337) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_2_42 = 0U;
    vlSelf->debug_2_42 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_338) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_3_42 = 0U;
    vlSelf->debug_3_42 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_339) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_4_42 = 0U;
    vlSelf->debug_4_42 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_340) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__76(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__76\n"); );
    // Body
    vlSelf->debug_5_42 = 0U;
    vlSelf->debug_5_42 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_341) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_6_42 = 0U;
    vlSelf->debug_6_42 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_342) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_7_42 = 0U;
    vlSelf->debug_7_42 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_343) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_0_43 = 0U;
    vlSelf->debug_0_43 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_344) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_43 = 0U;
    vlSelf->debug_1_43 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_345) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_2_43 = 0U;
    vlSelf->debug_2_43 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_346) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_3_43 = 0U;
    vlSelf->debug_3_43 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_347) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_4_43 = 0U;
    vlSelf->debug_4_43 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_348) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_5_43 = 0U;
    vlSelf->debug_5_43 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_349) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_6_43 = 0U;
    vlSelf->debug_6_43 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_350) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_7_43 = 0U;
    vlSelf->debug_7_43 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_351) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
}
