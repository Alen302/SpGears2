// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStream2Axi4WriteOnlyMasterInterfaceAddFifo.h for the primary calling header

#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo.h"
#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms.h"

#include "verilated_dpi.h"

//==========

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VStream2Axi4WriteOnlyMasterInterfaceAddFifo::eval\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
#ifdef VM_TRACE
    // Tracing
#endif  // VM_TRACE
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("E:/Github/LicioLib/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v", 7, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_eval_initial_loop(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("E:/Github/LicioLib/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v", 7, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_sequent__TOP__2(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_sequent__TOP__2\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->transInterrupt = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_isBurstComplete;
}

VL_INLINE_OPT void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_sequent__TOP__3(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_sequent__TOP__3\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->m_axi_awaddr = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_finalAddressReg;
    vlTOPp->m_axi_awvalid = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_controlAwValidSignal;
    vlTOPp->m_axi_awlen = (0xffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__burstLengthReg) 
                                    - (IData)(1U)));
    vlTOPp->m_axi_wlast = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wlast;
    vlTOPp->m_axi_bready = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_controlBReady;
    vlTOPp->s_axis_ready = (1U & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_full)));
}

VL_INLINE_OPT void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_multiclk__TOP__6(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_multiclk__TOP__6\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->m_axi_wdata = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wdata;
    vlTOPp->m_axi_wvalid = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wvalid;
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_eval(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_eval\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->aclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__aclk)))) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo._sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__1(vlSymsp);
        vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection._sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__1(vlSymsp);
        vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if ((((IData)(vlTOPp->aclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__aclk))) 
         | ((~ (IData)(vlTOPp->aresetn)) & (IData)(vlTOPp->__Vclklast__TOP__aresetn)))) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection._sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__2(vlSymsp);
        vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection._sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__3(vlSymsp);
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo._sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__2(vlSymsp);
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if ((((IData)(vlTOPp->__VinpClk__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection____PVT___zz_4) 
          & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection____PVT___zz_4))) 
         | ((IData)(vlTOPp->start) & (~ (IData)(vlTOPp->__Vclklast__TOP__start))))) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection._sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__4(vlSymsp);
        vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection._combo__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__7(vlSymsp);
    vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo._combo__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__4(vlSymsp);
    if ((((((IData)(vlTOPp->__VinpClk__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection____PVT___zz_4) 
            & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection____PVT___zz_4))) 
           | ((IData)(vlTOPp->aclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__aclk)))) 
          | ((~ (IData)(vlTOPp->aresetn)) & (IData)(vlTOPp->__Vclklast__TOP__aresetn))) 
         | ((IData)(vlTOPp->start) & (~ (IData)(vlTOPp->__Vclklast__TOP__start))))) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection._multiclk__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__8(vlSymsp);
        vlTOPp->__Vm_traceActivity = (0x20U | vlTOPp->__Vm_traceActivity);
        vlTOPp->_multiclk__TOP__6(vlSymsp);
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo._multiclk__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__5(vlSymsp);
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection._combo__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__9(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__aclk = vlTOPp->aclk;
    vlTOPp->__Vclklast__TOP__aresetn = vlTOPp->aresetn;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection____PVT___zz_4 
        = vlTOPp->__VinpClk__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection____PVT___zz_4;
    vlTOPp->__Vclklast__TOP__start = vlTOPp->start;
    vlTOPp->__VinpClk__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection____PVT___zz_4 
        = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_4;
}

VL_INLINE_OPT QData VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_change_request(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_change_request\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_change_request_1(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_change_request_1\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_4 ^ vlTOPp->__Vchglast__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection___zz_4));
    VL_DEBUG_IF( if(__req && ((vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_4 ^ vlTOPp->__Vchglast__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection___zz_4))) VL_DBG_MSGF("        CHANGE: E:/Github/LicioLib/tmp/job_1/Stream2Axi4WriteOnlyMasterInterfaceAddFifo.v:185: _zz_4\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection___zz_4 
        = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_4;
    return __req;
}

#ifdef VL_DEBUG
void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((s_axis_valid & 0xfeU))) {
        Verilated::overWidthError("s_axis_valid");}
    if (VL_UNLIKELY((m_axi_awready & 0xfeU))) {
        Verilated::overWidthError("m_axi_awready");}
    if (VL_UNLIKELY((m_axi_wready & 0xfeU))) {
        Verilated::overWidthError("m_axi_wready");}
    if (VL_UNLIKELY((m_axi_bvalid & 0xfeU))) {
        Verilated::overWidthError("m_axi_bvalid");}
    if (VL_UNLIKELY((m_axi_bresp & 0xfcU))) {
        Verilated::overWidthError("m_axi_bresp");}
    if (VL_UNLIKELY((aresetn & 0xfeU))) {
        Verilated::overWidthError("aresetn");}
    if (VL_UNLIKELY((start & 0xfeU))) {
        Verilated::overWidthError("start");}
    if (VL_UNLIKELY((aclk & 0xfeU))) {
        Verilated::overWidthError("aclk");}
}
#endif  // VL_DEBUG
