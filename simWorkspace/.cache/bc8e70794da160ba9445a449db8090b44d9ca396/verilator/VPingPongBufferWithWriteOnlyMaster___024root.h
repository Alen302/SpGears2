// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPingPongBufferWithWriteOnlyMaster.h for the primary calling header

#ifndef VERILATED_VPINGPONGBUFFERWITHWRITEONLYMASTER___024ROOT_H_
#define VERILATED_VPINGPONGBUFFERWITHWRITEONLYMASTER___024ROOT_H_  // guard

#include "verilated.h"

class VPingPongBufferWithWriteOnlyMaster__Syms;
class VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster;

VL_MODULE(VPingPongBufferWithWriteOnlyMaster___024root) {
  public:
    // CELLS
    VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster* PingPongBufferWithWriteOnlyMaster;

    // DESIGN SPECIFIC STATE
    VL_IN8(startIn,0,0);
    VL_IN8(aresetn,0,0);
    VL_IN8(aclk,0,0);
    VL_IN8(streamIn_valid,0,0);
    VL_OUT8(streamIn_ready,0,0);
    VL_IN8(bufferDepthIn,7,0);
    VL_OUT8(interruptOut,0,0);
    VL_IN8(pathNumb,7,0);
    VL_OUT8(full_aw_valid,0,0);
    VL_IN8(full_aw_ready,0,0);
    VL_OUT8(full_aw_payload_region,3,0);
    VL_OUT8(full_aw_payload_len,7,0);
    VL_OUT8(full_aw_payload_size,2,0);
    VL_OUT8(full_aw_payload_burst,1,0);
    VL_OUT8(full_aw_payload_cache,3,0);
    VL_OUT8(full_aw_payload_qos,3,0);
    VL_OUT8(full_aw_payload_prot,2,0);
    VL_OUT8(full_w_valid,0,0);
    VL_IN8(full_w_ready,0,0);
    VL_OUT8(full_w_payload_strb,3,0);
    VL_OUT8(full_w_payload_last,0,0);
    VL_IN8(full_b_valid,0,0);
    VL_OUT8(full_b_ready,0,0);
    VL_IN8(full_b_payload_resp,1,0);
    CData/*0:0*/ __VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__pingPongBuffer_1__DOT___zz_1;
    CData/*0:0*/ __VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater____PVT__axi4Interface_isBurstComplete;
    CData/*0:0*/ __VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__pingPongBuffer_1__DOT___zz_2;
    CData/*0:0*/ __VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater____PVT___zz_4;
    CData/*0:0*/ __VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__pingPongBuffer_1__DOT__outputStartSignalReg;
    CData/*0:0*/ __Vclklast__TOP__aclk;
    CData/*0:0*/ __Vclklast__TOP__aresetn;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__pingPongBuffer_1__DOT___zz_1;
    CData/*0:0*/ __Vclklast__TOP__startIn;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater____PVT__axi4Interface_isBurstComplete;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__pingPongBuffer_1__DOT___zz_2;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater____PVT___zz_4;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__PingPongBufferWithWriteOnlyMaster____PVT__pingPongBuffer_1__DOT__outputStartSignalReg;
    CData/*0:0*/ __Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__DOT___zz_1;
    CData/*0:0*/ __Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__DOT___zz_2;
    CData/*0:0*/ __Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__pingPongBuffer_1__DOT__outputStartSignalReg;
    CData/*0:0*/ __Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater___zz_4;
    CData/*0:0*/ __Vchglast__TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater__axi4Interface_isBurstComplete;
    VL_IN(streamIn_payload,31,0);
    VL_IN(startAddr,31,0);
    VL_IN(offset,31,0);
    VL_OUT(full_aw_payload_addr,31,0);
    VL_OUT(full_w_payload_data,31,0);
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VPingPongBufferWithWriteOnlyMaster__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VPingPongBufferWithWriteOnlyMaster___024root(const char* name);
    ~VPingPongBufferWithWriteOnlyMaster___024root();
    VL_UNCOPYABLE(VPingPongBufferWithWriteOnlyMaster___024root);

    // INTERNAL METHODS
    void __Vconfigure(VPingPongBufferWithWriteOnlyMaster__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
