// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VarraySlice__Syms.h"


void VarraySlice___024root__trace_chg_sub_24(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_24\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 3543);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        tracep->chgBit(oldp+0,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+1,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+2,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+3,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+4,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_pushing));
        tracep->chgBit(oldp+5,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_popping));
        tracep->chgBit(oldp+6,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_pushing) 
                                != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_15__DOT__logic_popping))));
        tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+8,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+9,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+10,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+11,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_pushing));
        tracep->chgBit(oldp+12,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_popping));
        tracep->chgBit(oldp+13,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_16__DOT__logic_popping))));
        tracep->chgBit(oldp+14,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+15,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+16,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+17,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+18,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_pushing));
        tracep->chgBit(oldp+19,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_popping));
        tracep->chgBit(oldp+20,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_17__DOT__logic_popping))));
        tracep->chgBit(oldp+21,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+22,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+23,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+24,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+25,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_pushing));
        tracep->chgBit(oldp+26,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_popping));
        tracep->chgBit(oldp+27,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_18__DOT__logic_popping))));
        tracep->chgBit(oldp+28,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+29,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+30,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+31,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+32,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_pushing));
        tracep->chgBit(oldp+33,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_popping));
        tracep->chgBit(oldp+34,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_19__DOT__logic_popping))));
        tracep->chgBit(oldp+35,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+36,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+37,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+38,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+39,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_pushing));
        tracep->chgBit(oldp+40,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_popping));
        tracep->chgBit(oldp+41,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_2__DOT__logic_popping))));
        tracep->chgBit(oldp+42,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+43,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+44,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+45,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+46,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_pushing));
        tracep->chgBit(oldp+47,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_popping));
        tracep->chgBit(oldp+48,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_20__DOT__logic_popping))));
        tracep->chgBit(oldp+49,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+50,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+51,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+52,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+53,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_pushing));
        tracep->chgBit(oldp+54,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_popping));
        tracep->chgBit(oldp+55,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_21__DOT__logic_popping))));
        tracep->chgBit(oldp+56,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+57,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+58,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+59,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+60,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_pushing));
        tracep->chgBit(oldp+61,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_popping));
        tracep->chgBit(oldp+62,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_22__DOT__logic_popping))));
        tracep->chgBit(oldp+63,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+64,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+65,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+66,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+67,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_pushing));
        tracep->chgBit(oldp+68,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_popping));
        tracep->chgBit(oldp+69,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_23__DOT__logic_popping))));
        tracep->chgBit(oldp+70,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+71,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+72,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+73,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+74,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_pushing));
        tracep->chgBit(oldp+75,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_popping));
        tracep->chgBit(oldp+76,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_24__DOT__logic_popping))));
        tracep->chgBit(oldp+77,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+78,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+79,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+80,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+81,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_pushing));
        tracep->chgBit(oldp+82,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_popping));
        tracep->chgBit(oldp+83,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_25__DOT__logic_popping))));
        tracep->chgBit(oldp+84,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+85,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+86,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+87,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+88,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_pushing));
        tracep->chgBit(oldp+89,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_popping));
        tracep->chgBit(oldp+90,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_26__DOT__logic_popping))));
        tracep->chgBit(oldp+91,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+92,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+93,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+94,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+95,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_pushing));
        tracep->chgBit(oldp+96,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_popping));
        tracep->chgBit(oldp+97,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_27__DOT__logic_popping))));
        tracep->chgBit(oldp+98,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+99,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+100,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+101,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+102,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_pushing));
        tracep->chgBit(oldp+103,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popping));
        tracep->chgBit(oldp+104,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_28__DOT__logic_popping))));
        tracep->chgBit(oldp+105,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+106,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+107,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+108,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+109,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_pushing));
        tracep->chgBit(oldp+110,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popping));
        tracep->chgBit(oldp+111,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_29__DOT__logic_popping))));
        tracep->chgBit(oldp+112,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+113,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+114,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+115,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+116,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_pushing));
        tracep->chgBit(oldp+117,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_popping));
        tracep->chgBit(oldp+118,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_3__DOT__logic_popping))));
        tracep->chgBit(oldp+119,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+120,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+121,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+122,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+123,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_pushing));
        tracep->chgBit(oldp+124,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popping));
        tracep->chgBit(oldp+125,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_30__DOT__logic_popping))));
        tracep->chgBit(oldp+126,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+127,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+128,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+129,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+130,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_pushing));
        tracep->chgBit(oldp+131,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popping));
        tracep->chgBit(oldp+132,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_31__DOT__logic_popping))));
        tracep->chgBit(oldp+133,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+134,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+135,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+136,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+137,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_pushing));
        tracep->chgBit(oldp+138,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popping));
        tracep->chgBit(oldp+139,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_32__DOT__logic_popping))));
        tracep->chgBit(oldp+140,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+141,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+142,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+143,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+144,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_pushing));
        tracep->chgBit(oldp+145,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popping));
        tracep->chgBit(oldp+146,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_33__DOT__logic_popping))));
        tracep->chgBit(oldp+147,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+148,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+149,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+150,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+151,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_pushing));
        tracep->chgBit(oldp+152,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popping));
        tracep->chgBit(oldp+153,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_34__DOT__logic_popping))));
        tracep->chgBit(oldp+154,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+155,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+156,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+157,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+158,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_pushing));
        tracep->chgBit(oldp+159,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popping));
        tracep->chgBit(oldp+160,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_35__DOT__logic_popping))));
        tracep->chgBit(oldp+161,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+162,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+163,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+164,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+165,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_pushing));
        tracep->chgBit(oldp+166,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popping));
        tracep->chgBit(oldp+167,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_36__DOT__logic_popping))));
        tracep->chgBit(oldp+168,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+169,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+170,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+171,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+172,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_pushing));
        tracep->chgBit(oldp+173,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_popping));
        tracep->chgBit(oldp+174,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_37__DOT__logic_popping))));
        tracep->chgBit(oldp+175,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+176,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+177,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+178,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+179,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_pushing));
        tracep->chgBit(oldp+180,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_popping));
        tracep->chgBit(oldp+181,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_38__DOT__logic_popping))));
        tracep->chgBit(oldp+182,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+183,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+184,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+185,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+186,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_pushing));
        tracep->chgBit(oldp+187,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_popping));
        tracep->chgBit(oldp+188,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_39__DOT__logic_popping))));
        tracep->chgBit(oldp+189,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+190,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+191,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+192,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+193,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_pushing));
        tracep->chgBit(oldp+194,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_popping));
        tracep->chgBit(oldp+195,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_4__DOT__logic_popping))));
        tracep->chgBit(oldp+196,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+197,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+198,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+199,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+200,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_pushing));
        tracep->chgBit(oldp+201,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_popping));
        tracep->chgBit(oldp+202,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_40__DOT__logic_popping))));
        tracep->chgBit(oldp+203,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+204,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+205,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+206,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+207,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_pushing));
        tracep->chgBit(oldp+208,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_popping));
        tracep->chgBit(oldp+209,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_41__DOT__logic_popping))));
        tracep->chgBit(oldp+210,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+211,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+212,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+213,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+214,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_pushing));
        tracep->chgBit(oldp+215,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_popping));
        tracep->chgBit(oldp+216,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_42__DOT__logic_popping))));
        tracep->chgBit(oldp+217,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_pushPtr_willIncrement));
    }
}

