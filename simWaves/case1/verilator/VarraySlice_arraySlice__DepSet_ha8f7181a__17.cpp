// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VarraySlice.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VarraySlice__Syms.h"
#include "VarraySlice_arraySlice.h"

VL_INLINE_OPT void VarraySlice_arraySlice___settle__TOP__arraySlice__365(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__365\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__0;
    VlWide<4>/*127:0*/ __Vtemp_h8eb9d705__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__1;
    VlWide<4>/*127:0*/ __Vtemp_h03e951e5__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__2;
    VlWide<4>/*127:0*/ __Vtemp_hbf834a96__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__3;
    VlWide<4>/*127:0*/ __Vtemp_h86f98fba__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__4;
    VlWide<4>/*127:0*/ __Vtemp_hbac9d153__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__5;
    VlWide<4>/*127:0*/ __Vtemp_h3cc0de3f__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__6;
    VlWide<4>/*127:0*/ __Vtemp_h71c403c2__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__7;
    VlWide<4>/*127:0*/ __Vtemp_h5611aebc__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__8;
    VlWide<4>/*127:0*/ __Vtemp_hd214501e__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__9;
    VlWide<4>/*127:0*/ __Vtemp_h51c58c0f__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__10;
    VlWide<4>/*127:0*/ __Vtemp_hc3b5a172__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__11;
    VlWide<4>/*127:0*/ __Vtemp_h858aeea7__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__12;
    VlWide<4>/*127:0*/ __Vtemp_h73d5d12f__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__13;
    VlWide<4>/*127:0*/ __Vtemp_h8ba2baee__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__14;
    VlWide<4>/*127:0*/ __Vtemp_h8c19f5ec__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__15;
    VlWide<4>/*127:0*/ __Vtemp_hf47c1340__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__16;
    VlWide<4>/*127:0*/ __Vtemp_h2a6e8acd__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__17;
    VlWide<4>/*127:0*/ __Vtemp_h3cfb4fe8__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__18;
    VlWide<4>/*127:0*/ __Vtemp_h2710ffdc__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__19;
    VlWide<4>/*127:0*/ __Vtemp_haa4cf080__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__20;
    VlWide<4>/*127:0*/ __Vtemp_h25904a1b__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__21;
    VlWide<4>/*127:0*/ __Vtemp_h5a17a54d__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__22;
    VlWide<4>/*127:0*/ __Vtemp_hadadf47a__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__23;
    VlWide<4>/*127:0*/ __Vtemp_hbbcc3c42__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__24;
    VlWide<4>/*127:0*/ __Vtemp_he4b42e36__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__25;
    VlWide<4>/*127:0*/ __Vtemp_hf9ac9a07__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__26;
    VlWide<4>/*127:0*/ __Vtemp_h38332216__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__27;
    VlWide<4>/*127:0*/ __Vtemp_hd53940f6__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__28;
    VlWide<4>/*127:0*/ __Vtemp_ha3b2a2f8__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__29;
    VlWide<4>/*127:0*/ __Vtemp_h948dfba4__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__30;
    VlWide<4>/*127:0*/ __Vtemp_h694a3a1a__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__31;
    VlWide<4>/*127:0*/ __Vtemp_hbc0e9e25__0;
    // Body
    vlSelf->__PVT__fifoGroup_126_io_pop_ready = 0U;
    if ((1U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l369) {
                if (vlSelf->__PVT__when_ArraySlice_l370) {
                    __Vtemp_hc961b8db__0[0U] = 1U;
                    __Vtemp_hc961b8db__0[1U] = 0U;
                    __Vtemp_hc961b8db__0[2U] = 0U;
                    __Vtemp_hc961b8db__0[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8eb9d705__0, __Vtemp_hc961b8db__0, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectReadFifo_0)));
                    if ((0x40000000U & __Vtemp_h8eb9d705__0[3U])) {
                        vlSelf->__PVT__fifoGroup_126_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_0_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l369_1) {
                if (vlSelf->__PVT__when_ArraySlice_l370_1) {
                    __Vtemp_hc961b8db__1[0U] = 1U;
                    __Vtemp_hc961b8db__1[1U] = 0U;
                    __Vtemp_hc961b8db__1[2U] = 0U;
                    __Vtemp_hc961b8db__1[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h03e951e5__0, __Vtemp_hc961b8db__1, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1)));
                    if ((0x40000000U & __Vtemp_h03e951e5__0[3U])) {
                        vlSelf->__PVT__fifoGroup_126_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_1_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l369_2) {
                if (vlSelf->__PVT__when_ArraySlice_l370_2) {
                    __Vtemp_hc961b8db__2[0U] = 1U;
                    __Vtemp_hc961b8db__2[1U] = 0U;
                    __Vtemp_hc961b8db__2[2U] = 0U;
                    __Vtemp_hc961b8db__2[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hbf834a96__0, __Vtemp_hc961b8db__2, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid)));
                    if ((0x40000000U & __Vtemp_hbf834a96__0[3U])) {
                        vlSelf->__PVT__fifoGroup_126_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_2_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l369_3) {
                if (vlSelf->__PVT__when_ArraySlice_l370_3) {
                    __Vtemp_hc961b8db__3[0U] = 1U;
                    __Vtemp_hc961b8db__3[1U] = 0U;
                    __Vtemp_hc961b8db__3[2U] = 0U;
                    __Vtemp_hc961b8db__3[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h86f98fba__0, __Vtemp_hc961b8db__3, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid)));
                    if ((0x40000000U & __Vtemp_h86f98fba__0[3U])) {
                        vlSelf->__PVT__fifoGroup_126_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_3_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l369_4) {
                if (vlSelf->__PVT__when_ArraySlice_l370_4) {
                    __Vtemp_hc961b8db__4[0U] = 1U;
                    __Vtemp_hc961b8db__4[1U] = 0U;
                    __Vtemp_hc961b8db__4[2U] = 0U;
                    __Vtemp_hc961b8db__4[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hbac9d153__0, __Vtemp_hc961b8db__4, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid)));
                    if ((0x40000000U & __Vtemp_hbac9d153__0[3U])) {
                        vlSelf->__PVT__fifoGroup_126_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_4_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l369_5) {
                if (vlSelf->__PVT__when_ArraySlice_l370_5) {
                    __Vtemp_hc961b8db__5[0U] = 1U;
                    __Vtemp_hc961b8db__5[1U] = 0U;
                    __Vtemp_hc961b8db__5[2U] = 0U;
                    __Vtemp_hc961b8db__5[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h3cc0de3f__0, __Vtemp_hc961b8db__5, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid)));
                    if ((0x40000000U & __Vtemp_h3cc0de3f__0[3U])) {
                        vlSelf->__PVT__fifoGroup_126_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_5_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l369_6) {
                if (vlSelf->__PVT__when_ArraySlice_l370_6) {
                    __Vtemp_hc961b8db__6[0U] = 1U;
                    __Vtemp_hc961b8db__6[1U] = 0U;
                    __Vtemp_hc961b8db__6[2U] = 0U;
                    __Vtemp_hc961b8db__6[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h71c403c2__0, __Vtemp_hc961b8db__6, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid)));
                    if ((0x40000000U & __Vtemp_h71c403c2__0[3U])) {
                        vlSelf->__PVT__fifoGroup_126_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_6_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l369_7) {
                if (vlSelf->__PVT__when_ArraySlice_l370_7) {
                    __Vtemp_hc961b8db__7[0U] = 1U;
                    __Vtemp_hc961b8db__7[1U] = 0U;
                    __Vtemp_hc961b8db__7[2U] = 0U;
                    __Vtemp_hc961b8db__7[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h5611aebc__0, __Vtemp_hc961b8db__7, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6)));
                    if ((0x40000000U & __Vtemp_h5611aebc__0[3U])) {
                        vlSelf->__PVT__fifoGroup_126_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_7_ready;
                    }
                }
            }
            vlSelf->__PVT__fifoGroup_127_io_pop_ready = 0U;
            if (vlSelf->__PVT__when_ArraySlice_l369) {
                if (vlSelf->__PVT__when_ArraySlice_l370) {
                    __Vtemp_hc961b8db__16[0U] = 1U;
                    __Vtemp_hc961b8db__16[1U] = 0U;
                    __Vtemp_hc961b8db__16[2U] = 0U;
                    __Vtemp_hc961b8db__16[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h2a6e8acd__0, __Vtemp_hc961b8db__16, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectReadFifo_0)));
                    if ((__Vtemp_h2a6e8acd__0[3U] >> 0x1fU)) {
                        vlSelf->__PVT__fifoGroup_127_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_0_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l369_1) {
                if (vlSelf->__PVT__when_ArraySlice_l370_1) {
                    __Vtemp_hc961b8db__17[0U] = 1U;
                    __Vtemp_hc961b8db__17[1U] = 0U;
                    __Vtemp_hc961b8db__17[2U] = 0U;
                    __Vtemp_hc961b8db__17[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h3cfb4fe8__0, __Vtemp_hc961b8db__17, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1)));
                    if ((__Vtemp_h3cfb4fe8__0[3U] >> 0x1fU)) {
                        vlSelf->__PVT__fifoGroup_127_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_1_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l369_2) {
                if (vlSelf->__PVT__when_ArraySlice_l370_2) {
                    __Vtemp_hc961b8db__18[0U] = 1U;
                    __Vtemp_hc961b8db__18[1U] = 0U;
                    __Vtemp_hc961b8db__18[2U] = 0U;
                    __Vtemp_hc961b8db__18[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h2710ffdc__0, __Vtemp_hc961b8db__18, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid)));
                    if ((__Vtemp_h2710ffdc__0[3U] >> 0x1fU)) {
                        vlSelf->__PVT__fifoGroup_127_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_2_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l369_3) {
                if (vlSelf->__PVT__when_ArraySlice_l370_3) {
                    __Vtemp_hc961b8db__19[0U] = 1U;
                    __Vtemp_hc961b8db__19[1U] = 0U;
                    __Vtemp_hc961b8db__19[2U] = 0U;
                    __Vtemp_hc961b8db__19[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_haa4cf080__0, __Vtemp_hc961b8db__19, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid)));
                    if ((__Vtemp_haa4cf080__0[3U] >> 0x1fU)) {
                        vlSelf->__PVT__fifoGroup_127_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_3_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l369_4) {
                if (vlSelf->__PVT__when_ArraySlice_l370_4) {
                    __Vtemp_hc961b8db__20[0U] = 1U;
                    __Vtemp_hc961b8db__20[1U] = 0U;
                    __Vtemp_hc961b8db__20[2U] = 0U;
                    __Vtemp_hc961b8db__20[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h25904a1b__0, __Vtemp_hc961b8db__20, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid)));
                    if ((__Vtemp_h25904a1b__0[3U] >> 0x1fU)) {
                        vlSelf->__PVT__fifoGroup_127_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_4_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l369_5) {
                if (vlSelf->__PVT__when_ArraySlice_l370_5) {
                    __Vtemp_hc961b8db__21[0U] = 1U;
                    __Vtemp_hc961b8db__21[1U] = 0U;
                    __Vtemp_hc961b8db__21[2U] = 0U;
                    __Vtemp_hc961b8db__21[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h5a17a54d__0, __Vtemp_hc961b8db__21, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid)));
                    if ((__Vtemp_h5a17a54d__0[3U] >> 0x1fU)) {
                        vlSelf->__PVT__fifoGroup_127_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_5_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l369_6) {
                if (vlSelf->__PVT__when_ArraySlice_l370_6) {
                    __Vtemp_hc961b8db__22[0U] = 1U;
                    __Vtemp_hc961b8db__22[1U] = 0U;
                    __Vtemp_hc961b8db__22[2U] = 0U;
                    __Vtemp_hc961b8db__22[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hadadf47a__0, __Vtemp_hc961b8db__22, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid)));
                    if ((__Vtemp_hadadf47a__0[3U] >> 0x1fU)) {
                        vlSelf->__PVT__fifoGroup_127_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_6_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l369_7) {
                if (vlSelf->__PVT__when_ArraySlice_l370_7) {
                    __Vtemp_hc961b8db__23[0U] = 1U;
                    __Vtemp_hc961b8db__23[1U] = 0U;
                    __Vtemp_hc961b8db__23[2U] = 0U;
                    __Vtemp_hc961b8db__23[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hbbcc3c42__0, __Vtemp_hc961b8db__23, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6)));
                    if ((__Vtemp_hbbcc3c42__0[3U] >> 0x1fU)) {
                        vlSelf->__PVT__fifoGroup_127_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_7_ready;
                    }
                }
            }
        } else if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l369) {
                if (vlSelf->__PVT__when_ArraySlice_l229) {
                    __Vtemp_hc961b8db__8[0U] = 1U;
                    __Vtemp_hc961b8db__8[1U] = 0U;
                    __Vtemp_hc961b8db__8[2U] = 0U;
                    __Vtemp_hc961b8db__8[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd214501e__0, __Vtemp_hc961b8db__8, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectReadFifo_0)));
                    if ((0x40000000U & __Vtemp_hd214501e__0[3U])) {
                        vlSelf->__PVT__fifoGroup_126_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_0_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l369_1) {
                if (vlSelf->__PVT__when_ArraySlice_l229_1) {
                    __Vtemp_hc961b8db__9[0U] = 1U;
                    __Vtemp_hc961b8db__9[1U] = 0U;
                    __Vtemp_hc961b8db__9[2U] = 0U;
                    __Vtemp_hc961b8db__9[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h51c58c0f__0, __Vtemp_hc961b8db__9, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1)));
                    if ((0x40000000U & __Vtemp_h51c58c0f__0[3U])) {
                        vlSelf->__PVT__fifoGroup_126_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_1_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l369_2) {
                if (vlSelf->__PVT__when_ArraySlice_l229_2) {
                    __Vtemp_hc961b8db__10[0U] = 1U;
                    __Vtemp_hc961b8db__10[1U] = 0U;
                    __Vtemp_hc961b8db__10[2U] = 0U;
                    __Vtemp_hc961b8db__10[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hc3b5a172__0, __Vtemp_hc961b8db__10, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid)));
                    if ((0x40000000U & __Vtemp_hc3b5a172__0[3U])) {
                        vlSelf->__PVT__fifoGroup_126_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_2_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l369_3) {
                if (vlSelf->__PVT__when_ArraySlice_l229_3) {
                    __Vtemp_hc961b8db__11[0U] = 1U;
                    __Vtemp_hc961b8db__11[1U] = 0U;
                    __Vtemp_hc961b8db__11[2U] = 0U;
                    __Vtemp_hc961b8db__11[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h858aeea7__0, __Vtemp_hc961b8db__11, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid)));
                    if ((0x40000000U & __Vtemp_h858aeea7__0[3U])) {
                        vlSelf->__PVT__fifoGroup_126_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_3_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l369_4) {
                if (vlSelf->__PVT__when_ArraySlice_l229_4) {
                    __Vtemp_hc961b8db__12[0U] = 1U;
                    __Vtemp_hc961b8db__12[1U] = 0U;
                    __Vtemp_hc961b8db__12[2U] = 0U;
                    __Vtemp_hc961b8db__12[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h73d5d12f__0, __Vtemp_hc961b8db__12, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid)));
                    if ((0x40000000U & __Vtemp_h73d5d12f__0[3U])) {
                        vlSelf->__PVT__fifoGroup_126_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_4_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l369_5) {
                if (vlSelf->__PVT__when_ArraySlice_l229_5) {
                    __Vtemp_hc961b8db__13[0U] = 1U;
                    __Vtemp_hc961b8db__13[1U] = 0U;
                    __Vtemp_hc961b8db__13[2U] = 0U;
                    __Vtemp_hc961b8db__13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8ba2baee__0, __Vtemp_hc961b8db__13, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid)));
                    if ((0x40000000U & __Vtemp_h8ba2baee__0[3U])) {
                        vlSelf->__PVT__fifoGroup_126_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_5_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l369_6) {
                if (vlSelf->__PVT__when_ArraySlice_l229_6) {
                    __Vtemp_hc961b8db__14[0U] = 1U;
                    __Vtemp_hc961b8db__14[1U] = 0U;
                    __Vtemp_hc961b8db__14[2U] = 0U;
                    __Vtemp_hc961b8db__14[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8c19f5ec__0, __Vtemp_hc961b8db__14, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid)));
                    if ((0x40000000U & __Vtemp_h8c19f5ec__0[3U])) {
                        vlSelf->__PVT__fifoGroup_126_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_6_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l369_7) {
                if (vlSelf->__PVT__when_ArraySlice_l229_7) {
                    __Vtemp_hc961b8db__15[0U] = 1U;
                    __Vtemp_hc961b8db__15[1U] = 0U;
                    __Vtemp_hc961b8db__15[2U] = 0U;
                    __Vtemp_hc961b8db__15[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hf47c1340__0, __Vtemp_hc961b8db__15, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6)));
                    if ((0x40000000U & __Vtemp_hf47c1340__0[3U])) {
                        vlSelf->__PVT__fifoGroup_126_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_7_ready;
                    }
                }
            }
            vlSelf->__PVT__fifoGroup_127_io_pop_ready = 0U;
            if (vlSelf->__PVT__when_ArraySlice_l369) {
                if (vlSelf->__PVT__when_ArraySlice_l229) {
                    __Vtemp_hc961b8db__24[0U] = 1U;
                    __Vtemp_hc961b8db__24[1U] = 0U;
                    __Vtemp_hc961b8db__24[2U] = 0U;
                    __Vtemp_hc961b8db__24[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_he4b42e36__0, __Vtemp_hc961b8db__24, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectReadFifo_0)));
                    if ((__Vtemp_he4b42e36__0[3U] >> 0x1fU)) {
                        vlSelf->__PVT__fifoGroup_127_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_0_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l369_1) {
                if (vlSelf->__PVT__when_ArraySlice_l229_1) {
                    __Vtemp_hc961b8db__25[0U] = 1U;
                    __Vtemp_hc961b8db__25[1U] = 0U;
                    __Vtemp_hc961b8db__25[2U] = 0U;
                    __Vtemp_hc961b8db__25[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hf9ac9a07__0, __Vtemp_hc961b8db__25, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_1_valid_1)));
                    if ((__Vtemp_hf9ac9a07__0[3U] >> 0x1fU)) {
                        vlSelf->__PVT__fifoGroup_127_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_1_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l369_2) {
                if (vlSelf->__PVT__when_ArraySlice_l229_2) {
                    __Vtemp_hc961b8db__26[0U] = 1U;
                    __Vtemp_hc961b8db__26[1U] = 0U;
                    __Vtemp_hc961b8db__26[2U] = 0U;
                    __Vtemp_hc961b8db__26[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h38332216__0, __Vtemp_hc961b8db__26, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid)));
                    if ((__Vtemp_h38332216__0[3U] >> 0x1fU)) {
                        vlSelf->__PVT__fifoGroup_127_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_2_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l369_3) {
                if (vlSelf->__PVT__when_ArraySlice_l229_3) {
                    __Vtemp_hc961b8db__27[0U] = 1U;
                    __Vtemp_hc961b8db__27[1U] = 0U;
                    __Vtemp_hc961b8db__27[2U] = 0U;
                    __Vtemp_hc961b8db__27[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd53940f6__0, __Vtemp_hc961b8db__27, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid)));
                    if ((__Vtemp_hd53940f6__0[3U] >> 0x1fU)) {
                        vlSelf->__PVT__fifoGroup_127_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_3_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l369_4) {
                if (vlSelf->__PVT__when_ArraySlice_l229_4) {
                    __Vtemp_hc961b8db__28[0U] = 1U;
                    __Vtemp_hc961b8db__28[1U] = 0U;
                    __Vtemp_hc961b8db__28[2U] = 0U;
                    __Vtemp_hc961b8db__28[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha3b2a2f8__0, __Vtemp_hc961b8db__28, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid)));
                    if ((__Vtemp_ha3b2a2f8__0[3U] >> 0x1fU)) {
                        vlSelf->__PVT__fifoGroup_127_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_4_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l369_5) {
                if (vlSelf->__PVT__when_ArraySlice_l229_5) {
                    __Vtemp_hc961b8db__29[0U] = 1U;
                    __Vtemp_hc961b8db__29[1U] = 0U;
                    __Vtemp_hc961b8db__29[2U] = 0U;
                    __Vtemp_hc961b8db__29[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h948dfba4__0, __Vtemp_hc961b8db__29, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_5_valid)));
                    if ((__Vtemp_h948dfba4__0[3U] >> 0x1fU)) {
                        vlSelf->__PVT__fifoGroup_127_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_5_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l369_6) {
                if (vlSelf->__PVT__when_ArraySlice_l229_6) {
                    __Vtemp_hc961b8db__30[0U] = 1U;
                    __Vtemp_hc961b8db__30[1U] = 0U;
                    __Vtemp_hc961b8db__30[2U] = 0U;
                    __Vtemp_hc961b8db__30[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h694a3a1a__0, __Vtemp_hc961b8db__30, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_6_valid)));
                    if ((__Vtemp_h694a3a1a__0[3U] >> 0x1fU)) {
                        vlSelf->__PVT__fifoGroup_127_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_6_ready;
                    }
                }
            }
            if (vlSelf->__PVT__when_ArraySlice_l369_7) {
                if (vlSelf->__PVT__when_ArraySlice_l229_7) {
                    __Vtemp_hc961b8db__31[0U] = 1U;
                    __Vtemp_hc961b8db__31[1U] = 0U;
                    __Vtemp_hc961b8db__31[2U] = 0U;
                    __Vtemp_hc961b8db__31[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hbc0e9e25__0, __Vtemp_hc961b8db__31, 
                                  (0x7fU & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6)));
                    if ((__Vtemp_hbc0e9e25__0[3U] >> 0x1fU)) {
                        vlSelf->__PVT__fifoGroup_127_io_pop_ready 
                            = vlSymsp->TOP.outputStreamArrayData_7_ready;
                    }
                }
            }
        } else {
            vlSelf->__PVT__fifoGroup_127_io_pop_ready = 0U;
        }
    } else {
        vlSelf->__PVT__fifoGroup_127_io_pop_ready = 0U;
    }
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__399(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__399\n"); );
    // Body
    if (vlSymsp->TOP.resetn) {
        vlSelf->__PVT__fifoGroup_127__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_127__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_126__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_126__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_125__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_125__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_124__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_124__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_123__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_123__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_122__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_122__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_121__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_121__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_120__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_120__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_119__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_119__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_118__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_118__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_117__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_117__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_116__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_116__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_115__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_115__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_114__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_114__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_113__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_113__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_112__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_112__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_111__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_111__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_110__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_110__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_109__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_109__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_108__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_108__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_107__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_107__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_106__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_106__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_105__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_105__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_104__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_104__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_103__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_103__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_102__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_102__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_101__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_101__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_100__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_100__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_99__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_99__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_98__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_98__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_97__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_97__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_96__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_96__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_95__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_95__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_94__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_94__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_93__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_93__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_92__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_92__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_91__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_91__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_90__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_90__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_89__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_89__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_88__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_88__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_87__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_87__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_86__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_86__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_85__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_85__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_84__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_84__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_83__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_83__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_82__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_82__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_81__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_81__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_80__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_80__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_79__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_79__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_78__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_78__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_77__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_77__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_76__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_76__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_75__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_75__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_74__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_74__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_73__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_73__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_72__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_72__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_71__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_71__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_70__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_70__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_69__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_69__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_68__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_68__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_67__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_67__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_66__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_66__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_65__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_65__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_64__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_64__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_63__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_63__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_62__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_62__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_61__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_61__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_60__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_60__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_59__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_59__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_58__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_58__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_57__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_57__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_56__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_56__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_55__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_55__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_54__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_54__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_53__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_53__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_52__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_52__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_51__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_51__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_50__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_50__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_49__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_49__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_48__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_48__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_47__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_47__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_46__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_46__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_45__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_45__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_44__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_44__DOT__logic_pushPtr_valueNext;
    } else {
        vlSelf->__PVT__fifoGroup_127__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_126__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_125__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_124__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_123__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_122__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_121__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_120__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_119__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_118__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_117__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_116__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_115__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_114__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_113__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_112__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_111__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_110__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_109__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_108__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_107__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_106__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_105__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_104__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_103__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_102__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_101__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_100__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_99__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_98__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_97__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_96__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_95__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_94__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_93__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_92__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_91__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_90__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_89__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_88__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_87__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_86__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_85__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_84__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_83__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_82__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_81__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_80__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_79__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_78__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_77__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_76__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_75__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_74__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_73__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_72__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_71__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_70__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_69__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_68__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_67__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_66__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_65__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_64__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_63__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_62__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_61__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_60__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_59__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_58__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_57__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_56__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_55__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_54__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_53__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_52__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_51__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_50__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_49__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_48__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_47__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_46__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_45__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_44__DOT__logic_pushPtr_value = 0U;
    }
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__400(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__400\n"); );
    // Body
    if (vlSymsp->TOP.resetn) {
        vlSelf->__PVT__fifoGroup_43__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_43__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_42__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_42__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_41__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_41__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_40__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_40__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_39__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_39__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_38__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_38__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_37__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_37__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_36__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_36__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_35__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_35__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_34__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_34__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_33__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_33__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_32__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_32__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_31__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_31__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_30__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_30__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_29__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_29__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_28__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_28__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_27__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_27__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_26__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_26__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_25__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_25__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_24__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_24__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_23__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_23__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_22__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_22__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_21__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_21__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_20__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_20__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_19__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_19__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_18__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_18__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_17__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_17__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_16__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_16__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_15__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_15__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_14__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_14__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_13__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_13__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_12__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_12__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_11__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_11__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_10__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_10__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_9__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_9__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_8__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_8__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_7__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_7__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_6__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_6__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_5__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_5__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_4__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_4__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_3__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_3__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_2__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_2__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_1__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_1__DOT__logic_pushPtr_valueNext;
        vlSelf->__PVT__fifoGroup_0__DOT__logic_pushPtr_value 
            = vlSelf->__PVT__fifoGroup_0__DOT__logic_pushPtr_valueNext;
    } else {
        vlSelf->__PVT__fifoGroup_43__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_42__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_41__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_40__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_39__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_38__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_37__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_36__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_35__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_34__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_33__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_32__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_31__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_30__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_29__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_28__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_27__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_26__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_25__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_24__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_23__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_22__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_21__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_20__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_19__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_18__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_17__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_16__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_15__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_14__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_13__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_12__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_11__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_10__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_9__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_8__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_7__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_6__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_5__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_4__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_3__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_2__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_1__DOT__logic_pushPtr_value = 0U;
        vlSelf->__PVT__fifoGroup_0__DOT__logic_pushPtr_value = 0U;
    }
}

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__497(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__497\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__0;
    VlWide<4>/*127:0*/ __Vtemp_hf6a66627__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__1;
    VlWide<4>/*127:0*/ __Vtemp_hc45c6cdb__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__2;
    VlWide<4>/*127:0*/ __Vtemp_h89170b6c__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__3;
    VlWide<4>/*127:0*/ __Vtemp_h2d9ee4ac__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__4;
    VlWide<4>/*127:0*/ __Vtemp_h7144608a__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__5;
    VlWide<4>/*127:0*/ __Vtemp_h87cdd039__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__6;
    VlWide<4>/*127:0*/ __Vtemp_h7189b8e3__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__7;
    VlWide<4>/*127:0*/ __Vtemp_h9c72ed68__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__8;
    VlWide<4>/*127:0*/ __Vtemp_h796fba44__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__9;
    VlWide<4>/*127:0*/ __Vtemp_h1d38b501__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__10;
    VlWide<4>/*127:0*/ __Vtemp_h7f19dec8__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__11;
    VlWide<4>/*127:0*/ __Vtemp_ha403c595__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__12;
    VlWide<4>/*127:0*/ __Vtemp_h38440148__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__13;
    VlWide<4>/*127:0*/ __Vtemp_ha08d88ec__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__14;
    VlWide<4>/*127:0*/ __Vtemp_h8b4148cd__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__15;
    VlWide<4>/*127:0*/ __Vtemp_h8b12d3e4__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__16;
    VlWide<4>/*127:0*/ __Vtemp_hd60af9f3__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__17;
    VlWide<4>/*127:0*/ __Vtemp_hfb884992__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__18;
    VlWide<4>/*127:0*/ __Vtemp_he58d3a6a__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__19;
    VlWide<4>/*127:0*/ __Vtemp_h89a7e792__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__20;
    VlWide<4>/*127:0*/ __Vtemp_h97021cf2__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__21;
    VlWide<4>/*127:0*/ __Vtemp_h092a8fa7__0;
    // Body
    vlSelf->__PVT__fifoGroup_0_io_push_payload = 0U;
    if ((1U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if (vlSelf->__PVT__when_ArraySlice_l199) {
            __Vtemp_hc961b8db__0[0U] = 1U;
            __Vtemp_hc961b8db__0[1U] = 0U;
            __Vtemp_hc961b8db__0[2U] = 0U;
            __Vtemp_hc961b8db__0[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hf6a66627__0, __Vtemp_hc961b8db__0, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((1U & __Vtemp_hf6a66627__0[0U])) {
                vlSelf->__PVT__fifoGroup_0_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_1_io_push_payload = 0U;
            __Vtemp_hc961b8db__2[0U] = 1U;
            __Vtemp_hc961b8db__2[1U] = 0U;
            __Vtemp_hc961b8db__2[2U] = 0U;
            __Vtemp_hc961b8db__2[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h89170b6c__0, __Vtemp_hc961b8db__2, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((2U & __Vtemp_h89170b6c__0[0U])) {
                vlSelf->__PVT__fifoGroup_1_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_2_io_push_payload = 0U;
            __Vtemp_hc961b8db__4[0U] = 1U;
            __Vtemp_hc961b8db__4[1U] = 0U;
            __Vtemp_hc961b8db__4[2U] = 0U;
            __Vtemp_hc961b8db__4[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7144608a__0, __Vtemp_hc961b8db__4, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((4U & __Vtemp_h7144608a__0[0U])) {
                vlSelf->__PVT__fifoGroup_2_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_3_io_push_payload = 0U;
            __Vtemp_hc961b8db__6[0U] = 1U;
            __Vtemp_hc961b8db__6[1U] = 0U;
            __Vtemp_hc961b8db__6[2U] = 0U;
            __Vtemp_hc961b8db__6[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7189b8e3__0, __Vtemp_hc961b8db__6, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((8U & __Vtemp_h7189b8e3__0[0U])) {
                vlSelf->__PVT__fifoGroup_3_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_4_io_push_payload = 0U;
            __Vtemp_hc961b8db__8[0U] = 1U;
            __Vtemp_hc961b8db__8[1U] = 0U;
            __Vtemp_hc961b8db__8[2U] = 0U;
            __Vtemp_hc961b8db__8[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h796fba44__0, __Vtemp_hc961b8db__8, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x10U & __Vtemp_h796fba44__0[0U])) {
                vlSelf->__PVT__fifoGroup_4_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_5_io_push_payload = 0U;
            __Vtemp_hc961b8db__10[0U] = 1U;
            __Vtemp_hc961b8db__10[1U] = 0U;
            __Vtemp_hc961b8db__10[2U] = 0U;
            __Vtemp_hc961b8db__10[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7f19dec8__0, __Vtemp_hc961b8db__10, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x20U & __Vtemp_h7f19dec8__0[0U])) {
                vlSelf->__PVT__fifoGroup_5_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_6_io_push_payload = 0U;
            __Vtemp_hc961b8db__12[0U] = 1U;
            __Vtemp_hc961b8db__12[1U] = 0U;
            __Vtemp_hc961b8db__12[2U] = 0U;
            __Vtemp_hc961b8db__12[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h38440148__0, __Vtemp_hc961b8db__12, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x40U & __Vtemp_h38440148__0[0U])) {
                vlSelf->__PVT__fifoGroup_6_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_7_io_push_payload = 0U;
            __Vtemp_hc961b8db__14[0U] = 1U;
            __Vtemp_hc961b8db__14[1U] = 0U;
            __Vtemp_hc961b8db__14[2U] = 0U;
            __Vtemp_hc961b8db__14[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8b4148cd__0, __Vtemp_hc961b8db__14, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x80U & __Vtemp_h8b4148cd__0[0U])) {
                vlSelf->__PVT__fifoGroup_7_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_8_io_push_payload = 0U;
            __Vtemp_hc961b8db__16[0U] = 1U;
            __Vtemp_hc961b8db__16[1U] = 0U;
            __Vtemp_hc961b8db__16[2U] = 0U;
            __Vtemp_hc961b8db__16[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hd60af9f3__0, __Vtemp_hc961b8db__16, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x100U & __Vtemp_hd60af9f3__0[0U])) {
                vlSelf->__PVT__fifoGroup_8_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_9_io_push_payload = 0U;
            __Vtemp_hc961b8db__18[0U] = 1U;
            __Vtemp_hc961b8db__18[1U] = 0U;
            __Vtemp_hc961b8db__18[2U] = 0U;
            __Vtemp_hc961b8db__18[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he58d3a6a__0, __Vtemp_hc961b8db__18, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x200U & __Vtemp_he58d3a6a__0[0U])) {
                vlSelf->__PVT__fifoGroup_9_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_10_io_push_payload = 0U;
            __Vtemp_hc961b8db__20[0U] = 1U;
            __Vtemp_hc961b8db__20[1U] = 0U;
            __Vtemp_hc961b8db__20[2U] = 0U;
            __Vtemp_hc961b8db__20[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h97021cf2__0, __Vtemp_hc961b8db__20, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x400U & __Vtemp_h97021cf2__0[0U])) {
                vlSelf->__PVT__fifoGroup_10_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
        } else {
            vlSelf->__PVT__fifoGroup_1_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_2_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_3_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_4_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_5_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_6_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_7_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_8_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_9_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_10_io_push_payload = 0U;
        }
    } else if ((2U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l329) {
                if (vlSelf->__PVT__when_ArraySlice_l330) {
                    __Vtemp_hc961b8db__1[0U] = 1U;
                    __Vtemp_hc961b8db__1[1U] = 0U;
                    __Vtemp_hc961b8db__1[2U] = 0U;
                    __Vtemp_hc961b8db__1[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hc45c6cdb__0, __Vtemp_hc961b8db__1, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((1U & __Vtemp_hc45c6cdb__0[0U])) {
                        vlSelf->__PVT__fifoGroup_0_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_1_io_push_payload = 0U;
                    __Vtemp_hc961b8db__3[0U] = 1U;
                    __Vtemp_hc961b8db__3[1U] = 0U;
                    __Vtemp_hc961b8db__3[2U] = 0U;
                    __Vtemp_hc961b8db__3[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h2d9ee4ac__0, __Vtemp_hc961b8db__3, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((2U & __Vtemp_h2d9ee4ac__0[0U])) {
                        vlSelf->__PVT__fifoGroup_1_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_2_io_push_payload = 0U;
                    __Vtemp_hc961b8db__5[0U] = 1U;
                    __Vtemp_hc961b8db__5[1U] = 0U;
                    __Vtemp_hc961b8db__5[2U] = 0U;
                    __Vtemp_hc961b8db__5[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h87cdd039__0, __Vtemp_hc961b8db__5, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((4U & __Vtemp_h87cdd039__0[0U])) {
                        vlSelf->__PVT__fifoGroup_2_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_3_io_push_payload = 0U;
                    __Vtemp_hc961b8db__7[0U] = 1U;
                    __Vtemp_hc961b8db__7[1U] = 0U;
                    __Vtemp_hc961b8db__7[2U] = 0U;
                    __Vtemp_hc961b8db__7[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9c72ed68__0, __Vtemp_hc961b8db__7, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((8U & __Vtemp_h9c72ed68__0[0U])) {
                        vlSelf->__PVT__fifoGroup_3_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_4_io_push_payload = 0U;
                    __Vtemp_hc961b8db__9[0U] = 1U;
                    __Vtemp_hc961b8db__9[1U] = 0U;
                    __Vtemp_hc961b8db__9[2U] = 0U;
                    __Vtemp_hc961b8db__9[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1d38b501__0, __Vtemp_hc961b8db__9, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x10U & __Vtemp_h1d38b501__0[0U])) {
                        vlSelf->__PVT__fifoGroup_4_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_5_io_push_payload = 0U;
                    __Vtemp_hc961b8db__11[0U] = 1U;
                    __Vtemp_hc961b8db__11[1U] = 0U;
                    __Vtemp_hc961b8db__11[2U] = 0U;
                    __Vtemp_hc961b8db__11[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha403c595__0, __Vtemp_hc961b8db__11, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x20U & __Vtemp_ha403c595__0[0U])) {
                        vlSelf->__PVT__fifoGroup_5_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_6_io_push_payload = 0U;
                    __Vtemp_hc961b8db__13[0U] = 1U;
                    __Vtemp_hc961b8db__13[1U] = 0U;
                    __Vtemp_hc961b8db__13[2U] = 0U;
                    __Vtemp_hc961b8db__13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha08d88ec__0, __Vtemp_hc961b8db__13, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x40U & __Vtemp_ha08d88ec__0[0U])) {
                        vlSelf->__PVT__fifoGroup_6_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_7_io_push_payload = 0U;
                    __Vtemp_hc961b8db__15[0U] = 1U;
                    __Vtemp_hc961b8db__15[1U] = 0U;
                    __Vtemp_hc961b8db__15[2U] = 0U;
                    __Vtemp_hc961b8db__15[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8b12d3e4__0, __Vtemp_hc961b8db__15, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x80U & __Vtemp_h8b12d3e4__0[0U])) {
                        vlSelf->__PVT__fifoGroup_7_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_8_io_push_payload = 0U;
                    __Vtemp_hc961b8db__17[0U] = 1U;
                    __Vtemp_hc961b8db__17[1U] = 0U;
                    __Vtemp_hc961b8db__17[2U] = 0U;
                    __Vtemp_hc961b8db__17[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hfb884992__0, __Vtemp_hc961b8db__17, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x100U & __Vtemp_hfb884992__0[0U])) {
                        vlSelf->__PVT__fifoGroup_8_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_9_io_push_payload = 0U;
                    __Vtemp_hc961b8db__19[0U] = 1U;
                    __Vtemp_hc961b8db__19[1U] = 0U;
                    __Vtemp_hc961b8db__19[2U] = 0U;
                    __Vtemp_hc961b8db__19[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h89a7e792__0, __Vtemp_hc961b8db__19, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x200U & __Vtemp_h89a7e792__0[0U])) {
                        vlSelf->__PVT__fifoGroup_9_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_10_io_push_payload = 0U;
                    __Vtemp_hc961b8db__21[0U] = 1U;
                    __Vtemp_hc961b8db__21[1U] = 0U;
                    __Vtemp_hc961b8db__21[2U] = 0U;
                    __Vtemp_hc961b8db__21[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h092a8fa7__0, __Vtemp_hc961b8db__21, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x400U & __Vtemp_h092a8fa7__0[0U])) {
                        vlSelf->__PVT__fifoGroup_10_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                } else {
                    vlSelf->__PVT__fifoGroup_1_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_2_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_3_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_4_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_5_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_6_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_7_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_8_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_9_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_10_io_push_payload = 0U;
                }
            } else {
                vlSelf->__PVT__fifoGroup_1_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_2_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_3_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_4_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_5_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_6_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_7_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_8_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_9_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_10_io_push_payload = 0U;
            }
        } else {
            vlSelf->__PVT__fifoGroup_1_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_2_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_3_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_4_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_5_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_6_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_7_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_8_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_9_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_10_io_push_payload = 0U;
        }
    } else {
        vlSelf->__PVT__fifoGroup_1_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_2_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_3_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_4_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_5_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_6_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_7_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_8_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_9_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_10_io_push_payload = 0U;
    }
}

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__498(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__498\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__0;
    VlWide<4>/*127:0*/ __Vtemp_hf6a66627__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__1;
    VlWide<4>/*127:0*/ __Vtemp_hc45c6cdb__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__2;
    VlWide<4>/*127:0*/ __Vtemp_h89170b6c__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__3;
    VlWide<4>/*127:0*/ __Vtemp_h2d9ee4ac__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__4;
    VlWide<4>/*127:0*/ __Vtemp_h7144608a__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__5;
    VlWide<4>/*127:0*/ __Vtemp_h87cdd039__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__6;
    VlWide<4>/*127:0*/ __Vtemp_h7189b8e3__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__7;
    VlWide<4>/*127:0*/ __Vtemp_h9c72ed68__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__8;
    VlWide<4>/*127:0*/ __Vtemp_h796fba44__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__9;
    VlWide<4>/*127:0*/ __Vtemp_h1d38b501__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__10;
    VlWide<4>/*127:0*/ __Vtemp_h7f19dec8__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__11;
    VlWide<4>/*127:0*/ __Vtemp_ha403c595__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__12;
    VlWide<4>/*127:0*/ __Vtemp_h38440148__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__13;
    VlWide<4>/*127:0*/ __Vtemp_ha08d88ec__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__14;
    VlWide<4>/*127:0*/ __Vtemp_h8b4148cd__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__15;
    VlWide<4>/*127:0*/ __Vtemp_h8b12d3e4__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__16;
    VlWide<4>/*127:0*/ __Vtemp_hd60af9f3__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__17;
    VlWide<4>/*127:0*/ __Vtemp_hfb884992__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__18;
    VlWide<4>/*127:0*/ __Vtemp_he58d3a6a__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__19;
    VlWide<4>/*127:0*/ __Vtemp_h89a7e792__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__20;
    VlWide<4>/*127:0*/ __Vtemp_h97021cf2__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__21;
    VlWide<4>/*127:0*/ __Vtemp_h092a8fa7__0;
    // Body
    vlSelf->__PVT__fifoGroup_11_io_push_payload = 0U;
    if ((1U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if (vlSelf->__PVT__when_ArraySlice_l199) {
            __Vtemp_hc961b8db__0[0U] = 1U;
            __Vtemp_hc961b8db__0[1U] = 0U;
            __Vtemp_hc961b8db__0[2U] = 0U;
            __Vtemp_hc961b8db__0[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hf6a66627__0, __Vtemp_hc961b8db__0, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x800U & __Vtemp_hf6a66627__0[0U])) {
                vlSelf->__PVT__fifoGroup_11_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_12_io_push_payload = 0U;
            __Vtemp_hc961b8db__2[0U] = 1U;
            __Vtemp_hc961b8db__2[1U] = 0U;
            __Vtemp_hc961b8db__2[2U] = 0U;
            __Vtemp_hc961b8db__2[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h89170b6c__0, __Vtemp_hc961b8db__2, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x1000U & __Vtemp_h89170b6c__0[0U])) {
                vlSelf->__PVT__fifoGroup_12_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_13_io_push_payload = 0U;
            __Vtemp_hc961b8db__4[0U] = 1U;
            __Vtemp_hc961b8db__4[1U] = 0U;
            __Vtemp_hc961b8db__4[2U] = 0U;
            __Vtemp_hc961b8db__4[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7144608a__0, __Vtemp_hc961b8db__4, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x2000U & __Vtemp_h7144608a__0[0U])) {
                vlSelf->__PVT__fifoGroup_13_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_14_io_push_payload = 0U;
            __Vtemp_hc961b8db__6[0U] = 1U;
            __Vtemp_hc961b8db__6[1U] = 0U;
            __Vtemp_hc961b8db__6[2U] = 0U;
            __Vtemp_hc961b8db__6[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7189b8e3__0, __Vtemp_hc961b8db__6, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x4000U & __Vtemp_h7189b8e3__0[0U])) {
                vlSelf->__PVT__fifoGroup_14_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_15_io_push_payload = 0U;
            __Vtemp_hc961b8db__8[0U] = 1U;
            __Vtemp_hc961b8db__8[1U] = 0U;
            __Vtemp_hc961b8db__8[2U] = 0U;
            __Vtemp_hc961b8db__8[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h796fba44__0, __Vtemp_hc961b8db__8, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x8000U & __Vtemp_h796fba44__0[0U])) {
                vlSelf->__PVT__fifoGroup_15_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_16_io_push_payload = 0U;
            __Vtemp_hc961b8db__10[0U] = 1U;
            __Vtemp_hc961b8db__10[1U] = 0U;
            __Vtemp_hc961b8db__10[2U] = 0U;
            __Vtemp_hc961b8db__10[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7f19dec8__0, __Vtemp_hc961b8db__10, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x10000U & __Vtemp_h7f19dec8__0[0U])) {
                vlSelf->__PVT__fifoGroup_16_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_17_io_push_payload = 0U;
            __Vtemp_hc961b8db__12[0U] = 1U;
            __Vtemp_hc961b8db__12[1U] = 0U;
            __Vtemp_hc961b8db__12[2U] = 0U;
            __Vtemp_hc961b8db__12[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h38440148__0, __Vtemp_hc961b8db__12, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x20000U & __Vtemp_h38440148__0[0U])) {
                vlSelf->__PVT__fifoGroup_17_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_18_io_push_payload = 0U;
            __Vtemp_hc961b8db__14[0U] = 1U;
            __Vtemp_hc961b8db__14[1U] = 0U;
            __Vtemp_hc961b8db__14[2U] = 0U;
            __Vtemp_hc961b8db__14[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8b4148cd__0, __Vtemp_hc961b8db__14, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x40000U & __Vtemp_h8b4148cd__0[0U])) {
                vlSelf->__PVT__fifoGroup_18_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_19_io_push_payload = 0U;
            __Vtemp_hc961b8db__16[0U] = 1U;
            __Vtemp_hc961b8db__16[1U] = 0U;
            __Vtemp_hc961b8db__16[2U] = 0U;
            __Vtemp_hc961b8db__16[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hd60af9f3__0, __Vtemp_hc961b8db__16, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x80000U & __Vtemp_hd60af9f3__0[0U])) {
                vlSelf->__PVT__fifoGroup_19_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_20_io_push_payload = 0U;
            __Vtemp_hc961b8db__18[0U] = 1U;
            __Vtemp_hc961b8db__18[1U] = 0U;
            __Vtemp_hc961b8db__18[2U] = 0U;
            __Vtemp_hc961b8db__18[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he58d3a6a__0, __Vtemp_hc961b8db__18, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x100000U & __Vtemp_he58d3a6a__0[0U])) {
                vlSelf->__PVT__fifoGroup_20_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_21_io_push_payload = 0U;
            __Vtemp_hc961b8db__20[0U] = 1U;
            __Vtemp_hc961b8db__20[1U] = 0U;
            __Vtemp_hc961b8db__20[2U] = 0U;
            __Vtemp_hc961b8db__20[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h97021cf2__0, __Vtemp_hc961b8db__20, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x200000U & __Vtemp_h97021cf2__0[0U])) {
                vlSelf->__PVT__fifoGroup_21_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
        } else {
            vlSelf->__PVT__fifoGroup_12_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_13_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_14_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_15_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_16_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_17_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_18_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_19_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_20_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_21_io_push_payload = 0U;
        }
    } else if ((2U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l329) {
                if (vlSelf->__PVT__when_ArraySlice_l330) {
                    __Vtemp_hc961b8db__1[0U] = 1U;
                    __Vtemp_hc961b8db__1[1U] = 0U;
                    __Vtemp_hc961b8db__1[2U] = 0U;
                    __Vtemp_hc961b8db__1[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hc45c6cdb__0, __Vtemp_hc961b8db__1, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x800U & __Vtemp_hc45c6cdb__0[0U])) {
                        vlSelf->__PVT__fifoGroup_11_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_12_io_push_payload = 0U;
                    __Vtemp_hc961b8db__3[0U] = 1U;
                    __Vtemp_hc961b8db__3[1U] = 0U;
                    __Vtemp_hc961b8db__3[2U] = 0U;
                    __Vtemp_hc961b8db__3[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h2d9ee4ac__0, __Vtemp_hc961b8db__3, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x1000U & __Vtemp_h2d9ee4ac__0[0U])) {
                        vlSelf->__PVT__fifoGroup_12_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_13_io_push_payload = 0U;
                    __Vtemp_hc961b8db__5[0U] = 1U;
                    __Vtemp_hc961b8db__5[1U] = 0U;
                    __Vtemp_hc961b8db__5[2U] = 0U;
                    __Vtemp_hc961b8db__5[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h87cdd039__0, __Vtemp_hc961b8db__5, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x2000U & __Vtemp_h87cdd039__0[0U])) {
                        vlSelf->__PVT__fifoGroup_13_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_14_io_push_payload = 0U;
                    __Vtemp_hc961b8db__7[0U] = 1U;
                    __Vtemp_hc961b8db__7[1U] = 0U;
                    __Vtemp_hc961b8db__7[2U] = 0U;
                    __Vtemp_hc961b8db__7[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9c72ed68__0, __Vtemp_hc961b8db__7, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x4000U & __Vtemp_h9c72ed68__0[0U])) {
                        vlSelf->__PVT__fifoGroup_14_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_15_io_push_payload = 0U;
                    __Vtemp_hc961b8db__9[0U] = 1U;
                    __Vtemp_hc961b8db__9[1U] = 0U;
                    __Vtemp_hc961b8db__9[2U] = 0U;
                    __Vtemp_hc961b8db__9[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1d38b501__0, __Vtemp_hc961b8db__9, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x8000U & __Vtemp_h1d38b501__0[0U])) {
                        vlSelf->__PVT__fifoGroup_15_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_16_io_push_payload = 0U;
                    __Vtemp_hc961b8db__11[0U] = 1U;
                    __Vtemp_hc961b8db__11[1U] = 0U;
                    __Vtemp_hc961b8db__11[2U] = 0U;
                    __Vtemp_hc961b8db__11[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha403c595__0, __Vtemp_hc961b8db__11, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x10000U & __Vtemp_ha403c595__0[0U])) {
                        vlSelf->__PVT__fifoGroup_16_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_17_io_push_payload = 0U;
                    __Vtemp_hc961b8db__13[0U] = 1U;
                    __Vtemp_hc961b8db__13[1U] = 0U;
                    __Vtemp_hc961b8db__13[2U] = 0U;
                    __Vtemp_hc961b8db__13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha08d88ec__0, __Vtemp_hc961b8db__13, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x20000U & __Vtemp_ha08d88ec__0[0U])) {
                        vlSelf->__PVT__fifoGroup_17_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_18_io_push_payload = 0U;
                    __Vtemp_hc961b8db__15[0U] = 1U;
                    __Vtemp_hc961b8db__15[1U] = 0U;
                    __Vtemp_hc961b8db__15[2U] = 0U;
                    __Vtemp_hc961b8db__15[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8b12d3e4__0, __Vtemp_hc961b8db__15, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x40000U & __Vtemp_h8b12d3e4__0[0U])) {
                        vlSelf->__PVT__fifoGroup_18_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_19_io_push_payload = 0U;
                    __Vtemp_hc961b8db__17[0U] = 1U;
                    __Vtemp_hc961b8db__17[1U] = 0U;
                    __Vtemp_hc961b8db__17[2U] = 0U;
                    __Vtemp_hc961b8db__17[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hfb884992__0, __Vtemp_hc961b8db__17, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x80000U & __Vtemp_hfb884992__0[0U])) {
                        vlSelf->__PVT__fifoGroup_19_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_20_io_push_payload = 0U;
                    __Vtemp_hc961b8db__19[0U] = 1U;
                    __Vtemp_hc961b8db__19[1U] = 0U;
                    __Vtemp_hc961b8db__19[2U] = 0U;
                    __Vtemp_hc961b8db__19[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h89a7e792__0, __Vtemp_hc961b8db__19, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x100000U & __Vtemp_h89a7e792__0[0U])) {
                        vlSelf->__PVT__fifoGroup_20_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_21_io_push_payload = 0U;
                    __Vtemp_hc961b8db__21[0U] = 1U;
                    __Vtemp_hc961b8db__21[1U] = 0U;
                    __Vtemp_hc961b8db__21[2U] = 0U;
                    __Vtemp_hc961b8db__21[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h092a8fa7__0, __Vtemp_hc961b8db__21, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x200000U & __Vtemp_h092a8fa7__0[0U])) {
                        vlSelf->__PVT__fifoGroup_21_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                } else {
                    vlSelf->__PVT__fifoGroup_12_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_13_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_14_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_15_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_16_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_17_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_18_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_19_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_20_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_21_io_push_payload = 0U;
                }
            } else {
                vlSelf->__PVT__fifoGroup_12_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_13_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_14_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_15_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_16_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_17_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_18_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_19_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_20_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_21_io_push_payload = 0U;
            }
        } else {
            vlSelf->__PVT__fifoGroup_12_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_13_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_14_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_15_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_16_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_17_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_18_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_19_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_20_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_21_io_push_payload = 0U;
        }
    } else {
        vlSelf->__PVT__fifoGroup_12_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_13_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_14_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_15_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_16_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_17_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_18_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_19_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_20_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_21_io_push_payload = 0U;
    }
}

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__499(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__499\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__0;
    VlWide<4>/*127:0*/ __Vtemp_hf6a66627__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__1;
    VlWide<4>/*127:0*/ __Vtemp_hc45c6cdb__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__2;
    VlWide<4>/*127:0*/ __Vtemp_h89170b6c__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__3;
    VlWide<4>/*127:0*/ __Vtemp_h2d9ee4ac__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__4;
    VlWide<4>/*127:0*/ __Vtemp_h7144608a__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__5;
    VlWide<4>/*127:0*/ __Vtemp_h87cdd039__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__6;
    VlWide<4>/*127:0*/ __Vtemp_h7189b8e3__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__7;
    VlWide<4>/*127:0*/ __Vtemp_h9c72ed68__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__8;
    VlWide<4>/*127:0*/ __Vtemp_h796fba44__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__9;
    VlWide<4>/*127:0*/ __Vtemp_h1d38b501__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__10;
    VlWide<4>/*127:0*/ __Vtemp_h7f19dec8__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__11;
    VlWide<4>/*127:0*/ __Vtemp_ha403c595__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__12;
    VlWide<4>/*127:0*/ __Vtemp_h38440148__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__13;
    VlWide<4>/*127:0*/ __Vtemp_ha08d88ec__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__14;
    VlWide<4>/*127:0*/ __Vtemp_h8b4148cd__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__15;
    VlWide<4>/*127:0*/ __Vtemp_h8b12d3e4__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__16;
    VlWide<4>/*127:0*/ __Vtemp_hd60af9f3__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__17;
    VlWide<4>/*127:0*/ __Vtemp_hfb884992__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__18;
    VlWide<4>/*127:0*/ __Vtemp_he58d3a6a__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__19;
    VlWide<4>/*127:0*/ __Vtemp_h89a7e792__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__20;
    VlWide<4>/*127:0*/ __Vtemp_h97021cf2__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961b8db__21;
    VlWide<4>/*127:0*/ __Vtemp_h092a8fa7__0;
    // Body
    vlSelf->__PVT__fifoGroup_22_io_push_payload = 0U;
    if ((1U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if (vlSelf->__PVT__when_ArraySlice_l199) {
            __Vtemp_hc961b8db__0[0U] = 1U;
            __Vtemp_hc961b8db__0[1U] = 0U;
            __Vtemp_hc961b8db__0[2U] = 0U;
            __Vtemp_hc961b8db__0[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hf6a66627__0, __Vtemp_hc961b8db__0, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x400000U & __Vtemp_hf6a66627__0[0U])) {
                vlSelf->__PVT__fifoGroup_22_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_23_io_push_payload = 0U;
            __Vtemp_hc961b8db__2[0U] = 1U;
            __Vtemp_hc961b8db__2[1U] = 0U;
            __Vtemp_hc961b8db__2[2U] = 0U;
            __Vtemp_hc961b8db__2[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h89170b6c__0, __Vtemp_hc961b8db__2, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x800000U & __Vtemp_h89170b6c__0[0U])) {
                vlSelf->__PVT__fifoGroup_23_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_24_io_push_payload = 0U;
            __Vtemp_hc961b8db__4[0U] = 1U;
            __Vtemp_hc961b8db__4[1U] = 0U;
            __Vtemp_hc961b8db__4[2U] = 0U;
            __Vtemp_hc961b8db__4[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7144608a__0, __Vtemp_hc961b8db__4, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x1000000U & __Vtemp_h7144608a__0[0U])) {
                vlSelf->__PVT__fifoGroup_24_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_25_io_push_payload = 0U;
            __Vtemp_hc961b8db__6[0U] = 1U;
            __Vtemp_hc961b8db__6[1U] = 0U;
            __Vtemp_hc961b8db__6[2U] = 0U;
            __Vtemp_hc961b8db__6[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7189b8e3__0, __Vtemp_hc961b8db__6, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x2000000U & __Vtemp_h7189b8e3__0[0U])) {
                vlSelf->__PVT__fifoGroup_25_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_26_io_push_payload = 0U;
            __Vtemp_hc961b8db__8[0U] = 1U;
            __Vtemp_hc961b8db__8[1U] = 0U;
            __Vtemp_hc961b8db__8[2U] = 0U;
            __Vtemp_hc961b8db__8[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h796fba44__0, __Vtemp_hc961b8db__8, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x4000000U & __Vtemp_h796fba44__0[0U])) {
                vlSelf->__PVT__fifoGroup_26_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_27_io_push_payload = 0U;
            __Vtemp_hc961b8db__10[0U] = 1U;
            __Vtemp_hc961b8db__10[1U] = 0U;
            __Vtemp_hc961b8db__10[2U] = 0U;
            __Vtemp_hc961b8db__10[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7f19dec8__0, __Vtemp_hc961b8db__10, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x8000000U & __Vtemp_h7f19dec8__0[0U])) {
                vlSelf->__PVT__fifoGroup_27_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_28_io_push_payload = 0U;
            __Vtemp_hc961b8db__12[0U] = 1U;
            __Vtemp_hc961b8db__12[1U] = 0U;
            __Vtemp_hc961b8db__12[2U] = 0U;
            __Vtemp_hc961b8db__12[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h38440148__0, __Vtemp_hc961b8db__12, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x10000000U & __Vtemp_h38440148__0[0U])) {
                vlSelf->__PVT__fifoGroup_28_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_29_io_push_payload = 0U;
            __Vtemp_hc961b8db__14[0U] = 1U;
            __Vtemp_hc961b8db__14[1U] = 0U;
            __Vtemp_hc961b8db__14[2U] = 0U;
            __Vtemp_hc961b8db__14[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8b4148cd__0, __Vtemp_hc961b8db__14, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x20000000U & __Vtemp_h8b4148cd__0[0U])) {
                vlSelf->__PVT__fifoGroup_29_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_30_io_push_payload = 0U;
            __Vtemp_hc961b8db__16[0U] = 1U;
            __Vtemp_hc961b8db__16[1U] = 0U;
            __Vtemp_hc961b8db__16[2U] = 0U;
            __Vtemp_hc961b8db__16[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hd60af9f3__0, __Vtemp_hc961b8db__16, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x40000000U & __Vtemp_hd60af9f3__0[0U])) {
                vlSelf->__PVT__fifoGroup_30_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_31_io_push_payload = 0U;
            __Vtemp_hc961b8db__18[0U] = 1U;
            __Vtemp_hc961b8db__18[1U] = 0U;
            __Vtemp_hc961b8db__18[2U] = 0U;
            __Vtemp_hc961b8db__18[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he58d3a6a__0, __Vtemp_hc961b8db__18, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((__Vtemp_he58d3a6a__0[0U] >> 0x1fU)) {
                vlSelf->__PVT__fifoGroup_31_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_32_io_push_payload = 0U;
            __Vtemp_hc961b8db__20[0U] = 1U;
            __Vtemp_hc961b8db__20[1U] = 0U;
            __Vtemp_hc961b8db__20[2U] = 0U;
            __Vtemp_hc961b8db__20[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h97021cf2__0, __Vtemp_hc961b8db__20, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((1U & __Vtemp_h97021cf2__0[1U])) {
                vlSelf->__PVT__fifoGroup_32_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
        } else {
            vlSelf->__PVT__fifoGroup_23_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_24_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_25_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_26_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_27_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_28_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_29_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_30_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_31_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_32_io_push_payload = 0U;
        }
    } else if ((2U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l329) {
                if (vlSelf->__PVT__when_ArraySlice_l330) {
                    __Vtemp_hc961b8db__1[0U] = 1U;
                    __Vtemp_hc961b8db__1[1U] = 0U;
                    __Vtemp_hc961b8db__1[2U] = 0U;
                    __Vtemp_hc961b8db__1[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hc45c6cdb__0, __Vtemp_hc961b8db__1, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x400000U & __Vtemp_hc45c6cdb__0[0U])) {
                        vlSelf->__PVT__fifoGroup_22_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_23_io_push_payload = 0U;
                    __Vtemp_hc961b8db__3[0U] = 1U;
                    __Vtemp_hc961b8db__3[1U] = 0U;
                    __Vtemp_hc961b8db__3[2U] = 0U;
                    __Vtemp_hc961b8db__3[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h2d9ee4ac__0, __Vtemp_hc961b8db__3, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x800000U & __Vtemp_h2d9ee4ac__0[0U])) {
                        vlSelf->__PVT__fifoGroup_23_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_24_io_push_payload = 0U;
                    __Vtemp_hc961b8db__5[0U] = 1U;
                    __Vtemp_hc961b8db__5[1U] = 0U;
                    __Vtemp_hc961b8db__5[2U] = 0U;
                    __Vtemp_hc961b8db__5[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h87cdd039__0, __Vtemp_hc961b8db__5, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x1000000U & __Vtemp_h87cdd039__0[0U])) {
                        vlSelf->__PVT__fifoGroup_24_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_25_io_push_payload = 0U;
                    __Vtemp_hc961b8db__7[0U] = 1U;
                    __Vtemp_hc961b8db__7[1U] = 0U;
                    __Vtemp_hc961b8db__7[2U] = 0U;
                    __Vtemp_hc961b8db__7[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9c72ed68__0, __Vtemp_hc961b8db__7, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x2000000U & __Vtemp_h9c72ed68__0[0U])) {
                        vlSelf->__PVT__fifoGroup_25_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_26_io_push_payload = 0U;
                    __Vtemp_hc961b8db__9[0U] = 1U;
                    __Vtemp_hc961b8db__9[1U] = 0U;
                    __Vtemp_hc961b8db__9[2U] = 0U;
                    __Vtemp_hc961b8db__9[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1d38b501__0, __Vtemp_hc961b8db__9, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x4000000U & __Vtemp_h1d38b501__0[0U])) {
                        vlSelf->__PVT__fifoGroup_26_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_27_io_push_payload = 0U;
                    __Vtemp_hc961b8db__11[0U] = 1U;
                    __Vtemp_hc961b8db__11[1U] = 0U;
                    __Vtemp_hc961b8db__11[2U] = 0U;
                    __Vtemp_hc961b8db__11[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha403c595__0, __Vtemp_hc961b8db__11, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x8000000U & __Vtemp_ha403c595__0[0U])) {
                        vlSelf->__PVT__fifoGroup_27_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_28_io_push_payload = 0U;
                    __Vtemp_hc961b8db__13[0U] = 1U;
                    __Vtemp_hc961b8db__13[1U] = 0U;
                    __Vtemp_hc961b8db__13[2U] = 0U;
                    __Vtemp_hc961b8db__13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha08d88ec__0, __Vtemp_hc961b8db__13, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x10000000U & __Vtemp_ha08d88ec__0[0U])) {
                        vlSelf->__PVT__fifoGroup_28_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_29_io_push_payload = 0U;
                    __Vtemp_hc961b8db__15[0U] = 1U;
                    __Vtemp_hc961b8db__15[1U] = 0U;
                    __Vtemp_hc961b8db__15[2U] = 0U;
                    __Vtemp_hc961b8db__15[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8b12d3e4__0, __Vtemp_hc961b8db__15, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x20000000U & __Vtemp_h8b12d3e4__0[0U])) {
                        vlSelf->__PVT__fifoGroup_29_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_30_io_push_payload = 0U;
                    __Vtemp_hc961b8db__17[0U] = 1U;
                    __Vtemp_hc961b8db__17[1U] = 0U;
                    __Vtemp_hc961b8db__17[2U] = 0U;
                    __Vtemp_hc961b8db__17[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hfb884992__0, __Vtemp_hc961b8db__17, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x40000000U & __Vtemp_hfb884992__0[0U])) {
                        vlSelf->__PVT__fifoGroup_30_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_31_io_push_payload = 0U;
                    __Vtemp_hc961b8db__19[0U] = 1U;
                    __Vtemp_hc961b8db__19[1U] = 0U;
                    __Vtemp_hc961b8db__19[2U] = 0U;
                    __Vtemp_hc961b8db__19[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h89a7e792__0, __Vtemp_hc961b8db__19, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((__Vtemp_h89a7e792__0[0U] >> 0x1fU)) {
                        vlSelf->__PVT__fifoGroup_31_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_32_io_push_payload = 0U;
                    __Vtemp_hc961b8db__21[0U] = 1U;
                    __Vtemp_hc961b8db__21[1U] = 0U;
                    __Vtemp_hc961b8db__21[2U] = 0U;
                    __Vtemp_hc961b8db__21[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h092a8fa7__0, __Vtemp_hc961b8db__21, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((1U & __Vtemp_h092a8fa7__0[1U])) {
                        vlSelf->__PVT__fifoGroup_32_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                } else {
                    vlSelf->__PVT__fifoGroup_23_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_24_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_25_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_26_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_27_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_28_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_29_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_30_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_31_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_32_io_push_payload = 0U;
                }
            } else {
                vlSelf->__PVT__fifoGroup_23_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_24_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_25_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_26_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_27_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_28_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_29_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_30_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_31_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_32_io_push_payload = 0U;
            }
        } else {
            vlSelf->__PVT__fifoGroup_23_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_24_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_25_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_26_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_27_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_28_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_29_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_30_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_31_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_32_io_push_payload = 0U;
        }
    } else {
        vlSelf->__PVT__fifoGroup_23_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_24_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_25_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_26_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_27_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_28_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_29_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_30_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_31_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_32_io_push_payload = 0U;
    }
}
