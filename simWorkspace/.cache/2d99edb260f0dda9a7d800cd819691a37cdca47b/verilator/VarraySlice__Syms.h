// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VARRAYSLICE__SYMS_H_
#define VERILATED_VARRAYSLICE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VarraySlice.h"

// INCLUDE MODULE CLASSES
#include "VarraySlice___024root.h"
#include "VarraySlice_arraySlice.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class VarraySlice__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VarraySlice* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VarraySlice___024root          TOP;
    VarraySlice_arraySlice         TOP__arraySlice;

    // SCOPE NAMES
    VerilatedScope __Vscope_arraySlice;

    // CONSTRUCTORS
    VarraySlice__Syms(VerilatedContext* contextp, const char* namep, VarraySlice* modelp);
    ~VarraySlice__Syms();
    void VarraySlice__Syms_1(int __Vfinal);

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
