// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VarraySlice.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VarraySlice_arraySlice.h"

extern const VlUnpacked<VlWide<4>/*103:0*/, 4> VarraySlice__ConstPool__TABLE_ha28af564_0;

VL_ATTR_COLD void VarraySlice_arraySlice___settle__TOP__arraySlice__366(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__366\n"); );
    // Init
    CData/*1:0*/ __Vtableidx2;
    // Body
    vlSelf->outputStreamArrayData_7_valid = 0U;
    if ((1U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l369_7) {
                if (vlSelf->__PVT__when_ArraySlice_l370_7) {
                    vlSelf->outputStreamArrayData_7_valid 
                        = vlSelf->__PVT___zz_outputStreamArrayData_7_valid_2;
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_7)))) {
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l410_7))) {
                        vlSelf->outputStreamArrayData_7_valid = 1U;
                    }
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l439_7) {
                vlSelf->outputStreamArrayData_7_valid = 1U;
            }
        } else if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l369_7) {
                if (vlSelf->__PVT__when_ArraySlice_l229_7) {
                    vlSelf->outputStreamArrayData_7_valid 
                        = vlSelf->__PVT___zz_outputStreamArrayData_7_valid_4;
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_7)))) {
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l269_7))) {
                        vlSelf->outputStreamArrayData_7_valid = 1U;
                    }
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l439_7) {
                vlSelf->outputStreamArrayData_7_valid = 1U;
            }
        }
    }
    __Vtableidx2 = vlSelf->__PVT__arraySliceStateMachine_stateNext;
    vlSelf->__PVT__arraySliceStateMachine_stateNext_string[0U] 
        = VarraySlice__ConstPool__TABLE_ha28af564_0
        [__Vtableidx2][0U];
    vlSelf->__PVT__arraySliceStateMachine_stateNext_string[1U] 
        = VarraySlice__ConstPool__TABLE_ha28af564_0
        [__Vtableidx2][1U];
    vlSelf->__PVT__arraySliceStateMachine_stateNext_string[2U] 
        = VarraySlice__ConstPool__TABLE_ha28af564_0
        [__Vtableidx2][2U];
    vlSelf->__PVT__arraySliceStateMachine_stateNext_string[3U] 
        = VarraySlice__ConstPool__TABLE_ha28af564_0
        [__Vtableidx2][3U];
    vlSelf->__PVT__fifoGroup_0__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_0_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_0__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_1__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_1_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_1__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_2__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_2_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_2__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_3__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_3_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_3__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_4__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_4_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_4__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_5__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_5_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_5__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_6__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_6_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_6__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_7__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_7_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_7__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_8__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_8_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_8__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_9__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_9_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_9__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_10__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_10_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_10__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_11__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_11_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_11__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_12__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_12_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_12__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_13__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_13_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_13__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_14__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_14_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_14__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_15__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_15_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_15__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_16__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_16_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_16__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_17__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_17_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_17__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_18__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_18_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_18__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_19__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_19_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_19__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_20__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_20_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_20__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_21__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_21_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_21__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_22__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_22_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_22__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_23__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_23_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_23__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_24__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_24_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_24__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_25__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_25_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_25__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_26__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_26_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_26__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_27__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_27_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_27__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_28__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_28_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_28__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_29__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_29_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_29__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_30__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_30_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_30__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_31__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_31_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_31__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_32__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_32_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_32__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_33__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_33_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_33__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_34__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_34_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_34__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_35__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_35_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_35__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_36__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_36_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_36__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_37__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_37_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_37__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_38__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_38_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_38__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_39__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_39_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_39__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_40__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_40_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_40__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_41__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_41_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_41__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_42__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_42_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_42__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_43__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_43_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_43__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_44__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_44_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_44__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_45__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_45_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_45__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_46__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_46_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_46__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_47__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_47_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_47__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_48__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_48_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_48__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_49__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_49_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_49__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_50__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_50_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_50__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_51__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_51_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_51__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_52__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_52_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_52__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_53__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_53_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_53__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_54__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_54_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_54__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_55__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_55_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_55__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_56__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_56_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_56__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_57__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_57_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_57__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_58__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_58_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_58__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_59__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_59_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_59__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_60__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_60_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_60__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_61__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_61_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_61__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_62__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_62_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_62__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_63__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_63_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_63__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_64__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_64_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_64__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_65__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_65_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_65__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_66__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_66_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_66__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_67__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_67_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_67__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_68__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_68_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_68__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_69__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_69_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_69__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_70__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_70_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_70__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_71__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_71_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_71__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_72__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_72_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_72__DOT__logic_full)));
}

