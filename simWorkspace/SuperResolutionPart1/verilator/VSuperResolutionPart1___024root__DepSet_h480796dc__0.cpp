// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSuperResolutionPart1.h for the primary calling header

#include "verilated.h"

#include "VSuperResolutionPart1___024root.h"

VL_INLINE_OPT void VSuperResolutionPart1___024root___sequent__TOP__2(VSuperResolutionPart1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root___sequent__TOP__2\n"); );
    // Init
    CData/*0:0*/ __Vdly__SuperResolutionPart1__DOT__bufferReachRowEnd;
    CData/*0:0*/ __Vdly__SuperResolutionPart1__DOT__nextRowBuffer;
    // Body
    __Vdly__SuperResolutionPart1__DOT__bufferReachRowEnd 
        = vlSelf->SuperResolutionPart1__DOT__bufferReachRowEnd;
    vlSelf->__Vdly__SuperResolutionPart1__DOT__inpDone 
        = vlSelf->SuperResolutionPart1__DOT__inpDone;
    vlSelf->__Vdly__SuperResolutionPart1__DOT__outReachFinalRow 
        = vlSelf->SuperResolutionPart1__DOT__outReachFinalRow;
    vlSelf->__Vdly__SuperResolutionPart1__DOT__outReachRowEnd 
        = vlSelf->SuperResolutionPart1__DOT__outReachRowEnd;
    __Vdly__SuperResolutionPart1__DOT__nextRowBuffer 
        = vlSelf->SuperResolutionPart1__DOT__nextRowBuffer;
    vlSelf->__Vdly__SuperResolutionPart1__DOT__bufferSwitch 
        = vlSelf->SuperResolutionPart1__DOT__bufferSwitch;
    if (vlSelf->reset) {
        vlSelf->SuperResolutionPart1__DOT__slaveStart = 0U;
        vlSelf->SuperResolutionPart1__DOT__inpThreshold = 0x80U;
        vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value = 0U;
        vlSelf->SuperResolutionPart1__DOT__outRowCount_value = 0U;
        vlSelf->SuperResolutionPart1__DOT__bufferEnable = 0U;
        vlSelf->SuperResolutionPart1__DOT__bufferReuse = 0U;
        __Vdly__SuperResolutionPart1__DOT__bufferReachRowEnd = 0U;
        __Vdly__SuperResolutionPart1__DOT__nextRowBuffer = 1U;
        vlSelf->__Vdly__SuperResolutionPart1__DOT__bufferSwitch = 0U;
        vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rValid = 0U;
        vlSelf->SuperResolutionPart1__DOT__diffStage_counterTwoPixelStream_rValid = 0U;
        vlSelf->SuperResolutionPart1__DOT__diffStage_mainTwoPixelStream_rValid = 0U;
        vlSelf->SuperResolutionPart1__DOT__diffStage_mainOnePixelStream_rValid = 0U;
        vlSelf->SuperResolutionPart1__DOT__diffStage_counterOnePixelStream_rValid = 0U;
        vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_rValid = 0U;
        vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rValid = 0U;
        vlSelf->SuperResolutionPart1__DOT__nextRowBuffer 
            = __Vdly__SuperResolutionPart1__DOT__nextRowBuffer;
        vlSelf->startOut = 0U;
        vlSelf->startOut = vlSelf->SuperResolutionPart1__DOT__slaveStart;
        vlSelf->SuperResolutionPart1__DOT__holdBuffer = 0U;
        vlSelf->SuperResolutionPart1__DOT__bmpWidth = 5U;
        vlSelf->SuperResolutionPart1__DOT__bufferReachFinalRow = 0U;
        vlSelf->pixelsOut_valid = 0U;
        vlSelf->pixelsOut_valid = vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rValid;
        vlSelf->SuperResolutionPart1__DOT__compareStage_counterTwoPixelStream_rValid = 0U;
        vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_rValid = 0U;
        vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_rValid = 0U;
        vlSelf->SuperResolutionPart1__DOT__compareStage_counterOnePixelStream_rValid = 0U;
        vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rValid = 0U;
    } else {
        if (((~ (IData)(vlSelf->inpTwoDoneIn)) & ((IData)(vlSelf->pixelsIn_valid) 
                                                  & (IData)(vlSelf->pixelsIn_ready)))) {
            vlSelf->SuperResolutionPart1__DOT__slaveStart = 1U;
        }
        if (vlSelf->inpTwoDoneIn) {
            vlSelf->SuperResolutionPart1__DOT__slaveStart = 0U;
        }
        vlSelf->SuperResolutionPart1__DOT__inpThreshold 
            = vlSelf->thresholdIn;
        vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value 
            = vlSelf->SuperResolutionPart1__DOT__outPixelAddr_valueNext;
        vlSelf->SuperResolutionPart1__DOT__outRowCount_value 
            = vlSelf->SuperResolutionPart1__DOT__outRowCount_valueNext;
        if (((IData)(vlSelf->StartIn) & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__holdBuffer)))) {
            vlSelf->SuperResolutionPart1__DOT__bufferEnable = 1U;
        }
        if ((1U & ((~ (IData)(vlSelf->StartIn)) | (IData)(vlSelf->SuperResolutionPart1__DOT__holdBuffer)))) {
            vlSelf->SuperResolutionPart1__DOT__bufferEnable = 0U;
        }
        if (vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l613) {
            vlSelf->SuperResolutionPart1__DOT__bufferEnable = 0U;
        }
        if ((((IData)(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_value) 
              == (7U & ((IData)(vlSelf->SuperResolutionPart1__DOT__bmpWidth) 
                        - (IData)(2U)))) & (IData)(vlSelf->SuperResolutionPart1__DOT__passPixels_valid))) {
            __Vdly__SuperResolutionPart1__DOT__bufferReachRowEnd = 1U;
        }
        if (vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l601) {
            if (vlSelf->SuperResolutionPart1__DOT__bufferReachFinalRow) {
                vlSelf->SuperResolutionPart1__DOT__bufferReuse = 1U;
            } else {
                __Vdly__SuperResolutionPart1__DOT__bufferReachRowEnd = 0U;
            }
        }
        if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__startRead)))) {
            __Vdly__SuperResolutionPart1__DOT__nextRowBuffer = 1U;
        }
        if (vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l617) {
            __Vdly__SuperResolutionPart1__DOT__nextRowBuffer 
                = (1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__nextRowBuffer)));
        }
        if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__startRead)))) {
            vlSelf->__Vdly__SuperResolutionPart1__DOT__bufferSwitch = 0U;
        }
        if (((IData)(vlSelf->pixelsIn_payload_rowEnd) 
             & (IData)(vlSelf->SuperResolutionPart1__DOT__passPixels_valid))) {
            vlSelf->__Vdly__SuperResolutionPart1__DOT__bufferSwitch 
                = (1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__bufferSwitch)));
        }
        if (vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_ready) {
            vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rValid 
                = ((IData)(vlSelf->SuperResolutionPart1__DOT__resultsJoin_valid) 
                   | (IData)(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rValid));
        }
        if (vlSelf->SuperResolutionPart1__DOT__diffStage_counterTwoPixelStream_ready) {
            vlSelf->SuperResolutionPart1__DOT__diffStage_counterTwoPixelStream_rValid 
                = vlSelf->SuperResolutionPart1__DOT__compareStage_counterTwoPixelStream_rValid;
        }
        if (vlSelf->SuperResolutionPart1__DOT__diffStage_mainTwoPixelStream_ready) {
            vlSelf->SuperResolutionPart1__DOT__diffStage_mainTwoPixelStream_rValid 
                = vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_rValid;
        }
        if (vlSelf->SuperResolutionPart1__DOT__diffStage_mainOnePixelStream_ready) {
            vlSelf->SuperResolutionPart1__DOT__diffStage_mainOnePixelStream_rValid 
                = vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_rValid;
        }
        if (vlSelf->SuperResolutionPart1__DOT__diffStage_counterOnePixelStream_ready) {
            vlSelf->SuperResolutionPart1__DOT__diffStage_counterOnePixelStream_rValid 
                = vlSelf->SuperResolutionPart1__DOT__compareStage_counterOnePixelStream_rValid;
        }
        if (vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_ready) {
            vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_rValid 
                = ((IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rValid) 
                   & (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_input_ready));
        }
        if (vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_ready) {
            vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rValid 
                = ((IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rValid) 
                   & (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_input_ready));
        }
        vlSelf->SuperResolutionPart1__DOT__nextRowBuffer 
            = __Vdly__SuperResolutionPart1__DOT__nextRowBuffer;
        vlSelf->startOut = 0U;
        vlSelf->startOut = vlSelf->SuperResolutionPart1__DOT__slaveStart;
        if ((1U & (~ (IData)(vlSelf->StartIn)))) {
            vlSelf->SuperResolutionPart1__DOT__holdBuffer = 0U;
        }
        if (vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l613) {
            vlSelf->SuperResolutionPart1__DOT__holdBuffer = 1U;
        }
        if (vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l617) {
            vlSelf->SuperResolutionPart1__DOT__holdBuffer = 0U;
        }
        vlSelf->SuperResolutionPart1__DOT__bmpWidth 
            = vlSelf->widthIn;
        if (((((IData)(vlSelf->SuperResolutionPart1__DOT__bufferRowCount_value) 
               == (7U & ((IData)(vlSelf->SuperResolutionPart1__DOT__bmpHeight) 
                         - (IData)(2U)))) & (IData)(vlSelf->SuperResolutionPart1__DOT__bufferReachRowEnd)) 
             & (IData)(vlSelf->SuperResolutionPart1__DOT__passPixels_valid))) {
            vlSelf->SuperResolutionPart1__DOT__bufferReachFinalRow = 1U;
        }
        vlSelf->pixelsOut_valid = 0U;
        vlSelf->pixelsOut_valid = vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rValid;
        if (vlSelf->SuperResolutionPart1__DOT__compareStage_counterTwoPixelStream_ready) {
            vlSelf->SuperResolutionPart1__DOT__compareStage_counterTwoPixelStream_rValid 
                = vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_rValid;
        }
        if (vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_ready) {
            vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_rValid 
                = vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_rValid;
        }
        if (vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_ready) {
            vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_rValid 
                = vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_rValid;
        }
        if (vlSelf->SuperResolutionPart1__DOT__compareStage_counterOnePixelStream_ready) {
            vlSelf->SuperResolutionPart1__DOT__compareStage_counterOnePixelStream_rValid 
                = vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_rValid;
        }
        if (vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_ready) {
            vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rValid 
                = vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rValid;
        }
    }
    vlSelf->SuperResolutionPart1__DOT___zz_resultStage_mainOnePixelStream_ready 
        = ((((((IData)(vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_rValid) 
               & (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_mainOnePixelStream_rValid)) 
              & (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_counterOnePixelStream_rValid)) 
             & (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_mainTwoPixelStream_rValid)) 
            & (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_counterTwoPixelStream_rValid)) 
           & (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rValid));
    vlSelf->SuperResolutionPart1__DOT__bufferReachRowEnd 
        = __Vdly__SuperResolutionPart1__DOT__bufferReachRowEnd;
}

