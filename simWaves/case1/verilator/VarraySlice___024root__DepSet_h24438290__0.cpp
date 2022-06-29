// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VarraySlice.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VarraySlice___024root.h"

#ifdef VL_DEBUG
void VarraySlice___024root___eval_debug_assertions(VarraySlice___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->inputStreamArrayData_valid 
                     & 0xfeU))) {
        Verilated::overWidthError("inputStreamArrayData_valid");}
    if (VL_UNLIKELY((vlSelf->inputFeatureMapHeight 
                     & 0x80U))) {
        Verilated::overWidthError("inputFeatureMapHeight");}
    if (VL_UNLIKELY((vlSelf->outputFeatureMapHeight 
                     & 0xf0U))) {
        Verilated::overWidthError("outputFeatureMapHeight");}
    if (VL_UNLIKELY((vlSelf->outputFeatureMapWidth 
                     & 0xe0U))) {
        Verilated::overWidthError("outputFeatureMapWidth");}
    if (VL_UNLIKELY((vlSelf->outputStreamArrayData_0_ready 
                     & 0xfeU))) {
        Verilated::overWidthError("outputStreamArrayData_0_ready");}
    if (VL_UNLIKELY((vlSelf->outputStreamArrayData_1_ready 
                     & 0xfeU))) {
        Verilated::overWidthError("outputStreamArrayData_1_ready");}
    if (VL_UNLIKELY((vlSelf->outputStreamArrayData_2_ready 
                     & 0xfeU))) {
        Verilated::overWidthError("outputStreamArrayData_2_ready");}
    if (VL_UNLIKELY((vlSelf->outputStreamArrayData_3_ready 
                     & 0xfeU))) {
        Verilated::overWidthError("outputStreamArrayData_3_ready");}
    if (VL_UNLIKELY((vlSelf->outputStreamArrayData_4_ready 
                     & 0xfeU))) {
        Verilated::overWidthError("outputStreamArrayData_4_ready");}
    if (VL_UNLIKELY((vlSelf->outputStreamArrayData_5_ready 
                     & 0xfeU))) {
        Verilated::overWidthError("outputStreamArrayData_5_ready");}
    if (VL_UNLIKELY((vlSelf->outputStreamArrayData_6_ready 
                     & 0xfeU))) {
        Verilated::overWidthError("outputStreamArrayData_6_ready");}
    if (VL_UNLIKELY((vlSelf->outputStreamArrayData_7_ready 
                     & 0xfeU))) {
        Verilated::overWidthError("outputStreamArrayData_7_ready");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->resetn & 0xfeU))) {
        Verilated::overWidthError("resetn");}
}
#endif  // VL_DEBUG
