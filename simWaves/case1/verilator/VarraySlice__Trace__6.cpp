// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VarraySlice__Syms.h"


void VarraySlice___024root__trace_chg_sub_48(VarraySlice___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_chg_sub_48\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 5583);
    // Body
    tracep->chgSData(oldp+0,(vlSymsp->TOP__arraySlice.realValue_0_412),9);
    tracep->chgBit(oldp+1,(((0xffU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 2U)) <= (0x1ffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_412) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                                           << 2U)))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+2,(vlSymsp->TOP__arraySlice.realValue_0_413),9);
    tracep->chgBit(oldp+3,(((0x7fU & ((IData)(3U) * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_413) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                              + (0xffU 
                                                 & ((IData)(5U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+4,(vlSymsp->TOP__arraySlice.realValue_0_414),9);
    tracep->chgBit(oldp+5,(((0x7fU & ((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                                      << 1U)) <= (0x1ffU 
                                                  & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_414) 
                                                      - 
                                                      ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(6U) 
                                                           * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                                     + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgSData(oldp+6,(vlSymsp->TOP__arraySlice.realValue_0_415),9);
    tracep->chgBit(oldp+7,(((IData)(vlSymsp->TOP__arraySlice.__PVT__bReg) 
                            <= (0x1ffU & (((IData)(vlSymsp->TOP__arraySlice.realValue_0_415) 
                                           - ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                              + (0xffU 
                                                 & ((IData)(7U) 
                                                    * (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          + (IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo))))));
    tracep->chgBit(oldp+8,(((((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_0) 
                                    & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_1)) 
                                   & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_2)) 
                                  & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_3)) 
                                 & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_4)) 
                                & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_5)) 
                               & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_6)) 
                              & (IData)(vlSymsp->TOP__arraySlice.__PVT__holdReadOp_7)) 
                             & (~ ((((((((IData)(vlSymsp->TOP__arraySlice.debug_0_51) 
                                         & (IData)(vlSymsp->TOP__arraySlice.debug_1_51)) 
                                        & (IData)(vlSymsp->TOP__arraySlice.debug_2_51)) 
                                       & (IData)(vlSymsp->TOP__arraySlice.debug_3_51)) 
                                      & (IData)(vlSymsp->TOP__arraySlice.debug_4_51)) 
                                     & (IData)(vlSymsp->TOP__arraySlice.debug_5_51)) 
                                    & (IData)(vlSymsp->TOP__arraySlice.debug_6_51)) 
                                   & (IData)(vlSymsp->TOP__arraySlice.debug_7_51)))) 
                            & (~ ((((((((((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                          == (0x1ffU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0) 
                                                 - 
                                                 VL_MODDIV_III(9, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_0), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                            ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_0))) 
                                        | (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                            == (0x1ffU 
                                                & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1) 
                                                   - 
                                                   VL_MODDIV_III(9, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_1), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                           & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                              ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_1)))) 
                                       | (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                           == (0x1ffU 
                                               & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2) 
                                                  - 
                                                  VL_MODDIV_III(9, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_2), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                          & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                             ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_2)))) 
                                      | (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                          == (0x1ffU 
                                              & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3) 
                                                 - 
                                                 VL_MODDIV_III(9, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_3), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                         & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                            ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_3)))) 
                                     | (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                         == (0x1ffU 
                                             & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4) 
                                                - VL_MODDIV_III(9, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_4), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                        & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                           ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_4)))) 
                                    | (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                        == (0x1ffU 
                                            & ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5) 
                                               - VL_MODDIV_III(9, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_5), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                       & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                          ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_5)))) 
                                   | (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                       == (0x1ffU & 
                                           ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6) 
                                            - VL_MODDIV_III(9, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_6), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                      & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                         ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_6)))) 
                                  | (((IData)(vlSymsp->TOP__arraySlice.__PVT__selectWriteFifo) 
                                      == (0x1ffU & 
                                          ((IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7) 
                                           - VL_MODDIV_III(9, (IData)(vlSymsp->TOP__arraySlice.__PVT__selectReadFifo_7), (IData)(vlSymsp->TOP__arraySlice.__PVT__bReg))))) 
                                     & ((IData)(vlSymsp->TOP__arraySlice.__PVT__writeAround) 
                                        ^ (IData)(vlSymsp->TOP__arraySlice.__PVT__readAround_7))))))));
}

void VarraySlice___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VarraySlice___024root__trace_cleanup\n"); );
    // Init
    VarraySlice___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VarraySlice___024root*>(voidSelf);
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