VL_ATTR_COLD void VarraySlice_arraySlice___settle__TOP__arraySlice__370(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__370\n"); );
    // Body
    vlSelf->__PVT__fifoGroup_3__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_3__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_3__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_4__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_4__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_4__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_4__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_4__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_4__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_5__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_5__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_5__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_5__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_5__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_5__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_6__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_6__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_6__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_6__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_6__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_6__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_7__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_7__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_7__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_7__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_7__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_7__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_8__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_8__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_8__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_8__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_8__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_8__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_9__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_9__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_9__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_9__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_9__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_9__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_10__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_10__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_10__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_10__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_10__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_10__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_11__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_11__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_11__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_11__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_11__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_11__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_12__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_12__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_12__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_12__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_12__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_12__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_13__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_13__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_13__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_13__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_13__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_13__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_14__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_14__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_14__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_14__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_14__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_14__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_15__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_15__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_15__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_15__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_15__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_15__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_16__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_16__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_16__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_16__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_16__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_16__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_17__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_17__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_17__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_17__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_17__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_17__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_18__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_18__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_18__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_18__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_18__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_18__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_19__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_19__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_19__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_19__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_19__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_19__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_20__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_20__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_20__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_20__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_20__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_20__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_21__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_21__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_21__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_21__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_21__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_21__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_22__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_22__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_22__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_22__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_22__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_22__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_23__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_23__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_23__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_23__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_23__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_23__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_24__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_24__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_24__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_24__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_24__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_24__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_25__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_25__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_25__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_25__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_25__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_25__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_26__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_26__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_26__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_26__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_26__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_26__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_27__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_27__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_27__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_27__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_27__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_27__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_28__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_28__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_28__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_28__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_28__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_28__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_29__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_29__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_29__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_29__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_29__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_29__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_30__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_30__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_30__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_30__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_30__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_30__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_31__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_31__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_31__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_31__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_31__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_31__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_32__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_32__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_32__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_32__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_32__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_32__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_33__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_33__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_33__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_33__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_33__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_33__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_34__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_34__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_34__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_34__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_34__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_34__DOT__logic_pushPtr_willIncrement = 0U;
    }
}

VL_ATTR_COLD void VarraySlice_arraySlice___settle__TOP__arraySlice__371(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__371\n"); );
    // Body
    vlSelf->__PVT__fifoGroup_35__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_35__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_35__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_35__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_35__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_35__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_36__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_36__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_36__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_36__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_36__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_36__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_37__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_37__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_37__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_37__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_37__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_37__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_38__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_38__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_38__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_38__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_38__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_38__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_39__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_39__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_39__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_39__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_39__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_39__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_40__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_40__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_40__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_40__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_40__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_40__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_41__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_41__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_41__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_41__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_41__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_41__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_42__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_42__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_42__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_42__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_42__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_42__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_43__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_43__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_43__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_43__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_43__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_43__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_44__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_44__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_44__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_44__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_44__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_44__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_45__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_45__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_45__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_45__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_45__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_45__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_46__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_46__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_46__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_46__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_46__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_46__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_47__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_47__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_47__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_47__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_47__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_47__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_48__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_48__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_48__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_48__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_48__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_48__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_49__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_49__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_49__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_49__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_49__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_49__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_50__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_50__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_50__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_50__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_50__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_50__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_51__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_51__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_51__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_51__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_51__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_51__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_52__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_52__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_52__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_52__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_52__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_52__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_53__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_53__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_53__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_53__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_53__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_53__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_54__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_54__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_54__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_54__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_54__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_54__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_55__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_55__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_55__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_55__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_55__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_55__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_56__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_56__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_56__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_56__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_56__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_56__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_57__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_57__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_57__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_57__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_57__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_57__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_58__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_58__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_58__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_58__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_58__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_58__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_59__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_59__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_59__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_59__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_59__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_59__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_60__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_60__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_60__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_60__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_60__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_60__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_61__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_61__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_61__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_61__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_61__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_61__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_62__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_62__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_62__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_62__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_62__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_62__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_63__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_63__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_63__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_63__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_63__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_63__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_64__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_64__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_64__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_64__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_64__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_64__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_65__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_65__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_65__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_65__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_65__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_65__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_66__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_66__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_66__DOT___zz_1 = 1U;
    }
}

