// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPingPongBufferWithWriteOnlyMaster.h for the primary calling header

#ifndef VERILATED_VPINGPONGBUFFERWITHWRITEONLYMASTER_STREAM2AXI4WRITEONLYMASTERINTERFACE_H_
#define VERILATED_VPINGPONGBUFFERWITHWRITEONLYMASTER_STREAM2AXI4WRITEONLYMASTERINTERFACE_H_  // guard

#include "verilated.h"

class VPingPongBufferWithWriteOnlyMaster__Syms;
VL_MODULE(VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__start,0,0);
        VL_OUT8(__PVT__transInterrupt,0,0);
        VL_IN8(__PVT__aresetn,0,0);
        VL_IN8(__PVT__aclk,0,0);
        CData/*0:0*/ __PVT___zz_4;
        CData/*0:0*/ __PVT__axi4Interface_isBurstComplete;
        VL_IN8(__PVT__burstLen,7,0);
        VL_IN8(__PVT__pathNumb,7,0);
        VL_IN8(__PVT__s_axis_valid,0,0);
        VL_OUT8(__PVT__s_axis_ready,0,0);
        VL_OUT8(__PVT__m_axi_awvalid,0,0);
        VL_IN8(__PVT__m_axi_awready,0,0);
        VL_OUT8(__PVT__m_axi_awregion,3,0);
        VL_OUT8(__PVT__m_axi_awlen,7,0);
        VL_OUT8(__PVT__m_axi_awsize,2,0);
        VL_OUT8(__PVT__m_axi_awburst,1,0);
        VL_OUT8(__PVT__m_axi_awcache,3,0);
        VL_OUT8(__PVT__m_axi_awqos,3,0);
        VL_OUT8(__PVT__m_axi_awprot,2,0);
        VL_OUT8(__PVT__m_axi_wvalid,0,0);
        VL_IN8(__PVT__m_axi_wready,0,0);
        VL_OUT8(__PVT__m_axi_wstrb,3,0);
        VL_OUT8(__PVT__m_axi_wlast,0,0);
        VL_IN8(__PVT__m_axi_bvalid,0,0);
        VL_OUT8(__PVT__m_axi_bready,0,0);
        VL_IN8(__PVT__m_axi_bresp,1,0);
        CData/*0:0*/ __PVT__streamFifo_3_io_push_valid;
        CData/*0:0*/ __PVT__streamFifo_3_io_pop_ready;
        CData/*0:0*/ __PVT__streamFifo_3_io_pop_valid;
        CData/*0:0*/ __PVT___zz_1;
        CData/*0:0*/ __PVT__m_axi_wlast_regNext;
        CData/*0:0*/ __PVT__startSendSignal;
        CData/*0:0*/ __PVT___zz_when_Axi4WriteOnlyMater_l105;
        CData/*0:0*/ __PVT___zz_5;
        CData/*7:0*/ __PVT__burstLengthReg;
        CData/*0:0*/ __PVT__when_Axi4WriteOnlyMater_l105;
        CData/*0:0*/ __PVT__axi4Interface_newBurst;
        CData/*0:0*/ __PVT__axi4Interface_controlAwValidSignal;
        CData/*0:0*/ __PVT__when_Axi4WriteOnlyMater_l131;
        CData/*0:0*/ __PVT__axi4Interface_full_aw_fire;
        CData/*7:0*/ __PVT___zz_axi4Interface_isInitialIterate_1;
        CData/*7:0*/ __PVT___zz_axi4Interface_isInitialIterate_2;
        CData/*0:0*/ axi4Interface_isInitialIterate;
        CData/*0:0*/ __PVT__axi4Interface_isRefreshAddr;
        CData/*0:0*/ __PVT__when_Axi4WriteOnlyMater_l159;
        CData/*0:0*/ __PVT__when_Axi4WriteOnlyMater_l164;
        CData/*0:0*/ __PVT__when_Axi4WriteOnlyMater_l187;
        CData/*0:0*/ __PVT__streamFifo_3_io_pop_rValid;
        CData/*0:0*/ __PVT__axi4Interface_controlBReady;
        CData/*0:0*/ __PVT__axi4Interface_full_b_fire_6;
        CData/*0:0*/ __PVT__streamFifo_3__DOT___zz_1;
        CData/*0:0*/ __PVT__streamFifo_3__DOT__logic_pushPtr_willIncrement;
        CData/*7:0*/ __PVT__streamFifo_3__DOT__logic_pushPtr_valueNext;
        CData/*7:0*/ __PVT__streamFifo_3__DOT__logic_pushPtr_value;
        CData/*0:0*/ __PVT__streamFifo_3__DOT__logic_popPtr_willIncrement;
        CData/*7:0*/ __PVT__streamFifo_3__DOT__logic_popPtr_valueNext;
        CData/*7:0*/ __PVT__streamFifo_3__DOT__logic_popPtr_value;
        CData/*0:0*/ __PVT__streamFifo_3__DOT__logic_ptrMatch;
        CData/*0:0*/ __PVT__streamFifo_3__DOT__logic_risingOccupancy;
        CData/*0:0*/ __PVT__streamFifo_3__DOT__logic_pushing;
        CData/*0:0*/ __PVT__streamFifo_3__DOT__logic_popping;
        CData/*0:0*/ __PVT__streamFifo_3__DOT__logic_full;
        CData/*0:0*/ __PVT__streamFifo_3__DOT___zz_io_pop_valid;
        SData/*8:0*/ __PVT___zz_m_axi_wlast_1;
    };
    struct {
        SData/*8:0*/ __PVT___zz_m_axi_wlast_2;
        SData/*8:0*/ __PVT___zz_when_Axi4WriteOnlyMater_l105_1;
        SData/*8:0*/ __PVT___zz_when_Axi4WriteOnlyMater_l105_2;
        VL_IN(__PVT__startAddr,31,0);
        VL_IN(__PVT__offset,31,0);
        VL_IN(__PVT__s_axis_payload,31,0);
        VL_OUT(__PVT__m_axi_awaddr,31,0);
        VL_OUT(__PVT__m_axi_wdata,31,0);
        IData/*31:0*/ __PVT__streamFifo_3_io_push_payload;
        IData/*31:0*/ __PVT__axi4Interface_transferDataType;
        IData/*31:0*/ __PVT__offsetAddressReg;
        IData/*31:0*/ __PVT__axi4Interface_finalAddressReg;
        IData/*31:0*/ __PVT__streamFifo_3_io_pop_rData;
        IData/*31:0*/ __PVT__streamFifo_3__DOT___zz_logic_ram_port0;
        VlUnpacked<IData/*31:0*/, 256> __PVT__streamFifo_3__DOT__logic_ram;
    };

    // INTERNAL VARIABLES
    VPingPongBufferWithWriteOnlyMaster__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface(const char* name);
    ~VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface();
    VL_UNCOPYABLE(VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface);

    // INTERNAL METHODS
    void __Vconfigure(VPingPongBufferWithWriteOnlyMaster__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
