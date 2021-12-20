
#include <stdint.h>
#include <string>
#include <memory>
#include <jni.h>
#include <iostream>

#include "VBitonicSortV2.h"
#ifdef TRACE
#include "verilated_vcd_c.h"
#endif
#include "VBitonicSortV2__Syms.h"

using namespace std;

class ISignalAccess{
public:
  virtual ~ISignalAccess() {}

  virtual void getAU8(JNIEnv *env, jbyteArray value) {}
  virtual void getAU8_mem(JNIEnv *env, jbyteArray value, size_t index) {}
  virtual void setAU8(JNIEnv *env, jbyteArray value, int length) {}
  virtual void setAU8_mem(JNIEnv *env, jbyteArray value, int length, size_t index) {}

  virtual uint64_t getU64() = 0;
  virtual uint64_t getU64_mem(size_t index) = 0;
  virtual void setU64(uint64_t value) = 0;
  virtual void setU64_mem(uint64_t value, size_t index) = 0;
};

class  CDataSignalAccess : public ISignalAccess{
public:
    CData *raw;
    CDataSignalAccess(CData *raw) : raw(raw){}
    CDataSignalAccess(CData &raw) : raw(addressof(raw)){}
    uint64_t getU64() {return *raw;}
    uint64_t getU64_mem(size_t index) {return raw[index];}
    void setU64(uint64_t value)  {*raw = value; }
    void setU64_mem(uint64_t value, size_t index){raw[index] = value; }
};


class  SDataSignalAccess : public ISignalAccess{
public:
    SData *raw;
    SDataSignalAccess(SData *raw) : raw(raw){}
    SDataSignalAccess(SData &raw) : raw(addressof(raw)){}
    uint64_t getU64() {return *raw;}
    uint64_t getU64_mem(size_t index) {return raw[index];}
    void setU64(uint64_t value)  {*raw = value; }
    void setU64_mem(uint64_t value, size_t index){raw[index] = value; }
};


class  IDataSignalAccess : public ISignalAccess{
public:
    IData *raw;
    IDataSignalAccess(IData *raw) : raw(raw){}
    IDataSignalAccess(IData &raw) : raw(addressof(raw)){}
    uint64_t getU64() {return *raw;}
    uint64_t getU64_mem(size_t index) {return raw[index];}
    void setU64(uint64_t value)  {*raw = value; }
    void setU64_mem(uint64_t value, size_t index){raw[index] = value; }
};


class  QDataSignalAccess : public ISignalAccess{
public:
    QData *raw;
    QDataSignalAccess(QData *raw) : raw(raw){}
    QDataSignalAccess(QData &raw) : raw(addressof(raw)){}
    uint64_t getU64() {return *raw;}
    uint64_t getU64_mem(size_t index) {return raw[index];}
    void setU64(uint64_t value)  {*raw = value; }
    void setU64_mem(uint64_t value, size_t index){raw[index] = value; }
};

class  WDataSignalAccess : public ISignalAccess{
public:
    WData *raw;
    uint32_t width;
    uint32_t wordsCount;
    bool sint;

    WDataSignalAccess(WData *raw, uint32_t width, bool sint) : 
      raw(raw), width(width), wordsCount((width+31)/32), sint(sint) {}

    uint64_t getU64_mem(size_t index) {
      WData *mem_el = &(raw[index*wordsCount]);
      return mem_el[0] + (((uint64_t)mem_el[1]) << 32);
    }

    uint64_t getU64() { return getU64_mem(0); }

    void setU64_mem(uint64_t value, size_t index)  {
      WData *mem_el = &(raw[index*wordsCount]);
      mem_el[0] = value;
      mem_el[1] = value >> 32;
      uint32_t padding = ((value & 0x8000000000000000l) && sint) ? 0xFFFFFFFF : 0;
      for(uint32_t idx = 2;idx < wordsCount;idx++){
        mem_el[idx] = padding;
      }

      if(width%32 != 0) mem_el[wordsCount-1] &= (1l << width%32)-1;
    }

    void setU64(uint64_t value)  {
      setU64_mem(value, 0);
    }
    
    void getAU8_mem(JNIEnv *env, jbyteArray value, size_t index) {
      WData *mem_el = &(raw[index*wordsCount]);
      uint32_t byteCount = wordsCount*4;
      uint32_t shift = 32-(width % 32);
      uint32_t backup = mem_el[wordsCount-1];
      uint8_t values[byteCount + !sint];
      if(sint && shift != 32) mem_el[wordsCount-1] = (((int32_t)backup) << shift) >> shift;
      for(uint32_t idx = 0;idx < byteCount;idx++){
        values[idx + !sint] = ((uint8_t*)mem_el)[byteCount-idx-1];
      }
      (env)->SetByteArrayRegion ( value, 0, byteCount + !sint, reinterpret_cast<jbyte*>(values));
      mem_el[wordsCount-1] = backup;
    }
  
    void getAU8(JNIEnv *env, jbyteArray value) {
      getAU8_mem(env, value, 0);
    }

    void setAU8_mem(JNIEnv *env, jbyteArray jvalue, int length, size_t index) {
      WData *mem_el = &(raw[index*wordsCount]);
      jbyte value[length];
      (env)->GetByteArrayRegion( jvalue, 0, length, value);
      uint32_t padding = (value[0] & 0x80 && sint) != 0 ? 0xFFFFFFFF : 0;
      for(uint32_t idx = 0;idx < wordsCount;idx++){
        mem_el[idx] = padding;
      }
      uint32_t capedLength = length > 4*wordsCount ? 4*wordsCount : length;
      for(uint32_t idx = 0;idx < capedLength;idx++){
        ((uint8_t*)mem_el)[idx] = value[length-idx-1];
      }
      if(width%32 != 0) mem_el[wordsCount-1] &= (1l << width%32)-1;
    }

    void setAU8(JNIEnv *env, jbyteArray jvalue, int length) {
      setAU8_mem(env, jvalue, length, 0);
    }
};

class Wrapper_1;
thread_local Wrapper_1 *simHandle1;

#include <chrono>
using namespace std::chrono;

class Wrapper_1{
public:
    uint64_t time;
    high_resolution_clock::time_point lastFlushAt;
    uint32_t timeCheck;
    bool waveEnabled;
    VBitonicSortV2 top;
    ISignalAccess *signalAccess[516];
    #ifdef TRACE
	  VerilatedVcdC tfp;
	  #endif
    string name;

