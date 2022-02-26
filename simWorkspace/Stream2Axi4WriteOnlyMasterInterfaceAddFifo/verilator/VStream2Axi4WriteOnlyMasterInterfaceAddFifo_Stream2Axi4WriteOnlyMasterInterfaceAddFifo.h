// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VStream2Axi4WriteOnlyMasterInterfaceAddFifo.h for the primary calling header

#ifndef _VSTREAM2AXI4WRITEONLYMASTERINTERFACEADDFIFO_STREAM2AXI4WRITEONLYMASTERINTERFACEADDFIFO_H_
#define _VSTREAM2AXI4WRITEONLYMASTERINTERFACEADDFIFO_STREAM2AXI4WRITEONLYMASTERINTERFACEADDFIFO_H_  // guard

#include "verilated.h"
#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Dpi.h"

//==========

class VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms;
class VStream2Axi4WriteOnlyMasterInterfaceAddFifo_VerilatedVcd;
class VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface;


//----------

VL_MODULE(VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo) {
  public:
    // CELLS
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface* axi4Interconnection;
    
    // PORTS
    VL_IN8(aresetn,0,0);
    VL_IN8(aclk,0,0);
    VL_IN8(s_axis_valid,0,0);
    VL_OUT8(s_axis_ready,0,0);
    VL_OUT8(m_axi_awvalid,0,0);
    VL_IN8(m_axi_awready,0,0);
    VL_OUT8(__PVT__m_axi_awregion,3,0);
    VL_OUT8(m_axi_awlen,7,0);
    VL_OUT8(__PVT__m_axi_awsize,2,0);
    VL_OUT8(__PVT__m_axi_awburst,1,0);
    VL_OUT8(__PVT__m_axi_awcache,3,0);
    VL_OUT8(__PVT__m_axi_awqos,3,0);
    VL_OUT8(__PVT__m_axi_awprot,2,0);
    VL_OUT8(m_axi_wvalid,0,0);
    VL_IN8(m_axi_wready,0,0);
    VL_OUT8(__PVT__m_axi_wstrb,3,0);
    VL_OUT8(m_axi_wlast,0,0);
    VL_IN8(m_axi_bvalid,0,0);
    VL_OUT8(m_axi_bready,0,0);
    VL_IN8(m_axi_bresp,1,0);
    VL_IN8(start,0,0);
    VL_IN8(burstLen,7,0);
    VL_IN8(pathNumb,7,0);
    VL_OUT8(transInterrupt,0,0);
    VL_IN(s_axis_payload,31,0);
    VL_OUT(m_axi_awaddr,31,0);
    VL_OUT(m_axi_wdata,31,0);
    VL_IN(startAddr,31,0);
    VL_IN(offset,31,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__fifoInstance_io_pop_valid;
    CData/*0:0*/ __PVT__fifoInstance__DOT___zz_1;
    CData/*0:0*/ __PVT__fifoInstance__DOT__logic_pushPtr_willIncrement;
    CData/*7:0*/ __PVT__fifoInstance__DOT__logic_pushPtr_valueNext;
    CData/*7:0*/ __PVT__fifoInstance__DOT__logic_pushPtr_value;
    CData/*0:0*/ __PVT__fifoInstance__DOT__logic_popPtr_willIncrement;
    CData/*7:0*/ __PVT__fifoInstance__DOT__logic_popPtr_valueNext;
    CData/*7:0*/ __PVT__fifoInstance__DOT__logic_popPtr_value;
    CData/*0:0*/ __PVT__fifoInstance__DOT__logic_ptrMatch;
    CData/*0:0*/ __PVT__fifoInstance__DOT__logic_risingOccupancy;
    CData/*0:0*/ __PVT__fifoInstance__DOT__logic_pushing;
    CData/*0:0*/ __PVT__fifoInstance__DOT__logic_popping;
    CData/*0:0*/ __PVT__fifoInstance__DOT__logic_full;
    CData/*0:0*/ __PVT__fifoInstance__DOT___zz_io_pop_valid;
    IData/*31:0*/ __PVT__fifoInstance__DOT___zz_logic_ram_port0;
    IData/*31:0*/ __PVT__fifoInstance__DOT__logic_ram[256];
    
    // INTERNAL VARIABLES
  private:
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo);  ///< Copying not allowed
  public:
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo(const char* name = "TOP");
    ~VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo();
    
    // INTERNAL METHODS
    void __Vconfigure(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* symsp, bool first);
    static void _combo__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__4(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _multiclk__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__5(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__1(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__2(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
    static void _settle__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__3(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
