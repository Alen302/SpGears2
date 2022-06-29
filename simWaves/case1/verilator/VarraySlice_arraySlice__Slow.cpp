// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VarraySlice.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VarraySlice__Syms.h"
#include "VarraySlice_arraySlice.h"

void VarraySlice_arraySlice___ctor_var_reset(VarraySlice_arraySlice* vlSelf);

VarraySlice_arraySlice::VarraySlice_arraySlice(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VarraySlice_arraySlice___ctor_var_reset(this);
}

void VarraySlice_arraySlice::__Vconfigure(VarraySlice__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VarraySlice_arraySlice::~VarraySlice_arraySlice() {
}
