// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStream2Axi4WriteOnlyMasterInterfaceAddFifo.h for the primary calling header

#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo.h"
#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VStream2Axi4WriteOnlyMasterInterfaceAddFifo) {
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp = __VlSymsp = new VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms(this, name());
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL(Stream2Axi4WriteOnlyMasterInterfaceAddFifo, VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo);
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::__Vconfigure(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VStream2Axi4WriteOnlyMasterInterfaceAddFifo::~VStream2Axi4WriteOnlyMasterInterfaceAddFifo() {
    delete __VlSymsp; __VlSymsp=NULL;
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_initial__TOP__1(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_initial__TOP__1\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->m_axi_wstrb = 0xfU;
    vlTOPp->m_axi_awprot = 0U;
    vlTOPp->m_axi_awqos = 0U;
    vlTOPp->m_axi_awcache = 0U;
    vlTOPp->m_axi_awburst = 1U;
    vlTOPp->m_axi_awsize = 2U;
    vlTOPp->m_axi_awregion = 0U;
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_settle__TOP__4(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_settle__TOP__4\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->transInterrupt = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_isBurstComplete;
    vlTOPp->m_axi_awlen = (0xffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__burstLengthReg) 
                                    - (IData)(1U)));
    vlTOPp->m_axi_awaddr = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_finalAddressReg;
    vlTOPp->m_axi_awvalid = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_controlAwValidSignal;
    vlTOPp->m_axi_bready = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_controlBReady;
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_settle__TOP__5(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_settle__TOP__5\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->m_axi_wlast = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wlast;
    vlTOPp->m_axi_wdata = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wdata;
    vlTOPp->m_axi_wvalid = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wvalid;
    vlTOPp->s_axis_ready = (1U & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_full)));
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_eval_initial(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_eval_initial\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__aclk = vlTOPp->aclk;
    vlTOPp->__Vclklast__TOP__aresetn = vlTOPp->aresetn;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection____PVT___zz_4 
        = vlTOPp->__VinpClk__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection____PVT___zz_4;
    vlTOPp->__Vclklast__TOP__start = vlTOPp->start;
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteOnlyMasterInterfaceAddFifo::final\n"); );
    // Variables
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp = this->__VlSymsp;
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_eval_settle(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_eval_settle\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection._settle__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__5(vlSymsp);
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo._settle__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__3(vlSymsp);
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection._settle__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__6(vlSymsp);
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_ctor_var_reset\n"); );
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
    aresetn = VL_RAND_RESET_I(1);
    start = VL_RAND_RESET_I(1);
    burstLen = VL_RAND_RESET_I(8);
    startAddr = VL_RAND_RESET_I(32);
    offset = VL_RAND_RESET_I(32);
    pathNumb = VL_RAND_RESET_I(8);
    transInterrupt = VL_RAND_RESET_I(1);
    aclk = VL_RAND_RESET_I(1);
    __VinpClk__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection____PVT___zz_4 = VL_RAND_RESET_I(1);
    __Vchglast__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection___zz_4 = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