extern const VlUnpacked<QData/*39:0*/, 8> VSuperResolutionPart1__ConstPool__TABLE_hd2262956_0;
extern const VlUnpacked<CData/*0:0*/, 8> VSuperResolutionPart1__ConstPool__TABLE_h62399bb1_0;

VL_INLINE_OPT void VSuperResolutionPart1___024root___sequent__TOP__3(VSuperResolutionPart1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root___sequent__TOP__3\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    CData/*2:0*/ __Vtableidx11;
    // Body
    if (vlSelf->reset) {
        vlSelf->SuperResolutionPart1__DOT__bmpHeight = 5U;
        vlSelf->SuperResolutionPart1__DOT__bufferRowCount_value = 0U;
        vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_rValid = 0U;
        vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_rValid = 0U;
        vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_rValid = 0U;
        vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_rValid = 0U;
        vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rValid = 0U;
        vlSelf->SuperResolutionPart1__DOT___zz_readStage_counterTwoPixelStream_valid = 0U;
        vlSelf->SuperResolutionPart1__DOT___zz_readStage_mainTwoPixelStream_valid = 0U;
        vlSelf->SuperResolutionPart1__DOT___zz_readStage_mainOnePixelStream_valid = 0U;
        vlSelf->SuperResolutionPart1__DOT___zz_readStage_counterOnePixelStream_valid = 0U;
        vlSelf->SuperResolutionPart1__DOT__controlStream_rValid = 0U;
        vlSelf->__Vdly__SuperResolutionPart1__DOT__inpDone = 0U;
        vlSelf->SuperResolutionPart1__DOT__internalDone = 0U;
        vlSelf->SuperResolutionPart1__DOT__startRead = 0U;
        vlSelf->SuperResolutionPart1__DOT__frameStart = 0U;
        vlSelf->__Vdly__SuperResolutionPart1__DOT__outReachRowEnd = 0U;
        vlSelf->__Vdly__SuperResolutionPart1__DOT__outReachFinalRow = 0U;
        vlSelf->pixelsIn_ready = 0U;
        vlSelf->pixelsIn_ready = vlSelf->SuperResolutionPart1__DOT__bufferEnable;
        vlSelf->SuperResolutionPart1__DOT__inpDone 
            = vlSelf->__Vdly__SuperResolutionPart1__DOT__inpDone;
        vlSelf->SuperResolutionPart1__DOT__outReachFinalRow 
            = vlSelf->__Vdly__SuperResolutionPart1__DOT__outReachFinalRow;
        vlSelf->SuperResolutionPart1__DOT__outReachRowEnd 
            = vlSelf->__Vdly__SuperResolutionPart1__DOT__outReachRowEnd;
        vlSelf->inpDoneOut = 0U;
        vlSelf->inpDoneOut = vlSelf->SuperResolutionPart1__DOT__inpDone;
        vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg = 0U;
    } else {
        vlSelf->SuperResolutionPart1__DOT__bmpHeight 
            = vlSelf->heightIn;
        vlSelf->SuperResolutionPart1__DOT__bufferRowCount_value 
            = vlSelf->SuperResolutionPart1__DOT__bufferRowCount_valueNext;
        if (vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_ready) {
            vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_rValid 
                = vlSelf->SuperResolutionPart1__DOT___zz_readStage_counterTwoPixelStream_valid;
        }
        if (vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_ready) {
            vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_rValid 
                = vlSelf->SuperResolutionPart1__DOT___zz_readStage_mainTwoPixelStream_valid;
        }
        if (vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_ready) {
            vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_rValid 
                = vlSelf->SuperResolutionPart1__DOT___zz_readStage_mainOnePixelStream_valid;
        }
        if (vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_ready) {
            vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_rValid 
                = vlSelf->SuperResolutionPart1__DOT___zz_readStage_counterOnePixelStream_valid;
        }
        if (vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_ready) {
            vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rValid 
                = vlSelf->SuperResolutionPart1__DOT__controlStream_rValid;
        }
        if (vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_ready) {
            vlSelf->SuperResolutionPart1__DOT___zz_readStage_counterTwoPixelStream_valid = 0U;
        }
        if (vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_isFree) {
            vlSelf->SuperResolutionPart1__DOT___zz_readStage_counterTwoPixelStream_valid 
                = vlSelf->SuperResolutionPart1__DOT__startRead;
        }
        if (vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_ready) {
            vlSelf->SuperResolutionPart1__DOT___zz_readStage_mainTwoPixelStream_valid = 0U;
        }
        if (vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_isFree) {
            vlSelf->SuperResolutionPart1__DOT___zz_readStage_mainTwoPixelStream_valid 
                = vlSelf->SuperResolutionPart1__DOT__startRead;
        }
        if (vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_ready) {
            vlSelf->SuperResolutionPart1__DOT___zz_readStage_mainOnePixelStream_valid = 0U;
        }
        if (vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_isFree) {
            vlSelf->SuperResolutionPart1__DOT___zz_readStage_mainOnePixelStream_valid 
                = vlSelf->SuperResolutionPart1__DOT__startRead;
        }
        if (vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_ready) {
            vlSelf->SuperResolutionPart1__DOT___zz_readStage_counterOnePixelStream_valid = 0U;
        }
        if (vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_isFree) {
            vlSelf->SuperResolutionPart1__DOT___zz_readStage_counterOnePixelStream_valid 
                = vlSelf->SuperResolutionPart1__DOT__startRead;
        }
        if (vlSelf->SuperResolutionPart1__DOT__controlStream_ready) {
            vlSelf->SuperResolutionPart1__DOT__controlStream_rValid 
                = vlSelf->SuperResolutionPart1__DOT__startRead;
        }
        if (vlSelf->inpThreeDoneIn) {
            vlSelf->__Vdly__SuperResolutionPart1__DOT__inpDone = 1U;
        }
        if (vlSelf->StartIn) {
            vlSelf->__Vdly__SuperResolutionPart1__DOT__inpDone = 0U;
        }
        if (vlSelf->SuperResolutionPart1__DOT__inpDone) {
            vlSelf->SuperResolutionPart1__DOT__internalDone = 0U;
        }
        if (vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l81) {
            vlSelf->SuperResolutionPart1__DOT__startRead = 1U;
        }
        if (((IData)(vlSelf->pixelsIn_payload_frameStart) 
             & ((IData)(vlSelf->pixelsIn_valid) & (IData)(vlSelf->pixelsIn_ready)))) {
            vlSelf->SuperResolutionPart1__DOT__frameStart = 1U;
        }
        if (vlSelf->SuperResolutionPart1__DOT__inpDone) {
            vlSelf->__Vdly__SuperResolutionPart1__DOT__inpDone = 0U;
        }
        if ((4U & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg))) {
            if ((1U & (~ ((IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg)))) {
                    if (vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l924) {
                        vlSelf->__Vdly__SuperResolutionPart1__DOT__outReachRowEnd = 1U;
                    }
                    if (vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l925) {
                        vlSelf->__Vdly__SuperResolutionPart1__DOT__outReachFinalRow = 1U;
                    }
                    if (vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l927) {
                        if (vlSelf->SuperResolutionPart1__DOT__outReachFinalRow) {
                            vlSelf->SuperResolutionPart1__DOT__startRead = 0U;
                            vlSelf->SuperResolutionPart1__DOT__internalDone = 1U;
                            vlSelf->__Vdly__SuperResolutionPart1__DOT__outReachRowEnd = 0U;
                            vlSelf->__Vdly__SuperResolutionPart1__DOT__outReachFinalRow = 0U;
                        } else {
                            vlSelf->__Vdly__SuperResolutionPart1__DOT__outReachRowEnd = 0U;
                        }
                    }
                    if (vlSelf->SuperResolutionPart1__DOT__controlStream_fire_6) {
                        if (vlSelf->SuperResolutionPart1__DOT__outReachRowEnd) {
                            vlSelf->__Vdly__SuperResolutionPart1__DOT__outReachRowEnd = 0U;
                        }
                    }
                }
            }
        } else if ((2U & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg))) {
            if ((1U & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg))) {
                if (vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l924) {
                    vlSelf->__Vdly__SuperResolutionPart1__DOT__outReachRowEnd = 1U;
                }
                if (vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l925) {
                    vlSelf->__Vdly__SuperResolutionPart1__DOT__outReachFinalRow = 1U;
                }
                if (vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l927) {
                    if (vlSelf->SuperResolutionPart1__DOT__outReachFinalRow) {
                        vlSelf->__Vdly__SuperResolutionPart1__DOT__outReachRowEnd = 0U;
                        vlSelf->__Vdly__SuperResolutionPart1__DOT__outReachFinalRow = 0U;
                        vlSelf->SuperResolutionPart1__DOT__startRead = 0U;
                        vlSelf->SuperResolutionPart1__DOT__internalDone = 1U;
                    } else {
                        vlSelf->__Vdly__SuperResolutionPart1__DOT__outReachRowEnd = 0U;
                    }
                }
                if (vlSelf->SuperResolutionPart1__DOT__controlStream_fire_6) {
                    if (vlSelf->SuperResolutionPart1__DOT__outReachRowEnd) {
                        vlSelf->__Vdly__SuperResolutionPart1__DOT__outReachRowEnd = 0U;
                    }
                }
            } else {
                if (vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l924) {
                    vlSelf->__Vdly__SuperResolutionPart1__DOT__outReachRowEnd = 1U;
                }
                if (vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l707) {
                    vlSelf->SuperResolutionPart1__DOT__frameStart = 0U;
                }
                if (vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l925) {
                    vlSelf->__Vdly__SuperResolutionPart1__DOT__outReachFinalRow = 1U;
                }
                if (vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l927) {
                    if (vlSelf->SuperResolutionPart1__DOT__outReachFinalRow) {
                        vlSelf->__Vdly__SuperResolutionPart1__DOT__outReachRowEnd = 0U;
                        vlSelf->__Vdly__SuperResolutionPart1__DOT__outReachFinalRow = 0U;
                        vlSelf->SuperResolutionPart1__DOT__startRead = 0U;
                        vlSelf->SuperResolutionPart1__DOT__internalDone = 1U;
                    } else {
                        vlSelf->__Vdly__SuperResolutionPart1__DOT__outReachRowEnd = 0U;
                    }
                }
                if (vlSelf->SuperResolutionPart1__DOT__controlStream_fire_6) {
                    if (vlSelf->SuperResolutionPart1__DOT__outReachRowEnd) {
                        vlSelf->__Vdly__SuperResolutionPart1__DOT__outReachRowEnd = 0U;
                    }
                }
            }
        }
        vlSelf->pixelsIn_ready = 0U;
        vlSelf->pixelsIn_ready = vlSelf->SuperResolutionPart1__DOT__bufferEnable;
        vlSelf->SuperResolutionPart1__DOT__inpDone 
            = vlSelf->__Vdly__SuperResolutionPart1__DOT__inpDone;
        vlSelf->SuperResolutionPart1__DOT__outReachFinalRow 
            = vlSelf->__Vdly__SuperResolutionPart1__DOT__outReachFinalRow;
        vlSelf->SuperResolutionPart1__DOT__outReachRowEnd 
            = vlSelf->__Vdly__SuperResolutionPart1__DOT__outReachRowEnd;
        vlSelf->inpDoneOut = 0U;
        vlSelf->inpDoneOut = vlSelf->SuperResolutionPart1__DOT__inpDone;
        vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg 
            = vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateNext;
    }
    __Vtableidx1 = vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg;
    vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg_string 
        = VSuperResolutionPart1__ConstPool__TABLE_hd2262956_0
        [__Vtableidx1];
    __Vtableidx11 = vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg;
    vlSelf->SuperResolutionPart1__DOT__controlStateMachine_wantStart 
        = VSuperResolutionPart1__ConstPool__TABLE_h62399bb1_0
        [__Vtableidx11];
}

