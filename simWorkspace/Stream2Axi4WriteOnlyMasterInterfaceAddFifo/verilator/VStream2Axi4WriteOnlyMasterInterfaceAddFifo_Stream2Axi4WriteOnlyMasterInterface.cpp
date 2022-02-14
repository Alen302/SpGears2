// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStream2Axi4WriteOnlyMasterInterfaceAddFifo.h for the primary calling header

#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface.h"
#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface::_sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__1(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface::_sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__1\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__axi4Interface_isBurstComplete;
    CData/*7:0*/ __Vdlyvdim0__streamFifo_2__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__streamFifo_2__DOT__logic_ram__v0;
    IData/*31:0*/ __Vdlyvval__streamFifo_2__DOT__logic_ram__v0;
    // Body
    __Vdly__axi4Interface_isBurstComplete = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_isBurstComplete;
    __Vdlyvset__streamFifo_2__DOT__logic_ram__v0 = 0U;
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wlast_regNext 
        = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wlast;
    if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_pop_ready) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_pop_rData 
            = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT___zz_logic_ram_port0;
    }
    __Vdly__axi4Interface_isBurstComplete = ((IData)(vlTOPp->m_axi_bvalid) 
                                             & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_controlBReady));
    if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_isBurstComplete) {
        __Vdly__axi4Interface_isBurstComplete = 0U;
    }
    if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT___zz_1) {
        __Vdlyvval__streamFifo_2__DOT__logic_ram__v0 
            = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_push_payload;
        __Vdlyvset__streamFifo_2__DOT__logic_ram__v0 = 1U;
        __Vdlyvdim0__streamFifo_2__DOT__logic_ram__v0 
            = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushPtr_value;
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_isBurstComplete 
        = __Vdly__axi4Interface_isBurstComplete;
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT___zz_logic_ram_port0 
        = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_ram
        [vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_valueNext];
    if (__Vdlyvset__streamFifo_2__DOT__logic_ram__v0) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_ram[__Vdlyvdim0__streamFifo_2__DOT__logic_ram__v0] 
            = __Vdlyvval__streamFifo_2__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface::_sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__2(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface::_sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__2\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    IData/*31:0*/ __Vdly__axi4Interface_finalAddressReg;
    // Body
    __Vdly__axi4Interface_finalAddressReg = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_finalAddressReg;
    if (vlTOPp->aresetn) {
        if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l159) {
            __Vdly__axi4Interface_finalAddressReg = vlTOPp->startAddr;
        }
        if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l164) {
            __Vdly__axi4Interface_finalAddressReg = 
                (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_finalAddressReg 
                 + vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__offsetAddressReg);
        }
    } else {
        __Vdly__axi4Interface_finalAddressReg = 0U;
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_axi4Interface_isInitialIterate_2 
        = ((IData)(vlTOPp->aresetn) ? (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_axi4Interface_isInitialIterate_1)
            : 0U);
    if (vlTOPp->aresetn) {
        if (((IData)(vlTOPp->m_axi_bvalid) & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_controlBReady))) {
            vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_isRefreshAddr = 1U;
        }
        if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l159) {
            vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_isRefreshAddr = 0U;
        }
        if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l164) {
            vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_isRefreshAddr = 0U;
        }
    } else {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_isRefreshAddr = 1U;
    }
    if (vlTOPp->aresetn) {
        if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l131) {
            if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_full_aw_fire) {
                vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_controlAwValidSignal = 0U;
            } else {
                if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_newBurst) {
                    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_controlAwValidSignal = 1U;
                }
            }
        }
    } else {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_controlAwValidSignal = 0U;
    }
    if (vlTOPp->aresetn) {
        if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_pop_ready) {
            vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_pop_rValid 
                = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_pop_valid;
        }
    } else {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_pop_rValid = 0U;
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_m_axi_wlast_2 
        = ((IData)(vlTOPp->aresetn) ? (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_m_axi_wlast_1)
            : 0U);
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_when_Axi4WriteOnlyMater_l105_2 
        = ((IData)(vlTOPp->aresetn) ? (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_when_Axi4WriteOnlyMater_l105_1)
            : 0U);
    if (vlTOPp->aresetn) {
        if (((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushing) 
             != (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popping))) {
            vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_risingOccupancy 
                = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushing;
        }
    } else {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_risingOccupancy = 0U;
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__burstLengthReg 
        = ((IData)(vlTOPp->aresetn) ? (IData)(vlTOPp->burstLen)
            : 0xffU);
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->aresetn) ? (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_valueNext)
            : 0U);
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT___zz_io_pop_valid 
        = ((IData)(vlTOPp->aresetn) & ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_valueNext) 
                                       == (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushPtr_value)));
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_finalAddressReg 
        = __Vdly__axi4Interface_finalAddressReg;
    if (vlTOPp->aresetn) {
        if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l159) {
            vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__offsetAddressReg 
                = vlTOPp->offset;
        }
    } else {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__offsetAddressReg = 0U;
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.axi4Interface_isInitialIterate 
        = (0U == (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_axi4Interface_isInitialIterate_2));
}

