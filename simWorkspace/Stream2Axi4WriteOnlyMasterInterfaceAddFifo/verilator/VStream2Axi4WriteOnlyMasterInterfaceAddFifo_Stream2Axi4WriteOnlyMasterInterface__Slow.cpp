// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStream2Axi4WriteOnlyMasterInterfaceAddFifo.h for the primary calling header

#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface.h"
#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface::__Vconfigure(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface::~VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface() {
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface::_settle__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__5(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface::_settle__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__5\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wlast 
        = ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_m_axi_wlast_2) 
           == (0xffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__burstLengthReg) 
                        - (IData)(1U))));
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.axi4Interface_isInitialIterate 
        = (0U == (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_axi4Interface_isInitialIterate_2));
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l187 
        = (((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_m_axi_wlast_2) 
            < (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__burstLengthReg)) 
           & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__startSendSignal));
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l105 
        = (((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_when_Axi4WriteOnlyMater_l105_2) 
            < (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__burstLengthReg)) 
           & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__startSendSignal));
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l131 
        = ((IData)(vlTOPp->aresetn) & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__startSendSignal));
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_full_aw_fire 
        = ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_controlAwValidSignal) 
           & (IData)(vlTOPp->m_axi_awready));
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_ptrMatch 
        = ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushPtr_value) 
           == (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_value));
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_full_b_fire_6 
        = ((IData)(vlTOPp->m_axi_bvalid) & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_controlBReady));
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_1 = 0U;
    if (((IData)(vlTOPp->m_axi_bvalid) & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_controlBReady))) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_1 = 1U;
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_5 = 0U;
    if (((IData)(vlTOPp->m_axi_bvalid) & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_controlBReady))) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_5 = 1U;
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_axi4Interface_isInitialIterate = 0U;
    if (((IData)(vlTOPp->m_axi_bvalid) & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_controlBReady))) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_axi4Interface_isInitialIterate = 1U;
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_8 = 0U;
    if ((((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_axi4Interface_isInitialIterate_2) 
          == (IData)(vlTOPp->pathNumb)) & ((IData)(vlTOPp->m_axi_bvalid) 
                                           & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_controlBReady)))) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_8 = 1U;
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_4 
        = (1U & (((~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wlast)) 
                  & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wlast_regNext)) 
                 | (~ (IData)(vlTOPp->aresetn))));
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l159 
        = (((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_isRefreshAddr) 
            & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__startSendSignal)) 
           & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.axi4Interface_isInitialIterate));
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l164 
        = (((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_isRefreshAddr) 
            & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__startSendSignal)) 
           & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.axi4Interface_isInitialIterate)));
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_pop_ready = 0U;
    if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l187) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_pop_ready 
            = vlTOPp->m_axi_wready;
        if ((1U & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_pop_rValid)))) {
            vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_pop_ready = 1U;
        }
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wdata 
        = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT___zz_logic_ram_port0;
    if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l187) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wdata 
            = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_pop_rData;
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wvalid = 0U;
    if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l187) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wvalid 
            = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_pop_rValid;
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_push_payload 
        = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
    if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l105) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_push_payload 
            = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT___zz_logic_ram_port0;
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_full 
        = ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_ptrMatch) 
           & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_risingOccupancy));
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_axi4Interface_isInitialIterate_1 
        = (0xffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_axi4Interface_isInitialIterate_2) 
                    + (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_axi4Interface_isInitialIterate)));
    if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_8) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_axi4Interface_isInitialIterate_1 = 0U;
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_m_axi_wlast = 0U;
    if (((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wvalid) 
         & (IData)(vlTOPp->m_axi_wready))) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_m_axi_wlast = 1U;
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__s_axis_ready = 0U;
    if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l105) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__s_axis_ready 
            = (1U & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_full)));
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_pop_valid 
        = (1U & ((~ ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_full))))));
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_m_axi_wlast_1 
        = (((0x100U == (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_m_axi_wlast_2)) 
            & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_m_axi_wlast))
            ? 0U : (0x1ffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_m_axi_wlast_2) 
                              + (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_m_axi_wlast))));
    if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_1) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_m_axi_wlast_1 = 0U;
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popping 
        = ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_pop_valid) 
           & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_pop_ready));
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popping) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_valueNext 
        = (0xffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_value) 
                    + (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_willIncrement)));
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface::_settle__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__6(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface::_settle__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__6\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_push_valid = 0U;
    if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l105) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_push_valid 
            = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance_io_pop_valid;
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_when_Axi4WriteOnlyMater_l105 = 0U;
    if (((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_push_valid) 
         & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_full)))) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_when_Axi4WriteOnlyMater_l105 = 1U;
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushing 
        = ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_push_valid) 
           & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_full)));
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_when_Axi4WriteOnlyMater_l105_1 
        = (((0x100U == (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_when_Axi4WriteOnlyMater_l105_2)) 
            & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_when_Axi4WriteOnlyMater_l105))
            ? 0U : (0x1ffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_when_Axi4WriteOnlyMater_l105_2) 
                              + (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_when_Axi4WriteOnlyMater_l105))));
    if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_5) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_when_Axi4WriteOnlyMater_l105_1 = 0U;
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT___zz_1 = 0U;
    if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushing) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT___zz_1 = 1U;
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushing) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushPtr_valueNext 
        = (0xffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushPtr_value) 
                    + (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushPtr_willIncrement)));
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface::_ctor_var_reset\n"); );
    // Body
    __PVT__start = VL_RAND_RESET_I(1);
    __PVT__burstLen = VL_RAND_RESET_I(8);
    __PVT__startAddr = VL_RAND_RESET_I(32);
    __PVT__offset = VL_RAND_RESET_I(32);
    __PVT__pathNumb = VL_RAND_RESET_I(8);
    __PVT__s_axis_valid = VL_RAND_RESET_I(1);
    __PVT__s_axis_ready = VL_RAND_RESET_I(1);
    __PVT__s_axis_payload = VL_RAND_RESET_I(32);
    __PVT__m_axi_awvalid = VL_RAND_RESET_I(1);
    __PVT__m_axi_awready = VL_RAND_RESET_I(1);
    __PVT__m_axi_awaddr = VL_RAND_RESET_I(32);
    __PVT__m_axi_awregion = VL_RAND_RESET_I(4);
    __PVT__m_axi_awlen = VL_RAND_RESET_I(8);
    __PVT__m_axi_awsize = VL_RAND_RESET_I(3);
    __PVT__m_axi_awburst = VL_RAND_RESET_I(2);
    __PVT__m_axi_awcache = VL_RAND_RESET_I(4);
    __PVT__m_axi_awqos = VL_RAND_RESET_I(4);
    __PVT__m_axi_awprot = VL_RAND_RESET_I(3);
    __PVT__m_axi_wvalid = VL_RAND_RESET_I(1);
    __PVT__m_axi_wready = VL_RAND_RESET_I(1);
    __PVT__m_axi_wdata = VL_RAND_RESET_I(32);
    __PVT__m_axi_wstrb = VL_RAND_RESET_I(4);
    __PVT__m_axi_wlast = VL_RAND_RESET_I(1);
    __PVT__m_axi_bvalid = VL_RAND_RESET_I(1);
    __PVT__m_axi_bready = VL_RAND_RESET_I(1);
    __PVT__m_axi_bresp = VL_RAND_RESET_I(2);
    __PVT__transInterrupt = VL_RAND_RESET_I(1);
    __PVT__aresetn = VL_RAND_RESET_I(1);
    __PVT__aclk = VL_RAND_RESET_I(1);
    __PVT__streamFifo_2_io_push_valid = VL_RAND_RESET_I(1);
    __PVT__streamFifo_2_io_push_payload = VL_RAND_RESET_I(32);
    __PVT__streamFifo_2_io_pop_ready = VL_RAND_RESET_I(1);
    __PVT__streamFifo_2_io_pop_valid = VL_RAND_RESET_I(1);
    __PVT__axi4Interface_transferDataType = VL_RAND_RESET_I(32);
    __PVT___zz_m_axi_wlast = VL_RAND_RESET_I(1);
    __PVT___zz_1 = VL_RAND_RESET_I(1);
    __PVT___zz_m_axi_wlast_1 = VL_RAND_RESET_I(9);
    __PVT___zz_m_axi_wlast_2 = VL_RAND_RESET_I(9);
    __PVT__m_axi_wlast_regNext = VL_RAND_RESET_I(1);
    __PVT___zz_4 = VL_RAND_RESET_I(1);
    __PVT__startSendSignal = VL_RAND_RESET_I(1);
    __PVT___zz_when_Axi4WriteOnlyMater_l105 = VL_RAND_RESET_I(1);
    __PVT___zz_5 = VL_RAND_RESET_I(1);
    __PVT___zz_when_Axi4WriteOnlyMater_l105_1 = VL_RAND_RESET_I(9);
    __PVT___zz_when_Axi4WriteOnlyMater_l105_2 = VL_RAND_RESET_I(9);
    __PVT__burstLengthReg = VL_RAND_RESET_I(8);
    __PVT__when_Axi4WriteOnlyMater_l105 = VL_RAND_RESET_I(1);
    __PVT__axi4Interface_newBurst = VL_RAND_RESET_I(1);
    __PVT__axi4Interface_controlAwValidSignal = VL_RAND_RESET_I(1);
    __PVT__when_Axi4WriteOnlyMater_l131 = VL_RAND_RESET_I(1);
    __PVT__axi4Interface_full_aw_fire = VL_RAND_RESET_I(1);
    __PVT___zz_axi4Interface_isInitialIterate = VL_RAND_RESET_I(1);
    __PVT___zz_8 = VL_RAND_RESET_I(1);
    __PVT___zz_axi4Interface_isInitialIterate_1 = VL_RAND_RESET_I(8);
    __PVT___zz_axi4Interface_isInitialIterate_2 = VL_RAND_RESET_I(8);
    axi4Interface_isInitialIterate = VL_RAND_RESET_I(1);
    __PVT__axi4Interface_isRefreshAddr = VL_RAND_RESET_I(1);
    __PVT__offsetAddressReg = VL_RAND_RESET_I(32);
    __PVT__axi4Interface_finalAddressReg = VL_RAND_RESET_I(32);
    __PVT__when_Axi4WriteOnlyMater_l159 = VL_RAND_RESET_I(1);
    __PVT__when_Axi4WriteOnlyMater_l164 = VL_RAND_RESET_I(1);
    __PVT__when_Axi4WriteOnlyMater_l187 = VL_RAND_RESET_I(1);
    __PVT__streamFifo_2_io_pop_rValid = VL_RAND_RESET_I(1);
    __PVT__streamFifo_2_io_pop_rData = VL_RAND_RESET_I(32);
    __PVT__axi4Interface_controlBReady = VL_RAND_RESET_I(1);
    __PVT__axi4Interface_full_b_fire_6 = VL_RAND_RESET_I(1);
    __PVT__axi4Interface_isBurstComplete = VL_RAND_RESET_I(1);
    __PVT__streamFifo_2__DOT___zz_logic_ram_port0 = VL_RAND_RESET_I(32);
    __PVT__streamFifo_2__DOT___zz_1 = VL_RAND_RESET_I(1);
    __PVT__streamFifo_2__DOT__logic_pushPtr_willIncrement = VL_RAND_RESET_I(1);
    __PVT__streamFifo_2__DOT__logic_pushPtr_valueNext = VL_RAND_RESET_I(8);
    __PVT__streamFifo_2__DOT__logic_pushPtr_value = VL_RAND_RESET_I(8);
    __PVT__streamFifo_2__DOT__logic_popPtr_willIncrement = VL_RAND_RESET_I(1);
    __PVT__streamFifo_2__DOT__logic_popPtr_valueNext = VL_RAND_RESET_I(8);
    __PVT__streamFifo_2__DOT__logic_popPtr_value = VL_RAND_RESET_I(8);
    __PVT__streamFifo_2__DOT__logic_ptrMatch = VL_RAND_RESET_I(1);
    __PVT__streamFifo_2__DOT__logic_risingOccupancy = VL_RAND_RESET_I(1);
    __PVT__streamFifo_2__DOT__logic_pushing = VL_RAND_RESET_I(1);
    __PVT__streamFifo_2__DOT__logic_popping = VL_RAND_RESET_I(1);
    __PVT__streamFifo_2__DOT__logic_full = VL_RAND_RESET_I(1);
    __PVT__streamFifo_2__DOT___zz_io_pop_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            __PVT__streamFifo_2__DOT__logic_ram[__Vi0] = VL_RAND_RESET_I(32);
    }}
}
