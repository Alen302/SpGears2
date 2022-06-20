// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSTreamUtilsTest.h for the primary calling header

#ifndef VERILATED_VSTREAMUTILSTEST___024ROOT_H_
#define VERILATED_VSTREAMUTILSTEST___024ROOT_H_  // guard

#include "verilated.h"

class VSTreamUtilsTest__Syms;
VL_MODULE(VSTreamUtilsTest___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(dataIn_valid,0,0);
    VL_IN8(dataIn_payload_0,7,0);
    VL_IN8(dataIn_payload_1,7,0);
    VL_OUT8(dataOut_valid,0,0);
    VL_OUT8(dataOut_payload_0,7,0);
    VL_OUT8(dataOut_payload_1,7,0);
    CData/*0:0*/ STreamUtilsTest__DOT__dataIn_regNext_valid;
    CData/*7:0*/ STreamUtilsTest__DOT__dataIn_regNext_payload_0;
    CData/*7:0*/ STreamUtilsTest__DOT__dataIn_regNext_payload_1;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;

    // INTERNAL VARIABLES
    VSTreamUtilsTest__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VSTreamUtilsTest___024root(const char* name);
    ~VSTreamUtilsTest___024root();
    VL_UNCOPYABLE(VSTreamUtilsTest___024root);

    // INTERNAL METHODS
    void __Vconfigure(VSTreamUtilsTest__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
