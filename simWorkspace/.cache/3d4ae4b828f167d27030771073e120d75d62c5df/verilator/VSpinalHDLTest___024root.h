// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSpinalHDLTest.h for the primary calling header

#ifndef VERILATED_VSPINALHDLTEST___024ROOT_H_
#define VERILATED_VSPINALHDLTEST___024ROOT_H_  // guard

#include "verilated.h"

class VSpinalHDLTest__Syms;
VL_MODULE(VSpinalHDLTest___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(io_in1,7,0);
    VL_IN8(io_in2,7,0);
    VL_OUT8(io_out1,7,0);
    VL_OUT8(io_out2,5,0);
    VL_OUT8(io_out3,5,0);
    VL_OUT8(io_out4,5,0);
    VL_OUT8(io_out5,5,0);

    // INTERNAL VARIABLES
    VSpinalHDLTest__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VSpinalHDLTest___024root(const char* name);
    ~VSpinalHDLTest___024root();
    VL_UNCOPYABLE(VSpinalHDLTest___024root);

    // INTERNAL METHODS
    void __Vconfigure(VSpinalHDLTest__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
