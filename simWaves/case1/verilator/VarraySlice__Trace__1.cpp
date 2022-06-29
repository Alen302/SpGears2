// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VarraySlice__Syms.h"


void VarraySlice___024root__trace_chg_sub_8(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_8\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1092);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        tracep->chgCData(oldp+0,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_risingOccupancy)) 
                                    & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_ptrMatch)) 
                                   << 6U) | (0x3fU 
                                             & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_popPtr_value) 
                                                - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+1,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_risingOccupancy)) 
                                    & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_ptrMatch)) 
                                   << 6U) | (0x3fU 
                                             & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_popPtr_value) 
                                                - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+2,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_risingOccupancy)) 
                                    & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_ptrMatch)) 
                                   << 6U) | (0x3fU 
                                             & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_popPtr_value) 
                                                - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+3,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_risingOccupancy)) 
                                    & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_ptrMatch)) 
                                   << 6U) | (0x3fU 
                                             & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_popPtr_value) 
                                                - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+4,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_risingOccupancy)) 
                                    & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_ptrMatch)) 
                                   << 6U) | (0x3fU 
                                             & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_popPtr_value) 
                                                - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+5,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_risingOccupancy)) 
                                    & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_ptrMatch)) 
                                   << 6U) | (0x3fU 
                                             & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_popPtr_value) 
                                                - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+6,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_risingOccupancy)) 
                                    & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_ptrMatch)) 
                                   << 6U) | (0x3fU 
                                             & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_popPtr_value) 
                                                - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+7,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_risingOccupancy)) 
                                    & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_ptrMatch)) 
                                   << 6U) | (0x3fU 
                                             & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_popPtr_value) 
                                                - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+8,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_risingOccupancy)) 
                                    & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_ptrMatch)) 
                                   << 6U) | (0x3fU 
                                             & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_popPtr_value) 
                                                - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+9,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_risingOccupancy)) 
                                    & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_ptrMatch)) 
                                   << 6U) | (0x3fU 
                                             & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_popPtr_value) 
                                                - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+10,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+11,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+12,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+13,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+14,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+15,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+16,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+17,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+18,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+19,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+20,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+21,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+22,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+23,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+24,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+25,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+26,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+27,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+28,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+29,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+30,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+31,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+32,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+33,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+34,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+35,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+36,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+37,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+38,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+39,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+40,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+41,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+42,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+43,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+44,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+45,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+46,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+47,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+48,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+49,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+50,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+51,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+52,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+53,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+54,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_pushPtr_value))))),7);
    }
}

void VarraySlice___024root__trace_chg_sub_9(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_9\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1147);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        tracep->chgCData(oldp+0,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_risingOccupancy)) 
                                    & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_ptrMatch)) 
                                   << 6U) | (0x3fU 
                                             & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_popPtr_value) 
                                                - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+1,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_risingOccupancy)) 
                                    & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_ptrMatch)) 
                                   << 6U) | (0x3fU 
                                             & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_popPtr_value) 
                                                - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+2,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_risingOccupancy)) 
                                    & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_ptrMatch)) 
                                   << 6U) | (0x3fU 
                                             & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_popPtr_value) 
                                                - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+3,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_risingOccupancy)) 
                                    & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_ptrMatch)) 
                                   << 6U) | (0x3fU 
                                             & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_popPtr_value) 
                                                - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+4,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_risingOccupancy)) 
                                    & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_ptrMatch)) 
                                   << 6U) | (0x3fU 
                                             & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_popPtr_value) 
                                                - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+5,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_risingOccupancy)) 
                                    & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_ptrMatch)) 
                                   << 6U) | (0x3fU 
                                             & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_popPtr_value) 
                                                - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+6,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_risingOccupancy)) 
                                    & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_ptrMatch)) 
                                   << 6U) | (0x3fU 
                                             & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_popPtr_value) 
                                                - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+7,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_risingOccupancy)) 
                                    & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_ptrMatch)) 
                                   << 6U) | (0x3fU 
                                             & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_popPtr_value) 
                                                - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+8,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_risingOccupancy)) 
                                    & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_ptrMatch)) 
                                   << 6U) | (0x3fU 
                                             & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_popPtr_value) 
                                                - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+9,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_risingOccupancy)) 
                                    & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_ptrMatch)) 
                                   << 6U) | (0x3fU 
                                             & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_popPtr_value) 
                                                - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+10,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+11,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+12,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+13,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+14,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+15,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+16,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+17,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+18,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+19,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+20,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+21,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+22,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+23,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+24,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+25,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+26,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+27,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+28,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+29,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+30,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+31,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+32,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+33,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+34,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+35,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+36,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+37,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+38,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+39,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+40,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+41,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+42,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+43,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+44,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+45,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+46,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+47,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+48,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+49,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+50,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+51,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+52,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_120__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_120__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_120__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_120__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+53,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_121__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_121__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_121__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_121__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+54,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_122__DOT__logic_risingOccupancy)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_122__DOT__logic_ptrMatch)) 
                                    << 6U) | (0x3fU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_122__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_122__DOT__logic_pushPtr_value))))),7);
    }
}

