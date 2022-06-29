// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSuperResolutionPart1.h for the primary calling header

#include "verilated.h"

#include "VSuperResolutionPart1__Syms.h"
#include "VSuperResolutionPart1___024root.h"

void VSuperResolutionPart1___024root___ctor_var_reset(VSuperResolutionPart1___024root* vlSelf);

VSuperResolutionPart1___024root::VSuperResolutionPart1___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VSuperResolutionPart1___024root___ctor_var_reset(this);
}

void VSuperResolutionPart1___024root::__Vconfigure(VSuperResolutionPart1__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VSuperResolutionPart1___024root::~VSuperResolutionPart1___024root() {
}
