// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSuperResolutionPart1.h for the primary calling header

#include "verilated.h"

#include "VSuperResolutionPart1___024root.h"

VL_ATTR_COLD void VSuperResolutionPart1___024root___settle__TOP__9(VSuperResolutionPart1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root___settle__TOP__9\n"); );
    // Body
    vlSelf->pixelsOut_valid = 0U;
    vlSelf->pixelsOut_valid = vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rValid;
    vlSelf->pixelsOut_payload_pixel = 0U;
    vlSelf->pixelsOut_payload_pixel = vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_pixel;
    vlSelf->pixelsOut_payload_frameStart = 0U;
    vlSelf->pixelsOut_payload_frameStart = vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_frameStart;
    vlSelf->pixelsOut_payload_rowEnd = 0U;
    vlSelf->pixelsOut_payload_rowEnd = vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_rowEnd;
    vlSelf->pixelsOut_payload_inpValid = 0U;
    vlSelf->pixelsOut_payload_inpValid = vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_inpValid;
    vlSelf->startOut = 0U;
    vlSelf->startOut = vlSelf->SuperResolutionPart1__DOT__slaveStart;
    vlSelf->SuperResolutionPart1__DOT___zz_resultStage_mainOnePixelStream_ready 
        = ((((((IData)(vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_rValid) 
               & (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_mainOnePixelStream_rValid)) 
              & (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_counterOnePixelStream_rValid)) 
             & (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_mainTwoPixelStream_rValid)) 
            & (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_counterTwoPixelStream_rValid)) 
           & (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rValid));
    vlSelf->SuperResolutionPart1__DOT__when_Stream_l434 
        = (1U & (((~ (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_passValid)) 
                  & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_onceValid))) 
                 & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_twiceCompValid))));
    vlSelf->SuperResolutionPart1__DOT__passPixels_valid 
        = ((IData)(vlSelf->pixelsIn_valid) & (IData)(vlSelf->SuperResolutionPart1__DOT__bufferEnable));
    vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_ready 
        = vlSelf->pixelsOut_ready;
    if ((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rValid)))) {
        vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_ready = 1U;
    }
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
}

extern const VlUnpacked<QData/*39:0*/, 8> VSuperResolutionPart1__ConstPool__TABLE_hd2262956_0;

VL_ATTR_COLD void VSuperResolutionPart1___024root___settle__TOP__10(VSuperResolutionPart1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root___settle__TOP__10\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    // Body
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
    vlSelf->pixelsIn_ready = 0U;
    vlSelf->pixelsIn_ready = vlSelf->SuperResolutionPart1__DOT__bufferEnable;
    vlSelf->inpDoneOut = 0U;
    vlSelf->inpDoneOut = vlSelf->SuperResolutionPart1__DOT__inpDone;
    vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l81 
        = ((IData)(vlSelf->StartIn) & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__internalDone)));
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
    __Vtableidx1 = vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg;
    vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg_string 
        = VSuperResolutionPart1__ConstPool__TABLE_hd2262956_0
        [__Vtableidx1];
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
    vlSelf->SuperResolutionPart1__DOT__counterAddrTwo 
        = (0xfU & ((IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value) 
                   >> 1U));
}

extern const VlUnpacked<CData/*0:0*/, 16> VSuperResolutionPart1__ConstPool__TABLE_h0a74a3ab_0;
extern const VlUnpacked<CData/*2:0*/, 64> VSuperResolutionPart1__ConstPool__TABLE_h19cbef59_0;
extern const VlUnpacked<CData/*2:0*/, 64> VSuperResolutionPart1__ConstPool__TABLE_h3eec33a3_0;
extern const VlUnpacked<CData/*0:0*/, 16> VSuperResolutionPart1__ConstPool__TABLE_h305ae093_0;
extern const VlUnpacked<CData/*0:0*/, 8> VSuperResolutionPart1__ConstPool__TABLE_h62399bb1_0;

