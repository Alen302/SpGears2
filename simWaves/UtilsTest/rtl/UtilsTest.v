// Generator : SpinalHDL v1.7.0b    git head : 541894e01cf6b5ef03f924225e4f769fb167dea8
// Component : UtilsTest
// Git hash  : e7ffd1bea239a06a9b6254e74a69a781a1c27788

`timescale 1ns/1ps

module UtilsTest (
  input               dataIn_valid,
  output              dataIn_ready,
  input      [7:0]    dataIn_payload_a,
  input               dataIn_payload_b,
  input      [7:0]    baseIn,
  output              dataOut_valid,
  input               dataOut_ready,
  output     [7:0]    dataOut_payload_a,
  output              dataOut_payload_b,
  output     [7:0]    baseOut,
  input               clk,
  input               reset
);

  wire                dataIn_s2mPipe_valid;
  reg                 dataIn_s2mPipe_ready;
  wire       [7:0]    dataIn_s2mPipe_payload_a;
  wire                dataIn_s2mPipe_payload_b;
  reg                 dataIn_rValid;
  reg        [7:0]    dataIn_rData_a;
  reg                 dataIn_rData_b;
  wire                dataIn_s2mPipe_m2sPipe_valid;
  wire                dataIn_s2mPipe_m2sPipe_ready;
  wire       [7:0]    dataIn_s2mPipe_m2sPipe_payload_a;
  wire                dataIn_s2mPipe_m2sPipe_payload_b;
  reg                 dataIn_s2mPipe_rValid;
  reg        [7:0]    dataIn_s2mPipe_rData_a;
  reg                 dataIn_s2mPipe_rData_b;
  wire                when_Stream_l368;
  reg        [7:0]    baseIn_regNext;

  assign dataIn_ready = (! dataIn_rValid);
  assign dataIn_s2mPipe_valid = (dataIn_valid || dataIn_rValid);
  assign dataIn_s2mPipe_payload_a = (dataIn_rValid ? dataIn_rData_a : dataIn_payload_a);
  assign dataIn_s2mPipe_payload_b = (dataIn_rValid ? dataIn_rData_b : dataIn_payload_b);
  always @(*) begin
    dataIn_s2mPipe_ready = dataIn_s2mPipe_m2sPipe_ready;
    if(when_Stream_l368) begin
      dataIn_s2mPipe_ready = 1'b1;
    end
  end

  assign when_Stream_l368 = (! dataIn_s2mPipe_m2sPipe_valid);
  assign dataIn_s2mPipe_m2sPipe_valid = dataIn_s2mPipe_rValid;
  assign dataIn_s2mPipe_m2sPipe_payload_a = dataIn_s2mPipe_rData_a;
  assign dataIn_s2mPipe_m2sPipe_payload_b = dataIn_s2mPipe_rData_b;
  assign dataOut_valid = dataIn_s2mPipe_m2sPipe_valid;
  assign dataIn_s2mPipe_m2sPipe_ready = dataOut_ready;
  assign dataOut_payload_a = dataIn_s2mPipe_m2sPipe_payload_a;
  assign dataOut_payload_b = dataIn_s2mPipe_m2sPipe_payload_b;
  assign baseOut = baseIn_regNext;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      dataIn_rValid <= 1'b0;
      dataIn_s2mPipe_rValid <= 1'b0;
    end else begin
      if(dataIn_valid) begin
        dataIn_rValid <= 1'b1;
      end
      if(dataIn_s2mPipe_ready) begin
        dataIn_rValid <= 1'b0;
      end
      if(dataIn_s2mPipe_ready) begin
        dataIn_s2mPipe_rValid <= dataIn_s2mPipe_valid;
      end
    end
  end

  always @(posedge clk) begin
    if(dataIn_ready) begin
      dataIn_rData_a <= dataIn_payload_a;
      dataIn_rData_b <= dataIn_payload_b;
    end
    if(dataIn_s2mPipe_ready) begin
      dataIn_s2mPipe_rData_a <= dataIn_s2mPipe_payload_a;
      dataIn_s2mPipe_rData_b <= dataIn_s2mPipe_payload_b;
    end
    baseIn_regNext <= baseIn;
  end


endmodule