VL_INLINE_OPT void VSuperResolutionPart1___024root___sequent__TOP__6(VSuperResolutionPart1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root___sequent__TOP__6\n"); );
    // Body
    vlSelf->__Vdlyvset__SuperResolutionPart1__DOT__lineBufferTwo__v0 = 0U;
    vlSelf->__Vdlyvset__SuperResolutionPart1__DOT__lineBufferOne__v0 = 0U;
    if (vlSelf->SuperResolutionPart1__DOT__diffStage_mainOnePixelStream_ready) {
        vlSelf->SuperResolutionPart1__DOT__diffStage_mainOnePixelStream_rData 
            = vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_rData;
    }
    if (vlSelf->SuperResolutionPart1__DOT__diffStage_mainTwoPixelStream_ready) {
        vlSelf->SuperResolutionPart1__DOT__diffStage_mainTwoPixelStream_rData 
            = vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_rData;
    }
    if (vlSelf->SuperResolutionPart1__DOT__diffStage_counterOnePixelStream_ready) {
        vlSelf->SuperResolutionPart1__DOT__diffStage_counterOnePixelStream_rData 
            = vlSelf->SuperResolutionPart1__DOT__compareStage_counterOnePixelStream_rData;
    }
    if (vlSelf->SuperResolutionPart1__DOT__diffStage_counterTwoPixelStream_ready) {
        vlSelf->SuperResolutionPart1__DOT__diffStage_counterTwoPixelStream_rData 
            = vlSelf->SuperResolutionPart1__DOT__compareStage_counterTwoPixelStream_rData;
    }
    if (((IData)(vlSelf->SuperResolutionPart1__DOT__passPixels_valid) 
         & (IData)(vlSelf->SuperResolutionPart1__DOT__bufferSwitch))) {
        vlSelf->SuperResolutionPart1__DOT____Vlvbound_h3e6a67dd__0 
            = vlSelf->pixelsIn_payload_pixel;
        if ((4U >= (IData)(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_value))) {
            vlSelf->__Vdlyvval__SuperResolutionPart1__DOT__lineBufferTwo__v0 
                = vlSelf->SuperResolutionPart1__DOT____Vlvbound_h3e6a67dd__0;
            vlSelf->__Vdlyvset__SuperResolutionPart1__DOT__lineBufferTwo__v0 = 1U;
            vlSelf->__Vdlyvdim0__SuperResolutionPart1__DOT__lineBufferTwo__v0 
                = vlSelf->SuperResolutionPart1__DOT__bufferWAddr_value;
        }
    }
    if (((IData)(vlSelf->SuperResolutionPart1__DOT__passPixels_valid) 
         & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__bufferSwitch)))) {
        vlSelf->SuperResolutionPart1__DOT____Vlvbound_h267b71c9__0 
            = vlSelf->pixelsIn_payload_pixel;
        if ((4U >= (IData)(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_value))) {
            vlSelf->__Vdlyvval__SuperResolutionPart1__DOT__lineBufferOne__v0 
                = vlSelf->SuperResolutionPart1__DOT____Vlvbound_h267b71c9__0;
            vlSelf->__Vdlyvset__SuperResolutionPart1__DOT__lineBufferOne__v0 = 1U;
            vlSelf->__Vdlyvdim0__SuperResolutionPart1__DOT__lineBufferOne__v0 
                = vlSelf->SuperResolutionPart1__DOT__bufferWAddr_value;
        }
    }
    if (vlSelf->SuperResolutionPart1__DOT__controlStream_ready) {
        vlSelf->SuperResolutionPart1__DOT__controlStream_rData_mainCompare = 0U;
    }
    if (vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_ready) {
        vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_mainDiff 
            = vlSelf->SuperResolutionPart1__DOT__controlStream_rData_mainDiff;
    }
    if (vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_ready) {
        vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_counterDiff 
            = vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_counterDiff;
        vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_mainDiff 
            = vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_mainDiff;
        vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_counterCompare 
            = vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_counterCompare;
        vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_mainCompare 
            = vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_mainCompare;
        vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_passMode 
            = vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_passMode;
        vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_onceMode 
            = vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_onceMode;
        vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_twiceMode 
            = vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_twiceMode;
    }
    if (vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_ready) {
        vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_inpValid 
            = (1U & ((~ (IData)(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rValid)) 
                     | (IData)(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rData_inpValid)));
    }
    if (vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_ready) {
        vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_passValid 
            = vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_passValid;
        vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_onceValid 
            = vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_onceValid;
        vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_twiceCompValid 
            = vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_twiceCompValid;
    }
    if (vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_ready) {
        if (vlSelf->SuperResolutionPart1__DOT__pixelsStream_rValid) {
            vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_pixel 
                = vlSelf->SuperResolutionPart1__DOT__pixelsStream_rData_pixel;
            vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_frameStart 
                = vlSelf->SuperResolutionPart1__DOT__pixelsStream_rData_frameStart;
            vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_rowEnd 
                = vlSelf->SuperResolutionPart1__DOT__pixelsStream_rData_rowEnd;
        } else {
            vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_pixel 
                = vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_rData;
            vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_frameStart 
                = vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_frameStart;
            vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_rowEnd 
                = vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_rowEnd;
        }
    }
    if (vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_ready) {
        vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_rData 
            = vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_rData;
    }
    if (vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_ready) {
        vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_rData 
            = vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_rData;
    }
    if (vlSelf->SuperResolutionPart1__DOT__compareStage_counterOnePixelStream_ready) {
        vlSelf->SuperResolutionPart1__DOT__compareStage_counterOnePixelStream_rData 
            = vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_rData;
    }
    if (vlSelf->SuperResolutionPart1__DOT__compareStage_counterTwoPixelStream_ready) {
        vlSelf->SuperResolutionPart1__DOT__compareStage_counterTwoPixelStream_rData 
            = vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_rData;
    }
    if (vlSelf->SuperResolutionPart1__DOT__controlStream_ready) {
        vlSelf->SuperResolutionPart1__DOT__controlStream_rData_mainDiff = 0U;
    }
    if (vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_ready) {
        vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_counterDiff 
            = vlSelf->SuperResolutionPart1__DOT___zz_compareStage_controlPipe_translated_payload_counterDiff;
        vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_mainDiff 
            = vlSelf->SuperResolutionPart1__DOT___zz_compareStage_controlPipe_translated_payload_mainDiff;
        vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_counterCompare 
            = vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_counterCompare;
        vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_mainCompare 
            = vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_mainCompare;
        vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_passMode 
            = vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_passMode;
        vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_onceMode 
            = vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_onceMode;
        vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_twiceMode 
            = vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_twiceMode;
    }
    vlSelf->pixelsOut_payload_inpValid = 0U;
    vlSelf->pixelsOut_payload_inpValid = vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_inpValid;
    if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rValid)))) {
        vlSelf->SuperResolutionPart1__DOT__pixelsStream_rData_inpValid = 1U;
    }
    if (vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_ready) {
        vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_passValid 
            = vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_passValid;
        vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_onceValid 
            = vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_onceValid;
        vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_twiceCompValid 
            = vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_twiceCompValid;
    }
    vlSelf->SuperResolutionPart1__DOT__when_Stream_l434 
        = (1U & (((~ (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_passValid)) 
                  & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_onceValid))) 
                 & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_twiceCompValid))));
    vlSelf->pixelsOut_payload_pixel = 0U;
    vlSelf->pixelsOut_payload_pixel = vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_pixel;
    if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rValid)))) {
        vlSelf->SuperResolutionPart1__DOT__pixelsStream_rData_pixel 
            = vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_rData;
        vlSelf->pixelsOut_payload_frameStart = 0U;
        vlSelf->pixelsOut_payload_frameStart = vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_frameStart;
        vlSelf->SuperResolutionPart1__DOT__pixelsStream_rData_frameStart 
            = vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_frameStart;
        vlSelf->pixelsOut_payload_rowEnd = 0U;
        vlSelf->pixelsOut_payload_rowEnd = vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_rowEnd;
        vlSelf->SuperResolutionPart1__DOT__pixelsStream_rData_rowEnd 
            = vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_rowEnd;
    } else {
        vlSelf->pixelsOut_payload_frameStart = 0U;
        vlSelf->pixelsOut_payload_frameStart = vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_frameStart;
        vlSelf->pixelsOut_payload_rowEnd = 0U;
        vlSelf->pixelsOut_payload_rowEnd = vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_rowEnd;
    }
}

