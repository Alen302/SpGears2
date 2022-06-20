// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VarraySlice.h for the primary calling header

#ifndef VERILATED_VARRAYSLICE___024ROOT_H_
#define VERILATED_VARRAYSLICE___024ROOT_H_  // guard

#include "verilated.h"

class VarraySlice__Syms;
class VarraySlice_arraySlice;

VL_MODULE(VarraySlice___024root) {
  public:
    // CELLS
    VarraySlice_arraySlice* arraySlice;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(resetn,0,0);
    VL_IN8(inputStreamArrayData_valid,0,0);
    VL_OUT8(inputStreamArrayData_ready,0,0);
    VL_IN8(inputFeatureMapWidth,7,0);
    VL_IN8(inputFeatureMapHeight,5,0);
    VL_IN8(outputFeatureMapHeight,2,0);
    VL_IN8(outputFeatureMapWidth,4,0);
    VL_OUT8(outputStreamArrayData_0_valid,0,0);
    VL_IN8(outputStreamArrayData_0_ready,0,0);
    VL_OUT8(outputStreamArrayData_1_valid,0,0);
    VL_IN8(outputStreamArrayData_1_ready,0,0);
    VL_OUT8(outputStreamArrayData_2_valid,0,0);
    VL_IN8(outputStreamArrayData_2_ready,0,0);
    VL_OUT8(outputStreamArrayData_3_valid,0,0);
    VL_IN8(outputStreamArrayData_3_ready,0,0);
    VL_OUT8(outputStreamArrayData_4_valid,0,0);
    VL_IN8(outputStreamArrayData_4_ready,0,0);
    VL_OUT8(outputStreamArrayData_5_valid,0,0);
    VL_IN8(outputStreamArrayData_5_ready,0,0);
    VL_OUT8(outputStreamArrayData_6_valid,0,0);
    VL_IN8(outputStreamArrayData_6_ready,0,0);
    VL_OUT8(outputStreamArrayData_7_valid,0,0);
    VL_IN8(outputStreamArrayData_7_ready,0,0);
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__resetn;
    VL_IN(inputStreamArrayData_payload,31,0);
    VL_OUT(outputStreamArrayData_0_payload,31,0);
    VL_OUT(outputStreamArrayData_1_payload,31,0);
    VL_OUT(outputStreamArrayData_2_payload,31,0);
    VL_OUT(outputStreamArrayData_3_payload,31,0);
    VL_OUT(outputStreamArrayData_4_payload,31,0);
    VL_OUT(outputStreamArrayData_5_payload,31,0);
    VL_OUT(outputStreamArrayData_6_payload,31,0);
    VL_OUT(outputStreamArrayData_7_payload,31,0);
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VarraySlice__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VarraySlice___024root(const char* name);
    ~VarraySlice___024root();
    VL_UNCOPYABLE(VarraySlice___024root);

    // INTERNAL METHODS
    void __Vconfigure(VarraySlice__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
