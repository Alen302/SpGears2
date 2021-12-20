// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStream2Axi4WriteOnlyMasterInterfaceAddFifo.h for the primary calling header

#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo.h" // For This
#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms.h"

#include "verilated_dpi.h"


//--------------------


void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VStream2Axi4WriteOnlyMasterInterfaceAddFifo::eval\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_eval_initial_loop(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_sequent__TOP__3(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_sequent__TOP__3\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->s_axis_ready = (1U & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_full)));
    vlTOPp->m_axi_bready = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_controlBReady;
    vlTOPp->m_axi_awvalid = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_controlAwValid;
    vlTOPp->m_axi_wlast = (0xffU == (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.writeCounter));
    vlTOPp->m_axi_awaddr = ((0x100U == (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.writeCounter))
			     ? vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.debugAddress
			     : vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_initialAddress);
}

VL_INLINE_OPT void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_sequent__TOP__4(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_sequent__TOP__4\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->m_axi_wvalid = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wvalid;
    vlTOPp->m_axi_wdata = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wdata;
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_eval(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VStream2Axi4WriteOnlyMasterInterfaceAddFifo::_eval\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->aclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__aclk)))) {
	vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo._sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__2(vlSymsp);
    }
    if ((((IData)(vlTOPp->aclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__aclk))) 
	 | ((~ (IData)(vlTOPp->aresetn)) & (IData)(vlTOPp->__Vclklast__TOP__aresetn)))) {
	vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo._sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__3(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
	vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection._sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__9(vlSymsp);
	vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection._sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__11(vlSymsp);
	vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection._sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__12(vlSymsp);
	vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection._sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__13(vlSymsp);
	vlTOPp->_sequent__TOP__3(vlSymsp);
	vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo._sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__4(vlSymsp);
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo._combo__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__5(vlSymsp);
    vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection._combo__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__14(vlSymsp);
    if (((IData)(vlTOPp->aclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__aclk)))) {
	vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo._sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__6(vlSymsp);
	vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
	vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection._sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__15(vlSymsp);
    }
    if ((((IData)(vlTOPp->aclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__aclk))) 
	 | ((~ (IData)(vlTOPp->aresetn)) & (IData)(vlTOPp->__Vclklast__TOP__aresetn)))) {
	vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo._sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__7(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
	vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection._sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__16(vlSymsp);
	vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection._combo__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection__17(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__aclk = vlTOPp->aclk;
    vlTOPp->__Vclklast__TOP__aresetn = vlTOPp->aresetn;
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
    if (VL_UNLIKELY((aclk & 0xfeU))) {
	Verilated::overWidthError("aclk");}
}
#endif // VL_DEBUG