VL_INLINE_OPT void VSuperResolutionPart1___024root___sequent__TOP__7(VSuperResolutionPart1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root___sequent__TOP__7\n"); );
    // Body
    if (vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_ready) {
        vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_rData 
            = vlSelf->SuperResolutionPart1__DOT___zz_lineBufferOne_port0;
    }
    if (vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_ready) {
        vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_rData 
            = vlSelf->SuperResolutionPart1__DOT___zz_lineBufferTwo_port0;
    }
    if (vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_ready) {
        vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_rData 
            = vlSelf->SuperResolutionPart1__DOT___zz_lineBufferOne_port1;
    }
    if (vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_ready) {
        vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_rData 
            = vlSelf->SuperResolutionPart1__DOT___zz_lineBufferTwo_port1;
    }
    if (vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_ready) {
        vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_counterCompare 
            = vlSelf->SuperResolutionPart1__DOT___zz_readStage_controlPipe_translated_payload_counterCompare;
        vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_mainCompare 
            = vlSelf->SuperResolutionPart1__DOT___zz_readStage_controlPipe_translated_payload_mainCompare;
        vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_passMode 
            = vlSelf->SuperResolutionPart1__DOT__controlStream_rData_passMode;
        vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_onceMode 
            = vlSelf->SuperResolutionPart1__DOT__controlStream_rData_onceMode;
        vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_twiceMode 
            = vlSelf->SuperResolutionPart1__DOT__controlStream_rData_twiceMode;
        vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_passValid 
            = vlSelf->SuperResolutionPart1__DOT__controlStream_rData_passValid;
        vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_onceValid 
            = vlSelf->SuperResolutionPart1__DOT__controlStream_rData_onceValid;
        vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_twiceCompValid 
            = vlSelf->SuperResolutionPart1__DOT__controlStream_rData_twiceCompValid;
    }
    if (vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_ready) {
        vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_rData 
            = vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_payload;
    }
    if (vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_ready) {
        vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_frameStart 
            = vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_frameStart;
        vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_rowEnd 
            = vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_rowEnd;
    }
    if (vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_isFree) {
        vlSelf->SuperResolutionPart1__DOT___zz_lineBufferOne_port0 
            = ((4U >= (7U & (IData)(vlSelf->SuperResolutionPart1__DOT__mainAddrOne)))
                ? vlSelf->SuperResolutionPart1__DOT__lineBufferOne
               [(7U & (IData)(vlSelf->SuperResolutionPart1__DOT__mainAddrOne))]
                : (IData)(vlSelf->SuperResolutionPart1__DOT____Vxrand_h96fd8d4e__0));
    }
    if (vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_isFree) {
        vlSelf->SuperResolutionPart1__DOT___zz_lineBufferTwo_port0 
            = ((4U >= (7U & (IData)(vlSelf->SuperResolutionPart1__DOT__mainAddrTwo)))
                ? vlSelf->SuperResolutionPart1__DOT__lineBufferTwo
               [(7U & (IData)(vlSelf->SuperResolutionPart1__DOT__mainAddrTwo))]
                : (IData)(vlSelf->SuperResolutionPart1__DOT____Vxrand_h96fd8d4e__2));
    }
    if (vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_isFree) {
        vlSelf->SuperResolutionPart1__DOT___zz_lineBufferOne_port1 
            = ((4U >= (7U & (IData)(vlSelf->SuperResolutionPart1__DOT__counterAddrOne)))
                ? vlSelf->SuperResolutionPart1__DOT__lineBufferOne
               [(7U & (IData)(vlSelf->SuperResolutionPart1__DOT__counterAddrOne))]
                : (IData)(vlSelf->SuperResolutionPart1__DOT____Vxrand_h96fd8d4e__1));
    }
    if (vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_isFree) {
        vlSelf->SuperResolutionPart1__DOT___zz_lineBufferTwo_port1 
            = ((4U >= (7U & (IData)(vlSelf->SuperResolutionPart1__DOT__counterAddrTwo)))
                ? vlSelf->SuperResolutionPart1__DOT__lineBufferTwo
               [(7U & (IData)(vlSelf->SuperResolutionPart1__DOT__counterAddrTwo))]
                : (IData)(vlSelf->SuperResolutionPart1__DOT____Vxrand_h96fd8d4e__3));
    }
    if (vlSelf->SuperResolutionPart1__DOT__controlStream_ready) {
        vlSelf->SuperResolutionPart1__DOT__controlStream_rData_passMode 
            = vlSelf->SuperResolutionPart1__DOT__controls_passMode;
        vlSelf->SuperResolutionPart1__DOT__controlStream_rData_onceMode 
            = vlSelf->SuperResolutionPart1__DOT__controls_onceMode;
        vlSelf->SuperResolutionPart1__DOT__controlStream_rData_twiceMode 
            = vlSelf->SuperResolutionPart1__DOT__controls_twiceMode;
        vlSelf->SuperResolutionPart1__DOT__controlStream_rData_passValid 
            = vlSelf->SuperResolutionPart1__DOT__controls_passValid;
        vlSelf->SuperResolutionPart1__DOT__controlStream_rData_onceValid 
            = vlSelf->SuperResolutionPart1__DOT__controls_onceValid;
    }
    vlSelf->SuperResolutionPart1__DOT___zz_compareStage_controlPipe_translated_payload_counterDiff 
        = vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_mainDiff;
    if (vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_twiceCompValid) {
        if ((0U == (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_twiceMode))) {
            vlSelf->SuperResolutionPart1__DOT___zz_compareStage_controlPipe_translated_payload_counterDiff 
                = (0xffU & ((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_counterCompare)
                             ? ((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_rData) 
                                - (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_rData))
                             : ((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_rData) 
                                - (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_rData))));
        } else if ((1U == (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_twiceMode))) {
            vlSelf->SuperResolutionPart1__DOT___zz_compareStage_controlPipe_translated_payload_counterDiff 
                = (0xffU & ((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_counterCompare)
                             ? ((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_rData) 
                                - (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_rData))
                             : ((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_rData) 
                                - (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_rData))));
        }
    }
    vlSelf->SuperResolutionPart1__DOT___zz_compareStage_controlPipe_translated_payload_mainDiff 
        = vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_mainDiff;
    if (vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_onceValid) {
        if ((4U & (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_onceMode))) {
            if ((1U & (~ ((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_onceMode) 
                          >> 1U)))) {
                vlSelf->SuperResolutionPart1__DOT___zz_compareStage_controlPipe_translated_payload_mainDiff = 0U;
            }
        } else {
            vlSelf->SuperResolutionPart1__DOT___zz_compareStage_controlPipe_translated_payload_mainDiff 
                = (0xffU & ((2U & (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_onceMode))
                             ? ((1U & (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_onceMode))
                                 ? ((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_mainCompare)
                                     ? ((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_rData) 
                                        - (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_rData))
                                     : ((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_rData) 
                                        - (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_rData)))
                                 : ((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_mainCompare)
                                     ? ((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_rData) 
                                        - (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_rData))
                                     : ((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_rData) 
                                        - (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_rData))))
                             : ((1U & (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_onceMode))
                                 ? ((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_mainCompare)
                                     ? ((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_rData) 
                                        - (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_rData))
                                     : ((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_rData) 
                                        - (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_rData)))
                                 : ((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_mainCompare)
                                     ? ((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_rData) 
                                        - (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_rData))
                                     : ((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_rData) 
                                        - (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_rData))))));
        }
    }
    if (vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_twiceCompValid) {
        if ((4U & (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_twiceMode))) {
            if ((1U & (~ ((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_twiceMode) 
                          >> 1U)))) {
                vlSelf->SuperResolutionPart1__DOT___zz_compareStage_controlPipe_translated_payload_mainDiff 
                    = ((1U & (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_twiceMode))
                        ? (0xffU & ((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_mainCompare)
                                     ? ((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_rData) 
                                        - (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_rData))
                                     : ((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_rData) 
                                        - (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_rData))))
                        : 0U);
            }
        } else {
            vlSelf->SuperResolutionPart1__DOT___zz_compareStage_controlPipe_translated_payload_mainDiff 
                = (0xffU & ((2U & (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_twiceMode))
                             ? ((1U & (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_twiceMode))
                                 ? ((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_mainCompare)
                                     ? ((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_rData) 
                                        - (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_rData))
                                     : ((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_rData) 
                                        - (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_rData)))
                                 : 0U) : ((1U & (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_twiceMode))
                                           ? ((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_mainCompare)
                                               ? ((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_rData) 
                                                  - (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_rData))
                                               : ((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_rData) 
                                                  - (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_rData)))
                                           : ((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_mainCompare)
                                               ? ((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_rData) 
                                                  - (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_rData))
                                               : ((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_rData) 
                                                  - (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_rData))))));
        }
    }
    if (vlSelf->SuperResolutionPart1__DOT__controlStream_ready) {
        vlSelf->SuperResolutionPart1__DOT__controlStream_rData_twiceCompValid 
            = vlSelf->SuperResolutionPart1__DOT__controls_twiceCompValid;
    }
    if (vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_ready) {
        vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_frameStart 
            = vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_frameStart;
    }
}

