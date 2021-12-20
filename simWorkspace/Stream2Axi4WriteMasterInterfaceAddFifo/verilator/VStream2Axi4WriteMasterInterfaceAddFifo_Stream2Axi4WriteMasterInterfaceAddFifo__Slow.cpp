// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStream2Axi4WriteMasterInterfaceAddFifo.h for the primary calling header

#include "VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterfaceAddFifo.h" // For This
#include "VStream2Axi4WriteMasterInterfaceAddFifo__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterfaceAddFifo) {
    VL_CELL (axi4Interconnection, VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterface);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterfaceAddFifo::__Vconfigure(VStream2Axi4WriteMasterInterfaceAddFifo__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterfaceAddFifo::~VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterfaceAddFifo() {
}

//--------------------
// Internal Methods

void VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterfaceAddFifo::_settle__TOP__Stream2Axi4WriteMasterInterfaceAddFifo__1(VStream2Axi4WriteMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterfaceAddFifo::_settle__TOP__Stream2Axi4WriteMasterInterfaceAddFifo__1\n"); );
    VStream2Axi4WriteMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_ptrMatch 
	= ((IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_value) 
	   == (IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_value));
    vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_full 
	= ((IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_ptrMatch) 
	   & (IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_risingOccupancy));
    vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushing 
	= ((IData)(vlTOPp->s_axis_valid) & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_full)));
    vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance_io_pop_valid 
	= (1U & ((~ ((IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_ptrMatch) 
		     & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_risingOccupancy)))) 
		 & (~ ((IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT___zz_io_pop_valid) 
		       & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_full))))));
    // ALWAYS at /home/lqx/IdeaProjects/LicioLib/tmp/job_1/Stream2Axi4WriteMasterInterfaceAddFifo.v:224
    vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT___zz_1 = 0U;
    if (vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushing) {
	vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT___zz_1 = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/LicioLib/tmp/job_1/Stream2Axi4WriteMasterInterfaceAddFifo.v:231
    vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushing) {
	vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popping 
	= ((IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance_io_pop_valid) 
	   & (IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection.__PVT__s_axis_ready));
    // ALWAYS at /home/lqx/IdeaProjects/LicioLib/tmp/job_1/Stream2Axi4WriteMasterInterfaceAddFifo.v:247
    vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_valueNext 
	= (0xffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_value) 
		    + (IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_willIncrement)));
    // ALWAYS at /home/lqx/IdeaProjects/LicioLib/tmp/job_1/Stream2Axi4WriteMasterInterfaceAddFifo.v:254
    vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popping) {
	vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_willIncrement = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/LicioLib/tmp/job_1/Stream2Axi4WriteMasterInterfaceAddFifo.v:270
    vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_valueNext 
	= (0xffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_value) 
		    + (IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_willIncrement)));
}

void VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterfaceAddFifo::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterfaceAddFifo::_ctor_var_reset\n"); );
    // Body
    s_axis_valid = VL_RAND_RESET_I(1);
    s_axis_ready = VL_RAND_RESET_I(1);
    s_axis_payload = VL_RAND_RESET_I(32);
    m_axi_awvalid = VL_RAND_RESET_I(1);
    m_axi_awready = VL_RAND_RESET_I(1);
    m_axi_awaddr = VL_RAND_RESET_I(32);
    m_axi_awregion = VL_RAND_RESET_I(4);
    m_axi_awlen = VL_RAND_RESET_I(8);
    m_axi_awsize = VL_RAND_RESET_I(3);
    m_axi_awburst = VL_RAND_RESET_I(2);
    m_axi_awcache = VL_RAND_RESET_I(4);
    m_axi_awqos = VL_RAND_RESET_I(4);
    m_axi_awprot = VL_RAND_RESET_I(3);
    m_axi_wvalid = VL_RAND_RESET_I(1);
    m_axi_wready = VL_RAND_RESET_I(1);
    m_axi_wdata = VL_RAND_RESET_I(32);
    m_axi_wstrb = VL_RAND_RESET_I(4);
    m_axi_wlast = VL_RAND_RESET_I(1);
    m_axi_bvalid = VL_RAND_RESET_I(1);
    m_axi_bready = VL_RAND_RESET_I(1);
    m_axi_bresp = VL_RAND_RESET_I(2);
    m_axi_arvalid = VL_RAND_RESET_I(1);
    m_axi_arready = VL_RAND_RESET_I(1);
    m_axi_araddr = VL_RAND_RESET_I(32);
    m_axi_arregion = VL_RAND_RESET_I(4);
    m_axi_arlen = VL_RAND_RESET_I(8);
    m_axi_arsize = VL_RAND_RESET_I(3);
    m_axi_arburst = VL_RAND_RESET_I(2);
    m_axi_arcache = VL_RAND_RESET_I(4);
    m_axi_arqos = VL_RAND_RESET_I(4);
    m_axi_arprot = VL_RAND_RESET_I(3);
    m_axi_rvalid = VL_RAND_RESET_I(1);
    m_axi_rready = VL_RAND_RESET_I(1);
    m_axi_rdata = VL_RAND_RESET_I(32);
    m_axi_rresp = VL_RAND_RESET_I(2);
    m_axi_rlast = VL_RAND_RESET_I(1);
    aresetn = VL_RAND_RESET_I(1);
    aclk = VL_RAND_RESET_I(1);
    __PVT__fifoInstance_io_pop_valid = VL_RAND_RESET_I(1);
    __PVT__fifoInstance__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(32);
    __PVT__fifoInstance__DOT___zz_1 = VL_RAND_RESET_I(1);
    __PVT__fifoInstance__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    __PVT__fifoInstance__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(8);
    __PVT__fifoInstance__DOT__logic_pushPtr_value = VL_RAND_RESET_I(8);
    __PVT__fifoInstance__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    __PVT__fifoInstance__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(8);
    __PVT__fifoInstance__DOT__logic_popPtr_value = VL_RAND_RESET_I(8);
    __PVT__fifoInstance__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    __PVT__fifoInstance__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    __PVT__fifoInstance__DOT__logic_pushing = VL_RAND_RESET_I(1);
    __PVT__fifoInstance__DOT__logic_popping = VL_RAND_RESET_I(1);
    __PVT__fifoInstance__DOT__logic_full = VL_RAND_RESET_I(1);
    __PVT__fifoInstance__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
	    __PVT__fifoInstance__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __Vdlyvdim0__fifoInstance__DOT__logic_ram__v0 = VL_RAND_RESET_I(8);
    __Vdlyvval__fifoInstance__DOT__logic_ram__v0 = VL_RAND_RESET_I(32);
    __Vdlyvset__fifoInstance__DOT__logic_ram__v0 = VL_RAND_RESET_I(1);
}