    Wrapper_1(const char * name){
      simHandle1 = this;
      time = 0;
      timeCheck = 0;
      lastFlushAt = high_resolution_clock::now();
      waveEnabled = true;
      signalAccess[0] = new CDataSignalAccess( top.dataIn_valid );
      signalAccess[1] = new CDataSignalAccess( top.dataIn_payload_0 );
      signalAccess[2] = new CDataSignalAccess( top.dataIn_payload_1 );
      signalAccess[3] = new CDataSignalAccess( top.dataIn_payload_2 );
      signalAccess[4] = new CDataSignalAccess( top.dataIn_payload_3 );
      signalAccess[5] = new CDataSignalAccess( top.dataIn_payload_4 );
      signalAccess[6] = new CDataSignalAccess( top.dataIn_payload_5 );
      signalAccess[7] = new CDataSignalAccess( top.dataIn_payload_6 );
      signalAccess[8] = new CDataSignalAccess( top.dataIn_payload_7 );
      signalAccess[9] = new CDataSignalAccess( top.dataIn_payload_8 );
      signalAccess[10] = new CDataSignalAccess( top.dataIn_payload_9 );
      signalAccess[11] = new CDataSignalAccess( top.dataIn_payload_10 );
      signalAccess[12] = new CDataSignalAccess( top.dataIn_payload_11 );
      signalAccess[13] = new CDataSignalAccess( top.dataIn_payload_12 );
      signalAccess[14] = new CDataSignalAccess( top.dataIn_payload_13 );
      signalAccess[15] = new CDataSignalAccess( top.dataIn_payload_14 );
      signalAccess[16] = new CDataSignalAccess( top.dataIn_payload_15 );
      signalAccess[17] = new CDataSignalAccess( top.dataIn_payload_16 );
      signalAccess[18] = new CDataSignalAccess( top.dataIn_payload_17 );
      signalAccess[19] = new CDataSignalAccess( top.dataIn_payload_18 );
      signalAccess[20] = new CDataSignalAccess( top.dataIn_payload_19 );
      signalAccess[21] = new CDataSignalAccess( top.dataIn_payload_20 );
      signalAccess[22] = new CDataSignalAccess( top.dataIn_payload_21 );
      signalAccess[23] = new CDataSignalAccess( top.dataIn_payload_22 );
      signalAccess[24] = new CDataSignalAccess( top.dataIn_payload_23 );
      signalAccess[25] = new CDataSignalAccess( top.dataIn_payload_24 );
      signalAccess[26] = new CDataSignalAccess( top.dataIn_payload_25 );
      signalAccess[27] = new CDataSignalAccess( top.dataIn_payload_26 );
      signalAccess[28] = new CDataSignalAccess( top.dataIn_payload_27 );
      signalAccess[29] = new CDataSignalAccess( top.dataIn_payload_28 );
      signalAccess[30] = new CDataSignalAccess( top.dataIn_payload_29 );
      signalAccess[31] = new CDataSignalAccess( top.dataIn_payload_30 );
      signalAccess[32] = new CDataSignalAccess( top.dataIn_payload_31 );
      signalAccess[33] = new CDataSignalAccess( top.dataIn_payload_32 );
      signalAccess[34] = new CDataSignalAccess( top.dataIn_payload_33 );
      signalAccess[35] = new CDataSignalAccess( top.dataIn_payload_34 );
      signalAccess[36] = new CDataSignalAccess( top.dataIn_payload_35 );
      signalAccess[37] = new CDataSignalAccess( top.dataIn_payload_36 );
      signalAccess[38] = new CDataSignalAccess( top.dataIn_payload_37 );
      signalAccess[39] = new CDataSignalAccess( top.dataIn_payload_38 );
      signalAccess[40] = new CDataSignalAccess( top.dataIn_payload_39 );
      signalAccess[41] = new CDataSignalAccess( top.dataIn_payload_40 );
      signalAccess[42] = new CDataSignalAccess( top.dataIn_payload_41 );
      signalAccess[43] = new CDataSignalAccess( top.dataIn_payload_42 );
      signalAccess[44] = new CDataSignalAccess( top.dataIn_payload_43 );
      signalAccess[45] = new CDataSignalAccess( top.dataIn_payload_44 );
      signalAccess[46] = new CDataSignalAccess( top.dataIn_payload_45 );
      signalAccess[47] = new CDataSignalAccess( top.dataIn_payload_46 );
      signalAccess[48] = new CDataSignalAccess( top.dataIn_payload_47 );
      signalAccess[49] = new CDataSignalAccess( top.dataIn_payload_48 );
      signalAccess[50] = new CDataSignalAccess( top.dataIn_payload_49 );
      signalAccess[51] = new CDataSignalAccess( top.dataIn_payload_50 );
      signalAccess[52] = new CDataSignalAccess( top.dataIn_payload_51 );
      signalAccess[53] = new CDataSignalAccess( top.dataIn_payload_52 );
      signalAccess[54] = new CDataSignalAccess( top.dataIn_payload_53 );
      signalAccess[55] = new CDataSignalAccess( top.dataIn_payload_54 );
      signalAccess[56] = new CDataSignalAccess( top.dataIn_payload_55 );
      signalAccess[57] = new CDataSignalAccess( top.dataIn_payload_56 );
      signalAccess[58] = new CDataSignalAccess( top.dataIn_payload_57 );
      signalAccess[59] = new CDataSignalAccess( top.dataIn_payload_58 );
      signalAccess[60] = new CDataSignalAccess( top.dataIn_payload_59 );
      signalAccess[61] = new CDataSignalAccess( top.dataIn_payload_60 );
      signalAccess[62] = new CDataSignalAccess( top.dataIn_payload_61 );
      signalAccess[63] = new CDataSignalAccess( top.dataIn_payload_62 );
      signalAccess[64] = new CDataSignalAccess( top.dataIn_payload_63 );
      signalAccess[65] = new CDataSignalAccess( top.dataIn_payload_64 );
      signalAccess[66] = new CDataSignalAccess( top.dataIn_payload_65 );
      signalAccess[67] = new CDataSignalAccess( top.dataIn_payload_66 );
      signalAccess[68] = new CDataSignalAccess( top.dataIn_payload_67 );
      signalAccess[69] = new CDataSignalAccess( top.dataIn_payload_68 );
      signalAccess[70] = new CDataSignalAccess( top.dataIn_payload_69 );
      signalAccess[71] = new CDataSignalAccess( top.dataIn_payload_70 );
      signalAccess[72] = new CDataSignalAccess( top.dataIn_payload_71 );
      signalAccess[73] = new CDataSignalAccess( top.dataIn_payload_72 );
      signalAccess[74] = new CDataSignalAccess( top.dataIn_payload_73 );
      signalAccess[75] = new CDataSignalAccess( top.dataIn_payload_74 );
      signalAccess[76] = new CDataSignalAccess( top.dataIn_payload_75 );
      signalAccess[77] = new CDataSignalAccess( top.dataIn_payload_76 );
      signalAccess[78] = new CDataSignalAccess( top.dataIn_payload_77 );
      signalAccess[79] = new CDataSignalAccess( top.dataIn_payload_78 );
      signalAccess[80] = new CDataSignalAccess( top.dataIn_payload_79 );
      signalAccess[81] = new CDataSignalAccess( top.dataIn_payload_80 );
      signalAccess[82] = new CDataSignalAccess( top.dataIn_payload_81 );
      signalAccess[83] = new CDataSignalAccess( top.dataIn_payload_82 );
      signalAccess[84] = new CDataSignalAccess( top.dataIn_payload_83 );
      signalAccess[85] = new CDataSignalAccess( top.dataIn_payload_84 );
      signalAccess[86] = new CDataSignalAccess( top.dataIn_payload_85 );
      signalAccess[87] = new CDataSignalAccess( top.dataIn_payload_86 );
      signalAccess[88] = new CDataSignalAccess( top.dataIn_payload_87 );
      signalAccess[89] = new CDataSignalAccess( top.dataIn_payload_88 );
      signalAccess[90] = new CDataSignalAccess( top.dataIn_payload_89 );
      signalAccess[91] = new CDataSignalAccess( top.dataIn_payload_90 );
      signalAccess[92] = new CDataSignalAccess( top.dataIn_payload_91 );
      signalAccess[93] = new CDataSignalAccess( top.dataIn_payload_92 );
      signalAccess[94] = new CDataSignalAccess( top.dataIn_payload_93 );
      signalAccess[95] = new CDataSignalAccess( top.dataIn_payload_94 );
      signalAccess[96] = new CDataSignalAccess( top.dataIn_payload_95 );
      signalAccess[97] = new CDataSignalAccess( top.dataIn_payload_96 );
      signalAccess[98] = new CDataSignalAccess( top.dataIn_payload_97 );
      signalAccess[99] = new CDataSignalAccess( top.dataIn_payload_98 );
      signalAccess[100] = new CDataSignalAccess( top.dataIn_payload_99 );
      signalAccess[101] = new CDataSignalAccess( top.dataIn_payload_100 );
      signalAccess[102] = new CDataSignalAccess( top.dataIn_payload_101 );
      signalAccess[103] = new CDataSignalAccess( top.dataIn_payload_102 );
      signalAccess[104] = new CDataSignalAccess( top.dataIn_payload_103 );
      signalAccess[105] = new CDataSignalAccess( top.dataIn_payload_104 );
      signalAccess[106] = new CDataSignalAccess( top.dataIn_payload_105 );
      signalAccess[107] = new CDataSignalAccess( top.dataIn_payload_106 );
      signalAccess[108] = new CDataSignalAccess( top.dataIn_payload_107 );
      signalAccess[109] = new CDataSignalAccess( top.dataIn_payload_108 );
      signalAccess[110] = new CDataSignalAccess( top.dataIn_payload_109 );
      signalAccess[111] = new CDataSignalAccess( top.dataIn_payload_110 );
      signalAccess[112] = new CDataSignalAccess( top.dataIn_payload_111 );
      signalAccess[113] = new CDataSignalAccess( top.dataIn_payload_112 );
      signalAccess[114] = new CDataSignalAccess( top.dataIn_payload_113 );
      signalAccess[115] = new CDataSignalAccess( top.dataIn_payload_114 );
      signalAccess[116] = new CDataSignalAccess( top.dataIn_payload_115 );
      signalAccess[117] = new CDataSignalAccess( top.dataIn_payload_116 );
      signalAccess[118] = new CDataSignalAccess( top.dataIn_payload_117 );
      signalAccess[119] = new CDataSignalAccess( top.dataIn_payload_118 );
      signalAccess[120] = new CDataSignalAccess( top.dataIn_payload_119 );
      signalAccess[121] = new CDataSignalAccess( top.dataIn_payload_120 );
      signalAccess[122] = new CDataSignalAccess( top.dataIn_payload_121 );
      signalAccess[123] = new CDataSignalAccess( top.dataIn_payload_122 );
      signalAccess[124] = new CDataSignalAccess( top.dataIn_payload_123 );
      signalAccess[125] = new CDataSignalAccess( top.dataIn_payload_124 );
      signalAccess[126] = new CDataSignalAccess( top.dataIn_payload_125 );
      signalAccess[127] = new CDataSignalAccess( top.dataIn_payload_126 );
      signalAccess[128] = new CDataSignalAccess( top.dataIn_payload_127 );
      signalAccess[129] = new CDataSignalAccess( top.dataIn_payload_128 );
      signalAccess[130] = new CDataSignalAccess( top.dataIn_payload_129 );
      signalAccess[131] = new CDataSignalAccess( top.dataIn_payload_130 );
      signalAccess[132] = new CDataSignalAccess( top.dataIn_payload_131 );
      signalAccess[133] = new CDataSignalAccess( top.dataIn_payload_132 );
      signalAccess[134] = new CDataSignalAccess( top.dataIn_payload_133 );
      signalAccess[135] = new CDataSignalAccess( top.dataIn_payload_134 );
      signalAccess[136] = new CDataSignalAccess( top.dataIn_payload_135 );
      signalAccess[137] = new CDataSignalAccess( top.dataIn_payload_136 );
      signalAccess[138] = new CDataSignalAccess( top.dataIn_payload_137 );
      signalAccess[139] = new CDataSignalAccess( top.dataIn_payload_138 );
      signalAccess[140] = new CDataSignalAccess( top.dataIn_payload_139 );
      signalAccess[141] = new CDataSignalAccess( top.dataIn_payload_140 );
      signalAccess[142] = new CDataSignalAccess( top.dataIn_payload_141 );
      signalAccess[143] = new CDataSignalAccess( top.dataIn_payload_142 );
      signalAccess[144] = new CDataSignalAccess( top.dataIn_payload_143 );
      signalAccess[145] = new CDataSignalAccess( top.dataIn_payload_144 );
      signalAccess[146] = new CDataSignalAccess( top.dataIn_payload_145 );
      signalAccess[147] = new CDataSignalAccess( top.dataIn_payload_146 );
      signalAccess[148] = new CDataSignalAccess( top.dataIn_payload_147 );
      signalAccess[149] = new CDataSignalAccess( top.dataIn_payload_148 );
      signalAccess[150] = new CDataSignalAccess( top.dataIn_payload_149 );
      signalAccess[151] = new CDataSignalAccess( top.dataIn_payload_150 );
      signalAccess[152] = new CDataSignalAccess( top.dataIn_payload_151 );
      signalAccess[153] = new CDataSignalAccess( top.dataIn_payload_152 );
      signalAccess[154] = new CDataSignalAccess( top.dataIn_payload_153 );
      signalAccess[155] = new CDataSignalAccess( top.dataIn_payload_154 );
      signalAccess[156] = new CDataSignalAccess( top.dataIn_payload_155 );
      signalAccess[157] = new CDataSignalAccess( top.dataIn_payload_156 );
      signalAccess[158] = new CDataSignalAccess( top.dataIn_payload_157 );
      signalAccess[159] = new CDataSignalAccess( top.dataIn_payload_158 );
      signalAccess[160] = new CDataSignalAccess( top.dataIn_payload_159 );
      signalAccess[161] = new CDataSignalAccess( top.dataIn_payload_160 );
      signalAccess[162] = new CDataSignalAccess( top.dataIn_payload_161 );
      signalAccess[163] = new CDataSignalAccess( top.dataIn_payload_162 );
      signalAccess[164] = new CDataSignalAccess( top.dataIn_payload_163 );
      signalAccess[165] = new CDataSignalAccess( top.dataIn_payload_164 );
      signalAccess[166] = new CDataSignalAccess( top.dataIn_payload_165 );
      signalAccess[167] = new CDataSignalAccess( top.dataIn_payload_166 );
      signalAccess[168] = new CDataSignalAccess( top.dataIn_payload_167 );
      signalAccess[169] = new CDataSignalAccess( top.dataIn_payload_168 );
      signalAccess[170] = new CDataSignalAccess( top.dataIn_payload_169 );
      signalAccess[171] = new CDataSignalAccess( top.dataIn_payload_170 );
      signalAccess[172] = new CDataSignalAccess( top.dataIn_payload_171 );
      signalAccess[173] = new CDataSignalAccess( top.dataIn_payload_172 );
      signalAccess[174] = new CDataSignalAccess( top.dataIn_payload_173 );
      signalAccess[175] = new CDataSignalAccess( top.dataIn_payload_174 );
      signalAccess[176] = new CDataSignalAccess( top.dataIn_payload_175 );
      signalAccess[177] = new CDataSignalAccess( top.dataIn_payload_176 );
      signalAccess[178] = new CDataSignalAccess( top.dataIn_payload_177 );
      signalAccess[179] = new CDataSignalAccess( top.dataIn_payload_178 );
      signalAccess[180] = new CDataSignalAccess( top.dataIn_payload_179 );
      signalAccess[181] = new CDataSignalAccess( top.dataIn_payload_180 );
      signalAccess[182] = new CDataSignalAccess( top.dataIn_payload_181 );
      signalAccess[183] = new CDataSignalAccess( top.dataIn_payload_182 );
      signalAccess[184] = new CDataSignalAccess( top.dataIn_payload_183 );
      signalAccess[185] = new CDataSignalAccess( top.dataIn_payload_184 );
      signalAccess[186] = new CDataSignalAccess( top.dataIn_payload_185 );
      signalAccess[187] = new CDataSignalAccess( top.dataIn_payload_186 );
      signalAccess[188] = new CDataSignalAccess( top.dataIn_payload_187 );
      signalAccess[189] = new CDataSignalAccess( top.dataIn_payload_188 );
      signalAccess[190] = new CDataSignalAccess( top.dataIn_payload_189 );
      signalAccess[191] = new CDataSignalAccess( top.dataIn_payload_190 );
      signalAccess[192] = new CDataSignalAccess( top.dataIn_payload_191 );
      signalAccess[193] = new CDataSignalAccess( top.dataIn_payload_192 );
      signalAccess[194] = new CDataSignalAccess( top.dataIn_payload_193 );
      signalAccess[195] = new CDataSignalAccess( top.dataIn_payload_194 );
      signalAccess[196] = new CDataSignalAccess( top.dataIn_payload_195 );
      signalAccess[197] = new CDataSignalAccess( top.dataIn_payload_196 );
      signalAccess[198] = new CDataSignalAccess( top.dataIn_payload_197 );
      signalAccess[199] = new CDataSignalAccess( top.dataIn_payload_198 );
      signalAccess[200] = new CDataSignalAccess( top.dataIn_payload_199 );
      signalAccess[201] = new CDataSignalAccess( top.dataIn_payload_200 );
      signalAccess[202] = new CDataSignalAccess( top.dataIn_payload_201 );
      signalAccess[203] = new CDataSignalAccess( top.dataIn_payload_202 );
      signalAccess[204] = new CDataSignalAccess( top.dataIn_payload_203 );
      signalAccess[205] = new CDataSignalAccess( top.dataIn_payload_204 );
      signalAccess[206] = new CDataSignalAccess( top.dataIn_payload_205 );
      signalAccess[207] = new CDataSignalAccess( top.dataIn_payload_206 );
      signalAccess[208] = new CDataSignalAccess( top.dataIn_payload_207 );
      signalAccess[209] = new CDataSignalAccess( top.dataIn_payload_208 );
      signalAccess[210] = new CDataSignalAccess( top.dataIn_payload_209 );
      signalAccess[211] = new CDataSignalAccess( top.dataIn_payload_210 );
      signalAccess[212] = new CDataSignalAccess( top.dataIn_payload_211 );
      signalAccess[213] = new CDataSignalAccess( top.dataIn_payload_212 );
      signalAccess[214] = new CDataSignalAccess( top.dataIn_payload_213 );
      signalAccess[215] = new CDataSignalAccess( top.dataIn_payload_214 );
      signalAccess[216] = new CDataSignalAccess( top.dataIn_payload_215 );
      signalAccess[217] = new CDataSignalAccess( top.dataIn_payload_216 );
      signalAccess[218] = new CDataSignalAccess( top.dataIn_payload_217 );
      signalAccess[219] = new CDataSignalAccess( top.dataIn_payload_218 );
      signalAccess[220] = new CDataSignalAccess( top.dataIn_payload_219 );
      signalAccess[221] = new CDataSignalAccess( top.dataIn_payload_220 );
      signalAccess[222] = new CDataSignalAccess( top.dataIn_payload_221 );
      signalAccess[223] = new CDataSignalAccess( top.dataIn_payload_222 );
      signalAccess[224] = new CDataSignalAccess( top.dataIn_payload_223 );
      signalAccess[225] = new CDataSignalAccess( top.dataIn_payload_224 );
      signalAccess[226] = new CDataSignalAccess( top.dataIn_payload_225 );
      signalAccess[227] = new CDataSignalAccess( top.dataIn_payload_226 );
      signalAccess[228] = new CDataSignalAccess( top.dataIn_payload_227 );
      signalAccess[229] = new CDataSignalAccess( top.dataIn_payload_228 );
      signalAccess[230] = new CDataSignalAccess( top.dataIn_payload_229 );
      signalAccess[231] = new CDataSignalAccess( top.dataIn_payload_230 );
      signalAccess[232] = new CDataSignalAccess( top.dataIn_payload_231 );
      signalAccess[233] = new CDataSignalAccess( top.dataIn_payload_232 );
      signalAccess[234] = new CDataSignalAccess( top.dataIn_payload_233 );
      signalAccess[235] = new CDataSignalAccess( top.dataIn_payload_234 );
      signalAccess[236] = new CDataSignalAccess( top.dataIn_payload_235 );
      signalAccess[237] = new CDataSignalAccess( top.dataIn_payload_236 );
      signalAccess[238] = new CDataSignalAccess( top.dataIn_payload_237 );
      signalAccess[239] = new CDataSignalAccess( top.dataIn_payload_238 );
      signalAccess[240] = new CDataSignalAccess( top.dataIn_payload_239 );
      signalAccess[241] = new CDataSignalAccess( top.dataIn_payload_240 );
      signalAccess[242] = new CDataSignalAccess( top.dataIn_payload_241 );
      signalAccess[243] = new CDataSignalAccess( top.dataIn_payload_242 );
      signalAccess[244] = new CDataSignalAccess( top.dataIn_payload_243 );
      signalAccess[245] = new CDataSignalAccess( top.dataIn_payload_244 );
      signalAccess[246] = new CDataSignalAccess( top.dataIn_payload_245 );
      signalAccess[247] = new CDataSignalAccess( top.dataIn_payload_246 );
      signalAccess[248] = new CDataSignalAccess( top.dataIn_payload_247 );
      signalAccess[249] = new CDataSignalAccess( top.dataIn_payload_248 );
      signalAccess[250] = new CDataSignalAccess( top.dataIn_payload_249 );
      signalAccess[251] = new CDataSignalAccess( top.dataIn_payload_250 );
      signalAccess[252] = new CDataSignalAccess( top.dataIn_payload_251 );
      signalAccess[253] = new CDataSignalAccess( top.dataIn_payload_252 );
      signalAccess[254] = new CDataSignalAccess( top.dataIn_payload_253 );
      signalAccess[255] = new CDataSignalAccess( top.dataIn_payload_254 );
      signalAccess[256] = new CDataSignalAccess( top.dataIn_payload_255 );
      signalAccess[257] = new CDataSignalAccess( top.dataOut_valid );
      signalAccess[258] = new CDataSignalAccess( top.dataOut_payload_0 );
      signalAccess[259] = new CDataSignalAccess( top.dataOut_payload_1 );
      signalAccess[260] = new CDataSignalAccess( top.dataOut_payload_2 );
      signalAccess[261] = new CDataSignalAccess( top.dataOut_payload_3 );
      signalAccess[262] = new CDataSignalAccess( top.dataOut_payload_4 );
      signalAccess[263] = new CDataSignalAccess( top.dataOut_payload_5 );
      signalAccess[264] = new CDataSignalAccess( top.dataOut_payload_6 );
      signalAccess[265] = new CDataSignalAccess( top.dataOut_payload_7 );
      signalAccess[266] = new CDataSignalAccess( top.dataOut_payload_8 );
      signalAccess[267] = new CDataSignalAccess( top.dataOut_payload_9 );
      signalAccess[268] = new CDataSignalAccess( top.dataOut_payload_10 );
      signalAccess[269] = new CDataSignalAccess( top.dataOut_payload_11 );
      signalAccess[270] = new CDataSignalAccess( top.dataOut_payload_12 );
      signalAccess[271] = new CDataSignalAccess( top.dataOut_payload_13 );
      signalAccess[272] = new CDataSignalAccess( top.dataOut_payload_14 );
      signalAccess[273] = new CDataSignalAccess( top.dataOut_payload_15 );
      signalAccess[274] = new CDataSignalAccess( top.dataOut_payload_16 );
      signalAccess[275] = new CDataSignalAccess( top.dataOut_payload_17 );
      signalAccess[276] = new CDataSignalAccess( top.dataOut_payload_18 );
      signalAccess[277] = new CDataSignalAccess( top.dataOut_payload_19 );
      signalAccess[278] = new CDataSignalAccess( top.dataOut_payload_20 );
      signalAccess[279] = new CDataSignalAccess( top.dataOut_payload_21 );
      signalAccess[280] = new CDataSignalAccess( top.dataOut_payload_22 );
      signalAccess[281] = new CDataSignalAccess( top.dataOut_payload_23 );
      signalAccess[282] = new CDataSignalAccess( top.dataOut_payload_24 );
      signalAccess[283] = new CDataSignalAccess( top.dataOut_payload_25 );
      signalAccess[284] = new CDataSignalAccess( top.dataOut_payload_26 );
      signalAccess[285] = new CDataSignalAccess( top.dataOut_payload_27 );
      signalAccess[286] = new CDataSignalAccess( top.dataOut_payload_28 );
      signalAccess[287] = new CDataSignalAccess( top.dataOut_payload_29 );
      signalAccess[288] = new CDataSignalAccess( top.dataOut_payload_30 );
      signalAccess[289] = new CDataSignalAccess( top.dataOut_payload_31 );
      signalAccess[290] = new CDataSignalAccess( top.dataOut_payload_32 );
      signalAccess[291] = new CDataSignalAccess( top.dataOut_payload_33 );
      signalAccess[292] = new CDataSignalAccess( top.dataOut_payload_34 );
      signalAccess[293] = new CDataSignalAccess( top.dataOut_payload_35 );
      signalAccess[294] = new CDataSignalAccess( top.dataOut_payload_36 );
      signalAccess[295] = new CDataSignalAccess( top.dataOut_payload_37 );
      signalAccess[296] = new CDataSignalAccess( top.dataOut_payload_38 );
      signalAccess[297] = new CDataSignalAccess( top.dataOut_payload_39 );
      signalAccess[298] = new CDataSignalAccess( top.dataOut_payload_40 );
      signalAccess[299] = new CDataSignalAccess( top.dataOut_payload_41 );
      signalAccess[300] = new CDataSignalAccess( top.dataOut_payload_42 );
      signalAccess[301] = new CDataSignalAccess( top.dataOut_payload_43 );
      signalAccess[302] = new CDataSignalAccess( top.dataOut_payload_44 );
      signalAccess[303] = new CDataSignalAccess( top.dataOut_payload_45 );
      signalAccess[304] = new CDataSignalAccess( top.dataOut_payload_46 );
      signalAccess[305] = new CDataSignalAccess( top.dataOut_payload_47 );
      signalAccess[306] = new CDataSignalAccess( top.dataOut_payload_48 );
      signalAccess[307] = new CDataSignalAccess( top.dataOut_payload_49 );
      signalAccess[308] = new CDataSignalAccess( top.dataOut_payload_50 );
      signalAccess[309] = new CDataSignalAccess( top.dataOut_payload_51 );
      signalAccess[310] = new CDataSignalAccess( top.dataOut_payload_52 );
      signalAccess[311] = new CDataSignalAccess( top.dataOut_payload_53 );
      signalAccess[312] = new CDataSignalAccess( top.dataOut_payload_54 );
      signalAccess[313] = new CDataSignalAccess( top.dataOut_payload_55 );
      signalAccess[314] = new CDataSignalAccess( top.dataOut_payload_56 );
      signalAccess[315] = new CDataSignalAccess( top.dataOut_payload_57 );
      signalAccess[316] = new CDataSignalAccess( top.dataOut_payload_58 );
      signalAccess[317] = new CDataSignalAccess( top.dataOut_payload_59 );
      signalAccess[318] = new CDataSignalAccess( top.dataOut_payload_60 );
      signalAccess[319] = new CDataSignalAccess( top.dataOut_payload_61 );
      signalAccess[320] = new CDataSignalAccess( top.dataOut_payload_62 );
      signalAccess[321] = new CDataSignalAccess( top.dataOut_payload_63 );
      signalAccess[322] = new CDataSignalAccess( top.dataOut_payload_64 );
      signalAccess[323] = new CDataSignalAccess( top.dataOut_payload_65 );
      signalAccess[324] = new CDataSignalAccess( top.dataOut_payload_66 );
      signalAccess[325] = new CDataSignalAccess( top.dataOut_payload_67 );
      signalAccess[326] = new CDataSignalAccess( top.dataOut_payload_68 );
      signalAccess[327] = new CDataSignalAccess( top.dataOut_payload_69 );
      signalAccess[328] = new CDataSignalAccess( top.dataOut_payload_70 );
      signalAccess[329] = new CDataSignalAccess( top.dataOut_payload_71 );
      signalAccess[330] = new CDataSignalAccess( top.dataOut_payload_72 );
      signalAccess[331] = new CDataSignalAccess( top.dataOut_payload_73 );
      signalAccess[332] = new CDataSignalAccess( top.dataOut_payload_74 );
      signalAccess[333] = new CDataSignalAccess( top.dataOut_payload_75 );
      signalAccess[334] = new CDataSignalAccess( top.dataOut_payload_76 );
      signalAccess[335] = new CDataSignalAccess( top.dataOut_payload_77 );
      signalAccess[336] = new CDataSignalAccess( top.dataOut_payload_78 );
      signalAccess[337] = new CDataSignalAccess( top.dataOut_payload_79 );
      signalAccess[338] = new CDataSignalAccess( top.dataOut_payload_80 );
      signalAccess[339] = new CDataSignalAccess( top.dataOut_payload_81 );
      signalAccess[340] = new CDataSignalAccess( top.dataOut_payload_82 );
      signalAccess[341] = new CDataSignalAccess( top.dataOut_payload_83 );
      signalAccess[342] = new CDataSignalAccess( top.dataOut_payload_84 );
      signalAccess[343] = new CDataSignalAccess( top.dataOut_payload_85 );
      signalAccess[344] = new CDataSignalAccess( top.dataOut_payload_86 );
      signalAccess[345] = new CDataSignalAccess( top.dataOut_payload_87 );
      signalAccess[346] = new CDataSignalAccess( top.dataOut_payload_88 );
      signalAccess[347] = new CDataSignalAccess( top.dataOut_payload_89 );
      signalAccess[348] = new CDataSignalAccess( top.dataOut_payload_90 );
      signalAccess[349] = new CDataSignalAccess( top.dataOut_payload_91 );
      signalAccess[350] = new CDataSignalAccess( top.dataOut_payload_92 );
      signalAccess[351] = new CDataSignalAccess( top.dataOut_payload_93 );
      signalAccess[352] = new CDataSignalAccess( top.dataOut_payload_94 );
      signalAccess[353] = new CDataSignalAccess( top.dataOut_payload_95 );
      signalAccess[354] = new CDataSignalAccess( top.dataOut_payload_96 );
      signalAccess[355] = new CDataSignalAccess( top.dataOut_payload_97 );
      signalAccess[356] = new CDataSignalAccess( top.dataOut_payload_98 );
      signalAccess[357] = new CDataSignalAccess( top.dataOut_payload_99 );
      signalAccess[358] = new CDataSignalAccess( top.dataOut_payload_100 );
      signalAccess[359] = new CDataSignalAccess( top.dataOut_payload_101 );
      signalAccess[360] = new CDataSignalAccess( top.dataOut_payload_102 );
      signalAccess[361] = new CDataSignalAccess( top.dataOut_payload_103 );
      signalAccess[362] = new CDataSignalAccess( top.dataOut_payload_104 );
      signalAccess[363] = new CDataSignalAccess( top.dataOut_payload_105 );
      signalAccess[364] = new CDataSignalAccess( top.dataOut_payload_106 );
      signalAccess[365] = new CDataSignalAccess( top.dataOut_payload_107 );
      signalAccess[366] = new CDataSignalAccess( top.dataOut_payload_108 );
      signalAccess[367] = new CDataSignalAccess( top.dataOut_payload_109 );
      signalAccess[368] = new CDataSignalAccess( top.dataOut_payload_110 );
      signalAccess[369] = new CDataSignalAccess( top.dataOut_payload_111 );
      signalAccess[370] = new CDataSignalAccess( top.dataOut_payload_112 );
      signalAccess[371] = new CDataSignalAccess( top.dataOut_payload_113 );
      signalAccess[372] = new CDataSignalAccess( top.dataOut_payload_114 );
      signalAccess[373] = new CDataSignalAccess( top.dataOut_payload_115 );
      signalAccess[374] = new CDataSignalAccess( top.dataOut_payload_116 );
      signalAccess[375] = new CDataSignalAccess( top.dataOut_payload_117 );
      signalAccess[376] = new CDataSignalAccess( top.dataOut_payload_118 );
      signalAccess[377] = new CDataSignalAccess( top.dataOut_payload_119 );
      signalAccess[378] = new CDataSignalAccess( top.dataOut_payload_120 );
      signalAccess[379] = new CDataSignalAccess( top.dataOut_payload_121 );
      signalAccess[380] = new CDataSignalAccess( top.dataOut_payload_122 );
      signalAccess[381] = new CDataSignalAccess( top.dataOut_payload_123 );
      signalAccess[382] = new CDataSignalAccess( top.dataOut_payload_124 );
      signalAccess[383] = new CDataSignalAccess( top.dataOut_payload_125 );
      signalAccess[384] = new CDataSignalAccess( top.dataOut_payload_126 );
      signalAccess[385] = new CDataSignalAccess( top.dataOut_payload_127 );
      signalAccess[386] = new CDataSignalAccess( top.dataOut_payload_128 );
      signalAccess[387] = new CDataSignalAccess( top.dataOut_payload_129 );
      signalAccess[388] = new CDataSignalAccess( top.dataOut_payload_130 );
      signalAccess[389] = new CDataSignalAccess( top.dataOut_payload_131 );
      signalAccess[390] = new CDataSignalAccess( top.dataOut_payload_132 );
      signalAccess[391] = new CDataSignalAccess( top.dataOut_payload_133 );
      signalAccess[392] = new CDataSignalAccess( top.dataOut_payload_134 );
      signalAccess[393] = new CDataSignalAccess( top.dataOut_payload_135 );
      signalAccess[394] = new CDataSignalAccess( top.dataOut_payload_136 );
      signalAccess[395] = new CDataSignalAccess( top.dataOut_payload_137 );
      signalAccess[396] = new CDataSignalAccess( top.dataOut_payload_138 );
      signalAccess[397] = new CDataSignalAccess( top.dataOut_payload_139 );
      signalAccess[398] = new CDataSignalAccess( top.dataOut_payload_140 );
      signalAccess[399] = new CDataSignalAccess( top.dataOut_payload_141 );
      signalAccess[400] = new CDataSignalAccess( top.dataOut_payload_142 );
      signalAccess[401] = new CDataSignalAccess( top.dataOut_payload_143 );
      signalAccess[402] = new CDataSignalAccess( top.dataOut_payload_144 );
      signalAccess[403] = new CDataSignalAccess( top.dataOut_payload_145 );
      signalAccess[404] = new CDataSignalAccess( top.dataOut_payload_146 );
      signalAccess[405] = new CDataSignalAccess( top.dataOut_payload_147 );
      signalAccess[406] = new CDataSignalAccess( top.dataOut_payload_148 );
      signalAccess[407] = new CDataSignalAccess( top.dataOut_payload_149 );
      signalAccess[408] = new CDataSignalAccess( top.dataOut_payload_150 );
      signalAccess[409] = new CDataSignalAccess( top.dataOut_payload_151 );
      signalAccess[410] = new CDataSignalAccess( top.dataOut_payload_152 );
      signalAccess[411] = new CDataSignalAccess( top.dataOut_payload_153 );
      signalAccess[412] = new CDataSignalAccess( top.dataOut_payload_154 );
      signalAccess[413] = new CDataSignalAccess( top.dataOut_payload_155 );
      signalAccess[414] = new CDataSignalAccess( top.dataOut_payload_156 );
      signalAccess[415] = new CDataSignalAccess( top.dataOut_payload_157 );
      signalAccess[416] = new CDataSignalAccess( top.dataOut_payload_158 );
      signalAccess[417] = new CDataSignalAccess( top.dataOut_payload_159 );
      signalAccess[418] = new CDataSignalAccess( top.dataOut_payload_160 );
      signalAccess[419] = new CDataSignalAccess( top.dataOut_payload_161 );
      signalAccess[420] = new CDataSignalAccess( top.dataOut_payload_162 );
      signalAccess[421] = new CDataSignalAccess( top.dataOut_payload_163 );
      signalAccess[422] = new CDataSignalAccess( top.dataOut_payload_164 );
      signalAccess[423] = new CDataSignalAccess( top.dataOut_payload_165 );
      signalAccess[424] = new CDataSignalAccess( top.dataOut_payload_166 );
      signalAccess[425] = new CDataSignalAccess( top.dataOut_payload_167 );
      signalAccess[426] = new CDataSignalAccess( top.dataOut_payload_168 );
      signalAccess[427] = new CDataSignalAccess( top.dataOut_payload_169 );
      signalAccess[428] = new CDataSignalAccess( top.dataOut_payload_170 );
      signalAccess[429] = new CDataSignalAccess( top.dataOut_payload_171 );
      signalAccess[430] = new CDataSignalAccess( top.dataOut_payload_172 );
      signalAccess[431] = new CDataSignalAccess( top.dataOut_payload_173 );
      signalAccess[432] = new CDataSignalAccess( top.dataOut_payload_174 );
      signalAccess[433] = new CDataSignalAccess( top.dataOut_payload_175 );
      signalAccess[434] = new CDataSignalAccess( top.dataOut_payload_176 );
      signalAccess[435] = new CDataSignalAccess( top.dataOut_payload_177 );
      signalAccess[436] = new CDataSignalAccess( top.dataOut_payload_178 );
      signalAccess[437] = new CDataSignalAccess( top.dataOut_payload_179 );
      signalAccess[438] = new CDataSignalAccess( top.dataOut_payload_180 );
      signalAccess[439] = new CDataSignalAccess( top.dataOut_payload_181 );
      signalAccess[440] = new CDataSignalAccess( top.dataOut_payload_182 );
      signalAccess[441] = new CDataSignalAccess( top.dataOut_payload_183 );
      signalAccess[442] = new CDataSignalAccess( top.dataOut_payload_184 );
      signalAccess[443] = new CDataSignalAccess( top.dataOut_payload_185 );
      signalAccess[444] = new CDataSignalAccess( top.dataOut_payload_186 );
      signalAccess[445] = new CDataSignalAccess( top.dataOut_payload_187 );
      signalAccess[446] = new CDataSignalAccess( top.dataOut_payload_188 );
      signalAccess[447] = new CDataSignalAccess( top.dataOut_payload_189 );
      signalAccess[448] = new CDataSignalAccess( top.dataOut_payload_190 );
      signalAccess[449] = new CDataSignalAccess( top.dataOut_payload_191 );
      signalAccess[450] = new CDataSignalAccess( top.dataOut_payload_192 );
      signalAccess[451] = new CDataSignalAccess( top.dataOut_payload_193 );
      signalAccess[452] = new CDataSignalAccess( top.dataOut_payload_194 );
      signalAccess[453] = new CDataSignalAccess( top.dataOut_payload_195 );
      signalAccess[454] = new CDataSignalAccess( top.dataOut_payload_196 );
      signalAccess[455] = new CDataSignalAccess( top.dataOut_payload_197 );
      signalAccess[456] = new CDataSignalAccess( top.dataOut_payload_198 );
      signalAccess[457] = new CDataSignalAccess( top.dataOut_payload_199 );
      signalAccess[458] = new CDataSignalAccess( top.dataOut_payload_200 );
      signalAccess[459] = new CDataSignalAccess( top.dataOut_payload_201 );
      signalAccess[460] = new CDataSignalAccess( top.dataOut_payload_202 );
      signalAccess[461] = new CDataSignalAccess( top.dataOut_payload_203 );
      signalAccess[462] = new CDataSignalAccess( top.dataOut_payload_204 );
      signalAccess[463] = new CDataSignalAccess( top.dataOut_payload_205 );
      signalAccess[464] = new CDataSignalAccess( top.dataOut_payload_206 );
      signalAccess[465] = new CDataSignalAccess( top.dataOut_payload_207 );
      signalAccess[466] = new CDataSignalAccess( top.dataOut_payload_208 );
      signalAccess[467] = new CDataSignalAccess( top.dataOut_payload_209 );
      signalAccess[468] = new CDataSignalAccess( top.dataOut_payload_210 );
      signalAccess[469] = new CDataSignalAccess( top.dataOut_payload_211 );
      signalAccess[470] = new CDataSignalAccess( top.dataOut_payload_212 );
      signalAccess[471] = new CDataSignalAccess( top.dataOut_payload_213 );
      signalAccess[472] = new CDataSignalAccess( top.dataOut_payload_214 );
      signalAccess[473] = new CDataSignalAccess( top.dataOut_payload_215 );
      signalAccess[474] = new CDataSignalAccess( top.dataOut_payload_216 );
      signalAccess[475] = new CDataSignalAccess( top.dataOut_payload_217 );
      signalAccess[476] = new CDataSignalAccess( top.dataOut_payload_218 );
      signalAccess[477] = new CDataSignalAccess( top.dataOut_payload_219 );
      signalAccess[478] = new CDataSignalAccess( top.dataOut_payload_220 );
      signalAccess[479] = new CDataSignalAccess( top.dataOut_payload_221 );
      signalAccess[480] = new CDataSignalAccess( top.dataOut_payload_222 );
      signalAccess[481] = new CDataSignalAccess( top.dataOut_payload_223 );
      signalAccess[482] = new CDataSignalAccess( top.dataOut_payload_224 );
      signalAccess[483] = new CDataSignalAccess( top.dataOut_payload_225 );
      signalAccess[484] = new CDataSignalAccess( top.dataOut_payload_226 );
      signalAccess[485] = new CDataSignalAccess( top.dataOut_payload_227 );
      signalAccess[486] = new CDataSignalAccess( top.dataOut_payload_228 );
      signalAccess[487] = new CDataSignalAccess( top.dataOut_payload_229 );
      signalAccess[488] = new CDataSignalAccess( top.dataOut_payload_230 );
      signalAccess[489] = new CDataSignalAccess( top.dataOut_payload_231 );
      signalAccess[490] = new CDataSignalAccess( top.dataOut_payload_232 );
      signalAccess[491] = new CDataSignalAccess( top.dataOut_payload_233 );
      signalAccess[492] = new CDataSignalAccess( top.dataOut_payload_234 );
      signalAccess[493] = new CDataSignalAccess( top.dataOut_payload_235 );
      signalAccess[494] = new CDataSignalAccess( top.dataOut_payload_236 );
      signalAccess[495] = new CDataSignalAccess( top.dataOut_payload_237 );
      signalAccess[496] = new CDataSignalAccess( top.dataOut_payload_238 );
      signalAccess[497] = new CDataSignalAccess( top.dataOut_payload_239 );
      signalAccess[498] = new CDataSignalAccess( top.dataOut_payload_240 );
      signalAccess[499] = new CDataSignalAccess( top.dataOut_payload_241 );
      signalAccess[500] = new CDataSignalAccess( top.dataOut_payload_242 );
      signalAccess[501] = new CDataSignalAccess( top.dataOut_payload_243 );
      signalAccess[502] = new CDataSignalAccess( top.dataOut_payload_244 );
      signalAccess[503] = new CDataSignalAccess( top.dataOut_payload_245 );
      signalAccess[504] = new CDataSignalAccess( top.dataOut_payload_246 );
      signalAccess[505] = new CDataSignalAccess( top.dataOut_payload_247 );
      signalAccess[506] = new CDataSignalAccess( top.dataOut_payload_248 );
      signalAccess[507] = new CDataSignalAccess( top.dataOut_payload_249 );
      signalAccess[508] = new CDataSignalAccess( top.dataOut_payload_250 );
      signalAccess[509] = new CDataSignalAccess( top.dataOut_payload_251 );
      signalAccess[510] = new CDataSignalAccess( top.dataOut_payload_252 );
      signalAccess[511] = new CDataSignalAccess( top.dataOut_payload_253 );
      signalAccess[512] = new CDataSignalAccess( top.dataOut_payload_254 );
      signalAccess[513] = new CDataSignalAccess( top.dataOut_payload_255 );
      signalAccess[514] = new CDataSignalAccess( top.clk );
      signalAccess[515] = new CDataSignalAccess( top.reset );

      #ifdef TRACE
      Verilated::traceEverOn(true);
      top.trace(&tfp, 99);
      tfp.open((std::string("/home/lqx/IdeaProjects/LicioLib/./simWorkspace/BitonicSortV2/") + name + ".vcd").c_str());
      #endif
      this->name = name;
    }