void VarraySlice___024root__trace_chg_sub_25(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_25\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 3761);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        tracep->chgCData(oldp+0,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+1,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+2,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+3,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_pushing));
        tracep->chgBit(oldp+4,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_popping));
        tracep->chgBit(oldp+5,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_pushing) 
                                != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_43__DOT__logic_popping))));
        tracep->chgBit(oldp+6,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+7,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+8,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+9,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+10,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_pushing));
        tracep->chgBit(oldp+11,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popping));
        tracep->chgBit(oldp+12,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_44__DOT__logic_popping))));
        tracep->chgBit(oldp+13,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+14,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+15,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+16,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+17,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_pushing));
        tracep->chgBit(oldp+18,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_popping));
        tracep->chgBit(oldp+19,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_45__DOT__logic_popping))));
        tracep->chgBit(oldp+20,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+21,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+22,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+23,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+24,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_pushing));
        tracep->chgBit(oldp+25,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_popping));
        tracep->chgBit(oldp+26,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_46__DOT__logic_popping))));
        tracep->chgBit(oldp+27,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+28,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+29,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+30,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+31,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_pushing));
        tracep->chgBit(oldp+32,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_popping));
        tracep->chgBit(oldp+33,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_47__DOT__logic_popping))));
        tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+35,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+36,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+37,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+38,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_pushing));
        tracep->chgBit(oldp+39,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_popping));
        tracep->chgBit(oldp+40,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_48__DOT__logic_popping))));
        tracep->chgBit(oldp+41,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+42,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+43,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+44,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+45,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_pushing));
        tracep->chgBit(oldp+46,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_popping));
        tracep->chgBit(oldp+47,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_49__DOT__logic_popping))));
        tracep->chgBit(oldp+48,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+49,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+50,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+51,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+52,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_pushing));
        tracep->chgBit(oldp+53,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_popping));
        tracep->chgBit(oldp+54,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_5__DOT__logic_popping))));
        tracep->chgBit(oldp+55,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+56,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+57,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+58,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+59,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_pushing));
        tracep->chgBit(oldp+60,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_popping));
        tracep->chgBit(oldp+61,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_50__DOT__logic_popping))));
        tracep->chgBit(oldp+62,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+63,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+64,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+65,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+66,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_pushing));
        tracep->chgBit(oldp+67,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_popping));
        tracep->chgBit(oldp+68,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_51__DOT__logic_popping))));
        tracep->chgBit(oldp+69,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+70,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+71,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+72,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+73,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_pushing));
        tracep->chgBit(oldp+74,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_popping));
        tracep->chgBit(oldp+75,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_52__DOT__logic_popping))));
        tracep->chgBit(oldp+76,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+77,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+78,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+79,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+80,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_pushing));
        tracep->chgBit(oldp+81,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_popping));
        tracep->chgBit(oldp+82,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_53__DOT__logic_popping))));
        tracep->chgBit(oldp+83,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+84,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+85,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+86,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+87,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_pushing));
        tracep->chgBit(oldp+88,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_popping));
        tracep->chgBit(oldp+89,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_54__DOT__logic_popping))));
        tracep->chgBit(oldp+90,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+91,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+92,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+93,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+94,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_pushing));
        tracep->chgBit(oldp+95,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_popping));
        tracep->chgBit(oldp+96,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_55__DOT__logic_popping))));
        tracep->chgBit(oldp+97,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+98,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+99,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+100,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+101,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_pushing));
        tracep->chgBit(oldp+102,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_popping));
        tracep->chgBit(oldp+103,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_56__DOT__logic_popping))));
        tracep->chgBit(oldp+104,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+105,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+106,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+107,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+108,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_pushing));
        tracep->chgBit(oldp+109,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_popping));
        tracep->chgBit(oldp+110,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_57__DOT__logic_popping))));
        tracep->chgBit(oldp+111,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+112,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+113,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+114,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+115,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_pushing));
        tracep->chgBit(oldp+116,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_popping));
        tracep->chgBit(oldp+117,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_58__DOT__logic_popping))));
        tracep->chgBit(oldp+118,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+119,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+120,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+121,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+122,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_pushing));
        tracep->chgBit(oldp+123,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_popping));
        tracep->chgBit(oldp+124,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_59__DOT__logic_popping))));
        tracep->chgBit(oldp+125,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+126,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+127,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+128,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+129,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_pushing));
        tracep->chgBit(oldp+130,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_popping));
        tracep->chgBit(oldp+131,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_6__DOT__logic_popping))));
        tracep->chgBit(oldp+132,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+133,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+134,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+135,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+136,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_pushing));
        tracep->chgBit(oldp+137,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_popping));
        tracep->chgBit(oldp+138,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_60__DOT__logic_popping))));
        tracep->chgBit(oldp+139,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+140,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+141,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+142,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+143,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_pushing));
        tracep->chgBit(oldp+144,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_popping));
        tracep->chgBit(oldp+145,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_61__DOT__logic_popping))));
        tracep->chgBit(oldp+146,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+147,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+148,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+149,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+150,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_pushing));
        tracep->chgBit(oldp+151,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_popping));
        tracep->chgBit(oldp+152,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_62__DOT__logic_popping))));
        tracep->chgBit(oldp+153,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+154,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+155,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+156,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+157,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_pushing));
        tracep->chgBit(oldp+158,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_popping));
        tracep->chgBit(oldp+159,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_63__DOT__logic_popping))));
        tracep->chgBit(oldp+160,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+161,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+162,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+163,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+164,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_pushing));
        tracep->chgBit(oldp+165,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_popping));
        tracep->chgBit(oldp+166,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_64__DOT__logic_popping))));
        tracep->chgBit(oldp+167,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+168,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+169,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+170,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+171,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_pushing));
        tracep->chgBit(oldp+172,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_popping));
        tracep->chgBit(oldp+173,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_65__DOT__logic_popping))));
        tracep->chgBit(oldp+174,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+175,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+176,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+177,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+178,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_pushing));
        tracep->chgBit(oldp+179,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_popping));
        tracep->chgBit(oldp+180,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_66__DOT__logic_popping))));
        tracep->chgBit(oldp+181,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+182,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+183,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+184,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+185,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_pushing));
        tracep->chgBit(oldp+186,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_popping));
        tracep->chgBit(oldp+187,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_67__DOT__logic_popping))));
        tracep->chgBit(oldp+188,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+189,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+190,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+191,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+192,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_pushing));
        tracep->chgBit(oldp+193,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_popping));
        tracep->chgBit(oldp+194,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_68__DOT__logic_popping))));
        tracep->chgBit(oldp+195,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+196,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+197,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+198,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+199,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_pushing));
        tracep->chgBit(oldp+200,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_popping));
        tracep->chgBit(oldp+201,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_69__DOT__logic_popping))));
        tracep->chgBit(oldp+202,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+203,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+204,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+205,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+206,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_pushing));
        tracep->chgBit(oldp+207,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_popping));
        tracep->chgBit(oldp+208,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_7__DOT__logic_popping))));
        tracep->chgBit(oldp+209,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+210,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+211,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+212,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+213,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_pushing));
        tracep->chgBit(oldp+214,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_popping));
        tracep->chgBit(oldp+215,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_70__DOT__logic_popping))));
        tracep->chgBit(oldp+216,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+217,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_pushPtr_valueNext),6);
    }
}

