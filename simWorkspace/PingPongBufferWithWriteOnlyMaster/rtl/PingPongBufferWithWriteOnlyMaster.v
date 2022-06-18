// Generator : SpinalHDL v1.6.4    git head : 598c18959149eb18e5eee5b0aa3eef01ecaa41a1
// Component : PingPongBufferWithWriteOnlyMaster
// Git hash  : 99e8397e0e93b4c6ddf5c8775464765f14d802be

`timescale 1ns/1ps 

module PingPongBufferWithWriteOnlyMaster (
  input               streamIn_valid,
  output              streamIn_ready,
  input      [31:0]   streamIn_payload,
  input               startIn,
  input      [7:0]    bufferDepthIn,
  output              interruptOut,
  input      [31:0]   startAddr,
  input      [31:0]   offset,
  input      [7:0]    pathNumb,
  output              full_aw_valid,
  input               full_aw_ready,
  output     [31:0]   full_aw_payload_addr,
  output     [3:0]    full_aw_payload_region,
  output     [7:0]    full_aw_payload_len,
  output     [2:0]    full_aw_payload_size,
  output     [1:0]    full_aw_payload_burst,
  output     [3:0]    full_aw_payload_cache,
  output     [3:0]    full_aw_payload_qos,
  output     [2:0]    full_aw_payload_prot,
  output              full_w_valid,
  input               full_w_ready,
  output     [31:0]   full_w_payload_data,
  output     [3:0]    full_w_payload_strb,
  output              full_w_payload_last,
  input               full_b_valid,
  output              full_b_ready,
  input      [1:0]    full_b_payload_resp,
  input               aresetn,
  input               aclk
);

  wire                pingPongBuffer_1_s_axis_ready;
  wire                pingPongBuffer_1_interruptOut;
  wire                pingPongBuffer_1_m_axis_valid;
  wire       [31:0]   pingPongBuffer_1_m_axis_payload;
  wire                pingPongBuffer_1_startOut;
  wire       [7:0]    pingPongBuffer_1_bufferDepthOut;
  wire                writeOnlyMater_s_axis_ready;
  wire                writeOnlyMater_m_axi_awvalid;
  wire       [31:0]   writeOnlyMater_m_axi_awaddr;
  wire       [3:0]    writeOnlyMater_m_axi_awregion;
  wire       [7:0]    writeOnlyMater_m_axi_awlen;
  wire       [2:0]    writeOnlyMater_m_axi_awsize;
  wire       [1:0]    writeOnlyMater_m_axi_awburst;
  wire       [3:0]    writeOnlyMater_m_axi_awcache;
  wire       [3:0]    writeOnlyMater_m_axi_awqos;
  wire       [2:0]    writeOnlyMater_m_axi_awprot;
  wire                writeOnlyMater_m_axi_wvalid;
  wire       [31:0]   writeOnlyMater_m_axi_wdata;
  wire       [3:0]    writeOnlyMater_m_axi_wstrb;
  wire                writeOnlyMater_m_axi_wlast;
  wire                writeOnlyMater_m_axi_bready;
  wire                writeOnlyMater_transInterrupt;

  PingPongBuffer pingPongBuffer_1 (
    .s_axis_valid      (streamIn_valid                         ), //i
    .s_axis_ready      (pingPongBuffer_1_s_axis_ready          ), //o
    .s_axis_payload    (streamIn_payload[31:0]                 ), //i
    .startIn           (startIn                                ), //i
    .bufferDepthIn     (bufferDepthIn[7:0]                     ), //i
    .interruptOut      (pingPongBuffer_1_interruptOut          ), //o
    .m_axis_valid      (pingPongBuffer_1_m_axis_valid          ), //o
    .m_axis_ready      (writeOnlyMater_s_axis_ready            ), //i
    .m_axis_payload    (pingPongBuffer_1_m_axis_payload[31:0]  ), //o
    .startOut          (pingPongBuffer_1_startOut              ), //o
    .bufferDepthOut    (pingPongBuffer_1_bufferDepthOut[7:0]   ), //o
    .interruptIn       (writeOnlyMater_transInterrupt          ), //i
    .aresetn           (aresetn                                ), //i
    .aclk              (aclk                                   )  //i
  );
  Stream2Axi4WriteOnlyMasterInterface writeOnlyMater (
    .start             (pingPongBuffer_1_startOut              ), //i
    .burstLen          (pingPongBuffer_1_bufferDepthOut[7:0]   ), //i
    .startAddr         (startAddr[31:0]                        ), //i
    .offset            (offset[31:0]                           ), //i
    .pathNumb          (pathNumb[7:0]                          ), //i
    .s_axis_valid      (pingPongBuffer_1_m_axis_valid          ), //i
    .s_axis_ready      (writeOnlyMater_s_axis_ready            ), //o
    .s_axis_payload    (pingPongBuffer_1_m_axis_payload[31:0]  ), //i
    .m_axi_awvalid     (writeOnlyMater_m_axi_awvalid           ), //o
    .m_axi_awready     (full_aw_ready                          ), //i
    .m_axi_awaddr      (writeOnlyMater_m_axi_awaddr[31:0]      ), //o
    .m_axi_awregion    (writeOnlyMater_m_axi_awregion[3:0]     ), //o
    .m_axi_awlen       (writeOnlyMater_m_axi_awlen[7:0]        ), //o
    .m_axi_awsize      (writeOnlyMater_m_axi_awsize[2:0]       ), //o
    .m_axi_awburst     (writeOnlyMater_m_axi_awburst[1:0]      ), //o
    .m_axi_awcache     (writeOnlyMater_m_axi_awcache[3:0]      ), //o
    .m_axi_awqos       (writeOnlyMater_m_axi_awqos[3:0]        ), //o
    .m_axi_awprot      (writeOnlyMater_m_axi_awprot[2:0]       ), //o
    .m_axi_wvalid      (writeOnlyMater_m_axi_wvalid            ), //o
    .m_axi_wready      (full_w_ready                           ), //i
    .m_axi_wdata       (writeOnlyMater_m_axi_wdata[31:0]       ), //o
    .m_axi_wstrb       (writeOnlyMater_m_axi_wstrb[3:0]        ), //o
    .m_axi_wlast       (writeOnlyMater_m_axi_wlast             ), //o
    .m_axi_bvalid      (full_b_valid                           ), //i
    .m_axi_bready      (writeOnlyMater_m_axi_bready            ), //o
    .m_axi_bresp       (full_b_payload_resp[1:0]               ), //i
    .transInterrupt    (writeOnlyMater_transInterrupt          ), //o
    .aresetn           (aresetn                                ), //i
    .aclk              (aclk                                   )  //i
  );
  assign streamIn_ready = pingPongBuffer_1_s_axis_ready;
  assign interruptOut = pingPongBuffer_1_interruptOut;
  assign full_aw_valid = writeOnlyMater_m_axi_awvalid;
  assign full_aw_payload_addr = writeOnlyMater_m_axi_awaddr;
  assign full_aw_payload_region = writeOnlyMater_m_axi_awregion;
  assign full_aw_payload_len = writeOnlyMater_m_axi_awlen;
  assign full_aw_payload_size = writeOnlyMater_m_axi_awsize;
  assign full_aw_payload_burst = writeOnlyMater_m_axi_awburst;
  assign full_aw_payload_cache = writeOnlyMater_m_axi_awcache;
  assign full_aw_payload_qos = writeOnlyMater_m_axi_awqos;
  assign full_aw_payload_prot = writeOnlyMater_m_axi_awprot;
  assign full_w_valid = writeOnlyMater_m_axi_wvalid;
  assign full_w_payload_data = writeOnlyMater_m_axi_wdata;
  assign full_w_payload_strb = writeOnlyMater_m_axi_wstrb;
  assign full_w_payload_last = writeOnlyMater_m_axi_wlast;
  assign full_b_ready = writeOnlyMater_m_axi_bready;

endmodule

module Stream2Axi4WriteOnlyMasterInterface (
  input               start,
  input      [7:0]    burstLen,
  input      [31:0]   startAddr,
  input      [31:0]   offset,
  input      [7:0]    pathNumb,
  input               s_axis_valid,
  output reg          s_axis_ready,
  input      [31:0]   s_axis_payload,
  output              m_axi_awvalid,
  input               m_axi_awready,
  output     [31:0]   m_axi_awaddr,
  output     [3:0]    m_axi_awregion,
  output     [7:0]    m_axi_awlen,
  output     [2:0]    m_axi_awsize,
  output     [1:0]    m_axi_awburst,
  output     [3:0]    m_axi_awcache,
  output     [3:0]    m_axi_awqos,
  output     [2:0]    m_axi_awprot,
  output reg          m_axi_wvalid,
  input               m_axi_wready,
  output reg [31:0]   m_axi_wdata,
  output     [3:0]    m_axi_wstrb,
  output              m_axi_wlast,
  input               m_axi_bvalid,
  output              m_axi_bready,
  input      [1:0]    m_axi_bresp,
  output              transInterrupt,
  input               aresetn,
  input               aclk
);

  reg                 streamFifo_3_io_push_valid;
  reg        [31:0]   streamFifo_3_io_push_payload;
  reg                 streamFifo_3_io_pop_ready;
  wire                streamFifo_3_io_push_ready;
  wire                streamFifo_3_io_pop_valid;
  wire       [31:0]   streamFifo_3_io_pop_payload;
  wire       [8:0]    streamFifo_3_io_occupancy;
  wire       [8:0]    streamFifo_3_io_availability;
  wire       [8:0]    _zz__zz_m_axi_wlast_1;
  wire       [0:0]    _zz__zz_m_axi_wlast_1_1;
  wire       [8:0]    _zz__zz_when_Axi4WriteOnlyMater_l105_1;
  wire       [0:0]    _zz__zz_when_Axi4WriteOnlyMater_l105_1_1;
  wire       [8:0]    _zz_when_Axi4WriteOnlyMater_l105_3;
  wire       [7:0]    _zz__zz_axi4Interface_isInitialIterate_1;
  wire       [0:0]    _zz__zz_axi4Interface_isInitialIterate_1_1;
  wire       [8:0]    _zz_when_Axi4WriteOnlyMater_l187;
  wire       [8:0]    _zz_m_axi_wlast_3;
  wire       [7:0]    _zz_m_axi_wlast_4;
  wire       [31:0]   axi4Interface_transferDataType;
  reg                 _zz_m_axi_wlast;
  reg                 _zz_1;
  reg        [8:0]    _zz_m_axi_wlast_1;
  reg        [8:0]    _zz_m_axi_wlast_2;
  wire                _zz_2;
  wire                _zz_3;
  reg                 m_axi_wlast_regNext;
  wire                axi4Interface_resetStartSendSignal;
  wire                _zz_4;
  (* async_reg = "true" *) reg                 startSendSignal;
  reg                 _zz_when_Axi4WriteOnlyMater_l105;
  reg                 _zz_5;
  reg        [8:0]    _zz_when_Axi4WriteOnlyMater_l105_1;
  reg        [8:0]    _zz_when_Axi4WriteOnlyMater_l105_2;
  wire                _zz_6;
  wire                _zz_7;
  reg        [7:0]    burstLengthReg;
  wire                when_Axi4WriteOnlyMater_l105;
  wire                streamFifo_3_io_push_fire;
  wire                axi4Interface_full_b_fire;
  reg                 axi4Interface_newBurst;
  wire                axi4Interface_full_b_fire_1;
  reg                 axi4Interface_controlAwValidSignal;
  wire                when_Axi4WriteOnlyMater_l131;
  wire                axi4Interface_full_aw_fire;
  reg                 _zz_axi4Interface_isInitialIterate;
  reg                 _zz_8;
  reg        [7:0]    _zz_axi4Interface_isInitialIterate_1;
  reg        [7:0]    _zz_axi4Interface_isInitialIterate_2;
  wire                axi4Interface_isInitialIterate /* verilator public */ ;
  reg                 axi4Interface_isRefreshAddr;
  wire                axi4Interface_full_b_fire_2;
  wire                axi4Interface_full_b_fire_3;
  wire                axi4Interface_full_b_fire_4;
  wire                when_Axi4WriteOnlyMater_l152;
  reg        [31:0]   offsetAddressReg;
  reg        [31:0]   axi4Interface_finalAddressReg;
  wire                when_Axi4WriteOnlyMater_l159;
  wire                when_Axi4WriteOnlyMater_l164;
  wire                when_Axi4WriteOnlyMater_l187;
  wire                streamFifo_3_io_pop_m2sPipe_valid;
  wire                streamFifo_3_io_pop_m2sPipe_ready;
  wire       [31:0]   streamFifo_3_io_pop_m2sPipe_payload;
  reg                 streamFifo_3_io_pop_rValid;
  reg        [31:0]   streamFifo_3_io_pop_rData;
  wire                when_Stream_l342;
  wire                axi4Interface_full_w_fire;
  wire                axi4Interface_full_b_fire_5;
  reg                 axi4Interface_controlBReady;
  wire                axi4Interface_full_b_fire_6;
  wire                axi4Interface_full_b_fire_7;
  reg                 axi4Interface_isBurstComplete;

  assign _zz__zz_m_axi_wlast_1_1 = _zz_m_axi_wlast;
  assign _zz__zz_m_axi_wlast_1 = {8'd0, _zz__zz_m_axi_wlast_1_1};
  assign _zz__zz_when_Axi4WriteOnlyMater_l105_1_1 = _zz_when_Axi4WriteOnlyMater_l105;
  assign _zz__zz_when_Axi4WriteOnlyMater_l105_1 = {8'd0, _zz__zz_when_Axi4WriteOnlyMater_l105_1_1};
  assign _zz_when_Axi4WriteOnlyMater_l105_3 = {1'd0, burstLengthReg};
  assign _zz__zz_axi4Interface_isInitialIterate_1_1 = _zz_axi4Interface_isInitialIterate;
  assign _zz__zz_axi4Interface_isInitialIterate_1 = {7'd0, _zz__zz_axi4Interface_isInitialIterate_1_1};
  assign _zz_when_Axi4WriteOnlyMater_l187 = {1'd0, burstLengthReg};
  assign _zz_m_axi_wlast_4 = (burstLengthReg - 8'h01);
  assign _zz_m_axi_wlast_3 = {1'd0, _zz_m_axi_wlast_4};
  StreamFifo streamFifo_3 (
    .io_push_valid      (streamFifo_3_io_push_valid          ), //i
    .io_push_ready      (streamFifo_3_io_push_ready          ), //o
    .io_push_payload    (streamFifo_3_io_push_payload[31:0]  ), //i
    .io_pop_valid       (streamFifo_3_io_pop_valid           ), //o
    .io_pop_ready       (streamFifo_3_io_pop_ready           ), //i
    .io_pop_payload     (streamFifo_3_io_pop_payload[31:0]   ), //o
    .io_flush           (1'b0                                ), //i
    .io_occupancy       (streamFifo_3_io_occupancy[8:0]      ), //o
    .io_availability    (streamFifo_3_io_availability[8:0]   ), //o
    .aclk               (aclk                                ), //i
    .aresetn            (aresetn                             )  //i
  );
  always @(*) begin
    _zz_m_axi_wlast = 1'b0;
    if(axi4Interface_full_w_fire) begin
      _zz_m_axi_wlast = 1'b1;
    end
  end

  always @(*) begin
    _zz_1 = 1'b0;
    if(axi4Interface_full_b_fire_5) begin
      _zz_1 = 1'b1;
    end
  end

  assign _zz_2 = (_zz_m_axi_wlast_2 == 9'h100);
  assign _zz_3 = (_zz_2 && _zz_m_axi_wlast);
  always @(*) begin
    if(_zz_3) begin
      _zz_m_axi_wlast_1 = 9'h0;
    end else begin
      _zz_m_axi_wlast_1 = (_zz_m_axi_wlast_2 + _zz__zz_m_axi_wlast_1);
    end
    if(_zz_1) begin
      _zz_m_axi_wlast_1 = 9'h0;
    end
  end

  assign axi4Interface_resetStartSendSignal = ((! m_axi_wlast) && m_axi_wlast_regNext);
  assign _zz_4 = (axi4Interface_resetStartSendSignal || (! aresetn));
  always @(*) begin
    _zz_when_Axi4WriteOnlyMater_l105 = 1'b0;
    if(streamFifo_3_io_push_fire) begin
      _zz_when_Axi4WriteOnlyMater_l105 = 1'b1;
    end
  end

  always @(*) begin
    _zz_5 = 1'b0;
    if(axi4Interface_full_b_fire) begin
      _zz_5 = 1'b1;
    end
  end

  assign _zz_6 = (_zz_when_Axi4WriteOnlyMater_l105_2 == 9'h100);
  assign _zz_7 = (_zz_6 && _zz_when_Axi4WriteOnlyMater_l105);
  always @(*) begin
    if(_zz_7) begin
      _zz_when_Axi4WriteOnlyMater_l105_1 = 9'h0;
    end else begin
      _zz_when_Axi4WriteOnlyMater_l105_1 = (_zz_when_Axi4WriteOnlyMater_l105_2 + _zz__zz_when_Axi4WriteOnlyMater_l105_1);
    end
    if(_zz_5) begin
      _zz_when_Axi4WriteOnlyMater_l105_1 = 9'h0;
    end
  end

  always @(*) begin
    s_axis_ready = 1'b0;
    if(when_Axi4WriteOnlyMater_l105) begin
      s_axis_ready = streamFifo_3_io_push_ready;
    end
  end

  always @(*) begin
    streamFifo_3_io_push_payload = s_axis_payload;
    if(when_Axi4WriteOnlyMater_l105) begin
      streamFifo_3_io_push_payload = s_axis_payload;
    end
  end

  always @(*) begin
    streamFifo_3_io_push_valid = 1'b0;
    if(when_Axi4WriteOnlyMater_l105) begin
      streamFifo_3_io_push_valid = s_axis_valid;
    end
  end

  assign when_Axi4WriteOnlyMater_l105 = ((_zz_when_Axi4WriteOnlyMater_l105_2 < _zz_when_Axi4WriteOnlyMater_l105_3) && startSendSignal);
  assign streamFifo_3_io_push_fire = (streamFifo_3_io_push_valid && streamFifo_3_io_push_ready);
  assign axi4Interface_full_b_fire = (m_axi_bvalid && m_axi_bready);
  assign axi4Interface_full_b_fire_1 = (m_axi_bvalid && m_axi_bready);
  assign when_Axi4WriteOnlyMater_l131 = (aresetn && startSendSignal);
  assign axi4Interface_full_aw_fire = (m_axi_awvalid && m_axi_awready);
  assign m_axi_awvalid = axi4Interface_controlAwValidSignal;
  always @(*) begin
    _zz_axi4Interface_isInitialIterate = 1'b0;
    if(axi4Interface_full_b_fire_3) begin
      _zz_axi4Interface_isInitialIterate = 1'b1;
    end
  end

  always @(*) begin
    _zz_8 = 1'b0;
    if(when_Axi4WriteOnlyMater_l152) begin
      _zz_8 = 1'b1;
    end
  end

  always @(*) begin
    _zz_axi4Interface_isInitialIterate_1 = (_zz_axi4Interface_isInitialIterate_2 + _zz__zz_axi4Interface_isInitialIterate_1);
    if(_zz_8) begin
      _zz_axi4Interface_isInitialIterate_1 = 8'h0;
    end
  end

  assign axi4Interface_isInitialIterate = (_zz_axi4Interface_isInitialIterate_2 == 8'h0);
  assign axi4Interface_full_b_fire_2 = (m_axi_bvalid && m_axi_bready);
  assign axi4Interface_full_b_fire_3 = (m_axi_bvalid && m_axi_bready);
  assign axi4Interface_full_b_fire_4 = (m_axi_bvalid && m_axi_bready);
  assign when_Axi4WriteOnlyMater_l152 = ((_zz_axi4Interface_isInitialIterate_2 == pathNumb) && axi4Interface_full_b_fire_4);
  assign when_Axi4WriteOnlyMater_l159 = ((axi4Interface_isRefreshAddr && startSendSignal) && axi4Interface_isInitialIterate);
  assign when_Axi4WriteOnlyMater_l164 = ((axi4Interface_isRefreshAddr && startSendSignal) && (! axi4Interface_isInitialIterate));
  assign m_axi_awaddr = axi4Interface_finalAddressReg;
  assign m_axi_awregion = 4'b0000;
  assign m_axi_awburst = 2'b01;
  assign m_axi_awlen = (burstLengthReg - 8'h01);
  assign m_axi_awsize = 3'b010;
  assign m_axi_awcache = 4'b0000;
  assign m_axi_awqos = 4'b0000;
  assign m_axi_awprot = 3'b000;
  always @(*) begin
    m_axi_wvalid = 1'b0;
    if(when_Axi4WriteOnlyMater_l187) begin
      m_axi_wvalid = streamFifo_3_io_pop_m2sPipe_valid;
    end
  end

  always @(*) begin
    m_axi_wdata = streamFifo_3_io_pop_payload;
    if(when_Axi4WriteOnlyMater_l187) begin
      m_axi_wdata = streamFifo_3_io_pop_m2sPipe_payload;
    end
  end

  always @(*) begin
    streamFifo_3_io_pop_ready = 1'b0;
    if(when_Axi4WriteOnlyMater_l187) begin
      streamFifo_3_io_pop_ready = streamFifo_3_io_pop_m2sPipe_ready;
      if(when_Stream_l342) begin
        streamFifo_3_io_pop_ready = 1'b1;
      end
    end
  end

  assign when_Axi4WriteOnlyMater_l187 = ((_zz_m_axi_wlast_2 < _zz_when_Axi4WriteOnlyMater_l187) && startSendSignal);
  assign when_Stream_l342 = (! streamFifo_3_io_pop_m2sPipe_valid);
  assign streamFifo_3_io_pop_m2sPipe_valid = streamFifo_3_io_pop_rValid;
  assign streamFifo_3_io_pop_m2sPipe_payload = streamFifo_3_io_pop_rData;
  assign streamFifo_3_io_pop_m2sPipe_ready = m_axi_wready;
  assign axi4Interface_full_w_fire = (m_axi_wvalid && m_axi_wready);
  assign axi4Interface_full_b_fire_5 = (m_axi_bvalid && m_axi_bready);
  assign m_axi_wstrb = 4'b1111;
  assign m_axi_wlast = (_zz_m_axi_wlast_2 == _zz_m_axi_wlast_3);
  assign axi4Interface_full_b_fire_6 = (m_axi_bvalid && m_axi_bready);
  assign m_axi_bready = axi4Interface_controlBReady;
  assign axi4Interface_full_b_fire_7 = (m_axi_bvalid && m_axi_bready);
  assign transInterrupt = axi4Interface_isBurstComplete;
  always @(posedge aclk or negedge aresetn) begin
    if(!aresetn) begin
      _zz_m_axi_wlast_2 <= 9'h0;
      _zz_when_Axi4WriteOnlyMater_l105_2 <= 9'h0;
      burstLengthReg <= 8'hff;
      axi4Interface_newBurst <= 1'b1;
      axi4Interface_controlAwValidSignal <= 1'b0;
      _zz_axi4Interface_isInitialIterate_2 <= 8'h0;
      axi4Interface_isRefreshAddr <= 1'b1;
      offsetAddressReg <= 32'h0;
      axi4Interface_finalAddressReg <= 32'h0;
      axi4Interface_controlBReady <= 1'b0;
    end else begin
      _zz_m_axi_wlast_2 <= _zz_m_axi_wlast_1;
      _zz_when_Axi4WriteOnlyMater_l105_2 <= _zz_when_Axi4WriteOnlyMater_l105_1;
      burstLengthReg <= burstLen;
      if(axi4Interface_full_b_fire_1) begin
        axi4Interface_newBurst <= 1'b1;
      end
      if(when_Axi4WriteOnlyMater_l131) begin
        if(axi4Interface_full_aw_fire) begin
          axi4Interface_controlAwValidSignal <= 1'b0;
          axi4Interface_newBurst <= 1'b0;
        end else begin
          if(axi4Interface_newBurst) begin
            axi4Interface_controlAwValidSignal <= 1'b1;
          end
        end
      end
      _zz_axi4Interface_isInitialIterate_2 <= _zz_axi4Interface_isInitialIterate_1;
      if(axi4Interface_full_b_fire_2) begin
        axi4Interface_isRefreshAddr <= 1'b1;
      end
      if(when_Axi4WriteOnlyMater_l159) begin
        offsetAddressReg <= offset;
        axi4Interface_finalAddressReg <= startAddr;
        axi4Interface_isRefreshAddr <= 1'b0;
      end
      if(when_Axi4WriteOnlyMater_l164) begin
        axi4Interface_finalAddressReg <= (axi4Interface_finalAddressReg + offsetAddressReg);
        axi4Interface_isRefreshAddr <= 1'b0;
      end
      if(m_axi_wvalid) begin
        axi4Interface_controlBReady <= 1'b1;
      end
      if(axi4Interface_full_b_fire_6) begin
        axi4Interface_controlBReady <= 1'b0;
      end
    end
  end

  always @(posedge aclk) begin
    m_axi_wlast_regNext <= m_axi_wlast;
    axi4Interface_isBurstComplete <= axi4Interface_full_b_fire_7;
    if(axi4Interface_isBurstComplete) begin
      axi4Interface_isBurstComplete <= 1'b0;
    end
  end

  always @(posedge start or posedge _zz_4) begin
    if(_zz_4) begin
      startSendSignal <= 1'b0;
    end else begin
      startSendSignal <= 1'b1;
    end
  end

  always @(posedge aclk or negedge aresetn) begin
    if(!aresetn) begin
      streamFifo_3_io_pop_rValid <= 1'b0;
    end else begin
      if(streamFifo_3_io_pop_ready) begin
        streamFifo_3_io_pop_rValid <= streamFifo_3_io_pop_valid;
      end
    end
  end

  always @(posedge aclk) begin
    if(streamFifo_3_io_pop_ready) begin
      streamFifo_3_io_pop_rData <= streamFifo_3_io_pop_payload;
    end
  end


endmodule

module PingPongBuffer (
  input               s_axis_valid,
  output reg          s_axis_ready,
  input      [31:0]   s_axis_payload,
  input               startIn,
  input      [7:0]    bufferDepthIn,
  output              interruptOut,
  output reg          m_axis_valid,
  input               m_axis_ready,
  output reg [31:0]   m_axis_payload,
  output              startOut,
  output     [7:0]    bufferDepthOut,
  input               interruptIn,
  input               aresetn,
  input               aclk
);
  localparam pingPongBufferStateMachine_enumDef_BOOT = 2'd0;
  localparam pingPongBufferStateMachine_enumDef_EMPTY = 2'd1;
  localparam pingPongBufferStateMachine_enumDef_HALF = 2'd2;
  localparam pingPongBufferStateMachine_enumDef_FULL = 2'd3;

  reg                 bufferFifoA_io_push_valid;
  reg        [31:0]   bufferFifoA_io_push_payload;
  reg                 bufferFifoA_io_pop_ready;
  reg                 bufferFifoB_io_push_valid;
  reg        [31:0]   bufferFifoB_io_push_payload;
  reg                 bufferFifoB_io_pop_ready;
  wire                bufferFifoA_io_push_ready;
  wire                bufferFifoA_io_pop_valid;
  wire       [31:0]   bufferFifoA_io_pop_payload;
  wire       [8:0]    bufferFifoA_io_occupancy;
  wire       [8:0]    bufferFifoA_io_availability;
  wire                bufferFifoB_io_push_ready;
  wire                bufferFifoB_io_pop_valid;
  wire       [31:0]   bufferFifoB_io_pop_payload;
  wire       [8:0]    bufferFifoB_io_occupancy;
  wire       [8:0]    bufferFifoB_io_availability;
  wire       [7:0]    _zz_inCounter_valueNext;
  wire       [0:0]    _zz_inCounter_valueNext_1;
  wire       [7:0]    _zz_outCounter_valueNext;
  wire       [0:0]    _zz_outCounter_valueNext_1;
  wire       [7:0]    _zz_inCounterWillOverflow;
  wire       [7:0]    _zz_inCounterWillOverflow_1;
  wire       [0:0]    _zz_inCounterWillOverflow_2;
  wire       [7:0]    _zz_outCounterWillOverflow;
  wire       [7:0]    _zz_outCounterWillOverflow_1;
  wire       [0:0]    _zz_outCounterWillOverflow_2;
  reg        [7:0]    bufferDepthReg;
  reg                 inCounter_willIncrement;
  reg                 inCounter_willClear;
  reg        [7:0]    inCounter_valueNext;
  reg        [7:0]    inCounter_value;
  wire                inCounter_willOverflowIfInc;
  wire                inCounter_willOverflow;
  reg                 outCounter_willIncrement;
  reg                 outCounter_willClear;
  reg        [7:0]    outCounter_valueNext;
  reg        [7:0]    outCounter_value;
  wire                outCounter_willOverflowIfInc;
  wire                outCounter_willOverflow;
  reg                 isWriteBufferA;
  reg                 isReadBufferA;
  wire                streamIn_fire;
  wire                inCounterWillOverflow;
  wire                streamOut_fire;
  wire                outCounterWillOverflow;
  wire                streamIn_fire_1;
  wire                streamOut_fire_1;
  reg                 startReceiveResetSignal;
  wire                _zz_1;
  (* async_reg = "true" *) reg                 startReceiveSignal;
  reg                 startReceiveSignal_regNext;
  wire                realStartSignal;
  wire                _zz_2;
  (* async_reg = "true" *) reg                 lastBurstCompleteSignal;
  reg                 isAfterResetState;
  wire                pipedBufferAPop_valid;
  reg                 pipedBufferAPop_ready;
  wire       [31:0]   pipedBufferAPop_payload;
  reg                 bufferFifoA_io_pop_rValid;
  reg        [31:0]   bufferFifoA_io_pop_rData;
  wire                when_Stream_l342;
  wire                pipedBufferBPop_valid;
  reg                 pipedBufferBPop_ready;
  wire       [31:0]   pipedBufferBPop_payload;
  reg                 bufferFifoB_io_pop_rValid;
  reg        [31:0]   bufferFifoB_io_pop_rData;
  wire                when_Stream_l342_1;
  wire                pingPongBufferStateMachine_wantExit;
  reg                 pingPongBufferStateMachine_wantStart;
  wire                pingPongBufferStateMachine_wantKill;
  reg                 outputInterruptSignalState;
  wire       [1:0]    currentState;
  wire                canReadData;
  reg                 readyForNextTransfer;
  reg                 outputStartSignalReg;
  wire                when_PingPongBuffer_l226;
  wire                when_PingPongBuffer_l231;
  reg        [1:0]    pingPongBufferStateMachine_stateReg;
  reg        [1:0]    pingPongBufferStateMachine_stateNext;
  wire                _zz_when_StateMachine_l222;
  wire                _zz_when_StateMachine_l222_1;
  wire                when_PingPongBuffer_l146;
  wire                when_PingPongBuffer_l153;
  wire                when_PingPongBuffer_l166;
  wire                when_PingPongBuffer_l175;
  wire                when_PingPongBuffer_l178;
  wire                when_PingPongBuffer_l179;
  wire                when_PingPongBuffer_l190;
  wire                when_StateMachine_l222;
  wire                when_StateMachine_l222_1;
  wire                when_StateMachine_l238;
  `ifndef SYNTHESIS
  reg [39:0] pingPongBufferStateMachine_stateReg_string;
  reg [39:0] pingPongBufferStateMachine_stateNext_string;
  `endif


  assign _zz_inCounter_valueNext_1 = inCounter_willIncrement;
  assign _zz_inCounter_valueNext = {7'd0, _zz_inCounter_valueNext_1};
  assign _zz_outCounter_valueNext_1 = outCounter_willIncrement;
  assign _zz_outCounter_valueNext = {7'd0, _zz_outCounter_valueNext_1};
  assign _zz_inCounterWillOverflow = (bufferDepthReg - _zz_inCounterWillOverflow_1);
  assign _zz_inCounterWillOverflow_2 = 1'b1;
  assign _zz_inCounterWillOverflow_1 = {7'd0, _zz_inCounterWillOverflow_2};
  assign _zz_outCounterWillOverflow = (bufferDepthReg - _zz_outCounterWillOverflow_1);
  assign _zz_outCounterWillOverflow_2 = 1'b1;
  assign _zz_outCounterWillOverflow_1 = {7'd0, _zz_outCounterWillOverflow_2};
  StreamFifo bufferFifoA (
    .io_push_valid      (bufferFifoA_io_push_valid          ), //i
    .io_push_ready      (bufferFifoA_io_push_ready          ), //o
    .io_push_payload    (bufferFifoA_io_push_payload[31:0]  ), //i
    .io_pop_valid       (bufferFifoA_io_pop_valid           ), //o
    .io_pop_ready       (bufferFifoA_io_pop_ready           ), //i
    .io_pop_payload     (bufferFifoA_io_pop_payload[31:0]   ), //o
    .io_flush           (1'b0                               ), //i
    .io_occupancy       (bufferFifoA_io_occupancy[8:0]      ), //o
    .io_availability    (bufferFifoA_io_availability[8:0]   ), //o
    .aclk               (aclk                               ), //i
    .aresetn            (aresetn                            )  //i
  );
  StreamFifo bufferFifoB (
    .io_push_valid      (bufferFifoB_io_push_valid          ), //i
    .io_push_ready      (bufferFifoB_io_push_ready          ), //o
    .io_push_payload    (bufferFifoB_io_push_payload[31:0]  ), //i
    .io_pop_valid       (bufferFifoB_io_pop_valid           ), //o
    .io_pop_ready       (bufferFifoB_io_pop_ready           ), //i
    .io_pop_payload     (bufferFifoB_io_pop_payload[31:0]   ), //o
    .io_flush           (1'b0                               ), //i
    .io_occupancy       (bufferFifoB_io_occupancy[8:0]      ), //o
    .io_availability    (bufferFifoB_io_availability[8:0]   ), //o
    .aclk               (aclk                               ), //i
    .aresetn            (aresetn                            )  //i
  );
  `ifndef SYNTHESIS
  always @(*) begin
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_BOOT : pingPongBufferStateMachine_stateReg_string = "BOOT ";
      pingPongBufferStateMachine_enumDef_EMPTY : pingPongBufferStateMachine_stateReg_string = "EMPTY";
      pingPongBufferStateMachine_enumDef_HALF : pingPongBufferStateMachine_stateReg_string = "HALF ";
      pingPongBufferStateMachine_enumDef_FULL : pingPongBufferStateMachine_stateReg_string = "FULL ";
      default : pingPongBufferStateMachine_stateReg_string = "?????";
    endcase
  end
  always @(*) begin
    case(pingPongBufferStateMachine_stateNext)
      pingPongBufferStateMachine_enumDef_BOOT : pingPongBufferStateMachine_stateNext_string = "BOOT ";
      pingPongBufferStateMachine_enumDef_EMPTY : pingPongBufferStateMachine_stateNext_string = "EMPTY";
      pingPongBufferStateMachine_enumDef_HALF : pingPongBufferStateMachine_stateNext_string = "HALF ";
      pingPongBufferStateMachine_enumDef_FULL : pingPongBufferStateMachine_stateNext_string = "FULL ";
      default : pingPongBufferStateMachine_stateNext_string = "?????";
    endcase
  end
  `endif

  always @(*) begin
    inCounter_willIncrement = 1'b0;
    if(streamIn_fire_1) begin
      inCounter_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    inCounter_willClear = 1'b0;
    if(inCounterWillOverflow) begin
      inCounter_willClear = 1'b1;
    end
  end

  assign inCounter_willOverflowIfInc = (inCounter_value == 8'hff);
  assign inCounter_willOverflow = (inCounter_willOverflowIfInc && inCounter_willIncrement);
  always @(*) begin
    inCounter_valueNext = (inCounter_value + _zz_inCounter_valueNext);
    if(inCounter_willClear) begin
      inCounter_valueNext = 8'h0;
    end
  end

  always @(*) begin
    outCounter_willIncrement = 1'b0;
    if(streamOut_fire_1) begin
      outCounter_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    outCounter_willClear = 1'b0;
    if(outCounterWillOverflow) begin
      outCounter_willClear = 1'b1;
    end
  end

  assign outCounter_willOverflowIfInc = (outCounter_value == 8'hff);
  assign outCounter_willOverflow = (outCounter_willOverflowIfInc && outCounter_willIncrement);
  always @(*) begin
    outCounter_valueNext = (outCounter_value + _zz_outCounter_valueNext);
    if(outCounter_willClear) begin
      outCounter_valueNext = 8'h0;
    end
  end

  assign streamIn_fire = (s_axis_valid && s_axis_ready);
  assign inCounterWillOverflow = ((inCounter_value == _zz_inCounterWillOverflow) && streamIn_fire);
  assign streamOut_fire = (m_axis_valid && m_axis_ready);
  assign outCounterWillOverflow = ((outCounter_value == _zz_outCounterWillOverflow) && streamOut_fire);
  assign streamIn_fire_1 = (s_axis_valid && s_axis_ready);
  assign streamOut_fire_1 = (m_axis_valid && m_axis_ready);
  always @(*) begin
    startReceiveResetSignal = 1'b0;
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_EMPTY : begin
      end
      pingPongBufferStateMachine_enumDef_HALF : begin
        if(when_PingPongBuffer_l166) begin
          startReceiveResetSignal = 1'b1;
        end
      end
      pingPongBufferStateMachine_enumDef_FULL : begin
      end
      default : begin
      end
    endcase
    if(when_StateMachine_l222) begin
      startReceiveResetSignal = 1'b1;
    end
    if(when_StateMachine_l222_1) begin
      startReceiveResetSignal = 1'b1;
    end
  end

  assign _zz_1 = ((! aresetn) || startReceiveResetSignal);
  assign realStartSignal = (startReceiveSignal || ((! startReceiveSignal) && startReceiveSignal_regNext));
  assign _zz_2 = ((! aresetn) || startOut);
  always @(*) begin
    bufferFifoA_io_pop_ready = pipedBufferAPop_ready;
    if(when_Stream_l342) begin
      bufferFifoA_io_pop_ready = 1'b1;
    end
  end

  assign when_Stream_l342 = (! pipedBufferAPop_valid);
  assign pipedBufferAPop_valid = bufferFifoA_io_pop_rValid;
  assign pipedBufferAPop_payload = bufferFifoA_io_pop_rData;
  always @(*) begin
    bufferFifoB_io_pop_ready = pipedBufferBPop_ready;
    if(when_Stream_l342_1) begin
      bufferFifoB_io_pop_ready = 1'b1;
    end
  end

  assign when_Stream_l342_1 = (! pipedBufferBPop_valid);
  assign pipedBufferBPop_valid = bufferFifoB_io_pop_rValid;
  assign pipedBufferBPop_payload = bufferFifoB_io_pop_rData;
  always @(*) begin
    bufferFifoA_io_push_valid = 1'b0;
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_EMPTY : begin
        if(when_PingPongBuffer_l146) begin
          bufferFifoA_io_push_valid = s_axis_valid;
        end
      end
      pingPongBufferStateMachine_enumDef_HALF : begin
        if(when_PingPongBuffer_l178) begin
          bufferFifoA_io_push_valid = s_axis_valid;
        end
      end
      pingPongBufferStateMachine_enumDef_FULL : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    bufferFifoA_io_push_payload = s_axis_payload;
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_EMPTY : begin
        if(when_PingPongBuffer_l146) begin
          bufferFifoA_io_push_payload = s_axis_payload;
        end
      end
      pingPongBufferStateMachine_enumDef_HALF : begin
        if(when_PingPongBuffer_l178) begin
          bufferFifoA_io_push_payload = s_axis_payload;
        end
      end
      pingPongBufferStateMachine_enumDef_FULL : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    bufferFifoB_io_push_valid = 1'b0;
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_EMPTY : begin
        if(when_PingPongBuffer_l153) begin
          bufferFifoB_io_push_valid = s_axis_valid;
        end
      end
      pingPongBufferStateMachine_enumDef_HALF : begin
        if(when_PingPongBuffer_l179) begin
          bufferFifoB_io_push_valid = s_axis_valid;
        end
      end
      pingPongBufferStateMachine_enumDef_FULL : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    bufferFifoB_io_push_payload = s_axis_payload;
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_EMPTY : begin
        if(when_PingPongBuffer_l153) begin
          bufferFifoB_io_push_payload = s_axis_payload;
        end
      end
      pingPongBufferStateMachine_enumDef_HALF : begin
        if(when_PingPongBuffer_l179) begin
          bufferFifoB_io_push_payload = s_axis_payload;
        end
      end
      pingPongBufferStateMachine_enumDef_FULL : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    pipedBufferAPop_ready = 1'b0;
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_EMPTY : begin
      end
      pingPongBufferStateMachine_enumDef_HALF : begin
        if(isReadBufferA) begin
          pipedBufferAPop_ready = m_axis_ready;
        end
      end
      pingPongBufferStateMachine_enumDef_FULL : begin
        if(isReadBufferA) begin
          pipedBufferAPop_ready = m_axis_ready;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    pipedBufferBPop_ready = 1'b0;
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_EMPTY : begin
      end
      pingPongBufferStateMachine_enumDef_HALF : begin
        if(when_PingPongBuffer_l175) begin
          pipedBufferBPop_ready = m_axis_ready;
        end
      end
      pingPongBufferStateMachine_enumDef_FULL : begin
        if(when_PingPongBuffer_l190) begin
          pipedBufferBPop_ready = m_axis_ready;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    m_axis_valid = 1'b0;
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_EMPTY : begin
      end
      pingPongBufferStateMachine_enumDef_HALF : begin
        if(isReadBufferA) begin
          m_axis_valid = pipedBufferAPop_valid;
        end
        if(when_PingPongBuffer_l175) begin
          m_axis_valid = pipedBufferBPop_valid;
        end
      end
      pingPongBufferStateMachine_enumDef_FULL : begin
        if(isReadBufferA) begin
          m_axis_valid = pipedBufferAPop_valid;
        end
        if(when_PingPongBuffer_l190) begin
          m_axis_valid = pipedBufferBPop_valid;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    m_axis_payload = pipedBufferAPop_payload;
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_EMPTY : begin
      end
      pingPongBufferStateMachine_enumDef_HALF : begin
        if(isReadBufferA) begin
          m_axis_payload = pipedBufferAPop_payload;
        end
        if(when_PingPongBuffer_l175) begin
          m_axis_payload = pipedBufferBPop_payload;
        end
      end
      pingPongBufferStateMachine_enumDef_FULL : begin
        if(isReadBufferA) begin
          m_axis_payload = pipedBufferAPop_payload;
        end
        if(when_PingPongBuffer_l190) begin
          m_axis_payload = pipedBufferBPop_payload;
        end
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    s_axis_ready = 1'b0;
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_EMPTY : begin
        if(when_PingPongBuffer_l146) begin
          s_axis_ready = bufferFifoA_io_push_ready;
        end
        if(when_PingPongBuffer_l153) begin
          s_axis_ready = bufferFifoB_io_push_ready;
        end
      end
      pingPongBufferStateMachine_enumDef_HALF : begin
        if(when_PingPongBuffer_l178) begin
          s_axis_ready = bufferFifoA_io_push_ready;
        end
        if(when_PingPongBuffer_l179) begin
          s_axis_ready = bufferFifoB_io_push_ready;
        end
      end
      pingPongBufferStateMachine_enumDef_FULL : begin
      end
      default : begin
      end
    endcase
  end

  assign pingPongBufferStateMachine_wantExit = 1'b0;
  always @(*) begin
    pingPongBufferStateMachine_wantStart = 1'b0;
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_EMPTY : begin
      end
      pingPongBufferStateMachine_enumDef_HALF : begin
      end
      pingPongBufferStateMachine_enumDef_FULL : begin
      end
      default : begin
        pingPongBufferStateMachine_wantStart = 1'b1;
      end
    endcase
  end

  assign pingPongBufferStateMachine_wantKill = 1'b0;
  assign interruptOut = outputInterruptSignalState;
  assign bufferDepthOut = bufferDepthReg;
  assign canReadData = ((currentState == 2'b10) || (currentState == 2'b11));
  assign when_PingPongBuffer_l226 = ((readyForNextTransfer && canReadData) && isReadBufferA);
  assign when_PingPongBuffer_l231 = ((readyForNextTransfer && canReadData) && (! isReadBufferA));
  assign startOut = outputStartSignalReg;
  assign _zz_when_StateMachine_l222 = (pingPongBufferStateMachine_stateReg == pingPongBufferStateMachine_enumDef_EMPTY);
  assign _zz_when_StateMachine_l222_1 = (pingPongBufferStateMachine_stateNext == pingPongBufferStateMachine_enumDef_EMPTY);
  always @(*) begin
    pingPongBufferStateMachine_stateNext = pingPongBufferStateMachine_stateReg;
    case(pingPongBufferStateMachine_stateReg)
      pingPongBufferStateMachine_enumDef_EMPTY : begin
        if(when_PingPongBuffer_l146) begin
          if(inCounterWillOverflow) begin
            pingPongBufferStateMachine_stateNext = pingPongBufferStateMachine_enumDef_HALF;
          end
        end
        if(when_PingPongBuffer_l153) begin
          if(inCounterWillOverflow) begin
            pingPongBufferStateMachine_stateNext = pingPongBufferStateMachine_enumDef_HALF;
          end
        end
      end
      pingPongBufferStateMachine_enumDef_HALF : begin
        if(when_PingPongBuffer_l166) begin
          pingPongBufferStateMachine_stateNext = pingPongBufferStateMachine_enumDef_HALF;
        end else begin
          if(inCounterWillOverflow) begin
            pingPongBufferStateMachine_stateNext = pingPongBufferStateMachine_enumDef_FULL;
          end else begin
            if(outCounterWillOverflow) begin
              pingPongBufferStateMachine_stateNext = pingPongBufferStateMachine_enumDef_EMPTY;
            end
          end
        end
      end
      pingPongBufferStateMachine_enumDef_FULL : begin
        if(isReadBufferA) begin
          if(outCounterWillOverflow) begin
            pingPongBufferStateMachine_stateNext = pingPongBufferStateMachine_enumDef_HALF;
          end
        end
        if(when_PingPongBuffer_l190) begin
          if(outCounterWillOverflow) begin
            pingPongBufferStateMachine_stateNext = pingPongBufferStateMachine_enumDef_HALF;
          end
        end
      end
      default : begin
      end
    endcase
    if(pingPongBufferStateMachine_wantStart) begin
      pingPongBufferStateMachine_stateNext = pingPongBufferStateMachine_enumDef_EMPTY;
    end
    if(pingPongBufferStateMachine_wantKill) begin
      pingPongBufferStateMachine_stateNext = pingPongBufferStateMachine_enumDef_BOOT;
    end
  end

  assign when_PingPongBuffer_l146 = (realStartSignal && isWriteBufferA);
  assign when_PingPongBuffer_l153 = (realStartSignal && (! isWriteBufferA));
  assign when_PingPongBuffer_l166 = (inCounterWillOverflow && outCounterWillOverflow);
  assign when_PingPongBuffer_l175 = (! isReadBufferA);
  assign when_PingPongBuffer_l178 = (realStartSignal && isWriteBufferA);
  assign when_PingPongBuffer_l179 = (realStartSignal && (! isWriteBufferA));
  assign when_PingPongBuffer_l190 = (! isWriteBufferA);
  assign when_StateMachine_l222 = (_zz_when_StateMachine_l222 && (! _zz_when_StateMachine_l222_1));
  assign when_StateMachine_l222_1 = ((pingPongBufferStateMachine_stateReg == pingPongBufferStateMachine_enumDef_FULL) && (! (pingPongBufferStateMachine_stateNext == pingPongBufferStateMachine_enumDef_FULL)));
  assign when_StateMachine_l238 = ((! _zz_when_StateMachine_l222) && _zz_when_StateMachine_l222_1);
  assign currentState = pingPongBufferStateMachine_stateReg;
  always @(posedge aclk or negedge aresetn) begin
    if(!aresetn) begin
      bufferDepthReg <= 8'hff;
      inCounter_value <= 8'h0;
      outCounter_value <= 8'h0;
      isWriteBufferA <= 1'b1;
      isReadBufferA <= 1'b1;
      isAfterResetState <= 1'b1;
      bufferFifoA_io_pop_rValid <= 1'b0;
      bufferFifoB_io_pop_rValid <= 1'b0;
      outputInterruptSignalState <= 1'b0;
      readyForNextTransfer <= 1'b0;
      outputStartSignalReg <= 1'b0;
      pingPongBufferStateMachine_stateReg <= pingPongBufferStateMachine_enumDef_BOOT;
    end else begin
      bufferDepthReg <= bufferDepthIn;
      inCounter_value <= inCounter_valueNext;
      outCounter_value <= outCounter_valueNext;
      if(inCounterWillOverflow) begin
        isWriteBufferA <= (! isWriteBufferA);
      end
      if(outCounterWillOverflow) begin
        isReadBufferA <= (! isReadBufferA);
      end
      if(aresetn) begin
        isAfterResetState <= 1'b0;
      end
      if(bufferFifoA_io_pop_ready) begin
        bufferFifoA_io_pop_rValid <= bufferFifoA_io_pop_valid;
      end
      if(bufferFifoB_io_pop_ready) begin
        bufferFifoB_io_pop_rValid <= bufferFifoB_io_pop_valid;
      end
      if(isAfterResetState) begin
        readyForNextTransfer <= 1'b1;
      end
      if(lastBurstCompleteSignal) begin
        readyForNextTransfer <= 1'b1;
      end
      if(when_PingPongBuffer_l226) begin
        outputStartSignalReg <= readyForNextTransfer;
        readyForNextTransfer <= 1'b0;
      end
      if(when_PingPongBuffer_l231) begin
        outputStartSignalReg <= readyForNextTransfer;
        readyForNextTransfer <= 1'b0;
      end
      if(outputStartSignalReg) begin
        outputStartSignalReg <= 1'b0;
      end
      pingPongBufferStateMachine_stateReg <= pingPongBufferStateMachine_stateNext;
      case(pingPongBufferStateMachine_stateReg)
        pingPongBufferStateMachine_enumDef_EMPTY : begin
          outputInterruptSignalState <= 1'b0;
          if(when_PingPongBuffer_l146) begin
            if(inCounterWillOverflow) begin
              outputInterruptSignalState <= 1'b1;
            end
          end
          if(when_PingPongBuffer_l153) begin
            if(inCounterWillOverflow) begin
              outputInterruptSignalState <= 1'b1;
            end
          end
        end
        pingPongBufferStateMachine_enumDef_HALF : begin
          outputInterruptSignalState <= 1'b0;
          if(when_PingPongBuffer_l166) begin
            outputInterruptSignalState <= 1'b1;
          end
        end
        pingPongBufferStateMachine_enumDef_FULL : begin
          if(isReadBufferA) begin
            if(outCounterWillOverflow) begin
              outputInterruptSignalState <= 1'b1;
            end
          end
          if(when_PingPongBuffer_l190) begin
            if(outCounterWillOverflow) begin
              outputInterruptSignalState <= 1'b1;
            end
          end
        end
        default : begin
        end
      endcase
      if(when_StateMachine_l238) begin
        if(isAfterResetState) begin
          outputInterruptSignalState <= 1'b1;
        end
      end
    end
  end

  always @(posedge startIn or posedge _zz_1) begin
    if(_zz_1) begin
      startReceiveSignal <= 1'b0;
    end else begin
      startReceiveSignal <= 1'b1;
    end
  end

  always @(posedge aclk) begin
    startReceiveSignal_regNext <= startReceiveSignal;
    if(bufferFifoA_io_pop_ready) begin
      bufferFifoA_io_pop_rData <= bufferFifoA_io_pop_payload;
    end
    if(bufferFifoB_io_pop_ready) begin
      bufferFifoB_io_pop_rData <= bufferFifoB_io_pop_payload;
    end
  end

  always @(posedge interruptIn or posedge _zz_2) begin
    if(_zz_2) begin
      lastBurstCompleteSignal <= 1'b0;
    end else begin
      lastBurstCompleteSignal <= 1'b1;
    end
  end


endmodule

//StreamFifo replaced by StreamFifo

//StreamFifo replaced by StreamFifo

module StreamFifo (
  input               io_push_valid,
  output              io_push_ready,
  input      [31:0]   io_push_payload,
  output              io_pop_valid,
  input               io_pop_ready,
  output     [31:0]   io_pop_payload,
  input               io_flush,
  output     [8:0]    io_occupancy,
  output     [8:0]    io_availability,
  input               aclk,
  input               aresetn
);

  reg        [31:0]   _zz_logic_ram_port0;
  wire       [7:0]    _zz_logic_pushPtr_valueNext;
  wire       [0:0]    _zz_logic_pushPtr_valueNext_1;
  wire       [7:0]    _zz_logic_popPtr_valueNext;
  wire       [0:0]    _zz_logic_popPtr_valueNext_1;
  wire                _zz_logic_ram_port;
  wire                _zz_io_pop_payload;
  wire       [7:0]    _zz_io_availability;
  reg                 _zz_1;
  reg                 logic_pushPtr_willIncrement;
  reg                 logic_pushPtr_willClear;
  reg        [7:0]    logic_pushPtr_valueNext;
  reg        [7:0]    logic_pushPtr_value;
  wire                logic_pushPtr_willOverflowIfInc;
  wire                logic_pushPtr_willOverflow;
  reg                 logic_popPtr_willIncrement;
  reg                 logic_popPtr_willClear;
  reg        [7:0]    logic_popPtr_valueNext;
  reg        [7:0]    logic_popPtr_value;
  wire                logic_popPtr_willOverflowIfInc;
  wire                logic_popPtr_willOverflow;
  wire                logic_ptrMatch;
  reg                 logic_risingOccupancy;
  wire                logic_pushing;
  wire                logic_popping;
  wire                logic_empty;
  wire                logic_full;
  reg                 _zz_io_pop_valid;
  wire                when_Stream_l954;
  wire       [7:0]    logic_ptrDif;
  reg [31:0] logic_ram [0:255];

  assign _zz_logic_pushPtr_valueNext_1 = logic_pushPtr_willIncrement;
  assign _zz_logic_pushPtr_valueNext = {7'd0, _zz_logic_pushPtr_valueNext_1};
  assign _zz_logic_popPtr_valueNext_1 = logic_popPtr_willIncrement;
  assign _zz_logic_popPtr_valueNext = {7'd0, _zz_logic_popPtr_valueNext_1};
  assign _zz_io_availability = (logic_popPtr_value - logic_pushPtr_value);
  assign _zz_io_pop_payload = 1'b1;
  always @(posedge aclk) begin
    if(_zz_io_pop_payload) begin
      _zz_logic_ram_port0 <= logic_ram[logic_popPtr_valueNext];
    end
  end

  always @(posedge aclk) begin
    if(_zz_1) begin
      logic_ram[logic_pushPtr_value] <= io_push_payload;
    end
  end

  always @(*) begin
    _zz_1 = 1'b0;
    if(logic_pushing) begin
      _zz_1 = 1'b1;
    end
  end

  always @(*) begin
    logic_pushPtr_willIncrement = 1'b0;
    if(logic_pushing) begin
      logic_pushPtr_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    logic_pushPtr_willClear = 1'b0;
    if(io_flush) begin
      logic_pushPtr_willClear = 1'b1;
    end
  end

  assign logic_pushPtr_willOverflowIfInc = (logic_pushPtr_value == 8'hff);
  assign logic_pushPtr_willOverflow = (logic_pushPtr_willOverflowIfInc && logic_pushPtr_willIncrement);
  always @(*) begin
    logic_pushPtr_valueNext = (logic_pushPtr_value + _zz_logic_pushPtr_valueNext);
    if(logic_pushPtr_willClear) begin
      logic_pushPtr_valueNext = 8'h0;
    end
  end

  always @(*) begin
    logic_popPtr_willIncrement = 1'b0;
    if(logic_popping) begin
      logic_popPtr_willIncrement = 1'b1;
    end
  end

  always @(*) begin
    logic_popPtr_willClear = 1'b0;
    if(io_flush) begin
      logic_popPtr_willClear = 1'b1;
    end
  end

  assign logic_popPtr_willOverflowIfInc = (logic_popPtr_value == 8'hff);
  assign logic_popPtr_willOverflow = (logic_popPtr_willOverflowIfInc && logic_popPtr_willIncrement);
  always @(*) begin
    logic_popPtr_valueNext = (logic_popPtr_value + _zz_logic_popPtr_valueNext);
    if(logic_popPtr_willClear) begin
      logic_popPtr_valueNext = 8'h0;
    end
  end

  assign logic_ptrMatch = (logic_pushPtr_value == logic_popPtr_value);
  assign logic_pushing = (io_push_valid && io_push_ready);
  assign logic_popping = (io_pop_valid && io_pop_ready);
  assign logic_empty = (logic_ptrMatch && (! logic_risingOccupancy));
  assign logic_full = (logic_ptrMatch && logic_risingOccupancy);
  assign io_push_ready = (! logic_full);
  assign io_pop_valid = ((! logic_empty) && (! (_zz_io_pop_valid && (! logic_full))));
  assign io_pop_payload = _zz_logic_ram_port0;
  assign when_Stream_l954 = (logic_pushing != logic_popping);
  assign logic_ptrDif = (logic_pushPtr_value - logic_popPtr_value);
  assign io_occupancy = {(logic_risingOccupancy && logic_ptrMatch),logic_ptrDif};
  assign io_availability = {((! logic_risingOccupancy) && logic_ptrMatch),_zz_io_availability};
  always @(posedge aclk or negedge aresetn) begin
    if(!aresetn) begin
      logic_pushPtr_value <= 8'h0;
      logic_popPtr_value <= 8'h0;
      logic_risingOccupancy <= 1'b0;
      _zz_io_pop_valid <= 1'b0;
    end else begin
      logic_pushPtr_value <= logic_pushPtr_valueNext;
      logic_popPtr_value <= logic_popPtr_valueNext;
      _zz_io_pop_valid <= (logic_popPtr_valueNext == logic_pushPtr_value);
      if(when_Stream_l954) begin
        logic_risingOccupancy <= logic_pushing;
      end
      if(io_flush) begin
        logic_risingOccupancy <= 1'b0;
      end
    end
  end


endmodule
