// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VStream2Axi4WriteMasterInterfaceAddFifo.h for the primary calling header

#ifndef _VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterface_H_
#define _VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterface_H_

#include "verilated.h"
#include "VStream2Axi4WriteMasterInterfaceAddFifo__Dpi.h"

class VStream2Axi4WriteMasterInterfaceAddFifo__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterface) {
  public:
    
    // PORTS
    VL_IN8(__PVT__aresetn,0,0);
    VL_IN8(__PVT__aclk,0,0);
    VL_IN8(__PVT__s_axis_valid,0,0);
    VL_OUT8(__PVT__s_axis_ready,0,0);
    VL_OUT8(__PVT__m_axi_awvalid,0,0);
    VL_IN8(__PVT__m_axi_awready,0,0);
    VL_OUT8(__PVT__m_axi_awregion,3,0);
    VL_OUT8(__PVT__m_axi_awlen,7,0);
    VL_OUT8(__PVT__m_axi_awsize,2,0);
    VL_OUT8(__PVT__m_axi_awburst,1,0);
    VL_OUT8(__PVT__m_axi_awcache,3,0);
    VL_OUT8(__PVT__m_axi_awqos,3,0);
    VL_OUT8(__PVT__m_axi_awprot,2,0);
    VL_OUT8(__PVT__m_axi_wvalid,0,0);
    VL_IN8(__PVT__m_axi_wready,0,0);
    VL_OUT8(__PVT__m_axi_wstrb,3,0);
    VL_OUT8(__PVT__m_axi_wlast,0,0);
    VL_IN8(__PVT__m_axi_bvalid,0,0);
    VL_OUT8(__PVT__m_axi_bready,0,0);
    VL_IN8(__PVT__m_axi_bresp,1,0);
    VL_OUT8(__PVT__m_axi_arvalid,0,0);
    VL_IN8(__PVT__m_axi_arready,0,0);
    VL_OUT8(__PVT__m_axi_arregion,3,0);
    VL_OUT8(__PVT__m_axi_arlen,7,0);
    VL_OUT8(__PVT__m_axi_arsize,2,0);
    VL_OUT8(__PVT__m_axi_arburst,1,0);
    VL_OUT8(__PVT__m_axi_arcache,3,0);
    VL_OUT8(__PVT__m_axi_arqos,3,0);
    VL_OUT8(__PVT__m_axi_arprot,2,0);
    VL_IN8(__PVT__m_axi_rvalid,0,0);
    VL_OUT8(__PVT__m_axi_rready,0,0);
    VL_IN8(__PVT__m_axi_rresp,1,0);
    VL_IN8(__PVT__m_axi_rlast,0,0);
    VL_IN(__PVT__s_axis_payload,31,0);
    VL_OUT(__PVT__m_axi_awaddr,31,0);
    VL_OUT(__PVT__m_axi_wdata,31,0);
    VL_OUT(__PVT__m_axi_araddr,31,0);
    VL_IN(__PVT__m_axi_rdata,31,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT___zz_m_axi_wdata,0,0);
    VL_SIG8(__PVT___zz_1,0,0);
    VL_SIG8(__PVT___zz_when_Axi4WriteMaster_l94,0,0);
    VL_SIG8(__PVT___zz_when_Axi4WriteMaster_l57,0,0);
    VL_SIG8(__PVT___zz_3,0,0);
    VL_SIG8(__PVT__axi4Interface_stream_fire,0,0);
    VL_SIG8(__PVT__axi4Interface_controlAwValid,0,0);
    VL_SIG8(__PVT__axi4Interface_isTransferAfterReset,0,0);
    VL_SIG8(__PVT__axi4Interface_t_aw_fire,0,0);
    VL_SIG8(__PVT__when_Axi4WriteMaster_l94,0,0);
    VL_SIG8(__PVT__axi4Interface_controlBReady,0,0);
    VL_SIG8(__PVT__m_axi_wvalid_regNext,0,0);
    VL_SIG8(__PVT__axi4Interface_t_b_fire,0,0);
    VL_SIG16(__PVT___zz_m_axi_wdata_1,8,0);
    VL_SIG16(__PVT___zz_m_axi_wdata_2,8,0);
    VL_SIG16(__PVT___zz_when_Axi4WriteMaster_l57_1,8,0);
    VL_SIG16(__PVT___zz_when_Axi4WriteMaster_l57_2,8,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_0,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_1,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_2,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_3,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_4,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_5,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_6,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_7,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_8,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_9,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_10,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_11,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_12,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_13,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_14,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_15,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_16,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_17,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_18,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_19,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_20,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_21,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_22,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_23,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_24,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_25,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_26,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_27,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_28,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_29,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_30,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_31,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_32,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_33,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_34,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_35,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_36,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_37,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_38,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_39,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_40,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_41,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_42,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_43,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_44,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_45,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_46,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_47,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_48,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_49,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_50,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_51,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_52,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_53,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_54,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_55,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_56,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_57,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_58,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_59,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_60,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_61,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_62,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_63,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_64,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_65,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_66,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_67,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_68,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_69,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_70,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_71,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_72,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_73,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_74,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_75,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_76,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_77,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_78,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_79,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_80,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_81,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_82,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_83,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_84,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_85,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_86,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_87,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_88,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_89,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_90,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_91,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_92,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_93,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_94,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_95,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_96,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_97,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_98,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_99,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_100,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_101,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_102,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_103,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_104,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_105,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_106,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_107,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_108,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_109,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_110,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_111,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_112,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_113,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_114,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_115,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_116,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_117,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_118,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_119,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_120,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_121,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_122,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_123,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_124,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_125,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_126,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_127,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_128,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_129,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_130,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_131,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_132,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_133,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_134,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_135,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_136,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_137,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_138,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_139,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_140,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_141,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_142,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_143,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_144,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_145,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_146,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_147,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_148,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_149,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_150,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_151,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_152,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_153,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_154,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_155,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_156,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_157,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_158,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_159,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_160,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_161,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_162,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_163,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_164,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_165,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_166,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_167,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_168,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_169,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_170,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_171,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_172,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_173,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_174,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_175,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_176,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_177,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_178,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_179,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_180,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_181,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_182,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_183,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_184,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_185,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_186,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_187,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_188,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_189,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_190,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_191,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_192,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_193,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_194,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_195,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_196,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_197,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_198,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_199,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_200,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_201,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_202,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_203,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_204,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_205,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_206,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_207,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_208,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_209,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_210,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_211,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_212,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_213,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_214,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_215,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_216,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_217,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_218,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_219,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_220,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_221,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_222,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_223,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_224,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_225,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_226,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_227,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_228,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_229,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_230,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_231,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_232,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_233,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_234,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_235,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_236,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_237,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_238,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_239,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_240,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_241,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_242,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_243,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_244,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_245,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_246,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_247,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_248,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_249,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_250,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_251,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_252,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_253,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_254,31,0);
    VL_SIG(__PVT__axi4Interface_fifoDataBuffer_255,31,0);
    VL_SIGW(__PVT___zz_5,255,0,8);
    VL_SIG(axi4Interface_address,31,0);
    VL_SIG(__PVT__Axi4Incr_result,31,0);
    VL_SIG(__PVT__axi4Interface_initialAddress,31,0);
    