VL_ATTR_COLD void VarraySlice_arraySlice___settle__TOP__arraySlice__372(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__372\n"); );
    // Body
    vlSelf->__PVT__fifoGroup_66__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_66__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_66__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_67__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_67__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_67__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_67__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_67__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_67__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_68__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_68__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_68__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_68__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_68__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_68__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_69__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_69__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_69__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_69__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_69__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_69__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_70__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_70__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_70__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_70__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_70__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_70__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_71__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_71__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_71__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_71__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_71__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_71__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_72__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_72__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_72__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_72__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_72__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_72__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_73__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_73__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_73__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_73__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_73__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_73__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_74__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_74__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_74__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_74__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_74__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_74__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_75__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_75__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_75__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_75__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_75__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_75__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_76__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_76__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_76__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_76__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_76__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_76__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_77__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_77__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_77__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_77__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_77__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_77__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_78__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_78__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_78__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_78__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_78__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_78__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_79__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_79__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_79__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_79__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_79__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_79__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_80__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_80__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_80__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_80__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_80__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_80__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_81__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_81__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_81__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_81__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_81__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_81__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_82__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_82__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_82__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_82__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_82__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_82__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_83__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_83__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_83__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_83__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_83__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_83__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_84__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_84__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_84__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_84__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_84__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_84__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_85__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_85__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_85__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_85__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_85__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_85__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_86__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_86__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_86__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_86__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_86__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_86__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_87__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_87__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_87__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_87__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_87__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_87__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_88__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_88__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_88__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_88__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_88__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_88__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_89__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_89__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_89__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_89__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_89__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_89__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_90__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_90__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_90__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_90__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_90__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_90__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_91__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_91__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_91__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_91__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_91__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_91__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_92__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_92__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_92__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_92__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_92__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_92__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_93__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_93__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_93__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_93__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_93__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_93__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_94__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_94__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_94__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_94__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_94__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_94__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_95__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_95__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_95__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_95__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_95__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_95__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_96__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_96__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_96__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_96__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_96__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_96__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_97__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_97__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_97__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_97__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_97__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_97__DOT__logic_pushPtr_willIncrement = 0U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 64> VarraySlice__ConstPool__TABLE_h5206a6da_0;

VL_ATTR_COLD void VarraySlice_arraySlice___settle__TOP__arraySlice__373(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__373\n"); );
    // Init
    CData/*5:0*/ __Vtableidx3;
    // Body
    vlSelf->__PVT__fifoGroup_98__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_98__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_98__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_98__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_98__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_98__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_99__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_99__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_99__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_99__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_99__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_99__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_100__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_100__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_100__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_100__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_100__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_100__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_101__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_101__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_101__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_101__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_101__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_101__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_102__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_102__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_102__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_102__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_102__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_102__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_103__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_103__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_103__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_103__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_103__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_103__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_104__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_104__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_104__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_104__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_104__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_104__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_105__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_105__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_105__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_105__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_105__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_105__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_106__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_106__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_106__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_106__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_106__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_106__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_107__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_107__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_107__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_107__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_107__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_107__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_108__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_108__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_108__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_108__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_108__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_108__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_109__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_109__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_109__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_109__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_109__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_109__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_110__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_110__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_110__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_110__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_110__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_110__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_111__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_111__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_111__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_111__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_111__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_111__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_112__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_112__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_112__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_112__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_112__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_112__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_113__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_113__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_113__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_113__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_113__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_113__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_114__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_114__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_114__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_114__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_114__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_114__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_115__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_115__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_115__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_115__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_115__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_115__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_116__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_116__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_116__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_116__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_116__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_116__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_117__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_117__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_117__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_117__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_117__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_117__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_118__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_118__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_118__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_118__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_118__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_118__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_119__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_119__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_119__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_119__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_119__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_119__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_120__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_120__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_120__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_120__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_120__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_120__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_121__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_121__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_121__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_121__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_121__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_121__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_122__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_122__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_122__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_122__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_122__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_122__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_123__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_123__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_123__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_123__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_123__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_123__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_124__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_124__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_124__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_124__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_124__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_124__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_125__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_125__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_125__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_125__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_125__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_125__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_126__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_126__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_126__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_126__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_126__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_126__DOT__logic_pushPtr_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_127__DOT___zz_1 = 0U;
    if (vlSelf->__PVT__fifoGroup_127__DOT__logic_pushing) {
        vlSelf->__PVT__fifoGroup_127__DOT___zz_1 = 1U;
        vlSelf->__PVT__fifoGroup_127__DOT__logic_pushPtr_willIncrement = 0U;
        vlSelf->__PVT__fifoGroup_127__DOT__logic_pushPtr_willIncrement = 1U;
    } else {
        vlSelf->__PVT__fifoGroup_127__DOT__logic_pushPtr_willIncrement = 0U;
    }
    __Vtableidx3 = (((IData)(vlSelf->__PVT__when_ArraySlice_l318) 
                     << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_0_fire_13) 
                                << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l459) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__outputStreamArrayData_0_fire_6) 
                                            << 2U) 
                                           | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_0_willIncrement = 
        VarraySlice__ConstPool__TABLE_h5206a6da_0[__Vtableidx3];
    vlSelf->__Vtableidx4 = (((IData)(vlSelf->__PVT__when_ArraySlice_l318) 
                             << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_0_fire_13) 
                                        << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l459) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->__PVT__outputStreamArrayData_0_fire_6) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
}

extern const VlUnpacked<CData/*0:0*/, 64> VarraySlice__ConstPool__TABLE_hf0fb746f_0;