VL_INLINE_OPT void VSuperResolutionPart1___024root___sequent__TOP__8(VSuperResolutionPart1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root___sequent__TOP__8\n"); );
    // Body
    if (vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_ready) {
        vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_rowEnd 
            = vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_rowEnd;
    }
    if (vlSelf->__Vdlyvset__SuperResolutionPart1__DOT__lineBufferOne__v0) {
        vlSelf->SuperResolutionPart1__DOT__lineBufferOne[vlSelf->__Vdlyvdim0__SuperResolutionPart1__DOT__lineBufferOne__v0] 
            = vlSelf->__Vdlyvval__SuperResolutionPart1__DOT__lineBufferOne__v0;
    }
    if (vlSelf->__Vdlyvset__SuperResolutionPart1__DOT__lineBufferTwo__v0) {
        vlSelf->SuperResolutionPart1__DOT__lineBufferTwo[vlSelf->__Vdlyvdim0__SuperResolutionPart1__DOT__lineBufferTwo__v0] 
            = vlSelf->__Vdlyvval__SuperResolutionPart1__DOT__lineBufferTwo__v0;
    }
    vlSelf->SuperResolutionPart1__DOT___zz_readStage_controlPipe_translated_payload_counterCompare 
        = vlSelf->SuperResolutionPart1__DOT__controlStream_rData_mainCompare;
    if (vlSelf->SuperResolutionPart1__DOT__controlStream_rData_twiceCompValid) {
        if ((0U == (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_twiceMode))) {
            vlSelf->SuperResolutionPart1__DOT___zz_readStage_controlPipe_translated_payload_counterCompare 
                = ((IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferOne_port1) 
                   <= (IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferTwo_port1));
        } else if ((1U == (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_twiceMode))) {
            vlSelf->SuperResolutionPart1__DOT___zz_readStage_controlPipe_translated_payload_counterCompare 
                = ((IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferTwo_port1) 
                   <= (IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferOne_port1));
        }
    }
    vlSelf->SuperResolutionPart1__DOT___zz_readStage_controlPipe_translated_payload_mainCompare 
        = vlSelf->SuperResolutionPart1__DOT__controlStream_rData_mainCompare;
    if (vlSelf->SuperResolutionPart1__DOT__controlStream_rData_onceValid) {
        if ((4U & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_onceMode))) {
            if ((1U & (~ ((IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_onceMode) 
                          >> 1U)))) {
                vlSelf->SuperResolutionPart1__DOT___zz_readStage_controlPipe_translated_payload_mainCompare = 1U;
            }
        } else {
            vlSelf->SuperResolutionPart1__DOT___zz_readStage_controlPipe_translated_payload_mainCompare 
                = ((2U & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_onceMode))
                    ? ((1U & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_onceMode))
                        ? ((IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferOne_port0) 
                           <= (IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferTwo_port0))
                        : ((IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferTwo_port0) 
                           <= (IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferOne_port0)))
                    : ((1U & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_onceMode))
                        ? ((IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferTwo_port1) 
                           <= (IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferTwo_port0))
                        : ((IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferOne_port1) 
                           <= (IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferOne_port0))));
        }
    }
    if (vlSelf->SuperResolutionPart1__DOT__controlStream_rData_twiceCompValid) {
        if ((4U & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_twiceMode))) {
            if ((1U & (~ ((IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_twiceMode) 
                          >> 1U)))) {
                vlSelf->SuperResolutionPart1__DOT___zz_readStage_controlPipe_translated_payload_mainCompare 
                    = (1U & ((~ (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_twiceMode)) 
                             | ((IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferOne_port1) 
                                <= (IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferOne_port0))));
            }
        } else {
            vlSelf->SuperResolutionPart1__DOT___zz_readStage_controlPipe_translated_payload_mainCompare 
                = (1U & ((2U & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_twiceMode))
                          ? ((~ (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_twiceMode)) 
                             | ((IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferTwo_port1) 
                                <= (IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferTwo_port0)))
                          : ((1U & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_twiceMode))
                              ? ((IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferOne_port0) 
                                 <= (IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferTwo_port0))
                              : ((IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferTwo_port0) 
                                 <= (IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferOne_port0)))));
        }
    }
    if (vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_ready) {
        vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_frameStart 
            = vlSelf->SuperResolutionPart1__DOT__controlStream_rData_frameStart;
        vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_rowEnd 
            = vlSelf->SuperResolutionPart1__DOT__controlStream_rData_rowEnd;
    }
    if (vlSelf->SuperResolutionPart1__DOT__controlStream_ready) {
        vlSelf->SuperResolutionPart1__DOT__controlStream_rData_frameStart 
            = vlSelf->SuperResolutionPart1__DOT__controls_frameStart;
        vlSelf->SuperResolutionPart1__DOT__controlStream_rData_rowEnd 
            = vlSelf->SuperResolutionPart1__DOT__controls_rowEnd;
    }
}

VL_INLINE_OPT void VSuperResolutionPart1___024root___combo__TOP__14(VSuperResolutionPart1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root___combo__TOP__14\n"); );
    // Body
    vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l81 
        = ((IData)(vlSelf->StartIn) & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__internalDone)));
    vlSelf->SuperResolutionPart1__DOT__passPixels_valid 
        = ((IData)(vlSelf->pixelsIn_valid) & (IData)(vlSelf->SuperResolutionPart1__DOT__bufferEnable));
    vlSelf->SuperResolutionPart1__DOT__bufferWAddr_willIncrement = 0U;
    if (vlSelf->SuperResolutionPart1__DOT__passPixels_valid) {
        if ((1U & (~ (IData)(vlSelf->pixelsIn_payload_rowEnd)))) {
            vlSelf->SuperResolutionPart1__DOT__bufferWAddr_willIncrement = 1U;
        }
        vlSelf->SuperResolutionPart1__DOT__bufferWAddr_willClear = 0U;
        if (vlSelf->pixelsIn_payload_rowEnd) {
            vlSelf->SuperResolutionPart1__DOT__bufferWAddr_willClear = 1U;
            vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l601 = 1U;
            vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l613 
                = (0U != (IData)(vlSelf->SuperResolutionPart1__DOT__bufferRowCount_value));
        } else {
            vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l601 = 0U;
            vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l613 = 0U;
        }
    } else {
        vlSelf->SuperResolutionPart1__DOT__bufferWAddr_willClear = 0U;
        vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l601 = 0U;
        vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l613 = 0U;
    }
    vlSelf->SuperResolutionPart1__DOT__bufferRowCount_willIncrement = 0U;
    if (vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l601) {
        if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__bufferReachFinalRow)))) {
            vlSelf->SuperResolutionPart1__DOT__bufferRowCount_willIncrement = 1U;
        }
        vlSelf->SuperResolutionPart1__DOT__bufferRowCount_willClear = 0U;
        if (vlSelf->SuperResolutionPart1__DOT__bufferReachFinalRow) {
            vlSelf->SuperResolutionPart1__DOT__bufferRowCount_willClear = 1U;
        }
    } else {
        vlSelf->SuperResolutionPart1__DOT__bufferRowCount_willClear = 0U;
    }
    vlSelf->SuperResolutionPart1__DOT__bufferRowCount_valueNext 
        = (((5U == (IData)(vlSelf->SuperResolutionPart1__DOT__bufferRowCount_value)) 
            & (IData)(vlSelf->SuperResolutionPart1__DOT__bufferRowCount_willIncrement))
            ? 0U : (7U & ((IData)(vlSelf->SuperResolutionPart1__DOT__bufferRowCount_value) 
                          + (IData)(vlSelf->SuperResolutionPart1__DOT__bufferRowCount_willIncrement))));
    if (vlSelf->SuperResolutionPart1__DOT__bufferRowCount_willClear) {
        vlSelf->SuperResolutionPart1__DOT__bufferRowCount_valueNext = 0U;
    }
}

