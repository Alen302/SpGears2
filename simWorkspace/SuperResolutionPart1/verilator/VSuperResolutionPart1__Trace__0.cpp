// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VSuperResolutionPart1__Syms.h"


void VSuperResolutionPart1___024root__trace_chg_sub_0(VSuperResolutionPart1___024root* vlSelf, VerilatedFst* tracep);
void VSuperResolutionPart1___024root__trace_chg_sub_1(VSuperResolutionPart1___024root* vlSelf, VerilatedFst* tracep);

void VSuperResolutionPart1___024root__trace_chg_top_0(void* voidSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root__trace_chg_top_0\n"); );
    // Init
    VSuperResolutionPart1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSuperResolutionPart1___024root*>(voidSelf);
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSuperResolutionPart1___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
    VSuperResolutionPart1___024root__trace_chg_sub_1((&vlSymsp->TOP), tracep);
}

void VSuperResolutionPart1___024root__trace_chg_sub_0(VSuperResolutionPart1___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,(vlSelf->SuperResolutionPart1__DOT__inpDone));
        tracep->chgBit(oldp+1,(vlSelf->SuperResolutionPart1__DOT__internalDone));
        tracep->chgBit(oldp+2,(vlSelf->SuperResolutionPart1__DOT__startRead));
        tracep->chgBit(oldp+3,(vlSelf->SuperResolutionPart1__DOT__slaveStart));
        tracep->chgBit(oldp+4,(vlSelf->SuperResolutionPart1__DOT__frameStart));
        tracep->chgCData(oldp+5,(vlSelf->SuperResolutionPart1__DOT__inpThreshold),8);
        tracep->chgCData(oldp+6,(vlSelf->SuperResolutionPart1__DOT__bmpWidth),3);
        tracep->chgCData(oldp+7,(vlSelf->SuperResolutionPart1__DOT__bmpHeight),3);
        tracep->chgBit(oldp+8,(vlSelf->SuperResolutionPart1__DOT__holdBuffer));
        tracep->chgCData(oldp+9,(vlSelf->SuperResolutionPart1__DOT__bufferRowCount_value),3);
        tracep->chgBit(oldp+10,((5U == (IData)(vlSelf->SuperResolutionPart1__DOT__bufferRowCount_value))));
        tracep->chgBit(oldp+11,(vlSelf->SuperResolutionPart1__DOT__bufferEnable));
        tracep->chgBit(oldp+12,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__startRead)))));
        tracep->chgBit(oldp+13,(vlSelf->SuperResolutionPart1__DOT__nextRowBuffer));
        tracep->chgBit(oldp+14,(vlSelf->SuperResolutionPart1__DOT__bufferReuse));
        tracep->chgCData(oldp+15,(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value),4);
        tracep->chgBit(oldp+16,((9U == (IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value))));
        tracep->chgCData(oldp+17,(vlSelf->SuperResolutionPart1__DOT__outRowCount_value),4);
        tracep->chgBit(oldp+18,((0xaU == (IData)(vlSelf->SuperResolutionPart1__DOT__outRowCount_value))));
        tracep->chgBit(oldp+19,(vlSelf->SuperResolutionPart1__DOT__outReachRowEnd));
        tracep->chgBit(oldp+20,(vlSelf->SuperResolutionPart1__DOT__outReachFinalRow));
        tracep->chgBit(oldp+21,(vlSelf->SuperResolutionPart1__DOT__bufferReachRowEnd));
        tracep->chgBit(oldp+22,(vlSelf->SuperResolutionPart1__DOT__bufferReachFinalRow));
        tracep->chgBit(oldp+23,(vlSelf->SuperResolutionPart1__DOT___zz_readStage_mainOnePixelStream_valid));
        tracep->chgBit(oldp+24,(vlSelf->SuperResolutionPart1__DOT___zz_readStage_counterOnePixelStream_valid));
        tracep->chgBit(oldp+25,(vlSelf->SuperResolutionPart1__DOT___zz_readStage_mainTwoPixelStream_valid));
        tracep->chgBit(oldp+26,(vlSelf->SuperResolutionPart1__DOT___zz_readStage_counterTwoPixelStream_valid));
        tracep->chgBit(oldp+27,(vlSelf->SuperResolutionPart1__DOT__controlStream_rValid));
        tracep->chgBit(oldp+28,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_rValid)))));
        tracep->chgBit(oldp+29,(vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_rValid));
        tracep->chgBit(oldp+30,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_rValid)))));
        tracep->chgBit(oldp+31,(vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_rValid));
        tracep->chgBit(oldp+32,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_rValid)))));
        tracep->chgBit(oldp+33,(vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_rValid));
        tracep->chgBit(oldp+34,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_rValid)))));
        tracep->chgBit(oldp+35,(vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_rValid));
        tracep->chgBit(oldp+36,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_rValid)))));
        tracep->chgBit(oldp+37,(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rValid));
        tracep->chgBit(oldp+38,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rValid)))));
        tracep->chgBit(oldp+39,(vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_rValid));
        tracep->chgBit(oldp+40,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_rValid)))));
        tracep->chgBit(oldp+41,(vlSelf->SuperResolutionPart1__DOT__compareStage_counterOnePixelStream_rValid));
        tracep->chgBit(oldp+42,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_counterOnePixelStream_rValid)))));
        tracep->chgBit(oldp+43,(vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_rValid));
        tracep->chgBit(oldp+44,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_rValid)))));
        tracep->chgBit(oldp+45,(vlSelf->SuperResolutionPart1__DOT__compareStage_counterTwoPixelStream_rValid));
        tracep->chgBit(oldp+46,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_counterTwoPixelStream_rValid)))));
        tracep->chgBit(oldp+47,(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rValid));
        tracep->chgBit(oldp+48,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rValid)))));
        tracep->chgBit(oldp+49,(vlSelf->SuperResolutionPart1__DOT__diffStage_mainOnePixelStream_rValid));
        tracep->chgBit(oldp+50,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_mainOnePixelStream_rValid)))));
        tracep->chgBit(oldp+51,(vlSelf->SuperResolutionPart1__DOT__diffStage_counterOnePixelStream_rValid));
        tracep->chgBit(oldp+52,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_counterOnePixelStream_rValid)))));
        tracep->chgBit(oldp+53,(vlSelf->SuperResolutionPart1__DOT__diffStage_mainTwoPixelStream_rValid));
        tracep->chgBit(oldp+54,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_mainTwoPixelStream_rValid)))));
        tracep->chgBit(oldp+55,(vlSelf->SuperResolutionPart1__DOT__diffStage_counterTwoPixelStream_rValid));
        tracep->chgBit(oldp+56,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_counterTwoPixelStream_rValid)))));
        tracep->chgBit(oldp+57,(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rValid));
        tracep->chgBit(oldp+58,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rValid)))));
        tracep->chgBit(oldp+59,(vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_rValid));
        tracep->chgBit(oldp+60,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_rValid)))));
        tracep->chgBit(oldp+61,(vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rValid));
        tracep->chgBit(oldp+62,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rValid)))));
        tracep->chgBit(oldp+63,(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_wantStart));
        tracep->chgCData(oldp+64,(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg),3);
        tracep->chgBit(oldp+65,((0U == (1U & (IData)(vlSelf->SuperResolutionPart1__DOT__outRowCount_value)))));
        tracep->chgBit(oldp+66,((0U == (1U & (IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value)))));
        tracep->chgBit(oldp+67,((((IData)(vlSelf->SuperResolutionPart1__DOT__outRowCount_value) 
                                  < (0x1fU & ((IData)(vlSelf->SuperResolutionPart1__DOT__bufferRowCount_value) 
                                              << 1U))) 
                                 | (IData)(vlSelf->SuperResolutionPart1__DOT__bufferReuse))));
        tracep->chgQData(oldp+68,(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg_string),40);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        tracep->chgBit(oldp+70,(((IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rValid) 
                                 & (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_input_ready))));
        tracep->chgBit(oldp+71,(((9U == (IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value)) 
                                 & (IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_willIncrement))));
        tracep->chgBit(oldp+72,(((0xaU == (IData)(vlSelf->SuperResolutionPart1__DOT__outRowCount_value)) 
                                 & (IData)(vlSelf->SuperResolutionPart1__DOT__outRowCount_willIncrement))));
        tracep->chgBit(oldp+73,(((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_isFree) 
                                 & (IData)(vlSelf->SuperResolutionPart1__DOT__startRead))));
        tracep->chgBit(oldp+74,(((IData)(vlSelf->SuperResolutionPart1__DOT__startRead) 
                                 & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_ready))));
        tracep->chgBit(oldp+75,(((IData)(vlSelf->SuperResolutionPart1__DOT__frameStart) 
                                 & ((IData)(vlSelf->SuperResolutionPart1__DOT__startRead) 
                                    & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_ready)))));
        tracep->chgBit(oldp+76,((((IData)(vlSelf->SuperResolutionPart1__DOT__startRead) 
                                  & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_ready)) 
                                 & ((IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value) 
                                    == (0x1fU & (((IData)(vlSelf->SuperResolutionPart1__DOT__bmpWidth) 
                                                  << 1U) 
                                                 - (IData)(2U)))))));
        tracep->chgBit(oldp+77,((((IData)(vlSelf->SuperResolutionPart1__DOT__outReachRowEnd) 
                                  & ((IData)(vlSelf->SuperResolutionPart1__DOT__outRowCount_value) 
                                     == (0x1fU & (((IData)(vlSelf->SuperResolutionPart1__DOT__bmpHeight) 
                                                   << 1U) 
                                                  - (IData)(2U))))) 
                                 & ((IData)(vlSelf->SuperResolutionPart1__DOT__startRead) 
                                    & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_ready)))));
        tracep->chgBit(oldp+78,(((0U == (IData)(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_value)) 
                                 & ((0xfU & ((IData)(2U) 
                                             + (IData)(vlSelf->SuperResolutionPart1__DOT__outRowCount_value))) 
                                    == (0x1fU & ((IData)(vlSelf->SuperResolutionPart1__DOT__bufferRowCount_value) 
                                                 << 1U))))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgBit(oldp+79,(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_frameStart));
        tracep->chgBit(oldp+80,(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_rowEnd));
        tracep->chgBit(oldp+81,(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_passMode));
        tracep->chgBit(oldp+82,(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_passValid));
        tracep->chgCData(oldp+83,(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_onceMode),3);
        tracep->chgBit(oldp+84,(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_onceValid));
        tracep->chgBit(oldp+85,(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_mainCompare));
        tracep->chgBit(oldp+86,(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_counterCompare));
        tracep->chgCData(oldp+87,(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_mainDiff),8);
        tracep->chgCData(oldp+88,(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_counterDiff),8);
        tracep->chgBit(oldp+89,(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_twiceCompValid));
        tracep->chgCData(oldp+90,(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_twiceMode),3);
        tracep->chgCData(oldp+91,(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferOne_port0),8);
        tracep->chgCData(oldp+92,(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferOne_port1),8);
        tracep->chgCData(oldp+93,(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferTwo_port0),8);
        tracep->chgCData(oldp+94,(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferTwo_port1),8);
        tracep->chgBit(oldp+95,(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_frameStart));
        tracep->chgBit(oldp+96,(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_rowEnd));
        tracep->chgBit(oldp+97,(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_passMode));
        tracep->chgBit(oldp+98,(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_passValid));
        tracep->chgCData(oldp+99,(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_onceMode),3);
        tracep->chgBit(oldp+100,(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_onceValid));
        tracep->chgBit(oldp+101,(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_mainCompare));
        tracep->chgCData(oldp+102,(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_mainDiff),8);
        tracep->chgBit(oldp+103,(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_twiceCompValid));
        tracep->chgCData(oldp+104,(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_twiceMode),3);
        tracep->chgCData(oldp+105,(vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_rData),8);
        tracep->chgCData(oldp+106,(vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_rData),8);
        tracep->chgCData(oldp+107,(vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_rData),8);
        tracep->chgCData(oldp+108,(vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_rData),8);
        tracep->chgBit(oldp+109,(((IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferOne_port1) 
                                  <= (IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferOne_port0))));
        tracep->chgBit(oldp+110,(((IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferTwo_port1) 
                                  <= (IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferTwo_port0))));
        tracep->chgBit(oldp+111,(((IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferTwo_port0) 
                                  <= (IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferOne_port0))));
        tracep->chgBit(oldp+112,(((IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferOne_port0) 
                                  <= (IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferTwo_port0))));
        tracep->chgBit(oldp+113,(((IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferOne_port1) 
                                  <= (IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferTwo_port1))));
        tracep->chgBit(oldp+114,(((IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferTwo_port1) 
                                  <= (IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferOne_port1))));
        tracep->chgBit(oldp+115,(vlSelf->SuperResolutionPart1__DOT___zz_readStage_controlPipe_translated_payload_mainCompare));
        tracep->chgBit(oldp+116,(vlSelf->SuperResolutionPart1__DOT___zz_readStage_controlPipe_translated_payload_counterCompare));
        tracep->chgBit(oldp+117,(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_frameStart));
        tracep->chgBit(oldp+118,(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_rowEnd));
        tracep->chgBit(oldp+119,(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_passMode));
        tracep->chgBit(oldp+120,(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_passValid));
        tracep->chgCData(oldp+121,(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_onceMode),3);
        tracep->chgBit(oldp+122,(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_onceValid));
        tracep->chgBit(oldp+123,(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_mainCompare));
        tracep->chgBit(oldp+124,(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_counterCompare));
        tracep->chgCData(oldp+125,(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_mainDiff),8);
        tracep->chgBit(oldp+126,(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_twiceCompValid));
        tracep->chgCData(oldp+127,(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_twiceMode),3);
        tracep->chgCData(oldp+128,(vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_rData),8);
        tracep->chgCData(oldp+129,(vlSelf->SuperResolutionPart1__DOT__compareStage_counterOnePixelStream_rData),8);
        tracep->chgCData(oldp+130,(vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_rData),8);
        tracep->chgCData(oldp+131,(vlSelf->SuperResolutionPart1__DOT__compareStage_counterTwoPixelStream_rData),8);
        tracep->chgCData(oldp+132,(vlSelf->SuperResolutionPart1__DOT___zz_compareStage_controlPipe_translated_payload_mainDiff),8);
        tracep->chgCData(oldp+133,(vlSelf->SuperResolutionPart1__DOT___zz_compareStage_controlPipe_translated_payload_counterDiff),8);
        tracep->chgCData(oldp+134,(vlSelf->SuperResolutionPart1__DOT__diffStage_mainOnePixelStream_rData),8);
        tracep->chgCData(oldp+135,(vlSelf->SuperResolutionPart1__DOT__diffStage_counterOnePixelStream_rData),8);
        tracep->chgCData(oldp+136,(vlSelf->SuperResolutionPart1__DOT__diffStage_mainTwoPixelStream_rData),8);
        tracep->chgCData(oldp+137,(vlSelf->SuperResolutionPart1__DOT__diffStage_counterTwoPixelStream_rData),8);
        tracep->chgBit(oldp+138,(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_frameStart));
        tracep->chgBit(oldp+139,(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_rowEnd));
        tracep->chgBit(oldp+140,(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_passMode));
        tracep->chgBit(oldp+141,(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_passValid));
        tracep->chgCData(oldp+142,(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_onceMode),3);
        tracep->chgBit(oldp+143,(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_onceValid));
        tracep->chgBit(oldp+144,(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_mainCompare));
        tracep->chgBit(oldp+145,(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_counterCompare));
        tracep->chgCData(oldp+146,(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_mainDiff),8);
        tracep->chgCData(oldp+147,(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_counterDiff),8);
        tracep->chgBit(oldp+148,(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_twiceCompValid));
        tracep->chgCData(oldp+149,(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_twiceMode),3);
        tracep->chgBit(oldp+150,(((IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_counterDiff) 
                                  <= (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_mainDiff))));
        tracep->chgCData(oldp+151,(vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_rData),8);
        tracep->chgBit(oldp+152,(vlSelf->SuperResolutionPart1__DOT__when_Stream_l434));
        tracep->chgCData(oldp+153,(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rData_pixel),8);
        tracep->chgBit(oldp+154,(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rData_frameStart));
        tracep->chgBit(oldp+155,(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rData_rowEnd));
        tracep->chgBit(oldp+156,(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rData_inpValid));
        tracep->chgCData(oldp+157,(vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_pixel),8);
        tracep->chgBit(oldp+158,(vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_frameStart));
        tracep->chgBit(oldp+159,(vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_rowEnd));
        tracep->chgBit(oldp+160,(vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_inpValid));
        tracep->chgCData(oldp+161,(vlSelf->SuperResolutionPart1__DOT__lineBufferOne[0]),8);
        tracep->chgCData(oldp+162,(vlSelf->SuperResolutionPart1__DOT__lineBufferOne[1]),8);
        tracep->chgCData(oldp+163,(vlSelf->SuperResolutionPart1__DOT__lineBufferOne[2]),8);
        tracep->chgCData(oldp+164,(vlSelf->SuperResolutionPart1__DOT__lineBufferOne[3]),8);
        tracep->chgCData(oldp+165,(vlSelf->SuperResolutionPart1__DOT__lineBufferOne[4]),8);
        tracep->chgCData(oldp+166,(vlSelf->SuperResolutionPart1__DOT__lineBufferTwo[0]),8);
        tracep->chgCData(oldp+167,(vlSelf->SuperResolutionPart1__DOT__lineBufferTwo[1]),8);
        tracep->chgCData(oldp+168,(vlSelf->SuperResolutionPart1__DOT__lineBufferTwo[2]),8);
        tracep->chgCData(oldp+169,(vlSelf->SuperResolutionPart1__DOT__lineBufferTwo[3]),8);
        tracep->chgCData(oldp+170,(vlSelf->SuperResolutionPart1__DOT__lineBufferTwo[4]),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgBit(oldp+171,(vlSelf->SuperResolutionPart1__DOT__bufferRowCount_willIncrement));
        tracep->chgBit(oldp+172,(vlSelf->SuperResolutionPart1__DOT__bufferRowCount_willClear));
        tracep->chgCData(oldp+173,(vlSelf->SuperResolutionPart1__DOT__bufferRowCount_valueNext),3);
        tracep->chgBit(oldp+174,(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_willIncrement));
        tracep->chgBit(oldp+175,(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_willClear));
        tracep->chgCData(oldp+176,(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_valueNext),3);
        tracep->chgBit(oldp+177,(vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_ready));
        tracep->chgBit(oldp+178,(vlSelf->SuperResolutionPart1__DOT__passPixels_valid));
        tracep->chgBit(oldp+179,(vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l601));
        tracep->chgBit(oldp+180,(vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l613));
        tracep->chgCData(oldp+181,(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateNext),3);
        tracep->chgQData(oldp+182,(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateNext_string),40);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        tracep->chgBit(oldp+184,(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_ready));
        tracep->chgBit(oldp+185,(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_input_ready));
        tracep->chgBit(oldp+186,(vlSelf->SuperResolutionPart1__DOT__bufferSwitch));
        tracep->chgCData(oldp+187,(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_value),3);
        tracep->chgBit(oldp+188,((4U == (IData)(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_value))));
        tracep->chgBit(oldp+189,(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_willIncrement));
        tracep->chgBit(oldp+190,(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_willClear));
        tracep->chgCData(oldp+191,(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_valueNext),4);
    }
}

void VSuperResolutionPart1___024root__trace_chg_sub_1(VSuperResolutionPart1___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root__trace_chg_sub_1\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 193);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        tracep->chgBit(oldp+0,(vlSelf->SuperResolutionPart1__DOT__outRowCount_willIncrement));
        tracep->chgBit(oldp+1,(vlSelf->SuperResolutionPart1__DOT__outRowCount_willClear));
        tracep->chgCData(oldp+2,(vlSelf->SuperResolutionPart1__DOT__outRowCount_valueNext),4);
        tracep->chgCData(oldp+3,(vlSelf->SuperResolutionPart1__DOT__mainAddrOne),4);
        tracep->chgCData(oldp+4,(vlSelf->SuperResolutionPart1__DOT__counterAddrOne),4);
        tracep->chgCData(oldp+5,(vlSelf->SuperResolutionPart1__DOT__mainAddrTwo),4);
        tracep->chgCData(oldp+6,(vlSelf->SuperResolutionPart1__DOT__counterAddrTwo),4);
        tracep->chgBit(oldp+7,(vlSelf->SuperResolutionPart1__DOT__controlStream_ready));
        tracep->chgBit(oldp+8,(vlSelf->SuperResolutionPart1__DOT__controls_frameStart));
        tracep->chgBit(oldp+9,(vlSelf->SuperResolutionPart1__DOT__controls_rowEnd));
        tracep->chgBit(oldp+10,(vlSelf->SuperResolutionPart1__DOT__controls_passMode));
        tracep->chgBit(oldp+11,(vlSelf->SuperResolutionPart1__DOT__controls_passValid));
        tracep->chgCData(oldp+12,(vlSelf->SuperResolutionPart1__DOT__controls_onceMode),3);
        tracep->chgBit(oldp+13,(vlSelf->SuperResolutionPart1__DOT__controls_onceValid));
        tracep->chgBit(oldp+14,(vlSelf->SuperResolutionPart1__DOT__controls_twiceCompValid));
        tracep->chgCData(oldp+15,(vlSelf->SuperResolutionPart1__DOT__controls_twiceMode),3);
        tracep->chgBit(oldp+16,(vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_isFree));
        tracep->chgCData(oldp+17,((7U & (IData)(vlSelf->SuperResolutionPart1__DOT__mainAddrOne))),3);
        tracep->chgBit(oldp+18,(vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_isFree));
        tracep->chgCData(oldp+19,((7U & (IData)(vlSelf->SuperResolutionPart1__DOT__counterAddrOne))),3);
        tracep->chgBit(oldp+20,(vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_isFree));
        tracep->chgCData(oldp+21,((7U & (IData)(vlSelf->SuperResolutionPart1__DOT__mainAddrTwo))),3);
        tracep->chgBit(oldp+22,(vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_isFree));
        tracep->chgCData(oldp+23,((7U & (IData)(vlSelf->SuperResolutionPart1__DOT__counterAddrTwo))),3);
        tracep->chgBit(oldp+24,(vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_ready));
        tracep->chgBit(oldp+25,(vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_ready));
        tracep->chgBit(oldp+26,(vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_ready));
        tracep->chgBit(oldp+27,(vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_ready));
        tracep->chgBit(oldp+28,(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_ready));
        tracep->chgBit(oldp+29,(vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_ready));
        tracep->chgBit(oldp+30,(vlSelf->SuperResolutionPart1__DOT__compareStage_counterOnePixelStream_ready));
        tracep->chgBit(oldp+31,(vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_ready));
        tracep->chgBit(oldp+32,(vlSelf->SuperResolutionPart1__DOT__compareStage_counterTwoPixelStream_ready));
        tracep->chgBit(oldp+33,(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_ready));
        tracep->chgBit(oldp+34,(vlSelf->SuperResolutionPart1__DOT__diffStage_mainOnePixelStream_ready));
        tracep->chgBit(oldp+35,(vlSelf->SuperResolutionPart1__DOT__diffStage_counterOnePixelStream_ready));
        tracep->chgBit(oldp+36,(vlSelf->SuperResolutionPart1__DOT__diffStage_mainTwoPixelStream_ready));
        tracep->chgBit(oldp+37,(vlSelf->SuperResolutionPart1__DOT__diffStage_counterTwoPixelStream_ready));
        tracep->chgBit(oldp+38,(vlSelf->SuperResolutionPart1__DOT___zz_resultStage_mainOnePixelStream_ready_2));
        tracep->chgBit(oldp+39,(vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_ready));
        tracep->chgCData(oldp+40,(vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_payload),8);
        tracep->chgBit(oldp+41,(vlSelf->SuperResolutionPart1__DOT__resultsJoin_valid));
        tracep->chgBit(oldp+42,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rValid)))));
        tracep->chgBit(oldp+43,(((IData)(vlSelf->SuperResolutionPart1__DOT__resultsJoin_valid) 
                                 | (IData)(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rValid))));
        tracep->chgBit(oldp+44,(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rValid));
        tracep->chgBit(oldp+45,(vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l617));
        tracep->chgBit(oldp+46,(vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l927));
        tracep->chgBit(oldp+47,(vlSelf->SuperResolutionPart1__DOT__controlStream_fire_6));
        tracep->chgBit(oldp+48,((0U == (IData)(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_value))));
    }
    tracep->chgBit(oldp+49,(vlSelf->pixelsIn_valid));
    tracep->chgBit(oldp+50,(vlSelf->pixelsIn_ready));
    tracep->chgCData(oldp+51,(vlSelf->pixelsIn_payload_pixel),8);
    tracep->chgBit(oldp+52,(vlSelf->pixelsIn_payload_frameStart));
    tracep->chgBit(oldp+53,(vlSelf->pixelsIn_payload_rowEnd));
    tracep->chgBit(oldp+54,(vlSelf->StartIn));
    tracep->chgBit(oldp+55,(vlSelf->inpTwoDoneIn));
    tracep->chgBit(oldp+56,(vlSelf->inpThreeDoneIn));
    tracep->chgBit(oldp+57,(vlSelf->pixelsOut_valid));
    tracep->chgBit(oldp+58,(vlSelf->pixelsOut_ready));
    tracep->chgCData(oldp+59,(vlSelf->pixelsOut_payload_pixel),8);
    tracep->chgBit(oldp+60,(vlSelf->pixelsOut_payload_frameStart));
    tracep->chgBit(oldp+61,(vlSelf->pixelsOut_payload_rowEnd));
    tracep->chgBit(oldp+62,(vlSelf->pixelsOut_payload_inpValid));
    tracep->chgBit(oldp+63,(vlSelf->startOut));
    tracep->chgBit(oldp+64,(vlSelf->inpDoneOut));
    tracep->chgCData(oldp+65,(vlSelf->thresholdIn),8);
    tracep->chgCData(oldp+66,(vlSelf->widthIn),3);
    tracep->chgCData(oldp+67,(vlSelf->heightIn),3);
    tracep->chgBit(oldp+68,(vlSelf->clk));
    tracep->chgBit(oldp+69,(vlSelf->reset));
    tracep->chgBit(oldp+70,(((IData)(vlSelf->StartIn) 
                             & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__internalDone)))));
    tracep->chgBit(oldp+71,(((IData)(vlSelf->pixelsIn_valid) 
                             & (IData)(vlSelf->pixelsIn_ready))));
    tracep->chgBit(oldp+72,(((~ (IData)(vlSelf->inpTwoDoneIn)) 
                             & ((IData)(vlSelf->pixelsIn_valid) 
                                & (IData)(vlSelf->pixelsIn_ready)))));
    tracep->chgBit(oldp+73,(((IData)(vlSelf->pixelsIn_payload_frameStart) 
                             & ((IData)(vlSelf->pixelsIn_valid) 
                                & (IData)(vlSelf->pixelsIn_ready)))));
    tracep->chgBit(oldp+74,((1U & (~ (IData)(vlSelf->StartIn)))));
    tracep->chgBit(oldp+75,(((5U == (IData)(vlSelf->SuperResolutionPart1__DOT__bufferRowCount_value)) 
                             & (IData)(vlSelf->SuperResolutionPart1__DOT__bufferRowCount_willIncrement))));
    tracep->chgBit(oldp+76,(((IData)(vlSelf->StartIn) 
                             & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__holdBuffer)))));
    tracep->chgBit(oldp+77,((1U & ((~ (IData)(vlSelf->StartIn)) 
                                   | (IData)(vlSelf->SuperResolutionPart1__DOT__holdBuffer)))));
    tracep->chgBit(oldp+78,(((4U == (IData)(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_value)) 
                             & (IData)(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_willIncrement))));
    tracep->chgBit(oldp+79,(((IData)(vlSelf->SuperResolutionPart1__DOT__inpThreshold) 
                             <= (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_mainDiff))));
    tracep->chgBit(oldp+80,((((IData)(vlSelf->SuperResolutionPart1__DOT__inpThreshold) 
                              <= (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_mainDiff)) 
                             & ((IData)(vlSelf->SuperResolutionPart1__DOT__inpThreshold) 
                                <= (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_counterDiff)))));
    tracep->chgCData(oldp+81,(((IData)(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rValid)
                                ? (IData)(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rData_pixel)
                                : (IData)(vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_rData))),8);
    tracep->chgBit(oldp+82,(((IData)(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rValid)
                              ? (IData)(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rData_frameStart)
                              : (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_frameStart))));
    tracep->chgBit(oldp+83,(((IData)(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rValid)
                              ? (IData)(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rData_rowEnd)
                              : (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_rowEnd))));
    tracep->chgBit(oldp+84,((1U & ((~ (IData)(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rValid)) 
                                   | (IData)(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rData_inpValid)))));
    tracep->chgBit(oldp+85,((((IData)(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_value) 
                              == (7U & ((IData)(vlSelf->SuperResolutionPart1__DOT__bmpWidth) 
                                        - (IData)(2U)))) 
                             & (IData)(vlSelf->SuperResolutionPart1__DOT__passPixels_valid))));
    tracep->chgBit(oldp+86,(((((IData)(vlSelf->SuperResolutionPart1__DOT__bufferRowCount_value) 
                               == (7U & ((IData)(vlSelf->SuperResolutionPart1__DOT__bmpHeight) 
                                         - (IData)(2U)))) 
                              & (IData)(vlSelf->SuperResolutionPart1__DOT__bufferReachRowEnd)) 
                             & (IData)(vlSelf->SuperResolutionPart1__DOT__passPixels_valid))));
    tracep->chgBit(oldp+87,(((IData)(vlSelf->pixelsIn_payload_rowEnd) 
                             & (IData)(vlSelf->SuperResolutionPart1__DOT__passPixels_valid))));
    tracep->chgBit(oldp+88,((((IData)(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_value) 
                              == (0xfU & (((IData)(2U) 
                                           + (IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value)) 
                                          >> 1U))) 
                             & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__passPixels_valid)))));
}

void VSuperResolutionPart1___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root__trace_cleanup\n"); );
    // Init
    VSuperResolutionPart1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSuperResolutionPart1___024root*>(voidSelf);
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
