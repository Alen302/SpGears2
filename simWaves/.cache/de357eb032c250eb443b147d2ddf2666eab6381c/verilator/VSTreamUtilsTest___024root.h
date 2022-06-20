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
    VL_OUT8(dataIn_ready,0,0);
    VL_IN8(dataIn_payload_a,7,0);
    VL_IN8(dataIn_payload_b,0,0);
    VL_IN8(baseIn,7,0);
    VL_OUT8(dataOut_valid,0,0);
    VL_IN8(dataOut_ready,0,0);
    VL_OUT8(dataOut_payload_a,7,0);
    VL_OUT8(dataOut_payload_b,0,0);
    VL_OUT8(baseOut,7,0);
    VL_OUT8(bOut,0,0);
    CData/*0:0*/ STreamUtilsTest__DOT__ini;
    CData/*0:0*/ STreamUtilsTest__DOT__dataIn_s2mPipe_ready;
    CData/*0:0*/ STreamUtilsTest__DOT__dataIn_rValid;
    CData/*7:0*/ STreamUtilsTest__DOT__dataIn_rData_a;
    CData/*0:0*/ STreamUtilsTest__DOT__dataIn_rData_b;
    CData/*0:0*/ STreamUtilsTest__DOT__dataIn_s2mPipe_rValid;
    CData/*7:0*/ STreamUtilsTest__DOT__dataIn_s2mPipe_rData_a;
    CData/*0:0*/ STreamUtilsTest__DOT__dataIn_s2mPipe_rData_b;
    CData/*7:0*/ STreamUtilsTest__DOT__baseIn_regNext;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

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
