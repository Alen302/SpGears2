// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VarraySlice.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VarraySlice__Syms.h"
#include "VarraySlice_arraySlice.h"

VL_ATTR_COLD void VarraySlice_arraySlice___settle__TOP__arraySlice__287(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__287\n"); );
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
    vlSelf->__PVT__fifoGroup_104_io_push_payload = 0U;
    if ((1U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if (vlSelf->__PVT__when_ArraySlice_l199) {
            __Vtemp_hc961b8db__0[0U] = 1U;
            __Vtemp_hc961b8db__0[1U] = 0U;
            __Vtemp_hc961b8db__0[2U] = 0U;
            __Vtemp_hc961b8db__0[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hf6a66627__0, __Vtemp_hc961b8db__0, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x100U & __Vtemp_hf6a66627__0[3U])) {
                vlSelf->__PVT__fifoGroup_104_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_105_io_push_payload = 0U;
            __Vtemp_hc961b8db__2[0U] = 1U;
            __Vtemp_hc961b8db__2[1U] = 0U;
            __Vtemp_hc961b8db__2[2U] = 0U;
            __Vtemp_hc961b8db__2[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h89170b6c__0, __Vtemp_hc961b8db__2, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x200U & __Vtemp_h89170b6c__0[3U])) {
                vlSelf->__PVT__fifoGroup_105_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_106_io_push_payload = 0U;
            __Vtemp_hc961b8db__4[0U] = 1U;
            __Vtemp_hc961b8db__4[1U] = 0U;
            __Vtemp_hc961b8db__4[2U] = 0U;
            __Vtemp_hc961b8db__4[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7144608a__0, __Vtemp_hc961b8db__4, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x400U & __Vtemp_h7144608a__0[3U])) {
                vlSelf->__PVT__fifoGroup_106_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_107_io_push_payload = 0U;
            __Vtemp_hc961b8db__6[0U] = 1U;
            __Vtemp_hc961b8db__6[1U] = 0U;
            __Vtemp_hc961b8db__6[2U] = 0U;
            __Vtemp_hc961b8db__6[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7189b8e3__0, __Vtemp_hc961b8db__6, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x800U & __Vtemp_h7189b8e3__0[3U])) {
                vlSelf->__PVT__fifoGroup_107_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_108_io_push_payload = 0U;
            __Vtemp_hc961b8db__8[0U] = 1U;
            __Vtemp_hc961b8db__8[1U] = 0U;
            __Vtemp_hc961b8db__8[2U] = 0U;
            __Vtemp_hc961b8db__8[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h796fba44__0, __Vtemp_hc961b8db__8, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x1000U & __Vtemp_h796fba44__0[3U])) {
                vlSelf->__PVT__fifoGroup_108_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_109_io_push_payload = 0U;
            __Vtemp_hc961b8db__10[0U] = 1U;
            __Vtemp_hc961b8db__10[1U] = 0U;
            __Vtemp_hc961b8db__10[2U] = 0U;
            __Vtemp_hc961b8db__10[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7f19dec8__0, __Vtemp_hc961b8db__10, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x2000U & __Vtemp_h7f19dec8__0[3U])) {
                vlSelf->__PVT__fifoGroup_109_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_110_io_push_payload = 0U;
            __Vtemp_hc961b8db__12[0U] = 1U;
            __Vtemp_hc961b8db__12[1U] = 0U;
            __Vtemp_hc961b8db__12[2U] = 0U;
            __Vtemp_hc961b8db__12[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h38440148__0, __Vtemp_hc961b8db__12, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x4000U & __Vtemp_h38440148__0[3U])) {
                vlSelf->__PVT__fifoGroup_110_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_111_io_push_payload = 0U;
            __Vtemp_hc961b8db__14[0U] = 1U;
            __Vtemp_hc961b8db__14[1U] = 0U;
            __Vtemp_hc961b8db__14[2U] = 0U;
            __Vtemp_hc961b8db__14[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8b4148cd__0, __Vtemp_hc961b8db__14, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x8000U & __Vtemp_h8b4148cd__0[3U])) {
                vlSelf->__PVT__fifoGroup_111_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_112_io_push_payload = 0U;
            __Vtemp_hc961b8db__16[0U] = 1U;
            __Vtemp_hc961b8db__16[1U] = 0U;
            __Vtemp_hc961b8db__16[2U] = 0U;
            __Vtemp_hc961b8db__16[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hd60af9f3__0, __Vtemp_hc961b8db__16, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x10000U & __Vtemp_hd60af9f3__0[3U])) {
                vlSelf->__PVT__fifoGroup_112_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_113_io_push_payload = 0U;
            __Vtemp_hc961b8db__18[0U] = 1U;
            __Vtemp_hc961b8db__18[1U] = 0U;
            __Vtemp_hc961b8db__18[2U] = 0U;
            __Vtemp_hc961b8db__18[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he58d3a6a__0, __Vtemp_hc961b8db__18, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x20000U & __Vtemp_he58d3a6a__0[3U])) {
                vlSelf->__PVT__fifoGroup_113_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_114_io_push_payload = 0U;
            __Vtemp_hc961b8db__20[0U] = 1U;
            __Vtemp_hc961b8db__20[1U] = 0U;
            __Vtemp_hc961b8db__20[2U] = 0U;
            __Vtemp_hc961b8db__20[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h97021cf2__0, __Vtemp_hc961b8db__20, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x40000U & __Vtemp_h97021cf2__0[3U])) {
                vlSelf->__PVT__fifoGroup_114_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
        } else {
            vlSelf->__PVT__fifoGroup_105_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_106_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_107_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_108_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_109_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_110_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_111_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_112_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_113_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_114_io_push_payload = 0U;
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
                    if ((0x100U & __Vtemp_hc45c6cdb__0[3U])) {
                        vlSelf->__PVT__fifoGroup_104_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_105_io_push_payload = 0U;
                    __Vtemp_hc961b8db__3[0U] = 1U;
                    __Vtemp_hc961b8db__3[1U] = 0U;
                    __Vtemp_hc961b8db__3[2U] = 0U;
                    __Vtemp_hc961b8db__3[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h2d9ee4ac__0, __Vtemp_hc961b8db__3, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x200U & __Vtemp_h2d9ee4ac__0[3U])) {
                        vlSelf->__PVT__fifoGroup_105_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_106_io_push_payload = 0U;
                    __Vtemp_hc961b8db__5[0U] = 1U;
                    __Vtemp_hc961b8db__5[1U] = 0U;
                    __Vtemp_hc961b8db__5[2U] = 0U;
                    __Vtemp_hc961b8db__5[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h87cdd039__0, __Vtemp_hc961b8db__5, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x400U & __Vtemp_h87cdd039__0[3U])) {
                        vlSelf->__PVT__fifoGroup_106_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_107_io_push_payload = 0U;
                    __Vtemp_hc961b8db__7[0U] = 1U;
                    __Vtemp_hc961b8db__7[1U] = 0U;
                    __Vtemp_hc961b8db__7[2U] = 0U;
                    __Vtemp_hc961b8db__7[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9c72ed68__0, __Vtemp_hc961b8db__7, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x800U & __Vtemp_h9c72ed68__0[3U])) {
                        vlSelf->__PVT__fifoGroup_107_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_108_io_push_payload = 0U;
                    __Vtemp_hc961b8db__9[0U] = 1U;
                    __Vtemp_hc961b8db__9[1U] = 0U;
                    __Vtemp_hc961b8db__9[2U] = 0U;
                    __Vtemp_hc961b8db__9[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1d38b501__0, __Vtemp_hc961b8db__9, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x1000U & __Vtemp_h1d38b501__0[3U])) {
                        vlSelf->__PVT__fifoGroup_108_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_109_io_push_payload = 0U;
                    __Vtemp_hc961b8db__11[0U] = 1U;
                    __Vtemp_hc961b8db__11[1U] = 0U;
                    __Vtemp_hc961b8db__11[2U] = 0U;
                    __Vtemp_hc961b8db__11[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha403c595__0, __Vtemp_hc961b8db__11, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x2000U & __Vtemp_ha403c595__0[3U])) {
                        vlSelf->__PVT__fifoGroup_109_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_110_io_push_payload = 0U;
                    __Vtemp_hc961b8db__13[0U] = 1U;
                    __Vtemp_hc961b8db__13[1U] = 0U;
                    __Vtemp_hc961b8db__13[2U] = 0U;
                    __Vtemp_hc961b8db__13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha08d88ec__0, __Vtemp_hc961b8db__13, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x4000U & __Vtemp_ha08d88ec__0[3U])) {
                        vlSelf->__PVT__fifoGroup_110_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_111_io_push_payload = 0U;
                    __Vtemp_hc961b8db__15[0U] = 1U;
                    __Vtemp_hc961b8db__15[1U] = 0U;
                    __Vtemp_hc961b8db__15[2U] = 0U;
                    __Vtemp_hc961b8db__15[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8b12d3e4__0, __Vtemp_hc961b8db__15, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x8000U & __Vtemp_h8b12d3e4__0[3U])) {
                        vlSelf->__PVT__fifoGroup_111_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_112_io_push_payload = 0U;
                    __Vtemp_hc961b8db__17[0U] = 1U;
                    __Vtemp_hc961b8db__17[1U] = 0U;
                    __Vtemp_hc961b8db__17[2U] = 0U;
                    __Vtemp_hc961b8db__17[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hfb884992__0, __Vtemp_hc961b8db__17, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x10000U & __Vtemp_hfb884992__0[3U])) {
                        vlSelf->__PVT__fifoGroup_112_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_113_io_push_payload = 0U;
                    __Vtemp_hc961b8db__19[0U] = 1U;
                    __Vtemp_hc961b8db__19[1U] = 0U;
                    __Vtemp_hc961b8db__19[2U] = 0U;
                    __Vtemp_hc961b8db__19[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h89a7e792__0, __Vtemp_hc961b8db__19, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x20000U & __Vtemp_h89a7e792__0[3U])) {
                        vlSelf->__PVT__fifoGroup_113_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_114_io_push_payload = 0U;
                    __Vtemp_hc961b8db__21[0U] = 1U;
                    __Vtemp_hc961b8db__21[1U] = 0U;
                    __Vtemp_hc961b8db__21[2U] = 0U;
                    __Vtemp_hc961b8db__21[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h092a8fa7__0, __Vtemp_hc961b8db__21, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x40000U & __Vtemp_h092a8fa7__0[3U])) {
                        vlSelf->__PVT__fifoGroup_114_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                } else {
                    vlSelf->__PVT__fifoGroup_105_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_106_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_107_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_108_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_109_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_110_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_111_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_112_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_113_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_114_io_push_payload = 0U;
                }
            } else {
                vlSelf->__PVT__fifoGroup_105_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_106_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_107_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_108_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_109_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_110_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_111_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_112_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_113_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_114_io_push_payload = 0U;
            }
        } else {
            vlSelf->__PVT__fifoGroup_105_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_106_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_107_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_108_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_109_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_110_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_111_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_112_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_113_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_114_io_push_payload = 0U;
        }
    } else {
        vlSelf->__PVT__fifoGroup_105_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_106_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_107_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_108_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_109_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_110_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_111_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_112_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_113_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_114_io_push_payload = 0U;
    }
}