VL_ATTR_COLD void VSuperResolutionPart1___024root___settle__TOP__11(VSuperResolutionPart1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root___settle__TOP__11\n"); );
    // Init
    CData/*0:0*/ SuperResolutionPart1__DOT___zz_resultStage_mainOnePixelStream_ready_1;
    CData/*3:0*/ __Vtableidx7;
    CData/*3:0*/ __Vtableidx8;
    CData/*5:0*/ __Vtableidx9;
    CData/*5:0*/ __Vtableidx10;
    CData/*2:0*/ __Vtableidx11;
    // Body
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
    __Vtableidx7 = (((IData)(vlSelf->SuperResolutionPart1__DOT__frameStart) 
                     << 3U) | (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg));
    vlSelf->SuperResolutionPart1__DOT__controls_frameStart 
        = VSuperResolutionPart1__ConstPool__TABLE_h0a74a3ab_0
        [__Vtableidx7];
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
    __Vtableidx8 = (((IData)(vlSelf->SuperResolutionPart1__DOT__outReachRowEnd) 
                     << 3U) | (IData)(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg));
    vlSelf->SuperResolutionPart1__DOT__controls_rowEnd 
        = VSuperResolutionPart1__ConstPool__TABLE_h305ae093_0
        [__Vtableidx8];
    __Vtableidx11 = vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg;
    vlSelf->SuperResolutionPart1__DOT__controlStateMachine_wantStart 
        = VSuperResolutionPart1__ConstPool__TABLE_h62399bb1_0
        [__Vtableidx11];
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
    vlSelf->SuperResolutionPart1__DOT___zz_resultStage_mainOnePixelStream_ready_2 
        = ((IData)(vlSelf->SuperResolutionPart1__DOT___zz_resultStage_mainOnePixelStream_ready) 
           & (IData)(SuperResolutionPart1__DOT___zz_resultStage_mainOnePixelStream_ready_1));
    vlSelf->SuperResolutionPart1__DOT__bufferWAddr_valueNext 
        = (((4U == (IData)(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_value)) 
            & (IData)(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_willIncrement))
            ? 0U : (7U & ((IData)(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_value) 
                          + (IData)(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_willIncrement))));
    if (vlSelf->SuperResolutionPart1__DOT__bufferWAddr_willClear) {
        vlSelf->SuperResolutionPart1__DOT__bufferWAddr_valueNext = 0U;
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
    vlSelf->SuperResolutionPart1__DOT__bufferRowCount_valueNext 
        = (((5U == (IData)(vlSelf->SuperResolutionPart1__DOT__bufferRowCount_value)) 
            & (IData)(vlSelf->SuperResolutionPart1__DOT__bufferRowCount_willIncrement))
            ? 0U : (7U & ((IData)(vlSelf->SuperResolutionPart1__DOT__bufferRowCount_value) 
                          + (IData)(vlSelf->SuperResolutionPart1__DOT__bufferRowCount_willIncrement))));
    if (vlSelf->SuperResolutionPart1__DOT__bufferRowCount_willClear) {
        vlSelf->SuperResolutionPart1__DOT__bufferRowCount_valueNext = 0U;
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
    vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l925 
        = (((IData)(vlSelf->SuperResolutionPart1__DOT__outReachRowEnd) 
            & ((IData)(vlSelf->SuperResolutionPart1__DOT__outRowCount_value) 
               == (0x1fU & (((IData)(vlSelf->SuperResolutionPart1__DOT__bmpHeight) 
                             << 1U) - (IData)(2U))))) 
           & ((IData)(vlSelf->SuperResolutionPart1__DOT__startRead) 
              & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_ready)));
    vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateNext 
        = vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg;
}

extern const VlUnpacked<CData/*0:0*/, 128> VSuperResolutionPart1__ConstPool__TABLE_h5407c88e_0;
extern const VlUnpacked<CData/*0:0*/, 128> VSuperResolutionPart1__ConstPool__TABLE_hed4474b9_0;

VL_ATTR_COLD void VSuperResolutionPart1___024root___settle__TOP__12(VSuperResolutionPart1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root___settle__TOP__12\n"); );
    // Init
    CData/*2:0*/ __Vtableidx2;
    CData/*6:0*/ __Vtableidx3;
    CData/*6:0*/ __Vtableidx4;
    CData/*6:0*/ __Vtableidx5;
    CData/*6:0*/ __Vtableidx6;
    // Body
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
    vlSelf->SuperResolutionPart1__DOT__controlStream_fire_6 
        = ((IData)(vlSelf->SuperResolutionPart1__DOT__startRead) 
           & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_ready));
    vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l927 
        = (((IData)(vlSelf->SuperResolutionPart1__DOT__startRead) 
            & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_ready)) 
           & (IData)(vlSelf->SuperResolutionPart1__DOT__outReachRowEnd));
    __Vtableidx2 = vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateNext;
    vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateNext_string 
        = VSuperResolutionPart1__ConstPool__TABLE_hd2262956_0
        [__Vtableidx2];
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

