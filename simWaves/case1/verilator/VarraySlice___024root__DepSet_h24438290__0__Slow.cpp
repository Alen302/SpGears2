// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VarraySlice.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VarraySlice___024root.h"

VL_ATTR_COLD void VarraySlice___024root___eval_initial(VarraySlice___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = (1U & (~ (IData)(vlSelf->clk)));
    vlSelf->__Vclklast__TOP__resetn = (1U & (~ (IData)(vlSelf->resetn)));
}

VL_ATTR_COLD void VarraySlice___024root___final(VarraySlice___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root___final\n"); );
}

VL_ATTR_COLD void VarraySlice___024root___ctor_var_reset(VarraySlice___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->inputStreamArrayData_valid = VL_RAND_RESET_I(1);
    vlSelf->inputStreamArrayData_ready = VL_RAND_RESET_I(1);
    vlSelf->inputStreamArrayData_payload = VL_RAND_RESET_I(32);
    vlSelf->inputFeatureMapWidth = VL_RAND_RESET_I(8);
    vlSelf->inputFeatureMapHeight = VL_RAND_RESET_I(7);
    vlSelf->outputFeatureMapHeight = VL_RAND_RESET_I(4);
    vlSelf->outputFeatureMapWidth = VL_RAND_RESET_I(5);
    vlSelf->outputStreamArrayData_0_valid = VL_RAND_RESET_I(1);
    vlSelf->outputStreamArrayData_0_ready = VL_RAND_RESET_I(1);
    vlSelf->outputStreamArrayData_0_payload = VL_RAND_RESET_I(32);
    vlSelf->outputStreamArrayData_1_valid = VL_RAND_RESET_I(1);
    vlSelf->outputStreamArrayData_1_ready = VL_RAND_RESET_I(1);
    vlSelf->outputStreamArrayData_1_payload = VL_RAND_RESET_I(32);
    vlSelf->outputStreamArrayData_2_valid = VL_RAND_RESET_I(1);
    vlSelf->outputStreamArrayData_2_ready = VL_RAND_RESET_I(1);
    vlSelf->outputStreamArrayData_2_payload = VL_RAND_RESET_I(32);
    vlSelf->outputStreamArrayData_3_valid = VL_RAND_RESET_I(1);
    vlSelf->outputStreamArrayData_3_ready = VL_RAND_RESET_I(1);
    vlSelf->outputStreamArrayData_3_payload = VL_RAND_RESET_I(32);
    vlSelf->outputStreamArrayData_4_valid = VL_RAND_RESET_I(1);
    vlSelf->outputStreamArrayData_4_ready = VL_RAND_RESET_I(1);
    vlSelf->outputStreamArrayData_4_payload = VL_RAND_RESET_I(32);
    vlSelf->outputStreamArrayData_5_valid = VL_RAND_RESET_I(1);
    vlSelf->outputStreamArrayData_5_ready = VL_RAND_RESET_I(1);
    vlSelf->outputStreamArrayData_5_payload = VL_RAND_RESET_I(32);
    vlSelf->outputStreamArrayData_6_valid = VL_RAND_RESET_I(1);
    vlSelf->outputStreamArrayData_6_ready = VL_RAND_RESET_I(1);
    vlSelf->outputStreamArrayData_6_payload = VL_RAND_RESET_I(32);
    vlSelf->outputStreamArrayData_7_valid = VL_RAND_RESET_I(1);
    vlSelf->outputStreamArrayData_7_ready = VL_RAND_RESET_I(1);
    vlSelf->outputStreamArrayData_7_payload = VL_RAND_RESET_I(32);
    vlSelf->clk = 0;
    vlSelf->resetn = 0;
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