    virtual ~Wrapper_1(){
      for(int idx = 0;idx < 516;idx++){
          delete signalAccess[idx];
      }

      #ifdef TRACE
      if(waveEnabled) tfp.dump((vluint64_t)time);
      tfp.close();
      #endif
      #ifdef COVERAGE
      VerilatedCov::write((("/home/lqx/IdeaProjects/LicioLib/./simWorkspace/BitonicSortV2/") + name + ".dat").c_str());
      #endif
    }

};

double sc_time_stamp () {
  return simHandle1->time;
}


#ifdef __cplusplus
extern "C" {
#endif
#include <stdio.h>
#include <stdint.h>

#define API __attribute__((visibility("default")))


JNIEXPORT Wrapper_1 * API JNICALL Java_wrapper_1verilator_VerilatorNative_newHandle_11
  (JNIEnv * env, jobject obj, jstring name, jint seedValue){
    #if defined(_WIN32) && !defined(__CYGWIN__)
    srand(seedValue);
    #else
    srand48(seedValue);
    #endif
    Verilated::randReset(2);
    const char* ch = env->GetStringUTFChars(name, 0);
    Wrapper_1 *handle = new Wrapper_1(ch);
    env->ReleaseStringUTFChars(name, ch);
    return handle;
}

JNIEXPORT jboolean API JNICALL Java_wrapper_1verilator_VerilatorNative_eval_11
  (JNIEnv *, jobject, Wrapper_1 *handle){
   handle->top.eval();
   return Verilated::gotFinish();
}


JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_sleep_11
  (JNIEnv *, jobject, Wrapper_1 *handle, uint64_t cycles){
  #ifdef TRACE
  if(handle->waveEnabled) {
    handle->tfp.dump((vluint64_t)handle->time);
  }
  handle->timeCheck++;
  if(handle->timeCheck > 10000){
    handle->timeCheck = 0;
    high_resolution_clock::time_point timeNow = high_resolution_clock::now();
    duration<double, std::milli> time_span = timeNow - handle->lastFlushAt;
    if(time_span.count() > 1e3){
      handle->lastFlushAt = timeNow;
      handle->tfp.flush();
    }
  }
  #endif
  handle->time += cycles;
}

JNIEXPORT jlong API JNICALL Java_wrapper_1verilator_VerilatorNative_getU64_11
  (JNIEnv *, jobject, Wrapper_1 *handle, int id){
  return handle->signalAccess[id]->getU64();
}

JNIEXPORT jlong API JNICALL Java_wrapper_1verilator_VerilatorNative_getU64mem_11
  (JNIEnv *, jobject, Wrapper_1 *handle, int id, uint64_t index){
  return handle->signalAccess[id]->getU64_mem(index);
}

JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_setU64_11
  (JNIEnv *, jobject, Wrapper_1 *handle, int id, uint64_t value){
  handle->signalAccess[id]->setU64(value);
}

JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_setU64mem_11
  (JNIEnv *, jobject, Wrapper_1 *handle, int id, uint64_t value, uint64_t index){
  handle->signalAccess[id]->setU64_mem(value, index);
}

JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_deleteHandle_11
  (JNIEnv *, jobject, Wrapper_1 * handle){
  delete handle;
}

JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_getAU8_11
  (JNIEnv * env, jobject obj, Wrapper_1 * handle, jint id, jbyteArray value){
  handle->signalAccess[id]->getAU8(env, value);
}

JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_getAU8mem_11
  (JNIEnv * env, jobject obj, Wrapper_1 * handle, jint id, jbyteArray value, uint64_t index){
  handle->signalAccess[id]->getAU8_mem(env, value, index);
}

JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_setAU8_11
  (JNIEnv * env, jobject obj, Wrapper_1 * handle, jint id, jbyteArray value, jint length){
  handle->signalAccess[id]->setAU8(env, value, length);
}

JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_setAU8mem_11
  (JNIEnv * env, jobject obj, Wrapper_1 * handle, jint id, jbyteArray value, jint length, uint64_t index){
  handle->signalAccess[id]->setAU8_mem(env, value, length, index);
}

JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_enableWave_11
  (JNIEnv *, jobject, Wrapper_1 * handle){
  handle->waveEnabled = true;
}

JNIEXPORT void API JNICALL Java_wrapper_1verilator_VerilatorNative_disableWave_11
  (JNIEnv *, jobject, Wrapper_1 * handle){
  handle->waveEnabled = false;
}

#ifdef __cplusplus
}
#endif
     