VL_ATTR_COLD void VarraySlice_arraySlice___settle__TOP__arraySlice__374(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__374\n"); );
    // Init
    CData/*5:0*/ __Vtableidx5;
    CData/*5:0*/ __Vtableidx6;
    CData/*5:0*/ __Vtableidx7;
    CData/*5:0*/ __Vtableidx8;
    // Body
    vlSelf->__PVT__handshakeTimes_0_willClear = VarraySlice__ConstPool__TABLE_hf0fb746f_0
        [vlSelf->__Vtableidx4];
    vlSelf->__PVT__outSliceNumb_0_willClear = 0U;
    if ((1U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l369) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_0)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l385) {
                        if (vlSelf->__PVT__when_ArraySlice_l377) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l388)))) {
                                vlSelf->__PVT__outSliceNumb_0_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l410))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l413)))) {
                                vlSelf->__PVT__outSliceNumb_0_willClear = 1U;
                            }
                        }
                    }
                    vlSelf->__PVT__outSliceNumb_0_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l376) {
                        if (vlSelf->__PVT__when_ArraySlice_l377) {
                            vlSelf->__PVT__outSliceNumb_0_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l385) {
                        if (vlSelf->__PVT__when_ArraySlice_l377) {
                            if (vlSelf->__PVT__when_ArraySlice_l388) {
                                vlSelf->__PVT__outSliceNumb_0_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l410))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411) {
                            if (vlSelf->__PVT__when_ArraySlice_l413) {
                                vlSelf->__PVT__outSliceNumb_0_willIncrement = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_0_willIncrement = 0U;
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l439) {
                if (vlSelf->__PVT__when_ArraySlice_l411) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l442)))) {
                        vlSelf->__PVT__outSliceNumb_0_willClear = 1U;
                    }
                    vlSelf->__PVT__outSliceNumb_0_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l442) {
                        vlSelf->__PVT__outSliceNumb_0_willIncrement = 1U;
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_0_willIncrement = 0U;
                }
            } else {
                vlSelf->__PVT__outSliceNumb_0_willIncrement = 0U;
            }
        } else if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l369) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_0)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l244) {
                        if (vlSelf->__PVT__when_ArraySlice_l377) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l247)))) {
                                vlSelf->__PVT__outSliceNumb_0_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l269))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l272)))) {
                                vlSelf->__PVT__outSliceNumb_0_willClear = 1U;
                            }
                        }
                    }
                    vlSelf->__PVT__outSliceNumb_0_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l235) {
                        if (vlSelf->__PVT__when_ArraySlice_l377) {
                            vlSelf->__PVT__outSliceNumb_0_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l244) {
                        if (vlSelf->__PVT__when_ArraySlice_l377) {
                            if (vlSelf->__PVT__when_ArraySlice_l247) {
                                vlSelf->__PVT__outSliceNumb_0_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l269))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411) {
                            if (vlSelf->__PVT__when_ArraySlice_l272) {
                                vlSelf->__PVT__outSliceNumb_0_willIncrement = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_0_willIncrement = 0U;
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l439) {
                if (vlSelf->__PVT__when_ArraySlice_l411) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l301)))) {
                        vlSelf->__PVT__outSliceNumb_0_willClear = 1U;
                    }
                    vlSelf->__PVT__outSliceNumb_0_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l301) {
                        vlSelf->__PVT__outSliceNumb_0_willIncrement = 1U;
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_0_willIncrement = 0U;
                }
            } else {
                vlSelf->__PVT__outSliceNumb_0_willIncrement = 0U;
            }
        } else {
            vlSelf->__PVT__outSliceNumb_0_willIncrement = 0U;
        }
    } else {
        vlSelf->__PVT__outSliceNumb_0_willIncrement = 0U;
    }
    __Vtableidx5 = (((IData)(vlSelf->__PVT__when_ArraySlice_l318_1) 
                     << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_1_fire_13) 
                                << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l459_1) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__outputStreamArrayData_1_fire_6) 
                                            << 2U) 
                                           | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_1_willIncrement = 
        VarraySlice__ConstPool__TABLE_h5206a6da_0[__Vtableidx5];
    __Vtableidx6 = (((IData)(vlSelf->__PVT__when_ArraySlice_l318_1) 
                     << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_1_fire_13) 
                                << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l459_1) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__outputStreamArrayData_1_fire_6) 
                                            << 2U) 
                                           | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_1_willClear = VarraySlice__ConstPool__TABLE_hf0fb746f_0
        [__Vtableidx6];
    vlSelf->__PVT__outSliceNumb_1_willClear = 0U;
    if ((1U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l369_1) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_1)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l385_1) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_1) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l388_1)))) {
                                vlSelf->__PVT__outSliceNumb_1_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l410_1_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411_1) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l413_1)))) {
                                vlSelf->__PVT__outSliceNumb_1_willClear = 1U;
                            }
                        }
                    }
                    vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l376_1) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_1) {
                            vlSelf->__PVT__outSliceNumb_1_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l385_1) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_1) {
                            if (vlSelf->__PVT__when_ArraySlice_l388_1) {
                                vlSelf->__PVT__outSliceNumb_1_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l410_1_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411_1) {
                            if (vlSelf->__PVT__when_ArraySlice_l413_1) {
                                vlSelf->__PVT__outSliceNumb_1_willIncrement = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l439_1) {
                if (vlSelf->__PVT__when_ArraySlice_l411_1) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l442_1)))) {
                        vlSelf->__PVT__outSliceNumb_1_willClear = 1U;
                    }
                    vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l442_1) {
                        vlSelf->__PVT__outSliceNumb_1_willIncrement = 1U;
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
                }
            } else {
                vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
            }
        } else if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l369_1) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_1)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l244_1) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_1) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l247_1)))) {
                                vlSelf->__PVT__outSliceNumb_1_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l269_1_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411_1) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l272_1)))) {
                                vlSelf->__PVT__outSliceNumb_1_willClear = 1U;
                            }
                        }
                    }
                    vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l235_1) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_1) {
                            vlSelf->__PVT__outSliceNumb_1_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l244_1) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_1) {
                            if (vlSelf->__PVT__when_ArraySlice_l247_1) {
                                vlSelf->__PVT__outSliceNumb_1_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l269_1_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411_1) {
                            if (vlSelf->__PVT__when_ArraySlice_l272_1) {
                                vlSelf->__PVT__outSliceNumb_1_willIncrement = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l439_1) {
                if (vlSelf->__PVT__when_ArraySlice_l411_1) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l301_1)))) {
                        vlSelf->__PVT__outSliceNumb_1_willClear = 1U;
                    }
                    vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l301_1) {
                        vlSelf->__PVT__outSliceNumb_1_willIncrement = 1U;
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
                }
            } else {
                vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
            }
        } else {
            vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
        }
    } else {
        vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
    }
    __Vtableidx7 = (((IData)(vlSelf->__PVT__when_ArraySlice_l318_2) 
                     << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_2_fire_13) 
                                << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l459_2) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__outputStreamArrayData_2_fire_6) 
                                            << 2U) 
                                           | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_2_willIncrement = 
        VarraySlice__ConstPool__TABLE_h5206a6da_0[__Vtableidx7];
    __Vtableidx8 = (((IData)(vlSelf->__PVT__when_ArraySlice_l318_2) 
                     << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_2_fire_13) 
                                << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l459_2) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__outputStreamArrayData_2_fire_6) 
                                            << 2U) 
                                           | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_2_willClear = VarraySlice__ConstPool__TABLE_hf0fb746f_0
        [__Vtableidx8];
    vlSelf->__PVT__outSliceNumb_2_willClear = 0U;
    if ((1U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l369_2) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_2)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l385_2) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_2) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l388_2)))) {
                                vlSelf->__PVT__outSliceNumb_2_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l410_2_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411_2) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l413_2)))) {
                                vlSelf->__PVT__outSliceNumb_2_willClear = 1U;
                            }
                        }
                    }
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l439_2) {
                if (vlSelf->__PVT__when_ArraySlice_l411_2) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l442_2)))) {
                        vlSelf->__PVT__outSliceNumb_2_willClear = 1U;
                    }
                }
            }
        } else if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l369_2) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_2)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l244_2) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_2) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l247_2)))) {
                                vlSelf->__PVT__outSliceNumb_2_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l269_2_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411_2) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l272_2)))) {
                                vlSelf->__PVT__outSliceNumb_2_willClear = 1U;
                            }
                        }
                    }
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l439_2) {
                if (vlSelf->__PVT__when_ArraySlice_l411_2) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l301_2)))) {
                        vlSelf->__PVT__outSliceNumb_2_willClear = 1U;
                    }
                }
            }
        }
    }
}