void VarraySlice___024root__trace_chg_sub_26(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_26\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 3979);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        tracep->chgBit(oldp+0,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+1,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+2,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_pushing));
        tracep->chgBit(oldp+3,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_popping));
        tracep->chgBit(oldp+4,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_pushing) 
                                != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_71__DOT__logic_popping))));
        tracep->chgBit(oldp+5,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+6,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+8,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+9,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_pushing));
        tracep->chgBit(oldp+10,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_popping));
        tracep->chgBit(oldp+11,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_72__DOT__logic_popping))));
        tracep->chgBit(oldp+12,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+13,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+14,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+15,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+16,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_pushing));
        tracep->chgBit(oldp+17,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_popping));
        tracep->chgBit(oldp+18,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_73__DOT__logic_popping))));
        tracep->chgBit(oldp+19,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+20,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+21,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+22,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+23,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_pushing));
        tracep->chgBit(oldp+24,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_popping));
        tracep->chgBit(oldp+25,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_74__DOT__logic_popping))));
        tracep->chgBit(oldp+26,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+27,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+28,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+29,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+30,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_pushing));
        tracep->chgBit(oldp+31,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_popping));
        tracep->chgBit(oldp+32,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_75__DOT__logic_popping))));
        tracep->chgBit(oldp+33,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+34,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+35,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+36,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+37,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_pushing));
        tracep->chgBit(oldp+38,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_popping));
        tracep->chgBit(oldp+39,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_76__DOT__logic_popping))));
        tracep->chgBit(oldp+40,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+41,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+42,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+43,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+44,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_pushing));
        tracep->chgBit(oldp+45,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_popping));
        tracep->chgBit(oldp+46,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_77__DOT__logic_popping))));
        tracep->chgBit(oldp+47,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+48,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+49,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+50,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+51,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_pushing));
        tracep->chgBit(oldp+52,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_popping));
        tracep->chgBit(oldp+53,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_78__DOT__logic_popping))));
        tracep->chgBit(oldp+54,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+55,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+56,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+57,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+58,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_pushing));
        tracep->chgBit(oldp+59,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_popping));
        tracep->chgBit(oldp+60,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_79__DOT__logic_popping))));
        tracep->chgBit(oldp+61,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+62,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+63,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+64,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+65,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_pushing));
        tracep->chgBit(oldp+66,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_popping));
        tracep->chgBit(oldp+67,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_8__DOT__logic_popping))));
        tracep->chgBit(oldp+68,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+69,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+70,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+71,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+72,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_pushing));
        tracep->chgBit(oldp+73,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_popping));
        tracep->chgBit(oldp+74,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_80__DOT__logic_popping))));
        tracep->chgBit(oldp+75,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+76,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+77,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+78,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+79,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_pushing));
        tracep->chgBit(oldp+80,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_popping));
        tracep->chgBit(oldp+81,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_81__DOT__logic_popping))));
        tracep->chgBit(oldp+82,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+83,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+84,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+85,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+86,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_pushing));
        tracep->chgBit(oldp+87,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_popping));
        tracep->chgBit(oldp+88,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_82__DOT__logic_popping))));
        tracep->chgBit(oldp+89,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+90,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+91,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+92,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+93,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_pushing));
        tracep->chgBit(oldp+94,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_popping));
        tracep->chgBit(oldp+95,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_pushing) 
                                 != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_83__DOT__logic_popping))));
        tracep->chgBit(oldp+96,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+97,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+98,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+99,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+100,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_pushing));
        tracep->chgBit(oldp+101,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_popping));
        tracep->chgBit(oldp+102,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_84__DOT__logic_popping))));
        tracep->chgBit(oldp+103,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+104,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+105,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+106,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+107,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_pushing));
        tracep->chgBit(oldp+108,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_popping));
        tracep->chgBit(oldp+109,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_85__DOT__logic_popping))));
        tracep->chgBit(oldp+110,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+111,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+112,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+113,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+114,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_pushing));
        tracep->chgBit(oldp+115,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_popping));
        tracep->chgBit(oldp+116,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_86__DOT__logic_popping))));
        tracep->chgBit(oldp+117,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+118,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+119,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+120,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+121,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_pushing));
        tracep->chgBit(oldp+122,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_popping));
        tracep->chgBit(oldp+123,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_87__DOT__logic_popping))));
        tracep->chgBit(oldp+124,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+125,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+126,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+127,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+128,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_pushing));
        tracep->chgBit(oldp+129,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_popping));
        tracep->chgBit(oldp+130,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_88__DOT__logic_popping))));
        tracep->chgBit(oldp+131,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+132,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+133,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+134,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+135,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_pushing));
        tracep->chgBit(oldp+136,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_popping));
        tracep->chgBit(oldp+137,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_89__DOT__logic_popping))));
        tracep->chgBit(oldp+138,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+139,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+140,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+141,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+142,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_pushing));
        tracep->chgBit(oldp+143,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_popping));
        tracep->chgBit(oldp+144,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_9__DOT__logic_popping))));
        tracep->chgBit(oldp+145,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+146,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+147,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+148,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+149,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_pushing));
        tracep->chgBit(oldp+150,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_popping));
        tracep->chgBit(oldp+151,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_90__DOT__logic_popping))));
        tracep->chgBit(oldp+152,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+153,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+154,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+155,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+156,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_pushing));
        tracep->chgBit(oldp+157,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_popping));
        tracep->chgBit(oldp+158,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_91__DOT__logic_popping))));
        tracep->chgBit(oldp+159,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+160,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+161,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+162,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+163,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_pushing));
        tracep->chgBit(oldp+164,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_popping));
        tracep->chgBit(oldp+165,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_92__DOT__logic_popping))));
        tracep->chgBit(oldp+166,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+167,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+168,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+169,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+170,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_pushing));
        tracep->chgBit(oldp+171,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_popping));
        tracep->chgBit(oldp+172,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_93__DOT__logic_popping))));
        tracep->chgBit(oldp+173,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+174,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+175,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+176,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+177,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_pushing));
        tracep->chgBit(oldp+178,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_popping));
        tracep->chgBit(oldp+179,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_94__DOT__logic_popping))));
        tracep->chgBit(oldp+180,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+181,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+182,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+183,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+184,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_pushing));
        tracep->chgBit(oldp+185,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_popping));
        tracep->chgBit(oldp+186,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_95__DOT__logic_popping))));
        tracep->chgBit(oldp+187,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+188,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+189,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+190,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+191,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_pushing));
        tracep->chgBit(oldp+192,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_popping));
        tracep->chgBit(oldp+193,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_96__DOT__logic_popping))));
        tracep->chgBit(oldp+194,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+195,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+196,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+197,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+198,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_pushing));
        tracep->chgBit(oldp+199,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_popping));
        tracep->chgBit(oldp+200,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_97__DOT__logic_popping))));
        tracep->chgBit(oldp+201,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+202,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+203,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+204,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+205,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_pushing));
        tracep->chgBit(oldp+206,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_popping));
        tracep->chgBit(oldp+207,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_98__DOT__logic_popping))));
        tracep->chgBit(oldp+208,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_pushPtr_willIncrement));
        tracep->chgCData(oldp+209,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_pushPtr_valueNext),6);
        tracep->chgBit(oldp+210,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_popPtr_willIncrement));
        tracep->chgCData(oldp+211,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_popPtr_valueNext),6);
        tracep->chgBit(oldp+212,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_pushing));
        tracep->chgBit(oldp+213,(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_popping));
        tracep->chgBit(oldp+214,(((IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_pushing) 
                                  != (IData)(vlSymsp->TOP__arraySlice.__PVT__fifoGroup_99__DOT__logic_popping))));
    }
    tracep->chgBit(oldp+215,(vlSelf->inputStreamArrayData_valid));
    tracep->chgBit(oldp+216,(vlSelf->inputStreamArrayData_ready));
}