VL_ATTR_COLD void VarraySlice_arraySlice___settle__TOP__arraySlice__288(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__288\n"); );
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
    vlSelf->__PVT__fifoGroup_115_io_push_payload = 0U;
    if ((1U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if (vlSelf->__PVT__when_ArraySlice_l199) {
            __Vtemp_hc961b8db__0[0U] = 1U;
            __Vtemp_hc961b8db__0[1U] = 0U;
            __Vtemp_hc961b8db__0[2U] = 0U;
            __Vtemp_hc961b8db__0[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hf6a66627__0, __Vtemp_hc961b8db__0, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x80000U & __Vtemp_hf6a66627__0[3U])) {
                vlSelf->__PVT__fifoGroup_115_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_116_io_push_payload = 0U;
            __Vtemp_hc961b8db__2[0U] = 1U;
            __Vtemp_hc961b8db__2[1U] = 0U;
            __Vtemp_hc961b8db__2[2U] = 0U;
            __Vtemp_hc961b8db__2[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h89170b6c__0, __Vtemp_hc961b8db__2, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x100000U & __Vtemp_h89170b6c__0[3U])) {
                vlSelf->__PVT__fifoGroup_116_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_117_io_push_payload = 0U;
            __Vtemp_hc961b8db__4[0U] = 1U;
            __Vtemp_hc961b8db__4[1U] = 0U;
            __Vtemp_hc961b8db__4[2U] = 0U;
            __Vtemp_hc961b8db__4[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7144608a__0, __Vtemp_hc961b8db__4, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x200000U & __Vtemp_h7144608a__0[3U])) {
                vlSelf->__PVT__fifoGroup_117_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_118_io_push_payload = 0U;
            __Vtemp_hc961b8db__6[0U] = 1U;
            __Vtemp_hc961b8db__6[1U] = 0U;
            __Vtemp_hc961b8db__6[2U] = 0U;
            __Vtemp_hc961b8db__6[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7189b8e3__0, __Vtemp_hc961b8db__6, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x400000U & __Vtemp_h7189b8e3__0[3U])) {
                vlSelf->__PVT__fifoGroup_118_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_119_io_push_payload = 0U;
            __Vtemp_hc961b8db__8[0U] = 1U;
            __Vtemp_hc961b8db__8[1U] = 0U;
            __Vtemp_hc961b8db__8[2U] = 0U;
            __Vtemp_hc961b8db__8[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h796fba44__0, __Vtemp_hc961b8db__8, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x800000U & __Vtemp_h796fba44__0[3U])) {
                vlSelf->__PVT__fifoGroup_119_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_120_io_push_payload = 0U;
            __Vtemp_hc961b8db__10[0U] = 1U;
            __Vtemp_hc961b8db__10[1U] = 0U;
            __Vtemp_hc961b8db__10[2U] = 0U;
            __Vtemp_hc961b8db__10[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7f19dec8__0, __Vtemp_hc961b8db__10, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x1000000U & __Vtemp_h7f19dec8__0[3U])) {
                vlSelf->__PVT__fifoGroup_120_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_121_io_push_payload = 0U;
            __Vtemp_hc961b8db__12[0U] = 1U;
            __Vtemp_hc961b8db__12[1U] = 0U;
            __Vtemp_hc961b8db__12[2U] = 0U;
            __Vtemp_hc961b8db__12[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h38440148__0, __Vtemp_hc961b8db__12, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x2000000U & __Vtemp_h38440148__0[3U])) {
                vlSelf->__PVT__fifoGroup_121_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_122_io_push_payload = 0U;
            __Vtemp_hc961b8db__14[0U] = 1U;
            __Vtemp_hc961b8db__14[1U] = 0U;
            __Vtemp_hc961b8db__14[2U] = 0U;
            __Vtemp_hc961b8db__14[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8b4148cd__0, __Vtemp_hc961b8db__14, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x4000000U & __Vtemp_h8b4148cd__0[3U])) {
                vlSelf->__PVT__fifoGroup_122_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_123_io_push_payload = 0U;
            __Vtemp_hc961b8db__16[0U] = 1U;
            __Vtemp_hc961b8db__16[1U] = 0U;
            __Vtemp_hc961b8db__16[2U] = 0U;
            __Vtemp_hc961b8db__16[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hd60af9f3__0, __Vtemp_hc961b8db__16, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x8000000U & __Vtemp_hd60af9f3__0[3U])) {
                vlSelf->__PVT__fifoGroup_123_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_124_io_push_payload = 0U;
            __Vtemp_hc961b8db__18[0U] = 1U;
            __Vtemp_hc961b8db__18[1U] = 0U;
            __Vtemp_hc961b8db__18[2U] = 0U;
            __Vtemp_hc961b8db__18[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he58d3a6a__0, __Vtemp_hc961b8db__18, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x10000000U & __Vtemp_he58d3a6a__0[3U])) {
                vlSelf->__PVT__fifoGroup_124_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_125_io_push_payload = 0U;
            __Vtemp_hc961b8db__20[0U] = 1U;
            __Vtemp_hc961b8db__20[1U] = 0U;
            __Vtemp_hc961b8db__20[2U] = 0U;
            __Vtemp_hc961b8db__20[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h97021cf2__0, __Vtemp_hc961b8db__20, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x20000000U & __Vtemp_h97021cf2__0[3U])) {
                vlSelf->__PVT__fifoGroup_125_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
        } else {
            vlSelf->__PVT__fifoGroup_116_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_117_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_118_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_119_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_120_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_121_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_122_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_123_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_124_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_125_io_push_payload = 0U;
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
                    if ((0x80000U & __Vtemp_hc45c6cdb__0[3U])) {
                        vlSelf->__PVT__fifoGroup_115_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_116_io_push_payload = 0U;
                    __Vtemp_hc961b8db__3[0U] = 1U;
                    __Vtemp_hc961b8db__3[1U] = 0U;
                    __Vtemp_hc961b8db__3[2U] = 0U;
                    __Vtemp_hc961b8db__3[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h2d9ee4ac__0, __Vtemp_hc961b8db__3, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x100000U & __Vtemp_h2d9ee4ac__0[3U])) {
                        vlSelf->__PVT__fifoGroup_116_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_117_io_push_payload = 0U;
                    __Vtemp_hc961b8db__5[0U] = 1U;
                    __Vtemp_hc961b8db__5[1U] = 0U;
                    __Vtemp_hc961b8db__5[2U] = 0U;
                    __Vtemp_hc961b8db__5[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h87cdd039__0, __Vtemp_hc961b8db__5, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x200000U & __Vtemp_h87cdd039__0[3U])) {
                        vlSelf->__PVT__fifoGroup_117_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_118_io_push_payload = 0U;
                    __Vtemp_hc961b8db__7[0U] = 1U;
                    __Vtemp_hc961b8db__7[1U] = 0U;
                    __Vtemp_hc961b8db__7[2U] = 0U;
                    __Vtemp_hc961b8db__7[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9c72ed68__0, __Vtemp_hc961b8db__7, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x400000U & __Vtemp_h9c72ed68__0[3U])) {
                        vlSelf->__PVT__fifoGroup_118_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_119_io_push_payload = 0U;
                    __Vtemp_hc961b8db__9[0U] = 1U;
                    __Vtemp_hc961b8db__9[1U] = 0U;
                    __Vtemp_hc961b8db__9[2U] = 0U;
                    __Vtemp_hc961b8db__9[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1d38b501__0, __Vtemp_hc961b8db__9, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x800000U & __Vtemp_h1d38b501__0[3U])) {
                        vlSelf->__PVT__fifoGroup_119_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_120_io_push_payload = 0U;
                    __Vtemp_hc961b8db__11[0U] = 1U;
                    __Vtemp_hc961b8db__11[1U] = 0U;
                    __Vtemp_hc961b8db__11[2U] = 0U;
                    __Vtemp_hc961b8db__11[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha403c595__0, __Vtemp_hc961b8db__11, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x1000000U & __Vtemp_ha403c595__0[3U])) {
                        vlSelf->__PVT__fifoGroup_120_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_121_io_push_payload = 0U;
                    __Vtemp_hc961b8db__13[0U] = 1U;
                    __Vtemp_hc961b8db__13[1U] = 0U;
                    __Vtemp_hc961b8db__13[2U] = 0U;
                    __Vtemp_hc961b8db__13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha08d88ec__0, __Vtemp_hc961b8db__13, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x2000000U & __Vtemp_ha08d88ec__0[3U])) {
                        vlSelf->__PVT__fifoGroup_121_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_122_io_push_payload = 0U;
                    __Vtemp_hc961b8db__15[0U] = 1U;
                    __Vtemp_hc961b8db__15[1U] = 0U;
                    __Vtemp_hc961b8db__15[2U] = 0U;
                    __Vtemp_hc961b8db__15[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8b12d3e4__0, __Vtemp_hc961b8db__15, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x4000000U & __Vtemp_h8b12d3e4__0[3U])) {
                        vlSelf->__PVT__fifoGroup_122_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_123_io_push_payload = 0U;
                    __Vtemp_hc961b8db__17[0U] = 1U;
                    __Vtemp_hc961b8db__17[1U] = 0U;
                    __Vtemp_hc961b8db__17[2U] = 0U;
                    __Vtemp_hc961b8db__17[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hfb884992__0, __Vtemp_hc961b8db__17, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x8000000U & __Vtemp_hfb884992__0[3U])) {
                        vlSelf->__PVT__fifoGroup_123_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_124_io_push_payload = 0U;
                    __Vtemp_hc961b8db__19[0U] = 1U;
                    __Vtemp_hc961b8db__19[1U] = 0U;
                    __Vtemp_hc961b8db__19[2U] = 0U;
                    __Vtemp_hc961b8db__19[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h89a7e792__0, __Vtemp_hc961b8db__19, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x10000000U & __Vtemp_h89a7e792__0[3U])) {
                        vlSelf->__PVT__fifoGroup_124_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_125_io_push_payload = 0U;
                    __Vtemp_hc961b8db__21[0U] = 1U;
                    __Vtemp_hc961b8db__21[1U] = 0U;
                    __Vtemp_hc961b8db__21[2U] = 0U;
                    __Vtemp_hc961b8db__21[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h092a8fa7__0, __Vtemp_hc961b8db__21, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x20000000U & __Vtemp_h092a8fa7__0[3U])) {
                        vlSelf->__PVT__fifoGroup_125_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                } else {
                    vlSelf->__PVT__fifoGroup_116_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_117_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_118_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_119_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_120_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_121_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_122_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_123_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_124_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_125_io_push_payload = 0U;
                }
            } else {
                vlSelf->__PVT__fifoGroup_116_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_117_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_118_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_119_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_120_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_121_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_122_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_123_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_124_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_125_io_push_payload = 0U;
            }
        } else {
            vlSelf->__PVT__fifoGroup_116_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_117_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_118_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_119_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_120_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_121_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_122_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_123_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_124_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_125_io_push_payload = 0U;
        }
    } else {
        vlSelf->__PVT__fifoGroup_116_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_117_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_118_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_119_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_120_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_121_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_122_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_123_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_124_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_125_io_push_payload = 0U;
    }
}

