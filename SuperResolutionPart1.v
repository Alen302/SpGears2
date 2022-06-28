// Generator : SpinalHDL v1.7.0b    git head : 541894e01cf6b5ef03f924225e4f769fb167dea8
// Component : SuperResolutionPart1
// Git hash  : 6968eeab3a88e5bbd7b6c8a0ad2109baf04f4858

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
  output reg          inpCompleteOut,
  input      [7:0]    thresholdIn,
  input      [9:0]    widthIn,
  input      [9:0]    heightIn,
  input               clk,
  input               reset
);
  localparam controlStateMachine_enumDef_BOOT = 3'd0;
  localparam controlStateMachine_enumDef_HOLD = 3'd1;
  localparam controlStateMachine_enumDef_PASS = 3'd2;
  localparam controlStateMachine_enumDef_ONCE = 3'd3;
  localparam controlStateMachine_enumDef_TWICE = 3'd4;

  reg        [7:0]    _zz_lineBufferOne_port1;
  reg        [7:0]    _zz_lineBufferOne_port2;
  reg        [7:0]    _zz_lineBufferTwo_port1;
  reg        [7:0]    _zz_lineBufferTwo_port2;
  wire       [9:0]    _zz_bufferRowCount_valueNext;
  wire       [0:0]    _zz_bufferRowCount_valueNext_1;
  wire       [9:0]    _zz_bufferWAddr_valueNext;
  wire       [0:0]    _zz_bufferWAddr_valueNext_1;
  wire       [10:0]   _zz_outPixelAddr_valueNext;
  wire       [0:0]    _zz_outPixelAddr_valueNext_1;
  wire       [10:0]   _zz_outRowCount_valueNext;
  wire       [0:0]    _zz_outRowCount_valueNext_1;
  wire       [10:0]   _zz_when_SuperResolutionPart1_l157;
  wire       [7:0]    _zz_lineBufferTwo_port;
  wire                _zz_lineBufferTwo_port_1;
  wire       [7:0]    _zz_lineBufferOne_port;
  wire                _zz_lineBufferOne_port_1;
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
  wire       [11:0]   _zz_when_SuperResolutionPart1_l519;
  wire       [11:0]   _zz_when_SuperResolutionPart1_l519_1;
  wire       [11:0]   _zz_when_SuperResolutionPart1_l519_2;
  wire       [10:0]   _zz_switch_SuperResolutionPart1_l530;
  wire       [10:0]   _zz_switch_SuperResolutionPart1_l533;
  wire       [10:0]   _zz_switch_SuperResolutionPart1_l546;
  wire       [11:0]   _zz_switch_SuperResolutionPart1_l564;
  wire       [11:0]   _zz_switch_SuperResolutionPart1_l564_1;
  wire       [11:0]   _zz_switch_SuperResolutionPart1_l564_2;
  wire       [11:0]   _zz_switch_SuperResolutionPart1_l564_3;
  wire       [2:0]    _zz_switch_SuperResolutionPart1_l564_4;
  wire       [10:0]   _zz_switch_SuperResolutionPart1_l582;
  wire       [10:0]   _zz_mainAddrOne;
  wire       [11:0]   _zz_counterAddrOne;
  wire       [11:0]   _zz_counterAddrOne_1;
  wire       [11:0]   _zz_counterAddrOne_2;
  wire       [1:0]    _zz_counterAddrOne_3;
  wire       [0:0]    _zz_controls_onceMode;
  wire       [10:0]   _zz_mainAddrTwo;
  wire       [11:0]   _zz_counterAddrTwo;
  wire       [11:0]   _zz_counterAddrTwo_1;
  wire       [11:0]   _zz_counterAddrTwo_2;
  wire       [1:0]    _zz_counterAddrTwo_3;
  wire       [11:0]   _zz_switch_SuperResolutionPart1_l604;
  wire       [11:0]   _zz_switch_SuperResolutionPart1_l604_1;
  wire       [11:0]   _zz_switch_SuperResolutionPart1_l604_2;
  wire       [11:0]   _zz_switch_SuperResolutionPart1_l604_3;
  wire       [2:0]    _zz_switch_SuperResolutionPart1_l604_4;
  wire       [10:0]   _zz_mainAddrOne_1;
  wire       [11:0]   _zz_mainAddrTwo_1;
  wire       [11:0]   _zz_mainAddrTwo_2;
  wire       [11:0]   _zz_mainAddrTwo_3;
  wire       [1:0]    _zz_mainAddrTwo_4;
  wire       [11:0]   _zz_counterAddrOne_4;
  wire       [11:0]   _zz_counterAddrOne_5;
  wire       [11:0]   _zz_counterAddrOne_6;
  wire       [1:0]    _zz_counterAddrOne_7;
  wire       [10:0]   _zz_counterAddrTwo_4;
  wire       [10:0]   _zz_mainAddrTwo_5;
  wire       [11:0]   _zz_mainAddrOne_2;
  wire       [11:0]   _zz_mainAddrOne_3;
  wire       [11:0]   _zz_mainAddrOne_4;
  wire       [1:0]    _zz_mainAddrOne_5;
  wire       [11:0]   _zz_counterAddrTwo_5;
  wire       [11:0]   _zz_counterAddrTwo_6;
  wire       [11:0]   _zz_counterAddrTwo_7;
  wire       [1:0]    _zz_counterAddrTwo_8;
  wire       [10:0]   _zz_counterAddrOne_8;
  reg                 slaveStart;
  wire                pixelsIn_fire;
  wire                when_SuperResolutionPart1_l71;
  reg                 frameStart;
  wire                pixelsIn_fire_1;
  wire                when_SuperResolutionPart1_l74;
  reg        [7:0]    inpThreshold;
  reg        [9:0]    bmpWidth;
  reg        [9:0]    bmpHeight;
  reg                 holdBuffer;
  wire                when_SuperResolutionPart1_l86;
  reg                 interComplete;
  reg                 bufferRowCount_willIncrement;
  wire                bufferRowCount_willClear;
  reg        [9:0]    bufferRowCount_valueNext;
  reg        [9:0]    bufferRowCount_value;
  wire                bufferRowCount_willOverflowIfInc;
  wire                bufferRowCount_willOverflow;
  reg                 bufferSwitch;
  reg                 bufferEnable;
  wire                when_SuperResolutionPart1_l98;
  wire                when_SuperResolutionPart1_l98_1;
  reg                 nextRowBuffer;
  reg                 bufferWAddr_willIncrement;
  reg                 bufferWAddr_willClear;
  reg        [9:0]    bufferWAddr_valueNext;
  reg        [9:0]    bufferWAddr_value;
  wire                bufferWAddr_willOverflowIfInc;
  wire                bufferWAddr_willOverflow;
  reg                 outPixelAddr_willIncrement;
  reg                 outPixelAddr_willClear;
  reg        [10:0]   outPixelAddr_valueNext;
  reg        [10:0]   outPixelAddr_value;
  wire                outPixelAddr_willOverflowIfInc;
  wire                outPixelAddr_willOverflow;
  reg                 outRowCount_willIncrement;
  wire                outRowCount_willClear;
  reg        [10:0]   outRowCount_valueNext;
  reg        [10:0]   outRowCount_value;
  wire                outRowCount_willOverflowIfInc;
  wire                outRowCount_willOverflow;
  reg        [10:0]   mainAddrOne;
  reg        [10:0]   counterAddrOne;
  reg        [10:0]   mainAddrTwo;
  reg        [10:0]   counterAddrTwo;
  wire                controlStream_valid;
  reg                 controlStream_ready;
  wire                controlStream_payload_passMode;
  wire                controlStream_payload_passValid;
  wire       [1:0]    controlStream_payload_onceMode;
  wire                controlStream_payload_onceValid;
  wire                controlStream_payload_mainCompare;
  wire                controlStream_payload_counterCompare;
  wire       [7:0]    controlStream_payload_mainDiff;
  wire       [7:0]    controlStream_payload_counterDiff;
  wire                controlStream_payload_twiceCompValid;
  wire                controlStream_payload_twiceMode;
  reg                 controls_passMode;
  reg                 controls_passValid;
  reg        [1:0]    controls_onceMode;
  reg                 controls_onceValid;
  wire                controls_mainCompare;
  wire                controls_counterCompare;
  wire       [7:0]    controls_mainDiff;
  wire       [7:0]    controls_counterDiff;
  reg                 controls_twiceCompValid;
  reg                 controls_twiceMode;
  wire                validStream_valid;
  reg                 validStream_ready;
  wire       [24:0]   _zz_controls_passMode;
  wire                passPixels_valid;
  wire                passPixels_ready;
  wire       [7:0]    passPixels_payload_pixel;
  wire                passPixels_payload_frameStart;
  wire                passPixels_payload_rowEnd;
  wire                pixelsOut_fire;
  wire                when_SuperResolutionPart1_l149;
  wire                passPixels_fire;
  wire                when_SuperResolutionPart1_l152;
  wire                passPixels_fire_1;
  wire                when_SuperResolutionPart1_l155;
  wire                passPixels_fire_2;
  wire                when_SuperResolutionPart1_l156;
  wire                when_SuperResolutionPart1_l157;
  wire                when_SuperResolutionPart1_l159;
  wire                pixelsOut_fire_1;
  wire                when_SuperResolutionPart1_l163;
  wire                pixelsOut_fire_2;
  wire                mainAddrOneStream_valid;
  wire                mainAddrOneStream_ready;
  wire       [9:0]    mainAddrOneStream_payload;
  wire                counterAddrOneStream_valid;
  wire                counterAddrOneStream_ready;
  wire       [9:0]    counterAddrOneStream_payload;
  wire                mainAddrTwoStream_valid;
  wire                mainAddrTwoStream_ready;
  wire       [9:0]    mainAddrTwoStream_payload;
  wire                counterAddrTwoStream_valid;
  wire                counterAddrTwoStream_ready;
  wire       [9:0]    counterAddrTwoStream_payload;
  wire                passPixels_fire_3;
  wire                passPixels_fire_4;
  wire                passPixels_fire_5;
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
  wire                readStage_controlPipe_payload_passMode;
  wire                readStage_controlPipe_payload_passValid;
  wire       [1:0]    readStage_controlPipe_payload_onceMode;
  wire                readStage_controlPipe_payload_onceValid;
  wire                readStage_controlPipe_payload_mainCompare;
  wire                readStage_controlPipe_payload_counterCompare;
  wire       [7:0]    readStage_controlPipe_payload_mainDiff;
  wire       [7:0]    readStage_controlPipe_payload_counterDiff;
  wire                readStage_controlPipe_payload_twiceCompValid;
  wire                readStage_controlPipe_payload_twiceMode;
  reg                 controlStream_rValid;
  reg                 controlStream_rData_passMode;
  reg                 controlStream_rData_passValid;
  reg        [1:0]    controlStream_rData_onceMode;
  reg                 controlStream_rData_onceValid;
  reg                 controlStream_rData_mainCompare;
  reg                 controlStream_rData_counterCompare;
  reg        [7:0]    controlStream_rData_mainDiff;
  reg        [7:0]    controlStream_rData_counterDiff;
  reg                 controlStream_rData_twiceCompValid;
  reg                 controlStream_rData_twiceMode;
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
  wire                when_SuperResolutionPart1_l238;
  wire                when_SuperResolutionPart1_l246;
  wire                when_SuperResolutionPart1_l254;
  wire                when_SuperResolutionPart1_l262;
  wire                when_SuperResolutionPart1_l274;
  wire                when_SuperResolutionPart1_l280;
  wire                when_SuperResolutionPart1_l288;
  wire                when_SuperResolutionPart1_l294;
  wire                readStage_controlPipe_translated_valid;
  reg                 readStage_controlPipe_translated_ready;
  wire                readStage_controlPipe_translated_payload_passMode;
  wire                readStage_controlPipe_translated_payload_passValid;
  wire       [1:0]    readStage_controlPipe_translated_payload_onceMode;
  wire                readStage_controlPipe_translated_payload_onceValid;
  wire                readStage_controlPipe_translated_payload_mainCompare;
  wire                readStage_controlPipe_translated_payload_counterCompare;
  wire       [7:0]    readStage_controlPipe_translated_payload_mainDiff;
  wire       [7:0]    readStage_controlPipe_translated_payload_counterDiff;
  wire                readStage_controlPipe_translated_payload_twiceCompValid;
  wire                readStage_controlPipe_translated_payload_twiceMode;
  wire                compareStage_controlPipe_valid;
  wire                compareStage_controlPipe_ready;
  wire                compareStage_controlPipe_payload_passMode;
  wire                compareStage_controlPipe_payload_passValid;
  wire       [1:0]    compareStage_controlPipe_payload_onceMode;
  wire                compareStage_controlPipe_payload_onceValid;
  wire                compareStage_controlPipe_payload_mainCompare;
  wire                compareStage_controlPipe_payload_counterCompare;
  wire       [7:0]    compareStage_controlPipe_payload_mainDiff;
  wire       [7:0]    compareStage_controlPipe_payload_counterDiff;
  wire                compareStage_controlPipe_payload_twiceCompValid;
  wire                compareStage_controlPipe_payload_twiceMode;
  reg                 readStage_controlPipe_translated_rValid;
  reg                 readStage_controlPipe_translated_rData_passMode;
  reg                 readStage_controlPipe_translated_rData_passValid;
  reg        [1:0]    readStage_controlPipe_translated_rData_onceMode;
  reg                 readStage_controlPipe_translated_rData_onceValid;
  reg                 readStage_controlPipe_translated_rData_mainCompare;
  reg                 readStage_controlPipe_translated_rData_counterCompare;
  reg        [7:0]    readStage_controlPipe_translated_rData_mainDiff;
  reg        [7:0]    readStage_controlPipe_translated_rData_counterDiff;
  reg                 readStage_controlPipe_translated_rData_twiceCompValid;
  reg                 readStage_controlPipe_translated_rData_twiceMode;
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
  wire                compareStage_controlPipe_translated_payload_passMode;
  wire                compareStage_controlPipe_translated_payload_passValid;
  wire       [1:0]    compareStage_controlPipe_translated_payload_onceMode;
  wire                compareStage_controlPipe_translated_payload_onceValid;
  wire                compareStage_controlPipe_translated_payload_mainCompare;
  wire                compareStage_controlPipe_translated_payload_counterCompare;
  wire       [7:0]    compareStage_controlPipe_translated_payload_mainDiff;
  wire       [7:0]    compareStage_controlPipe_translated_payload_counterDiff;
  wire                compareStage_controlPipe_translated_payload_twiceCompValid;
  wire                compareStage_controlPipe_translated_payload_twiceMode;
  wire                diffStage_controlPipe_valid;
  wire                diffStage_controlPipe_ready;
  wire                diffStage_controlPipe_payload_passMode;
  wire                diffStage_controlPipe_payload_passValid;
  wire       [1:0]    diffStage_controlPipe_payload_onceMode;
  wire                diffStage_controlPipe_payload_onceValid;
  wire                diffStage_controlPipe_payload_mainCompare;
  wire                diffStage_controlPipe_payload_counterCompare;
  wire       [7:0]    diffStage_controlPipe_payload_mainDiff;
  wire       [7:0]    diffStage_controlPipe_payload_counterDiff;
  wire                diffStage_controlPipe_payload_twiceCompValid;
  wire                diffStage_controlPipe_payload_twiceMode;
  reg                 compareStage_controlPipe_translated_rValid;
  reg                 compareStage_controlPipe_translated_rData_passMode;
  reg                 compareStage_controlPipe_translated_rData_passValid;
  reg        [1:0]    compareStage_controlPipe_translated_rData_onceMode;
  reg                 compareStage_controlPipe_translated_rData_onceValid;
  reg                 compareStage_controlPipe_translated_rData_mainCompare;
  reg                 compareStage_controlPipe_translated_rData_counterCompare;
  reg        [7:0]    compareStage_controlPipe_translated_rData_mainDiff;
  reg        [7:0]    compareStage_controlPipe_translated_rData_counterDiff;
  reg                 compareStage_controlPipe_translated_rData_twiceCompValid;
  reg                 compareStage_controlPipe_translated_rData_twiceMode;
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
  wire                resultStage_pixelStream_valid;
  reg                 resultStage_pixelStream_ready;
  reg        [7:0]    resultStage_pixelStream_payload;
  wire                when_SuperResolutionPart1_l418;
  wire                when_SuperResolutionPart1_l426;
  wire                when_SuperResolutionPart1_l434;
  wire                when_SuperResolutionPart1_l442;
  wire                when_SuperResolutionPart1_l454;
  wire                switch_SuperResolutionPart1_l455;
  wire                switch_SuperResolutionPart1_l464;
  wire                when_SuperResolutionPart1_l476;
  wire                switch_SuperResolutionPart1_l477;
  wire                switch_SuperResolutionPart1_l486;
  wire                resultStage_resultStream_valid;
  wire                resultStage_resultStream_ready;
  wire       [7:0]    resultStage_resultStream_payload;
  reg                 resultStage_pixelStream_rValid;
  reg        [7:0]    resultStage_pixelStream_rData;
  wire                when_Stream_l368_15;
  wire                resultsJoin_valid;
  wire                resultsJoin_ready;
  wire       [7:0]    resultsJoin_payload_0;
  wire       [7:0]    resultsJoin_payload_1;
  wire       [7:0]    resultsJoin_payload_2;
  wire       [7:0]    resultsJoin_payload_3;
  wire       [7:0]    resultsJoin_payload_4;
  wire                resultsJoin_fire;
  wire                resultsJoin_fire_1;
  wire                resultsJoin_fire_2;
  wire                resultsJoin_fire_3;
  wire                resultsJoin_fire_4;
  wire                when_SuperResolutionPart1_l519;
  wire                controlStateMachine_wantExit;
  reg                 controlStateMachine_wantStart;
  wire                controlStateMachine_wantKill;
  reg        [2:0]    controlStateMachine_stateReg;
  reg        [2:0]    controlStateMachine_stateNext;
  wire                switch_SuperResolutionPart1_l530;
  wire                passPixels_fire_6;
  wire                switch_SuperResolutionPart1_l533;
  wire                passPixels_fire_7;
  wire                switch_SuperResolutionPart1_l546;
  wire                pixelsOut_fire_3;
  wire                passPixels_fire_8;
  wire                switch_SuperResolutionPart1_l564;
  wire                switch_SuperResolutionPart1_l582;
  wire                pixelsOut_fire_4;
  wire                pixelsOut_fire_5;
  wire                passPixels_fire_9;
  wire                switch_SuperResolutionPart1_l604;
  wire                pixelsOut_fire_6;
  `ifndef SYNTHESIS
  reg [39:0] controlStateMachine_stateReg_string;
  reg [39:0] controlStateMachine_stateNext_string;
  `endif

  reg [7:0] lineBufferOne [0:959];
  reg [7:0] lineBufferTwo [0:959];
  function  zz_pixelsOut_payload_inpValid(input dummy);
    begin
      zz_pixelsOut_payload_inpValid = 1'b0;
      zz_pixelsOut_payload_inpValid = 1'b1;
    end
  endfunction
  wire  _zz_1;

  assign _zz_bufferRowCount_valueNext_1 = bufferRowCount_willIncrement;
  assign _zz_bufferRowCount_valueNext = {9'd0, _zz_bufferRowCount_valueNext_1};
  assign _zz_bufferWAddr_valueNext_1 = bufferWAddr_willIncrement;
  assign _zz_bufferWAddr_valueNext = {9'd0, _zz_bufferWAddr_valueNext_1};
  assign _zz_outPixelAddr_valueNext_1 = outPixelAddr_willIncrement;
  assign _zz_outPixelAddr_valueNext = {10'd0, _zz_outPixelAddr_valueNext_1};
  assign _zz_outRowCount_valueNext_1 = outRowCount_willIncrement;
  assign _zz_outRowCount_valueNext = {10'd0, _zz_outRowCount_valueNext_1};
  assign _zz_when_SuperResolutionPart1_l157 = (outRowCount_value % 2'b10);
  assign _zz_resultStage_pixelStream_payload = (_zz_resultStage_pixelStream_payload_1 / 2'b10);
  assign _zz_resultStage_pixelStream_payload_1 = ({1'b0,diffStage_mainOnePixelStream_payload} + {1'b0,diffStage_counterOnePixelStream_payload});
  assign _zz_resultStage_pixelStream_payload_2 = (_zz_resultStage_pixelStream_payload_3 / 2'b10);
  assign _zz_resultStage_pixelStream_payload_3 = ({1'b0,diffStage_mainTwoPixelStream_payload} + {1'b0,diffStage_counterTwoPixelStream_payload});
  assign _zz_resultStage_pixelStream_payload_4 = (_zz_resultStage_pixelStream_payload_5 / 2'b10);
  assign _zz_resultStage_pixelStream_payload_5 = ({1'b0,diffStage_mainOnePixelStream_payload} + {1'b0,diffStage_mainTwoPixelStream_payload});
  assign _zz_resultStage_pixelStream_payload_6 = (_zz_resultStage_pixelStream_payload_7 / 2'b10);
  assign _zz_resultStage_pixelStream_payload_7 = ({1'b0,diffStage_mainTwoPixelStream_payload} + {1'b0,diffStage_mainOnePixelStream_payload});
  assign _zz_resultStage_pixelStream_payload_8 = (_zz_resultStage_pixelStream_payload_9 / 2'b10);
  assign _zz_resultStage_pixelStream_payload_9 = ({1'b0,resultStage_counterOnePixelStream_payload} + {1'b0,resultStage_counterTwoPixelStream_payload});
  assign _zz_resultStage_pixelStream_payload_10 = (_zz_resultStage_pixelStream_payload_11 / 2'b10);
  assign _zz_resultStage_pixelStream_payload_11 = ({1'b0,resultStage_mainOnePixelStream_payload} + {1'b0,resultStage_mainTwoPixelStream_payload});
  assign _zz_resultStage_pixelStream_payload_12 = (_zz_resultStage_pixelStream_payload_13 / 2'b10);
  assign _zz_resultStage_pixelStream_payload_13 = ({1'b0,resultStage_counterOnePixelStream_payload} + {1'b0,resultStage_counterTwoPixelStream_payload});
  assign _zz_resultStage_pixelStream_payload_14 = (_zz_resultStage_pixelStream_payload_15 / 2'b10);
  assign _zz_resultStage_pixelStream_payload_15 = ({1'b0,resultStage_mainOnePixelStream_payload} + {1'b0,resultStage_mainTwoPixelStream_payload});
  assign _zz_when_SuperResolutionPart1_l519 = {1'd0, outPixelAddr_value};
  assign _zz_when_SuperResolutionPart1_l519_1 = (_zz_when_SuperResolutionPart1_l519_2 - 12'h001);
  assign _zz_when_SuperResolutionPart1_l519_2 = (2'b10 * bmpWidth);
  assign _zz_switch_SuperResolutionPart1_l530 = (outRowCount_value % 2'b10);
  assign _zz_switch_SuperResolutionPart1_l533 = (outPixelAddr_value % 2'b10);
  assign _zz_switch_SuperResolutionPart1_l546 = (outPixelAddr_value % 2'b10);
  assign _zz_switch_SuperResolutionPart1_l564 = {2'd0, bufferWAddr_value};
  assign _zz_switch_SuperResolutionPart1_l564_1 = (_zz_switch_SuperResolutionPart1_l564_2 / 2'b10);
  assign _zz_switch_SuperResolutionPart1_l564_2 = ({1'b0,outPixelAddr_value} + _zz_switch_SuperResolutionPart1_l564_3);
  assign _zz_switch_SuperResolutionPart1_l564_4 = {1'b0,2'b10};
  assign _zz_switch_SuperResolutionPart1_l564_3 = {9'd0, _zz_switch_SuperResolutionPart1_l564_4};
  assign _zz_switch_SuperResolutionPart1_l582 = (outRowCount_value % 2'b10);
  assign _zz_mainAddrOne = (outPixelAddr_value - 11'h001);
  assign _zz_counterAddrOne = (_zz_counterAddrOne_1 / 2'b10);
  assign _zz_counterAddrOne_1 = ({1'b0,outPixelAddr_value} + _zz_counterAddrOne_2);
  assign _zz_counterAddrOne_3 = {1'b0,1'b1};
  assign _zz_counterAddrOne_2 = {10'd0, _zz_counterAddrOne_3};
  assign _zz_controls_onceMode = 1'b1;
  assign _zz_mainAddrTwo = (outPixelAddr_value - 11'h001);
  assign _zz_counterAddrTwo = (_zz_counterAddrTwo_1 / 2'b10);
  assign _zz_counterAddrTwo_1 = ({1'b0,outPixelAddr_value} + _zz_counterAddrTwo_2);
  assign _zz_counterAddrTwo_3 = {1'b0,1'b1};
  assign _zz_counterAddrTwo_2 = {10'd0, _zz_counterAddrTwo_3};
  assign _zz_switch_SuperResolutionPart1_l604 = {2'd0, bufferWAddr_value};
  assign _zz_switch_SuperResolutionPart1_l604_1 = (_zz_switch_SuperResolutionPart1_l604_2 / 2'b10);
  assign _zz_switch_SuperResolutionPart1_l604_2 = ({1'b0,outPixelAddr_value} + _zz_switch_SuperResolutionPart1_l604_3);
  assign _zz_switch_SuperResolutionPart1_l604_4 = {1'b0,2'b10};
  assign _zz_switch_SuperResolutionPart1_l604_3 = {9'd0, _zz_switch_SuperResolutionPart1_l604_4};
  assign _zz_mainAddrOne_1 = (outPixelAddr_value - 11'h001);
  assign _zz_mainAddrTwo_1 = (_zz_mainAddrTwo_2 / 2'b10);
  assign _zz_mainAddrTwo_2 = ({1'b0,outPixelAddr_value} + _zz_mainAddrTwo_3);
  assign _zz_mainAddrTwo_4 = {1'b0,1'b1};
  assign _zz_mainAddrTwo_3 = {10'd0, _zz_mainAddrTwo_4};
  assign _zz_counterAddrOne_4 = (_zz_counterAddrOne_5 / 2'b10);
  assign _zz_counterAddrOne_5 = ({1'b0,outPixelAddr_value} + _zz_counterAddrOne_6);
  assign _zz_counterAddrOne_7 = {1'b0,1'b1};
  assign _zz_counterAddrOne_6 = {10'd0, _zz_counterAddrOne_7};
  assign _zz_counterAddrTwo_4 = (outPixelAddr_value - 11'h001);
  assign _zz_mainAddrTwo_5 = (outPixelAddr_value - 11'h001);
  assign _zz_mainAddrOne_2 = (_zz_mainAddrOne_3 / 2'b10);
  assign _zz_mainAddrOne_3 = ({1'b0,outPixelAddr_value} + _zz_mainAddrOne_4);
  assign _zz_mainAddrOne_5 = {1'b0,1'b1};
  assign _zz_mainAddrOne_4 = {10'd0, _zz_mainAddrOne_5};
  assign _zz_counterAddrTwo_5 = (_zz_counterAddrTwo_6 / 2'b10);
  assign _zz_counterAddrTwo_6 = ({1'b0,outPixelAddr_value} + _zz_counterAddrTwo_7);
  assign _zz_counterAddrTwo_8 = {1'b0,1'b1};
  assign _zz_counterAddrTwo_7 = {10'd0, _zz_counterAddrTwo_8};
  assign _zz_counterAddrOne_8 = (outPixelAddr_value - 11'h001);
  assign _zz_lineBufferOne_port = passPixels_payload_pixel;
  assign _zz_lineBufferOne_port_1 = (passPixels_fire_4 && (! bufferSwitch));
  assign _zz_lineBufferTwo_port = passPixels_payload_pixel;
  assign _zz_lineBufferTwo_port_1 = (passPixels_fire_3 && bufferSwitch);
  initial begin
    $readmemb("SuperResolutionPart1.v_toplevel_lineBufferOne.bin",lineBufferOne);
  end
  always @(posedge clk) begin
    if(_zz_lineBufferOne_port_1) begin
      lineBufferOne[bufferWAddr_value] <= _zz_lineBufferOne_port;
    end
  end

  always @(posedge clk) begin
    if(mainAddrOneStream_ready) begin
      _zz_lineBufferOne_port1 <= lineBufferOne[mainAddrOneStream_payload];
    end
  end

  always @(posedge clk) begin
    if(counterAddrOneStream_ready) begin
      _zz_lineBufferOne_port2 <= lineBufferOne[counterAddrOneStream_payload];
    end
  end

  initial begin
    $readmemb("SuperResolutionPart1.v_toplevel_lineBufferTwo.bin",lineBufferTwo);
  end
  always @(posedge clk) begin
    if(_zz_lineBufferTwo_port_1) begin
      lineBufferTwo[bufferWAddr_value] <= _zz_lineBufferTwo_port;
    end
  end

  always @(posedge clk) begin
    if(mainAddrTwoStream_ready) begin
      _zz_lineBufferTwo_port1 <= lineBufferTwo[mainAddrTwoStream_payload];
    end
  end

  always @(posedge clk) begin
    if(counterAddrTwoStream_ready) begin
      _zz_lineBufferTwo_port2 <= lineBufferTwo[counterAddrTwoStream_payload];
    end
  end

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
    pixelsOut_valid = resultsJoin_valid;
  end

  always @(*) begin
    pixelsOut_payload_pixel = 8'h0;
    pixelsOut_payload_pixel = resultsJoin_payload_0;
  end

  always @(*) begin
    pixelsOut_payload_frameStart = 1'b0;
    if(frameStart) begin
      pixelsOut_payload_frameStart = 1'b1;
    end
  end

  always @(*) begin
    pixelsOut_payload_rowEnd = 1'b0;
    if(when_SuperResolutionPart1_l519) begin
      pixelsOut_payload_rowEnd = 1'b1;
    end
  end

  assign _zz_1 = zz_pixelsOut_payload_inpValid(1'b0);
  always @(*) pixelsOut_payload_inpValid = _zz_1;
  always @(*) begin
    startOut = 1'b0;
    startOut = slaveStart;
  end

  always @(*) begin
    inpCompleteOut = 1'b0;
    inpCompleteOut = interComplete;
  end

  assign pixelsIn_fire = (pixelsIn_valid && pixelsIn_ready);
  assign when_SuperResolutionPart1_l71 = ((! inpTwoDoneIn) && pixelsIn_fire);
  assign pixelsIn_fire_1 = (pixelsIn_valid && pixelsIn_ready);
  assign when_SuperResolutionPart1_l74 = (pixelsIn_payload_frameStart && pixelsIn_fire_1);
  assign when_SuperResolutionPart1_l86 = (! StartIn);
  always @(*) begin
    bufferRowCount_willIncrement = 1'b0;
    if(when_SuperResolutionPart1_l152) begin
      bufferRowCount_willIncrement = 1'b1;
    end
  end

  assign bufferRowCount_willClear = 1'b0;
  assign bufferRowCount_willOverflowIfInc = (bufferRowCount_value == 10'h21c);
  assign bufferRowCount_willOverflow = (bufferRowCount_willOverflowIfInc && bufferRowCount_willIncrement);
  always @(*) begin
    if(bufferRowCount_willOverflow) begin
      bufferRowCount_valueNext = 10'h0;
    end else begin
      bufferRowCount_valueNext = (bufferRowCount_value + _zz_bufferRowCount_valueNext);
    end
    if(bufferRowCount_willClear) begin
      bufferRowCount_valueNext = 10'h0;
    end
  end

  assign when_SuperResolutionPart1_l98 = (StartIn && (! holdBuffer));
  assign when_SuperResolutionPart1_l98_1 = ((! StartIn) || holdBuffer);
  always @(*) begin
    bufferWAddr_willIncrement = 1'b0;
    if(passPixels_fire_5) begin
      if(!pixelsIn_payload_rowEnd) begin
        bufferWAddr_willIncrement = 1'b1;
      end
    end
  end

  always @(*) begin
    bufferWAddr_willClear = 1'b0;
    if(passPixels_fire_5) begin
      if(pixelsIn_payload_rowEnd) begin
        bufferWAddr_willClear = 1'b1;
      end
    end
  end

  assign bufferWAddr_willOverflowIfInc = (bufferWAddr_value == 10'h3bf);
  assign bufferWAddr_willOverflow = (bufferWAddr_willOverflowIfInc && bufferWAddr_willIncrement);
  always @(*) begin
    if(bufferWAddr_willOverflow) begin
      bufferWAddr_valueNext = 10'h0;
    end else begin
      bufferWAddr_valueNext = (bufferWAddr_value + _zz_bufferWAddr_valueNext);
    end
    if(bufferWAddr_willClear) begin
      bufferWAddr_valueNext = 10'h0;
    end
  end

  always @(*) begin
    outPixelAddr_willIncrement = 1'b0;
    if(pixelsOut_fire_2) begin
      if(!pixelsOut_payload_rowEnd) begin
        outPixelAddr_willIncrement = 1'b1;
      end
    end
  end

  always @(*) begin
    outPixelAddr_willClear = 1'b0;
    if(pixelsOut_fire_2) begin
      if(pixelsOut_payload_rowEnd) begin
        outPixelAddr_willClear = 1'b1;
      end
    end
  end

  assign outPixelAddr_willOverflowIfInc = (outPixelAddr_value == 11'h77f);
  assign outPixelAddr_willOverflow = (outPixelAddr_willOverflowIfInc && outPixelAddr_willIncrement);
  always @(*) begin
    if(outPixelAddr_willOverflow) begin
      outPixelAddr_valueNext = 11'h0;
    end else begin
      outPixelAddr_valueNext = (outPixelAddr_value + _zz_outPixelAddr_valueNext);
    end
    if(outPixelAddr_willClear) begin
      outPixelAddr_valueNext = 11'h0;
    end
  end

  always @(*) begin
    outRowCount_willIncrement = 1'b0;
    if(when_SuperResolutionPart1_l163) begin
      outRowCount_willIncrement = 1'b1;
    end
  end

  assign outRowCount_willClear = 1'b0;
  assign outRowCount_willOverflowIfInc = (outRowCount_value == 11'h438);
  assign outRowCount_willOverflow = (outRowCount_willOverflowIfInc && outRowCount_willIncrement);
  always @(*) begin
    if(outRowCount_willOverflow) begin
      outRowCount_valueNext = 11'h0;
    end else begin
      outRowCount_valueNext = (outRowCount_value + _zz_outRowCount_valueNext);
    end
    if(outRowCount_willClear) begin
      outRowCount_valueNext = 11'h0;
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
        case(switch_SuperResolutionPart1_l582)
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
        case(nextRowBuffer)
          1'b1 : begin
            mainAddrOne = (_zz_mainAddrOne_1 / 2'b10);
          end
          default : begin
            mainAddrOne = _zz_mainAddrOne_2[10:0];
          end
        endcase
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
        case(switch_SuperResolutionPart1_l582)
          1'b1 : begin
            case(nextRowBuffer)
              1'b1 : begin
                counterAddrOne = _zz_counterAddrOne[10:0];
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
        case(nextRowBuffer)
          1'b1 : begin
            counterAddrOne = _zz_counterAddrOne_4[10:0];
          end
          default : begin
            counterAddrOne = (_zz_counterAddrOne_8 / 2'b10);
          end
        endcase
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
        case(switch_SuperResolutionPart1_l582)
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
        case(nextRowBuffer)
          1'b1 : begin
            mainAddrTwo = _zz_mainAddrTwo_1[10:0];
          end
          default : begin
            mainAddrTwo = (_zz_mainAddrTwo_5 / 2'b10);
          end
        endcase
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
        case(switch_SuperResolutionPart1_l582)
          1'b1 : begin
            case(nextRowBuffer)
              1'b1 : begin
              end
              default : begin
                counterAddrTwo = _zz_counterAddrTwo[10:0];
              end
            endcase
          end
          default : begin
          end
        endcase
      end
      controlStateMachine_enumDef_TWICE : begin
        case(nextRowBuffer)
          1'b1 : begin
            counterAddrTwo = (_zz_counterAddrTwo_4 / 2'b10);
          end
          default : begin
            counterAddrTwo = _zz_counterAddrTwo_5[10:0];
          end
        endcase
      end
      default : begin
      end
    endcase
  end

  assign validStream_valid = 1'b1;
  assign _zz_controls_passMode = 25'h0;
  always @(*) begin
    controls_passMode = _zz_controls_passMode[0];
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
    controls_passValid = _zz_controls_passMode[1];
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
    controls_onceMode = _zz_controls_passMode[3 : 2];
    case(controlStateMachine_stateReg)
      controlStateMachine_enumDef_HOLD : begin
      end
      controlStateMachine_enumDef_PASS : begin
      end
      controlStateMachine_enumDef_ONCE : begin
        case(switch_SuperResolutionPart1_l582)
          1'b1 : begin
            case(nextRowBuffer)
              1'b1 : begin
                controls_onceMode = 2'b00;
              end
              default : begin
                controls_onceMode = {1'd0, _zz_controls_onceMode};
              end
            endcase
          end
          default : begin
            case(nextRowBuffer)
              1'b1 : begin
                controls_onceMode = 2'b10;
              end
              default : begin
                controls_onceMode = 2'b11;
              end
            endcase
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
    controls_onceValid = _zz_controls_passMode[4];
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

  assign controls_mainCompare = _zz_controls_passMode[5];
  assign controls_counterCompare = _zz_controls_passMode[6];
  assign controls_mainDiff = _zz_controls_passMode[14 : 7];
  assign controls_counterDiff = _zz_controls_passMode[22 : 15];
  always @(*) begin
    controls_twiceCompValid = _zz_controls_passMode[23];
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
    controls_twiceMode = _zz_controls_passMode[24];
    case(controlStateMachine_stateReg)
      controlStateMachine_enumDef_HOLD : begin
      end
      controlStateMachine_enumDef_PASS : begin
      end
      controlStateMachine_enumDef_ONCE : begin
      end
      controlStateMachine_enumDef_TWICE : begin
        case(nextRowBuffer)
          1'b1 : begin
            controls_twiceMode = 1'b1;
          end
          default : begin
            controls_twiceMode = 1'b0;
          end
        endcase
      end
      default : begin
      end
    endcase
  end

  assign controlStream_valid = validStream_valid;
  always @(*) begin
    validStream_ready = controlStream_ready;
    validStream_ready = mainAddrOneStream_ready;
    validStream_ready = counterAddrOneStream_ready;
    validStream_ready = mainAddrTwoStream_ready;
    validStream_ready = counterAddrTwoStream_ready;
  end

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
  assign passPixels_valid = (pixelsIn_valid && bufferEnable);
  assign passPixels_payload_pixel = pixelsIn_payload_pixel;
  assign passPixels_payload_frameStart = pixelsIn_payload_frameStart;
  assign passPixels_payload_rowEnd = pixelsIn_payload_rowEnd;
  assign passPixels_ready = 1'b1;
  assign pixelsOut_fire = (pixelsOut_valid && pixelsOut_ready);
  assign when_SuperResolutionPart1_l149 = (frameStart && pixelsOut_fire);
  assign passPixels_fire = (passPixels_valid && passPixels_ready);
  assign when_SuperResolutionPart1_l152 = (passPixels_payload_rowEnd && passPixels_fire);
  assign passPixels_fire_1 = (passPixels_valid && passPixels_ready);
  assign when_SuperResolutionPart1_l155 = (passPixels_payload_rowEnd && passPixels_fire_1);
  assign passPixels_fire_2 = (passPixels_valid && passPixels_ready);
  assign when_SuperResolutionPart1_l156 = (((bufferRowCount_value != 10'h0) && passPixels_payload_rowEnd) && passPixels_fire_2);
  assign when_SuperResolutionPart1_l157 = (((_zz_when_SuperResolutionPart1_l157 == 11'h001) && pixelsOut_payload_rowEnd) && (! holdBuffer));
  assign when_SuperResolutionPart1_l159 = 1'b1;
  assign pixelsOut_fire_1 = (pixelsOut_valid && pixelsOut_ready);
  assign when_SuperResolutionPart1_l163 = (pixelsOut_fire_1 && pixelsOut_payload_rowEnd);
  assign pixelsOut_fire_2 = (pixelsOut_valid && pixelsOut_ready);
  assign mainAddrOneStream_valid = validStream_valid;
  assign mainAddrOneStream_payload = mainAddrOne[9:0];
  assign counterAddrOneStream_valid = validStream_valid;
  assign counterAddrOneStream_payload = counterAddrOne[9:0];
  assign mainAddrTwoStream_valid = validStream_valid;
  assign mainAddrTwoStream_payload = mainAddrTwo[9:0];
  assign counterAddrTwoStream_valid = validStream_valid;
  assign counterAddrTwoStream_payload = counterAddrTwo[9:0];
  assign passPixels_fire_3 = (passPixels_valid && passPixels_ready);
  assign passPixels_fire_4 = (passPixels_valid && passPixels_ready);
  assign passPixels_fire_5 = (passPixels_valid && passPixels_ready);
  assign readStage_mainOnePixelStream_isFree = ((! readStage_mainOnePixelStream_valid) || readStage_mainOnePixelStream_ready);
  assign mainAddrOneStream_ready = readStage_mainOnePixelStream_isFree;
  assign readStage_mainOnePixelStream_valid = _zz_readStage_mainOnePixelStream_valid;
  assign readStage_mainOnePixelStream_payload = _zz_lineBufferOne_port1;
  assign readStage_counterOnePixelStream_isFree = ((! readStage_counterOnePixelStream_valid) || readStage_counterOnePixelStream_ready);
  assign counterAddrOneStream_ready = readStage_counterOnePixelStream_isFree;
  assign readStage_counterOnePixelStream_valid = _zz_readStage_counterOnePixelStream_valid;
  assign readStage_counterOnePixelStream_payload = _zz_lineBufferOne_port2;
  assign readStage_mainTwoPixelStream_isFree = ((! readStage_mainTwoPixelStream_valid) || readStage_mainTwoPixelStream_ready);
  assign mainAddrTwoStream_ready = readStage_mainTwoPixelStream_isFree;
  assign readStage_mainTwoPixelStream_valid = _zz_readStage_mainTwoPixelStream_valid;
  assign readStage_mainTwoPixelStream_payload = _zz_lineBufferTwo_port1;
  assign readStage_counterTwoPixelStream_isFree = ((! readStage_counterTwoPixelStream_valid) || readStage_counterTwoPixelStream_ready);
  assign counterAddrTwoStream_ready = readStage_counterTwoPixelStream_isFree;
  assign readStage_counterTwoPixelStream_valid = _zz_readStage_counterTwoPixelStream_valid;
  assign readStage_counterTwoPixelStream_payload = _zz_lineBufferTwo_port2;
  always @(*) begin
    controlStream_ready = readStage_controlPipe_ready;
    if(when_Stream_l368) begin
      controlStream_ready = 1'b1;
    end
  end

  assign when_Stream_l368 = (! readStage_controlPipe_valid);
  assign readStage_controlPipe_valid = controlStream_rValid;
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
        2'b00 : begin
          if(when_SuperResolutionPart1_l238) begin
            _zz_readStage_controlPipe_translated_payload_mainCompare = 1'b1;
          end else begin
            _zz_readStage_controlPipe_translated_payload_mainCompare = 1'b0;
          end
        end
        2'b01 : begin
          if(when_SuperResolutionPart1_l246) begin
            _zz_readStage_controlPipe_translated_payload_mainCompare = 1'b1;
          end else begin
            _zz_readStage_controlPipe_translated_payload_mainCompare = 1'b0;
          end
        end
        2'b10 : begin
          if(when_SuperResolutionPart1_l254) begin
            _zz_readStage_controlPipe_translated_payload_mainCompare = 1'b1;
          end else begin
            _zz_readStage_controlPipe_translated_payload_mainCompare = 1'b0;
          end
        end
        default : begin
          if(when_SuperResolutionPart1_l262) begin
            _zz_readStage_controlPipe_translated_payload_mainCompare = 1'b1;
          end else begin
            _zz_readStage_controlPipe_translated_payload_mainCompare = 1'b0;
          end
        end
      endcase
    end
    if(readStage_controlPipe_payload_twiceCompValid) begin
      case(readStage_controlPipe_payload_twiceMode)
        1'b1 : begin
          if(when_SuperResolutionPart1_l274) begin
            _zz_readStage_controlPipe_translated_payload_mainCompare = 1'b1;
          end else begin
            _zz_readStage_controlPipe_translated_payload_mainCompare = 1'b0;
          end
        end
        default : begin
          if(when_SuperResolutionPart1_l288) begin
            _zz_readStage_controlPipe_translated_payload_mainCompare = 1'b1;
          end else begin
            _zz_readStage_controlPipe_translated_payload_mainCompare = 1'b0;
          end
        end
      endcase
    end
  end

  always @(*) begin
    _zz_readStage_controlPipe_translated_payload_counterCompare = readStage_controlPipe_payload_counterCompare;
    if(readStage_controlPipe_payload_twiceCompValid) begin
      case(readStage_controlPipe_payload_twiceMode)
        1'b1 : begin
          if(when_SuperResolutionPart1_l280) begin
            _zz_readStage_controlPipe_translated_payload_counterCompare = 1'b1;
          end else begin
            _zz_readStage_controlPipe_translated_payload_counterCompare = 1'b0;
          end
        end
        default : begin
          if(when_SuperResolutionPart1_l294) begin
            _zz_readStage_controlPipe_translated_payload_counterCompare = 1'b1;
          end else begin
            _zz_readStage_controlPipe_translated_payload_counterCompare = 1'b0;
          end
        end
      endcase
    end
  end

  assign when_SuperResolutionPart1_l238 = (compareStage_counterOnePixelStream_payload <= compareStage_mainOnePixelStream_payload);
  assign when_SuperResolutionPart1_l246 = (compareStage_counterTwoPixelStream_payload <= compareStage_mainTwoPixelStream_payload);
  assign when_SuperResolutionPart1_l254 = (compareStage_mainTwoPixelStream_payload <= compareStage_mainOnePixelStream_payload);
  assign when_SuperResolutionPart1_l262 = (compareStage_mainOnePixelStream_payload <= compareStage_mainTwoPixelStream_payload);
  assign when_SuperResolutionPart1_l274 = (compareStage_mainTwoPixelStream_payload <= compareStage_mainOnePixelStream_payload);
  assign when_SuperResolutionPart1_l280 = (compareStage_counterOnePixelStream_payload <= compareStage_counterTwoPixelStream_payload);
  assign when_SuperResolutionPart1_l288 = (compareStage_mainOnePixelStream_payload <= compareStage_mainTwoPixelStream_payload);
  assign when_SuperResolutionPart1_l294 = (compareStage_counterTwoPixelStream_payload <= compareStage_counterOnePixelStream_payload);
  assign readStage_controlPipe_translated_valid = readStage_controlPipe_valid;
  assign readStage_controlPipe_ready = readStage_controlPipe_translated_ready;
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
        2'b00 : begin
          if(compareStage_controlPipe_payload_mainCompare) begin
            _zz_compareStage_controlPipe_translated_payload_mainDiff = (compareStage_mainOnePixelStream_payload - compareStage_counterOnePixelStream_payload);
          end else begin
            _zz_compareStage_controlPipe_translated_payload_mainDiff = (compareStage_counterOnePixelStream_payload - compareStage_mainOnePixelStream_payload);
          end
        end
        2'b01 : begin
          if(compareStage_controlPipe_payload_mainCompare) begin
            _zz_compareStage_controlPipe_translated_payload_mainDiff = (compareStage_mainTwoPixelStream_payload - compareStage_counterTwoPixelStream_payload);
          end else begin
            _zz_compareStage_controlPipe_translated_payload_mainDiff = (compareStage_counterTwoPixelStream_payload - compareStage_mainTwoPixelStream_payload);
          end
        end
        2'b10 : begin
          if(compareStage_controlPipe_payload_mainCompare) begin
            _zz_compareStage_controlPipe_translated_payload_mainDiff = (compareStage_mainOnePixelStream_payload - compareStage_mainTwoPixelStream_payload);
          end else begin
            _zz_compareStage_controlPipe_translated_payload_mainDiff = (compareStage_mainTwoPixelStream_payload - compareStage_mainOnePixelStream_payload);
          end
        end
        default : begin
          if(compareStage_controlPipe_payload_mainCompare) begin
            _zz_compareStage_controlPipe_translated_payload_mainDiff = (compareStage_mainTwoPixelStream_payload - compareStage_mainOnePixelStream_payload);
          end else begin
            _zz_compareStage_controlPipe_translated_payload_mainDiff = (compareStage_mainOnePixelStream_payload - compareStage_mainTwoPixelStream_payload);
          end
        end
      endcase
    end
    if(compareStage_controlPipe_payload_twiceCompValid) begin
      case(compareStage_controlPipe_payload_twiceMode)
        1'b1 : begin
          if(compareStage_controlPipe_payload_mainCompare) begin
            _zz_compareStage_controlPipe_translated_payload_mainDiff = (compareStage_mainOnePixelStream_payload - compareStage_mainTwoPixelStream_payload);
          end else begin
            _zz_compareStage_controlPipe_translated_payload_mainDiff = (compareStage_mainTwoPixelStream_payload - compareStage_mainOnePixelStream_payload);
          end
        end
        default : begin
          if(compareStage_controlPipe_payload_mainCompare) begin
            _zz_compareStage_controlPipe_translated_payload_mainDiff = (compareStage_mainTwoPixelStream_payload - compareStage_mainOnePixelStream_payload);
          end else begin
            _zz_compareStage_controlPipe_translated_payload_mainDiff = (compareStage_mainOnePixelStream_payload - compareStage_mainTwoPixelStream_payload);
          end
        end
      endcase
    end
  end

  always @(*) begin
    _zz_compareStage_controlPipe_translated_payload_counterDiff = compareStage_controlPipe_payload_counterDiff;
    if(compareStage_controlPipe_payload_twiceCompValid) begin
      case(compareStage_controlPipe_payload_twiceMode)
        1'b1 : begin
          if(compareStage_controlPipe_payload_counterCompare) begin
            _zz_compareStage_controlPipe_translated_payload_counterDiff = (compareStage_counterTwoPixelStream_payload - compareStage_counterOnePixelStream_payload);
          end else begin
            _zz_compareStage_controlPipe_translated_payload_counterDiff = (compareStage_counterOnePixelStream_payload - compareStage_counterTwoPixelStream_payload);
          end
        end
        default : begin
          if(compareStage_controlPipe_payload_counterCompare) begin
            _zz_compareStage_controlPipe_translated_payload_counterDiff = (compareStage_counterOnePixelStream_payload - compareStage_counterTwoPixelStream_payload);
          end else begin
            _zz_compareStage_controlPipe_translated_payload_counterDiff = (compareStage_counterTwoPixelStream_payload - compareStage_counterOnePixelStream_payload);
          end
        end
      endcase
    end
  end

  assign compareStage_controlPipe_translated_valid = compareStage_controlPipe_valid;
  assign compareStage_controlPipe_ready = compareStage_controlPipe_translated_ready;
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
  assign resultStage_pixelStream_valid = diffStage_controlPipe_valid;
  assign diffStage_controlPipe_ready = resultStage_pixelStream_ready;
  always @(*) begin
    resultStage_pixelStream_payload = 8'h0;
    if(diffStage_controlPipe_payload_passValid) begin
      case(diffStage_controlPipe_payload_passMode)
        1'b1 : begin
          resultStage_pixelStream_payload = diffStage_mainOnePixelStream_payload;
        end
        default : begin
          resultStage_pixelStream_payload = diffStage_mainTwoPixelStream_payload;
        end
      endcase
    end
    if(diffStage_controlPipe_payload_onceValid) begin
      case(diffStage_controlPipe_payload_onceMode)
        2'b00 : begin
          if(when_SuperResolutionPart1_l418) begin
            resultStage_pixelStream_payload = diffStage_mainOnePixelStream_payload;
          end else begin
            resultStage_pixelStream_payload = _zz_resultStage_pixelStream_payload[7:0];
          end
        end
        2'b01 : begin
          if(when_SuperResolutionPart1_l426) begin
            resultStage_pixelStream_payload = diffStage_mainTwoPixelStream_payload;
          end else begin
            resultStage_pixelStream_payload = _zz_resultStage_pixelStream_payload_2[7:0];
          end
        end
        2'b10 : begin
          if(when_SuperResolutionPart1_l434) begin
            resultStage_pixelStream_payload = diffStage_mainOnePixelStream_payload;
          end else begin
            resultStage_pixelStream_payload = _zz_resultStage_pixelStream_payload_4[7:0];
          end
        end
        default : begin
          if(when_SuperResolutionPart1_l442) begin
            resultStage_pixelStream_payload = diffStage_mainTwoPixelStream_payload;
          end else begin
            resultStage_pixelStream_payload = _zz_resultStage_pixelStream_payload_6[7:0];
          end
        end
      endcase
    end
    if(diffStage_controlPipe_payload_twiceCompValid) begin
      case(diffStage_controlPipe_payload_twiceMode)
        1'b1 : begin
          if(when_SuperResolutionPart1_l454) begin
            case(switch_SuperResolutionPart1_l455)
              1'b1 : begin
                resultStage_pixelStream_payload = resultStage_mainOnePixelStream_payload;
              end
              default : begin
                resultStage_pixelStream_payload = resultStage_counterTwoPixelStream_payload;
              end
            endcase
          end else begin
            case(switch_SuperResolutionPart1_l464)
              1'b1 : begin
                resultStage_pixelStream_payload = _zz_resultStage_pixelStream_payload_8[7:0];
              end
              default : begin
                resultStage_pixelStream_payload = _zz_resultStage_pixelStream_payload_10[7:0];
              end
            endcase
          end
        end
        default : begin
          if(when_SuperResolutionPart1_l476) begin
            case(switch_SuperResolutionPart1_l477)
              1'b1 : begin
                resultStage_pixelStream_payload = resultStage_mainTwoPixelStream_payload;
              end
              default : begin
                resultStage_pixelStream_payload = resultStage_counterOnePixelStream_payload;
              end
            endcase
          end else begin
            case(switch_SuperResolutionPart1_l486)
              1'b1 : begin
                resultStage_pixelStream_payload = _zz_resultStage_pixelStream_payload_12[7:0];
              end
              default : begin
                resultStage_pixelStream_payload = _zz_resultStage_pixelStream_payload_14[7:0];
              end
            endcase
          end
        end
      endcase
    end
  end

  assign when_SuperResolutionPart1_l418 = (inpThreshold <= diffStage_controlPipe_payload_mainDiff);
  assign when_SuperResolutionPart1_l426 = (inpThreshold <= diffStage_controlPipe_payload_mainDiff);
  assign when_SuperResolutionPart1_l434 = (inpThreshold <= diffStage_controlPipe_payload_mainDiff);
  assign when_SuperResolutionPart1_l442 = (inpThreshold <= diffStage_controlPipe_payload_mainDiff);
  assign when_SuperResolutionPart1_l454 = ((inpThreshold <= diffStage_controlPipe_payload_mainDiff) && (inpThreshold <= diffStage_controlPipe_payload_mainDiff));
  assign switch_SuperResolutionPart1_l455 = (diffStage_controlPipe_payload_counterDiff <= diffStage_controlPipe_payload_mainDiff);
  assign switch_SuperResolutionPart1_l464 = (diffStage_controlPipe_payload_counterDiff <= diffStage_controlPipe_payload_mainDiff);
  assign when_SuperResolutionPart1_l476 = ((inpThreshold <= diffStage_controlPipe_payload_mainDiff) && (inpThreshold <= diffStage_controlPipe_payload_mainDiff));
  assign switch_SuperResolutionPart1_l477 = (diffStage_controlPipe_payload_counterDiff <= diffStage_controlPipe_payload_mainDiff);
  assign switch_SuperResolutionPart1_l486 = (diffStage_controlPipe_payload_counterDiff <= diffStage_controlPipe_payload_mainDiff);
  always @(*) begin
    resultStage_pixelStream_ready = resultStage_resultStream_ready;
    if(when_Stream_l368_15) begin
      resultStage_pixelStream_ready = 1'b1;
    end
  end

  assign when_Stream_l368_15 = (! resultStage_resultStream_valid);
  assign resultStage_resultStream_valid = resultStage_pixelStream_rValid;
  assign resultStage_resultStream_payload = resultStage_pixelStream_rData;
  assign resultsJoin_payload_0 = resultStage_resultStream_payload;
  assign resultsJoin_payload_1 = resultStage_mainOnePixelStream_payload;
  assign resultsJoin_payload_2 = resultStage_counterOnePixelStream_payload;
  assign resultsJoin_payload_3 = resultStage_mainTwoPixelStream_payload;
  assign resultsJoin_payload_4 = resultStage_counterTwoPixelStream_payload;
  assign resultsJoin_valid = ((((resultStage_resultStream_valid && resultStage_mainOnePixelStream_valid) && resultStage_counterOnePixelStream_valid) && resultStage_mainTwoPixelStream_valid) && resultStage_counterTwoPixelStream_valid);
  assign resultsJoin_fire = (resultsJoin_valid && resultsJoin_ready);
  assign resultStage_resultStream_ready = resultsJoin_fire;
  assign resultsJoin_fire_1 = (resultsJoin_valid && resultsJoin_ready);
  assign resultStage_mainOnePixelStream_ready = resultsJoin_fire_1;
  assign resultsJoin_fire_2 = (resultsJoin_valid && resultsJoin_ready);
  assign resultStage_counterOnePixelStream_ready = resultsJoin_fire_2;
  assign resultsJoin_fire_3 = (resultsJoin_valid && resultsJoin_ready);
  assign resultStage_mainTwoPixelStream_ready = resultsJoin_fire_3;
  assign resultsJoin_fire_4 = (resultsJoin_valid && resultsJoin_ready);
  assign resultStage_counterTwoPixelStream_ready = resultsJoin_fire_4;
  assign resultsJoin_ready = pixelsOut_ready;
  assign when_SuperResolutionPart1_l519 = (_zz_when_SuperResolutionPart1_l519 == _zz_when_SuperResolutionPart1_l519_1);
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
        case(switch_SuperResolutionPart1_l530)
          1'b1 : begin
            if(passPixels_fire_6) begin
              case(switch_SuperResolutionPart1_l533)
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
            if(passPixels_fire_7) begin
              case(switch_SuperResolutionPart1_l546)
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
        if(pixelsOut_fire_3) begin
          case(switch_SuperResolutionPart1_l564)
            1'b1 : begin
              controlStateMachine_stateNext = controlStateMachine_enumDef_HOLD;
            end
            default : begin
              controlStateMachine_stateNext = controlStateMachine_enumDef_ONCE;
            end
          endcase
        end
      end
      controlStateMachine_enumDef_ONCE : begin
        case(switch_SuperResolutionPart1_l582)
          1'b1 : begin
            if(pixelsOut_fire_4) begin
              controlStateMachine_stateNext = controlStateMachine_enumDef_PASS;
            end
          end
          default : begin
            if(pixelsOut_fire_5) begin
              case(switch_SuperResolutionPart1_l604)
                1'b1 : begin
                  controlStateMachine_stateNext = controlStateMachine_enumDef_HOLD;
                end
                default : begin
                  controlStateMachine_stateNext = controlStateMachine_enumDef_TWICE;
                end
              endcase
            end
          end
        endcase
      end
      controlStateMachine_enumDef_TWICE : begin
        if(pixelsOut_fire_6) begin
          controlStateMachine_stateNext = controlStateMachine_enumDef_ONCE;
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

  assign switch_SuperResolutionPart1_l530 = (_zz_switch_SuperResolutionPart1_l530 == 11'h0);
  assign passPixels_fire_6 = (passPixels_valid && passPixels_ready);
  assign switch_SuperResolutionPart1_l533 = (_zz_switch_SuperResolutionPart1_l533 == 11'h0);
  assign passPixels_fire_7 = (passPixels_valid && passPixels_ready);
  assign switch_SuperResolutionPart1_l546 = (_zz_switch_SuperResolutionPart1_l546 == 11'h0);
  assign pixelsOut_fire_3 = (pixelsOut_valid && pixelsOut_ready);
  assign passPixels_fire_8 = (passPixels_valid && passPixels_ready);
  assign switch_SuperResolutionPart1_l564 = ((_zz_switch_SuperResolutionPart1_l564 == _zz_switch_SuperResolutionPart1_l564_1) && (! passPixels_fire_8));
  assign switch_SuperResolutionPart1_l582 = (_zz_switch_SuperResolutionPart1_l582 == 11'h0);
  assign pixelsOut_fire_4 = (pixelsOut_valid && pixelsOut_ready);
  assign pixelsOut_fire_5 = (pixelsOut_valid && pixelsOut_ready);
  assign passPixels_fire_9 = (passPixels_valid && passPixels_ready);
  assign switch_SuperResolutionPart1_l604 = ((_zz_switch_SuperResolutionPart1_l604 == _zz_switch_SuperResolutionPart1_l604_1) && (! passPixels_fire_9));
  assign pixelsOut_fire_6 = (pixelsOut_valid && pixelsOut_ready);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      slaveStart <= 1'b0;
      frameStart <= 1'b0;
      inpThreshold <= 8'h80;
      bmpWidth <= 10'h3c0;
      bmpHeight <= 10'h21c;
      holdBuffer <= 1'b0;
      interComplete <= 1'b0;
      bufferRowCount_value <= 10'h0;
      bufferSwitch <= 1'b0;
      bufferEnable <= 1'b0;
      nextRowBuffer <= 1'b1;
      bufferWAddr_value <= 10'h0;
      outPixelAddr_value <= 11'h0;
      outRowCount_value <= 11'h0;
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
      resultStage_pixelStream_rValid <= 1'b0;
      controlStateMachine_stateReg <= controlStateMachine_enumDef_BOOT;
    end else begin
      if(when_SuperResolutionPart1_l71) begin
        slaveStart <= 1'b1;
      end
      if(inpTwoDoneIn) begin
        slaveStart <= 1'b0;
      end
      if(when_SuperResolutionPart1_l74) begin
        frameStart <= 1'b1;
      end
      inpThreshold <= thresholdIn;
      bmpWidth <= widthIn;
      bmpHeight <= heightIn;
      if(when_SuperResolutionPart1_l86) begin
        holdBuffer <= 1'b0;
      end
      if(inpThreeDoneIn) begin
        interComplete <= 1'b1;
      end
      if(StartIn) begin
        interComplete <= 1'b0;
      end
      bufferRowCount_value <= bufferRowCount_valueNext;
      if(StartIn) begin
        bufferSwitch <= 1'b0;
      end
      if(when_SuperResolutionPart1_l98) begin
        bufferEnable <= 1'b1;
      end
      if(when_SuperResolutionPart1_l98_1) begin
        bufferEnable <= 1'b0;
      end
      if(StartIn) begin
        nextRowBuffer <= 1'b1;
      end
      bufferWAddr_value <= bufferWAddr_valueNext;
      outPixelAddr_value <= outPixelAddr_valueNext;
      outRowCount_value <= outRowCount_valueNext;
      if(when_SuperResolutionPart1_l149) begin
        frameStart <= 1'b0;
      end
      if(when_SuperResolutionPart1_l155) begin
        bufferSwitch <= (! bufferSwitch);
      end
      if(when_SuperResolutionPart1_l156) begin
        holdBuffer <= 1'b1;
      end
      if(when_SuperResolutionPart1_l157) begin
        holdBuffer <= 1'b0;
        if(when_SuperResolutionPart1_l159) begin
          nextRowBuffer <= (! nextRowBuffer);
        end
      end
      if(interComplete) begin
        interComplete <= 1'b0;
      end
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
      if(resultStage_pixelStream_ready) begin
        resultStage_pixelStream_rValid <= resultStage_pixelStream_valid;
      end
      controlStateMachine_stateReg <= controlStateMachine_stateNext;
    end
  end

  always @(posedge clk) begin
    if(controlStream_ready) begin
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
    if(resultStage_pixelStream_ready) begin
      resultStage_pixelStream_rData <= resultStage_pixelStream_payload;
    end
  end


endmodule