void VarraySlice___024root__trace_chg_sub_27(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_27\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 4196);
    // Body
    tracep->chgIData(oldp+0,(vlSelf->inputStreamArrayData_payload),32);
    tracep->chgCData(oldp+1,(vlSelf->inputFeatureMapWidth),8);
    tracep->chgCData(oldp+2,(vlSelf->inputFeatureMapHeight),7);
    tracep->chgCData(oldp+3,(vlSelf->outputFeatureMapHeight),4);
    tracep->chgCData(oldp+4,(vlSelf->outputFeatureMapWidth),5);
    tracep->chgBit(oldp+5,(vlSelf->outputStreamArrayData_0_valid));
    tracep->chgBit(oldp+6,(vlSelf->outputStreamArrayData_0_ready));
    tracep->chgIData(oldp+7,(vlSelf->outputStreamArrayData_0_payload),32);
    tracep->chgBit(oldp+8,(vlSelf->outputStreamArrayData_1_valid));
    tracep->chgBit(oldp+9,(vlSelf->outputStreamArrayData_1_ready));
    tracep->chgIData(oldp+10,(vlSelf->outputStreamArrayData_1_payload),32);
    tracep->chgBit(oldp+11,(vlSelf->outputStreamArrayData_2_valid));
    tracep->chgBit(oldp+12,(vlSelf->outputStreamArrayData_2_ready));
    tracep->chgIData(oldp+13,(vlSelf->outputStreamArrayData_2_payload),32);
    tracep->chgBit(oldp+14,(vlSelf->outputStreamArrayData_3_valid));
    tracep->chgBit(oldp+15,(vlSelf->outputStreamArrayData_3_ready));
    tracep->chgIData(oldp+16,(vlSelf->outputStreamArrayData_3_payload),32);
    tracep->chgBit(oldp+17,(vlSelf->outputStreamArrayData_4_valid));
    tracep->chgBit(oldp+18,(vlSelf->outputStreamArrayData_4_ready));
    tracep->chgIData(oldp+19,(vlSelf->outputStreamArrayData_4_payload),32);
    tracep->chgBit(oldp+20,(vlSelf->outputStreamArrayData_5_valid));
    tracep->chgBit(oldp+21,(vlSelf->outputStreamArrayData_5_ready));
    tracep->chgIData(oldp+22,(vlSelf->outputStreamArrayData_5_payload),32);
    tracep->chgBit(oldp+23,(vlSelf->outputStreamArrayData_6_valid));
    tracep->chgBit(oldp+24,(vlSelf->outputStreamArrayData_6_ready));
    tracep->chgIData(oldp+25,(vlSelf->outputStreamArrayData_6_payload),32);
    tracep->chgBit(oldp+26,(vlSelf->outputStreamArrayData_7_valid));
    tracep->chgBit(oldp+27,(vlSelf->outputStreamArrayData_7_ready));
    tracep->chgIData(oldp+28,(vlSelf->outputStreamArrayData_7_payload),32);
    tracep->chgBit(oldp+29,(vlSelf->clk));
    tracep->chgBit(oldp+30,(vlSelf->resetn));
    tracep->chgBit(oldp+31,(((IData)(vlSelf->inputStreamArrayData_valid) 
                             & (IData)(vlSymsp->TOP__arraySlice.inputStreamArrayData_ready))));
    tracep->chgBit(oldp+32,((((IData)(vlSymsp->TOP__arraySlice.__PVT___zz_when_ArraySlice_l203) 
                              == (0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__hReg) 
                                           - (IData)(1U)))) 
                             & ((IData)(vlSelf->inputStreamArrayData_valid) 
                                & (IData)(vlSymsp->TOP__arraySlice.inputStreamArrayData_ready)))));
    tracep->chgBit(oldp+33,(vlSymsp->TOP__arraySlice.debug_0));
    tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.debug_1));
    tracep->chgBit(oldp+35,(vlSymsp->TOP__arraySlice.debug_2));
    tracep->chgBit(oldp+36,(vlSymsp->TOP__arraySlice.debug_3));
    tracep->chgBit(oldp+37,(vlSymsp->TOP__arraySlice.debug_4));
    tracep->chgBit(oldp+38,(vlSymsp->TOP__arraySlice.debug_5));
    tracep->chgBit(oldp+39,(vlSymsp->TOP__arraySlice.debug_6));
    tracep->chgBit(oldp+40,(vlSymsp->TOP__arraySlice.debug_7));
    tracep->chgSData(oldp+41,(vlSymsp->TOP__arraySlice.realValue_0),9);
    tracep->chgBit(oldp+42,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+43,(vlSymsp->TOP__arraySlice.realValue_0_1),9);
    tracep->chgBit(oldp+44,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_1) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+45,(vlSymsp->TOP__arraySlice.realValue_0_2),9);
    tracep->chgBit(oldp+46,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_2) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+47,(vlSymsp->TOP__arraySlice.realValue_0_3),9);
    tracep->chgBit(oldp+48,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_3) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+49,(vlSymsp->TOP__arraySlice.realValue_0_4),9);
    tracep->chgBit(oldp+50,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_4) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+51,(vlSymsp->TOP__arraySlice.realValue_0_5),9);
    tracep->chgBit(oldp+52,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_5) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+53,(vlSymsp->TOP__arraySlice.realValue_0_6),9);
    tracep->chgBit(oldp+54,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_6) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+55,(vlSymsp->TOP__arraySlice.realValue_0_7),9);
    tracep->chgBit(oldp+56,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_7) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+57,(((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_0_valid) 
                             & (IData)(vlSelf->outputStreamArrayData_0_ready))));
    tracep->chgCData(oldp+58,(vlSymsp->TOP__arraySlice.realValue1_0),8);
    tracep->chgBit(oldp+59,(vlSymsp->TOP__arraySlice.debug_0_1));
    tracep->chgBit(oldp+60,(vlSymsp->TOP__arraySlice.debug_1_1));
    tracep->chgBit(oldp+61,(vlSymsp->TOP__arraySlice.debug_2_1));
    tracep->chgBit(oldp+62,(vlSymsp->TOP__arraySlice.debug_3_1));
    tracep->chgBit(oldp+63,(vlSymsp->TOP__arraySlice.debug_4_1));
    tracep->chgBit(oldp+64,(vlSymsp->TOP__arraySlice.debug_5_1));
    tracep->chgBit(oldp+65,(vlSymsp->TOP__arraySlice.debug_6_1));
    tracep->chgBit(oldp+66,(vlSymsp->TOP__arraySlice.debug_7_1));
    tracep->chgSData(oldp+67,(vlSymsp->TOP__arraySlice.realValue_0_8),9);
    tracep->chgBit(oldp+68,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_8) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+69,(vlSymsp->TOP__arraySlice.realValue_0_9),9);
    tracep->chgBit(oldp+70,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_9) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+71,(vlSymsp->TOP__arraySlice.realValue_0_10),9);
    tracep->chgBit(oldp+72,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_10) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+73,(vlSymsp->TOP__arraySlice.realValue_0_11),9);
    tracep->chgBit(oldp+74,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_11) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+75,(vlSymsp->TOP__arraySlice.realValue_0_12),9);
    tracep->chgBit(oldp+76,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_12) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+77,(vlSymsp->TOP__arraySlice.realValue_0_13),9);
    tracep->chgBit(oldp+78,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_13) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+79,(vlSymsp->TOP__arraySlice.realValue_0_14),9);
    tracep->chgBit(oldp+80,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_14) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+81,(vlSymsp->TOP__arraySlice.realValue_0_15),9);
    tracep->chgBit(oldp+82,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_15) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+83,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_1) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_1)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_1)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_1)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_1)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_1)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_1)))))));
    tracep->chgCData(oldp+84,(vlSymsp->TOP__arraySlice.realValue1_0_1),8);
    tracep->chgBit(oldp+85,(vlSymsp->TOP__arraySlice.debug_0_2));
    tracep->chgBit(oldp+86,(vlSymsp->TOP__arraySlice.debug_1_2));
    tracep->chgBit(oldp+87,(vlSymsp->TOP__arraySlice.debug_2_2));
    tracep->chgBit(oldp+88,(vlSymsp->TOP__arraySlice.debug_3_2));
    tracep->chgBit(oldp+89,(vlSymsp->TOP__arraySlice.debug_4_2));
    tracep->chgBit(oldp+90,(vlSymsp->TOP__arraySlice.debug_5_2));
    tracep->chgBit(oldp+91,(vlSymsp->TOP__arraySlice.debug_6_2));
    tracep->chgBit(oldp+92,(vlSymsp->TOP__arraySlice.debug_7_2));
    tracep->chgSData(oldp+93,(vlSymsp->TOP__arraySlice.realValue_0_16),9);
    tracep->chgBit(oldp+94,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_16) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+95,(vlSymsp->TOP__arraySlice.realValue_0_17),9);
    tracep->chgBit(oldp+96,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_17) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

