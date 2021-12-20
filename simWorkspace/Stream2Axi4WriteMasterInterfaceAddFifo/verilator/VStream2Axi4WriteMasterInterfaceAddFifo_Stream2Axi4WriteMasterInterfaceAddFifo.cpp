// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStream2Axi4WriteMasterInterfaceAddFifo.h for the primary calling header

#include "VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterfaceAddFifo.h" // For This
#include "VStream2Axi4WriteMasterInterfaceAddFifo__Syms.h"

#include "verilated_dpi.h"


//--------------------
// Internal Methods

VL_INLINE_OPT void VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterfaceAddFifo::_sequent__TOP__Stream2Axi4WriteMasterInterfaceAddFifo__2(VStream2Axi4WriteMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterfaceAddFifo::_sequent__TOP__Stream2Axi4WriteMasterInterfaceAddFifo__2\n"); );
    VStream2Axi4WriteMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__Vdlyvset__fifoInstance__DOT__logic_ram__v0 = 0U;
    // ALWAYS at /home/lqx/IdeaProjects/LicioLib/tmp/job_1/Stream2Axi4WriteMasterInterfaceAddFifo.v:218
    if (vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT___zz_1) {
	vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__Vdlyvval__fifoInstance__DOT__logic_ram__v0 
	    = vlTOPp->s_axis_payload;
	vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__Vdlyvset__fifoInstance__DOT__logic_ram__v0 = 1U;
	vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__Vdlyvdim0__fifoInstance__DOT__logic_ram__v0 
	    = vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_value;
    }
}

VL_INLINE_OPT void VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterfaceAddFifo::_sequent__TOP__Stream2Axi4WriteMasterInterfaceAddFifo__3(VStream2Axi4WriteMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterfaceAddFifo::_sequent__TOP__Stream2Axi4WriteMasterInterfaceAddFifo__3\n"); );
    VStream2Axi4WriteMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdly__fifoInstance__DOT__logic_pushPtr_value,7,0);
    // Body
    __Vdly__fifoInstance__DOT__logic_pushPtr_value 
	= vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_value;
    // ALWAYS at /home/lqx/IdeaProjects/LicioLib/tmp/job_1/Stream2Axi4WriteMasterInterfaceAddFifo.v:289
    if (vlTOPp->aresetn) {
	__Vdly__fifoInstance__DOT__logic_pushPtr_value = 0U;
	vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_value = 0U;
	vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_risingOccupancy = 0U;
	vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT___zz_io_pop_valid = 0U;
    } else {
	vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_value 
	    = vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_valueNext;
	vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT___zz_io_pop_valid 
	    = ((IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_valueNext) 
	       == (IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_value));
	if (((IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushing) 
	     != (IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popping))) {
	    vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_risingOccupancy 
		= vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushing;
	}
	__Vdly__fifoInstance__DOT__logic_pushPtr_value 
	    = vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_valueNext;
    }
    vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_value 
	= __Vdly__fifoInstance__DOT__logic_pushPtr_value;
    vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_ptrMatch 
	= ((IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_value) 
	   == (IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_value));
    vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_full 
	= ((IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_ptrMatch) 
	   & (IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_risingOccupancy));
    vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance_io_pop_valid 
	= (1U & ((~ ((IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_ptrMatch) 
		     & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_risingOccupancy)))) 
		 & (~ ((IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT___zz_io_pop_valid) 
		       & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_full))))));
}

VL_INLINE_OPT void VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterfaceAddFifo::_sequent__TOP__Stream2Axi4WriteMasterInterfaceAddFifo__4(VStream2Axi4WriteMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterfaceAddFifo::_sequent__TOP__Stream2Axi4WriteMasterInterfaceAddFifo__4\n"); );
    VStream2Axi4WriteMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popping 
	= ((IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance_io_pop_valid) 
	   & (IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection.__PVT__s_axis_ready));
    // ALWAYS at /home/lqx/IdeaProjects/LicioLib/tmp/job_1/Stream2Axi4WriteMasterInterfaceAddFifo.v:254
    vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popping) {
	vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_willIncrement = 1U;
    }
}

VL_INLINE_OPT void VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterfaceAddFifo::_combo__TOP__Stream2Axi4WriteMasterInterfaceAddFifo__5(VStream2Axi4WriteMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterfaceAddFifo::_combo__TOP__Stream2Axi4WriteMasterInterfaceAddFifo__5\n"); );
    VStream2Axi4WriteMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushing 
	= ((IData)(vlTOPp->s_axis_valid) & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_full)));
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
    // ALWAYS at /home/lqx/IdeaProjects/LicioLib/tmp/job_1/Stream2Axi4WriteMasterInterfaceAddFifo.v:247
    vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_valueNext 
	= (0xffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_value) 
		    + (IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_willIncrement)));
}

VL_INLINE_OPT void VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterfaceAddFifo::_sequent__TOP__Stream2Axi4WriteMasterInterfaceAddFifo__6(VStream2Axi4WriteMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterfaceAddFifo::_sequent__TOP__Stream2Axi4WriteMasterInterfaceAddFifo__6\n"); );
    VStream2Axi4WriteMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/lqx/IdeaProjects/LicioLib/tmp/job_1/Stream2Axi4WriteMasterInterfaceAddFifo.v:212
    vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT___zz_logic_ram_port0 
	= vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_ram
	[vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_valueNext];
    // ALWAYSPOST at /home/lqx/IdeaProjects/LicioLib/tmp/job_1/Stream2Axi4WriteMasterInterfaceAddFifo.v:220
    if (vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__Vdlyvset__fifoInstance__DOT__logic_ram__v0) {
	vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_ram[vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__Vdlyvdim0__fifoInstance__DOT__logic_ram__v0] 
	    = vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__Vdlyvval__fifoInstance__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterfaceAddFifo::_sequent__TOP__Stream2Axi4WriteMasterInterfaceAddFifo__7(VStream2Axi4WriteMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterfaceAddFifo::_sequent__TOP__Stream2Axi4WriteMasterInterfaceAddFifo__7\n"); );
    VStream2Axi4WriteMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/lqx/IdeaProjects/LicioLib/tmp/job_1/Stream2Axi4WriteMasterInterfaceAddFifo.v:270
    vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_valueNext 
	= (0xffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_value) 
		    + (IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_willIncrement)));
}
