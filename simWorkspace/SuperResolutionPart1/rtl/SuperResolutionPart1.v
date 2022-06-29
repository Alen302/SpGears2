// Generator : SpinalHDL v1.7.0b    git head : 541894e01cf6b5ef03f924225e4f769fb167dea8
// Component : SuperResolutionPart1
// Git hash  : ff52db1e704c4e63bb498022240ed39576d2ed80

`timescale 1ns/1ps

module SuperResolutionPart1 (
  input               pixelsIn_valid,
  output reg          pixelsIn_ready,
  input      [7:0]    pixelsIn_payload_pixel,
  input               pixelsIn_payload_frameStart,
  input               pixelsIn_payload_rowEnd,
  input               StartIn,
  input               inpTwoDoneIn,
  input               inpThreeDoneIn,
  output reg          pixelsOut_valid,
  input               pixelsOut_ready,
  output reg [7:0]    pixelsOut_payload_pixel,
  output reg          pixelsOut_payload_frameStart,
  output reg          pixelsOut_payload_rowEnd,
  output reg          pixelsOut_payload_inpValid,
  output reg          startOut,
  output reg          inpDoneOut,
  input      [7:0]    thresholdIn,
  input      [2:0]    widthIn,
  input      [2:0]    heightIn,
  input               clk,
  input               reset
);
  localparam controlStateMachine_enumDef_BOOT = 3'd0;
  localparam controlStateMachine_enumDef_HOLD = 3'd1;
  localparam controlStateMachine_enumDef_PASS = 3'd2;
  localparam controlStateMachine_enumDef_ONCE = 3'd3;
  localparam controlStateMachine_enumDef_TWICE = 3'd4;

  reg                 diffStage_controlPipe_fork_io_outputs_0_ready;
  reg        [7:0]    _zz_lineBufferOne_port0;
  reg        [7:0]    _zz_lineBufferOne_port1;
  reg        [7:0]    _zz_lineBufferTwo_port0;
  reg        [7:0]    _zz_lineBufferTwo_port1;
  wire                diffStage_controlPipe_fork_io_input_ready;
  wire                diffStage_controlPipe_fork_io_outputs_0_valid;
  wire                diffStage_controlPipe_fork_io_outputs_0_payload_frameStart;
  wire                diffStage_controlPipe_fork_io_outputs_0_payload_rowEnd;
  wire                diffStage_controlPipe_fork_io_outputs_0_payload_passMode;
  wire                diffStage_controlPipe_fork_io_outputs_0_payload_passValid;
  wire       [2:0]    diffStage_controlPipe_fork_io_outputs_0_payload_onceMode;
  wire                diffStage_controlPipe_fork_io_outputs_0_payload_onceValid;
  wire                diffStage_controlPipe_fork_io_outputs_0_payload_mainCompare;
  wire                diffStage_controlPipe_fork_io_outputs_0_payload_counterCompare;
  wire       [7:0]    diffStage_controlPipe_fork_io_outputs_0_payload_mainDiff;
  wire       [7:0]    diffStage_controlPipe_fork_io_outputs_0_payload_counterDiff;
  wire                diffStage_controlPipe_fork_io_outputs_0_payload_twiceCompValid;
  wire       [2:0]    diffStage_controlPipe_fork_io_outputs_0_payload_twiceMode;
  wire                diffStage_controlPipe_fork_io_outputs_1_valid;
  wire                diffStage_controlPipe_fork_io_outputs_1_payload_frameStart;
  wire                diffStage_controlPipe_fork_io_outputs_1_payload_rowEnd;
  wire                diffStage_controlPipe_fork_io_outputs_1_payload_passMode;
  wire                diffStage_controlPipe_fork_io_outputs_1_payload_passValid;
  wire       [2:0]    diffStage_controlPipe_fork_io_outputs_1_payload_onceMode;
  wire                diffStage_controlPipe_fork_io_outputs_1_payload_onceValid;
  wire                diffStage_controlPipe_fork_io_outputs_1_payload_mainCompare;
  wire                diffStage_controlPipe_fork_io_outputs_1_payload_counterCompare;
  wire       [7:0]    diffStage_controlPipe_fork_io_outputs_1_payload_mainDiff;
  wire       [7:0]    diffStage_controlPipe_fork_io_outputs_1_payload_counterDiff;
  wire                diffStage_controlPipe_fork_io_outputs_1_payload_twiceCompValid;
  wire       [2:0]    diffStage_controlPipe_fork_io_outputs_1_payload_twiceMode;
  wire       [2:0]    _zz_bufferRowCount_valueNext;
  wire       [0:0]    _zz_bufferRowCount_valueNext_1;
  wire       [2:0]    _zz_bufferWAddr_valueNext;
  wire       [0:0]    _zz_bufferWAddr_valueNext_1;
  wire       [3:0]    _zz_outPixelAddr_valueNext;
  wire       [0:0]    _zz_outPixelAddr_valueNext_1;
  wire       [3:0]    _zz_outRowCount_valueNext;
  wire       [0:0]    _zz_outRowCount_valueNext_1;
  wire       [8:0]    _zz_resultStage_pixelStream_payload;
  wire       [8:0]    _zz_resultStage_pixelStream_payload_1;
  wire       [8:0]    _zz_resultStage_pixelStream_payload_2;
  wire       [8:0]    _zz_resultStage_pixelStream_payload_3;
  wire       [8:0]    _zz_resultStage_pixelStream_payload_4;
  wire       [8:0]    _zz_resultStage_pixelStream_payload_5;
  wire       [8:0]    _zz_resultStage_pixelStream_payload_6;
  wire       [8:0]    _zz_resultStage_pixelStream_payload_7;
  wire       [8:0]    _zz_resultStage_pixelStream_payload_8;
  wire       [8:0]    _zz_resultStage_pixelStream_payload_9;
  wire       [8:0]    _zz_resultStage_pixelStream_payload_10;
  wire       [8:0]    _zz_resultStage_pixelStream_payload_11;
  wire       [8:0]    _zz_resultStage_pixelStream_payload_12;
  wire       [8:0]    _zz_resultStage_pixelStream_payload_13;
  wire       [8:0]    _zz_resultStage_pixelStream_payload_14;
  wire       [8:0]    _zz_resultStage_pixelStream_payload_15;
  wire       [8:0]    _zz_resultStage_pixelStream_payload_16;
  wire       [8:0]    _zz_resultStage_pixelStream_payload_17;
  wire       [8:0]    _zz_resultStage_pixelStream_payload_18;
  wire       [8:0]    _zz_resultStage_pixelStream_payload_19;
  wire       [2:0]    _zz_when_SuperResolutionPart1_l597;
  wire       [2:0]    _zz_when_SuperResolutionPart1_l598;
  wire       [3:0]    _zz_when_SuperResolutionPart1_l617;
  wire       [7:0]    _zz_lineBufferTwo_port;
  wire                _zz_lineBufferTwo_port_1;
  wire       [7:0]    _zz_lineBufferOne_port;
  wire                _zz_lineBufferOne_port_1;
  wire       [3:0]    _zz_switch_SuperResolutionPart1_l653;
  wire       [3:0]    _zz_switch_SuperResolutionPart1_l656;
  wire       [3:0]    _zz_switch_SuperResolutionPart1_l669;
  wire       [4:0]    _zz_when_SuperResolutionPart1_l687;
  wire       [4:0]    _zz_when_SuperResolutionPart1_l687_1;
  wire       [4:0]    _zz_switch_SuperResolutionPart1_l690;
  wire       [4:0]    _zz_switch_SuperResolutionPart1_l690_1;
  wire       [4:0]    _zz_switch_SuperResolutionPart1_l690_2;
  wire       [4:0]    _zz_switch_SuperResolutionPart1_l690_3;
  wire       [2:0]    _zz_switch_SuperResolutionPart1_l690_4;
  wire       [4:0]    _zz_when_SuperResolutionPart1_l710;
  wire       [4:0]    _zz_when_SuperResolutionPart1_l710_1;
  wire       [4:0]    _zz_when_SuperResolutionPart1_l710_2;
  wire       [4:0]    _zz_when_SuperResolutionPart1_l711;
  wire       [4:0]    _zz_when_SuperResolutionPart1_l711_1;
  wire       [4:0]    _zz_when_SuperResolutionPart1_l711_2;
  wire       [3:0]    _zz_switch_SuperResolutionPart1_l743;
  wire       [4:0]    _zz_when_SuperResolutionPart1_l750;
  wire       [3:0]    _zz_when_SuperResolutionPart1_l750_1;
  wire       [4:0]    _zz_when_SuperResolutionPart1_l750_2;
  wire       [3:0]    _zz_mainAddrOne;
  wire       [3:0]    _zz_counterAddrOne;
  wire       [4:0]    _zz_counterAddrOne_1;
  wire       [4:0]    _zz_counterAddrOne_2;
  wire       [4:0]    _zz_counterAddrOne_3;
  wire       [1:0]    _zz_counterAddrOne_4;
  wire       [0:0]    _zz_controls_onceMode;
  wire       [3:0]    _zz_mainAddrTwo;
  wire       [3:0]    _zz_counterAddrTwo;
  wire       [4:0]    _zz_counterAddrTwo_1;
  wire       [4:0]    _zz_counterAddrTwo_2;
  wire       [4:0]    _zz_counterAddrTwo_3;
  wire       [1:0]    _zz_counterAddrTwo_4;
  wire       [4:0]    _zz_switch_SuperResolutionPart1_l790;
  wire       [4:0]    _zz_switch_SuperResolutionPart1_l790_1;
  wire       [4:0]    _zz_switch_SuperResolutionPart1_l790_2;
  wire       [4:0]    _zz_switch_SuperResolutionPart1_l790_3;
  wire       [2:0]    _zz_switch_SuperResolutionPart1_l790_4;
  wire       [1:0]    _zz_controls_onceMode_1;
  wire       [1:0]    _zz_controls_onceMode_2;
  wire       [4:0]    _zz_when_SuperResolutionPart1_l818;
  wire       [4:0]    _zz_when_SuperResolutionPart1_l818_1;
  wire       [4:0]    _zz_when_SuperResolutionPart1_l818_2;
  wire       [4:0]    _zz_when_SuperResolutionPart1_l819;
  wire       [4:0]    _zz_when_SuperResolutionPart1_l819_1;
  wire       [4:0]    _zz_when_SuperResolutionPart1_l819_2;
  wire       [3:0]    _zz_mainAddrTwo_1;
  wire       [3:0]    _zz_mainAddrTwo_2;
  wire       [4:0]    _zz_counterAddrTwo_5;
  wire       [4:0]    _zz_counterAddrTwo_6;
  wire       [4:0]    _zz_counterAddrTwo_7;
  wire       [1:0]    _zz_counterAddrTwo_8;
  wire       [3:0]    _zz_mainAddrOne_1;
  wire       [3:0]    _zz_mainAddrOne_2;
  wire       [4:0]    _zz_counterAddrOne_5;
  wire       [4:0]    _zz_counterAddrOne_6;
  wire       [4:0]    _zz_counterAddrOne_7;
  wire       [1:0]    _zz_counterAddrOne_8;
  wire       [3:0]    _zz_mainAddrOne_3;
  wire       [3:0]    _zz_counterAddrTwo_9;
  wire       [3:0]    _zz_mainAddrTwo_3;
  wire       [3:0]    _zz_counterAddrOne_9;
  wire       [4:0]    _zz_mainAddrTwo_4;
  wire       [4:0]    _zz_mainAddrTwo_5;
  wire       [4:0]    _zz_mainAddrTwo_6;
  wire       [1:0]    _zz_mainAddrTwo_7;
  wire       [4:0]    _zz_counterAddrOne_10;
  wire       [4:0]    _zz_counterAddrOne_11;
  wire       [4:0]    _zz_counterAddrOne_12;
  wire       [1:0]    _zz_counterAddrOne_13;
  wire       [3:0]    _zz_mainAddrTwo_8;
  wire       [3:0]    _zz_counterAddrOne_14;
  wire       [3:0]    _zz_mainAddrOne_4;
  wire       [3:0]    _zz_counterAddrTwo_10;
  wire       [4:0]    _zz_mainAddrOne_5;
  wire       [4:0]    _zz_mainAddrOne_6;
  wire       [4:0]    _zz_mainAddrOne_7;
  wire       [1:0]    _zz_mainAddrOne_8;
  wire       [4:0]    _zz_counterAddrTwo_11;
  wire       [4:0]    _zz_counterAddrTwo_12;
  wire       [4:0]    _zz_counterAddrTwo_13;
  wire       [1:0]    _zz_counterAddrTwo_14;
  wire       [4:0]    _zz_when_SuperResolutionPart1_l924;
  wire       [4:0]    _zz_when_SuperResolutionPart1_l924_1;
  wire       [4:0]    _zz_when_SuperResolutionPart1_l924_2;
  wire       [4:0]    _zz_when_SuperResolutionPart1_l925;
  wire       [4:0]    _zz_when_SuperResolutionPart1_l925_1;
  wire       [4:0]    _zz_when_SuperResolutionPart1_l925_2;
  reg                 inpDone;
  reg                 internalDone;
  reg                 startRead;
  wire                when_SuperResolutionPart1_l81;
  reg                 slaveStart;
  wire                pixelsIn_fire;
  wire                when_SuperResolutionPart1_l84;
  reg                 frameStart;
  wire                pixelsIn_fire_1;
  wire                when_SuperResolutionPart1_l87;
  reg        [7:0]    inpThreshold;
  reg        [2:0]    bmpWidth;
  reg        [2:0]    bmpHeight;
  reg                 holdBuffer;
  wire                when_SuperResolutionPart1_l99;
  reg                 bufferRowCount_willIncrement;
  reg                 bufferRowCount_willClear;
  reg        [2:0]    bufferRowCount_valueNext;
  reg        [2:0]    bufferRowCount_value;
  wire                bufferRowCount_willOverflowIfInc;
  wire                bufferRowCount_willOverflow;
  reg                 bufferEnable;
  wire                when_SuperResolutionPart1_l105;
  wire                when_SuperResolutionPart1_l105_1;
  reg                 bufferSwitch;
  wire                when_SuperResolutionPart1_l108;
  reg                 nextRowBuffer;
  wire                when_SuperResolutionPart1_l111;
  reg                 bufferReuse;
  reg                 bufferWAddr_willIncrement;
  reg                 bufferWAddr_willClear;
  reg        [2:0]    bufferWAddr_valueNext;
  reg        [2:0]    bufferWAddr_value;
  wire                bufferWAddr_willOverflowIfInc;
  wire                bufferWAddr_willOverflow;
  reg                 outPixelAddr_willIncrement;
  reg                 outPixelAddr_willClear;
  reg        [3:0]    outPixelAddr_valueNext;
  reg        [3:0]    outPixelAddr_value;
  wire                outPixelAddr_willOverflowIfInc;
  wire                outPixelAddr_willOverflow;
  reg                 outRowCount_willIncrement;
  reg                 outRowCount_willClear;
  reg        [3:0]    outRowCount_valueNext;
  reg        [3:0]    outRowCount_value;
  wire                outRowCount_willOverflowIfInc;
  wire                outRowCount_willOverflow;
  reg                 outReachRowEnd;
  reg                 outReachFinalRow;
  reg                 bufferReachRowEnd;
  reg                 bufferReachFinalRow;
  reg        [3:0]    mainAddrOne;
  reg        [3:0]    counterAddrOne;
  reg        [3:0]    mainAddrTwo;
  reg        [3:0]    counterAddrTwo;
  wire                validStream_valid;
  reg                 validStream_ready;
  wire                controlStream_valid;
  reg                 controlStream_ready;
  wire                controlStream_payload_frameStart;
  wire                controlStream_payload_rowEnd;
  wire                controlStream_payload_passMode;
  wire                controlStream_payload_passValid;
  wire       [2:0]    controlStream_payload_onceMode;
  wire                controlStream_payload_onceValid;
  wire                controlStream_payload_mainCompare;
  wire                controlStream_payload_counterCompare;
  wire       [7:0]    controlStream_payload_mainDiff;
  wire       [7:0]    controlStream_payload_counterDiff;
  wire                controlStream_payload_twiceCompValid;
  wire       [2:0]    controlStream_payload_twiceMode;
  reg                 controls_frameStart;
  reg                 controls_rowEnd;
  reg                 controls_passMode;
  reg                 controls_passValid;
  reg        [2:0]    controls_onceMode;
  reg                 controls_onceValid;
  wire                controls_mainCompare;
  wire                controls_counterCompare;
  wire       [7:0]    controls_mainDiff;
  wire       [7:0]    controls_counterDiff;
  reg                 controls_twiceCompValid;
  reg        [2:0]    controls_twiceMode;
  wire       [29:0]   _zz_controls_frameStart;
  wire                mainAddrOneStream_valid;
  wire                mainAddrOneStream_ready;
  wire       [2:0]    mainAddrOneStream_payload;
  wire                counterAddrOneStream_valid;
  wire                counterAddrOneStream_ready;
  wire       [2:0]    counterAddrOneStream_payload;
  wire                mainAddrTwoStream_valid;
  wire                mainAddrTwoStream_ready;
  wire       [2:0]    mainAddrTwoStream_payload;
  wire                counterAddrTwoStream_valid;
  wire                counterAddrTwoStream_ready;
  wire       [2:0]    counterAddrTwoStream_payload;
  wire                readStage_mainOnePixelStream_valid;
  reg                 readStage_mainOnePixelStream_ready;
  wire       [7:0]    readStage_mainOnePixelStream_payload;
  reg                 _zz_readStage_mainOnePixelStream_valid;
  wire                readStage_mainOnePixelStream_isFree;
  wire                readStage_counterOnePixelStream_valid;
  reg                 readStage_counterOnePixelStream_ready;
  wire       [7:0]    readStage_counterOnePixelStream_payload;
  reg                 _zz_readStage_counterOnePixelStream_valid;
  wire                readStage_counterOnePixelStream_isFree;
  wire                readStage_mainTwoPixelStream_valid;
  reg                 readStage_mainTwoPixelStream_ready;
  wire       [7:0]    readStage_mainTwoPixelStream_payload;
  reg                 _zz_readStage_mainTwoPixelStream_valid;
  wire                readStage_mainTwoPixelStream_isFree;
  wire                readStage_counterTwoPixelStream_valid;
  reg                 readStage_counterTwoPixelStream_ready;
  wire       [7:0]    readStage_counterTwoPixelStream_payload;
  reg                 _zz_readStage_counterTwoPixelStream_valid;
  wire                readStage_counterTwoPixelStream_isFree;
  wire                readStage_controlPipe_valid;
  wire                readStage_controlPipe_ready;
  wire                readStage_controlPipe_payload_frameStart;
  wire                readStage_controlPipe_payload_rowEnd;
  wire                readStage_controlPipe_payload_passMode;
  wire                readStage_controlPipe_payload_passValid;
  wire       [2:0]    readStage_controlPipe_payload_onceMode;
  wire                readStage_controlPipe_payload_onceValid;
  wire                readStage_controlPipe_payload_mainCompare;
  wire                readStage_controlPipe_payload_counterCompare;
  wire       [7:0]    readStage_controlPipe_payload_mainDiff;
  wire       [7:0]    readStage_controlPipe_payload_counterDiff;
  wire                readStage_controlPipe_payload_twiceCompValid;
  wire       [2:0]    readStage_controlPipe_payload_twiceMode;
  reg                 controlStream_rValid;
  reg                 controlStream_rData_frameStart;
  reg                 controlStream_rData_rowEnd;
  reg                 controlStream_rData_passMode;
  reg                 controlStream_rData_passValid;
  reg        [2:0]    controlStream_rData_onceMode;
  reg                 controlStream_rData_onceValid;
  reg                 controlStream_rData_mainCompare;
  reg                 controlStream_rData_counterCompare;
  reg        [7:0]    controlStream_rData_mainDiff;
  reg        [7:0]    controlStream_rData_counterDiff;
  reg                 controlStream_rData_twiceCompValid;
  reg        [2:0]    controlStream_rData_twiceMode;
  wire                when_Stream_l368;
  wire                compareStage_mainOnePixelStream_valid;
  reg                 compareStage_mainOnePixelStream_ready;
  wire       [7:0]    compareStage_mainOnePixelStream_payload;
  reg                 readStage_mainOnePixelStream_rValid;
  reg        [7:0]    readStage_mainOnePixelStream_rData;
  wire                when_Stream_l368_1;
  wire                compareStage_counterOnePixelStream_valid;
  reg                 compareStage_counterOnePixelStream_ready;
  wire       [7:0]    compareStage_counterOnePixelStream_payload;
  reg                 readStage_counterOnePixelStream_rValid;
  reg        [7:0]    readStage_counterOnePixelStream_rData;
  wire                when_Stream_l368_2;
  wire                compareStage_mainTwoPixelStream_valid;
  reg                 compareStage_mainTwoPixelStream_ready;
  wire       [7:0]    compareStage_mainTwoPixelStream_payload;
  reg                 readStage_mainTwoPixelStream_rValid;
  reg        [7:0]    readStage_mainTwoPixelStream_rData;
  wire                when_Stream_l368_3;
  wire                compareStage_counterTwoPixelStream_valid;
  reg                 compareStage_counterTwoPixelStream_ready;
  wire       [7:0]    compareStage_counterTwoPixelStream_payload;
  reg                 readStage_counterTwoPixelStream_rValid;
  reg        [7:0]    readStage_counterTwoPixelStream_rData;
  wire                when_Stream_l368_4;
  reg                 _zz_readStage_controlPipe_translated_payload_mainCompare;
  reg                 _zz_readStage_controlPipe_translated_payload_counterCompare;
  wire                when_SuperResolutionPart1_l208;
  wire                when_SuperResolutionPart1_l216;
  wire                when_SuperResolutionPart1_l224;
  wire                when_SuperResolutionPart1_l232;
  wire                when_SuperResolutionPart1_l252;
  wire                when_SuperResolutionPart1_l258;
  wire                when_SuperResolutionPart1_l266;
  wire                when_SuperResolutionPart1_l272;
  wire                when_SuperResolutionPart1_l284;
  wire                when_SuperResolutionPart1_l296;
  wire                readStage_controlPipe_translated_valid;
  reg                 readStage_controlPipe_translated_ready;
  wire                readStage_controlPipe_translated_payload_frameStart;
  wire                readStage_controlPipe_translated_payload_rowEnd;
  wire                readStage_controlPipe_translated_payload_passMode;
  wire                readStage_controlPipe_translated_payload_passValid;
  wire       [2:0]    readStage_controlPipe_translated_payload_onceMode;
  wire                readStage_controlPipe_translated_payload_onceValid;
  wire                readStage_controlPipe_translated_payload_mainCompare;
  wire                readStage_controlPipe_translated_payload_counterCompare;
  wire       [7:0]    readStage_controlPipe_translated_payload_mainDiff;
  wire       [7:0]    readStage_controlPipe_translated_payload_counterDiff;
  wire                readStage_controlPipe_translated_payload_twiceCompValid;
  wire       [2:0]    readStage_controlPipe_translated_payload_twiceMode;
  wire                compareStage_controlPipe_valid;
  wire                compareStage_controlPipe_ready;
  wire                compareStage_controlPipe_payload_frameStart;
  wire                compareStage_controlPipe_payload_rowEnd;
  wire                compareStage_controlPipe_payload_passMode;
  wire                compareStage_controlPipe_payload_passValid;
  wire       [2:0]    compareStage_controlPipe_payload_onceMode;
  wire                compareStage_controlPipe_payload_onceValid;
  wire                compareStage_controlPipe_payload_mainCompare;
  wire                compareStage_controlPipe_payload_counterCompare;
  wire       [7:0]    compareStage_controlPipe_payload_mainDiff;
  wire       [7:0]    compareStage_controlPipe_payload_counterDiff;
  wire                compareStage_controlPipe_payload_twiceCompValid;
  wire       [2:0]    compareStage_controlPipe_payload_twiceMode;
  reg                 readStage_controlPipe_translated_rValid;
  reg                 readStage_controlPipe_translated_rData_frameStart;
  reg                 readStage_controlPipe_translated_rData_rowEnd;
  reg                 readStage_controlPipe_translated_rData_passMode;
  reg                 readStage_controlPipe_translated_rData_passValid;
  reg        [2:0]    readStage_controlPipe_translated_rData_onceMode;
  reg                 readStage_controlPipe_translated_rData_onceValid;
  reg                 readStage_controlPipe_translated_rData_mainCompare;
  reg                 readStage_controlPipe_translated_rData_counterCompare;
  reg        [7:0]    readStage_controlPipe_translated_rData_mainDiff;
  reg        [7:0]    readStage_controlPipe_translated_rData_counterDiff;
  reg                 readStage_controlPipe_translated_rData_twiceCompValid;
  reg        [2:0]    readStage_controlPipe_translated_rData_twiceMode;
  wire                when_Stream_l368_5;
  wire                diffStage_mainOnePixelStream_valid;
  reg                 diffStage_mainOnePixelStream_ready;
  wire       [7:0]    diffStage_mainOnePixelStream_payload;
  reg                 compareStage_mainOnePixelStream_rValid;
  reg        [7:0]    compareStage_mainOnePixelStream_rData;
  wire                when_Stream_l368_6;
  wire                diffStage_counterOnePixelStream_valid;
  reg                 diffStage_counterOnePixelStream_ready;
  wire       [7:0]    diffStage_counterOnePixelStream_payload;
  reg                 compareStage_counterOnePixelStream_rValid;
  reg        [7:0]    compareStage_counterOnePixelStream_rData;
  wire                when_Stream_l368_7;
  wire                diffStage_mainTwoPixelStream_valid;
  reg                 diffStage_mainTwoPixelStream_ready;
  wire       [7:0]    diffStage_mainTwoPixelStream_payload;
  reg                 compareStage_mainTwoPixelStream_rValid;
  reg        [7:0]    compareStage_mainTwoPixelStream_rData;
  wire                when_Stream_l368_8;
  wire                diffStage_counterTwoPixelStream_valid;
  reg                 diffStage_counterTwoPixelStream_ready;
  wire       [7:0]    diffStage_counterTwoPixelStream_payload;
  reg                 compareStage_counterTwoPixelStream_rValid;
  reg        [7:0]    compareStage_counterTwoPixelStream_rData;
  wire                when_Stream_l368_9;
  reg        [7:0]    _zz_compareStage_controlPipe_translated_payload_mainDiff;
  reg        [7:0]    _zz_compareStage_controlPipe_translated_payload_counterDiff;
  wire                compareStage_controlPipe_translated_valid;
  reg                 compareStage_controlPipe_translated_ready;
  wire                compareStage_controlPipe_translated_payload_frameStart;
  wire                compareStage_controlPipe_translated_payload_rowEnd;
  wire                compareStage_controlPipe_translated_payload_passMode;
  wire                compareStage_controlPipe_translated_payload_passValid;
  wire       [2:0]    compareStage_controlPipe_translated_payload_onceMode;
  wire                compareStage_controlPipe_translated_payload_onceValid;
  wire                compareStage_controlPipe_translated_payload_mainCompare;
  wire                compareStage_controlPipe_translated_payload_counterCompare;
  wire       [7:0]    compareStage_controlPipe_translated_payload_mainDiff;
  wire       [7:0]    compareStage_controlPipe_translated_payload_counterDiff;
  wire                compareStage_controlPipe_translated_payload_twiceCompValid;
  wire       [2:0]    compareStage_controlPipe_translated_payload_twiceMode;
  wire                diffStage_controlPipe_valid;
  wire                diffStage_controlPipe_ready;
  wire                diffStage_controlPipe_payload_frameStart;
  wire                diffStage_controlPipe_payload_rowEnd;
  wire                diffStage_controlPipe_payload_passMode;
  wire                diffStage_controlPipe_payload_passValid;
  wire       [2:0]    diffStage_controlPipe_payload_onceMode;
  wire                diffStage_controlPipe_payload_onceValid;
  wire                diffStage_controlPipe_payload_mainCompare;
  wire                diffStage_controlPipe_payload_counterCompare;
  wire       [7:0]    diffStage_controlPipe_payload_mainDiff;
  wire       [7:0]    diffStage_controlPipe_payload_counterDiff;
  wire                diffStage_controlPipe_payload_twiceCompValid;
  wire       [2:0]    diffStage_controlPipe_payload_twiceMode;
  reg                 compareStage_controlPipe_translated_rValid;
  reg                 compareStage_controlPipe_translated_rData_frameStart;
  reg                 compareStage_controlPipe_translated_rData_rowEnd;
  reg                 compareStage_controlPipe_translated_rData_passMode;
  reg                 compareStage_controlPipe_translated_rData_passValid;
  reg        [2:0]    compareStage_controlPipe_translated_rData_onceMode;
  reg                 compareStage_controlPipe_translated_rData_onceValid;
  reg                 compareStage_controlPipe_translated_rData_mainCompare;
  reg                 compareStage_controlPipe_translated_rData_counterCompare;
  reg        [7:0]    compareStage_controlPipe_translated_rData_mainDiff;
  reg        [7:0]    compareStage_controlPipe_translated_rData_counterDiff;
  reg                 compareStage_controlPipe_translated_rData_twiceCompValid;
  reg        [2:0]    compareStage_controlPipe_translated_rData_twiceMode;
  wire                when_Stream_l368_10;
  wire                resultStage_mainOnePixelStream_valid;
  wire                resultStage_mainOnePixelStream_ready;
  wire       [7:0]    resultStage_mainOnePixelStream_payload;
  reg                 diffStage_mainOnePixelStream_rValid;
  reg        [7:0]    diffStage_mainOnePixelStream_rData;
  wire                when_Stream_l368_11;
  wire                resultStage_counterOnePixelStream_valid;
  wire                resultStage_counterOnePixelStream_ready;
  wire       [7:0]    resultStage_counterOnePixelStream_payload;
  reg                 diffStage_counterOnePixelStream_rValid;
  reg        [7:0]    diffStage_counterOnePixelStream_rData;
  wire                when_Stream_l368_12;
  wire                resultStage_mainTwoPixelStream_valid;
  wire                resultStage_mainTwoPixelStream_ready;
  wire       [7:0]    resultStage_mainTwoPixelStream_payload;
  reg                 diffStage_mainTwoPixelStream_rValid;
  reg        [7:0]    diffStage_mainTwoPixelStream_rData;
  wire                when_Stream_l368_13;
  wire                resultStage_counterTwoPixelStream_valid;
  wire                resultStage_counterTwoPixelStream_ready;
  wire       [7:0]    resultStage_counterTwoPixelStream_payload;
  reg                 diffStage_counterTwoPixelStream_rValid;
  reg        [7:0]    diffStage_counterTwoPixelStream_rData;
  wire                when_Stream_l368_14;
  wire                resultStage_controlPipe_valid;
  wire                resultStage_controlPipe_ready;
  wire                resultStage_controlPipe_payload_frameStart;
  wire                resultStage_controlPipe_payload_rowEnd;
  wire                resultStage_controlPipe_payload_passMode;
  wire                resultStage_controlPipe_payload_passValid;
  wire       [2:0]    resultStage_controlPipe_payload_onceMode;
  wire                resultStage_controlPipe_payload_onceValid;
  wire                resultStage_controlPipe_payload_mainCompare;
  wire                resultStage_controlPipe_payload_counterCompare;
  wire       [7:0]    resultStage_controlPipe_payload_mainDiff;
  wire       [7:0]    resultStage_controlPipe_payload_counterDiff;
  wire                resultStage_controlPipe_payload_twiceCompValid;
  wire       [2:0]    resultStage_controlPipe_payload_twiceMode;
  reg                 diffStage_controlPipe_fork_io_outputs_0_rValid;
  reg                 diffStage_controlPipe_fork_io_outputs_0_rData_frameStart;
  reg                 diffStage_controlPipe_fork_io_outputs_0_rData_rowEnd;
  reg                 diffStage_controlPipe_fork_io_outputs_0_rData_passMode;
  reg                 diffStage_controlPipe_fork_io_outputs_0_rData_passValid;
  reg        [2:0]    diffStage_controlPipe_fork_io_outputs_0_rData_onceMode;
  reg                 diffStage_controlPipe_fork_io_outputs_0_rData_onceValid;
  reg                 diffStage_controlPipe_fork_io_outputs_0_rData_mainCompare;
  reg                 diffStage_controlPipe_fork_io_outputs_0_rData_counterCompare;
  reg        [7:0]    diffStage_controlPipe_fork_io_outputs_0_rData_mainDiff;
  reg        [7:0]    diffStage_controlPipe_fork_io_outputs_0_rData_counterDiff;
  reg                 diffStage_controlPipe_fork_io_outputs_0_rData_twiceCompValid;
  reg        [2:0]    diffStage_controlPipe_fork_io_outputs_0_rData_twiceMode;
  wire                when_Stream_l368_15;
  wire                resultStage_pixelStream_valid;
  reg                 resultStage_pixelStream_ready;
  reg        [7:0]    resultStage_pixelStream_payload;
  wire                when_SuperResolutionPart1_l452;
  wire                when_SuperResolutionPart1_l460;
  wire                when_SuperResolutionPart1_l468;
  wire                when_SuperResolutionPart1_l476;
  wire                when_SuperResolutionPart1_l496;
  wire                switch_SuperResolutionPart1_l497;
  wire                switch_SuperResolutionPart1_l506;
  wire                when_SuperResolutionPart1_l518;
  wire                switch_SuperResolutionPart1_l519;
  wire                switch_SuperResolutionPart1_l528;
  wire                when_SuperResolutionPart1_l544;
  wire                when_SuperResolutionPart1_l556;
  wire                resultStage_resultStream_valid;
  wire                resultStage_resultStream_ready;
  wire       [7:0]    resultStage_resultStream_payload;
  reg                 resultStage_pixelStream_rValid;
  reg        [7:0]    resultStage_pixelStream_rData;
  wire                when_Stream_l368_16;
  wire                _zz_resultStage_mainOnePixelStream_ready;
  reg                 _zz_resultStage_mainOnePixelStream_ready_1;
  wire                _zz_resultStage_mainOnePixelStream_ready_2;
  wire                when_Stream_l434;
  reg                 resultsJoin_valid;
  wire                resultsJoin_ready;
  wire                pixelsStream_valid;
  wire                pixelsStream_ready;
  wire       [7:0]    pixelsStream_payload_pixel;
  wire                pixelsStream_payload_frameStart;
  wire                pixelsStream_payload_rowEnd;
  wire                pixelsStream_payload_inpValid;
  wire                pixelsStream_s2mPipe_valid;
  reg                 pixelsStream_s2mPipe_ready;
  wire       [7:0]    pixelsStream_s2mPipe_payload_pixel;
  wire                pixelsStream_s2mPipe_payload_frameStart;
  wire                pixelsStream_s2mPipe_payload_rowEnd;
  wire                pixelsStream_s2mPipe_payload_inpValid;
  reg                 pixelsStream_rValid;
  reg        [7:0]    pixelsStream_rData_pixel;
  reg                 pixelsStream_rData_frameStart;
  reg                 pixelsStream_rData_rowEnd;
  reg                 pixelsStream_rData_inpValid;
  wire                pixelsStream_s2mPipe_m2sPipe_valid;
  wire                pixelsStream_s2mPipe_m2sPipe_ready;
  wire       [7:0]    pixelsStream_s2mPipe_m2sPipe_payload_pixel;
  wire                pixelsStream_s2mPipe_m2sPipe_payload_frameStart;
  wire                pixelsStream_s2mPipe_m2sPipe_payload_rowEnd;
  wire                pixelsStream_s2mPipe_m2sPipe_payload_inpValid;
  reg                 pixelsStream_s2mPipe_rValid;
  reg        [7:0]    pixelsStream_s2mPipe_rData_pixel;
  reg                 pixelsStream_s2mPipe_rData_frameStart;
  reg                 pixelsStream_s2mPipe_rData_rowEnd;
  reg                 pixelsStream_s2mPipe_rData_inpValid;
  wire                when_Stream_l368_17;
  wire                passPixels_valid;
  wire                passPixels_ready;
  wire       [7:0]    passPixels_payload_pixel;
  wire                passPixels_payload_frameStart;
  wire                passPixels_payload_rowEnd;
  wire                passPixels_fire;
  wire                when_SuperResolutionPart1_l597;
  wire                passPixels_fire_1;
  wire                when_SuperResolutionPart1_l598;
  wire                passPixels_fire_2;
  wire                when_SuperResolutionPart1_l601;
  wire                passPixels_fire_3;
  wire                when_SuperResolutionPart1_l612;
  wire                passPixels_fire_4;
  wire                when_SuperResolutionPart1_l613;
  wire                controlStream_fire;
  wire                when_SuperResolutionPart1_l617;
  wire                when_SuperResolutionPart1_l619;
  wire                passPixels_fire_5;
  wire                passPixels_fire_6;
  wire                passPixels_fire_7;
  wire                controlStateMachine_wantExit;
  reg                 controlStateMachine_wantStart;
  wire                controlStateMachine_wantKill;
  reg        [2:0]    controlStateMachine_stateReg;
  reg        [2:0]    controlStateMachine_stateNext;
  wire                switch_SuperResolutionPart1_l653;
  wire                passPixels_fire_8;
  wire                switch_SuperResolutionPart1_l656;
  wire                passPixels_fire_9;
  wire                switch_SuperResolutionPart1_l669;
  wire                controlStream_fire_1;
  wire                when_SuperResolutionPart1_l687;
  wire                passPixels_fire_10;
  wire                switch_SuperResolutionPart1_l690;
  wire                controlStream_fire_2;
  wire                when_SuperResolutionPart1_l707;
  wire                controlStream_fire_3;
  wire                when_SuperResolutionPart1_l710;
  wire                controlStream_fire_4;
  wire                when_SuperResolutionPart1_l711;
  wire                controlStream_fire_5;
  wire                when_SuperResolutionPart1_l713;
  wire                controlStream_fire_6;
  wire                switch_SuperResolutionPart1_l743;
  wire                controlStream_fire_7;
  wire                when_SuperResolutionPart1_l750;
  wire                controlStream_fire_8;
  wire                passPixels_fire_11;
  wire                switch_SuperResolutionPart1_l790;
  wire                controlStream_fire_9;
  wire                when_SuperResolutionPart1_l818;
  wire                controlStream_fire_10;
  wire                when_SuperResolutionPart1_l819;
  wire                controlStream_fire_11;
  wire                when_SuperResolutionPart1_l821;
  wire                controlStream_fire_12;
  wire                controlStream_fire_13;
  wire                switch_SuperResolutionPart1_l856;
  wire                controlStream_fire_14;
  wire                when_SuperResolutionPart1_l924;
  wire                controlStream_fire_15;
  wire                when_SuperResolutionPart1_l925;
  wire                controlStream_fire_16;
  wire                when_SuperResolutionPart1_l927;
  wire                controlStream_fire_17;
  `ifndef SYNTHESIS
  reg [39:0] controlStateMachine_stateReg_string;
  reg [39:0] controlStateMachine_stateNext_string;
  `endif

  reg [7:0] lineBufferOne [0:4];
  reg [7:0] lineBufferTwo [0:4];

  assign _zz_bufferRowCount_valueNext_1 = bufferRowCount_willIncrement;
  assign _zz_bufferRowCount_valueNext = {2'd0, _zz_bufferRowCount_valueNext_1};
  assign _zz_bufferWAddr_valueNext_1 = bufferWAddr_willIncrement;
  assign _zz_bufferWAddr_valueNext = {2'd0, _zz_bufferWAddr_valueNext_1};
  assign _zz_outPixelAddr_valueNext_1 = outPixelAddr_willIncrement;
  assign _zz_outPixelAddr_valueNext = {3'd0, _zz_outPixelAddr_valueNext_1};
  assign _zz_outRowCount_valueNext_1 = outRowCount_willIncrement;
  assign _zz_outRowCount_valueNext = {3'd0, _zz_outRowCount_valueNext_1};
  assign _zz_resultStage_pixelStream_payload = (_zz_resultStage_pixelStream_payload_1 / 2'b10);
  assign _zz_resultStage_pixelStream_payload_1 = ({1'b0,diffStage_mainOnePixelStream_payload} + {1'b0,diffStage_counterOnePixelStream_payload});
  assign _zz_resultStage_pixelStream_payload_2 = (_zz_resultStage_pixelStream_payload_3 / 2'b10);
  assign _zz_resultStage_pixelStream_payload_3 = ({1'b0,diffStage_mainTwoPixelStream_payload} + {1'b0,diffStage_counterTwoPixelStream_payload});
  assign _zz_resultStage_pixelStream_payload_4 = (_zz_resultStage_pixelStream_payload_5 / 2'b10);
  assign _zz_resultStage_pixelStream_payload_5 = ({1'b0,diffStage_mainOnePixelStream_payload} + {1'b0,diffStage_mainTwoPixelStream_payload});
  assign _zz_resultStage_pixelStream_payload_6 = (_zz_resultStage_pixelStream_payload_7 / 2'b10);
  assign _zz_resultStage_pixelStream_payload_7 = ({1'b0,diffStage_mainTwoPixelStream_payload} + {1'b0,diffStage_mainOnePixelStream_payload});
  assign _zz_resultStage_pixelStream_payload_8 = (_zz_resultStage_pixelStream_payload_9 / 2'b10);
  assign _zz_resultStage_pixelStream_payload_9 = ({1'b0,diffStage_counterOnePixelStream_payload} + {1'b0,diffStage_counterTwoPixelStream_payload});
  assign _zz_resultStage_pixelStream_payload_10 = (_zz_resultStage_pixelStream_payload_11 / 2'b10);
  assign _zz_resultStage_pixelStream_payload_11 = ({1'b0,diffStage_mainOnePixelStream_payload} + {1'b0,diffStage_mainTwoPixelStream_payload});
  assign _zz_resultStage_pixelStream_payload_12 = (_zz_resultStage_pixelStream_payload_13 / 2'b10);
  assign _zz_resultStage_pixelStream_payload_13 = ({1'b0,diffStage_counterOnePixelStream_payload} + {1'b0,diffStage_counterTwoPixelStream_payload});
  assign _zz_resultStage_pixelStream_payload_14 = (_zz_resultStage_pixelStream_payload_15 / 2'b10);
  assign _zz_resultStage_pixelStream_payload_15 = ({1'b0,diffStage_mainOnePixelStream_payload} + {1'b0,diffStage_mainTwoPixelStream_payload});
  assign _zz_resultStage_pixelStream_payload_16 = (_zz_resultStage_pixelStream_payload_17 / 2'b10);
  assign _zz_resultStage_pixelStream_payload_17 = ({1'b0,diffStage_mainTwoPixelStream_payload} + {1'b0,diffStage_counterTwoPixelStream_payload});
  assign _zz_resultStage_pixelStream_payload_18 = (_zz_resultStage_pixelStream_payload_19 / 2'b10);
  assign _zz_resultStage_pixelStream_payload_19 = ({1'b0,diffStage_mainOnePixelStream_payload} + {1'b0,diffStage_counterOnePixelStream_payload});
  assign _zz_when_SuperResolutionPart1_l597 = (bmpWidth - 3'b010);
  assign _zz_when_SuperResolutionPart1_l598 = (bmpHeight - 3'b010);
  assign _zz_when_SuperResolutionPart1_l617 = (outRowCount_value % 2'b10);
  assign _zz_switch_SuperResolutionPart1_l653 = (outRowCount_value % 2'b10);
  assign _zz_switch_SuperResolutionPart1_l656 = (outPixelAddr_value % 2'b10);
  assign _zz_switch_SuperResolutionPart1_l669 = (outPixelAddr_value % 2'b10);
  assign _zz_when_SuperResolutionPart1_l687 = {1'd0, outRowCount_value};
  assign _zz_when_SuperResolutionPart1_l687_1 = (2'b10 * bufferRowCount_value);
  assign _zz_switch_SuperResolutionPart1_l690 = {2'd0, bufferWAddr_value};
  assign _zz_switch_SuperResolutionPart1_l690_1 = (_zz_switch_SuperResolutionPart1_l690_2 / 2'b10);
  assign _zz_switch_SuperResolutionPart1_l690_2 = ({1'b0,outPixelAddr_value} + _zz_switch_SuperResolutionPart1_l690_3);
  assign _zz_switch_SuperResolutionPart1_l690_4 = {1'b0,2'b10};
  assign _zz_switch_SuperResolutionPart1_l690_3 = {2'd0, _zz_switch_SuperResolutionPart1_l690_4};
  assign _zz_when_SuperResolutionPart1_l710 = {1'd0, outPixelAddr_value};
  assign _zz_when_SuperResolutionPart1_l710_1 = (_zz_when_SuperResolutionPart1_l710_2 - 5'h02);
  assign _zz_when_SuperResolutionPart1_l710_2 = (2'b10 * bmpWidth);
  assign _zz_when_SuperResolutionPart1_l711 = {1'd0, outRowCount_value};
  assign _zz_when_SuperResolutionPart1_l711_1 = (_zz_when_SuperResolutionPart1_l711_2 - 5'h02);
  assign _zz_when_SuperResolutionPart1_l711_2 = (2'b10 * bmpHeight);
  assign _zz_switch_SuperResolutionPart1_l743 = (outRowCount_value % 2'b10);
  assign _zz_when_SuperResolutionPart1_l750_1 = (4'b0010 + outRowCount_value);
  assign _zz_when_SuperResolutionPart1_l750 = {1'd0, _zz_when_SuperResolutionPart1_l750_1};
  assign _zz_when_SuperResolutionPart1_l750_2 = (2'b10 * bufferRowCount_value);
  assign _zz_mainAddrOne = (outPixelAddr_value - 4'b0001);
  assign _zz_counterAddrOne = (outPixelAddr_value - 4'b0001);
  assign _zz_counterAddrOne_1 = (_zz_counterAddrOne_2 / 2'b10);
  assign _zz_counterAddrOne_2 = ({1'b0,outPixelAddr_value} + _zz_counterAddrOne_3);
  assign _zz_counterAddrOne_4 = {1'b0,1'b1};
  assign _zz_counterAddrOne_3 = {3'd0, _zz_counterAddrOne_4};
  assign _zz_controls_onceMode = 1'b1;
  assign _zz_mainAddrTwo = (outPixelAddr_value - 4'b0001);
  assign _zz_counterAddrTwo = (outPixelAddr_value - 4'b0001);
  assign _zz_counterAddrTwo_1 = (_zz_counterAddrTwo_2 / 2'b10);
  assign _zz_counterAddrTwo_2 = ({1'b0,outPixelAddr_value} + _zz_counterAddrTwo_3);
  assign _zz_counterAddrTwo_4 = {1'b0,1'b1};
  assign _zz_counterAddrTwo_3 = {3'd0, _zz_counterAddrTwo_4};
  assign _zz_switch_SuperResolutionPart1_l790 = {2'd0, bufferWAddr_value};
  assign _zz_switch_SuperResolutionPart1_l790_1 = (_zz_switch_SuperResolutionPart1_l790_2 / 2'b10);
  assign _zz_switch_SuperResolutionPart1_l790_2 = ({1'b0,outPixelAddr_value} + _zz_switch_SuperResolutionPart1_l790_3);
  assign _zz_switch_SuperResolutionPart1_l790_4 = {1'b0,2'b10};
  assign _zz_switch_SuperResolutionPart1_l790_3 = {2'd0, _zz_switch_SuperResolutionPart1_l790_4};
  assign _zz_controls_onceMode_1 = 2'b10;
  assign _zz_controls_onceMode_2 = 2'b11;
  assign _zz_when_SuperResolutionPart1_l818 = {1'd0, outPixelAddr_value};
  assign _zz_when_SuperResolutionPart1_l818_1 = (_zz_when_SuperResolutionPart1_l818_2 - 5'h02);
  assign _zz_when_SuperResolutionPart1_l818_2 = (2'b10 * bmpWidth);
  assign _zz_when_SuperResolutionPart1_l819 = {1'd0, outRowCount_value};
  assign _zz_when_SuperResolutionPart1_l819_1 = (_zz_when_SuperResolutionPart1_l819_2 - 5'h02);
  assign _zz_when_SuperResolutionPart1_l819_2 = (2'b10 * bmpHeight);
  assign _zz_mainAddrTwo_1 = (outPixelAddr_value - 4'b0001);
  assign _zz_mainAddrTwo_2 = (outPixelAddr_value - 4'b0001);
  assign _zz_counterAddrTwo_5 = (_zz_counterAddrTwo_6 / 2'b10);
  assign _zz_counterAddrTwo_6 = ({1'b0,outPixelAddr_value} + _zz_counterAddrTwo_7);
  assign _zz_counterAddrTwo_8 = {1'b0,1'b1};
  assign _zz_counterAddrTwo_7 = {3'd0, _zz_counterAddrTwo_8};
  assign _zz_mainAddrOne_1 = (outPixelAddr_value - 4'b0001);
  assign _zz_mainAddrOne_2 = (outPixelAddr_value - 4'b0001);
  assign _zz_counterAddrOne_5 = (_zz_counterAddrOne_6 / 2'b10);
  assign _zz_counterAddrOne_6 = ({1'b0,outPixelAddr_value} + _zz_counterAddrOne_7);
  assign _zz_counterAddrOne_8 = {1'b0,1'b1};
  assign _zz_counterAddrOne_7 = {3'd0, _zz_counterAddrOne_8};
  assign _zz_mainAddrOne_3 = (outPixelAddr_value - 4'b0001);
  assign _zz_counterAddrTwo_9 = (outPixelAddr_value - 4'b0001);
  assign _zz_mainAddrTwo_3 = (outPixelAddr_value - 4'b0001);
  assign _zz_counterAddrOne_9 = (outPixelAddr_value - 4'b0001);
  assign _zz_mainAddrTwo_4 = (_zz_mainAddrTwo_5 / 2'b10);
  assign _zz_mainAddrTwo_5 = ({1'b0,outPixelAddr_value} + _zz_mainAddrTwo_6);
  assign _zz_mainAddrTwo_7 = {1'b0,1'b1};
  assign _zz_mainAddrTwo_6 = {3'd0, _zz_mainAddrTwo_7};
  assign _zz_counterAddrOne_10 = (_zz_counterAddrOne_11 / 2'b10);
  assign _zz_counterAddrOne_11 = ({1'b0,outPixelAddr_value} + _zz_counterAddrOne_12);
  assign _zz_counterAddrOne_13 = {1'b0,1'b1};
  assign _zz_counterAddrOne_12 = {3'd0, _zz_counterAddrOne_13};
  assign _zz_mainAddrTwo_8 = (outPixelAddr_value - 4'b0001);
  assign _zz_counterAddrOne_14 = (outPixelAddr_value - 4'b0001);
  assign _zz_mainAddrOne_4 = (outPixelAddr_value - 4'b0001);
  assign _zz_counterAddrTwo_10 = (outPixelAddr_value - 4'b0001);
  assign _zz_mainAddrOne_5 = (_zz_mainAddrOne_6 / 2'b10);
  assign _zz_mainAddrOne_6 = ({1'b0,outPixelAddr_value} + _zz_mainAddrOne_7);
  assign _zz_mainAddrOne_8 = {1'b0,1'b1};
  assign _zz_mainAddrOne_7 = {3'd0, _zz_mainAddrOne_8};
  assign _zz_counterAddrTwo_11 = (_zz_counterAddrTwo_12 / 2'b10);
  assign _zz_counterAddrTwo_12 = ({1'b0,outPixelAddr_value} + _zz_counterAddrTwo_13);
  assign _zz_counterAddrTwo_14 = {1'b0,1'b1};
  assign _zz_counterAddrTwo_13 = {3'd0, _zz_counterAddrTwo_14};
  assign _zz_when_SuperResolutionPart1_l924 = {1'd0, outPixelAddr_value};
  assign _zz_when_SuperResolutionPart1_l924_1 = (_zz_when_SuperResolutionPart1_l924_2 - 5'h02);
  assign _zz_when_SuperResolutionPart1_l924_2 = (2'b10 * bmpWidth);
  assign _zz_when_SuperResolutionPart1_l925 = {1'd0, outRowCount_value};
  assign _zz_when_SuperResolutionPart1_l925_1 = (_zz_when_SuperResolutionPart1_l925_2 - 5'h02);
  assign _zz_when_SuperResolutionPart1_l925_2 = (2'b10 * bmpHeight);
  assign _zz_lineBufferOne_port = passPixels_payload_pixel;
  assign _zz_lineBufferOne_port_1 = (passPixels_fire_6 && (! bufferSwitch));
  assign _zz_lineBufferTwo_port = passPixels_payload_pixel;
  assign _zz_lineBufferTwo_port_1 = (passPixels_fire_5 && bufferSwitch);
  initial begin
    $readmemb("/home/lqx/IdeaProjects/SpGears/tmp/job_1/SuperResolutionPart1.v_toplevel_lineBufferOne.bin",lineBufferOne);
  end
  always @(posedge clk) begin
    if(mainAddrOneStream_ready) begin
      _zz_lineBufferOne_port0 <= lineBufferOne[mainAddrOneStream_payload];
    end
  end

  always @(posedge clk) begin
    if(counterAddrOneStream_ready) begin
      _zz_lineBufferOne_port1 <= lineBufferOne[counterAddrOneStream_payload];
    end
  end

  always @(posedge clk) begin
    if(_zz_lineBufferOne_port_1) begin
      lineBufferOne[bufferWAddr_value] <= _zz_lineBufferOne_port;
    end
  end

  initial begin
    $readmemb("/home/lqx/IdeaProjects/SpGears/tmp/job_1/SuperResolutionPart1.v_toplevel_lineBufferTwo.bin",lineBufferTwo);
  end
  always @(posedge clk) begin
    if(mainAddrTwoStream_ready) begin
      _zz_lineBufferTwo_port0 <= lineBufferTwo[mainAddrTwoStream_payload];
    end
  end

  always @(posedge clk) begin
    if(counterAddrTwoStream_ready) begin
      _zz_lineBufferTwo_port1 <= lineBufferTwo[counterAddrTwoStream_payload];
    end
  end

  always @(posedge clk) begin
    if(_zz_lineBufferTwo_port_1) begin
      lineBufferTwo[bufferWAddr_value] <= _zz_lineBufferTwo_port;
    end
  end

  StreamFork diffStage_controlPipe_fork (
    .io_input_valid                      (diffStage_controlPipe_valid                                     ), //i
    .io_input_ready                      (diffStage_controlPipe_fork_io_input_ready                       ), //o
    .io_input_payload_frameStart         (diffStage_controlPipe_payload_frameStart                        ), //i
    .io_input_payload_rowEnd             (diffStage_controlPipe_payload_rowEnd                            ), //i
    .io_input_payload_passMode           (diffStage_controlPipe_payload_passMode                          ), //i
    .io_input_payload_passValid          (diffStage_controlPipe_payload_passValid                         ), //i
    .io_input_payload_onceMode           (diffStage_controlPipe_payload_onceMode[2:0]                     ), //i
    .io_input_payload_onceValid          (diffStage_controlPipe_payload_onceValid                         ), //i
    .io_input_payload_mainCompare        (diffStage_controlPipe_payload_mainCompare                       ), //i
    .io_input_payload_counterCompare     (diffStage_controlPipe_payload_counterCompare                    ), //i
    .io_input_payload_mainDiff           (diffStage_controlPipe_payload_mainDiff[7:0]                     ), //i
    .io_input_payload_counterDiff        (diffStage_controlPipe_payload_counterDiff[7:0]                  ), //i
    .io_input_payload_twiceCompValid     (diffStage_controlPipe_payload_twiceCompValid                    ), //i
    .io_input_payload_twiceMode          (diffStage_controlPipe_payload_twiceMode[2:0]                    ), //i
    .io_outputs_0_valid                  (diffStage_controlPipe_fork_io_outputs_0_valid                   ), //o
    .io_outputs_0_ready                  (diffStage_controlPipe_fork_io_outputs_0_ready                   ), //i
    .io_outputs_0_payload_frameStart     (diffStage_controlPipe_fork_io_outputs_0_payload_frameStart      ), //o
    .io_outputs_0_payload_rowEnd         (diffStage_controlPipe_fork_io_outputs_0_payload_rowEnd          ), //o
    .io_outputs_0_payload_passMode       (diffStage_controlPipe_fork_io_outputs_0_payload_passMode        ), //o
    .io_outputs_0_payload_passValid      (diffStage_controlPipe_fork_io_outputs_0_payload_passValid       ), //o
    .io_outputs_0_payload_onceMode       (diffStage_controlPipe_fork_io_outputs_0_payload_onceMode[2:0]   ), //o
    .io_outputs_0_payload_onceValid      (diffStage_controlPipe_fork_io_outputs_0_payload_onceValid       ), //o
    .io_outputs_0_payload_mainCompare    (diffStage_controlPipe_fork_io_outputs_0_payload_mainCompare     ), //o
    .io_outputs_0_payload_counterCompare (diffStage_controlPipe_fork_io_outputs_0_payload_counterCompare  ), //o
    .io_outputs_0_payload_mainDiff       (diffStage_controlPipe_fork_io_outputs_0_payload_mainDiff[7:0]   ), //o
    .io_outputs_0_payload_counterDiff    (diffStage_controlPipe_fork_io_outputs_0_payload_counterDiff[7:0]), //o
    .io_outputs_0_payload_twiceCompValid (diffStage_controlPipe_fork_io_outputs_0_payload_twiceCompValid  ), //o
    .io_outputs_0_payload_twiceMode      (diffStage_controlPipe_fork_io_outputs_0_payload_twiceMode[2:0]  ), //o
    .io_outputs_1_valid                  (diffStage_controlPipe_fork_io_outputs_1_valid                   ), //o
    .io_outputs_1_ready                  (resultStage_pixelStream_ready                                   ), //i
    .io_outputs_1_payload_frameStart     (diffStage_controlPipe_fork_io_outputs_1_payload_frameStart      ), //o
    .io_outputs_1_payload_rowEnd         (diffStage_controlPipe_fork_io_outputs_1_payload_rowEnd          ), //o
    .io_outputs_1_payload_passMode       (diffStage_controlPipe_fork_io_outputs_1_payload_passMode        ), //o
    .io_outputs_1_payload_passValid      (diffStage_controlPipe_fork_io_outputs_1_payload_passValid       ), //o
    .io_outputs_1_payload_onceMode       (diffStage_controlPipe_fork_io_outputs_1_payload_onceMode[2:0]   ), //o
    .io_outputs_1_payload_onceValid      (diffStage_controlPipe_fork_io_outputs_1_payload_onceValid       ), //o
    .io_outputs_1_payload_mainCompare    (diffStage_controlPipe_fork_io_outputs_1_payload_mainCompare     ), //o
    .io_outputs_1_payload_counterCompare (diffStage_controlPipe_fork_io_outputs_1_payload_counterCompare  ), //o
    .io_outputs_1_payload_mainDiff       (diffStage_controlPipe_fork_io_outputs_1_payload_mainDiff[7:0]   ), //o
    .io_outputs_1_payload_counterDiff    (diffStage_controlPipe_fork_io_outputs_1_payload_counterDiff[7:0]), //o
    .io_outputs_1_payload_twiceCompValid (diffStage_controlPipe_fork_io_outputs_1_payload_twiceCompValid  ), //o
    .io_outputs_1_payload_twiceMode      (diffStage_controlPipe_fork_io_outputs_1_payload_twiceMode[2:0]  )  //o
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(controlStateMachine_stateReg)
      controlStateMachine_enumDef_BOOT : controlStateMachine_stateReg_string = "BOOT ";
      controlStateMachine_enumDef_HOLD : controlStateMachine_stateReg_string = "HOLD ";
      controlStateMachine_enumDef_PASS : controlStateMachine_stateReg_string = "PASS ";
      controlStateMachine_enumDef_ONCE : controlStateMachine_stateReg_string = "ONCE ";
      controlStateMachine_enumDef_TWICE : controlStateMachine_stateReg_string = "TWICE";
      default : controlStateMachine_stateReg_string = "?????";
    endcase
  end
  always @(*) begin
    case(controlStateMachine_stateNext)
      controlStateMachine_enumDef_BOOT : controlStateMachine_stateNext_string = "BOOT ";
      controlStateMachine_enumDef_HOLD : controlStateMachine_stateNext_string = "HOLD ";
      controlStateMachine_enumDef_PASS : controlStateMachine_stateNext_string = "PASS ";
      controlStateMachine_enumDef_ONCE : controlStateMachine_stateNext_string = "ONCE ";
      controlStateMachine_enumDef_TWICE : controlStateMachine_stateNext_string = "TWICE";
      default : controlStateMachine_stateNext_string = "?????";
    endcase
  end
  `endif

  always @(*) begin
    pixelsIn_ready = 1'b0;
    pixelsIn_ready = (passPixels_ready && bufferEnable);
  end

  always @(*) begin
    pixelsOut_valid = 1'b0;
    pixelsOut_valid = pixelsStream_s2mPipe_m2sPipe_valid;
  end

  always @(*) begin
    pixelsOut_payload_pixel = 8'h0;
    pixelsOut_payload_pixel = pixelsStream_s2mPipe_m2sPipe_payload_pixel;
  end

  always @(*) begin
    pixelsOut_payload_frameStart = 1'b0;
    pixelsOut_payload_frameStart = pixelsStream_s2mPipe_m2sPipe_payload_frameStart;
  end

  always @(*) begin
    pixelsOut_payload_rowEnd = 1'b0;
    pixelsOut_payload_rowEnd = pixelsStream_s2mPipe_m2sPipe_payload_rowEnd;
  end

  always @(*) begin
    pixelsOut_payload_inpValid = 1'b0;
    pixelsOut_payload_inpValid = pixelsStream_s2mPipe_m2sPipe_payload_inpValid;
  end

  always @(*) begin
    startOut = 1'b0;
    startOut = slaveStart;
  end

  always @(*) begin
    inpDoneOut = 1'b0;
    inpDoneOut = inpDone;
  end

  assign when_SuperResolutionPart1_l81 = (StartIn && (! internalDone));
  assign pixelsIn_fire = (pixelsIn_valid && pixelsIn_ready);
  assign when_SuperResolutionPart1_l84 = ((! inpTwoDoneIn) && pixelsIn_fire);
  assign pixelsIn_fire_1 = (pixelsIn_valid && pixelsIn_ready);
  assign when_SuperResolutionPart1_l87 = (pixelsIn_payload_frameStart && pixelsIn_fire_1);
  assign when_SuperResolutionPart1_l99 = (! StartIn);
  always @(*) begin
    bufferRowCount_willIncrement = 1'b0;
    if(when_SuperResolutionPart1_l601) begin
      if(!bufferReachFinalRow) begin
        bufferRowCount_willIncrement = 1'b1;
      end
    end
  end

  always @(*) begin
    bufferRowCount_willClear = 1'b0;
    if(when_SuperResolutionPart1_l601) begin
      if(bufferReachFinalRow) begin
        bufferRowCount_willClear = 1'b1;
      end
    end
  end

  assign bufferRowCount_willOverflowIfInc = (bufferRowCount_value == 3'b101);
  assign bufferRowCount_willOverflow = (bufferRowCount_willOverflowIfInc && bufferRowCount_willIncrement);
  always @(*) begin
    if(bufferRowCount_willOverflow) begin
      bufferRowCount_valueNext = 3'b000;
    end else begin
      bufferRowCount_valueNext = (bufferRowCount_value + _zz_bufferRowCount_valueNext);
    end
    if(bufferRowCount_willClear) begin
      bufferRowCount_valueNext = 3'b000;
    end
  end

  assign when_SuperResolutionPart1_l105 = (StartIn && (! holdBuffer));
  assign when_SuperResolutionPart1_l105_1 = ((! StartIn) || holdBuffer);
  assign when_SuperResolutionPart1_l108 = (! startRead);
  assign when_SuperResolutionPart1_l111 = (! startRead);
  always @(*) begin
    bufferWAddr_willIncrement = 1'b0;
    if(passPixels_fire_7) begin
      if(!pixelsIn_payload_rowEnd) begin
        bufferWAddr_willIncrement = 1'b1;
      end
    end
  end

  always @(*) begin
    bufferWAddr_willClear = 1'b0;
    if(passPixels_fire_7) begin
      if(pixelsIn_payload_rowEnd) begin
        bufferWAddr_willClear = 1'b1;
      end
    end
  end

  assign bufferWAddr_willOverflowIfInc = (bufferWAddr_value == 3'b100);
  assign bufferWAddr_willOverflow = (bufferWAddr_willOverflowIfInc && bufferWAddr_willIncrement);
  always @(*) begin
    if(bufferWAddr_willOverflow) begin
      bufferWAddr_valueNext = 3'b000;
    end else begin
      bufferWAddr_valueNext = (bufferWAddr_value + _zz_bufferWAddr_valueNext);
    end
    if(bufferWAddr_willClear) begin
      bufferWAddr_valueNext = 3'b000;
    end
  end

  always @(*) begin
    outPixelAddr_willIncrement = 1'b0;
    case(controlStateMachine_stateReg)
      controlStateMachine_enumDef_HOLD : begin
      end
      controlStateMachine_enumDef_PASS : begin
        if(controlStream_fire_6) begin
          if(!outReachRowEnd) begin
            outPixelAddr_willIncrement = 1'b1;
          end
        end
      end
      controlStateMachine_enumDef_ONCE : begin
        if(controlStream_fire_12) begin
          if(!outReachRowEnd) begin
            outPixelAddr_willIncrement = 1'b1;
          end
        end
      end
      controlStateMachine_enumDef_TWICE : begin
        if(controlStream_fire_17) begin
          if(!outReachRowEnd) begin
            outPixelAddr_willIncrement = 1'b1;
          end
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    outPixelAddr_willClear = 1'b0;
    case(controlStateMachine_stateReg)
      controlStateMachine_enumDef_HOLD : begin
      end
      controlStateMachine_enumDef_PASS : begin
        if(controlStream_fire_6) begin
          if(outReachRowEnd) begin
            outPixelAddr_willClear = 1'b1;
          end
        end
      end
      controlStateMachine_enumDef_ONCE : begin
        if(controlStream_fire_12) begin
          if(outReachRowEnd) begin
            outPixelAddr_willClear = 1'b1;
          end
        end
      end
      controlStateMachine_enumDef_TWICE : begin
        if(controlStream_fire_17) begin
          if(outReachRowEnd) begin
            outPixelAddr_willClear = 1'b1;
          end
        end
      end
      default : begin
      end
    endcase
  end

  assign outPixelAddr_willOverflowIfInc = (outPixelAddr_value == 4'b1001);
  assign outPixelAddr_willOverflow = (outPixelAddr_willOverflowIfInc && outPixelAddr_willIncrement);
  always @(*) begin
    if(outPixelAddr_willOverflow) begin
      outPixelAddr_valueNext = 4'b0000;
    end else begin
      outPixelAddr_valueNext = (outPixelAddr_value + _zz_outPixelAddr_valueNext);
    end
    if(outPixelAddr_willClear) begin
      outPixelAddr_valueNext = 4'b0000;
    end
  end

  always @(*) begin
    outRowCount_willIncrement = 1'b0;
    case(controlStateMachine_stateReg)
      controlStateMachine_enumDef_HOLD : begin
      end
      controlStateMachine_enumDef_PASS : begin
        if(when_SuperResolutionPart1_l713) begin
          if(!outReachFinalRow) begin
            outRowCount_willIncrement = 1'b1;
          end
        end
      end
      controlStateMachine_enumDef_ONCE : begin
        if(when_SuperResolutionPart1_l821) begin
          if(!outReachFinalRow) begin
            outRowCount_willIncrement = 1'b1;
          end
        end
      end
      controlStateMachine_enumDef_TWICE : begin
        if(when_SuperResolutionPart1_l927) begin
          if(!outReachFinalRow) begin
            outRowCount_willIncrement = 1'b1;
          end
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    outRowCount_willClear = 1'b0;
    case(controlStateMachine_stateReg)
      controlStateMachine_enumDef_HOLD : begin
      end
      controlStateMachine_enumDef_PASS : begin
        if(when_SuperResolutionPart1_l713) begin
          if(outReachFinalRow) begin
            outRowCount_willClear = 1'b1;
          end
        end
      end
      controlStateMachine_enumDef_ONCE : begin
        if(when_SuperResolutionPart1_l821) begin
          if(outReachFinalRow) begin
            outRowCount_willClear = 1'b1;
          end
        end
      end
      controlStateMachine_enumDef_TWICE : begin
        if(when_SuperResolutionPart1_l927) begin
          if(outReachFinalRow) begin
            outRowCount_willClear = 1'b1;
          end
        end
      end
      default : begin
      end
    endcase
  end

  assign outRowCount_willOverflowIfInc = (outRowCount_value == 4'b1010);
  assign outRowCount_willOverflow = (outRowCount_willOverflowIfInc && outRowCount_willIncrement);
  always @(*) begin
    if(outRowCount_willOverflow) begin
      outRowCount_valueNext = 4'b0000;
    end else begin
      outRowCount_valueNext = (outRowCount_value + _zz_outRowCount_valueNext);
    end
    if(outRowCount_willClear) begin
      outRowCount_valueNext = 4'b0000;
    end
  end

  always @(*) begin
    mainAddrOne = (outPixelAddr_value / 2'b10);
    case(controlStateMachine_stateReg)
      controlStateMachine_enumDef_HOLD : begin
      end
      controlStateMachine_enumDef_PASS : begin
      end
      controlStateMachine_enumDef_ONCE : begin
        case(switch_SuperResolutionPart1_l743)
          1'b1 : begin
            case(nextRowBuffer)
              1'b1 : begin
                mainAddrOne = (_zz_mainAddrOne / 2'b10);
              end
              default : begin
              end
            endcase
          end
          default : begin
            mainAddrOne = (outPixelAddr_value / 2'b10);
          end
        endcase
      end
      controlStateMachine_enumDef_TWICE : begin
        if(outReachFinalRow) begin
          case(nextRowBuffer)
            1'b0 : begin
            end
            default : begin
              if(outReachRowEnd) begin
                mainAddrOne = (_zz_mainAddrOne_1 / 2'b10);
              end else begin
                mainAddrOne = (_zz_mainAddrOne_2 / 2'b10);
              end
            end
          endcase
        end else begin
          case(nextRowBuffer)
            1'b1 : begin
              mainAddrOne = (_zz_mainAddrOne_3 / 2'b10);
            end
            default : begin
              if(outReachRowEnd) begin
                mainAddrOne = (_zz_mainAddrOne_4 / 2'b10);
              end else begin
                mainAddrOne = _zz_mainAddrOne_5[3:0];
              end
            end
          endcase
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    counterAddrOne = (outPixelAddr_value / 2'b10);
    case(controlStateMachine_stateReg)
      controlStateMachine_enumDef_HOLD : begin
      end
      controlStateMachine_enumDef_PASS : begin
      end
      controlStateMachine_enumDef_ONCE : begin
        case(switch_SuperResolutionPart1_l743)
          1'b1 : begin
            case(nextRowBuffer)
              1'b1 : begin
                if(outReachRowEnd) begin
                  counterAddrOne = (_zz_counterAddrOne / 2'b10);
                end else begin
                  counterAddrOne = _zz_counterAddrOne_1[3:0];
                end
              end
              default : begin
              end
            endcase
          end
          default : begin
          end
        endcase
      end
      controlStateMachine_enumDef_TWICE : begin
        if(outReachFinalRow) begin
          case(nextRowBuffer)
            1'b0 : begin
            end
            default : begin
              if(!outReachRowEnd) begin
                counterAddrOne = _zz_counterAddrOne_5[3:0];
              end
            end
          endcase
        end else begin
          case(nextRowBuffer)
            1'b1 : begin
              if(outReachRowEnd) begin
                counterAddrOne = (_zz_counterAddrOne_9 / 2'b10);
              end else begin
                counterAddrOne = _zz_counterAddrOne_10[3:0];
              end
            end
            default : begin
              counterAddrOne = (_zz_counterAddrOne_14 / 2'b10);
            end
          endcase
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    mainAddrTwo = (outPixelAddr_value / 2'b10);
    case(controlStateMachine_stateReg)
      controlStateMachine_enumDef_HOLD : begin
      end
      controlStateMachine_enumDef_PASS : begin
      end
      controlStateMachine_enumDef_ONCE : begin
        case(switch_SuperResolutionPart1_l743)
          1'b1 : begin
            case(nextRowBuffer)
              1'b1 : begin
              end
              default : begin
                mainAddrTwo = (_zz_mainAddrTwo / 2'b10);
              end
            endcase
          end
          default : begin
            mainAddrTwo = (outPixelAddr_value / 2'b10);
          end
        endcase
      end
      controlStateMachine_enumDef_TWICE : begin
        if(outReachFinalRow) begin
          case(nextRowBuffer)
            1'b0 : begin
              if(outReachRowEnd) begin
                mainAddrTwo = (_zz_mainAddrTwo_1 / 2'b10);
              end else begin
                mainAddrTwo = (_zz_mainAddrTwo_2 / 2'b10);
              end
            end
            default : begin
            end
          endcase
        end else begin
          case(nextRowBuffer)
            1'b1 : begin
              if(outReachRowEnd) begin
                mainAddrTwo = (_zz_mainAddrTwo_3 / 2'b10);
              end else begin
                mainAddrTwo = _zz_mainAddrTwo_4[3:0];
              end
            end
            default : begin
              mainAddrTwo = (_zz_mainAddrTwo_8 / 2'b10);
            end
          endcase
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    counterAddrTwo = (outPixelAddr_value / 2'b10);
    case(controlStateMachine_stateReg)
      controlStateMachine_enumDef_HOLD : begin
      end
      controlStateMachine_enumDef_PASS : begin
      end
      controlStateMachine_enumDef_ONCE : begin
        case(switch_SuperResolutionPart1_l743)
          1'b1 : begin
            case(nextRowBuffer)
              1'b1 : begin
              end
              default : begin
                if(outReachRowEnd) begin
                  counterAddrTwo = (_zz_counterAddrTwo / 2'b10);
                end else begin
                  counterAddrTwo = _zz_counterAddrTwo_1[3:0];
                end
              end
            endcase
          end
          default : begin
          end
        endcase
      end
      controlStateMachine_enumDef_TWICE : begin
        if(outReachFinalRow) begin
          case(nextRowBuffer)
            1'b0 : begin
              if(!outReachRowEnd) begin
                counterAddrTwo = _zz_counterAddrTwo_5[3:0];
              end
            end
            default : begin
            end
          endcase
        end else begin
          case(nextRowBuffer)
            1'b1 : begin
              counterAddrTwo = (_zz_counterAddrTwo_9 / 2'b10);
            end
            default : begin
              if(outReachRowEnd) begin
                counterAddrTwo = (_zz_counterAddrTwo_10 / 2'b10);
              end else begin
                counterAddrTwo = _zz_counterAddrTwo_11[3:0];
              end
            end
          endcase
        end
      end
      default : begin
      end
    endcase
  end

  assign validStream_valid = 1'b1;
  assign _zz_controls_frameStart = 30'h0;
  always @(*) begin
    controls_frameStart = _zz_controls_frameStart[0];
    case(controlStateMachine_stateReg)
      controlStateMachine_enumDef_HOLD : begin
      end
      controlStateMachine_enumDef_PASS : begin
        if(frameStart) begin
          controls_frameStart = 1'b1;
        end
      end
      controlStateMachine_enumDef_ONCE : begin
      end
      controlStateMachine_enumDef_TWICE : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    controls_rowEnd = _zz_controls_frameStart[1];
    case(controlStateMachine_stateReg)
      controlStateMachine_enumDef_HOLD : begin
      end
      controlStateMachine_enumDef_PASS : begin
        if(outReachRowEnd) begin
          controls_rowEnd = 1'b1;
        end
      end
      controlStateMachine_enumDef_ONCE : begin
        if(outReachRowEnd) begin
          controls_rowEnd = 1'b1;
        end
      end
      controlStateMachine_enumDef_TWICE : begin
        if(outReachRowEnd) begin
          controls_rowEnd = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    controls_passMode = _zz_controls_frameStart[2];
    case(controlStateMachine_stateReg)
      controlStateMachine_enumDef_HOLD : begin
      end
      controlStateMachine_enumDef_PASS : begin
        case(nextRowBuffer)
          1'b1 : begin
            controls_passMode = 1'b0;
          end
          default : begin
            controls_passMode = 1'b1;
          end
        endcase
      end
      controlStateMachine_enumDef_ONCE : begin
      end
      controlStateMachine_enumDef_TWICE : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    controls_passValid = _zz_controls_frameStart[3];
    case(controlStateMachine_stateReg)
      controlStateMachine_enumDef_HOLD : begin
      end
      controlStateMachine_enumDef_PASS : begin
        controls_passValid = 1'b1;
      end
      controlStateMachine_enumDef_ONCE : begin
      end
      controlStateMachine_enumDef_TWICE : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    controls_onceMode = _zz_controls_frameStart[6 : 4];
    case(controlStateMachine_stateReg)
      controlStateMachine_enumDef_HOLD : begin
      end
      controlStateMachine_enumDef_PASS : begin
      end
      controlStateMachine_enumDef_ONCE : begin
        case(switch_SuperResolutionPart1_l743)
          1'b1 : begin
            case(nextRowBuffer)
              1'b1 : begin
                controls_onceMode = 3'b000;
              end
              default : begin
                controls_onceMode = {2'd0, _zz_controls_onceMode};
              end
            endcase
          end
          default : begin
            if(outReachFinalRow) begin
              case(nextRowBuffer)
                1'b0 : begin
                  controls_onceMode = 3'b100;
                end
                default : begin
                  controls_onceMode = 3'b101;
                end
              endcase
            end else begin
              case(nextRowBuffer)
                1'b1 : begin
                  controls_onceMode = {1'd0, _zz_controls_onceMode_1};
                end
                default : begin
                  controls_onceMode = {1'd0, _zz_controls_onceMode_2};
                end
              endcase
            end
          end
        endcase
      end
      controlStateMachine_enumDef_TWICE : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    controls_onceValid = _zz_controls_frameStart[7];
    case(controlStateMachine_stateReg)
      controlStateMachine_enumDef_HOLD : begin
      end
      controlStateMachine_enumDef_PASS : begin
      end
      controlStateMachine_enumDef_ONCE : begin
        controls_onceValid = 1'b1;
      end
      controlStateMachine_enumDef_TWICE : begin
      end
      default : begin
      end
    endcase
  end

  assign controls_mainCompare = _zz_controls_frameStart[8];
  assign controls_counterCompare = _zz_controls_frameStart[9];
  assign controls_mainDiff = _zz_controls_frameStart[17 : 10];
  assign controls_counterDiff = _zz_controls_frameStart[25 : 18];
  always @(*) begin
    controls_twiceCompValid = _zz_controls_frameStart[26];
    case(controlStateMachine_stateReg)
      controlStateMachine_enumDef_HOLD : begin
      end
      controlStateMachine_enumDef_PASS : begin
      end
      controlStateMachine_enumDef_ONCE : begin
      end
      controlStateMachine_enumDef_TWICE : begin
        controls_twiceCompValid = 1'b1;
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    controls_twiceMode = _zz_controls_frameStart[29 : 27];
    case(controlStateMachine_stateReg)
      controlStateMachine_enumDef_HOLD : begin
      end
      controlStateMachine_enumDef_PASS : begin
      end
      controlStateMachine_enumDef_ONCE : begin
      end
      controlStateMachine_enumDef_TWICE : begin
        if(outReachFinalRow) begin
          case(nextRowBuffer)
            1'b0 : begin
              if(outReachRowEnd) begin
                controls_twiceMode = 3'b010;
              end else begin
                controls_twiceMode = 3'b011;
              end
            end
            default : begin
              if(outReachRowEnd) begin
                controls_twiceMode = 3'b100;
              end else begin
                controls_twiceMode = 3'b101;
              end
            end
          endcase
        end else begin
          case(nextRowBuffer)
            1'b1 : begin
              controls_twiceMode = 3'b000;
            end
            default : begin
              controls_twiceMode = 3'b001;
            end
          endcase
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    validStream_ready = (controlStream_ready && startRead);
    validStream_ready = (mainAddrOneStream_ready && startRead);
    validStream_ready = (counterAddrOneStream_ready && startRead);
    validStream_ready = (mainAddrTwoStream_ready && startRead);
    validStream_ready = (counterAddrTwoStream_ready && startRead);
  end

  assign controlStream_valid = (validStream_valid && startRead);
  assign controlStream_payload_frameStart = controls_frameStart;
  assign controlStream_payload_rowEnd = controls_rowEnd;
  assign controlStream_payload_passMode = controls_passMode;
  assign controlStream_payload_passValid = controls_passValid;
  assign controlStream_payload_onceMode = controls_onceMode;
  assign controlStream_payload_onceValid = controls_onceValid;
  assign controlStream_payload_mainCompare = controls_mainCompare;
  assign controlStream_payload_counterCompare = controls_counterCompare;
  assign controlStream_payload_mainDiff = controls_mainDiff;
  assign controlStream_payload_counterDiff = controls_counterDiff;
  assign controlStream_payload_twiceCompValid = controls_twiceCompValid;
  assign controlStream_payload_twiceMode = controls_twiceMode;
  assign mainAddrOneStream_valid = (validStream_valid && startRead);
  assign mainAddrOneStream_payload = mainAddrOne[2:0];
  assign counterAddrOneStream_valid = (validStream_valid && startRead);
  assign counterAddrOneStream_payload = counterAddrOne[2:0];
  assign mainAddrTwoStream_valid = (validStream_valid && startRead);
  assign mainAddrTwoStream_payload = mainAddrTwo[2:0];
  assign counterAddrTwoStream_valid = (validStream_valid && startRead);
  assign counterAddrTwoStream_payload = counterAddrTwo[2:0];
  assign readStage_mainOnePixelStream_isFree = ((! readStage_mainOnePixelStream_valid) || readStage_mainOnePixelStream_ready);
  assign mainAddrOneStream_ready = readStage_mainOnePixelStream_isFree;
  assign readStage_mainOnePixelStream_valid = _zz_readStage_mainOnePixelStream_valid;
  assign readStage_mainOnePixelStream_payload = _zz_lineBufferOne_port0;
  assign readStage_counterOnePixelStream_isFree = ((! readStage_counterOnePixelStream_valid) || readStage_counterOnePixelStream_ready);
  assign counterAddrOneStream_ready = readStage_counterOnePixelStream_isFree;
  assign readStage_counterOnePixelStream_valid = _zz_readStage_counterOnePixelStream_valid;
  assign readStage_counterOnePixelStream_payload = _zz_lineBufferOne_port1;
  assign readStage_mainTwoPixelStream_isFree = ((! readStage_mainTwoPixelStream_valid) || readStage_mainTwoPixelStream_ready);
  assign mainAddrTwoStream_ready = readStage_mainTwoPixelStream_isFree;
  assign readStage_mainTwoPixelStream_valid = _zz_readStage_mainTwoPixelStream_valid;
  assign readStage_mainTwoPixelStream_payload = _zz_lineBufferTwo_port0;
  assign readStage_counterTwoPixelStream_isFree = ((! readStage_counterTwoPixelStream_valid) || readStage_counterTwoPixelStream_ready);
  assign counterAddrTwoStream_ready = readStage_counterTwoPixelStream_isFree;
  assign readStage_counterTwoPixelStream_valid = _zz_readStage_counterTwoPixelStream_valid;
  assign readStage_counterTwoPixelStream_payload = _zz_lineBufferTwo_port1;
  always @(*) begin
    controlStream_ready = readStage_controlPipe_ready;
    if(when_Stream_l368) begin
      controlStream_ready = 1'b1;
    end
  end

  assign when_Stream_l368 = (! readStage_controlPipe_valid);
  assign readStage_controlPipe_valid = controlStream_rValid;
  assign readStage_controlPipe_payload_frameStart = controlStream_rData_frameStart;
  assign readStage_controlPipe_payload_rowEnd = controlStream_rData_rowEnd;
  assign readStage_controlPipe_payload_passMode = controlStream_rData_passMode;
  assign readStage_controlPipe_payload_passValid = controlStream_rData_passValid;
  assign readStage_controlPipe_payload_onceMode = controlStream_rData_onceMode;
  assign readStage_controlPipe_payload_onceValid = controlStream_rData_onceValid;
  assign readStage_controlPipe_payload_mainCompare = controlStream_rData_mainCompare;
  assign readStage_controlPipe_payload_counterCompare = controlStream_rData_counterCompare;
  assign readStage_controlPipe_payload_mainDiff = controlStream_rData_mainDiff;
  assign readStage_controlPipe_payload_counterDiff = controlStream_rData_counterDiff;
  assign readStage_controlPipe_payload_twiceCompValid = controlStream_rData_twiceCompValid;
  assign readStage_controlPipe_payload_twiceMode = controlStream_rData_twiceMode;
  always @(*) begin
    readStage_mainOnePixelStream_ready = compareStage_mainOnePixelStream_ready;
    if(when_Stream_l368_1) begin
      readStage_mainOnePixelStream_ready = 1'b1;
    end
  end

  assign when_Stream_l368_1 = (! compareStage_mainOnePixelStream_valid);
  assign compareStage_mainOnePixelStream_valid = readStage_mainOnePixelStream_rValid;
  assign compareStage_mainOnePixelStream_payload = readStage_mainOnePixelStream_rData;
  always @(*) begin
    readStage_counterOnePixelStream_ready = compareStage_counterOnePixelStream_ready;
    if(when_Stream_l368_2) begin
      readStage_counterOnePixelStream_ready = 1'b1;
    end
  end

  assign when_Stream_l368_2 = (! compareStage_counterOnePixelStream_valid);
  assign compareStage_counterOnePixelStream_valid = readStage_counterOnePixelStream_rValid;
  assign compareStage_counterOnePixelStream_payload = readStage_counterOnePixelStream_rData;
  always @(*) begin
    readStage_mainTwoPixelStream_ready = compareStage_mainTwoPixelStream_ready;
    if(when_Stream_l368_3) begin
      readStage_mainTwoPixelStream_ready = 1'b1;
    end
  end

  assign when_Stream_l368_3 = (! compareStage_mainTwoPixelStream_valid);
  assign compareStage_mainTwoPixelStream_valid = readStage_mainTwoPixelStream_rValid;
  assign compareStage_mainTwoPixelStream_payload = readStage_mainTwoPixelStream_rData;
  always @(*) begin
    readStage_counterTwoPixelStream_ready = compareStage_counterTwoPixelStream_ready;
    if(when_Stream_l368_4) begin
      readStage_counterTwoPixelStream_ready = 1'b1;
    end
  end

  assign when_Stream_l368_4 = (! compareStage_counterTwoPixelStream_valid);
  assign compareStage_counterTwoPixelStream_valid = readStage_counterTwoPixelStream_rValid;
  assign compareStage_counterTwoPixelStream_payload = readStage_counterTwoPixelStream_rData;
  always @(*) begin
    _zz_readStage_controlPipe_translated_payload_mainCompare = readStage_controlPipe_payload_mainCompare;
    if(readStage_controlPipe_payload_onceValid) begin
      case(readStage_controlPipe_payload_onceMode)
        3'b000 : begin
          if(when_SuperResolutionPart1_l208) begin
            _zz_readStage_controlPipe_translated_payload_mainCompare = 1'b1;
          end else begin
            _zz_readStage_controlPipe_translated_payload_mainCompare = 1'b0;
          end
        end
        3'b001 : begin
          if(when_SuperResolutionPart1_l216) begin
            _zz_readStage_controlPipe_translated_payload_mainCompare = 1'b1;
          end else begin
            _zz_readStage_controlPipe_translated_payload_mainCompare = 1'b0;
          end
        end
        3'b010 : begin
          if(when_SuperResolutionPart1_l224) begin
            _zz_readStage_controlPipe_translated_payload_mainCompare = 1'b1;
          end else begin
            _zz_readStage_controlPipe_translated_payload_mainCompare = 1'b0;
          end
        end
        3'b011 : begin
          if(when_SuperResolutionPart1_l232) begin
            _zz_readStage_controlPipe_translated_payload_mainCompare = 1'b1;
          end else begin
            _zz_readStage_controlPipe_translated_payload_mainCompare = 1'b0;
          end
        end
        3'b100 : begin
          _zz_readStage_controlPipe_translated_payload_mainCompare = 1'b1;
        end
        3'b101 : begin
          _zz_readStage_controlPipe_translated_payload_mainCompare = 1'b1;
        end
        default : begin
        end
      endcase
    end
    if(readStage_controlPipe_payload_twiceCompValid) begin
      case(readStage_controlPipe_payload_twiceMode)
        3'b000 : begin
          if(when_SuperResolutionPart1_l252) begin
            _zz_readStage_controlPipe_translated_payload_mainCompare = 1'b1;
          end else begin
            _zz_readStage_controlPipe_translated_payload_mainCompare = 1'b0;
          end
        end
        3'b001 : begin
          if(when_SuperResolutionPart1_l266) begin
            _zz_readStage_controlPipe_translated_payload_mainCompare = 1'b1;
          end else begin
            _zz_readStage_controlPipe_translated_payload_mainCompare = 1'b0;
          end
        end
        3'b010 : begin
          _zz_readStage_controlPipe_translated_payload_mainCompare = 1'b1;
        end
        3'b011 : begin
          if(when_SuperResolutionPart1_l284) begin
            _zz_readStage_controlPipe_translated_payload_mainCompare = 1'b1;
          end else begin
            _zz_readStage_controlPipe_translated_payload_mainCompare = 1'b0;
          end
        end
        3'b100 : begin
          _zz_readStage_controlPipe_translated_payload_mainCompare = 1'b1;
        end
        3'b101 : begin
          if(when_SuperResolutionPart1_l296) begin
            _zz_readStage_controlPipe_translated_payload_mainCompare = 1'b1;
          end else begin
            _zz_readStage_controlPipe_translated_payload_mainCompare = 1'b0;
          end
        end
        default : begin
        end
      endcase
    end
  end

  always @(*) begin
    _zz_readStage_controlPipe_translated_payload_counterCompare = readStage_controlPipe_payload_counterCompare;
    if(readStage_controlPipe_payload_twiceCompValid) begin
      case(readStage_controlPipe_payload_twiceMode)
        3'b000 : begin
          if(when_SuperResolutionPart1_l258) begin
            _zz_readStage_controlPipe_translated_payload_counterCompare = 1'b1;
          end else begin
            _zz_readStage_controlPipe_translated_payload_counterCompare = 1'b0;
          end
        end
        3'b001 : begin
          if(when_SuperResolutionPart1_l272) begin
            _zz_readStage_controlPipe_translated_payload_counterCompare = 1'b1;
          end else begin
            _zz_readStage_controlPipe_translated_payload_counterCompare = 1'b0;
          end
        end
        default : begin
        end
      endcase
    end
  end

  assign when_SuperResolutionPart1_l208 = (readStage_counterOnePixelStream_payload <= readStage_mainOnePixelStream_payload);
  assign when_SuperResolutionPart1_l216 = (readStage_counterTwoPixelStream_payload <= readStage_mainTwoPixelStream_payload);
  assign when_SuperResolutionPart1_l224 = (readStage_mainTwoPixelStream_payload <= readStage_mainOnePixelStream_payload);
  assign when_SuperResolutionPart1_l232 = (readStage_mainOnePixelStream_payload <= readStage_mainTwoPixelStream_payload);
  assign when_SuperResolutionPart1_l252 = (readStage_mainTwoPixelStream_payload <= readStage_mainOnePixelStream_payload);
  assign when_SuperResolutionPart1_l258 = (readStage_counterOnePixelStream_payload <= readStage_counterTwoPixelStream_payload);
  assign when_SuperResolutionPart1_l266 = (readStage_mainOnePixelStream_payload <= readStage_mainTwoPixelStream_payload);
  assign when_SuperResolutionPart1_l272 = (readStage_counterTwoPixelStream_payload <= readStage_counterOnePixelStream_payload);
  assign when_SuperResolutionPart1_l284 = (readStage_counterTwoPixelStream_payload <= readStage_mainTwoPixelStream_payload);
  assign when_SuperResolutionPart1_l296 = (readStage_counterOnePixelStream_payload <= readStage_mainOnePixelStream_payload);
  assign readStage_controlPipe_translated_valid = readStage_controlPipe_valid;
  assign readStage_controlPipe_ready = readStage_controlPipe_translated_ready;
  assign readStage_controlPipe_translated_payload_frameStart = readStage_controlPipe_payload_frameStart;
  assign readStage_controlPipe_translated_payload_rowEnd = readStage_controlPipe_payload_rowEnd;
  assign readStage_controlPipe_translated_payload_passMode = readStage_controlPipe_payload_passMode;
  assign readStage_controlPipe_translated_payload_passValid = readStage_controlPipe_payload_passValid;
  assign readStage_controlPipe_translated_payload_onceMode = readStage_controlPipe_payload_onceMode;
  assign readStage_controlPipe_translated_payload_onceValid = readStage_controlPipe_payload_onceValid;
  assign readStage_controlPipe_translated_payload_mainCompare = _zz_readStage_controlPipe_translated_payload_mainCompare;
  assign readStage_controlPipe_translated_payload_counterCompare = _zz_readStage_controlPipe_translated_payload_counterCompare;
  assign readStage_controlPipe_translated_payload_mainDiff = readStage_controlPipe_payload_mainDiff;
  assign readStage_controlPipe_translated_payload_counterDiff = readStage_controlPipe_payload_counterDiff;
  assign readStage_controlPipe_translated_payload_twiceCompValid = readStage_controlPipe_payload_twiceCompValid;
  assign readStage_controlPipe_translated_payload_twiceMode = readStage_controlPipe_payload_twiceMode;
  always @(*) begin
    readStage_controlPipe_translated_ready = compareStage_controlPipe_ready;
    if(when_Stream_l368_5) begin
      readStage_controlPipe_translated_ready = 1'b1;
    end
  end

  assign when_Stream_l368_5 = (! compareStage_controlPipe_valid);
  assign compareStage_controlPipe_valid = readStage_controlPipe_translated_rValid;
  assign compareStage_controlPipe_payload_frameStart = readStage_controlPipe_translated_rData_frameStart;
  assign compareStage_controlPipe_payload_rowEnd = readStage_controlPipe_translated_rData_rowEnd;
  assign compareStage_controlPipe_payload_passMode = readStage_controlPipe_translated_rData_passMode;
  assign compareStage_controlPipe_payload_passValid = readStage_controlPipe_translated_rData_passValid;
  assign compareStage_controlPipe_payload_onceMode = readStage_controlPipe_translated_rData_onceMode;
  assign compareStage_controlPipe_payload_onceValid = readStage_controlPipe_translated_rData_onceValid;
  assign compareStage_controlPipe_payload_mainCompare = readStage_controlPipe_translated_rData_mainCompare;
  assign compareStage_controlPipe_payload_counterCompare = readStage_controlPipe_translated_rData_counterCompare;
  assign compareStage_controlPipe_payload_mainDiff = readStage_controlPipe_translated_rData_mainDiff;
  assign compareStage_controlPipe_payload_counterDiff = readStage_controlPipe_translated_rData_counterDiff;
  assign compareStage_controlPipe_payload_twiceCompValid = readStage_controlPipe_translated_rData_twiceCompValid;
  assign compareStage_controlPipe_payload_twiceMode = readStage_controlPipe_translated_rData_twiceMode;
  always @(*) begin
    compareStage_mainOnePixelStream_ready = diffStage_mainOnePixelStream_ready;
    if(when_Stream_l368_6) begin
      compareStage_mainOnePixelStream_ready = 1'b1;
    end
  end

  assign when_Stream_l368_6 = (! diffStage_mainOnePixelStream_valid);
  assign diffStage_mainOnePixelStream_valid = compareStage_mainOnePixelStream_rValid;
  assign diffStage_mainOnePixelStream_payload = compareStage_mainOnePixelStream_rData;
  always @(*) begin
    compareStage_counterOnePixelStream_ready = diffStage_counterOnePixelStream_ready;
    if(when_Stream_l368_7) begin
      compareStage_counterOnePixelStream_ready = 1'b1;
    end
  end

  assign when_Stream_l368_7 = (! diffStage_counterOnePixelStream_valid);
  assign diffStage_counterOnePixelStream_valid = compareStage_counterOnePixelStream_rValid;
  assign diffStage_counterOnePixelStream_payload = compareStage_counterOnePixelStream_rData;
  always @(*) begin
    compareStage_mainTwoPixelStream_ready = diffStage_mainTwoPixelStream_ready;
    if(when_Stream_l368_8) begin
      compareStage_mainTwoPixelStream_ready = 1'b1;
    end
  end

  assign when_Stream_l368_8 = (! diffStage_mainTwoPixelStream_valid);
  assign diffStage_mainTwoPixelStream_valid = compareStage_mainTwoPixelStream_rValid;
  assign diffStage_mainTwoPixelStream_payload = compareStage_mainTwoPixelStream_rData;
  always @(*) begin
    compareStage_counterTwoPixelStream_ready = diffStage_counterTwoPixelStream_ready;
    if(when_Stream_l368_9) begin
      compareStage_counterTwoPixelStream_ready = 1'b1;
    end
  end

  assign when_Stream_l368_9 = (! diffStage_counterTwoPixelStream_valid);
  assign diffStage_counterTwoPixelStream_valid = compareStage_counterTwoPixelStream_rValid;
  assign diffStage_counterTwoPixelStream_payload = compareStage_counterTwoPixelStream_rData;
  always @(*) begin
    _zz_compareStage_controlPipe_translated_payload_mainDiff = compareStage_controlPipe_payload_mainDiff;
    if(compareStage_controlPipe_payload_onceValid) begin
      case(compareStage_controlPipe_payload_onceMode)
        3'b000 : begin
          if(compareStage_controlPipe_payload_mainCompare) begin
            _zz_compareStage_controlPipe_translated_payload_mainDiff = (compareStage_mainOnePixelStream_payload - compareStage_counterOnePixelStream_payload);
          end else begin
            _zz_compareStage_controlPipe_translated_payload_mainDiff = (compareStage_counterOnePixelStream_payload - compareStage_mainOnePixelStream_payload);
          end
        end
        3'b001 : begin
          if(compareStage_controlPipe_payload_mainCompare) begin
            _zz_compareStage_controlPipe_translated_payload_mainDiff = (compareStage_mainTwoPixelStream_payload - compareStage_counterTwoPixelStream_payload);
          end else begin
            _zz_compareStage_controlPipe_translated_payload_mainDiff = (compareStage_counterTwoPixelStream_payload - compareStage_mainTwoPixelStream_payload);
          end
        end
        3'b010 : begin
          if(compareStage_controlPipe_payload_mainCompare) begin
            _zz_compareStage_controlPipe_translated_payload_mainDiff = (compareStage_mainOnePixelStream_payload - compareStage_mainTwoPixelStream_payload);
          end else begin
            _zz_compareStage_controlPipe_translated_payload_mainDiff = (compareStage_mainTwoPixelStream_payload - compareStage_mainOnePixelStream_payload);
          end
        end
        3'b011 : begin
          if(compareStage_controlPipe_payload_mainCompare) begin
            _zz_compareStage_controlPipe_translated_payload_mainDiff = (compareStage_mainTwoPixelStream_payload - compareStage_mainOnePixelStream_payload);
          end else begin
            _zz_compareStage_controlPipe_translated_payload_mainDiff = (compareStage_mainOnePixelStream_payload - compareStage_mainTwoPixelStream_payload);
          end
        end
        3'b100 : begin
          _zz_compareStage_controlPipe_translated_payload_mainDiff = 8'h0;
        end
        3'b101 : begin
          _zz_compareStage_controlPipe_translated_payload_mainDiff = 8'h0;
        end
        default : begin
        end
      endcase
    end
    if(compareStage_controlPipe_payload_twiceCompValid) begin
      case(compareStage_controlPipe_payload_twiceMode)
        3'b000 : begin
          if(compareStage_controlPipe_payload_mainCompare) begin
            _zz_compareStage_controlPipe_translated_payload_mainDiff = (compareStage_mainOnePixelStream_payload - compareStage_mainTwoPixelStream_payload);
          end else begin
            _zz_compareStage_controlPipe_translated_payload_mainDiff = (compareStage_mainTwoPixelStream_payload - compareStage_mainOnePixelStream_payload);
          end
        end
        3'b001 : begin
          if(compareStage_controlPipe_payload_mainCompare) begin
            _zz_compareStage_controlPipe_translated_payload_mainDiff = (compareStage_mainTwoPixelStream_payload - compareStage_mainOnePixelStream_payload);
          end else begin
            _zz_compareStage_controlPipe_translated_payload_mainDiff = (compareStage_mainOnePixelStream_payload - compareStage_mainTwoPixelStream_payload);
          end
        end
        3'b010 : begin
          _zz_compareStage_controlPipe_translated_payload_mainDiff = 8'h0;
        end
        3'b011 : begin
          if(compareStage_controlPipe_payload_mainCompare) begin
            _zz_compareStage_controlPipe_translated_payload_mainDiff = (compareStage_mainTwoPixelStream_payload - compareStage_counterTwoPixelStream_payload);
          end else begin
            _zz_compareStage_controlPipe_translated_payload_mainDiff = (compareStage_counterTwoPixelStream_payload - compareStage_mainTwoPixelStream_payload);
          end
        end
        3'b100 : begin
          _zz_compareStage_controlPipe_translated_payload_mainDiff = 8'h0;
        end
        3'b101 : begin
          if(compareStage_controlPipe_payload_mainCompare) begin
            _zz_compareStage_controlPipe_translated_payload_mainDiff = (compareStage_mainOnePixelStream_payload - compareStage_counterOnePixelStream_payload);
          end else begin
            _zz_compareStage_controlPipe_translated_payload_mainDiff = (compareStage_counterOnePixelStream_payload - compareStage_mainOnePixelStream_payload);
          end
        end
        default : begin
        end
      endcase
    end
  end

  always @(*) begin
    _zz_compareStage_controlPipe_translated_payload_counterDiff = compareStage_controlPipe_payload_counterDiff;
    if(compareStage_controlPipe_payload_twiceCompValid) begin
      case(compareStage_controlPipe_payload_twiceMode)
        3'b000 : begin
          if(compareStage_controlPipe_payload_counterCompare) begin
            _zz_compareStage_controlPipe_translated_payload_counterDiff = (compareStage_counterTwoPixelStream_payload - compareStage_counterOnePixelStream_payload);
          end else begin
            _zz_compareStage_controlPipe_translated_payload_counterDiff = (compareStage_counterOnePixelStream_payload - compareStage_counterTwoPixelStream_payload);
          end
        end
        3'b001 : begin
          if(compareStage_controlPipe_payload_counterCompare) begin
            _zz_compareStage_controlPipe_translated_payload_counterDiff = (compareStage_counterOnePixelStream_payload - compareStage_counterTwoPixelStream_payload);
          end else begin
            _zz_compareStage_controlPipe_translated_payload_counterDiff = (compareStage_counterTwoPixelStream_payload - compareStage_counterOnePixelStream_payload);
          end
        end
        default : begin
        end
      endcase
    end
  end

  assign compareStage_controlPipe_translated_valid = compareStage_controlPipe_valid;
  assign compareStage_controlPipe_ready = compareStage_controlPipe_translated_ready;
  assign compareStage_controlPipe_translated_payload_frameStart = compareStage_controlPipe_payload_frameStart;
  assign compareStage_controlPipe_translated_payload_rowEnd = compareStage_controlPipe_payload_rowEnd;
  assign compareStage_controlPipe_translated_payload_passMode = compareStage_controlPipe_payload_passMode;
  assign compareStage_controlPipe_translated_payload_passValid = compareStage_controlPipe_payload_passValid;
  assign compareStage_controlPipe_translated_payload_onceMode = compareStage_controlPipe_payload_onceMode;
  assign compareStage_controlPipe_translated_payload_onceValid = compareStage_controlPipe_payload_onceValid;
  assign compareStage_controlPipe_translated_payload_mainCompare = compareStage_controlPipe_payload_mainCompare;
  assign compareStage_controlPipe_translated_payload_counterCompare = compareStage_controlPipe_payload_counterCompare;
  assign compareStage_controlPipe_translated_payload_mainDiff = _zz_compareStage_controlPipe_translated_payload_mainDiff;
  assign compareStage_controlPipe_translated_payload_counterDiff = _zz_compareStage_controlPipe_translated_payload_counterDiff;
  assign compareStage_controlPipe_translated_payload_twiceCompValid = compareStage_controlPipe_payload_twiceCompValid;
  assign compareStage_controlPipe_translated_payload_twiceMode = compareStage_controlPipe_payload_twiceMode;
  always @(*) begin
    compareStage_controlPipe_translated_ready = diffStage_controlPipe_ready;
    if(when_Stream_l368_10) begin
      compareStage_controlPipe_translated_ready = 1'b1;
    end
  end

  assign when_Stream_l368_10 = (! diffStage_controlPipe_valid);
  assign diffStage_controlPipe_valid = compareStage_controlPipe_translated_rValid;
  assign diffStage_controlPipe_payload_frameStart = compareStage_controlPipe_translated_rData_frameStart;
  assign diffStage_controlPipe_payload_rowEnd = compareStage_controlPipe_translated_rData_rowEnd;
  assign diffStage_controlPipe_payload_passMode = compareStage_controlPipe_translated_rData_passMode;
  assign diffStage_controlPipe_payload_passValid = compareStage_controlPipe_translated_rData_passValid;
  assign diffStage_controlPipe_payload_onceMode = compareStage_controlPipe_translated_rData_onceMode;
  assign diffStage_controlPipe_payload_onceValid = compareStage_controlPipe_translated_rData_onceValid;
  assign diffStage_controlPipe_payload_mainCompare = compareStage_controlPipe_translated_rData_mainCompare;
  assign diffStage_controlPipe_payload_counterCompare = compareStage_controlPipe_translated_rData_counterCompare;
  assign diffStage_controlPipe_payload_mainDiff = compareStage_controlPipe_translated_rData_mainDiff;
  assign diffStage_controlPipe_payload_counterDiff = compareStage_controlPipe_translated_rData_counterDiff;
  assign diffStage_controlPipe_payload_twiceCompValid = compareStage_controlPipe_translated_rData_twiceCompValid;
  assign diffStage_controlPipe_payload_twiceMode = compareStage_controlPipe_translated_rData_twiceMode;
  always @(*) begin
    diffStage_mainOnePixelStream_ready = resultStage_mainOnePixelStream_ready;
    if(when_Stream_l368_11) begin
      diffStage_mainOnePixelStream_ready = 1'b1;
    end
  end

  assign when_Stream_l368_11 = (! resultStage_mainOnePixelStream_valid);
  assign resultStage_mainOnePixelStream_valid = diffStage_mainOnePixelStream_rValid;
  assign resultStage_mainOnePixelStream_payload = diffStage_mainOnePixelStream_rData;
  always @(*) begin
    diffStage_counterOnePixelStream_ready = resultStage_counterOnePixelStream_ready;
    if(when_Stream_l368_12) begin
      diffStage_counterOnePixelStream_ready = 1'b1;
    end
  end

  assign when_Stream_l368_12 = (! resultStage_counterOnePixelStream_valid);
  assign resultStage_counterOnePixelStream_valid = diffStage_counterOnePixelStream_rValid;
  assign resultStage_counterOnePixelStream_payload = diffStage_counterOnePixelStream_rData;
  always @(*) begin
    diffStage_mainTwoPixelStream_ready = resultStage_mainTwoPixelStream_ready;
    if(when_Stream_l368_13) begin
      diffStage_mainTwoPixelStream_ready = 1'b1;
    end
  end

  assign when_Stream_l368_13 = (! resultStage_mainTwoPixelStream_valid);
  assign resultStage_mainTwoPixelStream_valid = diffStage_mainTwoPixelStream_rValid;
  assign resultStage_mainTwoPixelStream_payload = diffStage_mainTwoPixelStream_rData;
  always @(*) begin
    diffStage_counterTwoPixelStream_ready = resultStage_counterTwoPixelStream_ready;
    if(when_Stream_l368_14) begin
      diffStage_counterTwoPixelStream_ready = 1'b1;
    end
  end

  assign when_Stream_l368_14 = (! resultStage_counterTwoPixelStream_valid);
  assign resultStage_counterTwoPixelStream_valid = diffStage_counterTwoPixelStream_rValid;
  assign resultStage_counterTwoPixelStream_payload = diffStage_counterTwoPixelStream_rData;
  assign diffStage_controlPipe_ready = diffStage_controlPipe_fork_io_input_ready;
  always @(*) begin
    diffStage_controlPipe_fork_io_outputs_0_ready = resultStage_controlPipe_ready;
    if(when_Stream_l368_15) begin
      diffStage_controlPipe_fork_io_outputs_0_ready = 1'b1;
    end
  end

  assign when_Stream_l368_15 = (! resultStage_controlPipe_valid);
  assign resultStage_controlPipe_valid = diffStage_controlPipe_fork_io_outputs_0_rValid;
  assign resultStage_controlPipe_payload_frameStart = diffStage_controlPipe_fork_io_outputs_0_rData_frameStart;
  assign resultStage_controlPipe_payload_rowEnd = diffStage_controlPipe_fork_io_outputs_0_rData_rowEnd;
  assign resultStage_controlPipe_payload_passMode = diffStage_controlPipe_fork_io_outputs_0_rData_passMode;
  assign resultStage_controlPipe_payload_passValid = diffStage_controlPipe_fork_io_outputs_0_rData_passValid;
  assign resultStage_controlPipe_payload_onceMode = diffStage_controlPipe_fork_io_outputs_0_rData_onceMode;
  assign resultStage_controlPipe_payload_onceValid = diffStage_controlPipe_fork_io_outputs_0_rData_onceValid;
  assign resultStage_controlPipe_payload_mainCompare = diffStage_controlPipe_fork_io_outputs_0_rData_mainCompare;
  assign resultStage_controlPipe_payload_counterCompare = diffStage_controlPipe_fork_io_outputs_0_rData_counterCompare;
  assign resultStage_controlPipe_payload_mainDiff = diffStage_controlPipe_fork_io_outputs_0_rData_mainDiff;
  assign resultStage_controlPipe_payload_counterDiff = diffStage_controlPipe_fork_io_outputs_0_rData_counterDiff;
  assign resultStage_controlPipe_payload_twiceCompValid = diffStage_controlPipe_fork_io_outputs_0_rData_twiceCompValid;
  assign resultStage_controlPipe_payload_twiceMode = diffStage_controlPipe_fork_io_outputs_0_rData_twiceMode;
  assign resultStage_pixelStream_valid = diffStage_controlPipe_fork_io_outputs_1_valid;
  always @(*) begin
    resultStage_pixelStream_payload = 8'h0;
    if(diffStage_controlPipe_fork_io_outputs_1_payload_passValid) begin
      case(diffStage_controlPipe_fork_io_outputs_1_payload_passMode)
        1'b1 : begin
          resultStage_pixelStream_payload = diffStage_mainTwoPixelStream_payload;
        end
        default : begin
          resultStage_pixelStream_payload = diffStage_mainOnePixelStream_payload;
        end
      endcase
    end
    if(diffStage_controlPipe_fork_io_outputs_1_payload_onceValid) begin
      case(diffStage_controlPipe_fork_io_outputs_1_payload_onceMode)
        3'b000 : begin
          if(when_SuperResolutionPart1_l452) begin
            resultStage_pixelStream_payload = diffStage_mainOnePixelStream_payload;
          end else begin
            resultStage_pixelStream_payload = _zz_resultStage_pixelStream_payload[7:0];
          end
        end
        3'b001 : begin
          if(when_SuperResolutionPart1_l460) begin
            resultStage_pixelStream_payload = diffStage_mainTwoPixelStream_payload;
          end else begin
            resultStage_pixelStream_payload = _zz_resultStage_pixelStream_payload_2[7:0];
          end
        end
        3'b010 : begin
          if(when_SuperResolutionPart1_l468) begin
            resultStage_pixelStream_payload = diffStage_mainOnePixelStream_payload;
          end else begin
            resultStage_pixelStream_payload = _zz_resultStage_pixelStream_payload_4[7:0];
          end
        end
        3'b011 : begin
          if(when_SuperResolutionPart1_l476) begin
            resultStage_pixelStream_payload = diffStage_mainTwoPixelStream_payload;
          end else begin
            resultStage_pixelStream_payload = _zz_resultStage_pixelStream_payload_6[7:0];
          end
        end
        3'b100 : begin
          resultStage_pixelStream_payload = diffStage_mainTwoPixelStream_payload;
        end
        3'b101 : begin
          resultStage_pixelStream_payload = diffStage_mainOnePixelStream_payload;
        end
        default : begin
        end
      endcase
    end
    if(diffStage_controlPipe_fork_io_outputs_1_payload_twiceCompValid) begin
      case(diffStage_controlPipe_fork_io_outputs_1_payload_twiceMode)
        3'b000 : begin
          if(when_SuperResolutionPart1_l496) begin
            case(switch_SuperResolutionPart1_l497)
              1'b1 : begin
                resultStage_pixelStream_payload = diffStage_mainOnePixelStream_payload;
              end
              default : begin
                resultStage_pixelStream_payload = diffStage_counterTwoPixelStream_payload;
              end
            endcase
          end else begin
            case(switch_SuperResolutionPart1_l506)
              1'b1 : begin
                resultStage_pixelStream_payload = _zz_resultStage_pixelStream_payload_8[7:0];
              end
              default : begin
                resultStage_pixelStream_payload = _zz_resultStage_pixelStream_payload_10[7:0];
              end
            endcase
          end
        end
        3'b001 : begin
          if(when_SuperResolutionPart1_l518) begin
            case(switch_SuperResolutionPart1_l519)
              1'b1 : begin
                resultStage_pixelStream_payload = diffStage_mainTwoPixelStream_payload;
              end
              default : begin
                resultStage_pixelStream_payload = diffStage_counterOnePixelStream_payload;
              end
            endcase
          end else begin
            case(switch_SuperResolutionPart1_l528)
              1'b1 : begin
                resultStage_pixelStream_payload = _zz_resultStage_pixelStream_payload_12[7:0];
              end
              default : begin
                resultStage_pixelStream_payload = _zz_resultStage_pixelStream_payload_14[7:0];
              end
            endcase
          end
        end
        3'b010 : begin
          resultStage_pixelStream_payload = diffStage_mainTwoPixelStream_payload;
        end
        3'b011 : begin
          if(when_SuperResolutionPart1_l544) begin
            resultStage_pixelStream_payload = diffStage_mainTwoPixelStream_payload;
          end else begin
            resultStage_pixelStream_payload = _zz_resultStage_pixelStream_payload_16[7:0];
          end
        end
        3'b100 : begin
          resultStage_pixelStream_payload = diffStage_mainOnePixelStream_payload;
        end
        3'b101 : begin
          if(when_SuperResolutionPart1_l556) begin
            resultStage_pixelStream_payload = diffStage_mainOnePixelStream_payload;
          end else begin
            resultStage_pixelStream_payload = _zz_resultStage_pixelStream_payload_18[7:0];
          end
        end
        default : begin
        end
      endcase
    end
  end

  assign when_SuperResolutionPart1_l452 = (inpThreshold <= diffStage_controlPipe_fork_io_outputs_1_payload_mainDiff);
  assign when_SuperResolutionPart1_l460 = (inpThreshold <= diffStage_controlPipe_fork_io_outputs_1_payload_mainDiff);
  assign when_SuperResolutionPart1_l468 = (inpThreshold <= diffStage_controlPipe_fork_io_outputs_1_payload_mainDiff);
  assign when_SuperResolutionPart1_l476 = (inpThreshold <= diffStage_controlPipe_fork_io_outputs_1_payload_mainDiff);
  assign when_SuperResolutionPart1_l496 = ((inpThreshold <= diffStage_controlPipe_fork_io_outputs_1_payload_mainDiff) && (inpThreshold <= diffStage_controlPipe_fork_io_outputs_1_payload_counterDiff));
  assign switch_SuperResolutionPart1_l497 = (diffStage_controlPipe_fork_io_outputs_1_payload_counterDiff <= diffStage_controlPipe_fork_io_outputs_1_payload_mainDiff);
  assign switch_SuperResolutionPart1_l506 = (diffStage_controlPipe_fork_io_outputs_1_payload_counterDiff <= diffStage_controlPipe_fork_io_outputs_1_payload_mainDiff);
  assign when_SuperResolutionPart1_l518 = ((inpThreshold <= diffStage_controlPipe_fork_io_outputs_1_payload_mainDiff) && (inpThreshold <= diffStage_controlPipe_fork_io_outputs_1_payload_counterDiff));
  assign switch_SuperResolutionPart1_l519 = (diffStage_controlPipe_fork_io_outputs_1_payload_counterDiff <= diffStage_controlPipe_fork_io_outputs_1_payload_mainDiff);
  assign switch_SuperResolutionPart1_l528 = (diffStage_controlPipe_fork_io_outputs_1_payload_counterDiff <= diffStage_controlPipe_fork_io_outputs_1_payload_mainDiff);
  assign when_SuperResolutionPart1_l544 = (inpThreshold <= diffStage_controlPipe_fork_io_outputs_1_payload_mainDiff);
  assign when_SuperResolutionPart1_l556 = (inpThreshold <= diffStage_controlPipe_fork_io_outputs_1_payload_mainDiff);
  always @(*) begin
    resultStage_pixelStream_ready = resultStage_resultStream_ready;
    if(when_Stream_l368_16) begin
      resultStage_pixelStream_ready = 1'b1;
    end
  end

  assign when_Stream_l368_16 = (! resultStage_resultStream_valid);
  assign resultStage_resultStream_valid = resultStage_pixelStream_rValid;
  assign resultStage_resultStream_payload = resultStage_pixelStream_rData;
  assign _zz_resultStage_mainOnePixelStream_ready_2 = (_zz_resultStage_mainOnePixelStream_ready && _zz_resultStage_mainOnePixelStream_ready_1);
  assign _zz_resultStage_mainOnePixelStream_ready = (((((resultStage_resultStream_valid && resultStage_mainOnePixelStream_valid) && resultStage_counterOnePixelStream_valid) && resultStage_mainTwoPixelStream_valid) && resultStage_counterTwoPixelStream_valid) && resultStage_controlPipe_valid);
  assign resultStage_resultStream_ready = _zz_resultStage_mainOnePixelStream_ready_2;
  assign resultStage_mainOnePixelStream_ready = _zz_resultStage_mainOnePixelStream_ready_2;
  assign resultStage_counterOnePixelStream_ready = _zz_resultStage_mainOnePixelStream_ready_2;
  assign resultStage_mainTwoPixelStream_ready = _zz_resultStage_mainOnePixelStream_ready_2;
  assign resultStage_counterTwoPixelStream_ready = _zz_resultStage_mainOnePixelStream_ready_2;
  assign resultStage_controlPipe_ready = _zz_resultStage_mainOnePixelStream_ready_2;
  assign when_Stream_l434 = (((! resultStage_controlPipe_payload_passValid) && (! resultStage_controlPipe_payload_onceValid)) && (! resultStage_controlPipe_payload_twiceCompValid));
  always @(*) begin
    resultsJoin_valid = _zz_resultStage_mainOnePixelStream_ready;
    if(when_Stream_l434) begin
      resultsJoin_valid = 1'b0;
    end
  end

  always @(*) begin
    _zz_resultStage_mainOnePixelStream_ready_1 = resultsJoin_ready;
    if(when_Stream_l434) begin
      _zz_resultStage_mainOnePixelStream_ready_1 = 1'b1;
    end
  end

  assign pixelsStream_valid = resultsJoin_valid;
  assign resultsJoin_ready = pixelsStream_ready;
  assign pixelsStream_payload_pixel = resultStage_resultStream_payload;
  assign pixelsStream_payload_frameStart = resultStage_controlPipe_payload_frameStart;
  assign pixelsStream_payload_rowEnd = resultStage_controlPipe_payload_rowEnd;
  assign pixelsStream_payload_inpValid = 1'b1;
  assign pixelsStream_ready = (! pixelsStream_rValid);
  assign pixelsStream_s2mPipe_valid = (pixelsStream_valid || pixelsStream_rValid);
  assign pixelsStream_s2mPipe_payload_pixel = (pixelsStream_rValid ? pixelsStream_rData_pixel : pixelsStream_payload_pixel);
  assign pixelsStream_s2mPipe_payload_frameStart = (pixelsStream_rValid ? pixelsStream_rData_frameStart : pixelsStream_payload_frameStart);
  assign pixelsStream_s2mPipe_payload_rowEnd = (pixelsStream_rValid ? pixelsStream_rData_rowEnd : pixelsStream_payload_rowEnd);
  assign pixelsStream_s2mPipe_payload_inpValid = (pixelsStream_rValid ? pixelsStream_rData_inpValid : pixelsStream_payload_inpValid);
  always @(*) begin
    pixelsStream_s2mPipe_ready = pixelsStream_s2mPipe_m2sPipe_ready;
    if(when_Stream_l368_17) begin
      pixelsStream_s2mPipe_ready = 1'b1;
    end
  end

  assign when_Stream_l368_17 = (! pixelsStream_s2mPipe_m2sPipe_valid);
  assign pixelsStream_s2mPipe_m2sPipe_valid = pixelsStream_s2mPipe_rValid;
  assign pixelsStream_s2mPipe_m2sPipe_payload_pixel = pixelsStream_s2mPipe_rData_pixel;
  assign pixelsStream_s2mPipe_m2sPipe_payload_frameStart = pixelsStream_s2mPipe_rData_frameStart;
  assign pixelsStream_s2mPipe_m2sPipe_payload_rowEnd = pixelsStream_s2mPipe_rData_rowEnd;
  assign pixelsStream_s2mPipe_m2sPipe_payload_inpValid = pixelsStream_s2mPipe_rData_inpValid;
  assign pixelsStream_s2mPipe_m2sPipe_ready = pixelsOut_ready;
  assign passPixels_valid = (pixelsIn_valid && bufferEnable);
  assign passPixels_payload_pixel = pixelsIn_payload_pixel;
  assign passPixels_payload_frameStart = pixelsIn_payload_frameStart;
  assign passPixels_payload_rowEnd = pixelsIn_payload_rowEnd;
  assign passPixels_ready = 1'b1;
  assign passPixels_fire = (passPixels_valid && passPixels_ready);
  assign when_SuperResolutionPart1_l597 = ((bufferWAddr_value == _zz_when_SuperResolutionPart1_l597) && passPixels_fire);
  assign passPixels_fire_1 = (passPixels_valid && passPixels_ready);
  assign when_SuperResolutionPart1_l598 = (((bufferRowCount_value == _zz_when_SuperResolutionPart1_l598) && bufferReachRowEnd) && passPixels_fire_1);
  assign passPixels_fire_2 = (passPixels_valid && passPixels_ready);
  assign when_SuperResolutionPart1_l601 = (passPixels_payload_rowEnd && passPixels_fire_2);
  assign passPixels_fire_3 = (passPixels_valid && passPixels_ready);
  assign when_SuperResolutionPart1_l612 = (passPixels_payload_rowEnd && passPixels_fire_3);
  assign passPixels_fire_4 = (passPixels_valid && passPixels_ready);
  assign when_SuperResolutionPart1_l613 = (((bufferRowCount_value != 3'b000) && passPixels_payload_rowEnd) && passPixels_fire_4);
  assign controlStream_fire = (controlStream_valid && controlStream_ready);
  assign when_SuperResolutionPart1_l617 = (((_zz_when_SuperResolutionPart1_l617 == 4'b0001) && controlStream_payload_rowEnd) && controlStream_fire);
  assign when_SuperResolutionPart1_l619 = 1'b1;
  assign passPixels_fire_5 = (passPixels_valid && passPixels_ready);
  assign passPixels_fire_6 = (passPixels_valid && passPixels_ready);
  assign passPixels_fire_7 = (passPixels_valid && passPixels_ready);
  assign controlStateMachine_wantExit = 1'b0;
  always @(*) begin
    controlStateMachine_wantStart = 1'b0;
    case(controlStateMachine_stateReg)
      controlStateMachine_enumDef_HOLD : begin
      end
      controlStateMachine_enumDef_PASS : begin
      end
      controlStateMachine_enumDef_ONCE : begin
      end
      controlStateMachine_enumDef_TWICE : begin
      end
      default : begin
        controlStateMachine_wantStart = 1'b1;
      end
    endcase
  end

  assign controlStateMachine_wantKill = 1'b0;
  always @(*) begin
    controlStateMachine_stateNext = controlStateMachine_stateReg;
    case(controlStateMachine_stateReg)
      controlStateMachine_enumDef_HOLD : begin
        case(switch_SuperResolutionPart1_l653)
          1'b1 : begin
            if(passPixels_fire_8) begin
              case(switch_SuperResolutionPart1_l656)
                1'b1 : begin
                  controlStateMachine_stateNext = controlStateMachine_enumDef_PASS;
                end
                default : begin
                  controlStateMachine_stateNext = controlStateMachine_enumDef_ONCE;
                end
              endcase
            end
          end
          default : begin
            if(passPixels_fire_9) begin
              case(switch_SuperResolutionPart1_l669)
                1'b1 : begin
                  controlStateMachine_stateNext = controlStateMachine_enumDef_ONCE;
                end
                default : begin
                  controlStateMachine_stateNext = controlStateMachine_enumDef_TWICE;
                end
              endcase
            end
          end
        endcase
      end
      controlStateMachine_enumDef_PASS : begin
        if(controlStream_fire_1) begin
          if(when_SuperResolutionPart1_l687) begin
            controlStateMachine_stateNext = controlStateMachine_enumDef_ONCE;
          end else begin
            case(switch_SuperResolutionPart1_l690)
              1'b1 : begin
                controlStateMachine_stateNext = controlStateMachine_enumDef_HOLD;
              end
              default : begin
                controlStateMachine_stateNext = controlStateMachine_enumDef_ONCE;
              end
            endcase
          end
        end
      end
      controlStateMachine_enumDef_ONCE : begin
        case(switch_SuperResolutionPart1_l743)
          1'b1 : begin
            if(controlStream_fire_7) begin
              if(outReachRowEnd) begin
                if(bufferReuse) begin
                  controlStateMachine_stateNext = controlStateMachine_enumDef_ONCE;
                end else begin
                  if(when_SuperResolutionPart1_l750) begin
                    controlStateMachine_stateNext = controlStateMachine_enumDef_HOLD;
                  end else begin
                    controlStateMachine_stateNext = controlStateMachine_enumDef_ONCE;
                  end
                end
              end else begin
                controlStateMachine_stateNext = controlStateMachine_enumDef_PASS;
              end
            end
          end
          default : begin
            if(controlStream_fire_8) begin
              if(bufferReuse) begin
                controlStateMachine_stateNext = controlStateMachine_enumDef_TWICE;
              end else begin
                case(switch_SuperResolutionPart1_l790)
                  1'b1 : begin
                    controlStateMachine_stateNext = controlStateMachine_enumDef_HOLD;
                  end
                  default : begin
                    controlStateMachine_stateNext = controlStateMachine_enumDef_TWICE;
                  end
                endcase
              end
            end
          end
        endcase
      end
      controlStateMachine_enumDef_TWICE : begin
        if(controlStream_fire_13) begin
          if(outReachRowEnd) begin
            if(bufferReuse) begin
              controlStateMachine_stateNext = controlStateMachine_enumDef_PASS;
            end else begin
              case(switch_SuperResolutionPart1_l856)
                1'b1 : begin
                  controlStateMachine_stateNext = controlStateMachine_enumDef_HOLD;
                end
                default : begin
                  controlStateMachine_stateNext = controlStateMachine_enumDef_PASS;
                end
              endcase
            end
          end else begin
            controlStateMachine_stateNext = controlStateMachine_enumDef_ONCE;
          end
        end
      end
      default : begin
      end
    endcase
    if(controlStateMachine_wantStart) begin
      controlStateMachine_stateNext = controlStateMachine_enumDef_HOLD;
    end
    if(controlStateMachine_wantKill) begin
      controlStateMachine_stateNext = controlStateMachine_enumDef_BOOT;
    end
  end

  assign switch_SuperResolutionPart1_l653 = (_zz_switch_SuperResolutionPart1_l653 == 4'b0000);
  assign passPixels_fire_8 = (passPixels_valid && passPixels_ready);
  assign switch_SuperResolutionPart1_l656 = (_zz_switch_SuperResolutionPart1_l656 == 4'b0000);
  assign passPixels_fire_9 = (passPixels_valid && passPixels_ready);
  assign switch_SuperResolutionPart1_l669 = (_zz_switch_SuperResolutionPart1_l669 == 4'b0000);
  assign controlStream_fire_1 = (controlStream_valid && controlStream_ready);
  assign when_SuperResolutionPart1_l687 = ((_zz_when_SuperResolutionPart1_l687 < _zz_when_SuperResolutionPart1_l687_1) || bufferReuse);
  assign passPixels_fire_10 = (passPixels_valid && passPixels_ready);
  assign switch_SuperResolutionPart1_l690 = ((_zz_switch_SuperResolutionPart1_l690 == _zz_switch_SuperResolutionPart1_l690_1) && (! passPixels_fire_10));
  assign controlStream_fire_2 = (controlStream_valid && controlStream_ready);
  assign when_SuperResolutionPart1_l707 = (frameStart && controlStream_fire_2);
  assign controlStream_fire_3 = (controlStream_valid && controlStream_ready);
  assign when_SuperResolutionPart1_l710 = (controlStream_fire_3 && (_zz_when_SuperResolutionPart1_l710 == _zz_when_SuperResolutionPart1_l710_1));
  assign controlStream_fire_4 = (controlStream_valid && controlStream_ready);
  assign when_SuperResolutionPart1_l711 = ((outReachRowEnd && (_zz_when_SuperResolutionPart1_l711 == _zz_when_SuperResolutionPart1_l711_1)) && controlStream_fire_4);
  assign controlStream_fire_5 = (controlStream_valid && controlStream_ready);
  assign when_SuperResolutionPart1_l713 = (controlStream_fire_5 && outReachRowEnd);
  assign controlStream_fire_6 = (controlStream_valid && controlStream_ready);
  assign switch_SuperResolutionPart1_l743 = (_zz_switch_SuperResolutionPart1_l743 == 4'b0000);
  assign controlStream_fire_7 = (controlStream_valid && controlStream_ready);
  assign when_SuperResolutionPart1_l750 = ((bufferWAddr_value == 3'b000) && (_zz_when_SuperResolutionPart1_l750 == _zz_when_SuperResolutionPart1_l750_2));
  assign controlStream_fire_8 = (controlStream_valid && controlStream_ready);
  assign passPixels_fire_11 = (passPixels_valid && passPixels_ready);
  assign switch_SuperResolutionPart1_l790 = ((_zz_switch_SuperResolutionPart1_l790 == _zz_switch_SuperResolutionPart1_l790_1) && (! passPixels_fire_11));
  assign controlStream_fire_9 = (controlStream_valid && controlStream_ready);
  assign when_SuperResolutionPart1_l818 = (controlStream_fire_9 && (_zz_when_SuperResolutionPart1_l818 == _zz_when_SuperResolutionPart1_l818_1));
  assign controlStream_fire_10 = (controlStream_valid && controlStream_ready);
  assign when_SuperResolutionPart1_l819 = ((outReachRowEnd && (_zz_when_SuperResolutionPart1_l819 == _zz_when_SuperResolutionPart1_l819_1)) && controlStream_fire_10);
  assign controlStream_fire_11 = (controlStream_valid && controlStream_ready);
  assign when_SuperResolutionPart1_l821 = (controlStream_fire_11 && outReachRowEnd);
  assign controlStream_fire_12 = (controlStream_valid && controlStream_ready);
  assign controlStream_fire_13 = (controlStream_valid && controlStream_ready);
  assign switch_SuperResolutionPart1_l856 = (bufferWAddr_value == 3'b000);
  assign controlStream_fire_14 = (controlStream_valid && controlStream_ready);
  assign when_SuperResolutionPart1_l924 = (controlStream_fire_14 && (_zz_when_SuperResolutionPart1_l924 == _zz_when_SuperResolutionPart1_l924_1));
  assign controlStream_fire_15 = (controlStream_valid && controlStream_ready);
  assign when_SuperResolutionPart1_l925 = ((outReachRowEnd && (_zz_when_SuperResolutionPart1_l925 == _zz_when_SuperResolutionPart1_l925_1)) && controlStream_fire_15);
  assign controlStream_fire_16 = (controlStream_valid && controlStream_ready);
  assign when_SuperResolutionPart1_l927 = (controlStream_fire_16 && outReachRowEnd);
  assign controlStream_fire_17 = (controlStream_valid && controlStream_ready);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      inpDone <= 1'b0;
      internalDone <= 1'b0;
      startRead <= 1'b0;
      slaveStart <= 1'b0;
      frameStart <= 1'b0;
      inpThreshold <= 8'h80;
      bmpWidth <= 3'b101;
      bmpHeight <= 3'b101;
      holdBuffer <= 1'b0;
      bufferRowCount_value <= 3'b000;
      bufferEnable <= 1'b0;
      bufferSwitch <= 1'b0;
      nextRowBuffer <= 1'b1;
      bufferReuse <= 1'b0;
      bufferWAddr_value <= 3'b000;
      outPixelAddr_value <= 4'b0000;
      outRowCount_value <= 4'b0000;
      outReachRowEnd <= 1'b0;
      outReachFinalRow <= 1'b0;
      bufferReachRowEnd <= 1'b0;
      bufferReachFinalRow <= 1'b0;
      _zz_readStage_mainOnePixelStream_valid <= 1'b0;
      _zz_readStage_counterOnePixelStream_valid <= 1'b0;
      _zz_readStage_mainTwoPixelStream_valid <= 1'b0;
      _zz_readStage_counterTwoPixelStream_valid <= 1'b0;
      controlStream_rValid <= 1'b0;
      readStage_mainOnePixelStream_rValid <= 1'b0;
      readStage_counterOnePixelStream_rValid <= 1'b0;
      readStage_mainTwoPixelStream_rValid <= 1'b0;
      readStage_counterTwoPixelStream_rValid <= 1'b0;
      readStage_controlPipe_translated_rValid <= 1'b0;
      compareStage_mainOnePixelStream_rValid <= 1'b0;
      compareStage_counterOnePixelStream_rValid <= 1'b0;
      compareStage_mainTwoPixelStream_rValid <= 1'b0;
      compareStage_counterTwoPixelStream_rValid <= 1'b0;
      compareStage_controlPipe_translated_rValid <= 1'b0;
      diffStage_mainOnePixelStream_rValid <= 1'b0;
      diffStage_counterOnePixelStream_rValid <= 1'b0;
      diffStage_mainTwoPixelStream_rValid <= 1'b0;
      diffStage_counterTwoPixelStream_rValid <= 1'b0;
      diffStage_controlPipe_fork_io_outputs_0_rValid <= 1'b0;
      resultStage_pixelStream_rValid <= 1'b0;
      pixelsStream_rValid <= 1'b0;
      pixelsStream_s2mPipe_rValid <= 1'b0;
      controlStateMachine_stateReg <= controlStateMachine_enumDef_BOOT;
    end else begin
      if(inpThreeDoneIn) begin
        inpDone <= 1'b1;
      end
      if(StartIn) begin
        inpDone <= 1'b0;
      end
      if(inpDone) begin
        internalDone <= 1'b0;
      end
      if(when_SuperResolutionPart1_l81) begin
        startRead <= 1'b1;
      end
      if(when_SuperResolutionPart1_l84) begin
        slaveStart <= 1'b1;
      end
      if(inpTwoDoneIn) begin
        slaveStart <= 1'b0;
      end
      if(when_SuperResolutionPart1_l87) begin
        frameStart <= 1'b1;
      end
      inpThreshold <= thresholdIn;
      bmpWidth <= widthIn;
      bmpHeight <= heightIn;
      if(when_SuperResolutionPart1_l99) begin
        holdBuffer <= 1'b0;
      end
      bufferRowCount_value <= bufferRowCount_valueNext;
      if(when_SuperResolutionPart1_l105) begin
        bufferEnable <= 1'b1;
      end
      if(when_SuperResolutionPart1_l105_1) begin
        bufferEnable <= 1'b0;
      end
      if(when_SuperResolutionPart1_l108) begin
        bufferSwitch <= 1'b0;
      end
      if(when_SuperResolutionPart1_l111) begin
        nextRowBuffer <= 1'b1;
      end
      bufferWAddr_value <= bufferWAddr_valueNext;
      outPixelAddr_value <= outPixelAddr_valueNext;
      outRowCount_value <= outRowCount_valueNext;
      if(readStage_mainOnePixelStream_ready) begin
        _zz_readStage_mainOnePixelStream_valid <= 1'b0;
      end
      if(mainAddrOneStream_ready) begin
        _zz_readStage_mainOnePixelStream_valid <= mainAddrOneStream_valid;
      end
      if(readStage_counterOnePixelStream_ready) begin
        _zz_readStage_counterOnePixelStream_valid <= 1'b0;
      end
      if(counterAddrOneStream_ready) begin
        _zz_readStage_counterOnePixelStream_valid <= counterAddrOneStream_valid;
      end
      if(readStage_mainTwoPixelStream_ready) begin
        _zz_readStage_mainTwoPixelStream_valid <= 1'b0;
      end
      if(mainAddrTwoStream_ready) begin
        _zz_readStage_mainTwoPixelStream_valid <= mainAddrTwoStream_valid;
      end
      if(readStage_counterTwoPixelStream_ready) begin
        _zz_readStage_counterTwoPixelStream_valid <= 1'b0;
      end
      if(counterAddrTwoStream_ready) begin
        _zz_readStage_counterTwoPixelStream_valid <= counterAddrTwoStream_valid;
      end
      if(controlStream_ready) begin
        controlStream_rValid <= controlStream_valid;
      end
      if(readStage_mainOnePixelStream_ready) begin
        readStage_mainOnePixelStream_rValid <= readStage_mainOnePixelStream_valid;
      end
      if(readStage_counterOnePixelStream_ready) begin
        readStage_counterOnePixelStream_rValid <= readStage_counterOnePixelStream_valid;
      end
      if(readStage_mainTwoPixelStream_ready) begin
        readStage_mainTwoPixelStream_rValid <= readStage_mainTwoPixelStream_valid;
      end
      if(readStage_counterTwoPixelStream_ready) begin
        readStage_counterTwoPixelStream_rValid <= readStage_counterTwoPixelStream_valid;
      end
      if(readStage_controlPipe_translated_ready) begin
        readStage_controlPipe_translated_rValid <= readStage_controlPipe_translated_valid;
      end
      if(compareStage_mainOnePixelStream_ready) begin
        compareStage_mainOnePixelStream_rValid <= compareStage_mainOnePixelStream_valid;
      end
      if(compareStage_counterOnePixelStream_ready) begin
        compareStage_counterOnePixelStream_rValid <= compareStage_counterOnePixelStream_valid;
      end
      if(compareStage_mainTwoPixelStream_ready) begin
        compareStage_mainTwoPixelStream_rValid <= compareStage_mainTwoPixelStream_valid;
      end
      if(compareStage_counterTwoPixelStream_ready) begin
        compareStage_counterTwoPixelStream_rValid <= compareStage_counterTwoPixelStream_valid;
      end
      if(compareStage_controlPipe_translated_ready) begin
        compareStage_controlPipe_translated_rValid <= compareStage_controlPipe_translated_valid;
      end
      if(diffStage_mainOnePixelStream_ready) begin
        diffStage_mainOnePixelStream_rValid <= diffStage_mainOnePixelStream_valid;
      end
      if(diffStage_counterOnePixelStream_ready) begin
        diffStage_counterOnePixelStream_rValid <= diffStage_counterOnePixelStream_valid;
      end
      if(diffStage_mainTwoPixelStream_ready) begin
        diffStage_mainTwoPixelStream_rValid <= diffStage_mainTwoPixelStream_valid;
      end
      if(diffStage_counterTwoPixelStream_ready) begin
        diffStage_counterTwoPixelStream_rValid <= diffStage_counterTwoPixelStream_valid;
      end
      if(diffStage_controlPipe_fork_io_outputs_0_ready) begin
        diffStage_controlPipe_fork_io_outputs_0_rValid <= diffStage_controlPipe_fork_io_outputs_0_valid;
      end
      if(resultStage_pixelStream_ready) begin
        resultStage_pixelStream_rValid <= resultStage_pixelStream_valid;
      end
      if(pixelsStream_valid) begin
        pixelsStream_rValid <= 1'b1;
      end
      if(pixelsStream_s2mPipe_ready) begin
        pixelsStream_rValid <= 1'b0;
      end
      if(pixelsStream_s2mPipe_ready) begin
        pixelsStream_s2mPipe_rValid <= pixelsStream_s2mPipe_valid;
      end
      if(when_SuperResolutionPart1_l597) begin
        bufferReachRowEnd <= 1'b1;
      end
      if(when_SuperResolutionPart1_l598) begin
        bufferReachFinalRow <= 1'b1;
      end
      if(when_SuperResolutionPart1_l601) begin
        if(bufferReachFinalRow) begin
          bufferReuse <= 1'b1;
        end else begin
          bufferReachRowEnd <= 1'b0;
        end
      end
      if(when_SuperResolutionPart1_l612) begin
        bufferSwitch <= (! bufferSwitch);
      end
      if(when_SuperResolutionPart1_l613) begin
        holdBuffer <= 1'b1;
        bufferEnable <= 1'b0;
      end
      if(when_SuperResolutionPart1_l617) begin
        holdBuffer <= 1'b0;
        if(when_SuperResolutionPart1_l619) begin
          nextRowBuffer <= (! nextRowBuffer);
        end
      end
      if(inpDone) begin
        inpDone <= 1'b0;
      end
      controlStateMachine_stateReg <= controlStateMachine_stateNext;
      case(controlStateMachine_stateReg)
        controlStateMachine_enumDef_HOLD : begin
        end
        controlStateMachine_enumDef_PASS : begin
          if(when_SuperResolutionPart1_l707) begin
            frameStart <= 1'b0;
          end
          if(when_SuperResolutionPart1_l710) begin
            outReachRowEnd <= 1'b1;
          end
          if(when_SuperResolutionPart1_l711) begin
            outReachFinalRow <= 1'b1;
          end
          if(when_SuperResolutionPart1_l713) begin
            if(outReachFinalRow) begin
              startRead <= 1'b0;
              internalDone <= 1'b1;
              outReachRowEnd <= 1'b0;
              outReachFinalRow <= 1'b0;
            end else begin
              outReachRowEnd <= 1'b0;
            end
          end
          if(controlStream_fire_6) begin
            if(outReachRowEnd) begin
              outReachRowEnd <= 1'b0;
            end
          end
        end
        controlStateMachine_enumDef_ONCE : begin
          if(when_SuperResolutionPart1_l818) begin
            outReachRowEnd <= 1'b1;
          end
          if(when_SuperResolutionPart1_l819) begin
            outReachFinalRow <= 1'b1;
          end
          if(when_SuperResolutionPart1_l821) begin
            if(outReachFinalRow) begin
              startRead <= 1'b0;
              internalDone <= 1'b1;
              outReachRowEnd <= 1'b0;
              outReachFinalRow <= 1'b0;
            end else begin
              outReachRowEnd <= 1'b0;
            end
          end
          if(controlStream_fire_12) begin
            if(outReachRowEnd) begin
              outReachRowEnd <= 1'b0;
            end
          end
        end
        controlStateMachine_enumDef_TWICE : begin
          if(when_SuperResolutionPart1_l924) begin
            outReachRowEnd <= 1'b1;
          end
          if(when_SuperResolutionPart1_l925) begin
            outReachFinalRow <= 1'b1;
          end
          if(when_SuperResolutionPart1_l927) begin
            if(outReachFinalRow) begin
              startRead <= 1'b0;
              internalDone <= 1'b1;
              outReachRowEnd <= 1'b0;
              outReachFinalRow <= 1'b0;
            end else begin
              outReachRowEnd <= 1'b0;
            end
          end
          if(controlStream_fire_17) begin
            if(outReachRowEnd) begin
              outReachRowEnd <= 1'b0;
            end
          end
        end
        default : begin
        end
      endcase
    end
  end

  always @(posedge clk) begin
    if(controlStream_ready) begin
      controlStream_rData_frameStart <= controlStream_payload_frameStart;
      controlStream_rData_rowEnd <= controlStream_payload_rowEnd;
      controlStream_rData_passMode <= controlStream_payload_passMode;
      controlStream_rData_passValid <= controlStream_payload_passValid;
      controlStream_rData_onceMode <= controlStream_payload_onceMode;
      controlStream_rData_onceValid <= controlStream_payload_onceValid;
      controlStream_rData_mainCompare <= controlStream_payload_mainCompare;
      controlStream_rData_counterCompare <= controlStream_payload_counterCompare;
      controlStream_rData_mainDiff <= controlStream_payload_mainDiff;
      controlStream_rData_counterDiff <= controlStream_payload_counterDiff;
      controlStream_rData_twiceCompValid <= controlStream_payload_twiceCompValid;
      controlStream_rData_twiceMode <= controlStream_payload_twiceMode;
    end
    if(readStage_mainOnePixelStream_ready) begin
      readStage_mainOnePixelStream_rData <= readStage_mainOnePixelStream_payload;
    end
    if(readStage_counterOnePixelStream_ready) begin
      readStage_counterOnePixelStream_rData <= readStage_counterOnePixelStream_payload;
    end
    if(readStage_mainTwoPixelStream_ready) begin
      readStage_mainTwoPixelStream_rData <= readStage_mainTwoPixelStream_payload;
    end
    if(readStage_counterTwoPixelStream_ready) begin
      readStage_counterTwoPixelStream_rData <= readStage_counterTwoPixelStream_payload;
    end
    if(readStage_controlPipe_translated_ready) begin
      readStage_controlPipe_translated_rData_frameStart <= readStage_controlPipe_translated_payload_frameStart;
      readStage_controlPipe_translated_rData_rowEnd <= readStage_controlPipe_translated_payload_rowEnd;
      readStage_controlPipe_translated_rData_passMode <= readStage_controlPipe_translated_payload_passMode;
      readStage_controlPipe_translated_rData_passValid <= readStage_controlPipe_translated_payload_passValid;
      readStage_controlPipe_translated_rData_onceMode <= readStage_controlPipe_translated_payload_onceMode;
      readStage_controlPipe_translated_rData_onceValid <= readStage_controlPipe_translated_payload_onceValid;
      readStage_controlPipe_translated_rData_mainCompare <= readStage_controlPipe_translated_payload_mainCompare;
      readStage_controlPipe_translated_rData_counterCompare <= readStage_controlPipe_translated_payload_counterCompare;
      readStage_controlPipe_translated_rData_mainDiff <= readStage_controlPipe_translated_payload_mainDiff;
      readStage_controlPipe_translated_rData_counterDiff <= readStage_controlPipe_translated_payload_counterDiff;
      readStage_controlPipe_translated_rData_twiceCompValid <= readStage_controlPipe_translated_payload_twiceCompValid;
      readStage_controlPipe_translated_rData_twiceMode <= readStage_controlPipe_translated_payload_twiceMode;
    end
    if(compareStage_mainOnePixelStream_ready) begin
      compareStage_mainOnePixelStream_rData <= compareStage_mainOnePixelStream_payload;
    end
    if(compareStage_counterOnePixelStream_ready) begin
      compareStage_counterOnePixelStream_rData <= compareStage_counterOnePixelStream_payload;
    end
    if(compareStage_mainTwoPixelStream_ready) begin
      compareStage_mainTwoPixelStream_rData <= compareStage_mainTwoPixelStream_payload;
    end
    if(compareStage_counterTwoPixelStream_ready) begin
      compareStage_counterTwoPixelStream_rData <= compareStage_counterTwoPixelStream_payload;
    end
    if(compareStage_controlPipe_translated_ready) begin
      compareStage_controlPipe_translated_rData_frameStart <= compareStage_controlPipe_translated_payload_frameStart;
      compareStage_controlPipe_translated_rData_rowEnd <= compareStage_controlPipe_translated_payload_rowEnd;
      compareStage_controlPipe_translated_rData_passMode <= compareStage_controlPipe_translated_payload_passMode;
      compareStage_controlPipe_translated_rData_passValid <= compareStage_controlPipe_translated_payload_passValid;
      compareStage_controlPipe_translated_rData_onceMode <= compareStage_controlPipe_translated_payload_onceMode;
      compareStage_controlPipe_translated_rData_onceValid <= compareStage_controlPipe_translated_payload_onceValid;
      compareStage_controlPipe_translated_rData_mainCompare <= compareStage_controlPipe_translated_payload_mainCompare;
      compareStage_controlPipe_translated_rData_counterCompare <= compareStage_controlPipe_translated_payload_counterCompare;
      compareStage_controlPipe_translated_rData_mainDiff <= compareStage_controlPipe_translated_payload_mainDiff;
      compareStage_controlPipe_translated_rData_counterDiff <= compareStage_controlPipe_translated_payload_counterDiff;
      compareStage_controlPipe_translated_rData_twiceCompValid <= compareStage_controlPipe_translated_payload_twiceCompValid;
      compareStage_controlPipe_translated_rData_twiceMode <= compareStage_controlPipe_translated_payload_twiceMode;
    end
    if(diffStage_mainOnePixelStream_ready) begin
      diffStage_mainOnePixelStream_rData <= diffStage_mainOnePixelStream_payload;
    end
    if(diffStage_counterOnePixelStream_ready) begin
      diffStage_counterOnePixelStream_rData <= diffStage_counterOnePixelStream_payload;
    end
    if(diffStage_mainTwoPixelStream_ready) begin
      diffStage_mainTwoPixelStream_rData <= diffStage_mainTwoPixelStream_payload;
    end
    if(diffStage_counterTwoPixelStream_ready) begin
      diffStage_counterTwoPixelStream_rData <= diffStage_counterTwoPixelStream_payload;
    end
    if(diffStage_controlPipe_fork_io_outputs_0_ready) begin
      diffStage_controlPipe_fork_io_outputs_0_rData_frameStart <= diffStage_controlPipe_fork_io_outputs_0_payload_frameStart;
      diffStage_controlPipe_fork_io_outputs_0_rData_rowEnd <= diffStage_controlPipe_fork_io_outputs_0_payload_rowEnd;
      diffStage_controlPipe_fork_io_outputs_0_rData_passMode <= diffStage_controlPipe_fork_io_outputs_0_payload_passMode;
      diffStage_controlPipe_fork_io_outputs_0_rData_passValid <= diffStage_controlPipe_fork_io_outputs_0_payload_passValid;
      diffStage_controlPipe_fork_io_outputs_0_rData_onceMode <= diffStage_controlPipe_fork_io_outputs_0_payload_onceMode;
      diffStage_controlPipe_fork_io_outputs_0_rData_onceValid <= diffStage_controlPipe_fork_io_outputs_0_payload_onceValid;
      diffStage_controlPipe_fork_io_outputs_0_rData_mainCompare <= diffStage_controlPipe_fork_io_outputs_0_payload_mainCompare;
      diffStage_controlPipe_fork_io_outputs_0_rData_counterCompare <= diffStage_controlPipe_fork_io_outputs_0_payload_counterCompare;
      diffStage_controlPipe_fork_io_outputs_0_rData_mainDiff <= diffStage_controlPipe_fork_io_outputs_0_payload_mainDiff;
      diffStage_controlPipe_fork_io_outputs_0_rData_counterDiff <= diffStage_controlPipe_fork_io_outputs_0_payload_counterDiff;
      diffStage_controlPipe_fork_io_outputs_0_rData_twiceCompValid <= diffStage_controlPipe_fork_io_outputs_0_payload_twiceCompValid;
      diffStage_controlPipe_fork_io_outputs_0_rData_twiceMode <= diffStage_controlPipe_fork_io_outputs_0_payload_twiceMode;
    end
    if(resultStage_pixelStream_ready) begin
      resultStage_pixelStream_rData <= resultStage_pixelStream_payload;
    end
    if(pixelsStream_ready) begin
      pixelsStream_rData_pixel <= pixelsStream_payload_pixel;
      pixelsStream_rData_frameStart <= pixelsStream_payload_frameStart;
      pixelsStream_rData_rowEnd <= pixelsStream_payload_rowEnd;
      pixelsStream_rData_inpValid <= pixelsStream_payload_inpValid;
    end
    if(pixelsStream_s2mPipe_ready) begin
      pixelsStream_s2mPipe_rData_pixel <= pixelsStream_s2mPipe_payload_pixel;
      pixelsStream_s2mPipe_rData_frameStart <= pixelsStream_s2mPipe_payload_frameStart;
      pixelsStream_s2mPipe_rData_rowEnd <= pixelsStream_s2mPipe_payload_rowEnd;
      pixelsStream_s2mPipe_rData_inpValid <= pixelsStream_s2mPipe_payload_inpValid;
    end
  end


endmodule

module StreamFork (
  input               io_input_valid,
  output              io_input_ready,
  input               io_input_payload_frameStart,
  input               io_input_payload_rowEnd,
  input               io_input_payload_passMode,
  input               io_input_payload_passValid,
  input      [2:0]    io_input_payload_onceMode,
  input               io_input_payload_onceValid,
  input               io_input_payload_mainCompare,
  input               io_input_payload_counterCompare,
  input      [7:0]    io_input_payload_mainDiff,
  input      [7:0]    io_input_payload_counterDiff,
  input               io_input_payload_twiceCompValid,
  input      [2:0]    io_input_payload_twiceMode,
  output              io_outputs_0_valid,
  input               io_outputs_0_ready,
  output              io_outputs_0_payload_frameStart,
  output              io_outputs_0_payload_rowEnd,
  output              io_outputs_0_payload_passMode,
  output              io_outputs_0_payload_passValid,
  output     [2:0]    io_outputs_0_payload_onceMode,
  output              io_outputs_0_payload_onceValid,
  output              io_outputs_0_payload_mainCompare,
  output              io_outputs_0_payload_counterCompare,
  output     [7:0]    io_outputs_0_payload_mainDiff,
  output     [7:0]    io_outputs_0_payload_counterDiff,
  output              io_outputs_0_payload_twiceCompValid,
  output     [2:0]    io_outputs_0_payload_twiceMode,
  output              io_outputs_1_valid,
  input               io_outputs_1_ready,
  output              io_outputs_1_payload_frameStart,
  output              io_outputs_1_payload_rowEnd,
  output              io_outputs_1_payload_passMode,
  output              io_outputs_1_payload_passValid,
  output     [2:0]    io_outputs_1_payload_onceMode,
  output              io_outputs_1_payload_onceValid,
  output              io_outputs_1_payload_mainCompare,
  output              io_outputs_1_payload_counterCompare,
  output     [7:0]    io_outputs_1_payload_mainDiff,
  output     [7:0]    io_outputs_1_payload_counterDiff,
  output              io_outputs_1_payload_twiceCompValid,
  output     [2:0]    io_outputs_1_payload_twiceMode
);


  assign io_input_ready = (io_outputs_0_ready && io_outputs_1_ready);
  assign io_outputs_0_valid = (io_input_valid && io_input_ready);
  assign io_outputs_1_valid = (io_input_valid && io_input_ready);
  assign io_outputs_0_payload_frameStart = io_input_payload_frameStart;
  assign io_outputs_0_payload_rowEnd = io_input_payload_rowEnd;
  assign io_outputs_0_payload_passMode = io_input_payload_passMode;
  assign io_outputs_0_payload_passValid = io_input_payload_passValid;
  assign io_outputs_0_payload_onceMode = io_input_payload_onceMode;
  assign io_outputs_0_payload_onceValid = io_input_payload_onceValid;
  assign io_outputs_0_payload_mainCompare = io_input_payload_mainCompare;
  assign io_outputs_0_payload_counterCompare = io_input_payload_counterCompare;
  assign io_outputs_0_payload_mainDiff = io_input_payload_mainDiff;
  assign io_outputs_0_payload_counterDiff = io_input_payload_counterDiff;
  assign io_outputs_0_payload_twiceCompValid = io_input_payload_twiceCompValid;
  assign io_outputs_0_payload_twiceMode = io_input_payload_twiceMode;
  assign io_outputs_1_payload_frameStart = io_input_payload_frameStart;
  assign io_outputs_1_payload_rowEnd = io_input_payload_rowEnd;
  assign io_outputs_1_payload_passMode = io_input_payload_passMode;
  assign io_outputs_1_payload_passValid = io_input_payload_passValid;
  assign io_outputs_1_payload_onceMode = io_input_payload_onceMode;
  assign io_outputs_1_payload_onceValid = io_input_payload_onceValid;
  assign io_outputs_1_payload_mainCompare = io_input_payload_mainCompare;
  assign io_outputs_1_payload_counterCompare = io_input_payload_counterCompare;
  assign io_outputs_1_payload_mainDiff = io_input_payload_mainDiff;
  assign io_outputs_1_payload_counterDiff = io_input_payload_counterDiff;
  assign io_outputs_1_payload_twiceCompValid = io_input_payload_twiceCompValid;
  assign io_outputs_1_payload_twiceMode = io_input_payload_twiceMode;

endmodule