void VarraySlice___024root__trace_chg_sub_10(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_10\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1202);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        tracep->chgCData(oldp+0,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_123__DOT__logic_risingOccupancy)) 
                                    & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_123__DOT__logic_ptrMatch)) 
                                   << 6U) | (0x3fU 
                                             & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_123__DOT__logic_popPtr_value) 
                                                - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_123__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+1,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_124__DOT__logic_risingOccupancy)) 
                                    & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_124__DOT__logic_ptrMatch)) 
                                   << 6U) | (0x3fU 
                                             & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_124__DOT__logic_popPtr_value) 
                                                - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_124__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+2,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_125__DOT__logic_risingOccupancy)) 
                                    & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_125__DOT__logic_ptrMatch)) 
                                   << 6U) | (0x3fU 
                                             & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_125__DOT__logic_popPtr_value) 
                                                - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_125__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+3,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_126__DOT__logic_risingOccupancy)) 
                                    & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_126__DOT__logic_ptrMatch)) 
                                   << 6U) | (0x3fU 
                                             & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_126__DOT__logic_popPtr_value) 
                                                - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_126__DOT__logic_pushPtr_value))))),7);
        tracep->chgCData(oldp+4,(((((~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_127__DOT__logic_risingOccupancy)) 
                                    & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_127__DOT__logic_ptrMatch)) 
                                   << 6U) | (0x3fU 
                                             & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_127__DOT__logic_popPtr_value) 
                                                - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_127__DOT__logic_pushPtr_value))))),7);
        tracep->chgBit(oldp+5,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+6,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_pushPtr_value) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+7,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+8,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_pushPtr_value) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+9,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+10,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+11,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+12,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+13,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+14,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+15,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+16,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+17,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+18,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+19,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+20,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+21,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+22,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+23,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+24,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+25,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+26,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+27,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+28,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+29,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+30,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+31,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+32,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+33,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+34,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+35,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+36,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+37,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+38,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+39,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+40,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+41,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+42,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+43,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+44,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+45,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+46,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+47,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+48,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+49,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+50,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+51,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+52,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+53,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+54,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+55,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_120__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_120__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+56,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_120__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_120__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+57,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_121__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_121__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+58,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_121__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_121__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+59,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_122__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_122__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+60,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_122__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_122__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+61,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_123__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_123__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+62,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_123__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_123__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+63,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_124__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_124__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+64,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_124__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_124__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+65,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_125__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_125__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+66,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_125__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_125__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+67,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_126__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_126__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+68,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_126__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_126__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+69,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_127__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_127__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+70,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_127__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_127__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+71,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+72,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+73,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+74,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+75,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+76,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+77,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+78,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+79,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+80,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+81,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+82,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+83,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+84,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+85,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+86,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+87,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+88,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+89,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+90,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+91,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+92,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+93,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+94,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+95,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+96,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+97,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+98,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+99,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+100,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_pushPtr_value) 
                                             - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+101,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_ptrMatch) 
                                  & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+102,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_pushPtr_value) 
                                             - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+103,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_ptrMatch) 
                                  & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+104,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_pushPtr_value) 
                                             - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popPtr_value)))),6);
    }
}

