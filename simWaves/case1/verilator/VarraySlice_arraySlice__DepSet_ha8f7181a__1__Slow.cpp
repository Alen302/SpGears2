// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VarraySlice.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VarraySlice__Syms.h"
#include "VarraySlice_arraySlice.h"

VL_ATTR_COLD void VarraySlice_arraySlice___settle__TOP__arraySlice__282(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__282\n"); );
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
    vlSelf->__PVT__fifoGroup_49_io_push_payload = 0U;
    if ((1U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if (vlSelf->__PVT__when_ArraySlice_l199) {
            __Vtemp_hc961b8db__0[0U] = 1U;
            __Vtemp_hc961b8db__0[1U] = 0U;
            __Vtemp_hc961b8db__0[2U] = 0U;
            __Vtemp_hc961b8db__0[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hf6a66627__0, __Vtemp_hc961b8db__0, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x20000U & __Vtemp_hf6a66627__0[1U])) {
                vlSelf->__PVT__fifoGroup_49_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_50_io_push_payload = 0U;
            __Vtemp_hc961b8db__2[0U] = 1U;
            __Vtemp_hc961b8db__2[1U] = 0U;
            __Vtemp_hc961b8db__2[2U] = 0U;
            __Vtemp_hc961b8db__2[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h89170b6c__0, __Vtemp_hc961b8db__2, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x40000U & __Vtemp_h89170b6c__0[1U])) {
                vlSelf->__PVT__fifoGroup_50_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_51_io_push_payload = 0U;
            __Vtemp_hc961b8db__4[0U] = 1U;
            __Vtemp_hc961b8db__4[1U] = 0U;
            __Vtemp_hc961b8db__4[2U] = 0U;
            __Vtemp_hc961b8db__4[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7144608a__0, __Vtemp_hc961b8db__4, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x80000U & __Vtemp_h7144608a__0[1U])) {
                vlSelf->__PVT__fifoGroup_51_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_52_io_push_payload = 0U;
            __Vtemp_hc961b8db__6[0U] = 1U;
            __Vtemp_hc961b8db__6[1U] = 0U;
            __Vtemp_hc961b8db__6[2U] = 0U;
            __Vtemp_hc961b8db__6[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7189b8e3__0, __Vtemp_hc961b8db__6, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x100000U & __Vtemp_h7189b8e3__0[1U])) {
                vlSelf->__PVT__fifoGroup_52_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_53_io_push_payload = 0U;
            __Vtemp_hc961b8db__8[0U] = 1U;
            __Vtemp_hc961b8db__8[1U] = 0U;
            __Vtemp_hc961b8db__8[2U] = 0U;
            __Vtemp_hc961b8db__8[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h796fba44__0, __Vtemp_hc961b8db__8, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x200000U & __Vtemp_h796fba44__0[1U])) {
                vlSelf->__PVT__fifoGroup_53_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_54_io_push_payload = 0U;
            __Vtemp_hc961b8db__10[0U] = 1U;
            __Vtemp_hc961b8db__10[1U] = 0U;
            __Vtemp_hc961b8db__10[2U] = 0U;
            __Vtemp_hc961b8db__10[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7f19dec8__0, __Vtemp_hc961b8db__10, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x400000U & __Vtemp_h7f19dec8__0[1U])) {
                vlSelf->__PVT__fifoGroup_54_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_55_io_push_payload = 0U;
            __Vtemp_hc961b8db__12[0U] = 1U;
            __Vtemp_hc961b8db__12[1U] = 0U;
            __Vtemp_hc961b8db__12[2U] = 0U;
            __Vtemp_hc961b8db__12[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h38440148__0, __Vtemp_hc961b8db__12, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x800000U & __Vtemp_h38440148__0[1U])) {
                vlSelf->__PVT__fifoGroup_55_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_56_io_push_payload = 0U;
            __Vtemp_hc961b8db__14[0U] = 1U;
            __Vtemp_hc961b8db__14[1U] = 0U;
            __Vtemp_hc961b8db__14[2U] = 0U;
            __Vtemp_hc961b8db__14[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8b4148cd__0, __Vtemp_hc961b8db__14, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x1000000U & __Vtemp_h8b4148cd__0[1U])) {
                vlSelf->__PVT__fifoGroup_56_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_57_io_push_payload = 0U;
            __Vtemp_hc961b8db__16[0U] = 1U;
            __Vtemp_hc961b8db__16[1U] = 0U;
            __Vtemp_hc961b8db__16[2U] = 0U;
            __Vtemp_hc961b8db__16[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hd60af9f3__0, __Vtemp_hc961b8db__16, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x2000000U & __Vtemp_hd60af9f3__0[1U])) {
                vlSelf->__PVT__fifoGroup_57_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_58_io_push_payload = 0U;
            __Vtemp_hc961b8db__18[0U] = 1U;
            __Vtemp_hc961b8db__18[1U] = 0U;
            __Vtemp_hc961b8db__18[2U] = 0U;
            __Vtemp_hc961b8db__18[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he58d3a6a__0, __Vtemp_hc961b8db__18, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x4000000U & __Vtemp_he58d3a6a__0[1U])) {
                vlSelf->__PVT__fifoGroup_58_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_59_io_push_payload = 0U;
            __Vtemp_hc961b8db__20[0U] = 1U;
            __Vtemp_hc961b8db__20[1U] = 0U;
            __Vtemp_hc961b8db__20[2U] = 0U;
            __Vtemp_hc961b8db__20[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h97021cf2__0, __Vtemp_hc961b8db__20, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x8000000U & __Vtemp_h97021cf2__0[1U])) {
                vlSelf->__PVT__fifoGroup_59_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
        } else {
            vlSelf->__PVT__fifoGroup_50_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_51_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_52_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_53_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_54_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_55_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_56_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_57_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_58_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_59_io_push_payload = 0U;
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
                    if ((0x20000U & __Vtemp_hc45c6cdb__0[1U])) {
                        vlSelf->__PVT__fifoGroup_49_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_50_io_push_payload = 0U;
                    __Vtemp_hc961b8db__3[0U] = 1U;
                    __Vtemp_hc961b8db__3[1U] = 0U;
                    __Vtemp_hc961b8db__3[2U] = 0U;
                    __Vtemp_hc961b8db__3[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h2d9ee4ac__0, __Vtemp_hc961b8db__3, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x40000U & __Vtemp_h2d9ee4ac__0[1U])) {
                        vlSelf->__PVT__fifoGroup_50_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_51_io_push_payload = 0U;
                    __Vtemp_hc961b8db__5[0U] = 1U;
                    __Vtemp_hc961b8db__5[1U] = 0U;
                    __Vtemp_hc961b8db__5[2U] = 0U;
                    __Vtemp_hc961b8db__5[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h87cdd039__0, __Vtemp_hc961b8db__5, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x80000U & __Vtemp_h87cdd039__0[1U])) {
                        vlSelf->__PVT__fifoGroup_51_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_52_io_push_payload = 0U;
                    __Vtemp_hc961b8db__7[0U] = 1U;
                    __Vtemp_hc961b8db__7[1U] = 0U;
                    __Vtemp_hc961b8db__7[2U] = 0U;
                    __Vtemp_hc961b8db__7[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9c72ed68__0, __Vtemp_hc961b8db__7, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x100000U & __Vtemp_h9c72ed68__0[1U])) {
                        vlSelf->__PVT__fifoGroup_52_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_53_io_push_payload = 0U;
                    __Vtemp_hc961b8db__9[0U] = 1U;
                    __Vtemp_hc961b8db__9[1U] = 0U;
                    __Vtemp_hc961b8db__9[2U] = 0U;
                    __Vtemp_hc961b8db__9[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1d38b501__0, __Vtemp_hc961b8db__9, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x200000U & __Vtemp_h1d38b501__0[1U])) {
                        vlSelf->__PVT__fifoGroup_53_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_54_io_push_payload = 0U;
                    __Vtemp_hc961b8db__11[0U] = 1U;
                    __Vtemp_hc961b8db__11[1U] = 0U;
                    __Vtemp_hc961b8db__11[2U] = 0U;
                    __Vtemp_hc961b8db__11[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha403c595__0, __Vtemp_hc961b8db__11, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x400000U & __Vtemp_ha403c595__0[1U])) {
                        vlSelf->__PVT__fifoGroup_54_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_55_io_push_payload = 0U;
                    __Vtemp_hc961b8db__13[0U] = 1U;
                    __Vtemp_hc961b8db__13[1U] = 0U;
                    __Vtemp_hc961b8db__13[2U] = 0U;
                    __Vtemp_hc961b8db__13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha08d88ec__0, __Vtemp_hc961b8db__13, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x800000U & __Vtemp_ha08d88ec__0[1U])) {
                        vlSelf->__PVT__fifoGroup_55_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_56_io_push_payload = 0U;
                    __Vtemp_hc961b8db__15[0U] = 1U;
                    __Vtemp_hc961b8db__15[1U] = 0U;
                    __Vtemp_hc961b8db__15[2U] = 0U;
                    __Vtemp_hc961b8db__15[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8b12d3e4__0, __Vtemp_hc961b8db__15, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x1000000U & __Vtemp_h8b12d3e4__0[1U])) {
                        vlSelf->__PVT__fifoGroup_56_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_57_io_push_payload = 0U;
                    __Vtemp_hc961b8db__17[0U] = 1U;
                    __Vtemp_hc961b8db__17[1U] = 0U;
                    __Vtemp_hc961b8db__17[2U] = 0U;
                    __Vtemp_hc961b8db__17[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hfb884992__0, __Vtemp_hc961b8db__17, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x2000000U & __Vtemp_hfb884992__0[1U])) {
                        vlSelf->__PVT__fifoGroup_57_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_58_io_push_payload = 0U;
                    __Vtemp_hc961b8db__19[0U] = 1U;
                    __Vtemp_hc961b8db__19[1U] = 0U;
                    __Vtemp_hc961b8db__19[2U] = 0U;
                    __Vtemp_hc961b8db__19[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h89a7e792__0, __Vtemp_hc961b8db__19, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x4000000U & __Vtemp_h89a7e792__0[1U])) {
                        vlSelf->__PVT__fifoGroup_58_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_59_io_push_payload = 0U;
                    __Vtemp_hc961b8db__21[0U] = 1U;
                    __Vtemp_hc961b8db__21[1U] = 0U;
                    __Vtemp_hc961b8db__21[2U] = 0U;
                    __Vtemp_hc961b8db__21[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h092a8fa7__0, __Vtemp_hc961b8db__21, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x8000000U & __Vtemp_h092a8fa7__0[1U])) {
                        vlSelf->__PVT__fifoGroup_59_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                } else {
                    vlSelf->__PVT__fifoGroup_50_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_51_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_52_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_53_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_54_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_55_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_56_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_57_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_58_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_59_io_push_payload = 0U;
                }
            } else {
                vlSelf->__PVT__fifoGroup_50_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_51_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_52_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_53_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_54_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_55_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_56_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_57_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_58_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_59_io_push_payload = 0U;
            }
        } else {
            vlSelf->__PVT__fifoGroup_50_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_51_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_52_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_53_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_54_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_55_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_56_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_57_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_58_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_59_io_push_payload = 0U;
        }
    } else {
        vlSelf->__PVT__fifoGroup_50_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_51_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_52_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_53_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_54_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_55_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_56_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_57_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_58_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_59_io_push_payload = 0U;
    }
}

