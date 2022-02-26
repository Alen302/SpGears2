// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms.h"


//======================

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* t = (VStream2Axi4WriteOnlyMasterInterfaceAddFifo*)userthis;
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceChgThis(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 2U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 4U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 2U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 5U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 4U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 5U))))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 5U))))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__12(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceChgThis__2(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(((~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wlast)) 
                           & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wlast_regNext))));
    }
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceChgThis__3(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+9,((1U & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_full)))));
        vcdp->chgBit(c+17,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wlast));
        vcdp->chgBit(c+25,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance_io_pop_valid));
        vcdp->chgBus(c+33,(((((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_risingOccupancy) 
                              & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_ptrMatch)) 
                             << 8U) | (0xffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_value) 
                                                - (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_value))))),9);
        vcdp->chgBus(c+41,(((((~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_risingOccupancy)) 
                              & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_ptrMatch)) 
                             << 8U) | (0xffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_value) 
                                                - (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_value))))),9);
        vcdp->chgBit(c+49,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_ptrMatch));
        vcdp->chgBit(c+57,(((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_ptrMatch) 
                            & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+65,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_full));
        vcdp->chgBit(c+73,((1U & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_full)))));
        vcdp->chgBit(c+81,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_pop_valid));
        vcdp->chgBus(c+89,(((((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_risingOccupancy) 
                              & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_ptrMatch)) 
                             << 8U) | (0xffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushPtr_value) 
                                                - (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_value))))),9);
        vcdp->chgBus(c+97,(((((~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_risingOccupancy)) 
                              & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_ptrMatch)) 
                             << 8U) | (0xffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_value) 
                                                - (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushPtr_value))))),9);
        vcdp->chgBit(c+105,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_ptrMatch));
        vcdp->chgBit(c+113,(((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_risingOccupancy)))));
        vcdp->chgBit(c+121,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_full));
    }
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceChgThis__4(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+129,(((0xffU == (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_value)) 
                             & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_willIncrement))));
        vcdp->chgBit(c+137,(((0xffU == (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_value)) 
                             & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_willIncrement))));
    }
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceChgThis__5(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+145,(((0xffU == (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_value)) 
                             & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_willIncrement))));
        vcdp->chgBit(c+153,(((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_push_valid) 
                             & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_full)))));
        vcdp->chgBit(c+161,(((0xffU == (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushPtr_value)) 
                             & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushPtr_willIncrement))));
    }
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceChgThis__6(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+169,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+177,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_valueNext),8);
        vcdp->chgBit(c+185,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushing));
        vcdp->chgBit(c+193,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_pop_ready));
        vcdp->chgBit(c+201,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l131));
        vcdp->chgBit(c+209,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_full_aw_fire));
        vcdp->chgBit(c+217,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+225,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_valueNext),8);
        vcdp->chgBit(c+233,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popping));
    }
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceChgThis__7(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+241,(((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushing) 
                             != (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popping))));
        vcdp->chgBit(c+249,(((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushing) 
                             != (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popping))));
    }
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceChgThis__8(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+257,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wvalid));
        vcdp->chgBus(c+265,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wdata),32);
        vcdp->chgBit(c+273,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__s_axis_ready));
        vcdp->chgBit(c+281,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_willIncrement));
        vcdp->chgBus(c+289,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_valueNext),8);
        vcdp->chgBit(c+297,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popping));
        vcdp->chgBit(c+305,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_push_valid));
        vcdp->chgBus(c+313,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_push_payload),32);
        vcdp->chgBit(c+321,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l105));
        vcdp->chgBit(c+329,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l159));
        vcdp->chgBit(c+337,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l164));
        vcdp->chgBit(c+345,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l187));
        vcdp->chgBit(c+353,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushPtr_willIncrement));
        vcdp->chgBus(c+361,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushPtr_valueNext),8);
        vcdp->chgBit(c+369,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushing));
    }
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceChgThis__9(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+377,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_isBurstComplete));
        vcdp->chgBus(c+385,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT___zz_logic_ram_port0),32);
        vcdp->chgBus(c+393,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT___zz_logic_ram_port0),32);
        vcdp->chgBit(c+401,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wlast_regNext));
        vcdp->chgBus(c+409,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_pop_rData),32);
    }
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceChgThis__10(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+417,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_controlAwValidSignal));
        vcdp->chgBus(c+425,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_finalAddressReg),32);
        vcdp->chgBus(c+433,((0xffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__burstLengthReg) 
                                      - (IData)(1U)))),8);
        vcdp->chgBit(c+441,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_controlBReady));
        vcdp->chgBus(c+449,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_value),8);
        vcdp->chgBit(c+457,((0xffU == (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+465,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_value),8);
        vcdp->chgBit(c+473,((0xffU == (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+481,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+489,((0xffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_value) 
                                      - (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_value)))),8);
        vcdp->chgBus(c+497,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__burstLengthReg),8);
        vcdp->chgBit(c+505,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_newBurst));
        vcdp->chgBit(c+513,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_isRefreshAddr));
        vcdp->chgBus(c+521,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__offsetAddressReg),32);
        vcdp->chgBit(c+529,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_pop_rValid));
        vcdp->chgBit(c+537,((1U & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_pop_rValid)))));
        vcdp->chgBus(c+545,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushPtr_value),8);
        vcdp->chgBit(c+553,((0xffU == (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushPtr_value))));
        vcdp->chgBus(c+561,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_value),8);
        vcdp->chgBit(c+569,((0xffU == (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_value))));
        vcdp->chgBit(c+577,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_risingOccupancy));
        vcdp->chgBus(c+585,((0xffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushPtr_value) 
                                      - (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_value)))),8);
    }
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceChgThis__11(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+593,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__startSendSignal));
    }
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceChgThis__12(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+601,(vlTOPp->s_axis_valid));
        vcdp->chgBit(c+609,(vlTOPp->s_axis_ready));
        vcdp->chgBus(c+617,(vlTOPp->s_axis_payload),32);
        vcdp->chgBit(c+625,(vlTOPp->m_axi_awvalid));
        vcdp->chgBit(c+633,(vlTOPp->m_axi_awready));
        vcdp->chgBus(c+641,(vlTOPp->m_axi_awaddr),32);
        vcdp->chgBus(c+649,(vlTOPp->m_axi_awregion),4);
        vcdp->chgBus(c+657,(vlTOPp->m_axi_awlen),8);
        vcdp->chgBus(c+665,(vlTOPp->m_axi_awsize),3);
        vcdp->chgBus(c+673,(vlTOPp->m_axi_awburst),2);
        vcdp->chgBus(c+681,(vlTOPp->m_axi_awcache),4);
        vcdp->chgBus(c+689,(vlTOPp->m_axi_awqos),4);
        vcdp->chgBus(c+697,(vlTOPp->m_axi_awprot),3);
        vcdp->chgBit(c+705,(vlTOPp->m_axi_wvalid));
        vcdp->chgBit(c+713,(vlTOPp->m_axi_wready));
        vcdp->chgBus(c+721,(vlTOPp->m_axi_wdata),32);
        vcdp->chgBus(c+729,(vlTOPp->m_axi_wstrb),4);
        vcdp->chgBit(c+737,(vlTOPp->m_axi_wlast));
        vcdp->chgBit(c+745,(vlTOPp->m_axi_bvalid));
        vcdp->chgBit(c+753,(vlTOPp->m_axi_bready));
        vcdp->chgBus(c+761,(vlTOPp->m_axi_bresp),2);
        vcdp->chgBit(c+769,(vlTOPp->aresetn));
        vcdp->chgBit(c+777,(vlTOPp->start));
        vcdp->chgBus(c+785,(vlTOPp->burstLen),8);
        vcdp->chgBus(c+793,(vlTOPp->startAddr),32);
        vcdp->chgBus(c+801,(vlTOPp->offset),32);
        vcdp->chgBus(c+809,(vlTOPp->pathNumb),8);
        vcdp->chgBit(c+817,(vlTOPp->transInterrupt));
        vcdp->chgBit(c+825,(vlTOPp->aclk));
        vcdp->chgBit(c+833,(((IData)(vlTOPp->m_axi_bvalid) 
                             & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_controlBReady))));
        vcdp->chgBit(c+841,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.axi4Interface_isInitialIterate));
        vcdp->chgBit(c+849,((((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_axi4Interface_isInitialIterate_2) 
                              == (IData)(vlTOPp->pathNumb)) 
                             & ((IData)(vlTOPp->m_axi_bvalid) 
                                & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_controlBReady)))));
        vcdp->chgBit(c+857,(((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wvalid) 
                             & (IData)(vlTOPp->m_axi_wready))));
    }
}