VL_ATTR_COLD void VarraySlice_arraySlice___settle__TOP__arraySlice__289(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__289\n"); );
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
    vlSelf->__PVT__fifoGroup_126_io_push_payload = 0U;
    if ((1U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if (vlSelf->__PVT__when_ArraySlice_l199) {
            __Vtemp_hc961b8db__0[0U] = 1U;
            __Vtemp_hc961b8db__0[1U] = 0U;
            __Vtemp_hc961b8db__0[2U] = 0U;
            __Vtemp_hc961b8db__0[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hf6a66627__0, __Vtemp_hc961b8db__0, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x40000000U & __Vtemp_hf6a66627__0[3U])) {
                vlSelf->__PVT__fifoGroup_126_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_127_io_push_payload = 0U;
            __Vtemp_hc961b8db__2[0U] = 1U;
            __Vtemp_hc961b8db__2[1U] = 0U;
            __Vtemp_hc961b8db__2[2U] = 0U;
            __Vtemp_hc961b8db__2[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h89170b6c__0, __Vtemp_hc961b8db__2, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((__Vtemp_h89170b6c__0[3U] >> 0x1fU)) {
                vlSelf->__PVT__fifoGroup_127_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->inputStreamArrayData_ready = 0U;
            vlSelf->inputStreamArrayData_ready = vlSelf->__PVT___zz_inputStreamArrayData_ready;
            vlSelf->__PVT__fifoGroup_0_io_push_valid = 0U;
            __Vtemp_hc961b8db__4[0U] = 1U;
            __Vtemp_hc961b8db__4[1U] = 0U;
            __Vtemp_hc961b8db__4[2U] = 0U;
            __Vtemp_hc961b8db__4[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7144608a__0, __Vtemp_hc961b8db__4, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((1U & __Vtemp_h7144608a__0[0U])) {
                vlSelf->__PVT__fifoGroup_0_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_1_io_push_valid = 0U;
            __Vtemp_hc961b8db__6[0U] = 1U;
            __Vtemp_hc961b8db__6[1U] = 0U;
            __Vtemp_hc961b8db__6[2U] = 0U;
            __Vtemp_hc961b8db__6[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7189b8e3__0, __Vtemp_hc961b8db__6, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((2U & __Vtemp_h7189b8e3__0[0U])) {
                vlSelf->__PVT__fifoGroup_1_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_2_io_push_valid = 0U;
            __Vtemp_hc961b8db__8[0U] = 1U;
            __Vtemp_hc961b8db__8[1U] = 0U;
            __Vtemp_hc961b8db__8[2U] = 0U;
            __Vtemp_hc961b8db__8[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h796fba44__0, __Vtemp_hc961b8db__8, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((4U & __Vtemp_h796fba44__0[0U])) {
                vlSelf->__PVT__fifoGroup_2_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_3_io_push_valid = 0U;
            __Vtemp_hc961b8db__10[0U] = 1U;
            __Vtemp_hc961b8db__10[1U] = 0U;
            __Vtemp_hc961b8db__10[2U] = 0U;
            __Vtemp_hc961b8db__10[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7f19dec8__0, __Vtemp_hc961b8db__10, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((8U & __Vtemp_h7f19dec8__0[0U])) {
                vlSelf->__PVT__fifoGroup_3_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_4_io_push_valid = 0U;
            __Vtemp_hc961b8db__12[0U] = 1U;
            __Vtemp_hc961b8db__12[1U] = 0U;
            __Vtemp_hc961b8db__12[2U] = 0U;
            __Vtemp_hc961b8db__12[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h38440148__0, __Vtemp_hc961b8db__12, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x10U & __Vtemp_h38440148__0[0U])) {
                vlSelf->__PVT__fifoGroup_4_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_5_io_push_valid = 0U;
            __Vtemp_hc961b8db__14[0U] = 1U;
            __Vtemp_hc961b8db__14[1U] = 0U;
            __Vtemp_hc961b8db__14[2U] = 0U;
            __Vtemp_hc961b8db__14[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8b4148cd__0, __Vtemp_hc961b8db__14, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x20U & __Vtemp_h8b4148cd__0[0U])) {
                vlSelf->__PVT__fifoGroup_5_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_6_io_push_valid = 0U;
            __Vtemp_hc961b8db__16[0U] = 1U;
            __Vtemp_hc961b8db__16[1U] = 0U;
            __Vtemp_hc961b8db__16[2U] = 0U;
            __Vtemp_hc961b8db__16[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hd60af9f3__0, __Vtemp_hc961b8db__16, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x40U & __Vtemp_hd60af9f3__0[0U])) {
                vlSelf->__PVT__fifoGroup_6_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_7_io_push_valid = 0U;
            __Vtemp_hc961b8db__18[0U] = 1U;
            __Vtemp_hc961b8db__18[1U] = 0U;
            __Vtemp_hc961b8db__18[2U] = 0U;
            __Vtemp_hc961b8db__18[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he58d3a6a__0, __Vtemp_hc961b8db__18, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x80U & __Vtemp_he58d3a6a__0[0U])) {
                vlSelf->__PVT__fifoGroup_7_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_8_io_push_valid = 0U;
            __Vtemp_hc961b8db__20[0U] = 1U;
            __Vtemp_hc961b8db__20[1U] = 0U;
            __Vtemp_hc961b8db__20[2U] = 0U;
            __Vtemp_hc961b8db__20[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h97021cf2__0, __Vtemp_hc961b8db__20, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x100U & __Vtemp_h97021cf2__0[0U])) {
                vlSelf->__PVT__fifoGroup_8_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
        } else {
            vlSelf->__PVT__fifoGroup_127_io_push_payload = 0U;
            vlSelf->inputStreamArrayData_ready = 0U;
            vlSelf->__PVT__fifoGroup_0_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_1_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_2_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_3_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_4_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_5_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_6_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_7_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_8_io_push_valid = 0U;
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
                    if ((0x40000000U & __Vtemp_hc45c6cdb__0[3U])) {
                        vlSelf->__PVT__fifoGroup_126_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_127_io_push_payload = 0U;
                    __Vtemp_hc961b8db__3[0U] = 1U;
                    __Vtemp_hc961b8db__3[1U] = 0U;
                    __Vtemp_hc961b8db__3[2U] = 0U;
                    __Vtemp_hc961b8db__3[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h2d9ee4ac__0, __Vtemp_hc961b8db__3, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((__Vtemp_h2d9ee4ac__0[3U] >> 0x1fU)) {
                        vlSelf->__PVT__fifoGroup_127_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->inputStreamArrayData_ready = 0U;
                    vlSelf->inputStreamArrayData_ready 
                        = vlSelf->__PVT___zz_inputStreamArrayData_ready_2;
                    vlSelf->__PVT__fifoGroup_0_io_push_valid = 0U;
                    __Vtemp_hc961b8db__5[0U] = 1U;
                    __Vtemp_hc961b8db__5[1U] = 0U;
                    __Vtemp_hc961b8db__5[2U] = 0U;
                    __Vtemp_hc961b8db__5[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h87cdd039__0, __Vtemp_hc961b8db__5, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((1U & __Vtemp_h87cdd039__0[0U])) {
                        vlSelf->__PVT__fifoGroup_0_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_1_io_push_valid = 0U;
                    __Vtemp_hc961b8db__7[0U] = 1U;
                    __Vtemp_hc961b8db__7[1U] = 0U;
                    __Vtemp_hc961b8db__7[2U] = 0U;
                    __Vtemp_hc961b8db__7[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9c72ed68__0, __Vtemp_hc961b8db__7, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((2U & __Vtemp_h9c72ed68__0[0U])) {
                        vlSelf->__PVT__fifoGroup_1_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_2_io_push_valid = 0U;
                    __Vtemp_hc961b8db__9[0U] = 1U;
                    __Vtemp_hc961b8db__9[1U] = 0U;
                    __Vtemp_hc961b8db__9[2U] = 0U;
                    __Vtemp_hc961b8db__9[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1d38b501__0, __Vtemp_hc961b8db__9, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((4U & __Vtemp_h1d38b501__0[0U])) {
                        vlSelf->__PVT__fifoGroup_2_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_3_io_push_valid = 0U;
                    __Vtemp_hc961b8db__11[0U] = 1U;
                    __Vtemp_hc961b8db__11[1U] = 0U;
                    __Vtemp_hc961b8db__11[2U] = 0U;
                    __Vtemp_hc961b8db__11[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha403c595__0, __Vtemp_hc961b8db__11, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((8U & __Vtemp_ha403c595__0[0U])) {
                        vlSelf->__PVT__fifoGroup_3_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_4_io_push_valid = 0U;
                    __Vtemp_hc961b8db__13[0U] = 1U;
                    __Vtemp_hc961b8db__13[1U] = 0U;
                    __Vtemp_hc961b8db__13[2U] = 0U;
                    __Vtemp_hc961b8db__13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha08d88ec__0, __Vtemp_hc961b8db__13, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x10U & __Vtemp_ha08d88ec__0[0U])) {
                        vlSelf->__PVT__fifoGroup_4_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_5_io_push_valid = 0U;
                    __Vtemp_hc961b8db__15[0U] = 1U;
                    __Vtemp_hc961b8db__15[1U] = 0U;
                    __Vtemp_hc961b8db__15[2U] = 0U;
                    __Vtemp_hc961b8db__15[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8b12d3e4__0, __Vtemp_hc961b8db__15, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x20U & __Vtemp_h8b12d3e4__0[0U])) {
                        vlSelf->__PVT__fifoGroup_5_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_6_io_push_valid = 0U;
                    __Vtemp_hc961b8db__17[0U] = 1U;
                    __Vtemp_hc961b8db__17[1U] = 0U;
                    __Vtemp_hc961b8db__17[2U] = 0U;
                    __Vtemp_hc961b8db__17[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hfb884992__0, __Vtemp_hc961b8db__17, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x40U & __Vtemp_hfb884992__0[0U])) {
                        vlSelf->__PVT__fifoGroup_6_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_7_io_push_valid = 0U;
                    __Vtemp_hc961b8db__19[0U] = 1U;
                    __Vtemp_hc961b8db__19[1U] = 0U;
                    __Vtemp_hc961b8db__19[2U] = 0U;
                    __Vtemp_hc961b8db__19[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h89a7e792__0, __Vtemp_hc961b8db__19, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x80U & __Vtemp_h89a7e792__0[0U])) {
                        vlSelf->__PVT__fifoGroup_7_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_8_io_push_valid = 0U;
                    __Vtemp_hc961b8db__21[0U] = 1U;
                    __Vtemp_hc961b8db__21[1U] = 0U;
                    __Vtemp_hc961b8db__21[2U] = 0U;
                    __Vtemp_hc961b8db__21[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h092a8fa7__0, __Vtemp_hc961b8db__21, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x100U & __Vtemp_h092a8fa7__0[0U])) {
                        vlSelf->__PVT__fifoGroup_8_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                } else {
                    vlSelf->__PVT__fifoGroup_127_io_push_payload = 0U;
                    vlSelf->inputStreamArrayData_ready = 0U;
                    vlSelf->__PVT__fifoGroup_0_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_1_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_2_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_3_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_4_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_5_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_6_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_7_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_8_io_push_valid = 0U;
                }
            } else {
                vlSelf->__PVT__fifoGroup_127_io_push_payload = 0U;
                vlSelf->inputStreamArrayData_ready = 0U;
                vlSelf->__PVT__fifoGroup_0_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_1_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_2_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_3_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_4_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_5_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_6_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_7_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_8_io_push_valid = 0U;
            }
        } else {
            vlSelf->__PVT__fifoGroup_127_io_push_payload = 0U;
            vlSelf->inputStreamArrayData_ready = 0U;
            vlSelf->__PVT__fifoGroup_0_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_1_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_2_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_3_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_4_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_5_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_6_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_7_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_8_io_push_valid = 0U;
        }
    } else {
        vlSelf->__PVT__fifoGroup_127_io_push_payload = 0U;
        vlSelf->inputStreamArrayData_ready = 0U;
        vlSelf->__PVT__fifoGroup_0_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_1_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_2_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_3_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_4_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_5_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_6_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_7_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_8_io_push_valid = 0U;
    }
}

VL_ATTR_COLD void VarraySlice_arraySlice___settle__TOP__arraySlice__290(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__290\n"); );
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
    vlSelf->__PVT__fifoGroup_9_io_push_valid = 0U;
    if ((1U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if (vlSelf->__PVT__when_ArraySlice_l199) {
            __Vtemp_hc961b8db__0[0U] = 1U;
            __Vtemp_hc961b8db__0[1U] = 0U;
            __Vtemp_hc961b8db__0[2U] = 0U;
            __Vtemp_hc961b8db__0[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hf6a66627__0, __Vtemp_hc961b8db__0, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x200U & __Vtemp_hf6a66627__0[0U])) {
                vlSelf->__PVT__fifoGroup_9_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_10_io_push_valid = 0U;
            __Vtemp_hc961b8db__2[0U] = 1U;
            __Vtemp_hc961b8db__2[1U] = 0U;
            __Vtemp_hc961b8db__2[2U] = 0U;
            __Vtemp_hc961b8db__2[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h89170b6c__0, __Vtemp_hc961b8db__2, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x400U & __Vtemp_h89170b6c__0[0U])) {
                vlSelf->__PVT__fifoGroup_10_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_11_io_push_valid = 0U;
            __Vtemp_hc961b8db__4[0U] = 1U;
            __Vtemp_hc961b8db__4[1U] = 0U;
            __Vtemp_hc961b8db__4[2U] = 0U;
            __Vtemp_hc961b8db__4[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7144608a__0, __Vtemp_hc961b8db__4, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x800U & __Vtemp_h7144608a__0[0U])) {
                vlSelf->__PVT__fifoGroup_11_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_12_io_push_valid = 0U;
            __Vtemp_hc961b8db__6[0U] = 1U;
            __Vtemp_hc961b8db__6[1U] = 0U;
            __Vtemp_hc961b8db__6[2U] = 0U;
            __Vtemp_hc961b8db__6[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7189b8e3__0, __Vtemp_hc961b8db__6, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x1000U & __Vtemp_h7189b8e3__0[0U])) {
                vlSelf->__PVT__fifoGroup_12_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_13_io_push_valid = 0U;
            __Vtemp_hc961b8db__8[0U] = 1U;
            __Vtemp_hc961b8db__8[1U] = 0U;
            __Vtemp_hc961b8db__8[2U] = 0U;
            __Vtemp_hc961b8db__8[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h796fba44__0, __Vtemp_hc961b8db__8, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x2000U & __Vtemp_h796fba44__0[0U])) {
                vlSelf->__PVT__fifoGroup_13_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_14_io_push_valid = 0U;
            __Vtemp_hc961b8db__10[0U] = 1U;
            __Vtemp_hc961b8db__10[1U] = 0U;
            __Vtemp_hc961b8db__10[2U] = 0U;
            __Vtemp_hc961b8db__10[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7f19dec8__0, __Vtemp_hc961b8db__10, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x4000U & __Vtemp_h7f19dec8__0[0U])) {
                vlSelf->__PVT__fifoGroup_14_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_15_io_push_valid = 0U;
            __Vtemp_hc961b8db__12[0U] = 1U;
            __Vtemp_hc961b8db__12[1U] = 0U;
            __Vtemp_hc961b8db__12[2U] = 0U;
            __Vtemp_hc961b8db__12[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h38440148__0, __Vtemp_hc961b8db__12, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x8000U & __Vtemp_h38440148__0[0U])) {
                vlSelf->__PVT__fifoGroup_15_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_16_io_push_valid = 0U;
            __Vtemp_hc961b8db__14[0U] = 1U;
            __Vtemp_hc961b8db__14[1U] = 0U;
            __Vtemp_hc961b8db__14[2U] = 0U;
            __Vtemp_hc961b8db__14[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8b4148cd__0, __Vtemp_hc961b8db__14, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x10000U & __Vtemp_h8b4148cd__0[0U])) {
                vlSelf->__PVT__fifoGroup_16_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_17_io_push_valid = 0U;
            __Vtemp_hc961b8db__16[0U] = 1U;
            __Vtemp_hc961b8db__16[1U] = 0U;
            __Vtemp_hc961b8db__16[2U] = 0U;
            __Vtemp_hc961b8db__16[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hd60af9f3__0, __Vtemp_hc961b8db__16, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x20000U & __Vtemp_hd60af9f3__0[0U])) {
                vlSelf->__PVT__fifoGroup_17_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_18_io_push_valid = 0U;
            __Vtemp_hc961b8db__18[0U] = 1U;
            __Vtemp_hc961b8db__18[1U] = 0U;
            __Vtemp_hc961b8db__18[2U] = 0U;
            __Vtemp_hc961b8db__18[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he58d3a6a__0, __Vtemp_hc961b8db__18, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x40000U & __Vtemp_he58d3a6a__0[0U])) {
                vlSelf->__PVT__fifoGroup_18_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_19_io_push_valid = 0U;
            __Vtemp_hc961b8db__20[0U] = 1U;
            __Vtemp_hc961b8db__20[1U] = 0U;
            __Vtemp_hc961b8db__20[2U] = 0U;
            __Vtemp_hc961b8db__20[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h97021cf2__0, __Vtemp_hc961b8db__20, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x80000U & __Vtemp_h97021cf2__0[0U])) {
                vlSelf->__PVT__fifoGroup_19_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
        } else {
            vlSelf->__PVT__fifoGroup_10_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_11_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_12_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_13_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_14_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_15_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_16_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_17_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_18_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_19_io_push_valid = 0U;
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
                    if ((0x200U & __Vtemp_hc45c6cdb__0[0U])) {
                        vlSelf->__PVT__fifoGroup_9_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_10_io_push_valid = 0U;
                    __Vtemp_hc961b8db__3[0U] = 1U;
                    __Vtemp_hc961b8db__3[1U] = 0U;
                    __Vtemp_hc961b8db__3[2U] = 0U;
                    __Vtemp_hc961b8db__3[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h2d9ee4ac__0, __Vtemp_hc961b8db__3, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x400U & __Vtemp_h2d9ee4ac__0[0U])) {
                        vlSelf->__PVT__fifoGroup_10_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_11_io_push_valid = 0U;
                    __Vtemp_hc961b8db__5[0U] = 1U;
                    __Vtemp_hc961b8db__5[1U] = 0U;
                    __Vtemp_hc961b8db__5[2U] = 0U;
                    __Vtemp_hc961b8db__5[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h87cdd039__0, __Vtemp_hc961b8db__5, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x800U & __Vtemp_h87cdd039__0[0U])) {
                        vlSelf->__PVT__fifoGroup_11_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_12_io_push_valid = 0U;
                    __Vtemp_hc961b8db__7[0U] = 1U;
                    __Vtemp_hc961b8db__7[1U] = 0U;
                    __Vtemp_hc961b8db__7[2U] = 0U;
                    __Vtemp_hc961b8db__7[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9c72ed68__0, __Vtemp_hc961b8db__7, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x1000U & __Vtemp_h9c72ed68__0[0U])) {
                        vlSelf->__PVT__fifoGroup_12_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_13_io_push_valid = 0U;
                    __Vtemp_hc961b8db__9[0U] = 1U;
                    __Vtemp_hc961b8db__9[1U] = 0U;
                    __Vtemp_hc961b8db__9[2U] = 0U;
                    __Vtemp_hc961b8db__9[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1d38b501__0, __Vtemp_hc961b8db__9, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x2000U & __Vtemp_h1d38b501__0[0U])) {
                        vlSelf->__PVT__fifoGroup_13_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_14_io_push_valid = 0U;
                    __Vtemp_hc961b8db__11[0U] = 1U;
                    __Vtemp_hc961b8db__11[1U] = 0U;
                    __Vtemp_hc961b8db__11[2U] = 0U;
                    __Vtemp_hc961b8db__11[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha403c595__0, __Vtemp_hc961b8db__11, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x4000U & __Vtemp_ha403c595__0[0U])) {
                        vlSelf->__PVT__fifoGroup_14_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_15_io_push_valid = 0U;
                    __Vtemp_hc961b8db__13[0U] = 1U;
                    __Vtemp_hc961b8db__13[1U] = 0U;
                    __Vtemp_hc961b8db__13[2U] = 0U;
                    __Vtemp_hc961b8db__13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha08d88ec__0, __Vtemp_hc961b8db__13, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x8000U & __Vtemp_ha08d88ec__0[0U])) {
                        vlSelf->__PVT__fifoGroup_15_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_16_io_push_valid = 0U;
                    __Vtemp_hc961b8db__15[0U] = 1U;
                    __Vtemp_hc961b8db__15[1U] = 0U;
                    __Vtemp_hc961b8db__15[2U] = 0U;
                    __Vtemp_hc961b8db__15[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8b12d3e4__0, __Vtemp_hc961b8db__15, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x10000U & __Vtemp_h8b12d3e4__0[0U])) {
                        vlSelf->__PVT__fifoGroup_16_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_17_io_push_valid = 0U;
                    __Vtemp_hc961b8db__17[0U] = 1U;
                    __Vtemp_hc961b8db__17[1U] = 0U;
                    __Vtemp_hc961b8db__17[2U] = 0U;
                    __Vtemp_hc961b8db__17[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hfb884992__0, __Vtemp_hc961b8db__17, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x20000U & __Vtemp_hfb884992__0[0U])) {
                        vlSelf->__PVT__fifoGroup_17_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_18_io_push_valid = 0U;
                    __Vtemp_hc961b8db__19[0U] = 1U;
                    __Vtemp_hc961b8db__19[1U] = 0U;
                    __Vtemp_hc961b8db__19[2U] = 0U;
                    __Vtemp_hc961b8db__19[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h89a7e792__0, __Vtemp_hc961b8db__19, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x40000U & __Vtemp_h89a7e792__0[0U])) {
                        vlSelf->__PVT__fifoGroup_18_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_19_io_push_valid = 0U;
                    __Vtemp_hc961b8db__21[0U] = 1U;
                    __Vtemp_hc961b8db__21[1U] = 0U;
                    __Vtemp_hc961b8db__21[2U] = 0U;
                    __Vtemp_hc961b8db__21[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h092a8fa7__0, __Vtemp_hc961b8db__21, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x80000U & __Vtemp_h092a8fa7__0[0U])) {
                        vlSelf->__PVT__fifoGroup_19_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                } else {
                    vlSelf->__PVT__fifoGroup_10_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_11_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_12_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_13_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_14_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_15_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_16_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_17_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_18_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_19_io_push_valid = 0U;
                }
            } else {
                vlSelf->__PVT__fifoGroup_10_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_11_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_12_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_13_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_14_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_15_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_16_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_17_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_18_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_19_io_push_valid = 0U;
            }
        } else {
            vlSelf->__PVT__fifoGroup_10_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_11_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_12_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_13_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_14_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_15_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_16_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_17_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_18_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_19_io_push_valid = 0U;
        }
    } else {
        vlSelf->__PVT__fifoGroup_10_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_11_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_12_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_13_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_14_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_15_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_16_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_17_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_18_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_19_io_push_valid = 0U;
    }
}

VL_ATTR_COLD void VarraySlice_arraySlice___settle__TOP__arraySlice__291(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__291\n"); );
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
    vlSelf->__PVT__fifoGroup_20_io_push_valid = 0U;
    if ((1U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if (vlSelf->__PVT__when_ArraySlice_l199) {
            __Vtemp_hc961b8db__0[0U] = 1U;
            __Vtemp_hc961b8db__0[1U] = 0U;
            __Vtemp_hc961b8db__0[2U] = 0U;
            __Vtemp_hc961b8db__0[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hf6a66627__0, __Vtemp_hc961b8db__0, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x100000U & __Vtemp_hf6a66627__0[0U])) {
                vlSelf->__PVT__fifoGroup_20_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_21_io_push_valid = 0U;
            __Vtemp_hc961b8db__2[0U] = 1U;
            __Vtemp_hc961b8db__2[1U] = 0U;
            __Vtemp_hc961b8db__2[2U] = 0U;
            __Vtemp_hc961b8db__2[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h89170b6c__0, __Vtemp_hc961b8db__2, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x200000U & __Vtemp_h89170b6c__0[0U])) {
                vlSelf->__PVT__fifoGroup_21_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_22_io_push_valid = 0U;
            __Vtemp_hc961b8db__4[0U] = 1U;
            __Vtemp_hc961b8db__4[1U] = 0U;
            __Vtemp_hc961b8db__4[2U] = 0U;
            __Vtemp_hc961b8db__4[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7144608a__0, __Vtemp_hc961b8db__4, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x400000U & __Vtemp_h7144608a__0[0U])) {
                vlSelf->__PVT__fifoGroup_22_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_23_io_push_valid = 0U;
            __Vtemp_hc961b8db__6[0U] = 1U;
            __Vtemp_hc961b8db__6[1U] = 0U;
            __Vtemp_hc961b8db__6[2U] = 0U;
            __Vtemp_hc961b8db__6[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7189b8e3__0, __Vtemp_hc961b8db__6, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x800000U & __Vtemp_h7189b8e3__0[0U])) {
                vlSelf->__PVT__fifoGroup_23_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_24_io_push_valid = 0U;
            __Vtemp_hc961b8db__8[0U] = 1U;
            __Vtemp_hc961b8db__8[1U] = 0U;
            __Vtemp_hc961b8db__8[2U] = 0U;
            __Vtemp_hc961b8db__8[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h796fba44__0, __Vtemp_hc961b8db__8, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x1000000U & __Vtemp_h796fba44__0[0U])) {
                vlSelf->__PVT__fifoGroup_24_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_25_io_push_valid = 0U;
            __Vtemp_hc961b8db__10[0U] = 1U;
            __Vtemp_hc961b8db__10[1U] = 0U;
            __Vtemp_hc961b8db__10[2U] = 0U;
            __Vtemp_hc961b8db__10[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7f19dec8__0, __Vtemp_hc961b8db__10, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x2000000U & __Vtemp_h7f19dec8__0[0U])) {
                vlSelf->__PVT__fifoGroup_25_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_26_io_push_valid = 0U;
            __Vtemp_hc961b8db__12[0U] = 1U;
            __Vtemp_hc961b8db__12[1U] = 0U;
            __Vtemp_hc961b8db__12[2U] = 0U;
            __Vtemp_hc961b8db__12[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h38440148__0, __Vtemp_hc961b8db__12, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x4000000U & __Vtemp_h38440148__0[0U])) {
                vlSelf->__PVT__fifoGroup_26_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_27_io_push_valid = 0U;
            __Vtemp_hc961b8db__14[0U] = 1U;
            __Vtemp_hc961b8db__14[1U] = 0U;
            __Vtemp_hc961b8db__14[2U] = 0U;
            __Vtemp_hc961b8db__14[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8b4148cd__0, __Vtemp_hc961b8db__14, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x8000000U & __Vtemp_h8b4148cd__0[0U])) {
                vlSelf->__PVT__fifoGroup_27_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_28_io_push_valid = 0U;
            __Vtemp_hc961b8db__16[0U] = 1U;
            __Vtemp_hc961b8db__16[1U] = 0U;
            __Vtemp_hc961b8db__16[2U] = 0U;
            __Vtemp_hc961b8db__16[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hd60af9f3__0, __Vtemp_hc961b8db__16, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x10000000U & __Vtemp_hd60af9f3__0[0U])) {
                vlSelf->__PVT__fifoGroup_28_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_29_io_push_valid = 0U;
            __Vtemp_hc961b8db__18[0U] = 1U;
            __Vtemp_hc961b8db__18[1U] = 0U;
            __Vtemp_hc961b8db__18[2U] = 0U;
            __Vtemp_hc961b8db__18[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he58d3a6a__0, __Vtemp_hc961b8db__18, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x20000000U & __Vtemp_he58d3a6a__0[0U])) {
                vlSelf->__PVT__fifoGroup_29_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
            vlSelf->__PVT__fifoGroup_30_io_push_valid = 0U;
            __Vtemp_hc961b8db__20[0U] = 1U;
            __Vtemp_hc961b8db__20[1U] = 0U;
            __Vtemp_hc961b8db__20[2U] = 0U;
            __Vtemp_hc961b8db__20[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h97021cf2__0, __Vtemp_hc961b8db__20, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x40000000U & __Vtemp_h97021cf2__0[0U])) {
                vlSelf->__PVT__fifoGroup_30_io_push_valid 
                    = vlSymsp->TOP.inputStreamArrayData_valid;
            }
        } else {
            vlSelf->__PVT__fifoGroup_21_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_22_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_23_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_24_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_25_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_26_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_27_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_28_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_29_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_30_io_push_valid = 0U;
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
                    if ((0x100000U & __Vtemp_hc45c6cdb__0[0U])) {
                        vlSelf->__PVT__fifoGroup_20_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_21_io_push_valid = 0U;
                    __Vtemp_hc961b8db__3[0U] = 1U;
                    __Vtemp_hc961b8db__3[1U] = 0U;
                    __Vtemp_hc961b8db__3[2U] = 0U;
                    __Vtemp_hc961b8db__3[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h2d9ee4ac__0, __Vtemp_hc961b8db__3, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x200000U & __Vtemp_h2d9ee4ac__0[0U])) {
                        vlSelf->__PVT__fifoGroup_21_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_22_io_push_valid = 0U;
                    __Vtemp_hc961b8db__5[0U] = 1U;
                    __Vtemp_hc961b8db__5[1U] = 0U;
                    __Vtemp_hc961b8db__5[2U] = 0U;
                    __Vtemp_hc961b8db__5[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h87cdd039__0, __Vtemp_hc961b8db__5, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x400000U & __Vtemp_h87cdd039__0[0U])) {
                        vlSelf->__PVT__fifoGroup_22_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_23_io_push_valid = 0U;
                    __Vtemp_hc961b8db__7[0U] = 1U;
                    __Vtemp_hc961b8db__7[1U] = 0U;
                    __Vtemp_hc961b8db__7[2U] = 0U;
                    __Vtemp_hc961b8db__7[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9c72ed68__0, __Vtemp_hc961b8db__7, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x800000U & __Vtemp_h9c72ed68__0[0U])) {
                        vlSelf->__PVT__fifoGroup_23_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_24_io_push_valid = 0U;
                    __Vtemp_hc961b8db__9[0U] = 1U;
                    __Vtemp_hc961b8db__9[1U] = 0U;
                    __Vtemp_hc961b8db__9[2U] = 0U;
                    __Vtemp_hc961b8db__9[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1d38b501__0, __Vtemp_hc961b8db__9, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x1000000U & __Vtemp_h1d38b501__0[0U])) {
                        vlSelf->__PVT__fifoGroup_24_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_25_io_push_valid = 0U;
                    __Vtemp_hc961b8db__11[0U] = 1U;
                    __Vtemp_hc961b8db__11[1U] = 0U;
                    __Vtemp_hc961b8db__11[2U] = 0U;
                    __Vtemp_hc961b8db__11[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha403c595__0, __Vtemp_hc961b8db__11, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x2000000U & __Vtemp_ha403c595__0[0U])) {
                        vlSelf->__PVT__fifoGroup_25_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_26_io_push_valid = 0U;
                    __Vtemp_hc961b8db__13[0U] = 1U;
                    __Vtemp_hc961b8db__13[1U] = 0U;
                    __Vtemp_hc961b8db__13[2U] = 0U;
                    __Vtemp_hc961b8db__13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha08d88ec__0, __Vtemp_hc961b8db__13, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x4000000U & __Vtemp_ha08d88ec__0[0U])) {
                        vlSelf->__PVT__fifoGroup_26_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_27_io_push_valid = 0U;
                    __Vtemp_hc961b8db__15[0U] = 1U;
                    __Vtemp_hc961b8db__15[1U] = 0U;
                    __Vtemp_hc961b8db__15[2U] = 0U;
                    __Vtemp_hc961b8db__15[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8b12d3e4__0, __Vtemp_hc961b8db__15, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x8000000U & __Vtemp_h8b12d3e4__0[0U])) {
                        vlSelf->__PVT__fifoGroup_27_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_28_io_push_valid = 0U;
                    __Vtemp_hc961b8db__17[0U] = 1U;
                    __Vtemp_hc961b8db__17[1U] = 0U;
                    __Vtemp_hc961b8db__17[2U] = 0U;
                    __Vtemp_hc961b8db__17[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hfb884992__0, __Vtemp_hc961b8db__17, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x10000000U & __Vtemp_hfb884992__0[0U])) {
                        vlSelf->__PVT__fifoGroup_28_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_29_io_push_valid = 0U;
                    __Vtemp_hc961b8db__19[0U] = 1U;
                    __Vtemp_hc961b8db__19[1U] = 0U;
                    __Vtemp_hc961b8db__19[2U] = 0U;
                    __Vtemp_hc961b8db__19[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h89a7e792__0, __Vtemp_hc961b8db__19, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x20000000U & __Vtemp_h89a7e792__0[0U])) {
                        vlSelf->__PVT__fifoGroup_29_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                    vlSelf->__PVT__fifoGroup_30_io_push_valid = 0U;
                    __Vtemp_hc961b8db__21[0U] = 1U;
                    __Vtemp_hc961b8db__21[1U] = 0U;
                    __Vtemp_hc961b8db__21[2U] = 0U;
                    __Vtemp_hc961b8db__21[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h092a8fa7__0, __Vtemp_hc961b8db__21, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x40000000U & __Vtemp_h092a8fa7__0[0U])) {
                        vlSelf->__PVT__fifoGroup_30_io_push_valid 
                            = vlSymsp->TOP.inputStreamArrayData_valid;
                    }
                } else {
                    vlSelf->__PVT__fifoGroup_21_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_22_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_23_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_24_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_25_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_26_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_27_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_28_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_29_io_push_valid = 0U;
                    vlSelf->__PVT__fifoGroup_30_io_push_valid = 0U;
                }
            } else {
                vlSelf->__PVT__fifoGroup_21_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_22_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_23_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_24_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_25_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_26_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_27_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_28_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_29_io_push_valid = 0U;
                vlSelf->__PVT__fifoGroup_30_io_push_valid = 0U;
            }
        } else {
            vlSelf->__PVT__fifoGroup_21_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_22_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_23_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_24_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_25_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_26_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_27_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_28_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_29_io_push_valid = 0U;
            vlSelf->__PVT__fifoGroup_30_io_push_valid = 0U;
        }
    } else {
        vlSelf->__PVT__fifoGroup_21_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_22_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_23_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_24_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_25_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_26_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_27_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_28_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_29_io_push_valid = 0U;
        vlSelf->__PVT__fifoGroup_30_io_push_valid = 0U;
    }
}