VL_INLINE_OPT void VSuperResolutionPart1___024root___sequent__TOP__15(VSuperResolutionPart1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root___sequent__TOP__15\n"); );
    // Body
    vlSelf->SuperResolutionPart1__DOT__bufferSwitch 
        = vlSelf->__Vdly__SuperResolutionPart1__DOT__bufferSwitch;
    vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_payload = 0U;
    if (vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_passValid) {
        vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_payload 
            = ((IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_passMode)
                ? (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_rData)
                : (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_rData));
    }
    if (vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_onceValid) {
        if ((4U & (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_onceMode))) {
            if ((1U & (~ ((IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_onceMode) 
                          >> 1U)))) {
                vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_payload 
                    = ((1U & (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_onceMode))
                        ? (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_rData)
                        : (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_rData));
            }
        } else {
            vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_payload 
                = (0xffU & ((2U & (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_onceMode))
                             ? ((1U & (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_onceMode))
                                 ? (((IData)(vlSelf->SuperResolutionPart1__DOT__inpThreshold) 
                                     <= (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_mainDiff))
                                     ? (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_rData)
                                     : (0xffU & (((IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_rData) 
                                                  + (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_rData)) 
                                                 >> 1U)))
                                 : (((IData)(vlSelf->SuperResolutionPart1__DOT__inpThreshold) 
                                     <= (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_mainDiff))
                                     ? (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_rData)
                                     : (0xffU & (((IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_rData) 
                                                  + (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_rData)) 
                                                 >> 1U))))
                             : ((1U & (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_onceMode))
                                 ? (((IData)(vlSelf->SuperResolutionPart1__DOT__inpThreshold) 
                                     <= (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_mainDiff))
                                     ? (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_rData)
                                     : (0xffU & (((IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_rData) 
                                                  + (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_counterTwoPixelStream_rData)) 
                                                 >> 1U)))
                                 : (((IData)(vlSelf->SuperResolutionPart1__DOT__inpThreshold) 
                                     <= (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_mainDiff))
                                     ? (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_rData)
                                     : (0xffU & (((IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_rData) 
                                                  + (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_counterOnePixelStream_rData)) 
                                                 >> 1U))))));
        }
    }
    if (vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_twiceCompValid) {
        if ((4U & (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_twiceMode))) {
            if ((1U & (~ ((IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_twiceMode) 
                          >> 1U)))) {
                vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_payload 
                    = (0xffU & ((1U & (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_twiceMode))
                                 ? (((IData)(vlSelf->SuperResolutionPart1__DOT__inpThreshold) 
                                     <= (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_mainDiff))
                                     ? (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_rData)
                                     : (0xffU & (((IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_rData) 
                                                  + (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_counterOnePixelStream_rData)) 
                                                 >> 1U)))
                                 : (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_rData)));
            }
        } else {
            vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_payload 
                = (0xffU & ((2U & (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_twiceMode))
                             ? ((1U & (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_twiceMode))
                                 ? (((IData)(vlSelf->SuperResolutionPart1__DOT__inpThreshold) 
                                     <= (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_mainDiff))
                                     ? (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_rData)
                                     : (0xffU & (((IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_rData) 
                                                  + (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_counterTwoPixelStream_rData)) 
                                                 >> 1U)))
                                 : (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_rData))
                             : ((1U & (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_twiceMode))
                                 ? ((((IData)(vlSelf->SuperResolutionPart1__DOT__inpThreshold) 
                                      <= (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_mainDiff)) 
                                     & ((IData)(vlSelf->SuperResolutionPart1__DOT__inpThreshold) 
                                        <= (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_counterDiff)))
                                     ? (((IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_counterDiff) 
                                         <= (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_mainDiff))
                                         ? (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_rData)
                                         : (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_counterOnePixelStream_rData))
                                     : (((IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_counterDiff) 
                                         <= (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_mainDiff))
                                         ? (0xffU & 
                                            (((IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_counterOnePixelStream_rData) 
                                              + (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_counterTwoPixelStream_rData)) 
                                             >> 1U))
                                         : (0xffU & 
                                            (((IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_rData) 
                                              + (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_rData)) 
                                             >> 1U))))
                                 : ((((IData)(vlSelf->SuperResolutionPart1__DOT__inpThreshold) 
                                      <= (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_mainDiff)) 
                                     & ((IData)(vlSelf->SuperResolutionPart1__DOT__inpThreshold) 
                                        <= (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_counterDiff)))
                                     ? (((IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_counterDiff) 
                                         <= (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_mainDiff))
                                         ? (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_rData)
                                         : (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_counterTwoPixelStream_rData))
                                     : (((IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_counterDiff) 
                                         <= (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_mainDiff))
                                         ? (0xffU & 
                                            (((IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_counterOnePixelStream_rData) 
                                              + (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_counterTwoPixelStream_rData)) 
                                             >> 1U))
                                         : (0xffU & 
                                            (((IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_rData) 
                                              + (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_rData)) 
                                             >> 1U)))))));
        }
    }
    vlSelf->SuperResolutionPart1__DOT__mainAddrOne 
        = (0xfU & ((IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value) 
                   >> 1U));
    if ((4U & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg))) {
        if ((1U & (~ ((IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg)))) {
                if (vlSelf->SuperResolutionPart1__DOT__outReachFinalRow) {
                    if (vlSelf->SuperResolutionPart1__DOT__nextRowBuffer) {
                        vlSelf->SuperResolutionPart1__DOT__mainAddrOne 
                            = (0xfU & ((IData)(vlSelf->SuperResolutionPart1__DOT__outReachRowEnd)
                                        ? (7U & (((IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value) 
                                                  - (IData)(1U)) 
                                                 >> 1U))
                                        : (7U & (((IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value) 
                                                  - (IData)(1U)) 
                                                 >> 1U))));
                    }
                } else {
                    vlSelf->SuperResolutionPart1__DOT__mainAddrOne 
                        = (0xfU & ((IData)(vlSelf->SuperResolutionPart1__DOT__nextRowBuffer)
                                    ? (7U & (((IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value) 
                                              - (IData)(1U)) 
                                             >> 1U))
                                    : ((IData)(vlSelf->SuperResolutionPart1__DOT__outReachRowEnd)
                                        ? (7U & (((IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value) 
                                                  - (IData)(1U)) 
                                                 >> 1U))
                                        : (0xfU & (
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value)) 
                                                   >> 1U)))));
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg))) {
        if ((1U & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg))) {
            if ((0U == (1U & (IData)(vlSelf->SuperResolutionPart1__DOT__outRowCount_value)))) {
                if (vlSelf->SuperResolutionPart1__DOT__nextRowBuffer) {
                    vlSelf->SuperResolutionPart1__DOT__mainAddrOne 
                        = (7U & (((IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value) 
                                  - (IData)(1U)) >> 1U));
                }
            } else {
                vlSelf->SuperResolutionPart1__DOT__mainAddrOne 
                    = (0xfU & ((IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value) 
                               >> 1U));
            }
        }
    }
    vlSelf->SuperResolutionPart1__DOT__mainAddrTwo 
        = (0xfU & ((IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value) 
                   >> 1U));
    if ((4U & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg))) {
        if ((1U & (~ ((IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg)))) {
                if (vlSelf->SuperResolutionPart1__DOT__outReachFinalRow) {
                    if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__nextRowBuffer)))) {
                        vlSelf->SuperResolutionPart1__DOT__mainAddrTwo 
                            = (0xfU & ((IData)(vlSelf->SuperResolutionPart1__DOT__outReachRowEnd)
                                        ? (7U & (((IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value) 
                                                  - (IData)(1U)) 
                                                 >> 1U))
                                        : (7U & (((IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value) 
                                                  - (IData)(1U)) 
                                                 >> 1U))));
                    }
                } else {
                    vlSelf->SuperResolutionPart1__DOT__mainAddrTwo 
                        = (0xfU & ((IData)(vlSelf->SuperResolutionPart1__DOT__nextRowBuffer)
                                    ? ((IData)(vlSelf->SuperResolutionPart1__DOT__outReachRowEnd)
                                        ? (7U & (((IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value) 
                                                  - (IData)(1U)) 
                                                 >> 1U))
                                        : (0xfU & (
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value)) 
                                                   >> 1U)))
                                    : (7U & (((IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value) 
                                              - (IData)(1U)) 
                                             >> 1U))));
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg))) {
        if ((1U & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg))) {
            if ((0U == (1U & (IData)(vlSelf->SuperResolutionPart1__DOT__outRowCount_value)))) {
                if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__nextRowBuffer)))) {
                    vlSelf->SuperResolutionPart1__DOT__mainAddrTwo 
                        = (7U & (((IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value) 
                                  - (IData)(1U)) >> 1U));
                }
            } else {
                vlSelf->SuperResolutionPart1__DOT__mainAddrTwo 
                    = (0xfU & ((IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value) 
                               >> 1U));
            }
        }
    }
    vlSelf->SuperResolutionPart1__DOT__counterAddrOne 
        = (0xfU & ((IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value) 
                   >> 1U));
    if ((4U & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg))) {
        if ((1U & (~ ((IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg)))) {
                if (vlSelf->SuperResolutionPart1__DOT__outReachFinalRow) {
                    if (vlSelf->SuperResolutionPart1__DOT__nextRowBuffer) {
                        if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__outReachRowEnd)))) {
                            vlSelf->SuperResolutionPart1__DOT__counterAddrOne 
                                = (0xfU & (((IData)(1U) 
                                            + (IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value)) 
                                           >> 1U));
                        }
                    }
                } else {
                    vlSelf->SuperResolutionPart1__DOT__counterAddrOne 
                        = (0xfU & ((IData)(vlSelf->SuperResolutionPart1__DOT__nextRowBuffer)
                                    ? ((IData)(vlSelf->SuperResolutionPart1__DOT__outReachRowEnd)
                                        ? (7U & (((IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value) 
                                                  - (IData)(1U)) 
                                                 >> 1U))
                                        : (0xfU & (
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value)) 
                                                   >> 1U)))
                                    : (7U & (((IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value) 
                                              - (IData)(1U)) 
                                             >> 1U))));
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg))) {
        if ((1U & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg))) {
            if ((0U == (1U & (IData)(vlSelf->SuperResolutionPart1__DOT__outRowCount_value)))) {
                if (vlSelf->SuperResolutionPart1__DOT__nextRowBuffer) {
                    vlSelf->SuperResolutionPart1__DOT__counterAddrOne 
                        = (0xfU & ((IData)(vlSelf->SuperResolutionPart1__DOT__outReachRowEnd)
                                    ? (7U & (((IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value) 
                                              - (IData)(1U)) 
                                             >> 1U))
                                    : (0xfU & (((IData)(1U) 
                                                + (IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value)) 
                                               >> 1U))));
                }
            }
        }
    }
}

extern const VlUnpacked<CData/*2:0*/, 64> VSuperResolutionPart1__ConstPool__TABLE_h19cbef59_0;
extern const VlUnpacked<CData/*2:0*/, 64> VSuperResolutionPart1__ConstPool__TABLE_h3eec33a3_0;
extern const VlUnpacked<CData/*0:0*/, 16> VSuperResolutionPart1__ConstPool__TABLE_h0a74a3ab_0;
extern const VlUnpacked<CData/*0:0*/, 16> VSuperResolutionPart1__ConstPool__TABLE_h305ae093_0;