VL_ATTR_COLD void VarraySlice_arraySlice___settle__TOP__arraySlice__375(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__375\n"); );
    // Init
    CData/*5:0*/ __Vtableidx9;
    CData/*5:0*/ __Vtableidx10;
    CData/*5:0*/ __Vtableidx11;
    CData/*5:0*/ __Vtableidx12;
    // Body
    vlSelf->__PVT__outSliceNumb_2_willIncrement = 0U;
    if ((1U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l369_2) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_2)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l376_2) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_2) {
                            vlSelf->__PVT__outSliceNumb_2_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l385_2) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_2) {
                            if (vlSelf->__PVT__when_ArraySlice_l388_2) {
                                vlSelf->__PVT__outSliceNumb_2_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l410_2_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411_2) {
                            if (vlSelf->__PVT__when_ArraySlice_l413_2) {
                                vlSelf->__PVT__outSliceNumb_2_willIncrement = 1U;
                            }
                        }
                    }
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l439_2) {
                if (vlSelf->__PVT__when_ArraySlice_l411_2) {
                    if (vlSelf->__PVT__when_ArraySlice_l442_2) {
                        vlSelf->__PVT__outSliceNumb_2_willIncrement = 1U;
                    }
                }
            }
        } else if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l369_2) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_2)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l235_2) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_2) {
                            vlSelf->__PVT__outSliceNumb_2_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l244_2) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_2) {
                            if (vlSelf->__PVT__when_ArraySlice_l247_2) {
                                vlSelf->__PVT__outSliceNumb_2_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l269_2_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411_2) {
                            if (vlSelf->__PVT__when_ArraySlice_l272_2) {
                                vlSelf->__PVT__outSliceNumb_2_willIncrement = 1U;
                            }
                        }
                    }
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l439_2) {
                if (vlSelf->__PVT__when_ArraySlice_l411_2) {
                    if (vlSelf->__PVT__when_ArraySlice_l301_2) {
                        vlSelf->__PVT__outSliceNumb_2_willIncrement = 1U;
                    }
                }
            }
        }
    }
    __Vtableidx9 = (((IData)(vlSelf->__PVT__when_ArraySlice_l318_3) 
                     << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_3_fire_13) 
                                << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l459_3) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__outputStreamArrayData_3_fire_6) 
                                            << 2U) 
                                           | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_3_willIncrement = 
        VarraySlice__ConstPool__TABLE_h5206a6da_0[__Vtableidx9];
    __Vtableidx10 = (((IData)(vlSelf->__PVT__when_ArraySlice_l318_3) 
                      << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_3_fire_13) 
                                 << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l459_3) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__outputStreamArrayData_3_fire_6) 
                                               << 2U) 
                                              | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_3_willClear = VarraySlice__ConstPool__TABLE_hf0fb746f_0
        [__Vtableidx10];
    vlSelf->__PVT__outSliceNumb_3_willClear = 0U;
    if ((1U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l369_3) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_3)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l385_3) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_3) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l388_3)))) {
                                vlSelf->__PVT__outSliceNumb_3_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l410_3_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411_3) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l413_3)))) {
                                vlSelf->__PVT__outSliceNumb_3_willClear = 1U;
                            }
                        }
                    }
                    vlSelf->__PVT__outSliceNumb_3_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l376_3) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_3) {
                            vlSelf->__PVT__outSliceNumb_3_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l385_3) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_3) {
                            if (vlSelf->__PVT__when_ArraySlice_l388_3) {
                                vlSelf->__PVT__outSliceNumb_3_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l410_3_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411_3) {
                            if (vlSelf->__PVT__when_ArraySlice_l413_3) {
                                vlSelf->__PVT__outSliceNumb_3_willIncrement = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_3_willIncrement = 0U;
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l439_3) {
                if (vlSelf->__PVT__when_ArraySlice_l411_3) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l442_3)))) {
                        vlSelf->__PVT__outSliceNumb_3_willClear = 1U;
                    }
                    vlSelf->__PVT__outSliceNumb_3_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l442_3) {
                        vlSelf->__PVT__outSliceNumb_3_willIncrement = 1U;
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_3_willIncrement = 0U;
                }
            } else {
                vlSelf->__PVT__outSliceNumb_3_willIncrement = 0U;
            }
        } else if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l369_3) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_3)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l244_3) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_3) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l247_3)))) {
                                vlSelf->__PVT__outSliceNumb_3_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l269_3_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411_3) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l272_3)))) {
                                vlSelf->__PVT__outSliceNumb_3_willClear = 1U;
                            }
                        }
                    }
                    vlSelf->__PVT__outSliceNumb_3_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l235_3) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_3) {
                            vlSelf->__PVT__outSliceNumb_3_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l244_3) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_3) {
                            if (vlSelf->__PVT__when_ArraySlice_l247_3) {
                                vlSelf->__PVT__outSliceNumb_3_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l269_3_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411_3) {
                            if (vlSelf->__PVT__when_ArraySlice_l272_3) {
                                vlSelf->__PVT__outSliceNumb_3_willIncrement = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_3_willIncrement = 0U;
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l439_3) {
                if (vlSelf->__PVT__when_ArraySlice_l411_3) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l301_3)))) {
                        vlSelf->__PVT__outSliceNumb_3_willClear = 1U;
                    }
                    vlSelf->__PVT__outSliceNumb_3_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l301_3) {
                        vlSelf->__PVT__outSliceNumb_3_willIncrement = 1U;
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_3_willIncrement = 0U;
                }
            } else {
                vlSelf->__PVT__outSliceNumb_3_willIncrement = 0U;
            }
        } else {
            vlSelf->__PVT__outSliceNumb_3_willIncrement = 0U;
        }
    } else {
        vlSelf->__PVT__outSliceNumb_3_willIncrement = 0U;
    }
    __Vtableidx11 = (((IData)(vlSelf->__PVT__when_ArraySlice_l318_4) 
                      << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_4_fire_13) 
                                 << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l459_4) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__outputStreamArrayData_4_fire_6) 
                                               << 2U) 
                                              | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_4_willIncrement = 
        VarraySlice__ConstPool__TABLE_h5206a6da_0[__Vtableidx11];
    __Vtableidx12 = (((IData)(vlSelf->__PVT__when_ArraySlice_l318_4) 
                      << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_4_fire_13) 
                                 << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l459_4) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__outputStreamArrayData_4_fire_6) 
                                               << 2U) 
                                              | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_4_willClear = VarraySlice__ConstPool__TABLE_hf0fb746f_0
        [__Vtableidx12];
    vlSelf->__PVT__outSliceNumb_4_willClear = 0U;
    if ((1U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l369_4) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_4)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l385_4) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_4) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l388_4)))) {
                                vlSelf->__PVT__outSliceNumb_4_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l410_4_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411_4) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l413_4)))) {
                                vlSelf->__PVT__outSliceNumb_4_willClear = 1U;
                            }
                        }
                    }
                    vlSelf->__PVT__outSliceNumb_4_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l376_4) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_4) {
                            vlSelf->__PVT__outSliceNumb_4_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l385_4) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_4) {
                            if (vlSelf->__PVT__when_ArraySlice_l388_4) {
                                vlSelf->__PVT__outSliceNumb_4_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l410_4_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411_4) {
                            if (vlSelf->__PVT__when_ArraySlice_l413_4) {
                                vlSelf->__PVT__outSliceNumb_4_willIncrement = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_4_willIncrement = 0U;
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l439_4) {
                if (vlSelf->__PVT__when_ArraySlice_l411_4) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l442_4)))) {
                        vlSelf->__PVT__outSliceNumb_4_willClear = 1U;
                    }
                    vlSelf->__PVT__outSliceNumb_4_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l442_4) {
                        vlSelf->__PVT__outSliceNumb_4_willIncrement = 1U;
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_4_willIncrement = 0U;
                }
            } else {
                vlSelf->__PVT__outSliceNumb_4_willIncrement = 0U;
            }
        } else if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l369_4) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_4)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l244_4) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_4) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l247_4)))) {
                                vlSelf->__PVT__outSliceNumb_4_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l269_4_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411_4) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l272_4)))) {
                                vlSelf->__PVT__outSliceNumb_4_willClear = 1U;
                            }
                        }
                    }
                    vlSelf->__PVT__outSliceNumb_4_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l235_4) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_4) {
                            vlSelf->__PVT__outSliceNumb_4_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l244_4) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_4) {
                            if (vlSelf->__PVT__when_ArraySlice_l247_4) {
                                vlSelf->__PVT__outSliceNumb_4_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l269_4_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411_4) {
                            if (vlSelf->__PVT__when_ArraySlice_l272_4) {
                                vlSelf->__PVT__outSliceNumb_4_willIncrement = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_4_willIncrement = 0U;
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l439_4) {
                if (vlSelf->__PVT__when_ArraySlice_l411_4) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l301_4)))) {
                        vlSelf->__PVT__outSliceNumb_4_willClear = 1U;
                    }
                    vlSelf->__PVT__outSliceNumb_4_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l301_4) {
                        vlSelf->__PVT__outSliceNumb_4_willIncrement = 1U;
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_4_willIncrement = 0U;
                }
            } else {
                vlSelf->__PVT__outSliceNumb_4_willIncrement = 0U;
            }
        } else {
            vlSelf->__PVT__outSliceNumb_4_willIncrement = 0U;
        }
    } else {
        vlSelf->__PVT__outSliceNumb_4_willIncrement = 0U;
    }
}