extern const VlWide<23>/*735:0*/ VSuperResolutionPart1__ConstPool__CONST_h40cd1775_0;
extern const VlWide<23>/*735:0*/ VSuperResolutionPart1__ConstPool__CONST_h50790b1b_0;

VL_ATTR_COLD void VSuperResolutionPart1___024root___initial__TOP__13(VSuperResolutionPart1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root___initial__TOP__13\n"); );
    // Body
    vlSelf->SuperResolutionPart1__DOT____Vxrand_h96fd8d4e__3 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->SuperResolutionPart1__DOT____Vxrand_h96fd8d4e__2 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->SuperResolutionPart1__DOT____Vxrand_h96fd8d4e__1 
        = (0xffU & VL_RAND_RESET_I(8));
    vlSelf->SuperResolutionPart1__DOT____Vxrand_h96fd8d4e__0 
        = (0xffU & VL_RAND_RESET_I(8));
    VL_READMEM_N(false, 8, 5, 0, VL_CVT_PACK_STR_NW(23, VSuperResolutionPart1__ConstPool__CONST_h40cd1775_0)
                 ,  &(vlSelf->SuperResolutionPart1__DOT__lineBufferOne)
                 , 0, ~0ULL);
    VL_READMEM_N(false, 8, 5, 0, VL_CVT_PACK_STR_NW(23, VSuperResolutionPart1__ConstPool__CONST_h50790b1b_0)
                 ,  &(vlSelf->SuperResolutionPart1__DOT__lineBufferTwo)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VSuperResolutionPart1___024root___eval_initial(VSuperResolutionPart1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = (1U & (~ (IData)(vlSelf->clk)));
    vlSelf->__Vclklast__TOP__reset = (1U & (~ (IData)(vlSelf->reset)));
    VSuperResolutionPart1___024root___initial__TOP__13(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VSuperResolutionPart1___024root___eval_settle(VSuperResolutionPart1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root___eval_settle\n"); );
    // Body
    VSuperResolutionPart1___024root___settle__TOP__9(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    VSuperResolutionPart1___024root___settle__TOP__10(vlSelf);
    VSuperResolutionPart1___024root___settle__TOP__11(vlSelf);
    VSuperResolutionPart1___024root___settle__TOP__12(vlSelf);
}

VL_ATTR_COLD void VSuperResolutionPart1___024root___final(VSuperResolutionPart1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root___final\n"); );
}

VL_ATTR_COLD void VSuperResolutionPart1___024root___ctor_var_reset(VSuperResolutionPart1___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->pixelsIn_valid = VL_RAND_RESET_I(1);
    vlSelf->pixelsIn_ready = VL_RAND_RESET_I(1);
    vlSelf->pixelsIn_payload_pixel = VL_RAND_RESET_I(8);
    vlSelf->pixelsIn_payload_frameStart = VL_RAND_RESET_I(1);
    vlSelf->pixelsIn_payload_rowEnd = VL_RAND_RESET_I(1);
    vlSelf->StartIn = VL_RAND_RESET_I(1);
    vlSelf->inpTwoDoneIn = VL_RAND_RESET_I(1);
    vlSelf->inpThreeDoneIn = VL_RAND_RESET_I(1);
    vlSelf->pixelsOut_valid = VL_RAND_RESET_I(1);
    vlSelf->pixelsOut_ready = VL_RAND_RESET_I(1);
    vlSelf->pixelsOut_payload_pixel = VL_RAND_RESET_I(8);
    vlSelf->pixelsOut_payload_frameStart = VL_RAND_RESET_I(1);
    vlSelf->pixelsOut_payload_rowEnd = VL_RAND_RESET_I(1);
    vlSelf->pixelsOut_payload_inpValid = VL_RAND_RESET_I(1);
    vlSelf->startOut = VL_RAND_RESET_I(1);
    vlSelf->inpDoneOut = VL_RAND_RESET_I(1);
    vlSelf->thresholdIn = VL_RAND_RESET_I(8);
    vlSelf->widthIn = VL_RAND_RESET_I(3);
    vlSelf->heightIn = VL_RAND_RESET_I(3);
    vlSelf->clk = 0;
    vlSelf->reset = 0;
    vlSelf->SuperResolutionPart1__DOT____Vxrand_h96fd8d4e__3 = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT____Vxrand_h96fd8d4e__2 = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT____Vxrand_h96fd8d4e__1 = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT____Vxrand_h96fd8d4e__0 = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_ready = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT___zz_lineBufferOne_port0 = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT___zz_lineBufferOne_port1 = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT___zz_lineBufferTwo_port0 = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT___zz_lineBufferTwo_port1 = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_input_ready = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__inpDone = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__internalDone = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__startRead = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l81 = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__slaveStart = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__frameStart = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__inpThreshold = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT__bmpWidth = VL_RAND_RESET_I(3);
    vlSelf->SuperResolutionPart1__DOT__bmpHeight = VL_RAND_RESET_I(3);
    vlSelf->SuperResolutionPart1__DOT__holdBuffer = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__bufferRowCount_willIncrement = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__bufferRowCount_willClear = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__bufferRowCount_valueNext = VL_RAND_RESET_I(3);
    vlSelf->SuperResolutionPart1__DOT__bufferRowCount_value = VL_RAND_RESET_I(3);
    vlSelf->SuperResolutionPart1__DOT__bufferEnable = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__bufferSwitch = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__nextRowBuffer = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__bufferReuse = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__bufferWAddr_willIncrement = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__bufferWAddr_willClear = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__bufferWAddr_valueNext = VL_RAND_RESET_I(3);
    vlSelf->SuperResolutionPart1__DOT__bufferWAddr_value = VL_RAND_RESET_I(3);
    vlSelf->SuperResolutionPart1__DOT__outPixelAddr_willIncrement = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__outPixelAddr_willClear = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__outPixelAddr_valueNext = VL_RAND_RESET_I(4);
    vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value = VL_RAND_RESET_I(4);
    vlSelf->SuperResolutionPart1__DOT__outRowCount_willIncrement = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__outRowCount_willClear = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__outRowCount_valueNext = VL_RAND_RESET_I(4);
    vlSelf->SuperResolutionPart1__DOT__outRowCount_value = VL_RAND_RESET_I(4);
    vlSelf->SuperResolutionPart1__DOT__outReachRowEnd = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__outReachFinalRow = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__bufferReachRowEnd = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__bufferReachFinalRow = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__mainAddrOne = VL_RAND_RESET_I(4);
    vlSelf->SuperResolutionPart1__DOT__counterAddrOne = VL_RAND_RESET_I(4);
    vlSelf->SuperResolutionPart1__DOT__mainAddrTwo = VL_RAND_RESET_I(4);
    vlSelf->SuperResolutionPart1__DOT__counterAddrTwo = VL_RAND_RESET_I(4);
    vlSelf->SuperResolutionPart1__DOT__controlStream_ready = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__controls_frameStart = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__controls_rowEnd = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__controls_passMode = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__controls_passValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__controls_onceMode = VL_RAND_RESET_I(3);
    vlSelf->SuperResolutionPart1__DOT__controls_onceValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__controls_twiceCompValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__controls_twiceMode = VL_RAND_RESET_I(3);
    vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_ready = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT___zz_readStage_mainOnePixelStream_valid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_isFree = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_ready = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT___zz_readStage_counterOnePixelStream_valid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_isFree = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_ready = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT___zz_readStage_mainTwoPixelStream_valid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_isFree = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_ready = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT___zz_readStage_counterTwoPixelStream_valid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_isFree = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__controlStream_rValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__controlStream_rData_frameStart = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__controlStream_rData_rowEnd = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__controlStream_rData_passMode = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__controlStream_rData_passValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__controlStream_rData_onceMode = VL_RAND_RESET_I(3);
    vlSelf->SuperResolutionPart1__DOT__controlStream_rData_onceValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__controlStream_rData_mainCompare = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__controlStream_rData_mainDiff = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT__controlStream_rData_twiceCompValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__controlStream_rData_twiceMode = VL_RAND_RESET_I(3);
    vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_ready = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_rValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_rData = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT__compareStage_counterOnePixelStream_ready = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_rValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_rData = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_ready = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_rValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_rData = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT__compareStage_counterTwoPixelStream_ready = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_rValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_rData = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT___zz_readStage_controlPipe_translated_payload_mainCompare = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT___zz_readStage_controlPipe_translated_payload_counterCompare = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_ready = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_frameStart = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_rowEnd = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_passMode = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_passValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_onceMode = VL_RAND_RESET_I(3);
    vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_onceValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_mainCompare = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_counterCompare = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_mainDiff = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_twiceCompValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_twiceMode = VL_RAND_RESET_I(3);
    vlSelf->SuperResolutionPart1__DOT__diffStage_mainOnePixelStream_ready = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_rValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_rData = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT__diffStage_counterOnePixelStream_ready = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__compareStage_counterOnePixelStream_rValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__compareStage_counterOnePixelStream_rData = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT__diffStage_mainTwoPixelStream_ready = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_rValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_rData = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT__diffStage_counterTwoPixelStream_ready = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__compareStage_counterTwoPixelStream_rValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__compareStage_counterTwoPixelStream_rData = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT___zz_compareStage_controlPipe_translated_payload_mainDiff = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT___zz_compareStage_controlPipe_translated_payload_counterDiff = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_ready = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_frameStart = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_rowEnd = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_passMode = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_passValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_onceMode = VL_RAND_RESET_I(3);
    vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_onceValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_mainCompare = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_counterCompare = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_mainDiff = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_counterDiff = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_twiceCompValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_twiceMode = VL_RAND_RESET_I(3);
    vlSelf->SuperResolutionPart1__DOT__diffStage_mainOnePixelStream_rValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__diffStage_mainOnePixelStream_rData = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT__diffStage_counterOnePixelStream_rValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__diffStage_counterOnePixelStream_rData = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT__diffStage_mainTwoPixelStream_rValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__diffStage_mainTwoPixelStream_rData = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT__diffStage_counterTwoPixelStream_rValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__diffStage_counterTwoPixelStream_rData = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_frameStart = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_rowEnd = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_passMode = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_passValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_onceMode = VL_RAND_RESET_I(3);
    vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_onceValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_mainCompare = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_counterCompare = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_mainDiff = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_counterDiff = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_twiceCompValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_twiceMode = VL_RAND_RESET_I(3);
    vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_ready = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_payload = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_rValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_rData = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT___zz_resultStage_mainOnePixelStream_ready = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT___zz_resultStage_mainOnePixelStream_ready_2 = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__when_Stream_l434 = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__resultsJoin_valid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_ready = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__pixelsStream_rValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__pixelsStream_rData_pixel = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT__pixelsStream_rData_frameStart = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__pixelsStream_rData_rowEnd = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__pixelsStream_rData_inpValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_pixel = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_frameStart = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_rowEnd = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_inpValid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__passPixels_valid = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l601 = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l613 = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l617 = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__controlStateMachine_wantStart = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg = VL_RAND_RESET_I(3);
    vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateNext = VL_RAND_RESET_I(3);
    vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l707 = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__controlStream_fire_6 = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l924 = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l925 = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l927 = VL_RAND_RESET_I(1);
    vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg_string = VL_RAND_RESET_Q(40);
    vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateNext_string = VL_RAND_RESET_Q(40);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->SuperResolutionPart1__DOT__lineBufferOne[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->SuperResolutionPart1__DOT__lineBufferTwo[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->SuperResolutionPart1__DOT____Vlvbound_h267b71c9__0 = VL_RAND_RESET_I(8);
    vlSelf->SuperResolutionPart1__DOT____Vlvbound_h3e6a67dd__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__SuperResolutionPart1__DOT__lineBufferOne__v0 = 0;
    vlSelf->__Vdlyvval__SuperResolutionPart1__DOT__lineBufferOne__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__SuperResolutionPart1__DOT__lineBufferOne__v0 = 0;
    vlSelf->__Vdlyvdim0__SuperResolutionPart1__DOT__lineBufferTwo__v0 = 0;
    vlSelf->__Vdlyvval__SuperResolutionPart1__DOT__lineBufferTwo__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__SuperResolutionPart1__DOT__lineBufferTwo__v0 = 0;
    vlSelf->__Vdly__SuperResolutionPart1__DOT__bufferSwitch = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__SuperResolutionPart1__DOT__inpDone = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__SuperResolutionPart1__DOT__outReachRowEnd = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__SuperResolutionPart1__DOT__outReachFinalRow = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
