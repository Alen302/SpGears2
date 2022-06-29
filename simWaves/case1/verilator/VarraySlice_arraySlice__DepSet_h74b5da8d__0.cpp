// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VarraySlice.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VarraySlice_arraySlice.h"

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__9(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__9\n"); );
    // Body
    vlSelf->__Vdly__readAround_7 = vlSelf->__PVT__readAround_7;
    vlSelf->__Vdly__readAround_6 = vlSelf->__PVT__readAround_6;
    vlSelf->__Vdly__readAround_5 = vlSelf->__PVT__readAround_5;
    vlSelf->__Vdly__readAround_4 = vlSelf->__PVT__readAround_4;
    vlSelf->__Vdly__readAround_3 = vlSelf->__PVT__readAround_3;
    vlSelf->__Vdly__readAround_2 = vlSelf->__PVT__readAround_2;
    vlSelf->__Vdly__readAround_1 = vlSelf->__PVT__readAround_1;
    vlSelf->__Vdly__readAround_0 = vlSelf->__PVT__readAround_0;
    vlSelf->__Vdly__writeAround = vlSelf->__PVT__writeAround;
    vlSelf->__Vdly__selectWriteFifo = vlSelf->__PVT__selectWriteFifo;
    vlSelf->__Vdly__selectReadFifo_0 = vlSelf->__PVT__selectReadFifo_0;
    vlSelf->__Vdly__selectReadFifo_7 = vlSelf->__PVT__selectReadFifo_7;
    vlSelf->__Vdly__selectReadFifo_6 = vlSelf->__PVT__selectReadFifo_6;
    vlSelf->__Vdly__selectReadFifo_5 = vlSelf->__PVT__selectReadFifo_5;
    vlSelf->__Vdly__selectReadFifo_4 = vlSelf->__PVT__selectReadFifo_4;
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__10(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__10\n"); );
    // Body
    vlSelf->__Vdly__selectReadFifo_3 = vlSelf->__PVT__selectReadFifo_3;
    vlSelf->__Vdly__selectReadFifo_2 = vlSelf->__PVT__selectReadFifo_2;
    vlSelf->__Vdly__selectReadFifo_1 = vlSelf->__PVT__selectReadFifo_1;
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__19(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__19\n"); );
    // Body
    vlSelf->__PVT__writeAround = vlSelf->__Vdly__writeAround;
    vlSelf->__PVT__readAround_0 = vlSelf->__Vdly__readAround_0;
    vlSelf->__PVT__readAround_1 = vlSelf->__Vdly__readAround_1;
    vlSelf->__PVT__readAround_2 = vlSelf->__Vdly__readAround_2;
    vlSelf->__PVT__readAround_3 = vlSelf->__Vdly__readAround_3;
    vlSelf->__PVT__readAround_4 = vlSelf->__Vdly__readAround_4;
    vlSelf->__PVT__readAround_5 = vlSelf->__Vdly__readAround_5;
    vlSelf->__PVT__readAround_6 = vlSelf->__Vdly__readAround_6;
    vlSelf->__PVT__readAround_7 = vlSelf->__Vdly__readAround_7;
    vlSelf->__PVT__selectWriteFifo = vlSelf->__Vdly__selectWriteFifo;
    vlSelf->__PVT__selectReadFifo_0 = vlSelf->__Vdly__selectReadFifo_0;
    vlSelf->__PVT__selectReadFifo_7 = vlSelf->__Vdly__selectReadFifo_7;
    vlSelf->__PVT__selectReadFifo_1 = vlSelf->__Vdly__selectReadFifo_1;
    vlSelf->__PVT__selectReadFifo_2 = vlSelf->__Vdly__selectReadFifo_2;
    vlSelf->__PVT__selectReadFifo_3 = vlSelf->__Vdly__selectReadFifo_3;
    vlSelf->__PVT__selectReadFifo_4 = vlSelf->__Vdly__selectReadFifo_4;
    vlSelf->__PVT__selectReadFifo_5 = vlSelf->__Vdly__selectReadFifo_5;
    vlSelf->__PVT__selectReadFifo_6 = vlSelf->__Vdly__selectReadFifo_6;
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__22(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__22\n"); );
    // Body
    vlSelf->__PVT___zz_realValue1_0_37 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_38 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_39 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_40 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_41 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_42 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_43 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_44 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_45 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_46 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue1_0_47 = (0xffU & VL_MODDIV_III(8, (IData)(vlSelf->__PVT__hReg), 
                                                                (0xffU 
                                                                 & ((IData)(vlSelf->__PVT__aReg) 
                                                                    << 3U))));
    vlSelf->__PVT__when_ArraySlice_l204 = ((IData)(vlSelf->__PVT__selectWriteFifo) 
                                           == (0xffU 
                                               & ((IData)(vlSelf->__PVT__wReg) 
                                                  - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l439 = ((IData)(vlSelf->__PVT__allowPadding_0) 
                                           & ((IData)(vlSelf->__PVT__wReg) 
                                              <= (IData)(vlSelf->__PVT__selectReadFifo_0)));
    vlSelf->__PVT__when_ArraySlice_l369 = ((IData)(vlSelf->__PVT__selectReadFifo_0) 
                                           < (IData)(vlSelf->__PVT__wReg));
    vlSelf->__PVT___zz_selectReadFifo_0 = (0x1ffU & 
                                           ((IData)(vlSelf->__PVT__selectReadFifo_0) 
                                            - (IData)(vlSelf->__PVT__bReg)));
    vlSelf->__PVT___zz_selectReadFifo_0_6 = (0x1ffU 
                                             & ((IData)(vlSelf->__PVT__selectReadFifo_0) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg)))));
    vlSelf->__PVT___zz_selectReadFifo_1 = (0x1ffU & 
                                           ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                            - (IData)(vlSelf->__PVT__bReg)));
    vlSelf->__PVT___zz_selectReadFifo_1_6 = (0x1ffU 
                                             & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg)))));
    vlSelf->__PVT___zz_selectReadFifo_2 = (0x1ffU & 
                                           ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                            - (IData)(vlSelf->__PVT__bReg)));
    vlSelf->__PVT___zz_selectReadFifo_2_6 = (0x1ffU 
                                             & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg)))));
    vlSelf->__PVT___zz_selectReadFifo_3 = (0x1ffU & 
                                           ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                            - (IData)(vlSelf->__PVT__bReg)));
    vlSelf->__PVT___zz_selectReadFifo_3_6 = (0x1ffU 
                                             & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg)))));
    vlSelf->__PVT___zz_selectReadFifo_4 = (0x1ffU & 
                                           ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                            - (IData)(vlSelf->__PVT__bReg)));
    vlSelf->__PVT___zz_selectReadFifo_4_6 = (0x1ffU 
                                             & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg)))));
    vlSelf->__PVT___zz_selectReadFifo_5 = (0x1ffU & 
                                           ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                            - (IData)(vlSelf->__PVT__bReg)));
    vlSelf->__PVT___zz_selectReadFifo_5_6 = (0x1ffU 
                                             & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg)))));
    vlSelf->__PVT___zz_selectReadFifo_6 = (0x1ffU & 
                                           ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                            - (IData)(vlSelf->__PVT__bReg)));
    vlSelf->__PVT___zz_selectReadFifo_6_6 = (0x1ffU 
                                             & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                                + (0xffU 
                                                   & ((IData)(7U) 
                                                      * (IData)(vlSelf->__PVT__bReg)))));
    vlSelf->__PVT___zz_selectReadFifo_7 = (0x1ffU & 
                                           ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                            - (IData)(vlSelf->__PVT__bReg)));
    vlSelf->__PVT__when_ArraySlice_l459 = ((IData)(vlSelf->__PVT__handshakeTimes_0_value) 
                                           == (0x1ffU 
                                               & (((IData)(vlSelf->__PVT__bReg) 
                                                   * (IData)(vlSelf->__PVT__aReg)) 
                                                  - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l459_1 = ((IData)(vlSelf->__PVT__handshakeTimes_1_value) 
                                             == (0x1ffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l459_2 = ((IData)(vlSelf->__PVT__handshakeTimes_2_value) 
                                             == (0x1ffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l459_3 = ((IData)(vlSelf->__PVT__handshakeTimes_3_value) 
                                             == (0x1ffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l459_4 = ((IData)(vlSelf->__PVT__handshakeTimes_4_value) 
                                             == (0x1ffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l459_5 = ((IData)(vlSelf->__PVT__handshakeTimes_5_value) 
                                             == (0x1ffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l459_6 = ((IData)(vlSelf->__PVT__handshakeTimes_6_value) 
                                             == (0x1ffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l459_7 = ((IData)(vlSelf->__PVT__handshakeTimes_7_value) 
                                             == (0x1ffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l318 = ((IData)(vlSelf->__PVT__handshakeTimes_0_value) 
                                           == (0x1ffU 
                                               & (((IData)(vlSelf->__PVT__bReg) 
                                                   * (IData)(vlSelf->__PVT__aReg)) 
                                                  - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l318_1 = ((IData)(vlSelf->__PVT__handshakeTimes_1_value) 
                                             == (0x1ffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l318_2 = ((IData)(vlSelf->__PVT__handshakeTimes_2_value) 
                                             == (0x1ffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l318_3 = ((IData)(vlSelf->__PVT__handshakeTimes_3_value) 
                                             == (0x1ffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l318_4 = ((IData)(vlSelf->__PVT__handshakeTimes_4_value) 
                                             == (0x1ffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l318_5 = ((IData)(vlSelf->__PVT__handshakeTimes_5_value) 
                                             == (0x1ffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l318_6 = ((IData)(vlSelf->__PVT__handshakeTimes_6_value) 
                                             == (0x1ffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l318_7 = ((IData)(vlSelf->__PVT__handshakeTimes_7_value) 
                                             == (0x1ffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l377 = ((IData)(vlSelf->__PVT__handshakeTimes_0_value) 
                                           == (0x1ffU 
                                               & (((IData)(vlSelf->__PVT__bReg) 
                                                   * (IData)(vlSelf->__PVT__aReg)) 
                                                  - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l377_1 = ((IData)(vlSelf->__PVT__handshakeTimes_1_value) 
                                             == (0x1ffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l377_2 = ((IData)(vlSelf->__PVT__handshakeTimes_2_value) 
                                             == (0x1ffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l377_3 = ((IData)(vlSelf->__PVT__handshakeTimes_3_value) 
                                             == (0x1ffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l377_4 = ((IData)(vlSelf->__PVT__handshakeTimes_4_value) 
                                             == (0x1ffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l377_5 = ((IData)(vlSelf->__PVT__handshakeTimes_5_value) 
                                             == (0x1ffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l377_6 = ((IData)(vlSelf->__PVT__handshakeTimes_6_value) 
                                             == (0x1ffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__23(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__23\n"); );
    // Body
    vlSelf->__PVT__when_ArraySlice_l377_7 = ((IData)(vlSelf->__PVT__handshakeTimes_7_value) 
                                             == (0x1ffU 
                                                 & (((IData)(vlSelf->__PVT__bReg) 
                                                     * (IData)(vlSelf->__PVT__aReg)) 
                                                    - (IData)(1U))));
    vlSelf->__PVT__when_ArraySlice_l354 = ((((((((((IData)(vlSelf->__PVT__selectWriteFifo) 
                                                   == 
                                                   (0x1ffU 
                                                    & ((IData)(vlSelf->__PVT__selectReadFifo_0) 
                                                       - 
                                                       VL_MODDIV_III(9, (IData)(vlSelf->__PVT__selectReadFifo_0), (IData)(vlSelf->__PVT__bReg))))) 
                                                  & ((IData)(vlSelf->__PVT__writeAround) 
                                                     ^ (IData)(vlSelf->__PVT__readAround_0))) 
                                                 | (((IData)(vlSelf->__PVT__selectWriteFifo) 
                                                     == 
                                                     (0x1ffU 
                                                      & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                         - 
                                                         VL_MODDIV_III(9, (IData)(vlSelf->__PVT__selectReadFifo_1), (IData)(vlSelf->__PVT__bReg))))) 
                                                    & ((IData)(vlSelf->__PVT__writeAround) 
                                                       ^ (IData)(vlSelf->__PVT__readAround_1)))) 
                                                | (((IData)(vlSelf->__PVT__selectWriteFifo) 
                                                    == 
                                                    (0x1ffU 
                                                     & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                        - 
                                                        VL_MODDIV_III(9, (IData)(vlSelf->__PVT__selectReadFifo_2), (IData)(vlSelf->__PVT__bReg))))) 
                                                   & ((IData)(vlSelf->__PVT__writeAround) 
                                                      ^ (IData)(vlSelf->__PVT__readAround_2)))) 
                                               | (((IData)(vlSelf->__PVT__selectWriteFifo) 
                                                   == 
                                                   (0x1ffU 
                                                    & ((IData)(vlSelf->__PVT__selectReadFifo_3) 
                                                       - 
                                                       VL_MODDIV_III(9, (IData)(vlSelf->__PVT__selectReadFifo_3), (IData)(vlSelf->__PVT__bReg))))) 
                                                  & ((IData)(vlSelf->__PVT__writeAround) 
                                                     ^ (IData)(vlSelf->__PVT__readAround_3)))) 
                                              | (((IData)(vlSelf->__PVT__selectWriteFifo) 
                                                  == 
                                                  (0x1ffU 
                                                   & ((IData)(vlSelf->__PVT__selectReadFifo_4) 
                                                      - 
                                                      VL_MODDIV_III(9, (IData)(vlSelf->__PVT__selectReadFifo_4), (IData)(vlSelf->__PVT__bReg))))) 
                                                 & ((IData)(vlSelf->__PVT__writeAround) 
                                                    ^ (IData)(vlSelf->__PVT__readAround_4)))) 
                                             | (((IData)(vlSelf->__PVT__selectWriteFifo) 
                                                 == 
                                                 (0x1ffU 
                                                  & ((IData)(vlSelf->__PVT__selectReadFifo_5) 
                                                     - 
                                                     VL_MODDIV_III(9, (IData)(vlSelf->__PVT__selectReadFifo_5), (IData)(vlSelf->__PVT__bReg))))) 
                                                & ((IData)(vlSelf->__PVT__writeAround) 
                                                   ^ (IData)(vlSelf->__PVT__readAround_5)))) 
                                            | (((IData)(vlSelf->__PVT__selectWriteFifo) 
                                                == 
                                                (0x1ffU 
                                                 & ((IData)(vlSelf->__PVT__selectReadFifo_6) 
                                                    - 
                                                    VL_MODDIV_III(9, (IData)(vlSelf->__PVT__selectReadFifo_6), (IData)(vlSelf->__PVT__bReg))))) 
                                               & ((IData)(vlSelf->__PVT__writeAround) 
                                                  ^ (IData)(vlSelf->__PVT__readAround_6)))) 
                                           | (((IData)(vlSelf->__PVT__selectWriteFifo) 
                                               == (0x1ffU 
                                                   & ((IData)(vlSelf->__PVT__selectReadFifo_7) 
                                                      - 
                                                      VL_MODDIV_III(9, (IData)(vlSelf->__PVT__selectReadFifo_7), (IData)(vlSelf->__PVT__bReg))))) 
                                              & ((IData)(vlSelf->__PVT__writeAround) 
                                                 ^ (IData)(vlSelf->__PVT__readAround_7))));
    vlSelf->__PVT___zz_realValue_0_8 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                               (0x1ffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_9 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                               (0x1ffU 
                                                                & ((IData)(vlSelf->__PVT__bReg) 
                                                                   << 3U))));
    vlSelf->__PVT___zz_realValue_0_10 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_11 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_12 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_13 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_14 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_15 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_16 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_17 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_18 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_19 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_20 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_21 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_22 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_23 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_24 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_25 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_26 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_27 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_28 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_29 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_30 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_31 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_32 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_33 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_34 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_35 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_36 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_37 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_38 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_39 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_40 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_41 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_42 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_43 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_44 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_45 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_46 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_47 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_48 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_49 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__24(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__24\n"); );
    // Body
    vlSelf->__PVT___zz_realValue_0_50 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_51 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_52 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_53 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_54 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_55 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_56 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_57 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_58 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_59 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_60 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_61 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_62 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_63 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_64 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_65 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_66 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_67 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_68 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_69 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_70 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_71 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_72 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_73 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_74 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_75 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_76 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_77 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_78 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_79 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_80 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_81 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_82 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_83 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_84 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_85 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_86 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_87 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_88 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_89 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_90 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_91 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_92 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_93 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_94 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_95 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_96 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_97 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_98 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_99 = (0x1ffU & VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                                (0x1ffU 
                                                                 & ((IData)(vlSelf->__PVT__bReg) 
                                                                    << 3U))));
    vlSelf->__PVT___zz_realValue_0_100 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_101 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_102 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_103 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_104 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_105 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__25(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__25\n"); );
    // Body
    vlSelf->__PVT___zz_realValue_0_106 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_107 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_108 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_109 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_110 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_111 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_112 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_113 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_114 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_115 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_116 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_117 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_118 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_119 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_120 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_121 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_122 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_123 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_124 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_125 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_126 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_127 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_128 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_129 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_130 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_131 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_132 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_133 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_134 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_135 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_136 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_137 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_138 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_139 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_140 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_141 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_142 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_143 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_144 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_145 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_146 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_147 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_148 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_149 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_150 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_151 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_152 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_153 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_154 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_155 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_156 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_157 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_158 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_159 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_160 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_161 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__26(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__26\n"); );
    // Body
    vlSelf->__PVT___zz_realValue_0_162 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_163 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_164 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_165 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_166 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_167 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_168 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_169 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_170 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_171 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_172 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_173 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_174 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_175 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_176 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_177 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_178 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_179 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_180 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_181 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_182 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_183 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_184 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_185 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_186 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_187 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_188 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_189 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_190 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_191 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_192 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_193 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_194 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_195 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_196 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_197 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_198 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_199 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_208 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_209 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_210 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_211 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_212 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_213 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_214 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_215 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_216 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_217 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_218 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_219 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_220 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_221 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_222 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_223 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_224 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_225 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__27(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__27\n"); );
    // Body
    vlSelf->__PVT___zz_realValue_0_226 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_227 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_228 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_229 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_230 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_231 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_232 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_233 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_234 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_235 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_236 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_237 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_238 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_239 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_240 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_241 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_242 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_243 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_244 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_245 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_246 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_247 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_248 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_249 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_250 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_251 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_252 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_253 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_254 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_255 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_256 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_257 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_258 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_259 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_260 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_261 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_262 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_263 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_264 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_265 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_266 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_267 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_268 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_269 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_270 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_271 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_272 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_273 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_274 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_275 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_276 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_277 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_278 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_279 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_280 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_281 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__28(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__28\n"); );
    // Body
    vlSelf->__PVT___zz_realValue_0_282 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_283 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_284 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_285 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_286 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_287 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_288 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_289 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_290 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_291 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_292 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_293 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_294 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_295 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_296 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_297 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_298 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_299 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_300 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_301 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_302 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_303 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_304 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_305 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_306 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_307 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_308 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_309 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_310 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_311 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_312 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_313 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_314 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_315 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_316 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_317 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_318 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_319 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_320 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_321 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_322 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_323 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_324 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_325 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_326 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_327 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_328 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_329 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_330 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_331 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_332 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_333 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_334 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_335 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_336 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
    vlSelf->__PVT___zz_realValue_0_337 = (0x1ffU & 
                                          VL_MODDIV_III(9, (IData)(vlSelf->__PVT__wReg), 
                                                        (0x1ffU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 3U))));
}