VL_ATTR_COLD void VarraySlice_arraySlice___settle__TOP__arraySlice__376(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__376\n"); );
    // Init
    CData/*5:0*/ __Vtableidx13;
    CData/*5:0*/ __Vtableidx14;
    CData/*5:0*/ __Vtableidx15;
    CData/*5:0*/ __Vtableidx16;
    // Body
    __Vtableidx13 = (((IData)(vlSelf->__PVT__when_ArraySlice_l318_5) 
                      << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_5_fire_13) 
                                 << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l459_5) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__outputStreamArrayData_5_fire_6) 
                                               << 2U) 
                                              | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_5_willIncrement = 
        VarraySlice__ConstPool__TABLE_h5206a6da_0[__Vtableidx13];
    __Vtableidx14 = (((IData)(vlSelf->__PVT__when_ArraySlice_l318_5) 
                      << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_5_fire_13) 
                                 << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l459_5) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__outputStreamArrayData_5_fire_6) 
                                               << 2U) 
                                              | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_5_willClear = VarraySlice__ConstPool__TABLE_hf0fb746f_0
        [__Vtableidx14];
    vlSelf->__PVT__outSliceNumb_5_willClear = 0U;
    if ((1U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l369_5) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_5)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l385_5) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_5) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l388_5)))) {
                                vlSelf->__PVT__outSliceNumb_5_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l410_5))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411_5) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l413_5)))) {
                                vlSelf->__PVT__outSliceNumb_5_willClear = 1U;
                            }
                        }
                    }
                    vlSelf->__PVT__outSliceNumb_5_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l376_5) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_5) {
                            vlSelf->__PVT__outSliceNumb_5_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l385_5) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_5) {
                            if (vlSelf->__PVT__when_ArraySlice_l388_5) {
                                vlSelf->__PVT__outSliceNumb_5_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l410_5))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411_5) {
                            if (vlSelf->__PVT__when_ArraySlice_l413_5) {
                                vlSelf->__PVT__outSliceNumb_5_willIncrement = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_5_willIncrement = 0U;
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l439_5) {
                if (vlSelf->__PVT__when_ArraySlice_l411_5) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l442_5)))) {
                        vlSelf->__PVT__outSliceNumb_5_willClear = 1U;
                    }
                    vlSelf->__PVT__outSliceNumb_5_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l442_5) {
                        vlSelf->__PVT__outSliceNumb_5_willIncrement = 1U;
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_5_willIncrement = 0U;
                }
            } else {
                vlSelf->__PVT__outSliceNumb_5_willIncrement = 0U;
            }
        } else if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l369_5) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_5)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l244_5) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_5) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l247_5)))) {
                                vlSelf->__PVT__outSliceNumb_5_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l269_5))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411_5) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l272_5)))) {
                                vlSelf->__PVT__outSliceNumb_5_willClear = 1U;
                            }
                        }
                    }
                    vlSelf->__PVT__outSliceNumb_5_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l235_5) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_5) {
                            vlSelf->__PVT__outSliceNumb_5_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l244_5) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_5) {
                            if (vlSelf->__PVT__when_ArraySlice_l247_5) {
                                vlSelf->__PVT__outSliceNumb_5_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l269_5))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411_5) {
                            if (vlSelf->__PVT__when_ArraySlice_l272_5) {
                                vlSelf->__PVT__outSliceNumb_5_willIncrement = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_5_willIncrement = 0U;
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l439_5) {
                if (vlSelf->__PVT__when_ArraySlice_l411_5) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l301_5)))) {
                        vlSelf->__PVT__outSliceNumb_5_willClear = 1U;
                    }
                    vlSelf->__PVT__outSliceNumb_5_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l301_5) {
                        vlSelf->__PVT__outSliceNumb_5_willIncrement = 1U;
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_5_willIncrement = 0U;
                }
            } else {
                vlSelf->__PVT__outSliceNumb_5_willIncrement = 0U;
            }
        } else {
            vlSelf->__PVT__outSliceNumb_5_willIncrement = 0U;
        }
    } else {
        vlSelf->__PVT__outSliceNumb_5_willIncrement = 0U;
    }
    __Vtableidx15 = (((IData)(vlSelf->__PVT__when_ArraySlice_l318_6) 
                      << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_6_fire_13) 
                                 << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l459_6) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__outputStreamArrayData_6_fire_6) 
                                               << 2U) 
                                              | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_6_willIncrement = 
        VarraySlice__ConstPool__TABLE_h5206a6da_0[__Vtableidx15];
    __Vtableidx16 = (((IData)(vlSelf->__PVT__when_ArraySlice_l318_6) 
                      << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_6_fire_13) 
                                 << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l459_6) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__outputStreamArrayData_6_fire_6) 
                                               << 2U) 
                                              | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_6_willClear = VarraySlice__ConstPool__TABLE_hf0fb746f_0
        [__Vtableidx16];
    vlSelf->__PVT__outSliceNumb_6_willClear = 0U;
    if ((1U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l369_6) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_6)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l385_6) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_6) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l388_6)))) {
                                vlSelf->__PVT__outSliceNumb_6_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l410_6))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411_6) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l413_6)))) {
                                vlSelf->__PVT__outSliceNumb_6_willClear = 1U;
                            }
                        }
                    }
                    vlSelf->__PVT__outSliceNumb_6_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l376_6) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_6) {
                            vlSelf->__PVT__outSliceNumb_6_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l385_6) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_6) {
                            if (vlSelf->__PVT__when_ArraySlice_l388_6) {
                                vlSelf->__PVT__outSliceNumb_6_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l410_6))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411_6) {
                            if (vlSelf->__PVT__when_ArraySlice_l413_6) {
                                vlSelf->__PVT__outSliceNumb_6_willIncrement = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_6_willIncrement = 0U;
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l439_6) {
                if (vlSelf->__PVT__when_ArraySlice_l411_6) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l442_6)))) {
                        vlSelf->__PVT__outSliceNumb_6_willClear = 1U;
                    }
                    vlSelf->__PVT__outSliceNumb_6_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l442_6) {
                        vlSelf->__PVT__outSliceNumb_6_willIncrement = 1U;
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_6_willIncrement = 0U;
                }
            } else {
                vlSelf->__PVT__outSliceNumb_6_willIncrement = 0U;
            }
        } else if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l369_6) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_6)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l244_6) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_6) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l247_6)))) {
                                vlSelf->__PVT__outSliceNumb_6_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l269_6))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411_6) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l272_6)))) {
                                vlSelf->__PVT__outSliceNumb_6_willClear = 1U;
                            }
                        }
                    }
                    vlSelf->__PVT__outSliceNumb_6_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l235_6) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_6) {
                            vlSelf->__PVT__outSliceNumb_6_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l244_6) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_6) {
                            if (vlSelf->__PVT__when_ArraySlice_l247_6) {
                                vlSelf->__PVT__outSliceNumb_6_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l269_6))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411_6) {
                            if (vlSelf->__PVT__when_ArraySlice_l272_6) {
                                vlSelf->__PVT__outSliceNumb_6_willIncrement = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_6_willIncrement = 0U;
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l439_6) {
                if (vlSelf->__PVT__when_ArraySlice_l411_6) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l301_6)))) {
                        vlSelf->__PVT__outSliceNumb_6_willClear = 1U;
                    }
                    vlSelf->__PVT__outSliceNumb_6_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l301_6) {
                        vlSelf->__PVT__outSliceNumb_6_willIncrement = 1U;
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_6_willIncrement = 0U;
                }
            } else {
                vlSelf->__PVT__outSliceNumb_6_willIncrement = 0U;
            }
        } else {
            vlSelf->__PVT__outSliceNumb_6_willIncrement = 0U;
        }
    } else {
        vlSelf->__PVT__outSliceNumb_6_willIncrement = 0U;
    }
    vlSelf->__PVT__fifoGroup_0__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_0__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_0__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_1__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_1__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_1__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_2__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_2__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_2__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_3__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_3__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_3__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_4__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_4__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_4__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_5__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_5__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_5__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_6__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_6__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_6__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_7__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_7__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_7__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_8__DOT__logic_popPtr_willIncrement = 0U;
}