    // LOCAL VARIABLES
    VL_SIG(__Vdly__axi4Interface_address,31,0);
    
    // INTERNAL VARIABLES
  private:
    VStream2Axi4WriteMasterInterfaceAddFifo__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterface& operator= (const VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterface&);  ///< Copying not allowed
    VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterface(const VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterface&);  ///< Copying not allowed
  public:
    VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterface(const char* name="TOP");
    ~VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterface();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VStream2Axi4WriteMasterInterfaceAddFifo__Syms* symsp, bool first);
    static void _combo__TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection__14(VStream2Axi4WriteMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
    static void _combo__TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection__17(VStream2Axi4WriteMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset();
  public:
    static void _sequent__TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection__11(VStream2Axi4WriteMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection__12(VStream2Axi4WriteMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection__13(VStream2Axi4WriteMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection__15(VStream2Axi4WriteMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection__16(VStream2Axi4WriteMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
    static void _sequent__TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection__9(VStream2Axi4WriteMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
    static void _settle__TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection__1(VStream2Axi4WriteMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
    static void _settle__TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection__2(VStream2Axi4WriteMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
    static void _settle__TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection__3(VStream2Axi4WriteMasterInterfaceAddFifo__Syms* __restrict vlSymsp);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif // guard
