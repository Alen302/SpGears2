// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStream2Axi4WriteMasterInterfaceAddFifo.h for the primary calling header

#include "VStream2Axi4WriteMasterInterfaceAddFifo.h" // For This
#include "VStream2Axi4WriteMasterInterfaceAddFifo__Syms.h"

#include "verilated_dpi.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VStream2Axi4WriteMasterInterfaceAddFifo) {
    VStream2Axi4WriteMasterInterfaceAddFifo__Syms* __restrict vlSymsp = __VlSymsp = new VStream2Axi4WriteMasterInterfaceAddFifo__Syms(this, name());
    VStream2Axi4WriteMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL (Stream2Axi4WriteMasterInterfaceAddFifo, VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterfaceAddFifo);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VStream2Axi4WriteMasterInterfaceAddFifo::__Vconfigure(VStream2Axi4WriteMasterInterfaceAddFifo__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VStream2Axi4WriteMasterInterfaceAddFifo::~VStream2Axi4WriteMasterInterfaceAddFifo() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VStream2Axi4WriteMasterInterfaceAddFifo::_settle__TOP__1(VStream2Axi4WriteMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteMasterInterfaceAddFifo::_settle__TOP__1\n"); );
    VStream2Axi4WriteMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->m_axi_awregion = 0U;
    vlTOPp->m_axi_awlen = 0xffU;
    vlTOPp->m_axi_awsize = 2U;
    vlTOPp->m_axi_awburst = 1U;
    vlTOPp->m_axi_awcache = 0U;
    vlTOPp->m_axi_awqos = 0U;
    vlTOPp->m_axi_awprot = 0U;
    vlTOPp->m_axi_wstrb = 0xfU;
    vlTOPp->m_axi_arvalid = 0U;
    vlTOPp->m_axi_araddr = 0U;
    vlTOPp->m_axi_arregion = 0U;
    vlTOPp->m_axi_arlen = 0xffU;
    vlTOPp->m_axi_arsize = 4U;
    vlTOPp->m_axi_arburst = 1U;
    vlTOPp->m_axi_arcache = 0U;
    vlTOPp->m_axi_arqos = 0U;
    vlTOPp->m_axi_arprot = 0U;
    vlTOPp->m_axi_rready = 0U;
    vlTOPp->m_axi_awvalid = vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_controlAwValid;
    vlTOPp->m_axi_wlast = (0xffU == (IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_m_axi_wdata_2));
    vlTOPp->m_axi_bready = vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_controlBReady;
    vlTOPp->m_axi_awaddr = ((0x100U == (IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_m_axi_wdata_2))
			     ? vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection.axi4Interface_address
			     : vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_initialAddress);
}

void VStream2Axi4WriteMasterInterfaceAddFifo::_settle__TOP__2(VStream2Axi4WriteMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteMasterInterfaceAddFifo::_settle__TOP__2\n"); );
    VStream2Axi4WriteMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->m_axi_wvalid = vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wvalid;
    vlTOPp->m_axi_wdata = vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wdata;
    vlTOPp->s_axis_ready = (1U & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_full)));
}

void VStream2Axi4WriteMasterInterfaceAddFifo::_eval_initial(VStream2Axi4WriteMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteMasterInterfaceAddFifo::_eval_initial\n"); );
    VStream2Axi4WriteMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VStream2Axi4WriteMasterInterfaceAddFifo::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteMasterInterfaceAddFifo::final\n"); );
    // Variables
    VStream2Axi4WriteMasterInterfaceAddFifo__Syms* __restrict vlSymsp = this->__VlSymsp;
    VStream2Axi4WriteMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VStream2Axi4WriteMasterInterfaceAddFifo::_eval_settle(VStream2Axi4WriteMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteMasterInterfaceAddFifo::_eval_settle\n"); );
    VStream2Axi4WriteMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection._settle__TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection__1(vlSymsp);
    vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection._settle__TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection__2(vlSymsp);
    vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo._settle__TOP__Stream2Axi4WriteMasterInterfaceAddFifo__1(vlSymsp);
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection._settle__TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection__3(vlSymsp);
}

void VStream2Axi4WriteMasterInterfaceAddFifo::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteMasterInterfaceAddFifo::_ctor_var_reset\n"); );
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
    __Vclklast__TOP__aclk = VL_RAND_RESET_I(1);
    __Vclklast__TOP__aresetn = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