VL_INLINE_OPT void VSuperResolutionPart1___024root___sequent__TOP__16(VSuperResolutionPart1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root___sequent__TOP__16\n"); );
    // Init
    CData/*0:0*/ SuperResolutionPart1__DOT___zz_resultStage_mainOnePixelStream_ready_1;
    CData/*3:0*/ __Vtableidx7;
    CData/*3:0*/ __Vtableidx8;
    CData/*5:0*/ __Vtableidx9;
    CData/*5:0*/ __Vtableidx10;
    // Body
    vlSelf->SuperResolutionPart1__DOT__counterAddrTwo 
        = (0xfU & ((IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value) 
                   >> 1U));
    if ((4U & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg))) {
        if ((1U & (~ ((IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg)))) {
                if (vlSelf->SuperResolutionPart1__DOT__outReachFinalRow) {
                    if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__nextRowBuffer)))) {
                        if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__outReachRowEnd)))) {
                            vlSelf->SuperResolutionPart1__DOT__counterAddrTwo 
                                = (0xfU & (((IData)(1U) 
                                            + (IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value)) 
                                           >> 1U));
                        }
                    }
                } else {
                    vlSelf->SuperResolutionPart1__DOT__counterAddrTwo 
                        = (0xfU & ((IData)(vlSelf->SuperResolutionPart1__DOT__nextRowBuffer)
                                    ? (7U & (((IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value) 
                                              - (IData)(1U)) 
                                             >> 1U))
                                    : ((IData)(vlSelf->SuperResolutionPart1__DOT__outReachRowEnd)
                                        ? (7U & (((IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value) 
                                                  - (IData)(1U)) 
                                                 >> 1U))
                                        : (0xfU & (
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value)) 
                                                   >> 1U)))));
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg))) {
        if ((1U & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg))) {
            if ((0U == (1U & (IData)(vlSelf->SuperResolutionPart1__DOT__outRowCount_value)))) {
                if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__nextRowBuffer)))) {
                    vlSelf->SuperResolutionPart1__DOT__counterAddrTwo 
                        = (0xfU & ((IData)(vlSelf->SuperResolutionPart1__DOT__outReachRowEnd)
                                    ? (7U & (((IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value) 
                                              - (IData)(1U)) 
                                             >> 1U))
                                    : (0xfU & (((IData)(1U) 
                                                + (IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value)) 
                                               >> 1U))));
                }
            }
        }
    }
    vlSelf->SuperResolutionPart1__DOT__controls_passMode = 0U;
    if ((1U & (~ ((IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg))) {
            if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg)))) {
                vlSelf->SuperResolutionPart1__DOT__controls_passMode 
                    = (1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__nextRowBuffer)));
            }
        }
    }
    __Vtableidx9 = (((IData)(vlSelf->SuperResolutionPart1__DOT__outReachFinalRow) 
                     << 5U) | (((IData)(vlSelf->SuperResolutionPart1__DOT__nextRowBuffer) 
                                << 4U) | (((0U == (1U 
                                                   & (IData)(vlSelf->SuperResolutionPart1__DOT__outRowCount_value))) 
                                           << 3U) | (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg))));
    vlSelf->SuperResolutionPart1__DOT__controls_onceMode 
        = VSuperResolutionPart1__ConstPool__TABLE_h19cbef59_0
        [__Vtableidx9];
    __Vtableidx10 = (((IData)(vlSelf->SuperResolutionPart1__DOT__outReachRowEnd) 
                      << 5U) | (((IData)(vlSelf->SuperResolutionPart1__DOT__nextRowBuffer) 
                                 << 4U) | (((IData)(vlSelf->SuperResolutionPart1__DOT__outReachFinalRow) 
                                            << 3U) 
                                           | (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg))));
    vlSelf->SuperResolutionPart1__DOT__controls_twiceMode 
        = VSuperResolutionPart1__ConstPool__TABLE_h3eec33a3_0
        [__Vtableidx10];
    vlSelf->SuperResolutionPart1__DOT__controls_passValid = 0U;
    if ((1U & (~ ((IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg))) {
            if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg)))) {
                vlSelf->SuperResolutionPart1__DOT__controls_passValid = 1U;
            }
            vlSelf->SuperResolutionPart1__DOT__controls_onceValid = 0U;
            if ((1U & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg))) {
                vlSelf->SuperResolutionPart1__DOT__controls_onceValid = 1U;
            }
        } else {
            vlSelf->SuperResolutionPart1__DOT__controls_onceValid = 0U;
        }
    } else {
        vlSelf->SuperResolutionPart1__DOT__controls_onceValid = 0U;
    }
    vlSelf->SuperResolutionPart1__DOT__controls_twiceCompValid = 0U;
    if ((4U & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg))) {
        if ((1U & (~ ((IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg)))) {
                vlSelf->SuperResolutionPart1__DOT__controls_twiceCompValid = 1U;
            }
        }
    }
    __Vtableidx7 = (((IData)(vlSelf->SuperResolutionPart1__DOT__frameStart) 
                     << 3U) | (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg));
    vlSelf->SuperResolutionPart1__DOT__controls_frameStart 
        = VSuperResolutionPart1__ConstPool__TABLE_h0a74a3ab_0
        [__Vtableidx7];
    __Vtableidx8 = (((IData)(vlSelf->SuperResolutionPart1__DOT__outReachRowEnd) 
                     << 3U) | (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg));
    vlSelf->SuperResolutionPart1__DOT__controls_rowEnd 
        = VSuperResolutionPart1__ConstPool__TABLE_h305ae093_0
        [__Vtableidx8];
    if (vlSelf->reset) {
        vlSelf->SuperResolutionPart1__DOT__bufferWAddr_value = 0U;
        vlSelf->SuperResolutionPart1__DOT__pixelsStream_rValid = 0U;
    } else {
        vlSelf->SuperResolutionPart1__DOT__bufferWAddr_value 
            = vlSelf->SuperResolutionPart1__DOT__bufferWAddr_valueNext;
        if (vlSelf->SuperResolutionPart1__DOT__resultsJoin_valid) {
            vlSelf->SuperResolutionPart1__DOT__pixelsStream_rValid = 1U;
        }
        if (vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_ready) {
            vlSelf->SuperResolutionPart1__DOT__pixelsStream_rValid = 0U;
        }
    }
    vlSelf->SuperResolutionPart1__DOT__resultsJoin_valid 
        = vlSelf->SuperResolutionPart1__DOT___zz_resultStage_mainOnePixelStream_ready;
    if (vlSelf->SuperResolutionPart1__DOT__when_Stream_l434) {
        vlSelf->SuperResolutionPart1__DOT__resultsJoin_valid = 0U;
    }
    SuperResolutionPart1__DOT___zz_resultStage_mainOnePixelStream_ready_1 
        = (1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rValid)));
    if (vlSelf->SuperResolutionPart1__DOT__when_Stream_l434) {
        SuperResolutionPart1__DOT___zz_resultStage_mainOnePixelStream_ready_1 = 1U;
    }
    vlSelf->SuperResolutionPart1__DOT___zz_resultStage_mainOnePixelStream_ready_2 
        = ((IData)(vlSelf->SuperResolutionPart1__DOT___zz_resultStage_mainOnePixelStream_ready) 
           & (IData)(SuperResolutionPart1__DOT___zz_resultStage_mainOnePixelStream_ready_1));
    vlSelf->SuperResolutionPart1__DOT__diffStage_mainOnePixelStream_ready 
        = vlSelf->SuperResolutionPart1__DOT___zz_resultStage_mainOnePixelStream_ready_2;
    if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_mainOnePixelStream_rValid)))) {
        vlSelf->SuperResolutionPart1__DOT__diffStage_mainOnePixelStream_ready = 1U;
    }
    vlSelf->SuperResolutionPart1__DOT__diffStage_counterOnePixelStream_ready 
        = vlSelf->SuperResolutionPart1__DOT___zz_resultStage_mainOnePixelStream_ready_2;
    if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_counterOnePixelStream_rValid)))) {
        vlSelf->SuperResolutionPart1__DOT__diffStage_counterOnePixelStream_ready = 1U;
    }
    vlSelf->SuperResolutionPart1__DOT__diffStage_mainTwoPixelStream_ready 
        = vlSelf->SuperResolutionPart1__DOT___zz_resultStage_mainOnePixelStream_ready_2;
    if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_mainTwoPixelStream_rValid)))) {
        vlSelf->SuperResolutionPart1__DOT__diffStage_mainTwoPixelStream_ready = 1U;
    }
    vlSelf->SuperResolutionPart1__DOT__diffStage_counterTwoPixelStream_ready 
        = vlSelf->SuperResolutionPart1__DOT___zz_resultStage_mainOnePixelStream_ready_2;
    if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_counterTwoPixelStream_rValid)))) {
        vlSelf->SuperResolutionPart1__DOT__diffStage_counterTwoPixelStream_ready = 1U;
    }
    vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_ready 
        = vlSelf->SuperResolutionPart1__DOT___zz_resultStage_mainOnePixelStream_ready_2;
    if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rValid)))) {
        vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_ready = 1U;
    }
    vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_ready 
        = vlSelf->SuperResolutionPart1__DOT___zz_resultStage_mainOnePixelStream_ready_2;
    if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_rValid)))) {
        vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_ready = 1U;
    }
    vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_ready 
        = vlSelf->SuperResolutionPart1__DOT__diffStage_mainOnePixelStream_ready;
    if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_rValid)))) {
        vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_ready = 1U;
    }
    vlSelf->SuperResolutionPart1__DOT__compareStage_counterOnePixelStream_ready 
        = vlSelf->SuperResolutionPart1__DOT__diffStage_counterOnePixelStream_ready;
    if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_counterOnePixelStream_rValid)))) {
        vlSelf->SuperResolutionPart1__DOT__compareStage_counterOnePixelStream_ready = 1U;
    }
    vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_ready 
        = vlSelf->SuperResolutionPart1__DOT__diffStage_mainTwoPixelStream_ready;
    if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_rValid)))) {
        vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_ready = 1U;
    }
    vlSelf->SuperResolutionPart1__DOT__compareStage_counterTwoPixelStream_ready 
        = vlSelf->SuperResolutionPart1__DOT__diffStage_counterTwoPixelStream_ready;
    if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_counterTwoPixelStream_rValid)))) {
        vlSelf->SuperResolutionPart1__DOT__compareStage_counterTwoPixelStream_ready = 1U;
    }
    vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_input_ready 
        = ((IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_ready) 
           & (IData)(vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_ready));
    vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_ready 
        = vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_ready;
    if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_rValid)))) {
        vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_ready = 1U;
    }
    vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_ready 
        = vlSelf->SuperResolutionPart1__DOT__compareStage_counterOnePixelStream_ready;
    if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_rValid)))) {
        vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_ready = 1U;
    }
    vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_ready 
        = vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_ready;
    if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_rValid)))) {
        vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_ready = 1U;
    }
    vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_ready 
        = vlSelf->SuperResolutionPart1__DOT__compareStage_counterTwoPixelStream_ready;
    if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_rValid)))) {
        vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_ready = 1U;
    }
    vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_ready 
        = vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_input_ready;
    if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rValid)))) {
        vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_ready = 1U;
    }
    vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_isFree 
        = (1U & ((~ (IData)(vlSelf->SuperResolutionPart1__DOT___zz_readStage_mainOnePixelStream_valid)) 
                 | (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_ready)));
    vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_isFree 
        = (1U & ((~ (IData)(vlSelf->SuperResolutionPart1__DOT___zz_readStage_counterOnePixelStream_valid)) 
                 | (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_ready)));
    vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_isFree 
        = (1U & ((~ (IData)(vlSelf->SuperResolutionPart1__DOT___zz_readStage_mainTwoPixelStream_valid)) 
                 | (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_ready)));
    vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_isFree 
        = (1U & ((~ (IData)(vlSelf->SuperResolutionPart1__DOT___zz_readStage_counterTwoPixelStream_valid)) 
                 | (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_ready)));
    vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_ready 
        = vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_ready;
    if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rValid)))) {
        vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_ready = 1U;
    }
    vlSelf->SuperResolutionPart1__DOT__controlStream_ready 
        = vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_ready;
    if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_rValid)))) {
        vlSelf->SuperResolutionPart1__DOT__controlStream_ready = 1U;
    }
    vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l707 
        = ((IData)(vlSelf->SuperResolutionPart1__DOT__frameStart) 
           & ((IData)(vlSelf->SuperResolutionPart1__DOT__startRead) 
              & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_ready)));
    vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l617 
        = (((IData)(vlSelf->SuperResolutionPart1__DOT__outRowCount_value) 
            & (IData)(vlSelf->SuperResolutionPart1__DOT__controls_rowEnd)) 
           & ((IData)(vlSelf->SuperResolutionPart1__DOT__startRead) 
              & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_ready)));
    vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l924 
        = (((IData)(vlSelf->SuperResolutionPart1__DOT__startRead) 
            & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_ready)) 
           & ((IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value) 
              == (0x1fU & (((IData)(vlSelf->SuperResolutionPart1__DOT__bmpWidth) 
                            << 1U) - (IData)(2U)))));
}

extern const VlUnpacked<CData/*0:0*/, 128> VSuperResolutionPart1__ConstPool__TABLE_h5407c88e_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSuperResolutionPart1__ConstPool__TABLE_hed4474b9_0;