void VarraySlice___024root__trace_chg_sub_11(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_11\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1307);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        tracep->chgBit(oldp+0,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+1,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_pushPtr_value) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+2,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+3,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_pushPtr_value) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+4,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+5,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_pushPtr_value) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+6,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+7,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_pushPtr_value) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+8,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+9,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_pushPtr_value) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+10,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+11,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+12,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+13,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+14,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+15,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+16,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+17,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+18,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+19,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+20,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+21,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+22,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+23,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+24,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+25,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+26,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+27,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+28,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+29,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+30,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+31,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+32,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+33,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+34,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+35,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+36,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+37,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+38,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+39,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+40,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+41,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+42,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+43,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+44,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+45,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+46,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+47,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+48,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+49,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+50,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+51,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+52,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+53,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+54,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+55,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+56,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+57,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+58,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+59,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+60,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+61,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+62,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+63,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+64,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+65,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+66,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+67,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+68,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+69,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+70,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+71,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+72,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+73,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+74,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+75,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+76,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+77,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+78,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+79,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+80,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+81,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+82,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+83,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+84,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+85,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+86,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+87,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+88,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+89,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+90,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+91,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+92,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+93,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+94,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+95,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+96,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+97,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+98,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+99,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+100,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_ptrMatch) 
                                  & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+101,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_pushPtr_value) 
                                             - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+102,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_ptrMatch) 
                                  & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+103,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_pushPtr_value) 
                                             - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+104,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_ptrMatch) 
                                  & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+105,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_pushPtr_value) 
                                             - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+106,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_ptrMatch) 
                                  & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+107,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_pushPtr_value) 
                                             - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+108,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_ptrMatch) 
                                  & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+109,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_pushPtr_value) 
                                             - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_popPtr_value)))),6);
    }
}

void VarraySlice___024root__trace_chg_sub_12(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_12\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1417);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        tracep->chgBit(oldp+0,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+1,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_pushPtr_value) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+2,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+3,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_pushPtr_value) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+4,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+5,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_pushPtr_value) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+6,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+7,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_pushPtr_value) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+8,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_ptrMatch) 
                                & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+9,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_pushPtr_value) 
                                           - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+10,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+11,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+12,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+13,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+14,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+15,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+16,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+17,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+18,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+19,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+20,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+21,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+22,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+23,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+24,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+25,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+26,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+27,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+28,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+29,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+30,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+31,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+32,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+33,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+34,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+35,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+36,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+37,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+38,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+39,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+40,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+41,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+42,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+43,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_popPtr_value)))),6);
        tracep->chgBit(oldp+44,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_ptrMatch) 
                                 & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_risingOccupancy)))));
        tracep->chgCData(oldp+45,((0x3fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_pushPtr_value) 
                                            - (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_popPtr_value)))),6);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        tracep->chgBit(oldp+46,(((0x2000U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_0_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_0_willIncrement))));
        tracep->chgBit(oldp+47,(((0x2000U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_1_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_1_willIncrement))));
        tracep->chgBit(oldp+48,(((0x2000U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_2_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_2_willIncrement))));
        tracep->chgBit(oldp+49,(((0x2000U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_3_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_3_willIncrement))));
        tracep->chgBit(oldp+50,(((0x2000U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_4_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_4_willIncrement))));
        tracep->chgBit(oldp+51,(((0x2000U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_5_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_5_willIncrement))));
        tracep->chgBit(oldp+52,(((0x2000U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_6_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_6_willIncrement))));
        tracep->chgBit(oldp+53,(((0x2000U == (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_7_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_7_willIncrement))));
        tracep->chgBit(oldp+54,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_0_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_0_willIncrement))));
        tracep->chgBit(oldp+55,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_1_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_1_willIncrement))));
        tracep->chgBit(oldp+56,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_2_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_2_willIncrement))));
        tracep->chgBit(oldp+57,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_3_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_3_willIncrement))));
        tracep->chgBit(oldp+58,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_4_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_4_willIncrement))));
        tracep->chgBit(oldp+59,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_5_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_5_willIncrement))));
        tracep->chgBit(oldp+60,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_6_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_6_willIncrement))));
        tracep->chgBit(oldp+61,(((0x40U == (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_7_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__outSliceNumb_7_willIncrement))));
        tracep->chgBit(oldp+62,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+63,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+64,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+65,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+66,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+67,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+68,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+69,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+70,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+71,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+72,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+73,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+74,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+75,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+76,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+77,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+78,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+79,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+80,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+81,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+82,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+83,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+84,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+85,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+86,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+87,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_120__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_120__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+88,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_121__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_121__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+89,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_122__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_122__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+90,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_123__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_123__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+91,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_124__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_124__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+92,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_125__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_125__DOT__logic_popPtr_willIncrement))));
    }
}