void VarraySlice___024root__trace_chg_sub_28(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_28\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 4293);
    // Body
    tracep->chgSData(oldp+0,(vlSymsp->TOP__arraySlice.realValue_0_18),9);
    tracep->chgBit(oldp+1,(((0xffU & ((IData)(6U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_18) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                              + (0x7fU 
                                                 & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                    << 1U)))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+2,(vlSymsp->TOP__arraySlice.realValue_0_19),9);
    tracep->chgBit(oldp+3,(((0xffU & ((IData)(5U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_19) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                              + (0x7fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+4,(vlSymsp->TOP__arraySlice.realValue_0_20),9);
    tracep->chgBit(oldp+5,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 2U)) <= (0x1ffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_20) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                           << 2U)))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+6,(vlSymsp->TOP__arraySlice.realValue_0_21),9);
    tracep->chgBit(oldp+7,(((0x7fU & ((IData)(3U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_21) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0xffU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+8,(vlSymsp->TOP__arraySlice.realValue_0_22),9);
    tracep->chgBit(oldp+9,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 1U)) <= (0x1ffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_22) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(6U) 
                                                           * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+10,(vlSymsp->TOP__arraySlice.realValue_0_23),9);
    tracep->chgBit(oldp+11,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_23) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+12,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_2) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_2)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_2)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_2)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_2)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_2)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_2)))))));
    tracep->chgBit(oldp+13,(((0U == (0x3fffU & VL_MODDIV_III(14, 
                                                             (0x3fffU 
                                                              & ((IData)(1U) 
                                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_0_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                             & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_0_valid) 
                                & (IData)(vlSelf->outputStreamArrayData_0_ready)))));
    tracep->chgCData(oldp+14,(vlSymsp->TOP__arraySlice.realValue1_0_2),8);
    tracep->chgBit(oldp+15,(vlSymsp->TOP__arraySlice.debug_0_3));
    tracep->chgBit(oldp+16,(vlSymsp->TOP__arraySlice.debug_1_3));
    tracep->chgBit(oldp+17,(vlSymsp->TOP__arraySlice.debug_2_3));
    tracep->chgBit(oldp+18,(vlSymsp->TOP__arraySlice.debug_3_3));
    tracep->chgBit(oldp+19,(vlSymsp->TOP__arraySlice.debug_4_3));
    tracep->chgBit(oldp+20,(vlSymsp->TOP__arraySlice.debug_5_3));
    tracep->chgBit(oldp+21,(vlSymsp->TOP__arraySlice.debug_6_3));
    tracep->chgBit(oldp+22,(vlSymsp->TOP__arraySlice.debug_7_3));
    tracep->chgSData(oldp+23,(vlSymsp->TOP__arraySlice.realValue_0_24),9);
    tracep->chgBit(oldp+24,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_24) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+25,(vlSymsp->TOP__arraySlice.realValue_0_25),9);
    tracep->chgBit(oldp+26,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_25) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+27,(vlSymsp->TOP__arraySlice.realValue_0_26),9);
    tracep->chgBit(oldp+28,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_26) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+29,(vlSymsp->TOP__arraySlice.realValue_0_27),9);
    tracep->chgBit(oldp+30,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_27) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+31,(vlSymsp->TOP__arraySlice.realValue_0_28),9);
    tracep->chgBit(oldp+32,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_28) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+33,(vlSymsp->TOP__arraySlice.realValue_0_29),9);
    tracep->chgBit(oldp+34,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_29) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+35,(vlSymsp->TOP__arraySlice.realValue_0_30),9);
    tracep->chgBit(oldp+36,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_30) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+37,(vlSymsp->TOP__arraySlice.realValue_0_31),9);
    tracep->chgBit(oldp+38,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_31) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+39,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_3) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_3)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_3)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_3)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_3)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_3)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_3)))))));
    tracep->chgBit(oldp+40,(((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_1_valid) 
                             & (IData)(vlSelf->outputStreamArrayData_1_ready))));
    tracep->chgCData(oldp+41,(vlSymsp->TOP__arraySlice.realValue1_0_3),8);
    tracep->chgBit(oldp+42,(vlSymsp->TOP__arraySlice.debug_0_4));
    tracep->chgBit(oldp+43,(vlSymsp->TOP__arraySlice.debug_1_4));
    tracep->chgBit(oldp+44,(vlSymsp->TOP__arraySlice.debug_2_4));
    tracep->chgBit(oldp+45,(vlSymsp->TOP__arraySlice.debug_3_4));
    tracep->chgBit(oldp+46,(vlSymsp->TOP__arraySlice.debug_4_4));
    tracep->chgBit(oldp+47,(vlSymsp->TOP__arraySlice.debug_5_4));
    tracep->chgBit(oldp+48,(vlSymsp->TOP__arraySlice.debug_6_4));
    tracep->chgBit(oldp+49,(vlSymsp->TOP__arraySlice.debug_7_4));
    tracep->chgSData(oldp+50,(vlSymsp->TOP__arraySlice.realValue_0_32),9);
    tracep->chgBit(oldp+51,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_32) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+52,(vlSymsp->TOP__arraySlice.realValue_0_33),9);
    tracep->chgBit(oldp+53,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_33) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+54,(vlSymsp->TOP__arraySlice.realValue_0_34),9);
    tracep->chgBit(oldp+55,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_34) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+56,(vlSymsp->TOP__arraySlice.realValue_0_35),9);
    tracep->chgBit(oldp+57,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_35) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+58,(vlSymsp->TOP__arraySlice.realValue_0_36),9);
    tracep->chgBit(oldp+59,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_36) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+60,(vlSymsp->TOP__arraySlice.realValue_0_37),9);
    tracep->chgBit(oldp+61,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_37) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

