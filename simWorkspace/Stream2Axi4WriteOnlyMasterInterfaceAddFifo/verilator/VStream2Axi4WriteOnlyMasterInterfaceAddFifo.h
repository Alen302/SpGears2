// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VSTREAM2AXI4WRITEONLYMASTERINTERFACEADDFIFO_H_
#define _VSTREAM2AXI4WRITEONLYMASTERINTERFACEADDFIFO_H_  // guard

#include "verilated.h"
#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Dpi.h"

//==========

class VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms;
class VStream2Axi4WriteOnlyMasterInterfaceAddFifo_VerilatedVcd;
class VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo;


//----------

VL_MODULE(VStream2Axi4WriteOnlyMasterInterfaceAddFifo) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo* Stream2Axi4WriteOnlyMasterInterfaceAddFifo;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(aresetn,0,0);
    VL_IN8(start,0,0);
    VL_IN8(aclk,0,0);
    VL_IN8(s_axis_valid,0,0);
    VL_OUT8(s_axis_ready,0,0);
    VL_OUT8(m_axi_awvalid,0,0);
    VL_IN8(m_axi_awready,0,0);
    VL_OUT8(m_axi_awregion,3,0);
    VL_OUT8(m_axi_awlen,7,0);
    VL_OUT8(m_axi_awsize,2,0);
    VL_OUT8(m_axi_awburst,1,0);
    VL_OUT8(m_axi_awcache,3,0);
    VL_OUT8(m_axi_awqos,3,0);
    VL_OUT8(m_axi_awprot,2,0);
    VL_OUT8(m_axi_wvalid,0,0);
    VL_IN8(m_axi_wready,0,0);
    VL_OUT8(m_axi_wstrb,3,0);
    VL_OUT8(m_axi_wlast,0,0);
    VL_IN8(m_axi_bvalid,0,0);
    VL_OUT8(m_axi_bready,0,0);
    VL_IN8(m_axi_bresp,1,0);
    VL_IN8(burstLen,7,0);
    VL_IN8(pathNumb,7,0);
    VL_OUT8(transInterrupt,0,0);
    VL_IN(s_axis_payload,31,0);
    VL_OUT(m_axi_awaddr,31,0);
    VL_OUT(m_axi_wdata,31,0);
    VL_IN(startAddr,31,0);
    VL_IN(offset,31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __VinpClk__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection____PVT___zz_4;
    CData/*0:0*/ __Vclklast__TOP__aclk;
    CData/*0:0*/ __Vclklast__TOP__aresetn;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection____PVT___zz_4;
    CData/*0:0*/ __Vclklast__TOP__start;
    CData/*0:0*/ __Vchglast__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection___zz_4;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VStream2Axi4WriteOnlyMasterInterfaceAddFifo);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VStream2Axi4WriteOnlyMasterInterfaceAddFifo();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* symsp, bool first);
  private:
    static QData _change_request(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
    static QData _change_request_1(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _multiclk__TOP__6(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__5(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceChgThis(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__11(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__12(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