VL_INLINE_OPT void VSuperResolutionPart1___024root___sequent__TOP__17(VSuperResolutionPart1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root___sequent__TOP__17\n"); );
    // Init
    CData/*6:0*/ __Vtableidx3;
    CData/*6:0*/ __Vtableidx4;
    CData/*6:0*/ __Vtableidx5;
    CData/*6:0*/ __Vtableidx6;
    // Body
    vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l925 
        = (((IData)(vlSelf->SuperResolutionPart1__DOT__outReachRowEnd) 
            & ((IData)(vlSelf->SuperResolutionPart1__DOT__outRowCount_value) 
               == (0x1fU & (((IData)(vlSelf->SuperResolutionPart1__DOT__bmpHeight) 
                             << 1U) - (IData)(2U))))) 
           & ((IData)(vlSelf->SuperResolutionPart1__DOT__startRead) 
              & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_ready)));
    vlSelf->SuperResolutionPart1__DOT__controlStream_fire_6 
        = ((IData)(vlSelf->SuperResolutionPart1__DOT__startRead) 
           & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_ready));
    vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l927 
        = (((IData)(vlSelf->SuperResolutionPart1__DOT__startRead) 
            & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_ready)) 
           & (IData)(vlSelf->SuperResolutionPart1__DOT__outReachRowEnd));
    __Vtableidx3 = (((IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_fire_6) 
                     << 6U) | (((IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_fire_6) 
                                << 5U) | (((IData)(vlSelf->SuperResolutionPart1__DOT__outReachRowEnd) 
                                           << 4U) | 
                                          (((IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_fire_6) 
                                            << 3U) 
                                           | (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg)))));
    vlSelf->SuperResolutionPart1__DOT__outPixelAddr_willIncrement 
        = VSuperResolutionPart1__ConstPool__TABLE_h5407c88e_0
        [__Vtableidx3];
    __Vtableidx4 = (((IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_fire_6) 
                     << 6U) | (((IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_fire_6) 
                                << 5U) | (((IData)(vlSelf->SuperResolutionPart1__DOT__outReachRowEnd) 
                                           << 4U) | 
                                          (((IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_fire_6) 
                                            << 3U) 
                                           | (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg)))));
    vlSelf->SuperResolutionPart1__DOT__outPixelAddr_willClear 
        = VSuperResolutionPart1__ConstPool__TABLE_hed4474b9_0
        [__Vtableidx4];
    __Vtableidx5 = (((IData)(vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l927) 
                     << 6U) | (((IData)(vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l927) 
                                << 5U) | (((IData)(vlSelf->SuperResolutionPart1__DOT__outReachFinalRow) 
                                           << 4U) | 
                                          (((IData)(vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l927) 
                                            << 3U) 
                                           | (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg)))));
    vlSelf->SuperResolutionPart1__DOT__outRowCount_willIncrement 
        = VSuperResolutionPart1__ConstPool__TABLE_h5407c88e_0
        [__Vtableidx5];
    __Vtableidx6 = (((IData)(vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l927) 
                     << 6U) | (((IData)(vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l927) 
                                << 5U) | (((IData)(vlSelf->SuperResolutionPart1__DOT__outReachFinalRow) 
                                           << 4U) | 
                                          (((IData)(vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l927) 
                                            << 3U) 
                                           | (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg)))));
    vlSelf->SuperResolutionPart1__DOT__outRowCount_willClear 
        = VSuperResolutionPart1__ConstPool__TABLE_hed4474b9_0
        [__Vtableidx6];
    vlSelf->SuperResolutionPart1__DOT__outPixelAddr_valueNext 
        = (((9U == (IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value)) 
            & (IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_willIncrement))
            ? 0U : (0xfU & ((IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value) 
                            + (IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_willIncrement))));
    if (vlSelf->SuperResolutionPart1__DOT__outPixelAddr_willClear) {
        vlSelf->SuperResolutionPart1__DOT__outPixelAddr_valueNext = 0U;
    }
    vlSelf->SuperResolutionPart1__DOT__outRowCount_valueNext 
        = (((0xaU == (IData)(vlSelf->SuperResolutionPart1__DOT__outRowCount_value)) 
            & (IData)(vlSelf->SuperResolutionPart1__DOT__outRowCount_willIncrement))
            ? 0U : (0xfU & ((IData)(vlSelf->SuperResolutionPart1__DOT__outRowCount_value) 
                            + (IData)(vlSelf->SuperResolutionPart1__DOT__outRowCount_willIncrement))));
    if (vlSelf->SuperResolutionPart1__DOT__outRowCount_willClear) {
        vlSelf->SuperResolutionPart1__DOT__outRowCount_valueNext = 0U;
    }
}

VL_INLINE_OPT void VSuperResolutionPart1___024root___combo__TOP__18(VSuperResolutionPart1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root___combo__TOP__18\n"); );
    // Init
    CData/*2:0*/ __Vtableidx2;
    // Body
    vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_ready 
        = vlSelf->pixelsOut_ready;
    if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rValid)))) {
        vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_ready = 1U;
    }
    vlSelf->SuperResolutionPart1__DOT__bufferWAddr_valueNext 
        = (((4U == (IData)(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_value)) 
            & (IData)(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_willIncrement))
            ? 0U : (7U & ((IData)(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_value) 
                          + (IData)(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_willIncrement))));
    if (vlSelf->SuperResolutionPart1__DOT__bufferWAddr_willClear) {
        vlSelf->SuperResolutionPart1__DOT__bufferWAddr_valueNext = 0U;
    }
    vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateNext 
        = vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg;
    if ((4U & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg))) {
        if ((1U & (~ ((IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg)))) {
                if (((IData)(vlSelf->SuperResolutionPart1__DOT__startRead) 
                     & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_ready))) {
                    vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateNext 
                        = ((IData)(vlSelf->SuperResolutionPart1__DOT__outReachRowEnd)
                            ? ((IData)(vlSelf->SuperResolutionPart1__DOT__bufferReuse)
                                ? 2U : ((0U == (IData)(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_value))
                                         ? 1U : 2U))
                            : 3U);
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg))) {
        if ((1U & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg))) {
            if ((0U == (1U & (IData)(vlSelf->SuperResolutionPart1__DOT__outRowCount_value)))) {
                if (((IData)(vlSelf->SuperResolutionPart1__DOT__startRead) 
                     & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_ready))) {
                    vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateNext 
                        = ((IData)(vlSelf->SuperResolutionPart1__DOT__outReachRowEnd)
                            ? ((IData)(vlSelf->SuperResolutionPart1__DOT__bufferReuse)
                                ? 3U : (((0U == (IData)(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_value)) 
                                         & ((0xfU & 
                                             ((IData)(2U) 
                                              + (IData)(vlSelf->SuperResolutionPart1__DOT__outRowCount_value))) 
                                            == (0x1fU 
                                                & ((IData)(vlSelf->SuperResolutionPart1__DOT__bufferRowCount_value) 
                                                   << 1U))))
                                         ? 1U : 3U))
                            : 2U);
                }
            } else if (((IData)(vlSelf->SuperResolutionPart1__DOT__startRead) 
                        & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_ready))) {
                vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateNext 
                    = ((IData)(vlSelf->SuperResolutionPart1__DOT__bufferReuse)
                        ? 4U : ((((IData)(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_value) 
                                  == (0xfU & (((IData)(2U) 
                                               + (IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value)) 
                                              >> 1U))) 
                                 & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__passPixels_valid)))
                                 ? 1U : 4U));
            }
        } else if (((IData)(vlSelf->SuperResolutionPart1__DOT__startRead) 
                    & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_ready))) {
            vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateNext 
                = ((((IData)(vlSelf->SuperResolutionPart1__DOT__outRowCount_value) 
                     < (0x1fU & ((IData)(vlSelf->SuperResolutionPart1__DOT__bufferRowCount_value) 
                                 << 1U))) | (IData)(vlSelf->SuperResolutionPart1__DOT__bufferReuse))
                    ? 3U : ((((IData)(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_value) 
                              == (0xfU & (((IData)(2U) 
                                           + (IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value)) 
                                          >> 1U))) 
                             & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__passPixels_valid)))
                             ? 1U : 3U));
        }
    } else if ((1U & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg))) {
        if ((0U == (1U & (IData)(vlSelf->SuperResolutionPart1__DOT__outRowCount_value)))) {
            if (vlSelf->SuperResolutionPart1__DOT__passPixels_valid) {
                vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateNext 
                    = ((0U == (1U & (IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value)))
                        ? 2U : 3U);
            }
        } else if (vlSelf->SuperResolutionPart1__DOT__passPixels_valid) {
            vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateNext 
                = ((0U == (1U & (IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value)))
                    ? 3U : 4U);
        }
    }
    if (vlSelf->SuperResolutionPart1__DOT__controlStateMachine_wantStart) {
        vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateNext = 1U;
    }
    __Vtableidx2 = vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateNext;
    vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateNext_string 
        = VSuperResolutionPart1__ConstPool__TABLE_hd2262956_0
        [__Vtableidx2];
}

void VSuperResolutionPart1___024root___eval(VSuperResolutionPart1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        vlSelf->__Vm_traceActivity[1U] = 1U;
        VSuperResolutionPart1___024root___sequent__TOP__2(vlSelf);
        VSuperResolutionPart1___024root___sequent__TOP__3(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VSuperResolutionPart1___024root___sequent__TOP__6(vlSelf);
        VSuperResolutionPart1___024root___sequent__TOP__7(vlSelf);
        VSuperResolutionPart1___024root___sequent__TOP__8(vlSelf);
    }
    VSuperResolutionPart1___024root___combo__TOP__14(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        VSuperResolutionPart1___024root___sequent__TOP__15(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        VSuperResolutionPart1___024root___sequent__TOP__16(vlSelf);
        VSuperResolutionPart1___024root___sequent__TOP__17(vlSelf);
    }
    VSuperResolutionPart1___024root___combo__TOP__18(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}

#ifdef VL_DEBUG
void VSuperResolutionPart1___024root___eval_debug_assertions(VSuperResolutionPart1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->pixelsIn_valid & 0xfeU))) {
        Verilated::overWidthError("pixelsIn_valid");}
    if (VL_UNLIKELY((vlSelf->pixelsIn_payload_frameStart 
                     & 0xfeU))) {
        Verilated::overWidthError("pixelsIn_payload_frameStart");}
    if (VL_UNLIKELY((vlSelf->pixelsIn_payload_rowEnd 
                     & 0xfeU))) {
        Verilated::overWidthError("pixelsIn_payload_rowEnd");}
    if (VL_UNLIKELY((vlSelf->StartIn & 0xfeU))) {
        Verilated::overWidthError("StartIn");}
    if (VL_UNLIKELY((vlSelf->inpTwoDoneIn & 0xfeU))) {
        Verilated::overWidthError("inpTwoDoneIn");}
    if (VL_UNLIKELY((vlSelf->inpThreeDoneIn & 0xfeU))) {
        Verilated::overWidthError("inpThreeDoneIn");}
    if (VL_UNLIKELY((vlSelf->pixelsOut_ready & 0xfeU))) {
        Verilated::overWidthError("pixelsOut_ready");}
    if (VL_UNLIKELY((vlSelf->widthIn & 0xf8U))) {
        Verilated::overWidthError("widthIn");}
    if (VL_UNLIKELY((vlSelf->heightIn & 0xf8U))) {
        Verilated::overWidthError("heightIn");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
