// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSuperResolutionPart1.h for the primary calling header

#ifndef VERILATED_VSUPERRESOLUTIONPART1___024ROOT_H_
#define VERILATED_VSUPERRESOLUTIONPART1___024ROOT_H_  // guard

#include "verilated.h"

class VSuperResolutionPart1__Syms;
VL_MODULE(VSuperResolutionPart1___024root) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(pixelsIn_valid,0,0);
        VL_OUT8(pixelsIn_ready,0,0);
        VL_IN8(pixelsIn_payload_pixel,7,0);
        VL_IN8(pixelsIn_payload_frameStart,0,0);
        VL_IN8(pixelsIn_payload_rowEnd,0,0);
        VL_IN8(StartIn,0,0);
        VL_IN8(inpTwoDoneIn,0,0);
        VL_IN8(inpThreeDoneIn,0,0);
        VL_OUT8(pixelsOut_valid,0,0);
        VL_IN8(pixelsOut_ready,0,0);
        VL_OUT8(pixelsOut_payload_pixel,7,0);
        VL_OUT8(pixelsOut_payload_frameStart,0,0);
        VL_OUT8(pixelsOut_payload_rowEnd,0,0);
        VL_OUT8(pixelsOut_payload_inpValid,0,0);
        VL_OUT8(startOut,0,0);
        VL_OUT8(inpDoneOut,0,0);
        VL_IN8(thresholdIn,7,0);
        VL_IN8(widthIn,2,0);
        VL_IN8(heightIn,2,0);
        CData/*7:0*/ SuperResolutionPart1__DOT____Vxrand_h96fd8d4e__3;
        CData/*7:0*/ SuperResolutionPart1__DOT____Vxrand_h96fd8d4e__2;
        CData/*7:0*/ SuperResolutionPart1__DOT____Vxrand_h96fd8d4e__1;
        CData/*7:0*/ SuperResolutionPart1__DOT____Vxrand_h96fd8d4e__0;
        CData/*0:0*/ SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_ready;
        CData/*7:0*/ SuperResolutionPart1__DOT___zz_lineBufferOne_port0;
        CData/*7:0*/ SuperResolutionPart1__DOT___zz_lineBufferOne_port1;
        CData/*7:0*/ SuperResolutionPart1__DOT___zz_lineBufferTwo_port0;
        CData/*7:0*/ SuperResolutionPart1__DOT___zz_lineBufferTwo_port1;
        CData/*0:0*/ SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_input_ready;
        CData/*0:0*/ SuperResolutionPart1__DOT__inpDone;
        CData/*0:0*/ SuperResolutionPart1__DOT__internalDone;
        CData/*0:0*/ SuperResolutionPart1__DOT__startRead;
        CData/*0:0*/ SuperResolutionPart1__DOT__when_SuperResolutionPart1_l80;
        CData/*0:0*/ SuperResolutionPart1__DOT__slaveStart;
        CData/*0:0*/ SuperResolutionPart1__DOT__frameStart;
        CData/*7:0*/ SuperResolutionPart1__DOT__inpThreshold;
        CData/*2:0*/ SuperResolutionPart1__DOT__bmpWidth;
        CData/*2:0*/ SuperResolutionPart1__DOT__bmpHeight;
        CData/*0:0*/ SuperResolutionPart1__DOT__holdBuffer;
        CData/*0:0*/ SuperResolutionPart1__DOT__bufferRowCount_willIncrement;
        CData/*0:0*/ SuperResolutionPart1__DOT__bufferRowCount_willClear;
        CData/*2:0*/ SuperResolutionPart1__DOT__bufferRowCount_valueNext;
        CData/*2:0*/ SuperResolutionPart1__DOT__bufferRowCount_value;
        CData/*0:0*/ SuperResolutionPart1__DOT__bufferEnable;
        CData/*0:0*/ SuperResolutionPart1__DOT__bufferSwitch;
        CData/*0:0*/ SuperResolutionPart1__DOT__nextRowBuffer;
        CData/*0:0*/ SuperResolutionPart1__DOT__bufferReuse;
        CData/*0:0*/ SuperResolutionPart1__DOT__bufferWAddr_willIncrement;
        CData/*0:0*/ SuperResolutionPart1__DOT__bufferWAddr_willClear;
        CData/*2:0*/ SuperResolutionPart1__DOT__bufferWAddr_valueNext;
        CData/*2:0*/ SuperResolutionPart1__DOT__bufferWAddr_value;
        CData/*0:0*/ SuperResolutionPart1__DOT__outPixelAddr_willIncrement;
        CData/*0:0*/ SuperResolutionPart1__DOT__outPixelAddr_willClear;
        CData/*3:0*/ SuperResolutionPart1__DOT__outPixelAddr_valueNext;
        CData/*3:0*/ SuperResolutionPart1__DOT__outPixelAddr_value;
        CData/*0:0*/ SuperResolutionPart1__DOT__outRowCount_willIncrement;
        CData/*0:0*/ SuperResolutionPart1__DOT__outRowCount_willClear;
        CData/*3:0*/ SuperResolutionPart1__DOT__outRowCount_valueNext;
        CData/*3:0*/ SuperResolutionPart1__DOT__outRowCount_value;
        CData/*0:0*/ SuperResolutionPart1__DOT__outReachRowEnd;
        CData/*0:0*/ SuperResolutionPart1__DOT__outReachFinalRow;
        CData/*0:0*/ SuperResolutionPart1__DOT__bufferReachRowEnd;
    };
    struct {
        CData/*0:0*/ SuperResolutionPart1__DOT__bufferReachFinalRow;
        CData/*3:0*/ SuperResolutionPart1__DOT__mainAddrOne;
        CData/*3:0*/ SuperResolutionPart1__DOT__counterAddrOne;
        CData/*3:0*/ SuperResolutionPart1__DOT__mainAddrTwo;
        CData/*3:0*/ SuperResolutionPart1__DOT__counterAddrTwo;
        CData/*0:0*/ SuperResolutionPart1__DOT__controlStream_ready;
        CData/*0:0*/ SuperResolutionPart1__DOT__controls_frameStart;
        CData/*0:0*/ SuperResolutionPart1__DOT__controls_rowEnd;
        CData/*0:0*/ SuperResolutionPart1__DOT__controls_passMode;
        CData/*0:0*/ SuperResolutionPart1__DOT__controls_passValid;
        CData/*2:0*/ SuperResolutionPart1__DOT__controls_onceMode;
        CData/*0:0*/ SuperResolutionPart1__DOT__controls_onceValid;
        CData/*0:0*/ SuperResolutionPart1__DOT__controls_twiceCompValid;
        CData/*2:0*/ SuperResolutionPart1__DOT__controls_twiceMode;
        CData/*0:0*/ SuperResolutionPart1__DOT__readStage_mainOnePixelStream_ready;
        CData/*0:0*/ SuperResolutionPart1__DOT___zz_readStage_mainOnePixelStream_valid;
        CData/*0:0*/ SuperResolutionPart1__DOT__readStage_mainOnePixelStream_isFree;
        CData/*0:0*/ SuperResolutionPart1__DOT__readStage_counterOnePixelStream_ready;
        CData/*0:0*/ SuperResolutionPart1__DOT___zz_readStage_counterOnePixelStream_valid;
        CData/*0:0*/ SuperResolutionPart1__DOT__readStage_counterOnePixelStream_isFree;
        CData/*0:0*/ SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_ready;
        CData/*0:0*/ SuperResolutionPart1__DOT___zz_readStage_mainTwoPixelStream_valid;
        CData/*0:0*/ SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_isFree;
        CData/*0:0*/ SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_ready;
        CData/*0:0*/ SuperResolutionPart1__DOT___zz_readStage_counterTwoPixelStream_valid;
        CData/*0:0*/ SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_isFree;
        CData/*0:0*/ SuperResolutionPart1__DOT__controlStream_rValid;
        CData/*0:0*/ SuperResolutionPart1__DOT__controlStream_rData_frameStart;
        CData/*0:0*/ SuperResolutionPart1__DOT__controlStream_rData_rowEnd;
        CData/*0:0*/ SuperResolutionPart1__DOT__controlStream_rData_passMode;
        CData/*0:0*/ SuperResolutionPart1__DOT__controlStream_rData_passValid;
        CData/*2:0*/ SuperResolutionPart1__DOT__controlStream_rData_onceMode;
        CData/*0:0*/ SuperResolutionPart1__DOT__controlStream_rData_onceValid;
        CData/*0:0*/ SuperResolutionPart1__DOT__controlStream_rData_mainCompare;
        CData/*7:0*/ SuperResolutionPart1__DOT__controlStream_rData_mainDiff;
        CData/*0:0*/ SuperResolutionPart1__DOT__controlStream_rData_twiceCompValid;
        CData/*2:0*/ SuperResolutionPart1__DOT__controlStream_rData_twiceMode;
        CData/*0:0*/ SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_ready;
        CData/*0:0*/ SuperResolutionPart1__DOT__readStage_mainOnePixelStream_rValid;
        CData/*7:0*/ SuperResolutionPart1__DOT__readStage_mainOnePixelStream_rData;
        CData/*0:0*/ SuperResolutionPart1__DOT__compareStage_counterOnePixelStream_ready;
        CData/*0:0*/ SuperResolutionPart1__DOT__readStage_counterOnePixelStream_rValid;
        CData/*7:0*/ SuperResolutionPart1__DOT__readStage_counterOnePixelStream_rData;
        CData/*0:0*/ SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_ready;
        CData/*0:0*/ SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_rValid;
        CData/*7:0*/ SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_rData;
        CData/*0:0*/ SuperResolutionPart1__DOT__compareStage_counterTwoPixelStream_ready;
        CData/*0:0*/ SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_rValid;
        CData/*7:0*/ SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_rData;
        CData/*0:0*/ SuperResolutionPart1__DOT___zz_readStage_controlPipe_translated_payload_mainCompare;
        CData/*0:0*/ SuperResolutionPart1__DOT___zz_readStage_controlPipe_translated_payload_counterCompare;
        CData/*0:0*/ SuperResolutionPart1__DOT__readStage_controlPipe_translated_ready;
        CData/*0:0*/ SuperResolutionPart1__DOT__readStage_controlPipe_translated_rValid;
        CData/*0:0*/ SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_frameStart;
        CData/*0:0*/ SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_rowEnd;
        CData/*0:0*/ SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_passMode;
        CData/*0:0*/ SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_passValid;
        CData/*2:0*/ SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_onceMode;
        CData/*0:0*/ SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_onceValid;
        CData/*0:0*/ SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_mainCompare;
        CData/*0:0*/ SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_counterCompare;
        CData/*7:0*/ SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_mainDiff;
        CData/*0:0*/ SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_twiceCompValid;
        CData/*2:0*/ SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_twiceMode;
    };
    struct {
        CData/*0:0*/ SuperResolutionPart1__DOT__diffStage_mainOnePixelStream_ready;
        CData/*0:0*/ SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_rValid;
        CData/*7:0*/ SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_rData;
        CData/*0:0*/ SuperResolutionPart1__DOT__diffStage_counterOnePixelStream_ready;
        CData/*0:0*/ SuperResolutionPart1__DOT__compareStage_counterOnePixelStream_rValid;
        CData/*7:0*/ SuperResolutionPart1__DOT__compareStage_counterOnePixelStream_rData;
        CData/*0:0*/ SuperResolutionPart1__DOT__diffStage_mainTwoPixelStream_ready;
        CData/*0:0*/ SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_rValid;
        CData/*7:0*/ SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_rData;
        CData/*0:0*/ SuperResolutionPart1__DOT__diffStage_counterTwoPixelStream_ready;
        CData/*0:0*/ SuperResolutionPart1__DOT__compareStage_counterTwoPixelStream_rValid;
        CData/*7:0*/ SuperResolutionPart1__DOT__compareStage_counterTwoPixelStream_rData;
        CData/*7:0*/ SuperResolutionPart1__DOT___zz_compareStage_controlPipe_translated_payload_mainDiff;
        CData/*7:0*/ SuperResolutionPart1__DOT___zz_compareStage_controlPipe_translated_payload_counterDiff;
        CData/*0:0*/ SuperResolutionPart1__DOT__compareStage_controlPipe_translated_ready;
        CData/*0:0*/ SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rValid;
        CData/*0:0*/ SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_frameStart;
        CData/*0:0*/ SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_rowEnd;
        CData/*0:0*/ SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_passMode;
        CData/*0:0*/ SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_passValid;
        CData/*2:0*/ SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_onceMode;
        CData/*0:0*/ SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_onceValid;
        CData/*0:0*/ SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_mainCompare;
        CData/*0:0*/ SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_counterCompare;
        CData/*7:0*/ SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_mainDiff;
        CData/*7:0*/ SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_counterDiff;
        CData/*0:0*/ SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_twiceCompValid;
        CData/*2:0*/ SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_twiceMode;
        CData/*0:0*/ SuperResolutionPart1__DOT__diffStage_mainOnePixelStream_rValid;
        CData/*7:0*/ SuperResolutionPart1__DOT__diffStage_mainOnePixelStream_rData;
        CData/*0:0*/ SuperResolutionPart1__DOT__diffStage_counterOnePixelStream_rValid;
        CData/*7:0*/ SuperResolutionPart1__DOT__diffStage_counterOnePixelStream_rData;
        CData/*0:0*/ SuperResolutionPart1__DOT__diffStage_mainTwoPixelStream_rValid;
        CData/*7:0*/ SuperResolutionPart1__DOT__diffStage_mainTwoPixelStream_rData;
        CData/*0:0*/ SuperResolutionPart1__DOT__diffStage_counterTwoPixelStream_rValid;
        CData/*7:0*/ SuperResolutionPart1__DOT__diffStage_counterTwoPixelStream_rData;
        CData/*0:0*/ SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rValid;
        CData/*0:0*/ SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_frameStart;
        CData/*0:0*/ SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_rowEnd;
        CData/*0:0*/ SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_passMode;
        CData/*0:0*/ SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_passValid;
        CData/*2:0*/ SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_onceMode;
        CData/*0:0*/ SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_onceValid;
        CData/*0:0*/ SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_mainCompare;
        CData/*0:0*/ SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_counterCompare;
        CData/*7:0*/ SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_mainDiff;
        CData/*7:0*/ SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_counterDiff;
        CData/*0:0*/ SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_twiceCompValid;
        CData/*2:0*/ SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_twiceMode;
        CData/*0:0*/ SuperResolutionPart1__DOT__resultStage_pixelStream_ready;
        CData/*7:0*/ SuperResolutionPart1__DOT__resultStage_pixelStream_payload;
        CData/*0:0*/ SuperResolutionPart1__DOT__resultStage_pixelStream_rValid;
        CData/*7:0*/ SuperResolutionPart1__DOT__resultStage_pixelStream_rData;
        CData/*0:0*/ SuperResolutionPart1__DOT___zz_resultStage_mainOnePixelStream_ready;
        CData/*0:0*/ SuperResolutionPart1__DOT___zz_resultStage_mainOnePixelStream_ready_2;
        CData/*0:0*/ SuperResolutionPart1__DOT__when_Stream_l434;
        CData/*0:0*/ SuperResolutionPart1__DOT__resultsJoin_valid;
        CData/*0:0*/ SuperResolutionPart1__DOT__pixelsStream_s2mPipe_ready;
        CData/*0:0*/ SuperResolutionPart1__DOT__pixelsStream_rValid;
        CData/*7:0*/ SuperResolutionPart1__DOT__pixelsStream_rData_pixel;
        CData/*0:0*/ SuperResolutionPart1__DOT__pixelsStream_rData_frameStart;
        CData/*0:0*/ SuperResolutionPart1__DOT__pixelsStream_rData_rowEnd;
        CData/*0:0*/ SuperResolutionPart1__DOT__pixelsStream_rData_inpValid;
        CData/*0:0*/ SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rValid;
    };
    struct {
        CData/*7:0*/ SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_pixel;
        CData/*0:0*/ SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_frameStart;
        CData/*0:0*/ SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_rowEnd;
        CData/*0:0*/ SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_inpValid;
        CData/*0:0*/ SuperResolutionPart1__DOT__passPixels_valid;
        CData/*0:0*/ SuperResolutionPart1__DOT__when_SuperResolutionPart1_l600;
        CData/*0:0*/ SuperResolutionPart1__DOT__when_SuperResolutionPart1_l612;
        CData/*0:0*/ SuperResolutionPart1__DOT__when_SuperResolutionPart1_l616;
        CData/*0:0*/ SuperResolutionPart1__DOT__controlStateMachine_wantStart;
        CData/*2:0*/ SuperResolutionPart1__DOT__controlStateMachine_stateReg;
        CData/*2:0*/ SuperResolutionPart1__DOT__controlStateMachine_stateNext;
        CData/*0:0*/ SuperResolutionPart1__DOT__when_SuperResolutionPart1_l706;
        CData/*0:0*/ SuperResolutionPart1__DOT__controlStream_fire_6;
        CData/*0:0*/ SuperResolutionPart1__DOT__when_SuperResolutionPart1_l923;
        CData/*0:0*/ SuperResolutionPart1__DOT__when_SuperResolutionPart1_l924;
        CData/*0:0*/ SuperResolutionPart1__DOT__when_SuperResolutionPart1_l926;
        CData/*7:0*/ SuperResolutionPart1__DOT____Vlvbound_h267b71c9__0;
        CData/*7:0*/ SuperResolutionPart1__DOT____Vlvbound_h3e6a67dd__0;
        CData/*2:0*/ __Vdlyvdim0__SuperResolutionPart1__DOT__lineBufferOne__v0;
        CData/*7:0*/ __Vdlyvval__SuperResolutionPart1__DOT__lineBufferOne__v0;
        CData/*0:0*/ __Vdlyvset__SuperResolutionPart1__DOT__lineBufferOne__v0;
        CData/*2:0*/ __Vdlyvdim0__SuperResolutionPart1__DOT__lineBufferTwo__v0;
        CData/*7:0*/ __Vdlyvval__SuperResolutionPart1__DOT__lineBufferTwo__v0;
        CData/*0:0*/ __Vdlyvset__SuperResolutionPart1__DOT__lineBufferTwo__v0;
        CData/*0:0*/ __Vdly__SuperResolutionPart1__DOT__bufferSwitch;
        CData/*0:0*/ __Vdly__SuperResolutionPart1__DOT__inpDone;
        CData/*0:0*/ __Vdly__SuperResolutionPart1__DOT__outReachRowEnd;
        CData/*0:0*/ __Vdly__SuperResolutionPart1__DOT__outReachFinalRow;
        CData/*0:0*/ __Vclklast__TOP__clk;
        CData/*0:0*/ __Vclklast__TOP__reset;
        QData/*39:0*/ SuperResolutionPart1__DOT__controlStateMachine_stateReg_string;
        QData/*39:0*/ SuperResolutionPart1__DOT__controlStateMachine_stateNext_string;
        VlUnpacked<CData/*7:0*/, 5> SuperResolutionPart1__DOT__lineBufferOne;
        VlUnpacked<CData/*7:0*/, 5> SuperResolutionPart1__DOT__lineBufferTwo;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    VSuperResolutionPart1__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VSuperResolutionPart1___024root(const char* name);
    ~VSuperResolutionPart1___024root();
    VL_UNCOPYABLE(VSuperResolutionPart1___024root);

    // INTERNAL METHODS
    void __Vconfigure(VSuperResolutionPart1__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