VL_INLINE_OPT void VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface::_sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__3(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface::_sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__3\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->aresetn) {
        if (((IData)(vlTOPp->m_axi_bvalid) & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_controlBReady))) {
            vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_newBurst = 1U;
        }
        if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l131) {
            if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_full_aw_fire) {
                vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_newBurst = 0U;
            }
        }
    } else {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_newBurst = 1U;
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wlast 
        = ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_m_axi_wlast_2) 
           == (0xffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__burstLengthReg) 
                        - (IData)(1U))));
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->aresetn) ? (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushPtr_valueNext)
            : 0U);
    if (vlTOPp->aresetn) {
        if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wvalid) {
            vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_controlBReady = 1U;
        }
        if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_full_b_fire_6) {
            vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_controlBReady = 0U;
        }
    } else {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_controlBReady = 0U;
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_ptrMatch 
        = ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushPtr_value) 
           == (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_value));
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_full 
        = ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_ptrMatch) 
           & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_risingOccupancy));
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_pop_valid 
        = (1U & ((~ ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_full))))));
}

VL_INLINE_OPT void VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface::_sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__4(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface::_sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__4\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__startSendSignal 
        = (1U & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_4)));
}

VL_INLINE_OPT void VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface::_combo__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__7(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface::_combo__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__7\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_full_aw_fire 
        = ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_controlAwValidSignal) 
           & (IData)(vlTOPp->m_axi_awready));
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
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l131 
        = ((IData)(vlTOPp->aresetn) & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__startSendSignal));
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_axi4Interface_isInitialIterate_1 
        = (0xffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_axi4Interface_isInitialIterate_2) 
                    + (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_axi4Interface_isInitialIterate)));
    if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_8) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_axi4Interface_isInitialIterate_1 = 0U;
    }
}

VL_INLINE_OPT void VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface::_multiclk__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__8(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface::_multiclk__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__8\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l187 
        = (((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_m_axi_wlast_2) 
            < (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__burstLengthReg)) 
           & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__startSendSignal));
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l105 
        = (((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_when_Axi4WriteOnlyMater_l105_2) 
            < (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__burstLengthReg)) 
           & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__startSendSignal));
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l159 
        = (((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_isRefreshAddr) 
            & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__startSendSignal)) 
           & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.axi4Interface_isInitialIterate));
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l164 
        = (((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_isRefreshAddr) 
            & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__startSendSignal)) 
           & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.axi4Interface_isInitialIterate)));
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
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__s_axis_ready = 0U;
    if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l105) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__s_axis_ready 
            = (1U & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_full)));
    }
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

VL_INLINE_OPT void VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface::_combo__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__9(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface::_combo__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__9\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_pop_ready = 0U;
    if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l187) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_pop_ready 
            = vlTOPp->m_axi_wready;
        if ((1U & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_pop_rValid)))) {
            vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_pop_ready = 1U;
        }
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_m_axi_wlast = 0U;
    if (((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wvalid) 
         & (IData)(vlTOPp->m_axi_wready))) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_m_axi_wlast = 1U;
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_when_Axi4WriteOnlyMater_l105_1 
        = (((0x100U == (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_when_Axi4WriteOnlyMater_l105_2)) 
            & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_when_Axi4WriteOnlyMater_l105))
            ? 0U : (0x1ffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_when_Axi4WriteOnlyMater_l105_2) 
                              + (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_when_Axi4WriteOnlyMater_l105))));
    if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_5) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_when_Axi4WriteOnlyMater_l105_1 = 0U;
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popping 
        = ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_pop_valid) 
           & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_pop_ready));
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_m_axi_wlast_1 
        = (((0x100U == (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_m_axi_wlast_2)) 
            & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_m_axi_wlast))
            ? 0U : (0x1ffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_m_axi_wlast_2) 
                              + (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_m_axi_wlast))));
    if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_1) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_m_axi_wlast_1 = 0U;
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popping) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_valueNext 
        = (0xffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_value) 
                    + (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_willIncrement)));
}