void VarraySlice___024root__trace_chg_sub_29(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_29\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 4355);
    // Body
    tracep->chgSData(oldp+0,(vlSymsp->TOP__arraySlice.realValue_0_38),9);
    tracep->chgBit(oldp+1,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 1U)) <= (0x1ffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_38) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(6U) 
                                                           * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+2,(vlSymsp->TOP__arraySlice.realValue_0_39),9);
    tracep->chgBit(oldp+3,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_39) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0xffU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+4,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                      & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                     & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_4) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_1_4)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_2_4)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_3_4)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_4_4)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_5_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_6_4)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.debug_7_4)))))));
    tracep->chgCData(oldp+5,(vlSymsp->TOP__arraySlice.realValue1_0_4),8);
    tracep->chgBit(oldp+6,(vlSymsp->TOP__arraySlice.debug_0_5));
    tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.debug_1_5));
    tracep->chgBit(oldp+8,(vlSymsp->TOP__arraySlice.debug_2_5));
    tracep->chgBit(oldp+9,(vlSymsp->TOP__arraySlice.debug_3_5));
    tracep->chgBit(oldp+10,(vlSymsp->TOP__arraySlice.debug_4_5));
    tracep->chgBit(oldp+11,(vlSymsp->TOP__arraySlice.debug_5_5));
    tracep->chgBit(oldp+12,(vlSymsp->TOP__arraySlice.debug_6_5));
    tracep->chgBit(oldp+13,(vlSymsp->TOP__arraySlice.debug_7_5));
    tracep->chgSData(oldp+14,(vlSymsp->TOP__arraySlice.realValue_0_40),9);
    tracep->chgBit(oldp+15,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_40) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+16,(vlSymsp->TOP__arraySlice.realValue_0_41),9);
    tracep->chgBit(oldp+17,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_41) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+18,(vlSymsp->TOP__arraySlice.realValue_0_42),9);
    tracep->chgBit(oldp+19,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_42) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+20,(vlSymsp->TOP__arraySlice.realValue_0_43),9);
    tracep->chgBit(oldp+21,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_43) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+22,(vlSymsp->TOP__arraySlice.realValue_0_44),9);
    tracep->chgBit(oldp+23,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_44) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+24,(vlSymsp->TOP__arraySlice.realValue_0_45),9);
    tracep->chgBit(oldp+25,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_45) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+26,(vlSymsp->TOP__arraySlice.realValue_0_46),9);
    tracep->chgBit(oldp+27,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_46) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+28,(vlSymsp->TOP__arraySlice.realValue_0_47),9);
    tracep->chgBit(oldp+29,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_47) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+30,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_5) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_5)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_5)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_5)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_5)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_5)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_5)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_5)))))));
    tracep->chgBit(oldp+31,(((0U == (0x3fffU & VL_MODDIV_III(14, 
                                                             (0x3fffU 
                                                              & ((IData)(1U) 
                                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_1_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                             & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_1_valid) 
                                & (IData)(vlSelf->outputStreamArrayData_1_ready)))));
    tracep->chgCData(oldp+32,(vlSymsp->TOP__arraySlice.realValue1_0_5),8);
    tracep->chgBit(oldp+33,(vlSymsp->TOP__arraySlice.debug_0_6));
    tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.debug_1_6));
    tracep->chgBit(oldp+35,(vlSymsp->TOP__arraySlice.debug_2_6));
    tracep->chgBit(oldp+36,(vlSymsp->TOP__arraySlice.debug_3_6));
    tracep->chgBit(oldp+37,(vlSymsp->TOP__arraySlice.debug_4_6));
    tracep->chgBit(oldp+38,(vlSymsp->TOP__arraySlice.debug_5_6));
    tracep->chgBit(oldp+39,(vlSymsp->TOP__arraySlice.debug_6_6));
    tracep->chgBit(oldp+40,(vlSymsp->TOP__arraySlice.debug_7_6));
    tracep->chgSData(oldp+41,(vlSymsp->TOP__arraySlice.realValue_0_48),9);
    tracep->chgBit(oldp+42,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_48) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+43,(vlSymsp->TOP__arraySlice.realValue_0_49),9);
    tracep->chgBit(oldp+44,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_49) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+45,(vlSymsp->TOP__arraySlice.realValue_0_50),9);
    tracep->chgBit(oldp+46,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_50) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+47,(vlSymsp->TOP__arraySlice.realValue_0_51),9);
    tracep->chgBit(oldp+48,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_51) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+49,(vlSymsp->TOP__arraySlice.realValue_0_52),9);
    tracep->chgBit(oldp+50,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_52) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+51,(vlSymsp->TOP__arraySlice.realValue_0_53),9);
    tracep->chgBit(oldp+52,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_53) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+53,(vlSymsp->TOP__arraySlice.realValue_0_54),9);
    tracep->chgBit(oldp+54,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_54) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+55,(vlSymsp->TOP__arraySlice.realValue_0_55),9);
    tracep->chgBit(oldp+56,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_55) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+57,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_6) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_6)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_6)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_6)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_6)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_6)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_6)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_6)))))));
    tracep->chgBit(oldp+58,(((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_2_valid) 
                             & (IData)(vlSelf->outputStreamArrayData_2_ready))));
}