VL_ATTR_COLD void VarraySlice_arraySlice___settle__TOP__arraySlice__377(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__377\n"); );
    // Body
    if (vlSelf->__PVT__fifoGroup_8__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_8__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_9__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_9__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_9__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_10__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_10__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_10__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_11__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_11__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_11__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_12__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_12__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_12__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_13__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_13__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_13__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_14__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_14__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_14__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_15__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_15__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_15__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_16__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_16__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_16__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_17__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_17__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_17__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_18__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_18__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_18__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_19__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_19__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_19__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_20__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_20__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_20__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_21__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_21__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_21__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_22__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_22__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_22__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_23__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_23__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_23__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_24__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_24__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_24__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_25__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_25__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_25__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_26__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_26__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_26__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_27__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_27__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_27__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_28__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_28__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_28__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_29__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_29__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_29__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_30__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_30__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_30__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_31__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_31__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_31__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_32__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_32__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_32__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_33__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_33__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_33__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_34__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_34__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_34__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_35__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_35__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_35__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_36__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_36__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_36__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_37__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_37__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_37__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_38__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_38__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_38__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_39__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_39__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_39__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_40__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_40__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_40__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_41__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_41__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_41__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_42__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_42__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_42__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_43__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_43__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_43__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_44__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_44__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_44__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_45__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_45__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_45__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_46__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_46__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_46__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_47__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_47__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_47__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_48__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_48__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_48__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_49__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_49__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_49__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_50__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_50__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_50__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_51__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_51__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_51__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_52__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_52__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_52__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_53__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_53__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_53__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_54__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_54__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_54__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_55__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_55__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_55__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_56__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_56__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_56__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_57__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_57__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_57__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_58__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_58__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_58__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_59__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_59__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_59__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_60__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_60__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_60__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_61__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_61__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_61__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_62__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_62__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_62__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_63__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_63__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_63__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_64__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_64__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_64__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_65__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_65__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_65__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_66__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_66__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_66__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_67__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_67__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_67__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_68__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_68__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_68__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_69__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_69__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_69__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSelf->__PVT__fifoGroup_70__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSelf->__PVT__fifoGroup_70__DOT__logic_popping) {
        vlSelf->__PVT__fifoGroup_70__DOT__logic_popPtr_willIncrement = 1U;
    }
}
