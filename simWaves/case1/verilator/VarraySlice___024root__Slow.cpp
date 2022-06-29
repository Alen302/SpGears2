// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VarraySlice.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VarraySlice__Syms.h"
#include "VarraySlice___024root.h"

void VarraySlice___024root___ctor_var_reset(VarraySlice___024root* vlSelf);

VarraySlice___024root::VarraySlice___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VarraySlice___024root___ctor_var_reset(this);
}

void VarraySlice___024root::__Vconfigure(VarraySlice__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VarraySlice___024root::~VarraySlice___024root() {
}
