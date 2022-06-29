// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VSuperResolutionPart1__Syms.h"
#include "VSuperResolutionPart1.h"
#include "VSuperResolutionPart1___024root.h"

// FUNCTIONS
VSuperResolutionPart1__Syms::~VSuperResolutionPart1__Syms()
{
}

VSuperResolutionPart1__Syms::VSuperResolutionPart1__Syms(VerilatedContext* contextp, const char* namep,VSuperResolutionPart1* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
}