void VarraySlice___024root__trace_chg_sub_30(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_30\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 4414);
    // Body
    tracep->chgCData(oldp+0,(vlSymsp->TOP__arraySlice.realValue1_0_6),8);
    tracep->chgBit(oldp+1,(vlSymsp->TOP__arraySlice.debug_0_7));
    tracep->chgBit(oldp+2,(vlSymsp->TOP__arraySlice.debug_1_7));
    tracep->chgBit(oldp+3,(vlSymsp->TOP__arraySlice.debug_2_7));
    tracep->chgBit(oldp+4,(vlSymsp->TOP__arraySlice.debug_3_7));
    tracep->chgBit(oldp+5,(vlSymsp->TOP__arraySlice.debug_4_7));
    tracep->chgBit(oldp+6,(vlSymsp->TOP__arraySlice.debug_5_7));
    tracep->chgBit(oldp+7,(vlSymsp->TOP__arraySlice.debug_6_7));
    tracep->chgBit(oldp+8,(vlSymsp->TOP__arraySlice.debug_7_7));
    tracep->chgSData(oldp+9,(vlSymsp->TOP__arraySlice.realValue_0_56),9);
    tracep->chgBit(oldp+10,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_56) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+11,(vlSymsp->TOP__arraySlice.realValue_0_57),9);
    tracep->chgBit(oldp+12,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_57) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+13,(vlSymsp->TOP__arraySlice.realValue_0_58),9);
    tracep->chgBit(oldp+14,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_58) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+15,(vlSymsp->TOP__arraySlice.realValue_0_59),9);
    tracep->chgBit(oldp+16,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_59) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+17,(vlSymsp->TOP__arraySlice.realValue_0_60),9);
    tracep->chgBit(oldp+18,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_60) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+19,(vlSymsp->TOP__arraySlice.realValue_0_61),9);
    tracep->chgBit(oldp+20,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_61) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+21,(vlSymsp->TOP__arraySlice.realValue_0_62),9);
    tracep->chgBit(oldp+22,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_62) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+23,(vlSymsp->TOP__arraySlice.realValue_0_63),9);
    tracep->chgBit(oldp+24,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_63) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+25,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_7) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_7)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_7)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_7)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_7)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_7)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_7)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_7)))))));
    tracep->chgCData(oldp+26,(vlSymsp->TOP__arraySlice.realValue1_0_7),8);
    tracep->chgBit(oldp+27,(vlSymsp->TOP__arraySlice.debug_0_8));
    tracep->chgBit(oldp+28,(vlSymsp->TOP__arraySlice.debug_1_8));
    tracep->chgBit(oldp+29,(vlSymsp->TOP__arraySlice.debug_2_8));
    tracep->chgBit(oldp+30,(vlSymsp->TOP__arraySlice.debug_3_8));
    tracep->chgBit(oldp+31,(vlSymsp->TOP__arraySlice.debug_4_8));
    tracep->chgBit(oldp+32,(vlSymsp->TOP__arraySlice.debug_5_8));
    tracep->chgBit(oldp+33,(vlSymsp->TOP__arraySlice.debug_6_8));
    tracep->chgBit(oldp+34,(vlSymsp->TOP__arraySlice.debug_7_8));
    tracep->chgSData(oldp+35,(vlSymsp->TOP__arraySlice.realValue_0_64),9);
    tracep->chgBit(oldp+36,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_64) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+37,(vlSymsp->TOP__arraySlice.realValue_0_65),9);
    tracep->chgBit(oldp+38,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_65) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+39,(vlSymsp->TOP__arraySlice.realValue_0_66),9);
    tracep->chgBit(oldp+40,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_66) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+41,(vlSymsp->TOP__arraySlice.realValue_0_67),9);
    tracep->chgBit(oldp+42,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_67) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+43,(vlSymsp->TOP__arraySlice.realValue_0_68),9);
    tracep->chgBit(oldp+44,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_68) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+45,(vlSymsp->TOP__arraySlice.realValue_0_69),9);
    tracep->chgBit(oldp+46,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_69) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+47,(vlSymsp->TOP__arraySlice.realValue_0_70),9);
    tracep->chgBit(oldp+48,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_70) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+49,(vlSymsp->TOP__arraySlice.realValue_0_71),9);
    tracep->chgBit(oldp+50,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_71) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+51,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_8) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_8)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_8)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_8)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_8)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_8)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_8)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_8)))))));
    tracep->chgBit(oldp+52,(((0U == (0x3fffU & VL_MODDIV_III(14, 
                                                             (0x3fffU 
                                                              & ((IData)(1U) 
                                                                 + (IData)(vlSymsp->TOP__arraySlice.__PVT__handshakeTimes_2_value))), (IData)(vlSymsp->TOP__arraySlice.__PVT__aReg)))) 
                             & ((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_2_valid) 
                                & (IData)(vlSelf->outputStreamArrayData_2_ready)))));
    tracep->chgCData(oldp+53,(vlSymsp->TOP__arraySlice.realValue1_0_8),8);
    tracep->chgBit(oldp+54,(vlSymsp->TOP__arraySlice.debug_0_9));
    tracep->chgBit(oldp+55,(vlSymsp->TOP__arraySlice.debug_1_9));
    tracep->chgBit(oldp+56,(vlSymsp->TOP__arraySlice.debug_2_9));
    tracep->chgBit(oldp+57,(vlSymsp->TOP__arraySlice.debug_3_9));
    tracep->chgBit(oldp+58,(vlSymsp->TOP__arraySlice.debug_4_9));
    tracep->chgBit(oldp+59,(vlSymsp->TOP__arraySlice.debug_5_9));
    tracep->chgBit(oldp+60,(vlSymsp->TOP__arraySlice.debug_6_9));
    tracep->chgBit(oldp+61,(vlSymsp->TOP__arraySlice.debug_7_9));
    tracep->chgSData(oldp+62,(vlSymsp->TOP__arraySlice.realValue_0_72),9);
    tracep->chgBit(oldp+63,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_72) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+64,(vlSymsp->TOP__arraySlice.realValue_0_73),9);
    tracep->chgBit(oldp+65,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_73) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+66,(vlSymsp->TOP__arraySlice.realValue_0_74),9);
    tracep->chgBit(oldp+67,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_74) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+68,(vlSymsp->TOP__arraySlice.realValue_0_75),9);
    tracep->chgBit(oldp+69,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_75) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
}