void VarraySlice___024root__trace_chg_sub_13(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_13\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1510);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        tracep->chgBit(oldp+0,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_126__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_126__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+1,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_127__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_127__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+2,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+3,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+4,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+5,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+6,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+7,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+8,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+9,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+10,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+11,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+12,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+13,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+14,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+15,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+16,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+17,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+18,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+19,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+20,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+21,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+22,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+23,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+24,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+25,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+26,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+27,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+28,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+29,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+30,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+31,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+32,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+33,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+34,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+35,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+36,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+37,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+38,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+39,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+40,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+41,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+42,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+43,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+44,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+45,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+46,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+47,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+48,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+49,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+50,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+51,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+52,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+53,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+54,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+55,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+56,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+57,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+58,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+59,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+60,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+61,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+62,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+63,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+64,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+65,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+66,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+67,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+68,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+69,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+70,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+71,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+72,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+73,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+74,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+75,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+76,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+77,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+78,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+79,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+80,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+81,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+82,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_popPtr_willIncrement))));
    }
}

void VarraySlice___024root__trace_chg_sub_14(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_14\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1593);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        tracep->chgBit(oldp+0,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+1,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+2,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+3,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+4,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+5,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+6,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+7,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+8,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+9,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_popPtr_value)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+10,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+11,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+12,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_popPtr_willIncrement))));
        tracep->chgBit(oldp+13,(((0x3fU == (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_popPtr_value)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_popPtr_willIncrement))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgIData(oldp+14,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+15,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+16,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+17,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+18,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+19,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+20,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+21,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+22,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+23,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+24,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+25,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+26,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+27,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+28,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+29,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+30,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+31,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+32,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+33,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+34,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+35,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+36,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+37,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+38,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+39,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+40,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+41,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+42,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+43,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+44,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+45,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+46,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+47,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+48,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+49,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+50,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+51,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+52,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+53,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+54,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+55,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+56,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+57,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+58,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+59,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+60,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+61,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+62,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+63,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+64,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+65,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+66,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+67,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+68,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+69,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+70,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+71,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+72,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+73,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+74,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+75,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+76,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+77,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+78,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+79,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+80,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+81,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+82,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+83,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+84,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+85,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+86,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+87,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+88,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+89,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+90,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+91,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+92,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+93,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+94,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+95,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+96,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+97,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+98,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+99,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+100,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+101,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+102,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+103,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+104,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+105,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+106,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+107,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+108,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+109,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+110,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+111,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+112,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+113,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+114,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_100__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+115,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_101__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+116,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_102__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+117,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_103__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+118,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_104__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+119,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_105__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+120,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_106__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+121,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_107__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+122,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_108__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+123,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_109__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+124,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_110__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+125,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_111__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+126,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_112__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+127,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_113__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+128,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_114__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+129,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_115__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+130,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_116__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+131,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_117__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+132,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_118__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+133,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_119__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+134,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_120__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+135,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_121__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+136,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_122__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+137,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_123__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+138,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_124__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+139,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_125__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+140,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_126__DOT___zz_logic_ram_port0),32);
        tracep->chgIData(oldp+141,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_127__DOT___zz_logic_ram_port0),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgBit(oldp+142,(vlSymsp->TOP__arraySlice.inputStreamArrayData_ready));
        tracep->chgBit(oldp+143,(vlSymsp->TOP__arraySlice.outputStreamArrayData_0_valid));
        tracep->chgIData(oldp+144,(vlSymsp->TOP__arraySlice.outputStreamArrayData_0_payload),32);
        tracep->chgBit(oldp+145,(vlSymsp->TOP__arraySlice.outputStreamArrayData_1_valid));
        tracep->chgIData(oldp+146,(vlSymsp->TOP__arraySlice.outputStreamArrayData_1_payload),32);
        tracep->chgBit(oldp+147,(vlSymsp->TOP__arraySlice.outputStreamArrayData_2_valid));
        tracep->chgIData(oldp+148,(vlSymsp->TOP__arraySlice.outputStreamArrayData_2_payload),32);
        tracep->chgBit(oldp+149,(vlSymsp->TOP__arraySlice.outputStreamArrayData_3_valid));
        tracep->chgIData(oldp+150,(vlSymsp->TOP__arraySlice.outputStreamArrayData_3_payload),32);
        tracep->chgBit(oldp+151,(vlSymsp->TOP__arraySlice.outputStreamArrayData_4_valid));
        tracep->chgIData(oldp+152,(vlSymsp->TOP__arraySlice.outputStreamArrayData_4_payload),32);
        tracep->chgBit(oldp+153,(vlSymsp->TOP__arraySlice.outputStreamArrayData_5_valid));
        tracep->chgIData(oldp+154,(vlSymsp->TOP__arraySlice.outputStreamArrayData_5_payload),32);
        tracep->chgBit(oldp+155,(vlSymsp->TOP__arraySlice.outputStreamArrayData_6_valid));
        tracep->chgIData(oldp+156,(vlSymsp->TOP__arraySlice.outputStreamArrayData_6_payload),32);
        tracep->chgBit(oldp+157,(vlSymsp->TOP__arraySlice.outputStreamArrayData_7_valid));
        tracep->chgIData(oldp+158,(vlSymsp->TOP__arraySlice.outputStreamArrayData_7_payload),32);
        tracep->chgBit(oldp+159,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0__DOT__logic_full)))));
        tracep->chgBit(oldp+160,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0_io_pop_valid));
        tracep->chgCData(oldp+161,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_0_io_occupancy),7);
        tracep->chgBit(oldp+162,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1__DOT__logic_full)))));
        tracep->chgBit(oldp+163,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1_io_pop_valid));
        tracep->chgCData(oldp+164,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_1_io_occupancy),7);
        tracep->chgBit(oldp+165,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_full)))));
        tracep->chgBit(oldp+166,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2_io_pop_valid));
        tracep->chgCData(oldp+167,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2_io_occupancy),7);
        tracep->chgBit(oldp+168,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_full)))));
        tracep->chgBit(oldp+169,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3_io_pop_valid));
        tracep->chgCData(oldp+170,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3_io_occupancy),7);
        tracep->chgBit(oldp+171,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_full)))));
        tracep->chgBit(oldp+172,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4_io_pop_valid));
        tracep->chgCData(oldp+173,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4_io_occupancy),7);
        tracep->chgBit(oldp+174,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_full)))));
        tracep->chgBit(oldp+175,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5_io_pop_valid));
        tracep->chgCData(oldp+176,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5_io_occupancy),7);
        tracep->chgBit(oldp+177,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_full)))));
        tracep->chgBit(oldp+178,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6_io_pop_valid));
        tracep->chgCData(oldp+179,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6_io_occupancy),7);
        tracep->chgBit(oldp+180,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_full)))));
        tracep->chgBit(oldp+181,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7_io_pop_valid));
        tracep->chgCData(oldp+182,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7_io_occupancy),7);
        tracep->chgBit(oldp+183,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_full)))));
        tracep->chgBit(oldp+184,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8_io_pop_valid));
        tracep->chgCData(oldp+185,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8_io_occupancy),7);
        tracep->chgBit(oldp+186,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_full)))));
        tracep->chgBit(oldp+187,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9_io_pop_valid));
        tracep->chgCData(oldp+188,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9_io_occupancy),7);
        tracep->chgBit(oldp+189,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10__DOT__logic_full)))));
        tracep->chgBit(oldp+190,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10_io_pop_valid));
        tracep->chgCData(oldp+191,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_10_io_occupancy),7);
        tracep->chgBit(oldp+192,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11__DOT__logic_full)))));
        tracep->chgBit(oldp+193,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11_io_pop_valid));
        tracep->chgCData(oldp+194,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_11_io_occupancy),7);
        tracep->chgBit(oldp+195,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12__DOT__logic_full)))));
        tracep->chgBit(oldp+196,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12_io_pop_valid));
        tracep->chgCData(oldp+197,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_12_io_occupancy),7);
        tracep->chgBit(oldp+198,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13__DOT__logic_full)))));
        tracep->chgBit(oldp+199,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13_io_pop_valid));
        tracep->chgCData(oldp+200,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_13_io_occupancy),7);
        tracep->chgBit(oldp+201,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14__DOT__logic_full)))));
        tracep->chgBit(oldp+202,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14_io_pop_valid));
        tracep->chgCData(oldp+203,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_14_io_occupancy),7);
        tracep->chgBit(oldp+204,((1U & (~ (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_full)))));
        tracep->chgBit(oldp+205,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15_io_pop_valid));
        tracep->chgCData(oldp+206,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15_io_occupancy),7);
    }
}
