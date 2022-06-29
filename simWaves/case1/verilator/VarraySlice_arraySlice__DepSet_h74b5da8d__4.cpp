// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VarraySlice.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VarraySlice_arraySlice.h"

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__53(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__53\n"); );
    // Body
    vlSelf->debug_6_8 = 0U;
    vlSelf->debug_6_8 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                     + (0xffU & ((IData)(6U) 
                                                 * (IData)(vlSelf->__PVT__bReg))))) 
                          <= (IData)(vlSelf->__PVT__selectWriteFifo))
                          ? ((0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                                      - 
                                                      ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(6U) 
                                                           * (IData)(vlSelf->__PVT__bReg)))))))
                          : ((0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSelf->realValue_0_70) 
                                                       - 
                                                       ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSelf->__PVT__bReg))))) 
                                                      + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_7_8 = 0U;
    vlSelf->debug_7_8 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
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
                             <= (0x1ffU & (((IData)(vlSelf->realValue_0_71) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->__PVT__bReg))))) 
                                           + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_0_9 = 0U;
    vlSelf->debug_0_9 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                          <= (IData)(vlSelf->__PVT__selectWriteFifo))
                          ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                        - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                          : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSelf->realValue_0_72) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_9 = 0U;
    vlSelf->debug_1_9 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                     + (IData)(vlSelf->__PVT__bReg))) 
                          <= (IData)(vlSelf->__PVT__selectWriteFifo))
                          ? ((0xffU & ((IData)(7U) 
                                       * (IData)(vlSelf->__PVT__bReg))) 
                             <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                           - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                              + (IData)(vlSelf->__PVT__bReg)))))
                          : ((0xffU & ((IData)(7U) 
                                       * (IData)(vlSelf->__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSelf->realValue_0_73) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg))) 
                                           + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_2_9 = 0U;
    vlSelf->debug_2_9 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
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
                             <= (0x1ffU & (((IData)(vlSelf->realValue_0_74) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSelf->__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_3_9 = 0U;
    vlSelf->debug_3_9 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
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
                             <= (0x1ffU & (((IData)(vlSelf->realValue_0_75) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSelf->__PVT__bReg))))) 
                                           + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_4_9 = 0U;
    vlSelf->debug_4_9 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                     + (0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                                 << 2U)))) 
                          <= (IData)(vlSelf->__PVT__selectWriteFifo))
                          ? ((0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                                      - 
                                                      ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(vlSelf->__PVT__bReg) 
                                                           << 2U))))))
                          : ((0xffU & ((IData)(vlSelf->__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSelf->realValue_0_76) 
                                                       - 
                                                       ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_5_9 = 0U;
    vlSelf->debug_5_9 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
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
                             <= (0x1ffU & (((IData)(vlSelf->realValue_0_77) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSelf->__PVT__bReg))))) 
                                           + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_6_9 = 0U;
    vlSelf->debug_6_9 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                     + (0xffU & ((IData)(6U) 
                                                 * (IData)(vlSelf->__PVT__bReg))))) 
                          <= (IData)(vlSelf->__PVT__selectWriteFifo))
                          ? ((0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                                      - 
                                                      ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(6U) 
                                                           * (IData)(vlSelf->__PVT__bReg)))))))
                          : ((0x7fU & ((IData)(vlSelf->__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSelf->realValue_0_78) 
                                                       - 
                                                       ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSelf->__PVT__bReg))))) 
                                                      + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_7_9 = 0U;
    vlSelf->debug_7_9 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
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
                             <= (0x1ffU & (((IData)(vlSelf->realValue_0_79) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSelf->__PVT__bReg))))) 
                                           + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_0_10 = 0U;
    vlSelf->debug_0_10 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_80) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_10 = 0U;
    vlSelf->debug_1_10 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_81) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__54(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__54\n"); );
    // Body
    vlSelf->debug_2_10 = 0U;
    vlSelf->debug_2_10 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_82) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_3_10 = 0U;
    vlSelf->debug_3_10 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_83) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_4_10 = 0U;
    vlSelf->debug_4_10 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_84) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_5_10 = 0U;
    vlSelf->debug_5_10 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_85) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_6_10 = 0U;
    vlSelf->debug_6_10 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_86) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_7_10 = 0U;
    vlSelf->debug_7_10 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_87) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_0_11 = 0U;
    vlSelf->debug_0_11 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_88) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_11 = 0U;
    vlSelf->debug_1_11 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_89) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_2_11 = 0U;
    vlSelf->debug_2_11 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_90) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_3_11 = 0U;
    vlSelf->debug_3_11 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_91) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_4_11 = 0U;
    vlSelf->debug_4_11 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_92) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__55(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__55\n"); );
    // Body
    vlSelf->debug_5_11 = 0U;
    vlSelf->debug_5_11 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_93) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_6_11 = 0U;
    vlSelf->debug_6_11 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_94) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_7_11 = 0U;
    vlSelf->debug_7_11 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_95) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_0_12 = 0U;
    vlSelf->debug_0_12 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_96) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_12 = 0U;
    vlSelf->debug_1_12 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_97) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_2_12 = 0U;
    vlSelf->debug_2_12 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_98) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_3_12 = 0U;
    vlSelf->debug_3_12 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_99) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_4_12 = 0U;
    vlSelf->debug_4_12 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_100) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_5_12 = 0U;
    vlSelf->debug_5_12 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_101) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_6_12 = 0U;
    vlSelf->debug_6_12 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_102) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_7_12 = 0U;
    vlSelf->debug_7_12 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_103) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__56(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__56\n"); );
    // Body
    vlSelf->debug_0_13 = 0U;
    vlSelf->debug_0_13 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_104) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_13 = 0U;
    vlSelf->debug_1_13 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_105) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_2_13 = 0U;
    vlSelf->debug_2_13 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_106) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_3_13 = 0U;
    vlSelf->debug_3_13 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_107) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_4_13 = 0U;
    vlSelf->debug_4_13 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_108) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_5_13 = 0U;
    vlSelf->debug_5_13 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_109) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_6_13 = 0U;
    vlSelf->debug_6_13 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_110) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_7_13 = 0U;
    vlSelf->debug_7_13 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_111) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_0_14 = 0U;
    vlSelf->debug_0_14 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_112) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_14 = 0U;
    vlSelf->debug_1_14 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_113) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_2_14 = 0U;
    vlSelf->debug_2_14 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_114) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_3_14 = 0U;
    vlSelf->debug_3_14 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_115) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__57(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__57\n"); );
    // Body
    vlSelf->debug_4_14 = 0U;
    vlSelf->debug_4_14 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_116) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_5_14 = 0U;
    vlSelf->debug_5_14 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_117) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_6_14 = 0U;
    vlSelf->debug_6_14 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_118) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_7_14 = 0U;
    vlSelf->debug_7_14 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_119) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_0_15 = 0U;
    vlSelf->debug_0_15 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_120) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_15 = 0U;
    vlSelf->debug_1_15 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_121) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_2_15 = 0U;
    vlSelf->debug_2_15 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_122) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_3_15 = 0U;
    vlSelf->debug_3_15 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_123) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_4_15 = 0U;
    vlSelf->debug_4_15 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_124) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_5_15 = 0U;
    vlSelf->debug_5_15 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_125) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_6_15 = 0U;
    vlSelf->debug_6_15 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_126) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__58(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__58\n"); );
    // Body
    vlSelf->debug_7_15 = 0U;
    vlSelf->debug_7_15 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_127) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_0_16 = 0U;
    vlSelf->debug_0_16 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_128) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_16 = 0U;
    vlSelf->debug_1_16 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_129) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_2_16 = 0U;
    vlSelf->debug_2_16 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_130) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_3_16 = 0U;
    vlSelf->debug_3_16 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_131) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_4_16 = 0U;
    vlSelf->debug_4_16 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_132) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_5_16 = 0U;
    vlSelf->debug_5_16 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_133) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_6_16 = 0U;
    vlSelf->debug_6_16 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_134) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_7_16 = 0U;
    vlSelf->debug_7_16 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_135) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_0_17 = 0U;
    vlSelf->debug_0_17 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_136) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_17 = 0U;
    vlSelf->debug_1_17 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_137) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_2_17 = 0U;
    vlSelf->debug_2_17 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_138) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__59(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__59\n"); );
    // Body
    vlSelf->debug_3_17 = 0U;
    vlSelf->debug_3_17 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_139) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_4_17 = 0U;
    vlSelf->debug_4_17 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_140) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_5_17 = 0U;
    vlSelf->debug_5_17 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_141) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_6_17 = 0U;
    vlSelf->debug_6_17 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_142) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_7_17 = 0U;
    vlSelf->debug_7_17 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_143) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_0_18 = 0U;
    vlSelf->debug_0_18 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_144) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_18 = 0U;
    vlSelf->debug_1_18 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_145) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_2_18 = 0U;
    vlSelf->debug_2_18 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_146) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_3_18 = 0U;
    vlSelf->debug_3_18 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_147) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_4_18 = 0U;
    vlSelf->debug_4_18 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_148) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_5_18 = 0U;
    vlSelf->debug_5_18 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_149) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__60(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__60\n"); );
    // Body
    vlSelf->debug_6_18 = 0U;
    vlSelf->debug_6_18 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_150) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_7_18 = 0U;
    vlSelf->debug_7_18 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_151) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_0_19 = 0U;
    vlSelf->debug_0_19 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_152) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_19 = 0U;
    vlSelf->debug_1_19 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_153) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_2_19 = 0U;
    vlSelf->debug_2_19 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_154) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->__PVT__bReg) 
                                                      << 1U)))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_3_19 = 0U;
    vlSelf->debug_3_19 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_155) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0x7fU 
                                                   & ((IData)(3U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_4_19 = 0U;
    vlSelf->debug_4_19 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_156) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                             + (0xffU 
                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                   << 2U)))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_5_19 = 0U;
    vlSelf->debug_5_19 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_157) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_6_19 = 0U;
    vlSelf->debug_6_19 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
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
                              (0x1ffU & (((IData)(vlSelf->realValue_0_158) 
                                          - ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                             + (0xffU 
                                                & ((IData)(6U) 
                                                   * (IData)(vlSelf->__PVT__bReg))))) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_7_19 = 0U;
    vlSelf->debug_7_19 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
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
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_159) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg))))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_0_20 = 0U;
    vlSelf->debug_0_20 = (((IData)(vlSelf->__PVT__selectReadFifo_0) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                         - (IData)(vlSelf->__PVT__selectReadFifo_0))))
                           : ((0x1ffU & ((IData)(vlSelf->__PVT__bReg) 
                                         << 3U)) <= 
                              (0x1ffU & (((IData)(vlSelf->realValue_0_160) 
                                          - (IData)(vlSelf->__PVT__selectReadFifo_0)) 
                                         + (IData)(vlSelf->__PVT__selectWriteFifo)))));
    vlSelf->debug_1_20 = 0U;
    vlSelf->debug_1_20 = (((0x1ffU & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                      + (IData)(vlSelf->__PVT__bReg))) 
                           <= (IData)(vlSelf->__PVT__selectWriteFifo))
                           ? ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                            - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                               + (IData)(vlSelf->__PVT__bReg)))))
                           : ((0xffU & ((IData)(7U) 
                                        * (IData)(vlSelf->__PVT__bReg))) 
                              <= (0x1ffU & (((IData)(vlSelf->realValue_0_161) 
                                             - ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (IData)(vlSelf->__PVT__bReg))) 
                                            + (IData)(vlSelf->__PVT__selectWriteFifo)))));
}
