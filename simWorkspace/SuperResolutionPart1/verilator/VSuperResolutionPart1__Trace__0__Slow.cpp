// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "VSuperResolutionPart1__Syms.h"


VL_ATTR_COLD void VSuperResolutionPart1___024root__trace_init_sub__TOP__0(VSuperResolutionPart1___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+242,"pixelsIn_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+243,"pixelsIn_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+244,"pixelsIn_payload_pixel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+245,"pixelsIn_payload_frameStart",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+246,"pixelsIn_payload_rowEnd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+247,"StartIn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+248,"inpTwoDoneIn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+249,"inpThreeDoneIn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+250,"pixelsOut_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"pixelsOut_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+252,"pixelsOut_payload_pixel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+253,"pixelsOut_payload_frameStart",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+254,"pixelsOut_payload_rowEnd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+255,"pixelsOut_payload_inpValid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+256,"startOut",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+257,"inpDoneOut",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+258,"thresholdIn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+259,"widthIn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+260,"heightIn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+261,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+262,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("SuperResolutionPart1 ");
    tracep->declBit(c+242,"pixelsIn_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+243,"pixelsIn_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+244,"pixelsIn_payload_pixel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+245,"pixelsIn_payload_frameStart",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+246,"pixelsIn_payload_rowEnd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+247,"StartIn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+248,"inpTwoDoneIn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+249,"inpThreeDoneIn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+250,"pixelsOut_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"pixelsOut_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+252,"pixelsOut_payload_pixel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+253,"pixelsOut_payload_frameStart",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+254,"pixelsOut_payload_rowEnd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+255,"pixelsOut_payload_inpValid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+256,"startOut",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+257,"inpDoneOut",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+258,"thresholdIn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+259,"widthIn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+260,"heightIn",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+261,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+262,"reset",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+282,"controlStateMachine_enumDef_BOOT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+283,"controlStateMachine_enumDef_HOLD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+284,"controlStateMachine_enumDef_PASS",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+285,"controlStateMachine_enumDef_ONCE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBus(c+286,"controlStateMachine_enumDef_TWICE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 2,0);
    tracep->declBit(c+185,"diffStage_controlPipe_fork_io_outputs_0_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+186,"diffStage_controlPipe_fork_io_input_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+71,"diffStage_controlPipe_fork_io_outputs_0_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"diffStage_controlPipe_fork_io_outputs_0_payload_frameStart",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"diffStage_controlPipe_fork_io_outputs_0_payload_rowEnd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+82,"diffStage_controlPipe_fork_io_outputs_0_payload_passMode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"diffStage_controlPipe_fork_io_outputs_0_payload_passValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+84,"diffStage_controlPipe_fork_io_outputs_0_payload_onceMode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+85,"diffStage_controlPipe_fork_io_outputs_0_payload_onceValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"diffStage_controlPipe_fork_io_outputs_0_payload_mainCompare",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"diffStage_controlPipe_fork_io_outputs_0_payload_counterCompare",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+88,"diffStage_controlPipe_fork_io_outputs_0_payload_mainDiff",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+89,"diffStage_controlPipe_fork_io_outputs_0_payload_counterDiff",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+90,"diffStage_controlPipe_fork_io_outputs_0_payload_twiceCompValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+91,"diffStage_controlPipe_fork_io_outputs_0_payload_twiceMode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+71,"diffStage_controlPipe_fork_io_outputs_1_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"diffStage_controlPipe_fork_io_outputs_1_payload_frameStart",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"diffStage_controlPipe_fork_io_outputs_1_payload_rowEnd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+82,"diffStage_controlPipe_fork_io_outputs_1_payload_passMode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"diffStage_controlPipe_fork_io_outputs_1_payload_passValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+84,"diffStage_controlPipe_fork_io_outputs_1_payload_onceMode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+85,"diffStage_controlPipe_fork_io_outputs_1_payload_onceValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"diffStage_controlPipe_fork_io_outputs_1_payload_mainCompare",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"diffStage_controlPipe_fork_io_outputs_1_payload_counterCompare",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+88,"diffStage_controlPipe_fork_io_outputs_1_payload_mainDiff",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+89,"diffStage_controlPipe_fork_io_outputs_1_payload_counterDiff",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+90,"diffStage_controlPipe_fork_io_outputs_1_payload_twiceCompValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+91,"diffStage_controlPipe_fork_io_outputs_1_payload_twiceMode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+1,"inpDone",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2,"internalDone",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3,"startRead",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+263,"when_SuperResolutionPart1_l81",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"slaveStart",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+264,"pixelsIn_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+265,"when_SuperResolutionPart1_l84",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+5,"frameStart",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+264,"pixelsIn_fire_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+266,"when_SuperResolutionPart1_l87",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+6,"inpThreshold",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,"bmpWidth",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+8,"bmpHeight",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+9,"holdBuffer",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+267,"when_SuperResolutionPart1_l99",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+172,"bufferRowCount_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+173,"bufferRowCount_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+174,"bufferRowCount_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+10,"bufferRowCount_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+11,"bufferRowCount_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+268,"bufferRowCount_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+12,"bufferEnable",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+269,"when_SuperResolutionPart1_l105",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+270,"when_SuperResolutionPart1_l105_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+187,"bufferSwitch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+13,"when_SuperResolutionPart1_l108",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"nextRowBuffer",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+13,"when_SuperResolutionPart1_l111",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"bufferReuse",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+175,"bufferWAddr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+176,"bufferWAddr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+177,"bufferWAddr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+188,"bufferWAddr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+189,"bufferWAddr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+271,"bufferWAddr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+190,"outPixelAddr_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+191,"outPixelAddr_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+192,"outPixelAddr_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+16,"outPixelAddr_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+17,"outPixelAddr_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+72,"outPixelAddr_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+193,"outRowCount_willIncrement",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+194,"outRowCount_willClear",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+195,"outRowCount_valueNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+18,"outRowCount_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+19,"outRowCount_willOverflowIfInc",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+73,"outRowCount_willOverflow",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"outReachRowEnd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+21,"outReachFinalRow",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+22,"bufferReachRowEnd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+23,"bufferReachFinalRow",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+196,"mainAddrOne",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+197,"counterAddrOne",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+198,"mainAddrTwo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+199,"counterAddrTwo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBit(c+287,"validStream_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+74,"validStream_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3,"controlStream_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+200,"controlStream_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+201,"controlStream_payload_frameStart",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+202,"controlStream_payload_rowEnd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+203,"controlStream_payload_passMode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+204,"controlStream_payload_passValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+205,"controlStream_payload_onceMode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+206,"controlStream_payload_onceValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+288,"controlStream_payload_mainCompare",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+288,"controlStream_payload_counterCompare",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+289,"controlStream_payload_mainDiff",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+289,"controlStream_payload_counterDiff",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+207,"controlStream_payload_twiceCompValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+208,"controlStream_payload_twiceMode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+201,"controls_frameStart",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+202,"controls_rowEnd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+203,"controls_passMode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+204,"controls_passValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+205,"controls_onceMode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+206,"controls_onceValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+288,"controls_mainCompare",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+288,"controls_counterCompare",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+289,"controls_mainDiff",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+289,"controls_counterDiff",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+207,"controls_twiceCompValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+208,"controls_twiceMode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+3,"mainAddrOneStream_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+209,"mainAddrOneStream_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+210,"mainAddrOneStream_payload",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+3,"counterAddrOneStream_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+211,"counterAddrOneStream_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+212,"counterAddrOneStream_payload",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+3,"mainAddrTwoStream_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+213,"mainAddrTwoStream_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+214,"mainAddrTwoStream_payload",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+3,"counterAddrTwoStream_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+215,"counterAddrTwoStream_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+216,"counterAddrTwoStream_payload",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+24,"readStage_mainOnePixelStream_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+217,"readStage_mainOnePixelStream_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+92,"readStage_mainOnePixelStream_payload",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+209,"readStage_mainOnePixelStream_isFree",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"readStage_counterOnePixelStream_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+218,"readStage_counterOnePixelStream_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+93,"readStage_counterOnePixelStream_payload",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+211,"readStage_counterOnePixelStream_isFree",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"readStage_mainTwoPixelStream_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+219,"readStage_mainTwoPixelStream_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+94,"readStage_mainTwoPixelStream_payload",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+213,"readStage_mainTwoPixelStream_isFree",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+27,"readStage_counterTwoPixelStream_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+220,"readStage_counterTwoPixelStream_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+95,"readStage_counterTwoPixelStream_payload",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
}

VL_ATTR_COLD void VSuperResolutionPart1___024root__trace_init_sub__TOP__1(VSuperResolutionPart1___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root__trace_init_sub__TOP__1\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+215,"readStage_counterTwoPixelStream_isFree",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"readStage_controlPipe_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+221,"readStage_controlPipe_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+96,"readStage_controlPipe_payload_frameStart",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+97,"readStage_controlPipe_payload_rowEnd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+98,"readStage_controlPipe_payload_passMode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+99,"readStage_controlPipe_payload_passValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+100,"readStage_controlPipe_payload_onceMode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+101,"readStage_controlPipe_payload_onceValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+102,"readStage_controlPipe_payload_mainCompare",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+102,"readStage_controlPipe_payload_counterCompare",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+103,"readStage_controlPipe_payload_mainDiff",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+103,"readStage_controlPipe_payload_counterDiff",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+104,"readStage_controlPipe_payload_twiceCompValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+105,"readStage_controlPipe_payload_twiceMode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+28,"controlStream_rValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+96,"controlStream_rData_frameStart",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+97,"controlStream_rData_rowEnd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+98,"controlStream_rData_passMode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+99,"controlStream_rData_passValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+100,"controlStream_rData_onceMode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+101,"controlStream_rData_onceValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+102,"controlStream_rData_mainCompare",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+102,"controlStream_rData_counterCompare",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+103,"controlStream_rData_mainDiff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+103,"controlStream_rData_counterDiff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+104,"controlStream_rData_twiceCompValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+105,"controlStream_rData_twiceMode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+29,"when_Stream_l368",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"compareStage_mainOnePixelStream_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+222,"compareStage_mainOnePixelStream_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+106,"compareStage_mainOnePixelStream_payload",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+30,"readStage_mainOnePixelStream_rValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+106,"readStage_mainOnePixelStream_rData",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+31,"when_Stream_l368_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"compareStage_counterOnePixelStream_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+223,"compareStage_counterOnePixelStream_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+107,"compareStage_counterOnePixelStream_payload",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+32,"readStage_counterOnePixelStream_rValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+107,"readStage_counterOnePixelStream_rData",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+33,"when_Stream_l368_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"compareStage_mainTwoPixelStream_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+224,"compareStage_mainTwoPixelStream_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+108,"compareStage_mainTwoPixelStream_payload",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+34,"readStage_mainTwoPixelStream_rValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+108,"readStage_mainTwoPixelStream_rData",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+35,"when_Stream_l368_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+36,"compareStage_counterTwoPixelStream_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+225,"compareStage_counterTwoPixelStream_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+109,"compareStage_counterTwoPixelStream_payload",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+36,"readStage_counterTwoPixelStream_rValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+109,"readStage_counterTwoPixelStream_rData",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+37,"when_Stream_l368_4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+110,"when_SuperResolutionPart1_l208",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+111,"when_SuperResolutionPart1_l216",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+112,"when_SuperResolutionPart1_l224",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+113,"when_SuperResolutionPart1_l232",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+112,"when_SuperResolutionPart1_l252",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+114,"when_SuperResolutionPart1_l258",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+113,"when_SuperResolutionPart1_l266",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+115,"when_SuperResolutionPart1_l272",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+111,"when_SuperResolutionPart1_l284",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+110,"when_SuperResolutionPart1_l296",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"readStage_controlPipe_translated_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+221,"readStage_controlPipe_translated_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+96,"readStage_controlPipe_translated_payload_frameStart",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+97,"readStage_controlPipe_translated_payload_rowEnd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+98,"readStage_controlPipe_translated_payload_passMode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+99,"readStage_controlPipe_translated_payload_passValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+100,"readStage_controlPipe_translated_payload_onceMode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+101,"readStage_controlPipe_translated_payload_onceValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+116,"readStage_controlPipe_translated_payload_mainCompare",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+117,"readStage_controlPipe_translated_payload_counterCompare",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+103,"readStage_controlPipe_translated_payload_mainDiff",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+103,"readStage_controlPipe_translated_payload_counterDiff",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+104,"readStage_controlPipe_translated_payload_twiceCompValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+105,"readStage_controlPipe_translated_payload_twiceMode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+38,"compareStage_controlPipe_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+226,"compareStage_controlPipe_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+118,"compareStage_controlPipe_payload_frameStart",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+119,"compareStage_controlPipe_payload_rowEnd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+120,"compareStage_controlPipe_payload_passMode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+121,"compareStage_controlPipe_payload_passValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+122,"compareStage_controlPipe_payload_onceMode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+123,"compareStage_controlPipe_payload_onceValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+124,"compareStage_controlPipe_payload_mainCompare",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+125,"compareStage_controlPipe_payload_counterCompare",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+126,"compareStage_controlPipe_payload_mainDiff",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+126,"compareStage_controlPipe_payload_counterDiff",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+127,"compareStage_controlPipe_payload_twiceCompValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+128,"compareStage_controlPipe_payload_twiceMode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+38,"readStage_controlPipe_translated_rValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+118,"readStage_controlPipe_translated_rData_frameStart",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+119,"readStage_controlPipe_translated_rData_rowEnd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+120,"readStage_controlPipe_translated_rData_passMode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+121,"readStage_controlPipe_translated_rData_passValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+122,"readStage_controlPipe_translated_rData_onceMode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+123,"readStage_controlPipe_translated_rData_onceValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+124,"readStage_controlPipe_translated_rData_mainCompare",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+125,"readStage_controlPipe_translated_rData_counterCompare",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+126,"readStage_controlPipe_translated_rData_mainDiff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+126,"readStage_controlPipe_translated_rData_counterDiff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+127,"readStage_controlPipe_translated_rData_twiceCompValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+128,"readStage_controlPipe_translated_rData_twiceMode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+39,"when_Stream_l368_5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+40,"diffStage_mainOnePixelStream_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+227,"diffStage_mainOnePixelStream_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+129,"diffStage_mainOnePixelStream_payload",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+40,"compareStage_mainOnePixelStream_rValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+129,"compareStage_mainOnePixelStream_rData",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+41,"when_Stream_l368_6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+42,"diffStage_counterOnePixelStream_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+228,"diffStage_counterOnePixelStream_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+130,"diffStage_counterOnePixelStream_payload",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+42,"compareStage_counterOnePixelStream_rValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+130,"compareStage_counterOnePixelStream_rData",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+43,"when_Stream_l368_7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+44,"diffStage_mainTwoPixelStream_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+229,"diffStage_mainTwoPixelStream_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+131,"diffStage_mainTwoPixelStream_payload",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+44,"compareStage_mainTwoPixelStream_rValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+131,"compareStage_mainTwoPixelStream_rData",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+45,"when_Stream_l368_8",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+46,"diffStage_counterTwoPixelStream_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+230,"diffStage_counterTwoPixelStream_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+132,"diffStage_counterTwoPixelStream_payload",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+46,"compareStage_counterTwoPixelStream_rValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+132,"compareStage_counterTwoPixelStream_rData",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+47,"when_Stream_l368_9",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"compareStage_controlPipe_translated_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+226,"compareStage_controlPipe_translated_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+118,"compareStage_controlPipe_translated_payload_frameStart",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+119,"compareStage_controlPipe_translated_payload_rowEnd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+120,"compareStage_controlPipe_translated_payload_passMode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+121,"compareStage_controlPipe_translated_payload_passValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+122,"compareStage_controlPipe_translated_payload_onceMode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+123,"compareStage_controlPipe_translated_payload_onceValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+124,"compareStage_controlPipe_translated_payload_mainCompare",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+125,"compareStage_controlPipe_translated_payload_counterCompare",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+133,"compareStage_controlPipe_translated_payload_mainDiff",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+134,"compareStage_controlPipe_translated_payload_counterDiff",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+127,"compareStage_controlPipe_translated_payload_twiceCompValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+128,"compareStage_controlPipe_translated_payload_twiceMode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+48,"diffStage_controlPipe_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+186,"diffStage_controlPipe_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"diffStage_controlPipe_payload_frameStart",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"diffStage_controlPipe_payload_rowEnd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+82,"diffStage_controlPipe_payload_passMode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"diffStage_controlPipe_payload_passValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+84,"diffStage_controlPipe_payload_onceMode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+85,"diffStage_controlPipe_payload_onceValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"diffStage_controlPipe_payload_mainCompare",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"diffStage_controlPipe_payload_counterCompare",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+88,"diffStage_controlPipe_payload_mainDiff",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+89,"diffStage_controlPipe_payload_counterDiff",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+90,"diffStage_controlPipe_payload_twiceCompValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+91,"diffStage_controlPipe_payload_twiceMode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+48,"compareStage_controlPipe_translated_rValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+80,"compareStage_controlPipe_translated_rData_frameStart",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+81,"compareStage_controlPipe_translated_rData_rowEnd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+82,"compareStage_controlPipe_translated_rData_passMode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+83,"compareStage_controlPipe_translated_rData_passValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+84,"compareStage_controlPipe_translated_rData_onceMode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+85,"compareStage_controlPipe_translated_rData_onceValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+86,"compareStage_controlPipe_translated_rData_mainCompare",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+87,"compareStage_controlPipe_translated_rData_counterCompare",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+88,"compareStage_controlPipe_translated_rData_mainDiff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+89,"compareStage_controlPipe_translated_rData_counterDiff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+90,"compareStage_controlPipe_translated_rData_twiceCompValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+91,"compareStage_controlPipe_translated_rData_twiceMode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+49,"when_Stream_l368_10",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"resultStage_mainOnePixelStream_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"resultStage_mainOnePixelStream_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+135,"resultStage_mainOnePixelStream_payload",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+50,"diffStage_mainOnePixelStream_rValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+135,"diffStage_mainOnePixelStream_rData",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+51,"when_Stream_l368_11",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"resultStage_counterOnePixelStream_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"resultStage_counterOnePixelStream_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+136,"resultStage_counterOnePixelStream_payload",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+52,"diffStage_counterOnePixelStream_rValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+136,"diffStage_counterOnePixelStream_rData",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+53,"when_Stream_l368_12",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"resultStage_mainTwoPixelStream_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"resultStage_mainTwoPixelStream_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+137,"resultStage_mainTwoPixelStream_payload",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+54,"diffStage_mainTwoPixelStream_rValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+137,"diffStage_mainTwoPixelStream_rData",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+55,"when_Stream_l368_13",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"resultStage_counterTwoPixelStream_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"resultStage_counterTwoPixelStream_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+138,"resultStage_counterTwoPixelStream_payload",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+56,"diffStage_counterTwoPixelStream_rValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+138,"diffStage_counterTwoPixelStream_rData",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+57,"when_Stream_l368_14",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"resultStage_controlPipe_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"resultStage_controlPipe_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+139,"resultStage_controlPipe_payload_frameStart",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"resultStage_controlPipe_payload_rowEnd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+141,"resultStage_controlPipe_payload_passMode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"resultStage_controlPipe_payload_passValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+143,"resultStage_controlPipe_payload_onceMode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+144,"resultStage_controlPipe_payload_onceValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+145,"resultStage_controlPipe_payload_mainCompare",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+146,"resultStage_controlPipe_payload_counterCompare",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+147,"resultStage_controlPipe_payload_mainDiff",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+148,"resultStage_controlPipe_payload_counterDiff",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+149,"resultStage_controlPipe_payload_twiceCompValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+150,"resultStage_controlPipe_payload_twiceMode",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+58,"diffStage_controlPipe_fork_io_outputs_0_rValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+139,"diffStage_controlPipe_fork_io_outputs_0_rData_frameStart",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+140,"diffStage_controlPipe_fork_io_outputs_0_rData_rowEnd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+141,"diffStage_controlPipe_fork_io_outputs_0_rData_passMode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+142,"diffStage_controlPipe_fork_io_outputs_0_rData_passValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+143,"diffStage_controlPipe_fork_io_outputs_0_rData_onceMode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+144,"diffStage_controlPipe_fork_io_outputs_0_rData_onceValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+145,"diffStage_controlPipe_fork_io_outputs_0_rData_mainCompare",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+146,"diffStage_controlPipe_fork_io_outputs_0_rData_counterCompare",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+147,"diffStage_controlPipe_fork_io_outputs_0_rData_mainDiff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+148,"diffStage_controlPipe_fork_io_outputs_0_rData_counterDiff",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+149,"diffStage_controlPipe_fork_io_outputs_0_rData_twiceCompValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+150,"diffStage_controlPipe_fork_io_outputs_0_rData_twiceMode",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+59,"when_Stream_l368_15",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+71,"resultStage_pixelStream_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+232,"resultStage_pixelStream_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+233,"resultStage_pixelStream_payload",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+272,"when_SuperResolutionPart1_l452",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+272,"when_SuperResolutionPart1_l460",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+272,"when_SuperResolutionPart1_l468",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+272,"when_SuperResolutionPart1_l476",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+273,"when_SuperResolutionPart1_l496",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+151,"switch_SuperResolutionPart1_l497",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+151,"switch_SuperResolutionPart1_l506",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+273,"when_SuperResolutionPart1_l518",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+151,"switch_SuperResolutionPart1_l519",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+151,"switch_SuperResolutionPart1_l528",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+272,"when_SuperResolutionPart1_l544",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+272,"when_SuperResolutionPart1_l556",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+60,"resultStage_resultStream_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"resultStage_resultStream_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+152,"resultStage_resultStream_payload",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+60,"resultStage_pixelStream_rValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+152,"resultStage_pixelStream_rData",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+61,"when_Stream_l368_16",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+153,"when_Stream_l434",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+234,"resultsJoin_valid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+235,"resultsJoin_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
}

VL_ATTR_COLD void VSuperResolutionPart1___024root__trace_init_sub__TOP__2(VSuperResolutionPart1___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root__trace_init_sub__TOP__2\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+234,"pixelsStream_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+235,"pixelsStream_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+152,"pixelsStream_payload_pixel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+139,"pixelsStream_payload_frameStart",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"pixelsStream_payload_rowEnd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+287,"pixelsStream_payload_inpValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+236,"pixelsStream_s2mPipe_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+178,"pixelsStream_s2mPipe_ready",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+274,"pixelsStream_s2mPipe_payload_pixel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+275,"pixelsStream_s2mPipe_payload_frameStart",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+276,"pixelsStream_s2mPipe_payload_rowEnd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+277,"pixelsStream_s2mPipe_payload_inpValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"pixelsStream_rValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+154,"pixelsStream_rData_pixel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+155,"pixelsStream_rData_frameStart",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+156,"pixelsStream_rData_rowEnd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+157,"pixelsStream_rData_inpValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+62,"pixelsStream_s2mPipe_m2sPipe_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"pixelsStream_s2mPipe_m2sPipe_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+158,"pixelsStream_s2mPipe_m2sPipe_payload_pixel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+159,"pixelsStream_s2mPipe_m2sPipe_payload_frameStart",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+160,"pixelsStream_s2mPipe_m2sPipe_payload_rowEnd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+161,"pixelsStream_s2mPipe_m2sPipe_payload_inpValid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"pixelsStream_s2mPipe_rValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+158,"pixelsStream_s2mPipe_rData_pixel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+159,"pixelsStream_s2mPipe_rData_frameStart",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+160,"pixelsStream_s2mPipe_rData_rowEnd",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+161,"pixelsStream_s2mPipe_rData_inpValid",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+63,"when_Stream_l368_17",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+179,"passPixels_valid",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+287,"passPixels_ready",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+244,"passPixels_payload_pixel",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+245,"passPixels_payload_frameStart",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+246,"passPixels_payload_rowEnd",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+179,"passPixels_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+278,"when_SuperResolutionPart1_l597",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+179,"passPixels_fire_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+279,"when_SuperResolutionPart1_l598",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+179,"passPixels_fire_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+180,"when_SuperResolutionPart1_l601",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+179,"passPixels_fire_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+280,"when_SuperResolutionPart1_l612",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+179,"passPixels_fire_4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+181,"when_SuperResolutionPart1_l613",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"controlStream_fire",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+238,"when_SuperResolutionPart1_l617",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+287,"when_SuperResolutionPart1_l619",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+179,"passPixels_fire_5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+179,"passPixels_fire_6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+179,"passPixels_fire_7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+288,"controlStateMachine_wantExit",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"controlStateMachine_wantStart",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+288,"controlStateMachine_wantKill",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+65,"controlStateMachine_stateReg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+182,"controlStateMachine_stateNext",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+66,"switch_SuperResolutionPart1_l653",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+179,"passPixels_fire_8",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+67,"switch_SuperResolutionPart1_l656",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+179,"passPixels_fire_9",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+67,"switch_SuperResolutionPart1_l669",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"controlStream_fire_1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+68,"when_SuperResolutionPart1_l687",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+179,"passPixels_fire_10",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+281,"switch_SuperResolutionPart1_l690",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"controlStream_fire_2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"when_SuperResolutionPart1_l707",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"controlStream_fire_3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+77,"when_SuperResolutionPart1_l710",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"controlStream_fire_4",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"when_SuperResolutionPart1_l711",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"controlStream_fire_5",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"when_SuperResolutionPart1_l713",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+240,"controlStream_fire_6",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"switch_SuperResolutionPart1_l743",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"controlStream_fire_7",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+79,"when_SuperResolutionPart1_l750",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"controlStream_fire_8",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+179,"passPixels_fire_11",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+281,"switch_SuperResolutionPart1_l790",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"controlStream_fire_9",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+77,"when_SuperResolutionPart1_l818",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"controlStream_fire_10",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"when_SuperResolutionPart1_l819",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"controlStream_fire_11",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"when_SuperResolutionPart1_l821",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+240,"controlStream_fire_12",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"controlStream_fire_13",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+241,"switch_SuperResolutionPart1_l856",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"controlStream_fire_14",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+77,"when_SuperResolutionPart1_l924",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"controlStream_fire_15",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"when_SuperResolutionPart1_l925",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"controlStream_fire_16",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"when_SuperResolutionPart1_l927",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+240,"controlStream_fire_17",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+69,"controlStateMachine_stateReg_string",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
    tracep->declQuad(c+183,"controlStateMachine_stateNext_string",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 39,0);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+162+i*1,"lineBufferOne",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+167+i*1,"lineBufferTwo",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    tracep->pushNamePrefix("diffStage_controlPipe_fork ");
    tracep->declBit(c+48,"io_input_valid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+186,"io_input_ready",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"io_input_payload_frameStart",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"io_input_payload_rowEnd",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+82,"io_input_payload_passMode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"io_input_payload_passValid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+84,"io_input_payload_onceMode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+85,"io_input_payload_onceValid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"io_input_payload_mainCompare",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"io_input_payload_counterCompare",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+88,"io_input_payload_mainDiff",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+89,"io_input_payload_counterDiff",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+90,"io_input_payload_twiceCompValid",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+91,"io_input_payload_twiceMode",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+71,"io_outputs_0_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+185,"io_outputs_0_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"io_outputs_0_payload_frameStart",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"io_outputs_0_payload_rowEnd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+82,"io_outputs_0_payload_passMode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"io_outputs_0_payload_passValid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+84,"io_outputs_0_payload_onceMode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+85,"io_outputs_0_payload_onceValid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"io_outputs_0_payload_mainCompare",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"io_outputs_0_payload_counterCompare",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+88,"io_outputs_0_payload_mainDiff",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+89,"io_outputs_0_payload_counterDiff",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+90,"io_outputs_0_payload_twiceCompValid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+91,"io_outputs_0_payload_twiceMode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+71,"io_outputs_1_valid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+232,"io_outputs_1_ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"io_outputs_1_payload_frameStart",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"io_outputs_1_payload_rowEnd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+82,"io_outputs_1_payload_passMode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"io_outputs_1_payload_passValid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+84,"io_outputs_1_payload_onceMode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+85,"io_outputs_1_payload_onceValid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+86,"io_outputs_1_payload_mainCompare",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+87,"io_outputs_1_payload_counterCompare",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+88,"io_outputs_1_payload_mainDiff",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+89,"io_outputs_1_payload_counterDiff",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+90,"io_outputs_1_payload_twiceCompValid",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+91,"io_outputs_1_payload_twiceMode",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VSuperResolutionPart1___024root__trace_init_top(VSuperResolutionPart1___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root__trace_init_top\n"); );
    // Body
    VSuperResolutionPart1___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    VSuperResolutionPart1___024root__trace_init_sub__TOP__1(vlSelf, tracep);
    VSuperResolutionPart1___024root__trace_init_sub__TOP__2(vlSelf, tracep);
}

VL_ATTR_COLD void VSuperResolutionPart1___024root__trace_full_top_0(void* voidSelf, VerilatedFst* tracep);
void VSuperResolutionPart1___024root__trace_chg_top_0(void* voidSelf, VerilatedFst* tracep);
void VSuperResolutionPart1___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void VSuperResolutionPart1___024root__trace_register(VSuperResolutionPart1___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VSuperResolutionPart1___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VSuperResolutionPart1___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VSuperResolutionPart1___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSuperResolutionPart1___024root__trace_full_sub_0(VSuperResolutionPart1___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void VSuperResolutionPart1___024root__trace_full_sub_1(VSuperResolutionPart1___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void VSuperResolutionPart1___024root__trace_full_top_0(void* voidSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root__trace_full_top_0\n"); );
    // Init
    VSuperResolutionPart1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSuperResolutionPart1___024root*>(voidSelf);
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSuperResolutionPart1___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
    VSuperResolutionPart1___024root__trace_full_sub_1((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VSuperResolutionPart1___024root__trace_full_sub_0(VSuperResolutionPart1___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(vlSelf->SuperResolutionPart1__DOT__inpDone));
    tracep->fullBit(oldp+2,(vlSelf->SuperResolutionPart1__DOT__internalDone));
    tracep->fullBit(oldp+3,(vlSelf->SuperResolutionPart1__DOT__startRead));
    tracep->fullBit(oldp+4,(vlSelf->SuperResolutionPart1__DOT__slaveStart));
    tracep->fullBit(oldp+5,(vlSelf->SuperResolutionPart1__DOT__frameStart));
    tracep->fullCData(oldp+6,(vlSelf->SuperResolutionPart1__DOT__inpThreshold),8);
    tracep->fullCData(oldp+7,(vlSelf->SuperResolutionPart1__DOT__bmpWidth),3);
    tracep->fullCData(oldp+8,(vlSelf->SuperResolutionPart1__DOT__bmpHeight),3);
    tracep->fullBit(oldp+9,(vlSelf->SuperResolutionPart1__DOT__holdBuffer));
    tracep->fullCData(oldp+10,(vlSelf->SuperResolutionPart1__DOT__bufferRowCount_value),3);
    tracep->fullBit(oldp+11,((5U == (IData)(vlSelf->SuperResolutionPart1__DOT__bufferRowCount_value))));
    tracep->fullBit(oldp+12,(vlSelf->SuperResolutionPart1__DOT__bufferEnable));
    tracep->fullBit(oldp+13,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__startRead)))));
    tracep->fullBit(oldp+14,(vlSelf->SuperResolutionPart1__DOT__nextRowBuffer));
    tracep->fullBit(oldp+15,(vlSelf->SuperResolutionPart1__DOT__bufferReuse));
    tracep->fullCData(oldp+16,(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value),4);
    tracep->fullBit(oldp+17,((9U == (IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value))));
    tracep->fullCData(oldp+18,(vlSelf->SuperResolutionPart1__DOT__outRowCount_value),4);
    tracep->fullBit(oldp+19,((0xaU == (IData)(vlSelf->SuperResolutionPart1__DOT__outRowCount_value))));
    tracep->fullBit(oldp+20,(vlSelf->SuperResolutionPart1__DOT__outReachRowEnd));
    tracep->fullBit(oldp+21,(vlSelf->SuperResolutionPart1__DOT__outReachFinalRow));
    tracep->fullBit(oldp+22,(vlSelf->SuperResolutionPart1__DOT__bufferReachRowEnd));
    tracep->fullBit(oldp+23,(vlSelf->SuperResolutionPart1__DOT__bufferReachFinalRow));
    tracep->fullBit(oldp+24,(vlSelf->SuperResolutionPart1__DOT___zz_readStage_mainOnePixelStream_valid));
    tracep->fullBit(oldp+25,(vlSelf->SuperResolutionPart1__DOT___zz_readStage_counterOnePixelStream_valid));
    tracep->fullBit(oldp+26,(vlSelf->SuperResolutionPart1__DOT___zz_readStage_mainTwoPixelStream_valid));
    tracep->fullBit(oldp+27,(vlSelf->SuperResolutionPart1__DOT___zz_readStage_counterTwoPixelStream_valid));
    tracep->fullBit(oldp+28,(vlSelf->SuperResolutionPart1__DOT__controlStream_rValid));
    tracep->fullBit(oldp+29,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_rValid)))));
    tracep->fullBit(oldp+30,(vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_rValid));
    tracep->fullBit(oldp+31,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_rValid)))));
    tracep->fullBit(oldp+32,(vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_rValid));
    tracep->fullBit(oldp+33,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_rValid)))));
    tracep->fullBit(oldp+34,(vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_rValid));
    tracep->fullBit(oldp+35,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_rValid)))));
    tracep->fullBit(oldp+36,(vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_rValid));
    tracep->fullBit(oldp+37,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_rValid)))));
    tracep->fullBit(oldp+38,(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rValid));
    tracep->fullBit(oldp+39,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rValid)))));
    tracep->fullBit(oldp+40,(vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_rValid));
    tracep->fullBit(oldp+41,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_rValid)))));
    tracep->fullBit(oldp+42,(vlSelf->SuperResolutionPart1__DOT__compareStage_counterOnePixelStream_rValid));
    tracep->fullBit(oldp+43,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_counterOnePixelStream_rValid)))));
    tracep->fullBit(oldp+44,(vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_rValid));
    tracep->fullBit(oldp+45,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_rValid)))));
    tracep->fullBit(oldp+46,(vlSelf->SuperResolutionPart1__DOT__compareStage_counterTwoPixelStream_rValid));
    tracep->fullBit(oldp+47,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_counterTwoPixelStream_rValid)))));
    tracep->fullBit(oldp+48,(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rValid));
    tracep->fullBit(oldp+49,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rValid)))));
    tracep->fullBit(oldp+50,(vlSelf->SuperResolutionPart1__DOT__diffStage_mainOnePixelStream_rValid));
    tracep->fullBit(oldp+51,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_mainOnePixelStream_rValid)))));
    tracep->fullBit(oldp+52,(vlSelf->SuperResolutionPart1__DOT__diffStage_counterOnePixelStream_rValid));
    tracep->fullBit(oldp+53,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_counterOnePixelStream_rValid)))));
    tracep->fullBit(oldp+54,(vlSelf->SuperResolutionPart1__DOT__diffStage_mainTwoPixelStream_rValid));
    tracep->fullBit(oldp+55,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_mainTwoPixelStream_rValid)))));
    tracep->fullBit(oldp+56,(vlSelf->SuperResolutionPart1__DOT__diffStage_counterTwoPixelStream_rValid));
    tracep->fullBit(oldp+57,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_counterTwoPixelStream_rValid)))));
    tracep->fullBit(oldp+58,(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rValid));
    tracep->fullBit(oldp+59,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rValid)))));
    tracep->fullBit(oldp+60,(vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_rValid));
    tracep->fullBit(oldp+61,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_rValid)))));
    tracep->fullBit(oldp+62,(vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rValid));
    tracep->fullBit(oldp+63,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rValid)))));
    tracep->fullBit(oldp+64,(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_wantStart));
    tracep->fullCData(oldp+65,(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg),3);
    tracep->fullBit(oldp+66,((0U == (1U & (IData)(vlSelf->SuperResolutionPart1__DOT__outRowCount_value)))));
    tracep->fullBit(oldp+67,((0U == (1U & (IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value)))));
    tracep->fullBit(oldp+68,((((IData)(vlSelf->SuperResolutionPart1__DOT__outRowCount_value) 
                               < (0x1fU & ((IData)(vlSelf->SuperResolutionPart1__DOT__bufferRowCount_value) 
                                           << 1U))) 
                              | (IData)(vlSelf->SuperResolutionPart1__DOT__bufferReuse))));
    tracep->fullQData(oldp+69,(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateReg_string),40);
    tracep->fullBit(oldp+71,(((IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rValid) 
                              & (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_input_ready))));
    tracep->fullBit(oldp+72,(((9U == (IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value)) 
                              & (IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_willIncrement))));
    tracep->fullBit(oldp+73,(((0xaU == (IData)(vlSelf->SuperResolutionPart1__DOT__outRowCount_value)) 
                              & (IData)(vlSelf->SuperResolutionPart1__DOT__outRowCount_willIncrement))));
    tracep->fullBit(oldp+74,(((IData)(vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_isFree) 
                              & (IData)(vlSelf->SuperResolutionPart1__DOT__startRead))));
    tracep->fullBit(oldp+75,(((IData)(vlSelf->SuperResolutionPart1__DOT__startRead) 
                              & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_ready))));
    tracep->fullBit(oldp+76,(((IData)(vlSelf->SuperResolutionPart1__DOT__frameStart) 
                              & ((IData)(vlSelf->SuperResolutionPart1__DOT__startRead) 
                                 & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_ready)))));
    tracep->fullBit(oldp+77,((((IData)(vlSelf->SuperResolutionPart1__DOT__startRead) 
                               & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_ready)) 
                              & ((IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value) 
                                 == (0x1fU & (((IData)(vlSelf->SuperResolutionPart1__DOT__bmpWidth) 
                                               << 1U) 
                                              - (IData)(2U)))))));
    tracep->fullBit(oldp+78,((((IData)(vlSelf->SuperResolutionPart1__DOT__outReachRowEnd) 
                               & ((IData)(vlSelf->SuperResolutionPart1__DOT__outRowCount_value) 
                                  == (0x1fU & (((IData)(vlSelf->SuperResolutionPart1__DOT__bmpHeight) 
                                                << 1U) 
                                               - (IData)(2U))))) 
                              & ((IData)(vlSelf->SuperResolutionPart1__DOT__startRead) 
                                 & (IData)(vlSelf->SuperResolutionPart1__DOT__controlStream_ready)))));
    tracep->fullBit(oldp+79,(((0U == (IData)(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_value)) 
                              & ((0xfU & ((IData)(2U) 
                                          + (IData)(vlSelf->SuperResolutionPart1__DOT__outRowCount_value))) 
                                 == (0x1fU & ((IData)(vlSelf->SuperResolutionPart1__DOT__bufferRowCount_value) 
                                              << 1U))))));
    tracep->fullBit(oldp+80,(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_frameStart));
    tracep->fullBit(oldp+81,(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_rowEnd));
    tracep->fullBit(oldp+82,(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_passMode));
    tracep->fullBit(oldp+83,(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_passValid));
    tracep->fullCData(oldp+84,(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_onceMode),3);
    tracep->fullBit(oldp+85,(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_onceValid));
    tracep->fullBit(oldp+86,(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_mainCompare));
    tracep->fullBit(oldp+87,(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_counterCompare));
    tracep->fullCData(oldp+88,(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_mainDiff),8);
    tracep->fullCData(oldp+89,(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_counterDiff),8);
    tracep->fullBit(oldp+90,(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_twiceCompValid));
    tracep->fullCData(oldp+91,(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_twiceMode),3);
    tracep->fullCData(oldp+92,(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferOne_port0),8);
    tracep->fullCData(oldp+93,(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferOne_port1),8);
    tracep->fullCData(oldp+94,(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferTwo_port0),8);
    tracep->fullCData(oldp+95,(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferTwo_port1),8);
    tracep->fullBit(oldp+96,(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_frameStart));
    tracep->fullBit(oldp+97,(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_rowEnd));
    tracep->fullBit(oldp+98,(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_passMode));
    tracep->fullBit(oldp+99,(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_passValid));
    tracep->fullCData(oldp+100,(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_onceMode),3);
    tracep->fullBit(oldp+101,(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_onceValid));
    tracep->fullBit(oldp+102,(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_mainCompare));
    tracep->fullCData(oldp+103,(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_mainDiff),8);
    tracep->fullBit(oldp+104,(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_twiceCompValid));
    tracep->fullCData(oldp+105,(vlSelf->SuperResolutionPart1__DOT__controlStream_rData_twiceMode),3);
    tracep->fullCData(oldp+106,(vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_rData),8);
    tracep->fullCData(oldp+107,(vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_rData),8);
    tracep->fullCData(oldp+108,(vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_rData),8);
    tracep->fullCData(oldp+109,(vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_rData),8);
    tracep->fullBit(oldp+110,(((IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferOne_port1) 
                               <= (IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferOne_port0))));
    tracep->fullBit(oldp+111,(((IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferTwo_port1) 
                               <= (IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferTwo_port0))));
    tracep->fullBit(oldp+112,(((IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferTwo_port0) 
                               <= (IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferOne_port0))));
    tracep->fullBit(oldp+113,(((IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferOne_port0) 
                               <= (IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferTwo_port0))));
    tracep->fullBit(oldp+114,(((IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferOne_port1) 
                               <= (IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferTwo_port1))));
    tracep->fullBit(oldp+115,(((IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferTwo_port1) 
                               <= (IData)(vlSelf->SuperResolutionPart1__DOT___zz_lineBufferOne_port1))));
    tracep->fullBit(oldp+116,(vlSelf->SuperResolutionPart1__DOT___zz_readStage_controlPipe_translated_payload_mainCompare));
    tracep->fullBit(oldp+117,(vlSelf->SuperResolutionPart1__DOT___zz_readStage_controlPipe_translated_payload_counterCompare));
    tracep->fullBit(oldp+118,(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_frameStart));
    tracep->fullBit(oldp+119,(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_rowEnd));
    tracep->fullBit(oldp+120,(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_passMode));
    tracep->fullBit(oldp+121,(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_passValid));
    tracep->fullCData(oldp+122,(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_onceMode),3);
    tracep->fullBit(oldp+123,(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_onceValid));
    tracep->fullBit(oldp+124,(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_mainCompare));
    tracep->fullBit(oldp+125,(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_counterCompare));
    tracep->fullCData(oldp+126,(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_mainDiff),8);
    tracep->fullBit(oldp+127,(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_twiceCompValid));
    tracep->fullCData(oldp+128,(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_rData_twiceMode),3);
    tracep->fullCData(oldp+129,(vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_rData),8);
    tracep->fullCData(oldp+130,(vlSelf->SuperResolutionPart1__DOT__compareStage_counterOnePixelStream_rData),8);
    tracep->fullCData(oldp+131,(vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_rData),8);
    tracep->fullCData(oldp+132,(vlSelf->SuperResolutionPart1__DOT__compareStage_counterTwoPixelStream_rData),8);
    tracep->fullCData(oldp+133,(vlSelf->SuperResolutionPart1__DOT___zz_compareStage_controlPipe_translated_payload_mainDiff),8);
    tracep->fullCData(oldp+134,(vlSelf->SuperResolutionPart1__DOT___zz_compareStage_controlPipe_translated_payload_counterDiff),8);
    tracep->fullCData(oldp+135,(vlSelf->SuperResolutionPart1__DOT__diffStage_mainOnePixelStream_rData),8);
    tracep->fullCData(oldp+136,(vlSelf->SuperResolutionPart1__DOT__diffStage_counterOnePixelStream_rData),8);
    tracep->fullCData(oldp+137,(vlSelf->SuperResolutionPart1__DOT__diffStage_mainTwoPixelStream_rData),8);
    tracep->fullCData(oldp+138,(vlSelf->SuperResolutionPart1__DOT__diffStage_counterTwoPixelStream_rData),8);
    tracep->fullBit(oldp+139,(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_frameStart));
    tracep->fullBit(oldp+140,(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_rowEnd));
    tracep->fullBit(oldp+141,(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_passMode));
    tracep->fullBit(oldp+142,(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_passValid));
    tracep->fullCData(oldp+143,(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_onceMode),3);
    tracep->fullBit(oldp+144,(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_onceValid));
    tracep->fullBit(oldp+145,(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_mainCompare));
    tracep->fullBit(oldp+146,(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_counterCompare));
    tracep->fullCData(oldp+147,(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_mainDiff),8);
    tracep->fullCData(oldp+148,(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_counterDiff),8);
    tracep->fullBit(oldp+149,(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_twiceCompValid));
    tracep->fullCData(oldp+150,(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_twiceMode),3);
    tracep->fullBit(oldp+151,(((IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_counterDiff) 
                               <= (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_mainDiff))));
    tracep->fullCData(oldp+152,(vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_rData),8);
    tracep->fullBit(oldp+153,(vlSelf->SuperResolutionPart1__DOT__when_Stream_l434));
    tracep->fullCData(oldp+154,(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rData_pixel),8);
    tracep->fullBit(oldp+155,(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rData_frameStart));
    tracep->fullBit(oldp+156,(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rData_rowEnd));
    tracep->fullBit(oldp+157,(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rData_inpValid));
    tracep->fullCData(oldp+158,(vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_pixel),8);
    tracep->fullBit(oldp+159,(vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_frameStart));
    tracep->fullBit(oldp+160,(vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_rowEnd));
    tracep->fullBit(oldp+161,(vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_rData_inpValid));
    tracep->fullCData(oldp+162,(vlSelf->SuperResolutionPart1__DOT__lineBufferOne[0]),8);
    tracep->fullCData(oldp+163,(vlSelf->SuperResolutionPart1__DOT__lineBufferOne[1]),8);
    tracep->fullCData(oldp+164,(vlSelf->SuperResolutionPart1__DOT__lineBufferOne[2]),8);
    tracep->fullCData(oldp+165,(vlSelf->SuperResolutionPart1__DOT__lineBufferOne[3]),8);
    tracep->fullCData(oldp+166,(vlSelf->SuperResolutionPart1__DOT__lineBufferOne[4]),8);
    tracep->fullCData(oldp+167,(vlSelf->SuperResolutionPart1__DOT__lineBufferTwo[0]),8);
    tracep->fullCData(oldp+168,(vlSelf->SuperResolutionPart1__DOT__lineBufferTwo[1]),8);
    tracep->fullCData(oldp+169,(vlSelf->SuperResolutionPart1__DOT__lineBufferTwo[2]),8);
    tracep->fullCData(oldp+170,(vlSelf->SuperResolutionPart1__DOT__lineBufferTwo[3]),8);
    tracep->fullCData(oldp+171,(vlSelf->SuperResolutionPart1__DOT__lineBufferTwo[4]),8);
    tracep->fullBit(oldp+172,(vlSelf->SuperResolutionPart1__DOT__bufferRowCount_willIncrement));
    tracep->fullBit(oldp+173,(vlSelf->SuperResolutionPart1__DOT__bufferRowCount_willClear));
    tracep->fullCData(oldp+174,(vlSelf->SuperResolutionPart1__DOT__bufferRowCount_valueNext),3);
    tracep->fullBit(oldp+175,(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_willIncrement));
    tracep->fullBit(oldp+176,(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_willClear));
    tracep->fullCData(oldp+177,(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_valueNext),3);
    tracep->fullBit(oldp+178,(vlSelf->SuperResolutionPart1__DOT__pixelsStream_s2mPipe_ready));
    tracep->fullBit(oldp+179,(vlSelf->SuperResolutionPart1__DOT__passPixels_valid));
    tracep->fullBit(oldp+180,(vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l601));
    tracep->fullBit(oldp+181,(vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l613));
    tracep->fullCData(oldp+182,(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateNext),3);
    tracep->fullQData(oldp+183,(vlSelf->SuperResolutionPart1__DOT__controlStateMachine_stateNext_string),40);
    tracep->fullBit(oldp+185,(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_ready));
    tracep->fullBit(oldp+186,(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_input_ready));
    tracep->fullBit(oldp+187,(vlSelf->SuperResolutionPart1__DOT__bufferSwitch));
    tracep->fullCData(oldp+188,(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_value),3);
    tracep->fullBit(oldp+189,((4U == (IData)(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_value))));
    tracep->fullBit(oldp+190,(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_willIncrement));
    tracep->fullBit(oldp+191,(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_willClear));
    tracep->fullCData(oldp+192,(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_valueNext),4);
    tracep->fullBit(oldp+193,(vlSelf->SuperResolutionPart1__DOT__outRowCount_willIncrement));
    tracep->fullBit(oldp+194,(vlSelf->SuperResolutionPart1__DOT__outRowCount_willClear));
    tracep->fullCData(oldp+195,(vlSelf->SuperResolutionPart1__DOT__outRowCount_valueNext),4);
    tracep->fullCData(oldp+196,(vlSelf->SuperResolutionPart1__DOT__mainAddrOne),4);
    tracep->fullCData(oldp+197,(vlSelf->SuperResolutionPart1__DOT__counterAddrOne),4);
    tracep->fullCData(oldp+198,(vlSelf->SuperResolutionPart1__DOT__mainAddrTwo),4);
    tracep->fullCData(oldp+199,(vlSelf->SuperResolutionPart1__DOT__counterAddrTwo),4);
    tracep->fullBit(oldp+200,(vlSelf->SuperResolutionPart1__DOT__controlStream_ready));
    tracep->fullBit(oldp+201,(vlSelf->SuperResolutionPart1__DOT__controls_frameStart));
    tracep->fullBit(oldp+202,(vlSelf->SuperResolutionPart1__DOT__controls_rowEnd));
    tracep->fullBit(oldp+203,(vlSelf->SuperResolutionPart1__DOT__controls_passMode));
    tracep->fullBit(oldp+204,(vlSelf->SuperResolutionPart1__DOT__controls_passValid));
}