void VarraySlice___024root__trace_chg_sub_31(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_31\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 4484);
    // Body
    tracep->chgSData(oldp+0,(vlSymsp->TOP__arraySlice.realValue_0_76),9);
    tracep->chgBit(oldp+1,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 2U)) <= (0x1ffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_76) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                           << 2U)))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+2,(vlSymsp->TOP__arraySlice.realValue_0_77),9);
    tracep->chgBit(oldp+3,(((0x7fU & ((IData)(3U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_77) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0xffU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+4,(vlSymsp->TOP__arraySlice.realValue_0_78),9);
    tracep->chgBit(oldp+5,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 1U)) <= (0x1ffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_78) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(6U) 
                                                           * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+6,(vlSymsp->TOP__arraySlice.realValue_0_79),9);
    tracep->chgBit(oldp+7,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_79) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0xffU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+8,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                      & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                     & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_9) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_1_9)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_2_9)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_3_9)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_4_9)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_5_9)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_6_9)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.debug_7_9)))))));
    tracep->chgBit(oldp+9,(((IData)(vlSymsp->TOP__arraySlice.outputStreamArrayData_3_valid) 
                            & (IData)(vlSelf->outputStreamArrayData_3_ready))));
    tracep->chgCData(oldp+10,(vlSymsp->TOP__arraySlice.realValue1_0_9),8);
    tracep->chgBit(oldp+11,(vlSymsp->TOP__arraySlice.debug_0_10));
    tracep->chgBit(oldp+12,(vlSymsp->TOP__arraySlice.debug_1_10));
    tracep->chgBit(oldp+13,(vlSymsp->TOP__arraySlice.debug_2_10));
    tracep->chgBit(oldp+14,(vlSymsp->TOP__arraySlice.debug_3_10));
    tracep->chgBit(oldp+15,(vlSymsp->TOP__arraySlice.debug_4_10));
    tracep->chgBit(oldp+16,(vlSymsp->TOP__arraySlice.debug_5_10));
    tracep->chgBit(oldp+17,(vlSymsp->TOP__arraySlice.debug_6_10));
    tracep->chgBit(oldp+18,(vlSymsp->TOP__arraySlice.debug_7_10));
    tracep->chgSData(oldp+19,(vlSymsp->TOP__arraySlice.realValue_0_80),9);
    tracep->chgBit(oldp+20,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_80) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+21,(vlSymsp->TOP__arraySlice.realValue_0_81),9);
    tracep->chgBit(oldp+22,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_81) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+23,(vlSymsp->TOP__arraySlice.realValue_0_82),9);
    tracep->chgBit(oldp+24,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_82) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+25,(vlSymsp->TOP__arraySlice.realValue_0_83),9);
    tracep->chgBit(oldp+26,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_83) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+27,(vlSymsp->TOP__arraySlice.realValue_0_84),9);
    tracep->chgBit(oldp+28,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_84) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+29,(vlSymsp->TOP__arraySlice.realValue_0_85),9);
    tracep->chgBit(oldp+30,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_85) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+31,(vlSymsp->TOP__arraySlice.realValue_0_86),9);
    tracep->chgBit(oldp+32,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_86) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+33,(vlSymsp->TOP__arraySlice.realValue_0_87),9);
    tracep->chgBit(oldp+34,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_87) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+35,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_10) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_10)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_10)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_10)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_10)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_10)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_10)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_10)))))));
    tracep->chgCData(oldp+36,(vlSymsp->TOP__arraySlice.realValue1_0_10),8);
    tracep->chgBit(oldp+37,(vlSymsp->TOP__arraySlice.debug_0_11));
    tracep->chgBit(oldp+38,(vlSymsp->TOP__arraySlice.debug_1_11));
    tracep->chgBit(oldp+39,(vlSymsp->TOP__arraySlice.debug_2_11));
    tracep->chgBit(oldp+40,(vlSymsp->TOP__arraySlice.debug_3_11));
    tracep->chgBit(oldp+41,(vlSymsp->TOP__arraySlice.debug_4_11));
    tracep->chgBit(oldp+42,(vlSymsp->TOP__arraySlice.debug_5_11));
    tracep->chgBit(oldp+43,(vlSymsp->TOP__arraySlice.debug_6_11));
    tracep->chgBit(oldp+44,(vlSymsp->TOP__arraySlice.debug_7_11));
    tracep->chgSData(oldp+45,(vlSymsp->TOP__arraySlice.realValue_0_88),9);
    tracep->chgBit(oldp+46,(((0x1ffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                        << 3U)) <= 
                             (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_88) 
                                         - (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0)) 
                                        + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+47,(vlSymsp->TOP__arraySlice.realValue_0_89),9);
    tracep->chgBit(oldp+48,(((0xffU & ((IData)(7U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_89) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                               + (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+49,(vlSymsp->TOP__arraySlice.realValue_0_90),9);
    tracep->chgBit(oldp+50,(((0xffU & ((IData)(6U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_90) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                               + (0x7fU 
                                                  & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                     << 1U)))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+51,(vlSymsp->TOP__arraySlice.realValue_0_91),9);
    tracep->chgBit(oldp+52,(((0xffU & ((IData)(5U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_91) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                               + (0x7fU 
                                                  & ((IData)(3U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+53,(vlSymsp->TOP__arraySlice.realValue_0_92),9);
    tracep->chgBit(oldp+54,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 2U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_92) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                            << 2U)))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+55,(vlSymsp->TOP__arraySlice.realValue_0_93),9);
    tracep->chgBit(oldp+56,(((0x7fU & ((IData)(3U) 
                                       * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_93) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               + (0xffU 
                                                  & ((IData)(5U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+57,(vlSymsp->TOP__arraySlice.realValue_0_94),9);
    tracep->chgBit(oldp+58,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                       << 1U)) <= (0x1ffU 
                                                   & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_94) 
                                                       - 
                                                       ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(6U) 
                                                            * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                      + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+59,(vlSymsp->TOP__arraySlice.realValue_0_95),9);
    tracep->chgBit(oldp+60,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                             <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_95) 
                                            - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                               + (0xffU 
                                                  & ((IData)(7U) 
                                                     * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+61,((1U & (~ (((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                             & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                                      & ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_11) 
                                               & (IData)(vlSymsp->TOP__arraySlice.debug_1_11)) 
                                              & (IData)(vlSymsp->TOP__arraySlice.debug_2_11)) 
                                             & (IData)(vlSymsp->TOP__arraySlice.debug_3_11)) 
                                            & (IData)(vlSymsp->TOP__arraySlice.debug_4_11)) 
                                           & (IData)(vlSymsp->TOP__arraySlice.debug_5_11)) 
                                          & (IData)(vlSymsp->TOP__arraySlice.debug_6_11)) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_7_11)))))));
}