VL_ATTR_COLD void VarraySlice_arraySlice___settle__TOP__arraySlice__283(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__283\n"); );
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
    vlSelf->__PVT__fifoGroup_60_io_push_payload = 0U;
    if ((1U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if (vlSelf->__PVT__when_ArraySlice_l199) {
            __Vtemp_hc961b8db__0[0U] = 1U;
            __Vtemp_hc961b8db__0[1U] = 0U;
            __Vtemp_hc961b8db__0[2U] = 0U;
            __Vtemp_hc961b8db__0[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hf6a66627__0, __Vtemp_hc961b8db__0, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x10000000U & __Vtemp_hf6a66627__0[1U])) {
                vlSelf->__PVT__fifoGroup_60_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_61_io_push_payload = 0U;
            __Vtemp_hc961b8db__2[0U] = 1U;
            __Vtemp_hc961b8db__2[1U] = 0U;
            __Vtemp_hc961b8db__2[2U] = 0U;
            __Vtemp_hc961b8db__2[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h89170b6c__0, __Vtemp_hc961b8db__2, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x20000000U & __Vtemp_h89170b6c__0[1U])) {
                vlSelf->__PVT__fifoGroup_61_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_62_io_push_payload = 0U;
            __Vtemp_hc961b8db__4[0U] = 1U;
            __Vtemp_hc961b8db__4[1U] = 0U;
            __Vtemp_hc961b8db__4[2U] = 0U;
            __Vtemp_hc961b8db__4[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7144608a__0, __Vtemp_hc961b8db__4, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x40000000U & __Vtemp_h7144608a__0[1U])) {
                vlSelf->__PVT__fifoGroup_62_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_63_io_push_payload = 0U;
            __Vtemp_hc961b8db__6[0U] = 1U;
            __Vtemp_hc961b8db__6[1U] = 0U;
            __Vtemp_hc961b8db__6[2U] = 0U;
            __Vtemp_hc961b8db__6[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7189b8e3__0, __Vtemp_hc961b8db__6, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((__Vtemp_h7189b8e3__0[1U] >> 0x1fU)) {
                vlSelf->__PVT__fifoGroup_63_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_64_io_push_payload = 0U;
            __Vtemp_hc961b8db__8[0U] = 1U;
            __Vtemp_hc961b8db__8[1U] = 0U;
            __Vtemp_hc961b8db__8[2U] = 0U;
            __Vtemp_hc961b8db__8[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h796fba44__0, __Vtemp_hc961b8db__8, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((1U & __Vtemp_h796fba44__0[2U])) {
                vlSelf->__PVT__fifoGroup_64_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_65_io_push_payload = 0U;
            __Vtemp_hc961b8db__10[0U] = 1U;
            __Vtemp_hc961b8db__10[1U] = 0U;
            __Vtemp_hc961b8db__10[2U] = 0U;
            __Vtemp_hc961b8db__10[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7f19dec8__0, __Vtemp_hc961b8db__10, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((2U & __Vtemp_h7f19dec8__0[2U])) {
                vlSelf->__PVT__fifoGroup_65_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_66_io_push_payload = 0U;
            __Vtemp_hc961b8db__12[0U] = 1U;
            __Vtemp_hc961b8db__12[1U] = 0U;
            __Vtemp_hc961b8db__12[2U] = 0U;
            __Vtemp_hc961b8db__12[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h38440148__0, __Vtemp_hc961b8db__12, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((4U & __Vtemp_h38440148__0[2U])) {
                vlSelf->__PVT__fifoGroup_66_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_67_io_push_payload = 0U;
            __Vtemp_hc961b8db__14[0U] = 1U;
            __Vtemp_hc961b8db__14[1U] = 0U;
            __Vtemp_hc961b8db__14[2U] = 0U;
            __Vtemp_hc961b8db__14[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8b4148cd__0, __Vtemp_hc961b8db__14, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((8U & __Vtemp_h8b4148cd__0[2U])) {
                vlSelf->__PVT__fifoGroup_67_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_68_io_push_payload = 0U;
            __Vtemp_hc961b8db__16[0U] = 1U;
            __Vtemp_hc961b8db__16[1U] = 0U;
            __Vtemp_hc961b8db__16[2U] = 0U;
            __Vtemp_hc961b8db__16[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hd60af9f3__0, __Vtemp_hc961b8db__16, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x10U & __Vtemp_hd60af9f3__0[2U])) {
                vlSelf->__PVT__fifoGroup_68_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_69_io_push_payload = 0U;
            __Vtemp_hc961b8db__18[0U] = 1U;
            __Vtemp_hc961b8db__18[1U] = 0U;
            __Vtemp_hc961b8db__18[2U] = 0U;
            __Vtemp_hc961b8db__18[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he58d3a6a__0, __Vtemp_hc961b8db__18, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x20U & __Vtemp_he58d3a6a__0[2U])) {
                vlSelf->__PVT__fifoGroup_69_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_70_io_push_payload = 0U;
            __Vtemp_hc961b8db__20[0U] = 1U;
            __Vtemp_hc961b8db__20[1U] = 0U;
            __Vtemp_hc961b8db__20[2U] = 0U;
            __Vtemp_hc961b8db__20[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h97021cf2__0, __Vtemp_hc961b8db__20, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x40U & __Vtemp_h97021cf2__0[2U])) {
                vlSelf->__PVT__fifoGroup_70_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
        } else {
            vlSelf->__PVT__fifoGroup_61_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_62_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_63_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_64_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_65_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_66_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_67_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_68_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_69_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_70_io_push_payload = 0U;
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
                    if ((0x10000000U & __Vtemp_hc45c6cdb__0[1U])) {
                        vlSelf->__PVT__fifoGroup_60_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_61_io_push_payload = 0U;
                    __Vtemp_hc961b8db__3[0U] = 1U;
                    __Vtemp_hc961b8db__3[1U] = 0U;
                    __Vtemp_hc961b8db__3[2U] = 0U;
                    __Vtemp_hc961b8db__3[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h2d9ee4ac__0, __Vtemp_hc961b8db__3, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x20000000U & __Vtemp_h2d9ee4ac__0[1U])) {
                        vlSelf->__PVT__fifoGroup_61_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_62_io_push_payload = 0U;
                    __Vtemp_hc961b8db__5[0U] = 1U;
                    __Vtemp_hc961b8db__5[1U] = 0U;
                    __Vtemp_hc961b8db__5[2U] = 0U;
                    __Vtemp_hc961b8db__5[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h87cdd039__0, __Vtemp_hc961b8db__5, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x40000000U & __Vtemp_h87cdd039__0[1U])) {
                        vlSelf->__PVT__fifoGroup_62_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_63_io_push_payload = 0U;
                    __Vtemp_hc961b8db__7[0U] = 1U;
                    __Vtemp_hc961b8db__7[1U] = 0U;
                    __Vtemp_hc961b8db__7[2U] = 0U;
                    __Vtemp_hc961b8db__7[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9c72ed68__0, __Vtemp_hc961b8db__7, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((__Vtemp_h9c72ed68__0[1U] >> 0x1fU)) {
                        vlSelf->__PVT__fifoGroup_63_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_64_io_push_payload = 0U;
                    __Vtemp_hc961b8db__9[0U] = 1U;
                    __Vtemp_hc961b8db__9[1U] = 0U;
                    __Vtemp_hc961b8db__9[2U] = 0U;
                    __Vtemp_hc961b8db__9[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1d38b501__0, __Vtemp_hc961b8db__9, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((1U & __Vtemp_h1d38b501__0[2U])) {
                        vlSelf->__PVT__fifoGroup_64_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_65_io_push_payload = 0U;
                    __Vtemp_hc961b8db__11[0U] = 1U;
                    __Vtemp_hc961b8db__11[1U] = 0U;
                    __Vtemp_hc961b8db__11[2U] = 0U;
                    __Vtemp_hc961b8db__11[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha403c595__0, __Vtemp_hc961b8db__11, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((2U & __Vtemp_ha403c595__0[2U])) {
                        vlSelf->__PVT__fifoGroup_65_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_66_io_push_payload = 0U;
                    __Vtemp_hc961b8db__13[0U] = 1U;
                    __Vtemp_hc961b8db__13[1U] = 0U;
                    __Vtemp_hc961b8db__13[2U] = 0U;
                    __Vtemp_hc961b8db__13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha08d88ec__0, __Vtemp_hc961b8db__13, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((4U & __Vtemp_ha08d88ec__0[2U])) {
                        vlSelf->__PVT__fifoGroup_66_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_67_io_push_payload = 0U;
                    __Vtemp_hc961b8db__15[0U] = 1U;
                    __Vtemp_hc961b8db__15[1U] = 0U;
                    __Vtemp_hc961b8db__15[2U] = 0U;
                    __Vtemp_hc961b8db__15[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8b12d3e4__0, __Vtemp_hc961b8db__15, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((8U & __Vtemp_h8b12d3e4__0[2U])) {
                        vlSelf->__PVT__fifoGroup_67_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_68_io_push_payload = 0U;
                    __Vtemp_hc961b8db__17[0U] = 1U;
                    __Vtemp_hc961b8db__17[1U] = 0U;
                    __Vtemp_hc961b8db__17[2U] = 0U;
                    __Vtemp_hc961b8db__17[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hfb884992__0, __Vtemp_hc961b8db__17, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x10U & __Vtemp_hfb884992__0[2U])) {
                        vlSelf->__PVT__fifoGroup_68_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_69_io_push_payload = 0U;
                    __Vtemp_hc961b8db__19[0U] = 1U;
                    __Vtemp_hc961b8db__19[1U] = 0U;
                    __Vtemp_hc961b8db__19[2U] = 0U;
                    __Vtemp_hc961b8db__19[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h89a7e792__0, __Vtemp_hc961b8db__19, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x20U & __Vtemp_h89a7e792__0[2U])) {
                        vlSelf->__PVT__fifoGroup_69_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_70_io_push_payload = 0U;
                    __Vtemp_hc961b8db__21[0U] = 1U;
                    __Vtemp_hc961b8db__21[1U] = 0U;
                    __Vtemp_hc961b8db__21[2U] = 0U;
                    __Vtemp_hc961b8db__21[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h092a8fa7__0, __Vtemp_hc961b8db__21, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x40U & __Vtemp_h092a8fa7__0[2U])) {
                        vlSelf->__PVT__fifoGroup_70_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                } else {
                    vlSelf->__PVT__fifoGroup_61_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_62_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_63_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_64_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_65_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_66_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_67_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_68_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_69_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_70_io_push_payload = 0U;
                }
            } else {
                vlSelf->__PVT__fifoGroup_61_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_62_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_63_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_64_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_65_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_66_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_67_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_68_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_69_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_70_io_push_payload = 0U;
            }
        } else {
            vlSelf->__PVT__fifoGroup_61_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_62_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_63_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_64_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_65_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_66_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_67_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_68_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_69_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_70_io_push_payload = 0U;
        }
    } else {
        vlSelf->__PVT__fifoGroup_61_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_62_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_63_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_64_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_65_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_66_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_67_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_68_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_69_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_70_io_push_payload = 0U;
    }
}

VL_ATTR_COLD void VarraySlice_arraySlice___settle__TOP__arraySlice__284(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__284\n"); );
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
    vlSelf->__PVT__fifoGroup_71_io_push_payload = 0U;
    if ((1U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if (vlSelf->__PVT__when_ArraySlice_l199) {
            __Vtemp_hc961b8db__0[0U] = 1U;
            __Vtemp_hc961b8db__0[1U] = 0U;
            __Vtemp_hc961b8db__0[2U] = 0U;
            __Vtemp_hc961b8db__0[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hf6a66627__0, __Vtemp_hc961b8db__0, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x80U & __Vtemp_hf6a66627__0[2U])) {
                vlSelf->__PVT__fifoGroup_71_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_72_io_push_payload = 0U;
            __Vtemp_hc961b8db__2[0U] = 1U;
            __Vtemp_hc961b8db__2[1U] = 0U;
            __Vtemp_hc961b8db__2[2U] = 0U;
            __Vtemp_hc961b8db__2[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h89170b6c__0, __Vtemp_hc961b8db__2, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x100U & __Vtemp_h89170b6c__0[2U])) {
                vlSelf->__PVT__fifoGroup_72_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_73_io_push_payload = 0U;
            __Vtemp_hc961b8db__4[0U] = 1U;
            __Vtemp_hc961b8db__4[1U] = 0U;
            __Vtemp_hc961b8db__4[2U] = 0U;
            __Vtemp_hc961b8db__4[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7144608a__0, __Vtemp_hc961b8db__4, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x200U & __Vtemp_h7144608a__0[2U])) {
                vlSelf->__PVT__fifoGroup_73_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_74_io_push_payload = 0U;
            __Vtemp_hc961b8db__6[0U] = 1U;
            __Vtemp_hc961b8db__6[1U] = 0U;
            __Vtemp_hc961b8db__6[2U] = 0U;
            __Vtemp_hc961b8db__6[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7189b8e3__0, __Vtemp_hc961b8db__6, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x400U & __Vtemp_h7189b8e3__0[2U])) {
                vlSelf->__PVT__fifoGroup_74_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_75_io_push_payload = 0U;
            __Vtemp_hc961b8db__8[0U] = 1U;
            __Vtemp_hc961b8db__8[1U] = 0U;
            __Vtemp_hc961b8db__8[2U] = 0U;
            __Vtemp_hc961b8db__8[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h796fba44__0, __Vtemp_hc961b8db__8, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x800U & __Vtemp_h796fba44__0[2U])) {
                vlSelf->__PVT__fifoGroup_75_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_76_io_push_payload = 0U;
            __Vtemp_hc961b8db__10[0U] = 1U;
            __Vtemp_hc961b8db__10[1U] = 0U;
            __Vtemp_hc961b8db__10[2U] = 0U;
            __Vtemp_hc961b8db__10[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7f19dec8__0, __Vtemp_hc961b8db__10, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x1000U & __Vtemp_h7f19dec8__0[2U])) {
                vlSelf->__PVT__fifoGroup_76_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_77_io_push_payload = 0U;
            __Vtemp_hc961b8db__12[0U] = 1U;
            __Vtemp_hc961b8db__12[1U] = 0U;
            __Vtemp_hc961b8db__12[2U] = 0U;
            __Vtemp_hc961b8db__12[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h38440148__0, __Vtemp_hc961b8db__12, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x2000U & __Vtemp_h38440148__0[2U])) {
                vlSelf->__PVT__fifoGroup_77_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_78_io_push_payload = 0U;
            __Vtemp_hc961b8db__14[0U] = 1U;
            __Vtemp_hc961b8db__14[1U] = 0U;
            __Vtemp_hc961b8db__14[2U] = 0U;
            __Vtemp_hc961b8db__14[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8b4148cd__0, __Vtemp_hc961b8db__14, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x4000U & __Vtemp_h8b4148cd__0[2U])) {
                vlSelf->__PVT__fifoGroup_78_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_79_io_push_payload = 0U;
            __Vtemp_hc961b8db__16[0U] = 1U;
            __Vtemp_hc961b8db__16[1U] = 0U;
            __Vtemp_hc961b8db__16[2U] = 0U;
            __Vtemp_hc961b8db__16[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hd60af9f3__0, __Vtemp_hc961b8db__16, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x8000U & __Vtemp_hd60af9f3__0[2U])) {
                vlSelf->__PVT__fifoGroup_79_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_80_io_push_payload = 0U;
            __Vtemp_hc961b8db__18[0U] = 1U;
            __Vtemp_hc961b8db__18[1U] = 0U;
            __Vtemp_hc961b8db__18[2U] = 0U;
            __Vtemp_hc961b8db__18[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he58d3a6a__0, __Vtemp_hc961b8db__18, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x10000U & __Vtemp_he58d3a6a__0[2U])) {
                vlSelf->__PVT__fifoGroup_80_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_81_io_push_payload = 0U;
            __Vtemp_hc961b8db__20[0U] = 1U;
            __Vtemp_hc961b8db__20[1U] = 0U;
            __Vtemp_hc961b8db__20[2U] = 0U;
            __Vtemp_hc961b8db__20[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h97021cf2__0, __Vtemp_hc961b8db__20, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x20000U & __Vtemp_h97021cf2__0[2U])) {
                vlSelf->__PVT__fifoGroup_81_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
        } else {
            vlSelf->__PVT__fifoGroup_72_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_73_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_74_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_75_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_76_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_77_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_78_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_79_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_80_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_81_io_push_payload = 0U;
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
                    if ((0x80U & __Vtemp_hc45c6cdb__0[2U])) {
                        vlSelf->__PVT__fifoGroup_71_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_72_io_push_payload = 0U;
                    __Vtemp_hc961b8db__3[0U] = 1U;
                    __Vtemp_hc961b8db__3[1U] = 0U;
                    __Vtemp_hc961b8db__3[2U] = 0U;
                    __Vtemp_hc961b8db__3[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h2d9ee4ac__0, __Vtemp_hc961b8db__3, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x100U & __Vtemp_h2d9ee4ac__0[2U])) {
                        vlSelf->__PVT__fifoGroup_72_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_73_io_push_payload = 0U;
                    __Vtemp_hc961b8db__5[0U] = 1U;
                    __Vtemp_hc961b8db__5[1U] = 0U;
                    __Vtemp_hc961b8db__5[2U] = 0U;
                    __Vtemp_hc961b8db__5[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h87cdd039__0, __Vtemp_hc961b8db__5, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x200U & __Vtemp_h87cdd039__0[2U])) {
                        vlSelf->__PVT__fifoGroup_73_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_74_io_push_payload = 0U;
                    __Vtemp_hc961b8db__7[0U] = 1U;
                    __Vtemp_hc961b8db__7[1U] = 0U;
                    __Vtemp_hc961b8db__7[2U] = 0U;
                    __Vtemp_hc961b8db__7[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9c72ed68__0, __Vtemp_hc961b8db__7, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x400U & __Vtemp_h9c72ed68__0[2U])) {
                        vlSelf->__PVT__fifoGroup_74_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_75_io_push_payload = 0U;
                    __Vtemp_hc961b8db__9[0U] = 1U;
                    __Vtemp_hc961b8db__9[1U] = 0U;
                    __Vtemp_hc961b8db__9[2U] = 0U;
                    __Vtemp_hc961b8db__9[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1d38b501__0, __Vtemp_hc961b8db__9, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x800U & __Vtemp_h1d38b501__0[2U])) {
                        vlSelf->__PVT__fifoGroup_75_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_76_io_push_payload = 0U;
                    __Vtemp_hc961b8db__11[0U] = 1U;
                    __Vtemp_hc961b8db__11[1U] = 0U;
                    __Vtemp_hc961b8db__11[2U] = 0U;
                    __Vtemp_hc961b8db__11[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha403c595__0, __Vtemp_hc961b8db__11, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x1000U & __Vtemp_ha403c595__0[2U])) {
                        vlSelf->__PVT__fifoGroup_76_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_77_io_push_payload = 0U;
                    __Vtemp_hc961b8db__13[0U] = 1U;
                    __Vtemp_hc961b8db__13[1U] = 0U;
                    __Vtemp_hc961b8db__13[2U] = 0U;
                    __Vtemp_hc961b8db__13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha08d88ec__0, __Vtemp_hc961b8db__13, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x2000U & __Vtemp_ha08d88ec__0[2U])) {
                        vlSelf->__PVT__fifoGroup_77_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_78_io_push_payload = 0U;
                    __Vtemp_hc961b8db__15[0U] = 1U;
                    __Vtemp_hc961b8db__15[1U] = 0U;
                    __Vtemp_hc961b8db__15[2U] = 0U;
                    __Vtemp_hc961b8db__15[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8b12d3e4__0, __Vtemp_hc961b8db__15, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x4000U & __Vtemp_h8b12d3e4__0[2U])) {
                        vlSelf->__PVT__fifoGroup_78_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_79_io_push_payload = 0U;
                    __Vtemp_hc961b8db__17[0U] = 1U;
                    __Vtemp_hc961b8db__17[1U] = 0U;
                    __Vtemp_hc961b8db__17[2U] = 0U;
                    __Vtemp_hc961b8db__17[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hfb884992__0, __Vtemp_hc961b8db__17, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x8000U & __Vtemp_hfb884992__0[2U])) {
                        vlSelf->__PVT__fifoGroup_79_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_80_io_push_payload = 0U;
                    __Vtemp_hc961b8db__19[0U] = 1U;
                    __Vtemp_hc961b8db__19[1U] = 0U;
                    __Vtemp_hc961b8db__19[2U] = 0U;
                    __Vtemp_hc961b8db__19[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h89a7e792__0, __Vtemp_hc961b8db__19, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x10000U & __Vtemp_h89a7e792__0[2U])) {
                        vlSelf->__PVT__fifoGroup_80_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_81_io_push_payload = 0U;
                    __Vtemp_hc961b8db__21[0U] = 1U;
                    __Vtemp_hc961b8db__21[1U] = 0U;
                    __Vtemp_hc961b8db__21[2U] = 0U;
                    __Vtemp_hc961b8db__21[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h092a8fa7__0, __Vtemp_hc961b8db__21, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x20000U & __Vtemp_h092a8fa7__0[2U])) {
                        vlSelf->__PVT__fifoGroup_81_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                } else {
                    vlSelf->__PVT__fifoGroup_72_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_73_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_74_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_75_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_76_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_77_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_78_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_79_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_80_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_81_io_push_payload = 0U;
                }
            } else {
                vlSelf->__PVT__fifoGroup_72_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_73_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_74_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_75_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_76_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_77_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_78_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_79_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_80_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_81_io_push_payload = 0U;
            }
        } else {
            vlSelf->__PVT__fifoGroup_72_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_73_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_74_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_75_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_76_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_77_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_78_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_79_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_80_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_81_io_push_payload = 0U;
        }
    } else {
        vlSelf->__PVT__fifoGroup_72_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_73_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_74_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_75_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_76_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_77_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_78_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_79_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_80_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_81_io_push_payload = 0U;
    }
}

VL_ATTR_COLD void VarraySlice_arraySlice___settle__TOP__arraySlice__285(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__285\n"); );
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
    vlSelf->__PVT__fifoGroup_82_io_push_payload = 0U;
    if ((1U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if (vlSelf->__PVT__when_ArraySlice_l199) {
            __Vtemp_hc961b8db__0[0U] = 1U;
            __Vtemp_hc961b8db__0[1U] = 0U;
            __Vtemp_hc961b8db__0[2U] = 0U;
            __Vtemp_hc961b8db__0[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hf6a66627__0, __Vtemp_hc961b8db__0, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x40000U & __Vtemp_hf6a66627__0[2U])) {
                vlSelf->__PVT__fifoGroup_82_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_83_io_push_payload = 0U;
            __Vtemp_hc961b8db__2[0U] = 1U;
            __Vtemp_hc961b8db__2[1U] = 0U;
            __Vtemp_hc961b8db__2[2U] = 0U;
            __Vtemp_hc961b8db__2[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h89170b6c__0, __Vtemp_hc961b8db__2, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x80000U & __Vtemp_h89170b6c__0[2U])) {
                vlSelf->__PVT__fifoGroup_83_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_84_io_push_payload = 0U;
            __Vtemp_hc961b8db__4[0U] = 1U;
            __Vtemp_hc961b8db__4[1U] = 0U;
            __Vtemp_hc961b8db__4[2U] = 0U;
            __Vtemp_hc961b8db__4[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7144608a__0, __Vtemp_hc961b8db__4, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x100000U & __Vtemp_h7144608a__0[2U])) {
                vlSelf->__PVT__fifoGroup_84_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_85_io_push_payload = 0U;
            __Vtemp_hc961b8db__6[0U] = 1U;
            __Vtemp_hc961b8db__6[1U] = 0U;
            __Vtemp_hc961b8db__6[2U] = 0U;
            __Vtemp_hc961b8db__6[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7189b8e3__0, __Vtemp_hc961b8db__6, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x200000U & __Vtemp_h7189b8e3__0[2U])) {
                vlSelf->__PVT__fifoGroup_85_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_86_io_push_payload = 0U;
            __Vtemp_hc961b8db__8[0U] = 1U;
            __Vtemp_hc961b8db__8[1U] = 0U;
            __Vtemp_hc961b8db__8[2U] = 0U;
            __Vtemp_hc961b8db__8[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h796fba44__0, __Vtemp_hc961b8db__8, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x400000U & __Vtemp_h796fba44__0[2U])) {
                vlSelf->__PVT__fifoGroup_86_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_87_io_push_payload = 0U;
            __Vtemp_hc961b8db__10[0U] = 1U;
            __Vtemp_hc961b8db__10[1U] = 0U;
            __Vtemp_hc961b8db__10[2U] = 0U;
            __Vtemp_hc961b8db__10[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7f19dec8__0, __Vtemp_hc961b8db__10, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x800000U & __Vtemp_h7f19dec8__0[2U])) {
                vlSelf->__PVT__fifoGroup_87_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_88_io_push_payload = 0U;
            __Vtemp_hc961b8db__12[0U] = 1U;
            __Vtemp_hc961b8db__12[1U] = 0U;
            __Vtemp_hc961b8db__12[2U] = 0U;
            __Vtemp_hc961b8db__12[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h38440148__0, __Vtemp_hc961b8db__12, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x1000000U & __Vtemp_h38440148__0[2U])) {
                vlSelf->__PVT__fifoGroup_88_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_89_io_push_payload = 0U;
            __Vtemp_hc961b8db__14[0U] = 1U;
            __Vtemp_hc961b8db__14[1U] = 0U;
            __Vtemp_hc961b8db__14[2U] = 0U;
            __Vtemp_hc961b8db__14[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8b4148cd__0, __Vtemp_hc961b8db__14, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x2000000U & __Vtemp_h8b4148cd__0[2U])) {
                vlSelf->__PVT__fifoGroup_89_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_90_io_push_payload = 0U;
            __Vtemp_hc961b8db__16[0U] = 1U;
            __Vtemp_hc961b8db__16[1U] = 0U;
            __Vtemp_hc961b8db__16[2U] = 0U;
            __Vtemp_hc961b8db__16[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hd60af9f3__0, __Vtemp_hc961b8db__16, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x4000000U & __Vtemp_hd60af9f3__0[2U])) {
                vlSelf->__PVT__fifoGroup_90_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_91_io_push_payload = 0U;
            __Vtemp_hc961b8db__18[0U] = 1U;
            __Vtemp_hc961b8db__18[1U] = 0U;
            __Vtemp_hc961b8db__18[2U] = 0U;
            __Vtemp_hc961b8db__18[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he58d3a6a__0, __Vtemp_hc961b8db__18, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x8000000U & __Vtemp_he58d3a6a__0[2U])) {
                vlSelf->__PVT__fifoGroup_91_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_92_io_push_payload = 0U;
            __Vtemp_hc961b8db__20[0U] = 1U;
            __Vtemp_hc961b8db__20[1U] = 0U;
            __Vtemp_hc961b8db__20[2U] = 0U;
            __Vtemp_hc961b8db__20[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h97021cf2__0, __Vtemp_hc961b8db__20, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x10000000U & __Vtemp_h97021cf2__0[2U])) {
                vlSelf->__PVT__fifoGroup_92_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
        } else {
            vlSelf->__PVT__fifoGroup_83_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_84_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_85_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_86_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_87_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_88_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_89_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_90_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_91_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_92_io_push_payload = 0U;
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
                    if ((0x40000U & __Vtemp_hc45c6cdb__0[2U])) {
                        vlSelf->__PVT__fifoGroup_82_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_83_io_push_payload = 0U;
                    __Vtemp_hc961b8db__3[0U] = 1U;
                    __Vtemp_hc961b8db__3[1U] = 0U;
                    __Vtemp_hc961b8db__3[2U] = 0U;
                    __Vtemp_hc961b8db__3[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h2d9ee4ac__0, __Vtemp_hc961b8db__3, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x80000U & __Vtemp_h2d9ee4ac__0[2U])) {
                        vlSelf->__PVT__fifoGroup_83_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_84_io_push_payload = 0U;
                    __Vtemp_hc961b8db__5[0U] = 1U;
                    __Vtemp_hc961b8db__5[1U] = 0U;
                    __Vtemp_hc961b8db__5[2U] = 0U;
                    __Vtemp_hc961b8db__5[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h87cdd039__0, __Vtemp_hc961b8db__5, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x100000U & __Vtemp_h87cdd039__0[2U])) {
                        vlSelf->__PVT__fifoGroup_84_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_85_io_push_payload = 0U;
                    __Vtemp_hc961b8db__7[0U] = 1U;
                    __Vtemp_hc961b8db__7[1U] = 0U;
                    __Vtemp_hc961b8db__7[2U] = 0U;
                    __Vtemp_hc961b8db__7[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9c72ed68__0, __Vtemp_hc961b8db__7, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x200000U & __Vtemp_h9c72ed68__0[2U])) {
                        vlSelf->__PVT__fifoGroup_85_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_86_io_push_payload = 0U;
                    __Vtemp_hc961b8db__9[0U] = 1U;
                    __Vtemp_hc961b8db__9[1U] = 0U;
                    __Vtemp_hc961b8db__9[2U] = 0U;
                    __Vtemp_hc961b8db__9[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1d38b501__0, __Vtemp_hc961b8db__9, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x400000U & __Vtemp_h1d38b501__0[2U])) {
                        vlSelf->__PVT__fifoGroup_86_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_87_io_push_payload = 0U;
                    __Vtemp_hc961b8db__11[0U] = 1U;
                    __Vtemp_hc961b8db__11[1U] = 0U;
                    __Vtemp_hc961b8db__11[2U] = 0U;
                    __Vtemp_hc961b8db__11[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha403c595__0, __Vtemp_hc961b8db__11, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x800000U & __Vtemp_ha403c595__0[2U])) {
                        vlSelf->__PVT__fifoGroup_87_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_88_io_push_payload = 0U;
                    __Vtemp_hc961b8db__13[0U] = 1U;
                    __Vtemp_hc961b8db__13[1U] = 0U;
                    __Vtemp_hc961b8db__13[2U] = 0U;
                    __Vtemp_hc961b8db__13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha08d88ec__0, __Vtemp_hc961b8db__13, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x1000000U & __Vtemp_ha08d88ec__0[2U])) {
                        vlSelf->__PVT__fifoGroup_88_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_89_io_push_payload = 0U;
                    __Vtemp_hc961b8db__15[0U] = 1U;
                    __Vtemp_hc961b8db__15[1U] = 0U;
                    __Vtemp_hc961b8db__15[2U] = 0U;
                    __Vtemp_hc961b8db__15[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8b12d3e4__0, __Vtemp_hc961b8db__15, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x2000000U & __Vtemp_h8b12d3e4__0[2U])) {
                        vlSelf->__PVT__fifoGroup_89_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_90_io_push_payload = 0U;
                    __Vtemp_hc961b8db__17[0U] = 1U;
                    __Vtemp_hc961b8db__17[1U] = 0U;
                    __Vtemp_hc961b8db__17[2U] = 0U;
                    __Vtemp_hc961b8db__17[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hfb884992__0, __Vtemp_hc961b8db__17, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x4000000U & __Vtemp_hfb884992__0[2U])) {
                        vlSelf->__PVT__fifoGroup_90_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_91_io_push_payload = 0U;
                    __Vtemp_hc961b8db__19[0U] = 1U;
                    __Vtemp_hc961b8db__19[1U] = 0U;
                    __Vtemp_hc961b8db__19[2U] = 0U;
                    __Vtemp_hc961b8db__19[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h89a7e792__0, __Vtemp_hc961b8db__19, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x8000000U & __Vtemp_h89a7e792__0[2U])) {
                        vlSelf->__PVT__fifoGroup_91_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_92_io_push_payload = 0U;
                    __Vtemp_hc961b8db__21[0U] = 1U;
                    __Vtemp_hc961b8db__21[1U] = 0U;
                    __Vtemp_hc961b8db__21[2U] = 0U;
                    __Vtemp_hc961b8db__21[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h092a8fa7__0, __Vtemp_hc961b8db__21, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x10000000U & __Vtemp_h092a8fa7__0[2U])) {
                        vlSelf->__PVT__fifoGroup_92_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                } else {
                    vlSelf->__PVT__fifoGroup_83_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_84_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_85_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_86_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_87_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_88_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_89_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_90_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_91_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_92_io_push_payload = 0U;
                }
            } else {
                vlSelf->__PVT__fifoGroup_83_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_84_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_85_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_86_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_87_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_88_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_89_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_90_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_91_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_92_io_push_payload = 0U;
            }
        } else {
            vlSelf->__PVT__fifoGroup_83_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_84_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_85_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_86_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_87_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_88_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_89_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_90_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_91_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_92_io_push_payload = 0U;
        }
    } else {
        vlSelf->__PVT__fifoGroup_83_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_84_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_85_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_86_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_87_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_88_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_89_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_90_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_91_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_92_io_push_payload = 0U;
    }
}

VL_ATTR_COLD void VarraySlice_arraySlice___settle__TOP__arraySlice__286(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__286\n"); );
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
    vlSelf->__PVT__fifoGroup_93_io_push_payload = 0U;
    if ((1U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if (vlSelf->__PVT__when_ArraySlice_l199) {
            __Vtemp_hc961b8db__0[0U] = 1U;
            __Vtemp_hc961b8db__0[1U] = 0U;
            __Vtemp_hc961b8db__0[2U] = 0U;
            __Vtemp_hc961b8db__0[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hf6a66627__0, __Vtemp_hc961b8db__0, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x20000000U & __Vtemp_hf6a66627__0[2U])) {
                vlSelf->__PVT__fifoGroup_93_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_94_io_push_payload = 0U;
            __Vtemp_hc961b8db__2[0U] = 1U;
            __Vtemp_hc961b8db__2[1U] = 0U;
            __Vtemp_hc961b8db__2[2U] = 0U;
            __Vtemp_hc961b8db__2[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h89170b6c__0, __Vtemp_hc961b8db__2, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x40000000U & __Vtemp_h89170b6c__0[2U])) {
                vlSelf->__PVT__fifoGroup_94_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_95_io_push_payload = 0U;
            __Vtemp_hc961b8db__4[0U] = 1U;
            __Vtemp_hc961b8db__4[1U] = 0U;
            __Vtemp_hc961b8db__4[2U] = 0U;
            __Vtemp_hc961b8db__4[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7144608a__0, __Vtemp_hc961b8db__4, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((__Vtemp_h7144608a__0[2U] >> 0x1fU)) {
                vlSelf->__PVT__fifoGroup_95_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_96_io_push_payload = 0U;
            __Vtemp_hc961b8db__6[0U] = 1U;
            __Vtemp_hc961b8db__6[1U] = 0U;
            __Vtemp_hc961b8db__6[2U] = 0U;
            __Vtemp_hc961b8db__6[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7189b8e3__0, __Vtemp_hc961b8db__6, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((1U & __Vtemp_h7189b8e3__0[3U])) {
                vlSelf->__PVT__fifoGroup_96_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_97_io_push_payload = 0U;
            __Vtemp_hc961b8db__8[0U] = 1U;
            __Vtemp_hc961b8db__8[1U] = 0U;
            __Vtemp_hc961b8db__8[2U] = 0U;
            __Vtemp_hc961b8db__8[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h796fba44__0, __Vtemp_hc961b8db__8, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((2U & __Vtemp_h796fba44__0[3U])) {
                vlSelf->__PVT__fifoGroup_97_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_98_io_push_payload = 0U;
            __Vtemp_hc961b8db__10[0U] = 1U;
            __Vtemp_hc961b8db__10[1U] = 0U;
            __Vtemp_hc961b8db__10[2U] = 0U;
            __Vtemp_hc961b8db__10[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h7f19dec8__0, __Vtemp_hc961b8db__10, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((4U & __Vtemp_h7f19dec8__0[3U])) {
                vlSelf->__PVT__fifoGroup_98_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_99_io_push_payload = 0U;
            __Vtemp_hc961b8db__12[0U] = 1U;
            __Vtemp_hc961b8db__12[1U] = 0U;
            __Vtemp_hc961b8db__12[2U] = 0U;
            __Vtemp_hc961b8db__12[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h38440148__0, __Vtemp_hc961b8db__12, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((8U & __Vtemp_h38440148__0[3U])) {
                vlSelf->__PVT__fifoGroup_99_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_100_io_push_payload = 0U;
            __Vtemp_hc961b8db__14[0U] = 1U;
            __Vtemp_hc961b8db__14[1U] = 0U;
            __Vtemp_hc961b8db__14[2U] = 0U;
            __Vtemp_hc961b8db__14[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h8b4148cd__0, __Vtemp_hc961b8db__14, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x10U & __Vtemp_h8b4148cd__0[3U])) {
                vlSelf->__PVT__fifoGroup_100_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_101_io_push_payload = 0U;
            __Vtemp_hc961b8db__16[0U] = 1U;
            __Vtemp_hc961b8db__16[1U] = 0U;
            __Vtemp_hc961b8db__16[2U] = 0U;
            __Vtemp_hc961b8db__16[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_hd60af9f3__0, __Vtemp_hc961b8db__16, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x20U & __Vtemp_hd60af9f3__0[3U])) {
                vlSelf->__PVT__fifoGroup_101_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_102_io_push_payload = 0U;
            __Vtemp_hc961b8db__18[0U] = 1U;
            __Vtemp_hc961b8db__18[1U] = 0U;
            __Vtemp_hc961b8db__18[2U] = 0U;
            __Vtemp_hc961b8db__18[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_he58d3a6a__0, __Vtemp_hc961b8db__18, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x40U & __Vtemp_he58d3a6a__0[3U])) {
                vlSelf->__PVT__fifoGroup_102_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
            vlSelf->__PVT__fifoGroup_103_io_push_payload = 0U;
            __Vtemp_hc961b8db__20[0U] = 1U;
            __Vtemp_hc961b8db__20[1U] = 0U;
            __Vtemp_hc961b8db__20[2U] = 0U;
            __Vtemp_hc961b8db__20[3U] = 0U;
            VL_SHIFTL_WWI(128,128,7, __Vtemp_h97021cf2__0, __Vtemp_hc961b8db__20, 
                          (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
            if ((0x80U & __Vtemp_h97021cf2__0[3U])) {
                vlSelf->__PVT__fifoGroup_103_io_push_payload 
                    = vlSymsp->TOP.inputStreamArrayData_payload;
            }
        } else {
            vlSelf->__PVT__fifoGroup_94_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_95_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_96_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_97_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_98_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_99_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_100_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_101_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_102_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_103_io_push_payload = 0U;
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
                    if ((0x20000000U & __Vtemp_hc45c6cdb__0[2U])) {
                        vlSelf->__PVT__fifoGroup_93_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_94_io_push_payload = 0U;
                    __Vtemp_hc961b8db__3[0U] = 1U;
                    __Vtemp_hc961b8db__3[1U] = 0U;
                    __Vtemp_hc961b8db__3[2U] = 0U;
                    __Vtemp_hc961b8db__3[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h2d9ee4ac__0, __Vtemp_hc961b8db__3, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x40000000U & __Vtemp_h2d9ee4ac__0[2U])) {
                        vlSelf->__PVT__fifoGroup_94_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_95_io_push_payload = 0U;
                    __Vtemp_hc961b8db__5[0U] = 1U;
                    __Vtemp_hc961b8db__5[1U] = 0U;
                    __Vtemp_hc961b8db__5[2U] = 0U;
                    __Vtemp_hc961b8db__5[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h87cdd039__0, __Vtemp_hc961b8db__5, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((__Vtemp_h87cdd039__0[2U] >> 0x1fU)) {
                        vlSelf->__PVT__fifoGroup_95_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_96_io_push_payload = 0U;
                    __Vtemp_hc961b8db__7[0U] = 1U;
                    __Vtemp_hc961b8db__7[1U] = 0U;
                    __Vtemp_hc961b8db__7[2U] = 0U;
                    __Vtemp_hc961b8db__7[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9c72ed68__0, __Vtemp_hc961b8db__7, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((1U & __Vtemp_h9c72ed68__0[3U])) {
                        vlSelf->__PVT__fifoGroup_96_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_97_io_push_payload = 0U;
                    __Vtemp_hc961b8db__9[0U] = 1U;
                    __Vtemp_hc961b8db__9[1U] = 0U;
                    __Vtemp_hc961b8db__9[2U] = 0U;
                    __Vtemp_hc961b8db__9[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1d38b501__0, __Vtemp_hc961b8db__9, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((2U & __Vtemp_h1d38b501__0[3U])) {
                        vlSelf->__PVT__fifoGroup_97_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_98_io_push_payload = 0U;
                    __Vtemp_hc961b8db__11[0U] = 1U;
                    __Vtemp_hc961b8db__11[1U] = 0U;
                    __Vtemp_hc961b8db__11[2U] = 0U;
                    __Vtemp_hc961b8db__11[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha403c595__0, __Vtemp_hc961b8db__11, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((4U & __Vtemp_ha403c595__0[3U])) {
                        vlSelf->__PVT__fifoGroup_98_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_99_io_push_payload = 0U;
                    __Vtemp_hc961b8db__13[0U] = 1U;
                    __Vtemp_hc961b8db__13[1U] = 0U;
                    __Vtemp_hc961b8db__13[2U] = 0U;
                    __Vtemp_hc961b8db__13[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha08d88ec__0, __Vtemp_hc961b8db__13, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((8U & __Vtemp_ha08d88ec__0[3U])) {
                        vlSelf->__PVT__fifoGroup_99_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_100_io_push_payload = 0U;
                    __Vtemp_hc961b8db__15[0U] = 1U;
                    __Vtemp_hc961b8db__15[1U] = 0U;
                    __Vtemp_hc961b8db__15[2U] = 0U;
                    __Vtemp_hc961b8db__15[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8b12d3e4__0, __Vtemp_hc961b8db__15, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x10U & __Vtemp_h8b12d3e4__0[3U])) {
                        vlSelf->__PVT__fifoGroup_100_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_101_io_push_payload = 0U;
                    __Vtemp_hc961b8db__17[0U] = 1U;
                    __Vtemp_hc961b8db__17[1U] = 0U;
                    __Vtemp_hc961b8db__17[2U] = 0U;
                    __Vtemp_hc961b8db__17[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_hfb884992__0, __Vtemp_hc961b8db__17, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x20U & __Vtemp_hfb884992__0[3U])) {
                        vlSelf->__PVT__fifoGroup_101_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_102_io_push_payload = 0U;
                    __Vtemp_hc961b8db__19[0U] = 1U;
                    __Vtemp_hc961b8db__19[1U] = 0U;
                    __Vtemp_hc961b8db__19[2U] = 0U;
                    __Vtemp_hc961b8db__19[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h89a7e792__0, __Vtemp_hc961b8db__19, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x40U & __Vtemp_h89a7e792__0[3U])) {
                        vlSelf->__PVT__fifoGroup_102_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                    vlSelf->__PVT__fifoGroup_103_io_push_payload = 0U;
                    __Vtemp_hc961b8db__21[0U] = 1U;
                    __Vtemp_hc961b8db__21[1U] = 0U;
                    __Vtemp_hc961b8db__21[2U] = 0U;
                    __Vtemp_hc961b8db__21[3U] = 0U;
                    VL_SHIFTL_WWI(128,128,7, __Vtemp_h092a8fa7__0, __Vtemp_hc961b8db__21, 
                                  (0x7fU & (IData)(vlSelf->__PVT__selectWriteFifo)));
                    if ((0x80U & __Vtemp_h092a8fa7__0[3U])) {
                        vlSelf->__PVT__fifoGroup_103_io_push_payload 
                            = vlSymsp->TOP.inputStreamArrayData_payload;
                    }
                } else {
                    vlSelf->__PVT__fifoGroup_94_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_95_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_96_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_97_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_98_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_99_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_100_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_101_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_102_io_push_payload = 0U;
                    vlSelf->__PVT__fifoGroup_103_io_push_payload = 0U;
                }
            } else {
                vlSelf->__PVT__fifoGroup_94_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_95_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_96_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_97_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_98_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_99_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_100_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_101_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_102_io_push_payload = 0U;
                vlSelf->__PVT__fifoGroup_103_io_push_payload = 0U;
            }
        } else {
            vlSelf->__PVT__fifoGroup_94_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_95_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_96_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_97_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_98_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_99_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_100_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_101_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_102_io_push_payload = 0U;
            vlSelf->__PVT__fifoGroup_103_io_push_payload = 0U;
        }
    } else {
        vlSelf->__PVT__fifoGroup_94_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_95_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_96_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_97_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_98_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_99_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_100_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_101_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_102_io_push_payload = 0U;
        vlSelf->__PVT__fifoGroup_103_io_push_payload = 0U;
    }
}
