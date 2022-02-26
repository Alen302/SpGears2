// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStream2Axi4WriteOnlyMasterInterfaceAddFifo.h for the primary calling header

#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo.h"
#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo::_sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__1(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo::_sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__1\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*7:0*/ __Vdlyvdim0__fifoInstance__DOT__logic_ram__v0;
    CData/*0:0*/ __Vdlyvset__fifoInstance__DOT__logic_ram__v0;
    IData/*31:0*/ __Vdlyvval__fifoInstance__DOT__logic_ram__v0;
    // Body
    __Vdlyvset__fifoInstance__DOT__logic_ram__v0 = 0U;
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT___zz_logic_ram_port0 
        = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_ram
        [vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_valueNext];
    if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT___zz_1) {
        __Vdlyvval__fifoInstance__DOT__logic_ram__v0 
            = vlTOPp->s_axis_payload;
        __Vdlyvset__fifoInstance__DOT__logic_ram__v0 = 1U;
        __Vdlyvdim0__fifoInstance__DOT__logic_ram__v0 
            = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_value;
    }
    if (__Vdlyvset__fifoInstance__DOT__logic_ram__v0) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_ram[__Vdlyvdim0__fifoInstance__DOT__logic_ram__v0] 
            = __Vdlyvval__fifoInstance__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo::_sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__2(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo::_sequent__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__2\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->aresetn) {
        if (((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushing) 
             != (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popping))) {
            vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_risingOccupancy 
                = vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushing;
        }
    } else {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_risingOccupancy = 0U;
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_value 
        = ((IData)(vlTOPp->aresetn) ? (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_valueNext)
            : 0U);
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT___zz_io_pop_valid 
        = ((IData)(vlTOPp->aresetn) & ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_valueNext) 
                                       == (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_value)));
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_value 
        = ((IData)(vlTOPp->aresetn) ? (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_valueNext)
            : 0U);
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_ptrMatch 
        = ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_value) 
           == (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_value));
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_full 
        = ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_ptrMatch) 
           & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_risingOccupancy));
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance_io_pop_valid 
        = (1U & ((~ ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_ptrMatch) 
                     & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_risingOccupancy)))) 
                 & (~ ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT___zz_io_pop_valid) 
                       & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_full))))));
}

VL_INLINE_OPT void VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo::_combo__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__4(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo::_combo__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__4\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushing 
        = ((IData)(vlTOPp->s_axis_valid) & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_full)));
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT___zz_1 = 0U;
    if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushing) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT___zz_1 = 1U;
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_willIncrement = 0U;
    if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushing) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_willIncrement = 1U;
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_valueNext 
        = (0xffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_value) 
                    + (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_willIncrement)));
}

VL_INLINE_OPT void VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo::_multiclk__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__5(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo::_multiclk__TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__5\n"); );
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popping 
        = ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance_io_pop_valid) 
           & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__s_axis_ready));
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_willIncrement = 0U;
    if (vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popping) {
        vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_willIncrement = 1U;
    }
    vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_valueNext 
        = (0xffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_value) 
                    + (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_willIncrement)));
}