VL_ATTR_COLD void VSuperResolutionPart1___024root__trace_full_sub_1(VSuperResolutionPart1___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSuperResolutionPart1___024root__trace_full_sub_1\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+205,(vlSelf->SuperResolutionPart1__DOT__controls_onceMode),3);
    tracep->fullBit(oldp+206,(vlSelf->SuperResolutionPart1__DOT__controls_onceValid));
    tracep->fullBit(oldp+207,(vlSelf->SuperResolutionPart1__DOT__controls_twiceCompValid));
    tracep->fullCData(oldp+208,(vlSelf->SuperResolutionPart1__DOT__controls_twiceMode),3);
    tracep->fullBit(oldp+209,(vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_isFree));
    tracep->fullCData(oldp+210,((7U & (IData)(vlSelf->SuperResolutionPart1__DOT__mainAddrOne))),3);
    tracep->fullBit(oldp+211,(vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_isFree));
    tracep->fullCData(oldp+212,((7U & (IData)(vlSelf->SuperResolutionPart1__DOT__counterAddrOne))),3);
    tracep->fullBit(oldp+213,(vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_isFree));
    tracep->fullCData(oldp+214,((7U & (IData)(vlSelf->SuperResolutionPart1__DOT__mainAddrTwo))),3);
    tracep->fullBit(oldp+215,(vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_isFree));
    tracep->fullCData(oldp+216,((7U & (IData)(vlSelf->SuperResolutionPart1__DOT__counterAddrTwo))),3);
    tracep->fullBit(oldp+217,(vlSelf->SuperResolutionPart1__DOT__readStage_mainOnePixelStream_ready));
    tracep->fullBit(oldp+218,(vlSelf->SuperResolutionPart1__DOT__readStage_counterOnePixelStream_ready));
    tracep->fullBit(oldp+219,(vlSelf->SuperResolutionPart1__DOT__readStage_mainTwoPixelStream_ready));
    tracep->fullBit(oldp+220,(vlSelf->SuperResolutionPart1__DOT__readStage_counterTwoPixelStream_ready));
    tracep->fullBit(oldp+221,(vlSelf->SuperResolutionPart1__DOT__readStage_controlPipe_translated_ready));
    tracep->fullBit(oldp+222,(vlSelf->SuperResolutionPart1__DOT__compareStage_mainOnePixelStream_ready));
    tracep->fullBit(oldp+223,(vlSelf->SuperResolutionPart1__DOT__compareStage_counterOnePixelStream_ready));
    tracep->fullBit(oldp+224,(vlSelf->SuperResolutionPart1__DOT__compareStage_mainTwoPixelStream_ready));
    tracep->fullBit(oldp+225,(vlSelf->SuperResolutionPart1__DOT__compareStage_counterTwoPixelStream_ready));
    tracep->fullBit(oldp+226,(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_ready));
    tracep->fullBit(oldp+227,(vlSelf->SuperResolutionPart1__DOT__diffStage_mainOnePixelStream_ready));
    tracep->fullBit(oldp+228,(vlSelf->SuperResolutionPart1__DOT__diffStage_counterOnePixelStream_ready));
    tracep->fullBit(oldp+229,(vlSelf->SuperResolutionPart1__DOT__diffStage_mainTwoPixelStream_ready));
    tracep->fullBit(oldp+230,(vlSelf->SuperResolutionPart1__DOT__diffStage_counterTwoPixelStream_ready));
    tracep->fullBit(oldp+231,(vlSelf->SuperResolutionPart1__DOT___zz_resultStage_mainOnePixelStream_ready_2));
    tracep->fullBit(oldp+232,(vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_ready));
    tracep->fullCData(oldp+233,(vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_payload),8);
    tracep->fullBit(oldp+234,(vlSelf->SuperResolutionPart1__DOT__resultsJoin_valid));
    tracep->fullBit(oldp+235,((1U & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rValid)))));
    tracep->fullBit(oldp+236,(((IData)(vlSelf->SuperResolutionPart1__DOT__resultsJoin_valid) 
                               | (IData)(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rValid))));
    tracep->fullBit(oldp+237,(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rValid));
    tracep->fullBit(oldp+238,(vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l617));
    tracep->fullBit(oldp+239,(vlSelf->SuperResolutionPart1__DOT__when_SuperResolutionPart1_l927));
    tracep->fullBit(oldp+240,(vlSelf->SuperResolutionPart1__DOT__controlStream_fire_6));
    tracep->fullBit(oldp+241,((0U == (IData)(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_value))));
    tracep->fullBit(oldp+242,(vlSelf->pixelsIn_valid));
    tracep->fullBit(oldp+243,(vlSelf->pixelsIn_ready));
    tracep->fullCData(oldp+244,(vlSelf->pixelsIn_payload_pixel),8);
    tracep->fullBit(oldp+245,(vlSelf->pixelsIn_payload_frameStart));
    tracep->fullBit(oldp+246,(vlSelf->pixelsIn_payload_rowEnd));
    tracep->fullBit(oldp+247,(vlSelf->StartIn));
    tracep->fullBit(oldp+248,(vlSelf->inpTwoDoneIn));
    tracep->fullBit(oldp+249,(vlSelf->inpThreeDoneIn));
    tracep->fullBit(oldp+250,(vlSelf->pixelsOut_valid));
    tracep->fullBit(oldp+251,(vlSelf->pixelsOut_ready));
    tracep->fullCData(oldp+252,(vlSelf->pixelsOut_payload_pixel),8);
    tracep->fullBit(oldp+253,(vlSelf->pixelsOut_payload_frameStart));
    tracep->fullBit(oldp+254,(vlSelf->pixelsOut_payload_rowEnd));
    tracep->fullBit(oldp+255,(vlSelf->pixelsOut_payload_inpValid));
    tracep->fullBit(oldp+256,(vlSelf->startOut));
    tracep->fullBit(oldp+257,(vlSelf->inpDoneOut));
    tracep->fullCData(oldp+258,(vlSelf->thresholdIn),8);
    tracep->fullCData(oldp+259,(vlSelf->widthIn),3);
    tracep->fullCData(oldp+260,(vlSelf->heightIn),3);
    tracep->fullBit(oldp+261,(vlSelf->clk));
    tracep->fullBit(oldp+262,(vlSelf->reset));
    tracep->fullBit(oldp+263,(((IData)(vlSelf->StartIn) 
                               & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__internalDone)))));
    tracep->fullBit(oldp+264,(((IData)(vlSelf->pixelsIn_valid) 
                               & (IData)(vlSelf->pixelsIn_ready))));
    tracep->fullBit(oldp+265,(((~ (IData)(vlSelf->inpTwoDoneIn)) 
                               & ((IData)(vlSelf->pixelsIn_valid) 
                                  & (IData)(vlSelf->pixelsIn_ready)))));
    tracep->fullBit(oldp+266,(((IData)(vlSelf->pixelsIn_payload_frameStart) 
                               & ((IData)(vlSelf->pixelsIn_valid) 
                                  & (IData)(vlSelf->pixelsIn_ready)))));
    tracep->fullBit(oldp+267,((1U & (~ (IData)(vlSelf->StartIn)))));
    tracep->fullBit(oldp+268,(((5U == (IData)(vlSelf->SuperResolutionPart1__DOT__bufferRowCount_value)) 
                               & (IData)(vlSelf->SuperResolutionPart1__DOT__bufferRowCount_willIncrement))));
    tracep->fullBit(oldp+269,(((IData)(vlSelf->StartIn) 
                               & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__holdBuffer)))));
    tracep->fullBit(oldp+270,((1U & ((~ (IData)(vlSelf->StartIn)) 
                                     | (IData)(vlSelf->SuperResolutionPart1__DOT__holdBuffer)))));
    tracep->fullBit(oldp+271,(((4U == (IData)(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_value)) 
                               & (IData)(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_willIncrement))));
    tracep->fullBit(oldp+272,(((IData)(vlSelf->SuperResolutionPart1__DOT__inpThreshold) 
                               <= (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_mainDiff))));
    tracep->fullBit(oldp+273,((((IData)(vlSelf->SuperResolutionPart1__DOT__inpThreshold) 
                                <= (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_mainDiff)) 
                               & ((IData)(vlSelf->SuperResolutionPart1__DOT__inpThreshold) 
                                  <= (IData)(vlSelf->SuperResolutionPart1__DOT__compareStage_controlPipe_translated_rData_counterDiff)))));
    tracep->fullCData(oldp+274,(((IData)(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rValid)
                                  ? (IData)(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rData_pixel)
                                  : (IData)(vlSelf->SuperResolutionPart1__DOT__resultStage_pixelStream_rData))),8);
    tracep->fullBit(oldp+275,(((IData)(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rValid)
                                ? (IData)(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rData_frameStart)
                                : (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_frameStart))));
    tracep->fullBit(oldp+276,(((IData)(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rValid)
                                ? (IData)(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rData_rowEnd)
                                : (IData)(vlSelf->SuperResolutionPart1__DOT__diffStage_controlPipe_fork_io_outputs_0_rData_rowEnd))));
    tracep->fullBit(oldp+277,((1U & ((~ (IData)(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rValid)) 
                                     | (IData)(vlSelf->SuperResolutionPart1__DOT__pixelsStream_rData_inpValid)))));
    tracep->fullBit(oldp+278,((((IData)(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_value) 
                                == (7U & ((IData)(vlSelf->SuperResolutionPart1__DOT__bmpWidth) 
                                          - (IData)(2U)))) 
                               & (IData)(vlSelf->SuperResolutionPart1__DOT__passPixels_valid))));
    tracep->fullBit(oldp+279,(((((IData)(vlSelf->SuperResolutionPart1__DOT__bufferRowCount_value) 
                                 == (7U & ((IData)(vlSelf->SuperResolutionPart1__DOT__bmpHeight) 
                                           - (IData)(2U)))) 
                                & (IData)(vlSelf->SuperResolutionPart1__DOT__bufferReachRowEnd)) 
                               & (IData)(vlSelf->SuperResolutionPart1__DOT__passPixels_valid))));
    tracep->fullBit(oldp+280,(((IData)(vlSelf->pixelsIn_payload_rowEnd) 
                               & (IData)(vlSelf->SuperResolutionPart1__DOT__passPixels_valid))));
    tracep->fullBit(oldp+281,((((IData)(vlSelf->SuperResolutionPart1__DOT__bufferWAddr_value) 
                                == (0xfU & (((IData)(2U) 
                                             + (IData)(vlSelf->SuperResolutionPart1__DOT__outPixelAddr_value)) 
                                            >> 1U))) 
                               & (~ (IData)(vlSelf->SuperResolutionPart1__DOT__passPixels_valid)))));
    tracep->fullCData(oldp+282,(0U),3);
    tracep->fullCData(oldp+283,(1U),3);
    tracep->fullCData(oldp+284,(2U),3);
    tracep->fullCData(oldp+285,(3U),3);
    tracep->fullCData(oldp+286,(4U),3);
    tracep->fullBit(oldp+287,(1U));
    tracep->fullBit(oldp+288,(0U));
    tracep->fullCData(oldp+289,(0U),8);
}
