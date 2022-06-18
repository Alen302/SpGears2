
#include <stdint.h>
#include <string>
#include <memory>
#include <jni.h>
#include <iostream>

#include "VarraySlice.h"
#ifdef TRACE
#include "verilated_fst_c.h"
#endif
#include "VarraySlice__Syms.h"

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
    VarraySlice top;
    ISignalAccess *signalAccess[913];
    #ifdef TRACE
	  VerilatedFstC tfp;
	  #endif
    string name;

    Wrapper_1(const char * name){
      simHandle1 = this;
      time = 0;
      timeCheck = 0;
      lastFlushAt = high_resolution_clock::now();
      waveEnabled = true;
      signalAccess[0] = new CDataSignalAccess( top.arraySlice->debug_0 );
      signalAccess[1] = new CDataSignalAccess( top.arraySlice->debug_1 );
      signalAccess[2] = new CDataSignalAccess( top.arraySlice->debug_2 );
      signalAccess[3] = new CDataSignalAccess( top.arraySlice->debug_3 );
      signalAccess[4] = new CDataSignalAccess( top.arraySlice->debug_4 );
      signalAccess[5] = new CDataSignalAccess( top.arraySlice->debug_5 );
      signalAccess[6] = new CDataSignalAccess( top.arraySlice->debug_6 );
      signalAccess[7] = new CDataSignalAccess( top.arraySlice->debug_7 );
      signalAccess[8] = new SDataSignalAccess( top.arraySlice->realValue_0 );
      signalAccess[9] = new SDataSignalAccess( top.arraySlice->realValue_0_1 );
      signalAccess[10] = new SDataSignalAccess( top.arraySlice->realValue_0_2 );
      signalAccess[11] = new SDataSignalAccess( top.arraySlice->realValue_0_3 );
      signalAccess[12] = new SDataSignalAccess( top.arraySlice->realValue_0_4 );
      signalAccess[13] = new SDataSignalAccess( top.arraySlice->realValue_0_5 );
      signalAccess[14] = new SDataSignalAccess( top.arraySlice->realValue_0_6 );
      signalAccess[15] = new SDataSignalAccess( top.arraySlice->realValue_0_7 );
      signalAccess[16] = new CDataSignalAccess( top.arraySlice->realValue1_0 );
      signalAccess[17] = new CDataSignalAccess( top.arraySlice->debug_0_1 );
      signalAccess[18] = new CDataSignalAccess( top.arraySlice->debug_1_1 );
      signalAccess[19] = new CDataSignalAccess( top.arraySlice->debug_2_1 );
      signalAccess[20] = new CDataSignalAccess( top.arraySlice->debug_3_1 );
      signalAccess[21] = new CDataSignalAccess( top.arraySlice->debug_4_1 );
      signalAccess[22] = new CDataSignalAccess( top.arraySlice->debug_5_1 );
      signalAccess[23] = new CDataSignalAccess( top.arraySlice->debug_6_1 );
      signalAccess[24] = new CDataSignalAccess( top.arraySlice->debug_7_1 );
      signalAccess[25] = new SDataSignalAccess( top.arraySlice->realValue_0_8 );
      signalAccess[26] = new SDataSignalAccess( top.arraySlice->realValue_0_9 );
      signalAccess[27] = new SDataSignalAccess( top.arraySlice->realValue_0_10 );
      signalAccess[28] = new SDataSignalAccess( top.arraySlice->realValue_0_11 );
      signalAccess[29] = new SDataSignalAccess( top.arraySlice->realValue_0_12 );
      signalAccess[30] = new SDataSignalAccess( top.arraySlice->realValue_0_13 );
      signalAccess[31] = new SDataSignalAccess( top.arraySlice->realValue_0_14 );
      signalAccess[32] = new SDataSignalAccess( top.arraySlice->realValue_0_15 );
      signalAccess[33] = new CDataSignalAccess( top.arraySlice->realValue1_0_1 );
      signalAccess[34] = new CDataSignalAccess( top.arraySlice->debug_0_2 );
      signalAccess[35] = new CDataSignalAccess( top.arraySlice->debug_1_2 );
      signalAccess[36] = new CDataSignalAccess( top.arraySlice->debug_2_2 );
      signalAccess[37] = new CDataSignalAccess( top.arraySlice->debug_3_2 );
      signalAccess[38] = new CDataSignalAccess( top.arraySlice->debug_4_2 );
      signalAccess[39] = new CDataSignalAccess( top.arraySlice->debug_5_2 );
      signalAccess[40] = new CDataSignalAccess( top.arraySlice->debug_6_2 );
      signalAccess[41] = new CDataSignalAccess( top.arraySlice->debug_7_2 );
      signalAccess[42] = new SDataSignalAccess( top.arraySlice->realValue_0_16 );
      signalAccess[43] = new SDataSignalAccess( top.arraySlice->realValue_0_17 );
      signalAccess[44] = new SDataSignalAccess( top.arraySlice->realValue_0_18 );
      signalAccess[45] = new SDataSignalAccess( top.arraySlice->realValue_0_19 );
      signalAccess[46] = new SDataSignalAccess( top.arraySlice->realValue_0_20 );
      signalAccess[47] = new SDataSignalAccess( top.arraySlice->realValue_0_21 );
      signalAccess[48] = new SDataSignalAccess( top.arraySlice->realValue_0_22 );
      signalAccess[49] = new SDataSignalAccess( top.arraySlice->realValue_0_23 );
      signalAccess[50] = new CDataSignalAccess( top.arraySlice->realValue1_0_2 );
      signalAccess[51] = new CDataSignalAccess( top.arraySlice->debug_0_3 );
      signalAccess[52] = new CDataSignalAccess( top.arraySlice->debug_1_3 );
      signalAccess[53] = new CDataSignalAccess( top.arraySlice->debug_2_3 );
      signalAccess[54] = new CDataSignalAccess( top.arraySlice->debug_3_3 );
      signalAccess[55] = new CDataSignalAccess( top.arraySlice->debug_4_3 );
      signalAccess[56] = new CDataSignalAccess( top.arraySlice->debug_5_3 );
      signalAccess[57] = new CDataSignalAccess( top.arraySlice->debug_6_3 );
      signalAccess[58] = new CDataSignalAccess( top.arraySlice->debug_7_3 );
      signalAccess[59] = new SDataSignalAccess( top.arraySlice->realValue_0_24 );
      signalAccess[60] = new SDataSignalAccess( top.arraySlice->realValue_0_25 );
      signalAccess[61] = new SDataSignalAccess( top.arraySlice->realValue_0_26 );
      signalAccess[62] = new SDataSignalAccess( top.arraySlice->realValue_0_27 );
      signalAccess[63] = new SDataSignalAccess( top.arraySlice->realValue_0_28 );
      signalAccess[64] = new SDataSignalAccess( top.arraySlice->realValue_0_29 );
      signalAccess[65] = new SDataSignalAccess( top.arraySlice->realValue_0_30 );
      signalAccess[66] = new SDataSignalAccess( top.arraySlice->realValue_0_31 );
      signalAccess[67] = new CDataSignalAccess( top.arraySlice->realValue1_0_3 );
      signalAccess[68] = new CDataSignalAccess( top.arraySlice->debug_0_4 );
      signalAccess[69] = new CDataSignalAccess( top.arraySlice->debug_1_4 );
      signalAccess[70] = new CDataSignalAccess( top.arraySlice->debug_2_4 );
      signalAccess[71] = new CDataSignalAccess( top.arraySlice->debug_3_4 );
      signalAccess[72] = new CDataSignalAccess( top.arraySlice->debug_4_4 );
      signalAccess[73] = new CDataSignalAccess( top.arraySlice->debug_5_4 );
      signalAccess[74] = new CDataSignalAccess( top.arraySlice->debug_6_4 );
      signalAccess[75] = new CDataSignalAccess( top.arraySlice->debug_7_4 );
      signalAccess[76] = new SDataSignalAccess( top.arraySlice->realValue_0_32 );
      signalAccess[77] = new SDataSignalAccess( top.arraySlice->realValue_0_33 );
      signalAccess[78] = new SDataSignalAccess( top.arraySlice->realValue_0_34 );
      signalAccess[79] = new SDataSignalAccess( top.arraySlice->realValue_0_35 );
      signalAccess[80] = new SDataSignalAccess( top.arraySlice->realValue_0_36 );
      signalAccess[81] = new SDataSignalAccess( top.arraySlice->realValue_0_37 );
      signalAccess[82] = new SDataSignalAccess( top.arraySlice->realValue_0_38 );
      signalAccess[83] = new SDataSignalAccess( top.arraySlice->realValue_0_39 );
      signalAccess[84] = new CDataSignalAccess( top.arraySlice->realValue1_0_4 );
      signalAccess[85] = new CDataSignalAccess( top.arraySlice->debug_0_5 );
      signalAccess[86] = new CDataSignalAccess( top.arraySlice->debug_1_5 );
      signalAccess[87] = new CDataSignalAccess( top.arraySlice->debug_2_5 );
      signalAccess[88] = new CDataSignalAccess( top.arraySlice->debug_3_5 );
      signalAccess[89] = new CDataSignalAccess( top.arraySlice->debug_4_5 );
      signalAccess[90] = new CDataSignalAccess( top.arraySlice->debug_5_5 );
      signalAccess[91] = new CDataSignalAccess( top.arraySlice->debug_6_5 );
      signalAccess[92] = new CDataSignalAccess( top.arraySlice->debug_7_5 );
      signalAccess[93] = new SDataSignalAccess( top.arraySlice->realValue_0_40 );
      signalAccess[94] = new SDataSignalAccess( top.arraySlice->realValue_0_41 );
      signalAccess[95] = new SDataSignalAccess( top.arraySlice->realValue_0_42 );
      signalAccess[96] = new SDataSignalAccess( top.arraySlice->realValue_0_43 );
      signalAccess[97] = new SDataSignalAccess( top.arraySlice->realValue_0_44 );
      signalAccess[98] = new SDataSignalAccess( top.arraySlice->realValue_0_45 );
      signalAccess[99] = new SDataSignalAccess( top.arraySlice->realValue_0_46 );
      signalAccess[100] = new SDataSignalAccess( top.arraySlice->realValue_0_47 );
      signalAccess[101] = new CDataSignalAccess( top.arraySlice->realValue1_0_5 );
      signalAccess[102] = new CDataSignalAccess( top.arraySlice->debug_0_6 );
      signalAccess[103] = new CDataSignalAccess( top.arraySlice->debug_1_6 );
      signalAccess[104] = new CDataSignalAccess( top.arraySlice->debug_2_6 );
      signalAccess[105] = new CDataSignalAccess( top.arraySlice->debug_3_6 );
      signalAccess[106] = new CDataSignalAccess( top.arraySlice->debug_4_6 );
      signalAccess[107] = new CDataSignalAccess( top.arraySlice->debug_5_6 );
      signalAccess[108] = new CDataSignalAccess( top.arraySlice->debug_6_6 );
      signalAccess[109] = new CDataSignalAccess( top.arraySlice->debug_7_6 );
      signalAccess[110] = new SDataSignalAccess( top.arraySlice->realValue_0_48 );
      signalAccess[111] = new SDataSignalAccess( top.arraySlice->realValue_0_49 );
      signalAccess[112] = new SDataSignalAccess( top.arraySlice->realValue_0_50 );
      signalAccess[113] = new SDataSignalAccess( top.arraySlice->realValue_0_51 );
      signalAccess[114] = new SDataSignalAccess( top.arraySlice->realValue_0_52 );
      signalAccess[115] = new SDataSignalAccess( top.arraySlice->realValue_0_53 );
      signalAccess[116] = new SDataSignalAccess( top.arraySlice->realValue_0_54 );
      signalAccess[117] = new SDataSignalAccess( top.arraySlice->realValue_0_55 );
      signalAccess[118] = new CDataSignalAccess( top.arraySlice->realValue1_0_6 );
      signalAccess[119] = new CDataSignalAccess( top.arraySlice->debug_0_7 );
      signalAccess[120] = new CDataSignalAccess( top.arraySlice->debug_1_7 );
      signalAccess[121] = new CDataSignalAccess( top.arraySlice->debug_2_7 );
      signalAccess[122] = new CDataSignalAccess( top.arraySlice->debug_3_7 );
      signalAccess[123] = new CDataSignalAccess( top.arraySlice->debug_4_7 );
      signalAccess[124] = new CDataSignalAccess( top.arraySlice->debug_5_7 );
      signalAccess[125] = new CDataSignalAccess( top.arraySlice->debug_6_7 );
      signalAccess[126] = new CDataSignalAccess( top.arraySlice->debug_7_7 );
      signalAccess[127] = new SDataSignalAccess( top.arraySlice->realValue_0_56 );
      signalAccess[128] = new SDataSignalAccess( top.arraySlice->realValue_0_57 );
      signalAccess[129] = new SDataSignalAccess( top.arraySlice->realValue_0_58 );
      signalAccess[130] = new SDataSignalAccess( top.arraySlice->realValue_0_59 );
      signalAccess[131] = new SDataSignalAccess( top.arraySlice->realValue_0_60 );
      signalAccess[132] = new SDataSignalAccess( top.arraySlice->realValue_0_61 );
      signalAccess[133] = new SDataSignalAccess( top.arraySlice->realValue_0_62 );
      signalAccess[134] = new SDataSignalAccess( top.arraySlice->realValue_0_63 );
      signalAccess[135] = new CDataSignalAccess( top.arraySlice->realValue1_0_7 );
      signalAccess[136] = new CDataSignalAccess( top.arraySlice->debug_0_8 );
      signalAccess[137] = new CDataSignalAccess( top.arraySlice->debug_1_8 );
      signalAccess[138] = new CDataSignalAccess( top.arraySlice->debug_2_8 );
      signalAccess[139] = new CDataSignalAccess( top.arraySlice->debug_3_8 );
      signalAccess[140] = new CDataSignalAccess( top.arraySlice->debug_4_8 );
      signalAccess[141] = new CDataSignalAccess( top.arraySlice->debug_5_8 );
      signalAccess[142] = new CDataSignalAccess( top.arraySlice->debug_6_8 );
      signalAccess[143] = new CDataSignalAccess( top.arraySlice->debug_7_8 );
      signalAccess[144] = new SDataSignalAccess( top.arraySlice->realValue_0_64 );
      signalAccess[145] = new SDataSignalAccess( top.arraySlice->realValue_0_65 );
      signalAccess[146] = new SDataSignalAccess( top.arraySlice->realValue_0_66 );
      signalAccess[147] = new SDataSignalAccess( top.arraySlice->realValue_0_67 );
      signalAccess[148] = new SDataSignalAccess( top.arraySlice->realValue_0_68 );
      signalAccess[149] = new SDataSignalAccess( top.arraySlice->realValue_0_69 );
      signalAccess[150] = new SDataSignalAccess( top.arraySlice->realValue_0_70 );
      signalAccess[151] = new SDataSignalAccess( top.arraySlice->realValue_0_71 );
      signalAccess[152] = new CDataSignalAccess( top.arraySlice->realValue1_0_8 );
      signalAccess[153] = new CDataSignalAccess( top.arraySlice->debug_0_9 );
      signalAccess[154] = new CDataSignalAccess( top.arraySlice->debug_1_9 );
      signalAccess[155] = new CDataSignalAccess( top.arraySlice->debug_2_9 );
      signalAccess[156] = new CDataSignalAccess( top.arraySlice->debug_3_9 );
      signalAccess[157] = new CDataSignalAccess( top.arraySlice->debug_4_9 );
      signalAccess[158] = new CDataSignalAccess( top.arraySlice->debug_5_9 );
      signalAccess[159] = new CDataSignalAccess( top.arraySlice->debug_6_9 );
      signalAccess[160] = new CDataSignalAccess( top.arraySlice->debug_7_9 );
      signalAccess[161] = new SDataSignalAccess( top.arraySlice->realValue_0_72 );
      signalAccess[162] = new SDataSignalAccess( top.arraySlice->realValue_0_73 );
      signalAccess[163] = new SDataSignalAccess( top.arraySlice->realValue_0_74 );
      signalAccess[164] = new SDataSignalAccess( top.arraySlice->realValue_0_75 );
      signalAccess[165] = new SDataSignalAccess( top.arraySlice->realValue_0_76 );
      signalAccess[166] = new SDataSignalAccess( top.arraySlice->realValue_0_77 );
      signalAccess[167] = new SDataSignalAccess( top.arraySlice->realValue_0_78 );
      signalAccess[168] = new SDataSignalAccess( top.arraySlice->realValue_0_79 );
      signalAccess[169] = new CDataSignalAccess( top.arraySlice->realValue1_0_9 );
      signalAccess[170] = new CDataSignalAccess( top.arraySlice->debug_0_10 );
      signalAccess[171] = new CDataSignalAccess( top.arraySlice->debug_1_10 );
      signalAccess[172] = new CDataSignalAccess( top.arraySlice->debug_2_10 );
      signalAccess[173] = new CDataSignalAccess( top.arraySlice->debug_3_10 );
      signalAccess[174] = new CDataSignalAccess( top.arraySlice->debug_4_10 );
      signalAccess[175] = new CDataSignalAccess( top.arraySlice->debug_5_10 );
      signalAccess[176] = new CDataSignalAccess( top.arraySlice->debug_6_10 );
      signalAccess[177] = new CDataSignalAccess( top.arraySlice->debug_7_10 );
      signalAccess[178] = new SDataSignalAccess( top.arraySlice->realValue_0_80 );
      signalAccess[179] = new SDataSignalAccess( top.arraySlice->realValue_0_81 );
      signalAccess[180] = new SDataSignalAccess( top.arraySlice->realValue_0_82 );
      signalAccess[181] = new SDataSignalAccess( top.arraySlice->realValue_0_83 );
      signalAccess[182] = new SDataSignalAccess( top.arraySlice->realValue_0_84 );
      signalAccess[183] = new SDataSignalAccess( top.arraySlice->realValue_0_85 );
      signalAccess[184] = new SDataSignalAccess( top.arraySlice->realValue_0_86 );
      signalAccess[185] = new SDataSignalAccess( top.arraySlice->realValue_0_87 );
      signalAccess[186] = new CDataSignalAccess( top.arraySlice->realValue1_0_10 );
      signalAccess[187] = new CDataSignalAccess( top.arraySlice->debug_0_11 );
      signalAccess[188] = new CDataSignalAccess( top.arraySlice->debug_1_11 );
      signalAccess[189] = new CDataSignalAccess( top.arraySlice->debug_2_11 );
      signalAccess[190] = new CDataSignalAccess( top.arraySlice->debug_3_11 );
      signalAccess[191] = new CDataSignalAccess( top.arraySlice->debug_4_11 );
      signalAccess[192] = new CDataSignalAccess( top.arraySlice->debug_5_11 );
      signalAccess[193] = new CDataSignalAccess( top.arraySlice->debug_6_11 );
      signalAccess[194] = new CDataSignalAccess( top.arraySlice->debug_7_11 );
      signalAccess[195] = new SDataSignalAccess( top.arraySlice->realValue_0_88 );
      signalAccess[196] = new SDataSignalAccess( top.arraySlice->realValue_0_89 );
      signalAccess[197] = new SDataSignalAccess( top.arraySlice->realValue_0_90 );
      signalAccess[198] = new SDataSignalAccess( top.arraySlice->realValue_0_91 );
      signalAccess[199] = new SDataSignalAccess( top.arraySlice->realValue_0_92 );
      signalAccess[200] = new SDataSignalAccess( top.arraySlice->realValue_0_93 );
      signalAccess[201] = new SDataSignalAccess( top.arraySlice->realValue_0_94 );
      signalAccess[202] = new SDataSignalAccess( top.arraySlice->realValue_0_95 );
      signalAccess[203] = new CDataSignalAccess( top.arraySlice->realValue1_0_11 );
      signalAccess[204] = new CDataSignalAccess( top.arraySlice->debug_0_12 );
      signalAccess[205] = new CDataSignalAccess( top.arraySlice->debug_1_12 );
      signalAccess[206] = new CDataSignalAccess( top.arraySlice->debug_2_12 );
      signalAccess[207] = new CDataSignalAccess( top.arraySlice->debug_3_12 );
      signalAccess[208] = new CDataSignalAccess( top.arraySlice->debug_4_12 );
      signalAccess[209] = new CDataSignalAccess( top.arraySlice->debug_5_12 );
      signalAccess[210] = new CDataSignalAccess( top.arraySlice->debug_6_12 );
      signalAccess[211] = new CDataSignalAccess( top.arraySlice->debug_7_12 );
      signalAccess[212] = new SDataSignalAccess( top.arraySlice->realValue_0_96 );
      signalAccess[213] = new SDataSignalAccess( top.arraySlice->realValue_0_97 );
      signalAccess[214] = new SDataSignalAccess( top.arraySlice->realValue_0_98 );
      signalAccess[215] = new SDataSignalAccess( top.arraySlice->realValue_0_99 );
      signalAccess[216] = new SDataSignalAccess( top.arraySlice->realValue_0_100 );
      signalAccess[217] = new SDataSignalAccess( top.arraySlice->realValue_0_101 );
      signalAccess[218] = new SDataSignalAccess( top.arraySlice->realValue_0_102 );
      signalAccess[219] = new SDataSignalAccess( top.arraySlice->realValue_0_103 );
      signalAccess[220] = new CDataSignalAccess( top.arraySlice->realValue1_0_12 );
      signalAccess[221] = new CDataSignalAccess( top.arraySlice->debug_0_13 );
      signalAccess[222] = new CDataSignalAccess( top.arraySlice->debug_1_13 );
      signalAccess[223] = new CDataSignalAccess( top.arraySlice->debug_2_13 );
      signalAccess[224] = new CDataSignalAccess( top.arraySlice->debug_3_13 );
      signalAccess[225] = new CDataSignalAccess( top.arraySlice->debug_4_13 );
      signalAccess[226] = new CDataSignalAccess( top.arraySlice->debug_5_13 );
      signalAccess[227] = new CDataSignalAccess( top.arraySlice->debug_6_13 );
      signalAccess[228] = new CDataSignalAccess( top.arraySlice->debug_7_13 );
      signalAccess[229] = new SDataSignalAccess( top.arraySlice->realValue_0_104 );
      signalAccess[230] = new SDataSignalAccess( top.arraySlice->realValue_0_105 );
      signalAccess[231] = new SDataSignalAccess( top.arraySlice->realValue_0_106 );
      signalAccess[232] = new SDataSignalAccess( top.arraySlice->realValue_0_107 );
      signalAccess[233] = new SDataSignalAccess( top.arraySlice->realValue_0_108 );
      signalAccess[234] = new SDataSignalAccess( top.arraySlice->realValue_0_109 );
      signalAccess[235] = new SDataSignalAccess( top.arraySlice->realValue_0_110 );
      signalAccess[236] = new SDataSignalAccess( top.arraySlice->realValue_0_111 );
      signalAccess[237] = new CDataSignalAccess( top.arraySlice->realValue1_0_13 );
      signalAccess[238] = new CDataSignalAccess( top.arraySlice->debug_0_14 );
      signalAccess[239] = new CDataSignalAccess( top.arraySlice->debug_1_14 );
      signalAccess[240] = new CDataSignalAccess( top.arraySlice->debug_2_14 );
      signalAccess[241] = new CDataSignalAccess( top.arraySlice->debug_3_14 );
      signalAccess[242] = new CDataSignalAccess( top.arraySlice->debug_4_14 );
      signalAccess[243] = new CDataSignalAccess( top.arraySlice->debug_5_14 );
      signalAccess[244] = new CDataSignalAccess( top.arraySlice->debug_6_14 );
      signalAccess[245] = new CDataSignalAccess( top.arraySlice->debug_7_14 );
      signalAccess[246] = new SDataSignalAccess( top.arraySlice->realValue_0_112 );
      signalAccess[247] = new SDataSignalAccess( top.arraySlice->realValue_0_113 );
      signalAccess[248] = new SDataSignalAccess( top.arraySlice->realValue_0_114 );
      signalAccess[249] = new SDataSignalAccess( top.arraySlice->realValue_0_115 );
      signalAccess[250] = new SDataSignalAccess( top.arraySlice->realValue_0_116 );
      signalAccess[251] = new SDataSignalAccess( top.arraySlice->realValue_0_117 );
      signalAccess[252] = new SDataSignalAccess( top.arraySlice->realValue_0_118 );
      signalAccess[253] = new SDataSignalAccess( top.arraySlice->realValue_0_119 );
      signalAccess[254] = new CDataSignalAccess( top.arraySlice->realValue1_0_14 );
      signalAccess[255] = new CDataSignalAccess( top.arraySlice->debug_0_15 );
      signalAccess[256] = new CDataSignalAccess( top.arraySlice->debug_1_15 );
      signalAccess[257] = new CDataSignalAccess( top.arraySlice->debug_2_15 );
      signalAccess[258] = new CDataSignalAccess( top.arraySlice->debug_3_15 );
      signalAccess[259] = new CDataSignalAccess( top.arraySlice->debug_4_15 );
      signalAccess[260] = new CDataSignalAccess( top.arraySlice->debug_5_15 );
      signalAccess[261] = new CDataSignalAccess( top.arraySlice->debug_6_15 );
      signalAccess[262] = new CDataSignalAccess( top.arraySlice->debug_7_15 );
      signalAccess[263] = new SDataSignalAccess( top.arraySlice->realValue_0_120 );
      signalAccess[264] = new SDataSignalAccess( top.arraySlice->realValue_0_121 );
      signalAccess[265] = new SDataSignalAccess( top.arraySlice->realValue_0_122 );
      signalAccess[266] = new SDataSignalAccess( top.arraySlice->realValue_0_123 );
      signalAccess[267] = new SDataSignalAccess( top.arraySlice->realValue_0_124 );
      signalAccess[268] = new SDataSignalAccess( top.arraySlice->realValue_0_125 );
      signalAccess[269] = new SDataSignalAccess( top.arraySlice->realValue_0_126 );
      signalAccess[270] = new SDataSignalAccess( top.arraySlice->realValue_0_127 );
      signalAccess[271] = new CDataSignalAccess( top.arraySlice->realValue1_0_15 );
      signalAccess[272] = new CDataSignalAccess( top.arraySlice->debug_0_16 );
      signalAccess[273] = new CDataSignalAccess( top.arraySlice->debug_1_16 );
      signalAccess[274] = new CDataSignalAccess( top.arraySlice->debug_2_16 );
      signalAccess[275] = new CDataSignalAccess( top.arraySlice->debug_3_16 );
      signalAccess[276] = new CDataSignalAccess( top.arraySlice->debug_4_16 );
      signalAccess[277] = new CDataSignalAccess( top.arraySlice->debug_5_16 );
      signalAccess[278] = new CDataSignalAccess( top.arraySlice->debug_6_16 );
      signalAccess[279] = new CDataSignalAccess( top.arraySlice->debug_7_16 );
      signalAccess[280] = new SDataSignalAccess( top.arraySlice->realValue_0_128 );
      signalAccess[281] = new SDataSignalAccess( top.arraySlice->realValue_0_129 );
      signalAccess[282] = new SDataSignalAccess( top.arraySlice->realValue_0_130 );
      signalAccess[283] = new SDataSignalAccess( top.arraySlice->realValue_0_131 );
      signalAccess[284] = new SDataSignalAccess( top.arraySlice->realValue_0_132 );
      signalAccess[285] = new SDataSignalAccess( top.arraySlice->realValue_0_133 );
      signalAccess[286] = new SDataSignalAccess( top.arraySlice->realValue_0_134 );
      signalAccess[287] = new SDataSignalAccess( top.arraySlice->realValue_0_135 );
      signalAccess[288] = new CDataSignalAccess( top.arraySlice->realValue1_0_16 );
      signalAccess[289] = new CDataSignalAccess( top.arraySlice->debug_0_17 );
      signalAccess[290] = new CDataSignalAccess( top.arraySlice->debug_1_17 );
      signalAccess[291] = new CDataSignalAccess( top.arraySlice->debug_2_17 );
      signalAccess[292] = new CDataSignalAccess( top.arraySlice->debug_3_17 );
      signalAccess[293] = new CDataSignalAccess( top.arraySlice->debug_4_17 );
      signalAccess[294] = new CDataSignalAccess( top.arraySlice->debug_5_17 );
      signalAccess[295] = new CDataSignalAccess( top.arraySlice->debug_6_17 );
      signalAccess[296] = new CDataSignalAccess( top.arraySlice->debug_7_17 );
      signalAccess[297] = new SDataSignalAccess( top.arraySlice->realValue_0_136 );
      signalAccess[298] = new SDataSignalAccess( top.arraySlice->realValue_0_137 );
      signalAccess[299] = new SDataSignalAccess( top.arraySlice->realValue_0_138 );
      signalAccess[300] = new SDataSignalAccess( top.arraySlice->realValue_0_139 );
      signalAccess[301] = new SDataSignalAccess( top.arraySlice->realValue_0_140 );
      signalAccess[302] = new SDataSignalAccess( top.arraySlice->realValue_0_141 );
      signalAccess[303] = new SDataSignalAccess( top.arraySlice->realValue_0_142 );
      signalAccess[304] = new SDataSignalAccess( top.arraySlice->realValue_0_143 );
      signalAccess[305] = new CDataSignalAccess( top.arraySlice->realValue1_0_17 );
      signalAccess[306] = new CDataSignalAccess( top.arraySlice->debug_0_18 );
      signalAccess[307] = new CDataSignalAccess( top.arraySlice->debug_1_18 );
      signalAccess[308] = new CDataSignalAccess( top.arraySlice->debug_2_18 );
      signalAccess[309] = new CDataSignalAccess( top.arraySlice->debug_3_18 );
      signalAccess[310] = new CDataSignalAccess( top.arraySlice->debug_4_18 );
      signalAccess[311] = new CDataSignalAccess( top.arraySlice->debug_5_18 );
      signalAccess[312] = new CDataSignalAccess( top.arraySlice->debug_6_18 );
      signalAccess[313] = new CDataSignalAccess( top.arraySlice->debug_7_18 );
      signalAccess[314] = new SDataSignalAccess( top.arraySlice->realValue_0_144 );
      signalAccess[315] = new SDataSignalAccess( top.arraySlice->realValue_0_145 );
      signalAccess[316] = new SDataSignalAccess( top.arraySlice->realValue_0_146 );
      signalAccess[317] = new SDataSignalAccess( top.arraySlice->realValue_0_147 );
      signalAccess[318] = new SDataSignalAccess( top.arraySlice->realValue_0_148 );
      signalAccess[319] = new SDataSignalAccess( top.arraySlice->realValue_0_149 );
      signalAccess[320] = new SDataSignalAccess( top.arraySlice->realValue_0_150 );
      signalAccess[321] = new SDataSignalAccess( top.arraySlice->realValue_0_151 );
      signalAccess[322] = new CDataSignalAccess( top.arraySlice->realValue1_0_18 );
      signalAccess[323] = new CDataSignalAccess( top.arraySlice->debug_0_19 );
      signalAccess[324] = new CDataSignalAccess( top.arraySlice->debug_1_19 );
      signalAccess[325] = new CDataSignalAccess( top.arraySlice->debug_2_19 );
      signalAccess[326] = new CDataSignalAccess( top.arraySlice->debug_3_19 );
      signalAccess[327] = new CDataSignalAccess( top.arraySlice->debug_4_19 );
      signalAccess[328] = new CDataSignalAccess( top.arraySlice->debug_5_19 );
      signalAccess[329] = new CDataSignalAccess( top.arraySlice->debug_6_19 );
      signalAccess[330] = new CDataSignalAccess( top.arraySlice->debug_7_19 );
      signalAccess[331] = new SDataSignalAccess( top.arraySlice->realValue_0_152 );
      signalAccess[332] = new SDataSignalAccess( top.arraySlice->realValue_0_153 );
      signalAccess[333] = new SDataSignalAccess( top.arraySlice->realValue_0_154 );
      signalAccess[334] = new SDataSignalAccess( top.arraySlice->realValue_0_155 );
      signalAccess[335] = new SDataSignalAccess( top.arraySlice->realValue_0_156 );
      signalAccess[336] = new SDataSignalAccess( top.arraySlice->realValue_0_157 );
      signalAccess[337] = new SDataSignalAccess( top.arraySlice->realValue_0_158 );
      signalAccess[338] = new SDataSignalAccess( top.arraySlice->realValue_0_159 );
      signalAccess[339] = new CDataSignalAccess( top.arraySlice->realValue1_0_19 );
      signalAccess[340] = new CDataSignalAccess( top.arraySlice->debug_0_20 );
      signalAccess[341] = new CDataSignalAccess( top.arraySlice->debug_1_20 );
      signalAccess[342] = new CDataSignalAccess( top.arraySlice->debug_2_20 );
      signalAccess[343] = new CDataSignalAccess( top.arraySlice->debug_3_20 );
      signalAccess[344] = new CDataSignalAccess( top.arraySlice->debug_4_20 );
      signalAccess[345] = new CDataSignalAccess( top.arraySlice->debug_5_20 );
      signalAccess[346] = new CDataSignalAccess( top.arraySlice->debug_6_20 );
      signalAccess[347] = new CDataSignalAccess( top.arraySlice->debug_7_20 );
      signalAccess[348] = new SDataSignalAccess( top.arraySlice->realValue_0_160 );
      signalAccess[349] = new SDataSignalAccess( top.arraySlice->realValue_0_161 );
      signalAccess[350] = new SDataSignalAccess( top.arraySlice->realValue_0_162 );
      signalAccess[351] = new SDataSignalAccess( top.arraySlice->realValue_0_163 );
      signalAccess[352] = new SDataSignalAccess( top.arraySlice->realValue_0_164 );
      signalAccess[353] = new SDataSignalAccess( top.arraySlice->realValue_0_165 );
      signalAccess[354] = new SDataSignalAccess( top.arraySlice->realValue_0_166 );
      signalAccess[355] = new SDataSignalAccess( top.arraySlice->realValue_0_167 );
      signalAccess[356] = new CDataSignalAccess( top.arraySlice->realValue1_0_20 );
      signalAccess[357] = new CDataSignalAccess( top.arraySlice->debug_0_21 );
      signalAccess[358] = new CDataSignalAccess( top.arraySlice->debug_1_21 );
      signalAccess[359] = new CDataSignalAccess( top.arraySlice->debug_2_21 );
      signalAccess[360] = new CDataSignalAccess( top.arraySlice->debug_3_21 );
      signalAccess[361] = new CDataSignalAccess( top.arraySlice->debug_4_21 );
      signalAccess[362] = new CDataSignalAccess( top.arraySlice->debug_5_21 );
      signalAccess[363] = new CDataSignalAccess( top.arraySlice->debug_6_21 );
      signalAccess[364] = new CDataSignalAccess( top.arraySlice->debug_7_21 );
      signalAccess[365] = new SDataSignalAccess( top.arraySlice->realValue_0_168 );
      signalAccess[366] = new SDataSignalAccess( top.arraySlice->realValue_0_169 );
      signalAccess[367] = new SDataSignalAccess( top.arraySlice->realValue_0_170 );
      signalAccess[368] = new SDataSignalAccess( top.arraySlice->realValue_0_171 );
      signalAccess[369] = new SDataSignalAccess( top.arraySlice->realValue_0_172 );
      signalAccess[370] = new SDataSignalAccess( top.arraySlice->realValue_0_173 );
      signalAccess[371] = new SDataSignalAccess( top.arraySlice->realValue_0_174 );
      signalAccess[372] = new SDataSignalAccess( top.arraySlice->realValue_0_175 );
      signalAccess[373] = new CDataSignalAccess( top.arraySlice->realValue1_0_21 );
      signalAccess[374] = new CDataSignalAccess( top.arraySlice->debug_0_22 );
      signalAccess[375] = new CDataSignalAccess( top.arraySlice->debug_1_22 );
      signalAccess[376] = new CDataSignalAccess( top.arraySlice->debug_2_22 );
      signalAccess[377] = new CDataSignalAccess( top.arraySlice->debug_3_22 );
      signalAccess[378] = new CDataSignalAccess( top.arraySlice->debug_4_22 );
      signalAccess[379] = new CDataSignalAccess( top.arraySlice->debug_5_22 );
      signalAccess[380] = new CDataSignalAccess( top.arraySlice->debug_6_22 );
      signalAccess[381] = new CDataSignalAccess( top.arraySlice->debug_7_22 );
      signalAccess[382] = new SDataSignalAccess( top.arraySlice->realValue_0_176 );
      signalAccess[383] = new SDataSignalAccess( top.arraySlice->realValue_0_177 );
      signalAccess[384] = new SDataSignalAccess( top.arraySlice->realValue_0_178 );
      signalAccess[385] = new SDataSignalAccess( top.arraySlice->realValue_0_179 );
      signalAccess[386] = new SDataSignalAccess( top.arraySlice->realValue_0_180 );
      signalAccess[387] = new SDataSignalAccess( top.arraySlice->realValue_0_181 );
      signalAccess[388] = new SDataSignalAccess( top.arraySlice->realValue_0_182 );
      signalAccess[389] = new SDataSignalAccess( top.arraySlice->realValue_0_183 );
      signalAccess[390] = new CDataSignalAccess( top.arraySlice->realValue1_0_22 );
      signalAccess[391] = new CDataSignalAccess( top.arraySlice->debug_0_23 );
      signalAccess[392] = new CDataSignalAccess( top.arraySlice->debug_1_23 );
      signalAccess[393] = new CDataSignalAccess( top.arraySlice->debug_2_23 );
      signalAccess[394] = new CDataSignalAccess( top.arraySlice->debug_3_23 );
      signalAccess[395] = new CDataSignalAccess( top.arraySlice->debug_4_23 );
      signalAccess[396] = new CDataSignalAccess( top.arraySlice->debug_5_23 );
      signalAccess[397] = new CDataSignalAccess( top.arraySlice->debug_6_23 );
      signalAccess[398] = new CDataSignalAccess( top.arraySlice->debug_7_23 );
      signalAccess[399] = new SDataSignalAccess( top.arraySlice->realValue_0_184 );
      signalAccess[400] = new SDataSignalAccess( top.arraySlice->realValue_0_185 );
      signalAccess[401] = new SDataSignalAccess( top.arraySlice->realValue_0_186 );
      signalAccess[402] = new SDataSignalAccess( top.arraySlice->realValue_0_187 );
      signalAccess[403] = new SDataSignalAccess( top.arraySlice->realValue_0_188 );
      signalAccess[404] = new SDataSignalAccess( top.arraySlice->realValue_0_189 );
      signalAccess[405] = new SDataSignalAccess( top.arraySlice->realValue_0_190 );
      signalAccess[406] = new SDataSignalAccess( top.arraySlice->realValue_0_191 );
      signalAccess[407] = new CDataSignalAccess( top.arraySlice->realValue1_0_23 );
      signalAccess[408] = new CDataSignalAccess( top.arraySlice->debug_0_24 );
      signalAccess[409] = new CDataSignalAccess( top.arraySlice->debug_1_24 );
      signalAccess[410] = new CDataSignalAccess( top.arraySlice->debug_2_24 );
      signalAccess[411] = new CDataSignalAccess( top.arraySlice->debug_3_24 );
      signalAccess[412] = new CDataSignalAccess( top.arraySlice->debug_4_24 );
      signalAccess[413] = new CDataSignalAccess( top.arraySlice->debug_5_24 );
      signalAccess[414] = new CDataSignalAccess( top.arraySlice->debug_6_24 );
      signalAccess[415] = new CDataSignalAccess( top.arraySlice->debug_7_24 );
      signalAccess[416] = new SDataSignalAccess( top.arraySlice->realValue_0_192 );
      signalAccess[417] = new SDataSignalAccess( top.arraySlice->realValue_0_193 );
      signalAccess[418] = new SDataSignalAccess( top.arraySlice->realValue_0_194 );
      signalAccess[419] = new SDataSignalAccess( top.arraySlice->realValue_0_195 );
      signalAccess[420] = new SDataSignalAccess( top.arraySlice->realValue_0_196 );
      signalAccess[421] = new SDataSignalAccess( top.arraySlice->realValue_0_197 );
      signalAccess[422] = new SDataSignalAccess( top.arraySlice->realValue_0_198 );
      signalAccess[423] = new SDataSignalAccess( top.arraySlice->realValue_0_199 );
      signalAccess[424] = new CDataSignalAccess( top.arraySlice->debug_0_25 );
      signalAccess[425] = new CDataSignalAccess( top.arraySlice->debug_1_25 );
      signalAccess[426] = new CDataSignalAccess( top.arraySlice->debug_2_25 );
      signalAccess[427] = new CDataSignalAccess( top.arraySlice->debug_3_25 );
      signalAccess[428] = new CDataSignalAccess( top.arraySlice->debug_4_25 );
      signalAccess[429] = new CDataSignalAccess( top.arraySlice->debug_5_25 );
      signalAccess[430] = new CDataSignalAccess( top.arraySlice->debug_6_25 );
      signalAccess[431] = new CDataSignalAccess( top.arraySlice->debug_7_25 );
      signalAccess[432] = new SDataSignalAccess( top.arraySlice->realValue_0_200 );
      signalAccess[433] = new SDataSignalAccess( top.arraySlice->realValue_0_201 );
      signalAccess[434] = new SDataSignalAccess( top.arraySlice->realValue_0_202 );
      signalAccess[435] = new SDataSignalAccess( top.arraySlice->realValue_0_203 );
      signalAccess[436] = new SDataSignalAccess( top.arraySlice->realValue_0_204 );
      signalAccess[437] = new SDataSignalAccess( top.arraySlice->realValue_0_205 );
      signalAccess[438] = new SDataSignalAccess( top.arraySlice->realValue_0_206 );
      signalAccess[439] = new SDataSignalAccess( top.arraySlice->realValue_0_207 );
      signalAccess[440] = new CDataSignalAccess( top.arraySlice->realValue1_0_24 );
      signalAccess[441] = new CDataSignalAccess( top.arraySlice->debug_0_26 );
      signalAccess[442] = new CDataSignalAccess( top.arraySlice->debug_1_26 );
      signalAccess[443] = new CDataSignalAccess( top.arraySlice->debug_2_26 );
      signalAccess[444] = new CDataSignalAccess( top.arraySlice->debug_3_26 );
      signalAccess[445] = new CDataSignalAccess( top.arraySlice->debug_4_26 );
      signalAccess[446] = new CDataSignalAccess( top.arraySlice->debug_5_26 );
      signalAccess[447] = new CDataSignalAccess( top.arraySlice->debug_6_26 );
      signalAccess[448] = new CDataSignalAccess( top.arraySlice->debug_7_26 );
      signalAccess[449] = new SDataSignalAccess( top.arraySlice->realValue_0_208 );
      signalAccess[450] = new SDataSignalAccess( top.arraySlice->realValue_0_209 );
      signalAccess[451] = new SDataSignalAccess( top.arraySlice->realValue_0_210 );
      signalAccess[452] = new SDataSignalAccess( top.arraySlice->realValue_0_211 );
      signalAccess[453] = new SDataSignalAccess( top.arraySlice->realValue_0_212 );
      signalAccess[454] = new SDataSignalAccess( top.arraySlice->realValue_0_213 );
      signalAccess[455] = new SDataSignalAccess( top.arraySlice->realValue_0_214 );
      signalAccess[456] = new SDataSignalAccess( top.arraySlice->realValue_0_215 );
      signalAccess[457] = new CDataSignalAccess( top.arraySlice->realValue1_0_25 );
      signalAccess[458] = new CDataSignalAccess( top.arraySlice->debug_0_27 );
      signalAccess[459] = new CDataSignalAccess( top.arraySlice->debug_1_27 );
      signalAccess[460] = new CDataSignalAccess( top.arraySlice->debug_2_27 );
      signalAccess[461] = new CDataSignalAccess( top.arraySlice->debug_3_27 );
      signalAccess[462] = new CDataSignalAccess( top.arraySlice->debug_4_27 );
      signalAccess[463] = new CDataSignalAccess( top.arraySlice->debug_5_27 );
      signalAccess[464] = new CDataSignalAccess( top.arraySlice->debug_6_27 );
      signalAccess[465] = new CDataSignalAccess( top.arraySlice->debug_7_27 );
      signalAccess[466] = new SDataSignalAccess( top.arraySlice->realValue_0_216 );
      signalAccess[467] = new SDataSignalAccess( top.arraySlice->realValue_0_217 );
      signalAccess[468] = new SDataSignalAccess( top.arraySlice->realValue_0_218 );
      signalAccess[469] = new SDataSignalAccess( top.arraySlice->realValue_0_219 );
      signalAccess[470] = new SDataSignalAccess( top.arraySlice->realValue_0_220 );
      signalAccess[471] = new SDataSignalAccess( top.arraySlice->realValue_0_221 );
      signalAccess[472] = new SDataSignalAccess( top.arraySlice->realValue_0_222 );
      signalAccess[473] = new SDataSignalAccess( top.arraySlice->realValue_0_223 );
      signalAccess[474] = new CDataSignalAccess( top.arraySlice->realValue1_0_26 );
      signalAccess[475] = new CDataSignalAccess( top.arraySlice->debug_0_28 );
      signalAccess[476] = new CDataSignalAccess( top.arraySlice->debug_1_28 );
      signalAccess[477] = new CDataSignalAccess( top.arraySlice->debug_2_28 );
      signalAccess[478] = new CDataSignalAccess( top.arraySlice->debug_3_28 );
      signalAccess[479] = new CDataSignalAccess( top.arraySlice->debug_4_28 );
      signalAccess[480] = new CDataSignalAccess( top.arraySlice->debug_5_28 );
      signalAccess[481] = new CDataSignalAccess( top.arraySlice->debug_6_28 );
      signalAccess[482] = new CDataSignalAccess( top.arraySlice->debug_7_28 );
      signalAccess[483] = new SDataSignalAccess( top.arraySlice->realValue_0_224 );
      signalAccess[484] = new SDataSignalAccess( top.arraySlice->realValue_0_225 );
      signalAccess[485] = new SDataSignalAccess( top.arraySlice->realValue_0_226 );
      signalAccess[486] = new SDataSignalAccess( top.arraySlice->realValue_0_227 );
      signalAccess[487] = new SDataSignalAccess( top.arraySlice->realValue_0_228 );
      signalAccess[488] = new SDataSignalAccess( top.arraySlice->realValue_0_229 );
      signalAccess[489] = new SDataSignalAccess( top.arraySlice->realValue_0_230 );
      signalAccess[490] = new SDataSignalAccess( top.arraySlice->realValue_0_231 );
      signalAccess[491] = new CDataSignalAccess( top.arraySlice->realValue1_0_27 );
      signalAccess[492] = new CDataSignalAccess( top.arraySlice->debug_0_29 );
      signalAccess[493] = new CDataSignalAccess( top.arraySlice->debug_1_29 );
      signalAccess[494] = new CDataSignalAccess( top.arraySlice->debug_2_29 );
      signalAccess[495] = new CDataSignalAccess( top.arraySlice->debug_3_29 );
      signalAccess[496] = new CDataSignalAccess( top.arraySlice->debug_4_29 );
      signalAccess[497] = new CDataSignalAccess( top.arraySlice->debug_5_29 );
      signalAccess[498] = new CDataSignalAccess( top.arraySlice->debug_6_29 );
      signalAccess[499] = new CDataSignalAccess( top.arraySlice->debug_7_29 );
      signalAccess[500] = new SDataSignalAccess( top.arraySlice->realValue_0_232 );
      signalAccess[501] = new SDataSignalAccess( top.arraySlice->realValue_0_233 );
      signalAccess[502] = new SDataSignalAccess( top.arraySlice->realValue_0_234 );
      signalAccess[503] = new SDataSignalAccess( top.arraySlice->realValue_0_235 );
      signalAccess[504] = new SDataSignalAccess( top.arraySlice->realValue_0_236 );
      signalAccess[505] = new SDataSignalAccess( top.arraySlice->realValue_0_237 );
      signalAccess[506] = new SDataSignalAccess( top.arraySlice->realValue_0_238 );
      signalAccess[507] = new SDataSignalAccess( top.arraySlice->realValue_0_239 );
      signalAccess[508] = new CDataSignalAccess( top.arraySlice->realValue1_0_28 );
      signalAccess[509] = new CDataSignalAccess( top.arraySlice->debug_0_30 );
      signalAccess[510] = new CDataSignalAccess( top.arraySlice->debug_1_30 );
      signalAccess[511] = new CDataSignalAccess( top.arraySlice->debug_2_30 );
      signalAccess[512] = new CDataSignalAccess( top.arraySlice->debug_3_30 );
      signalAccess[513] = new CDataSignalAccess( top.arraySlice->debug_4_30 );
      signalAccess[514] = new CDataSignalAccess( top.arraySlice->debug_5_30 );
      signalAccess[515] = new CDataSignalAccess( top.arraySlice->debug_6_30 );
      signalAccess[516] = new CDataSignalAccess( top.arraySlice->debug_7_30 );
      signalAccess[517] = new SDataSignalAccess( top.arraySlice->realValue_0_240 );
      signalAccess[518] = new SDataSignalAccess( top.arraySlice->realValue_0_241 );
      signalAccess[519] = new SDataSignalAccess( top.arraySlice->realValue_0_242 );
      signalAccess[520] = new SDataSignalAccess( top.arraySlice->realValue_0_243 );
      signalAccess[521] = new SDataSignalAccess( top.arraySlice->realValue_0_244 );
      signalAccess[522] = new SDataSignalAccess( top.arraySlice->realValue_0_245 );
      signalAccess[523] = new SDataSignalAccess( top.arraySlice->realValue_0_246 );
      signalAccess[524] = new SDataSignalAccess( top.arraySlice->realValue_0_247 );
      signalAccess[525] = new CDataSignalAccess( top.arraySlice->realValue1_0_29 );
      signalAccess[526] = new CDataSignalAccess( top.arraySlice->debug_0_31 );
      signalAccess[527] = new CDataSignalAccess( top.arraySlice->debug_1_31 );
      signalAccess[528] = new CDataSignalAccess( top.arraySlice->debug_2_31 );
      signalAccess[529] = new CDataSignalAccess( top.arraySlice->debug_3_31 );
      signalAccess[530] = new CDataSignalAccess( top.arraySlice->debug_4_31 );
      signalAccess[531] = new CDataSignalAccess( top.arraySlice->debug_5_31 );
      signalAccess[532] = new CDataSignalAccess( top.arraySlice->debug_6_31 );
      signalAccess[533] = new CDataSignalAccess( top.arraySlice->debug_7_31 );
      signalAccess[534] = new SDataSignalAccess( top.arraySlice->realValue_0_248 );
      signalAccess[535] = new SDataSignalAccess( top.arraySlice->realValue_0_249 );
      signalAccess[536] = new SDataSignalAccess( top.arraySlice->realValue_0_250 );
      signalAccess[537] = new SDataSignalAccess( top.arraySlice->realValue_0_251 );
      signalAccess[538] = new SDataSignalAccess( top.arraySlice->realValue_0_252 );
      signalAccess[539] = new SDataSignalAccess( top.arraySlice->realValue_0_253 );
      signalAccess[540] = new SDataSignalAccess( top.arraySlice->realValue_0_254 );
      signalAccess[541] = new SDataSignalAccess( top.arraySlice->realValue_0_255 );
      signalAccess[542] = new CDataSignalAccess( top.arraySlice->realValue1_0_30 );
      signalAccess[543] = new CDataSignalAccess( top.arraySlice->debug_0_32 );
      signalAccess[544] = new CDataSignalAccess( top.arraySlice->debug_1_32 );
      signalAccess[545] = new CDataSignalAccess( top.arraySlice->debug_2_32 );
      signalAccess[546] = new CDataSignalAccess( top.arraySlice->debug_3_32 );
      signalAccess[547] = new CDataSignalAccess( top.arraySlice->debug_4_32 );
      signalAccess[548] = new CDataSignalAccess( top.arraySlice->debug_5_32 );
      signalAccess[549] = new CDataSignalAccess( top.arraySlice->debug_6_32 );
      signalAccess[550] = new CDataSignalAccess( top.arraySlice->debug_7_32 );
      signalAccess[551] = new SDataSignalAccess( top.arraySlice->realValue_0_256 );
      signalAccess[552] = new SDataSignalAccess( top.arraySlice->realValue_0_257 );
      signalAccess[553] = new SDataSignalAccess( top.arraySlice->realValue_0_258 );
      signalAccess[554] = new SDataSignalAccess( top.arraySlice->realValue_0_259 );
      signalAccess[555] = new SDataSignalAccess( top.arraySlice->realValue_0_260 );
      signalAccess[556] = new SDataSignalAccess( top.arraySlice->realValue_0_261 );
      signalAccess[557] = new SDataSignalAccess( top.arraySlice->realValue_0_262 );
      signalAccess[558] = new SDataSignalAccess( top.arraySlice->realValue_0_263 );
      signalAccess[559] = new CDataSignalAccess( top.arraySlice->realValue1_0_31 );
      signalAccess[560] = new CDataSignalAccess( top.arraySlice->debug_0_33 );
      signalAccess[561] = new CDataSignalAccess( top.arraySlice->debug_1_33 );
      signalAccess[562] = new CDataSignalAccess( top.arraySlice->debug_2_33 );
      signalAccess[563] = new CDataSignalAccess( top.arraySlice->debug_3_33 );
      signalAccess[564] = new CDataSignalAccess( top.arraySlice->debug_4_33 );
      signalAccess[565] = new CDataSignalAccess( top.arraySlice->debug_5_33 );
      signalAccess[566] = new CDataSignalAccess( top.arraySlice->debug_6_33 );
      signalAccess[567] = new CDataSignalAccess( top.arraySlice->debug_7_33 );
      signalAccess[568] = new SDataSignalAccess( top.arraySlice->realValue_0_264 );
      signalAccess[569] = new SDataSignalAccess( top.arraySlice->realValue_0_265 );
      signalAccess[570] = new SDataSignalAccess( top.arraySlice->realValue_0_266 );
      signalAccess[571] = new SDataSignalAccess( top.arraySlice->realValue_0_267 );
      signalAccess[572] = new SDataSignalAccess( top.arraySlice->realValue_0_268 );
      signalAccess[573] = new SDataSignalAccess( top.arraySlice->realValue_0_269 );
      signalAccess[574] = new SDataSignalAccess( top.arraySlice->realValue_0_270 );
      signalAccess[575] = new SDataSignalAccess( top.arraySlice->realValue_0_271 );
      signalAccess[576] = new CDataSignalAccess( top.arraySlice->realValue1_0_32 );
      signalAccess[577] = new CDataSignalAccess( top.arraySlice->debug_0_34 );
      signalAccess[578] = new CDataSignalAccess( top.arraySlice->debug_1_34 );
      signalAccess[579] = new CDataSignalAccess( top.arraySlice->debug_2_34 );
      signalAccess[580] = new CDataSignalAccess( top.arraySlice->debug_3_34 );
      signalAccess[581] = new CDataSignalAccess( top.arraySlice->debug_4_34 );
      signalAccess[582] = new CDataSignalAccess( top.arraySlice->debug_5_34 );
      signalAccess[583] = new CDataSignalAccess( top.arraySlice->debug_6_34 );
      signalAccess[584] = new CDataSignalAccess( top.arraySlice->debug_7_34 );
      signalAccess[585] = new SDataSignalAccess( top.arraySlice->realValue_0_272 );
      signalAccess[586] = new SDataSignalAccess( top.arraySlice->realValue_0_273 );
      signalAccess[587] = new SDataSignalAccess( top.arraySlice->realValue_0_274 );
      signalAccess[588] = new SDataSignalAccess( top.arraySlice->realValue_0_275 );
      signalAccess[589] = new SDataSignalAccess( top.arraySlice->realValue_0_276 );
      signalAccess[590] = new SDataSignalAccess( top.arraySlice->realValue_0_277 );
      signalAccess[591] = new SDataSignalAccess( top.arraySlice->realValue_0_278 );
      signalAccess[592] = new SDataSignalAccess( top.arraySlice->realValue_0_279 );
      signalAccess[593] = new CDataSignalAccess( top.arraySlice->realValue1_0_33 );
      signalAccess[594] = new CDataSignalAccess( top.arraySlice->debug_0_35 );
      signalAccess[595] = new CDataSignalAccess( top.arraySlice->debug_1_35 );
      signalAccess[596] = new CDataSignalAccess( top.arraySlice->debug_2_35 );
      signalAccess[597] = new CDataSignalAccess( top.arraySlice->debug_3_35 );
      signalAccess[598] = new CDataSignalAccess( top.arraySlice->debug_4_35 );
      signalAccess[599] = new CDataSignalAccess( top.arraySlice->debug_5_35 );
      signalAccess[600] = new CDataSignalAccess( top.arraySlice->debug_6_35 );
      signalAccess[601] = new CDataSignalAccess( top.arraySlice->debug_7_35 );
      signalAccess[602] = new SDataSignalAccess( top.arraySlice->realValue_0_280 );
      signalAccess[603] = new SDataSignalAccess( top.arraySlice->realValue_0_281 );
      signalAccess[604] = new SDataSignalAccess( top.arraySlice->realValue_0_282 );
      signalAccess[605] = new SDataSignalAccess( top.arraySlice->realValue_0_283 );
      signalAccess[606] = new SDataSignalAccess( top.arraySlice->realValue_0_284 );
      signalAccess[607] = new SDataSignalAccess( top.arraySlice->realValue_0_285 );
      signalAccess[608] = new SDataSignalAccess( top.arraySlice->realValue_0_286 );
      signalAccess[609] = new SDataSignalAccess( top.arraySlice->realValue_0_287 );
      signalAccess[610] = new CDataSignalAccess( top.arraySlice->realValue1_0_34 );
      signalAccess[611] = new CDataSignalAccess( top.arraySlice->debug_0_36 );
      signalAccess[612] = new CDataSignalAccess( top.arraySlice->debug_1_36 );
      signalAccess[613] = new CDataSignalAccess( top.arraySlice->debug_2_36 );
      signalAccess[614] = new CDataSignalAccess( top.arraySlice->debug_3_36 );
      signalAccess[615] = new CDataSignalAccess( top.arraySlice->debug_4_36 );
      signalAccess[616] = new CDataSignalAccess( top.arraySlice->debug_5_36 );
      signalAccess[617] = new CDataSignalAccess( top.arraySlice->debug_6_36 );
      signalAccess[618] = new CDataSignalAccess( top.arraySlice->debug_7_36 );
      signalAccess[619] = new SDataSignalAccess( top.arraySlice->realValue_0_288 );
      signalAccess[620] = new SDataSignalAccess( top.arraySlice->realValue_0_289 );
      signalAccess[621] = new SDataSignalAccess( top.arraySlice->realValue_0_290 );
      signalAccess[622] = new SDataSignalAccess( top.arraySlice->realValue_0_291 );
      signalAccess[623] = new SDataSignalAccess( top.arraySlice->realValue_0_292 );
      signalAccess[624] = new SDataSignalAccess( top.arraySlice->realValue_0_293 );
      signalAccess[625] = new SDataSignalAccess( top.arraySlice->realValue_0_294 );
      signalAccess[626] = new SDataSignalAccess( top.arraySlice->realValue_0_295 );
      signalAccess[627] = new CDataSignalAccess( top.arraySlice->realValue1_0_35 );
      signalAccess[628] = new CDataSignalAccess( top.arraySlice->debug_0_37 );
      signalAccess[629] = new CDataSignalAccess( top.arraySlice->debug_1_37 );
      signalAccess[630] = new CDataSignalAccess( top.arraySlice->debug_2_37 );
      signalAccess[631] = new CDataSignalAccess( top.arraySlice->debug_3_37 );
      signalAccess[632] = new CDataSignalAccess( top.arraySlice->debug_4_37 );
      signalAccess[633] = new CDataSignalAccess( top.arraySlice->debug_5_37 );
      signalAccess[634] = new CDataSignalAccess( top.arraySlice->debug_6_37 );
      signalAccess[635] = new CDataSignalAccess( top.arraySlice->debug_7_37 );
      signalAccess[636] = new SDataSignalAccess( top.arraySlice->realValue_0_296 );
      signalAccess[637] = new SDataSignalAccess( top.arraySlice->realValue_0_297 );
      signalAccess[638] = new SDataSignalAccess( top.arraySlice->realValue_0_298 );
      signalAccess[639] = new SDataSignalAccess( top.arraySlice->realValue_0_299 );
      signalAccess[640] = new SDataSignalAccess( top.arraySlice->realValue_0_300 );
      signalAccess[641] = new SDataSignalAccess( top.arraySlice->realValue_0_301 );
      signalAccess[642] = new SDataSignalAccess( top.arraySlice->realValue_0_302 );
      signalAccess[643] = new SDataSignalAccess( top.arraySlice->realValue_0_303 );
      signalAccess[644] = new CDataSignalAccess( top.arraySlice->realValue1_0_36 );
      signalAccess[645] = new CDataSignalAccess( top.arraySlice->debug_0_38 );
      signalAccess[646] = new CDataSignalAccess( top.arraySlice->debug_1_38 );
      signalAccess[647] = new CDataSignalAccess( top.arraySlice->debug_2_38 );
      signalAccess[648] = new CDataSignalAccess( top.arraySlice->debug_3_38 );
      signalAccess[649] = new CDataSignalAccess( top.arraySlice->debug_4_38 );
      signalAccess[650] = new CDataSignalAccess( top.arraySlice->debug_5_38 );
      signalAccess[651] = new CDataSignalAccess( top.arraySlice->debug_6_38 );
      signalAccess[652] = new CDataSignalAccess( top.arraySlice->debug_7_38 );
      signalAccess[653] = new SDataSignalAccess( top.arraySlice->realValue_0_304 );
      signalAccess[654] = new SDataSignalAccess( top.arraySlice->realValue_0_305 );
      signalAccess[655] = new SDataSignalAccess( top.arraySlice->realValue_0_306 );
      signalAccess[656] = new SDataSignalAccess( top.arraySlice->realValue_0_307 );
      signalAccess[657] = new SDataSignalAccess( top.arraySlice->realValue_0_308 );
      signalAccess[658] = new SDataSignalAccess( top.arraySlice->realValue_0_309 );
      signalAccess[659] = new SDataSignalAccess( top.arraySlice->realValue_0_310 );
      signalAccess[660] = new SDataSignalAccess( top.arraySlice->realValue_0_311 );
      signalAccess[661] = new CDataSignalAccess( top.arraySlice->realValue1_0_37 );
      signalAccess[662] = new CDataSignalAccess( top.arraySlice->debug_0_39 );
      signalAccess[663] = new CDataSignalAccess( top.arraySlice->debug_1_39 );
      signalAccess[664] = new CDataSignalAccess( top.arraySlice->debug_2_39 );
      signalAccess[665] = new CDataSignalAccess( top.arraySlice->debug_3_39 );
      signalAccess[666] = new CDataSignalAccess( top.arraySlice->debug_4_39 );
      signalAccess[667] = new CDataSignalAccess( top.arraySlice->debug_5_39 );
      signalAccess[668] = new CDataSignalAccess( top.arraySlice->debug_6_39 );
      signalAccess[669] = new CDataSignalAccess( top.arraySlice->debug_7_39 );
      signalAccess[670] = new SDataSignalAccess( top.arraySlice->realValue_0_312 );
      signalAccess[671] = new SDataSignalAccess( top.arraySlice->realValue_0_313 );
      signalAccess[672] = new SDataSignalAccess( top.arraySlice->realValue_0_314 );
      signalAccess[673] = new SDataSignalAccess( top.arraySlice->realValue_0_315 );
      signalAccess[674] = new SDataSignalAccess( top.arraySlice->realValue_0_316 );
      signalAccess[675] = new SDataSignalAccess( top.arraySlice->realValue_0_317 );
      signalAccess[676] = new SDataSignalAccess( top.arraySlice->realValue_0_318 );
      signalAccess[677] = new SDataSignalAccess( top.arraySlice->realValue_0_319 );
      signalAccess[678] = new CDataSignalAccess( top.arraySlice->realValue1_0_38 );
      signalAccess[679] = new CDataSignalAccess( top.arraySlice->debug_0_40 );
      signalAccess[680] = new CDataSignalAccess( top.arraySlice->debug_1_40 );
      signalAccess[681] = new CDataSignalAccess( top.arraySlice->debug_2_40 );
      signalAccess[682] = new CDataSignalAccess( top.arraySlice->debug_3_40 );
      signalAccess[683] = new CDataSignalAccess( top.arraySlice->debug_4_40 );
      signalAccess[684] = new CDataSignalAccess( top.arraySlice->debug_5_40 );
      signalAccess[685] = new CDataSignalAccess( top.arraySlice->debug_6_40 );
      signalAccess[686] = new CDataSignalAccess( top.arraySlice->debug_7_40 );
      signalAccess[687] = new SDataSignalAccess( top.arraySlice->realValue_0_320 );
      signalAccess[688] = new SDataSignalAccess( top.arraySlice->realValue_0_321 );
      signalAccess[689] = new SDataSignalAccess( top.arraySlice->realValue_0_322 );
      signalAccess[690] = new SDataSignalAccess( top.arraySlice->realValue_0_323 );
      signalAccess[691] = new SDataSignalAccess( top.arraySlice->realValue_0_324 );
      signalAccess[692] = new SDataSignalAccess( top.arraySlice->realValue_0_325 );
      signalAccess[693] = new SDataSignalAccess( top.arraySlice->realValue_0_326 );
      signalAccess[694] = new SDataSignalAccess( top.arraySlice->realValue_0_327 );
      signalAccess[695] = new CDataSignalAccess( top.arraySlice->realValue1_0_39 );
      signalAccess[696] = new CDataSignalAccess( top.arraySlice->debug_0_41 );
      signalAccess[697] = new CDataSignalAccess( top.arraySlice->debug_1_41 );
      signalAccess[698] = new CDataSignalAccess( top.arraySlice->debug_2_41 );
      signalAccess[699] = new CDataSignalAccess( top.arraySlice->debug_3_41 );
      signalAccess[700] = new CDataSignalAccess( top.arraySlice->debug_4_41 );
      signalAccess[701] = new CDataSignalAccess( top.arraySlice->debug_5_41 );
      signalAccess[702] = new CDataSignalAccess( top.arraySlice->debug_6_41 );
      signalAccess[703] = new CDataSignalAccess( top.arraySlice->debug_7_41 );
      signalAccess[704] = new SDataSignalAccess( top.arraySlice->realValue_0_328 );
      signalAccess[705] = new SDataSignalAccess( top.arraySlice->realValue_0_329 );
      signalAccess[706] = new SDataSignalAccess( top.arraySlice->realValue_0_330 );
      signalAccess[707] = new SDataSignalAccess( top.arraySlice->realValue_0_331 );
      signalAccess[708] = new SDataSignalAccess( top.arraySlice->realValue_0_332 );
      signalAccess[709] = new SDataSignalAccess( top.arraySlice->realValue_0_333 );
      signalAccess[710] = new SDataSignalAccess( top.arraySlice->realValue_0_334 );
      signalAccess[711] = new SDataSignalAccess( top.arraySlice->realValue_0_335 );
      signalAccess[712] = new CDataSignalAccess( top.arraySlice->realValue1_0_40 );
      signalAccess[713] = new CDataSignalAccess( top.arraySlice->debug_0_42 );
      signalAccess[714] = new CDataSignalAccess( top.arraySlice->debug_1_42 );
      signalAccess[715] = new CDataSignalAccess( top.arraySlice->debug_2_42 );
      signalAccess[716] = new CDataSignalAccess( top.arraySlice->debug_3_42 );
      signalAccess[717] = new CDataSignalAccess( top.arraySlice->debug_4_42 );
      signalAccess[718] = new CDataSignalAccess( top.arraySlice->debug_5_42 );
      signalAccess[719] = new CDataSignalAccess( top.arraySlice->debug_6_42 );
      signalAccess[720] = new CDataSignalAccess( top.arraySlice->debug_7_42 );
      signalAccess[721] = new SDataSignalAccess( top.arraySlice->realValue_0_336 );
      signalAccess[722] = new SDataSignalAccess( top.arraySlice->realValue_0_337 );
      signalAccess[723] = new SDataSignalAccess( top.arraySlice->realValue_0_338 );
      signalAccess[724] = new SDataSignalAccess( top.arraySlice->realValue_0_339 );
      signalAccess[725] = new SDataSignalAccess( top.arraySlice->realValue_0_340 );
      signalAccess[726] = new SDataSignalAccess( top.arraySlice->realValue_0_341 );
      signalAccess[727] = new SDataSignalAccess( top.arraySlice->realValue_0_342 );
      signalAccess[728] = new SDataSignalAccess( top.arraySlice->realValue_0_343 );
      signalAccess[729] = new CDataSignalAccess( top.arraySlice->realValue1_0_41 );
      signalAccess[730] = new CDataSignalAccess( top.arraySlice->debug_0_43 );
      signalAccess[731] = new CDataSignalAccess( top.arraySlice->debug_1_43 );
      signalAccess[732] = new CDataSignalAccess( top.arraySlice->debug_2_43 );
      signalAccess[733] = new CDataSignalAccess( top.arraySlice->debug_3_43 );
      signalAccess[734] = new CDataSignalAccess( top.arraySlice->debug_4_43 );
      signalAccess[735] = new CDataSignalAccess( top.arraySlice->debug_5_43 );
      signalAccess[736] = new CDataSignalAccess( top.arraySlice->debug_6_43 );
      signalAccess[737] = new CDataSignalAccess( top.arraySlice->debug_7_43 );
      signalAccess[738] = new SDataSignalAccess( top.arraySlice->realValue_0_344 );
      signalAccess[739] = new SDataSignalAccess( top.arraySlice->realValue_0_345 );
      signalAccess[740] = new SDataSignalAccess( top.arraySlice->realValue_0_346 );
      signalAccess[741] = new SDataSignalAccess( top.arraySlice->realValue_0_347 );
      signalAccess[742] = new SDataSignalAccess( top.arraySlice->realValue_0_348 );
      signalAccess[743] = new SDataSignalAccess( top.arraySlice->realValue_0_349 );
      signalAccess[744] = new SDataSignalAccess( top.arraySlice->realValue_0_350 );
      signalAccess[745] = new SDataSignalAccess( top.arraySlice->realValue_0_351 );
      signalAccess[746] = new CDataSignalAccess( top.arraySlice->realValue1_0_42 );
      signalAccess[747] = new CDataSignalAccess( top.arraySlice->debug_0_44 );
      signalAccess[748] = new CDataSignalAccess( top.arraySlice->debug_1_44 );
      signalAccess[749] = new CDataSignalAccess( top.arraySlice->debug_2_44 );
      signalAccess[750] = new CDataSignalAccess( top.arraySlice->debug_3_44 );
      signalAccess[751] = new CDataSignalAccess( top.arraySlice->debug_4_44 );
      signalAccess[752] = new CDataSignalAccess( top.arraySlice->debug_5_44 );
      signalAccess[753] = new CDataSignalAccess( top.arraySlice->debug_6_44 );
      signalAccess[754] = new CDataSignalAccess( top.arraySlice->debug_7_44 );
      signalAccess[755] = new SDataSignalAccess( top.arraySlice->realValue_0_352 );
      signalAccess[756] = new SDataSignalAccess( top.arraySlice->realValue_0_353 );
      signalAccess[757] = new SDataSignalAccess( top.arraySlice->realValue_0_354 );
      signalAccess[758] = new SDataSignalAccess( top.arraySlice->realValue_0_355 );
      signalAccess[759] = new SDataSignalAccess( top.arraySlice->realValue_0_356 );
      signalAccess[760] = new SDataSignalAccess( top.arraySlice->realValue_0_357 );
      signalAccess[761] = new SDataSignalAccess( top.arraySlice->realValue_0_358 );
      signalAccess[762] = new SDataSignalAccess( top.arraySlice->realValue_0_359 );
      signalAccess[763] = new CDataSignalAccess( top.arraySlice->realValue1_0_43 );
      signalAccess[764] = new CDataSignalAccess( top.arraySlice->debug_0_45 );
      signalAccess[765] = new CDataSignalAccess( top.arraySlice->debug_1_45 );
      signalAccess[766] = new CDataSignalAccess( top.arraySlice->debug_2_45 );
      signalAccess[767] = new CDataSignalAccess( top.arraySlice->debug_3_45 );
      signalAccess[768] = new CDataSignalAccess( top.arraySlice->debug_4_45 );
      signalAccess[769] = new CDataSignalAccess( top.arraySlice->debug_5_45 );
      signalAccess[770] = new CDataSignalAccess( top.arraySlice->debug_6_45 );
      signalAccess[771] = new CDataSignalAccess( top.arraySlice->debug_7_45 );
      signalAccess[772] = new SDataSignalAccess( top.arraySlice->realValue_0_360 );
      signalAccess[773] = new SDataSignalAccess( top.arraySlice->realValue_0_361 );
      signalAccess[774] = new SDataSignalAccess( top.arraySlice->realValue_0_362 );
      signalAccess[775] = new SDataSignalAccess( top.arraySlice->realValue_0_363 );
      signalAccess[776] = new SDataSignalAccess( top.arraySlice->realValue_0_364 );
      signalAccess[777] = new SDataSignalAccess( top.arraySlice->realValue_0_365 );
      signalAccess[778] = new SDataSignalAccess( top.arraySlice->realValue_0_366 );
      signalAccess[779] = new SDataSignalAccess( top.arraySlice->realValue_0_367 );
      signalAccess[780] = new CDataSignalAccess( top.arraySlice->realValue1_0_44 );
      signalAccess[781] = new CDataSignalAccess( top.arraySlice->debug_0_46 );
      signalAccess[782] = new CDataSignalAccess( top.arraySlice->debug_1_46 );
      signalAccess[783] = new CDataSignalAccess( top.arraySlice->debug_2_46 );
      signalAccess[784] = new CDataSignalAccess( top.arraySlice->debug_3_46 );
      signalAccess[785] = new CDataSignalAccess( top.arraySlice->debug_4_46 );
      signalAccess[786] = new CDataSignalAccess( top.arraySlice->debug_5_46 );
      signalAccess[787] = new CDataSignalAccess( top.arraySlice->debug_6_46 );
      signalAccess[788] = new CDataSignalAccess( top.arraySlice->debug_7_46 );
      signalAccess[789] = new SDataSignalAccess( top.arraySlice->realValue_0_368 );
      signalAccess[790] = new SDataSignalAccess( top.arraySlice->realValue_0_369 );
      signalAccess[791] = new SDataSignalAccess( top.arraySlice->realValue_0_370 );
      signalAccess[792] = new SDataSignalAccess( top.arraySlice->realValue_0_371 );
      signalAccess[793] = new SDataSignalAccess( top.arraySlice->realValue_0_372 );
      signalAccess[794] = new SDataSignalAccess( top.arraySlice->realValue_0_373 );
      signalAccess[795] = new SDataSignalAccess( top.arraySlice->realValue_0_374 );
      signalAccess[796] = new SDataSignalAccess( top.arraySlice->realValue_0_375 );
      signalAccess[797] = new CDataSignalAccess( top.arraySlice->realValue1_0_45 );
      signalAccess[798] = new CDataSignalAccess( top.arraySlice->debug_0_47 );
      signalAccess[799] = new CDataSignalAccess( top.arraySlice->debug_1_47 );
      signalAccess[800] = new CDataSignalAccess( top.arraySlice->debug_2_47 );
      signalAccess[801] = new CDataSignalAccess( top.arraySlice->debug_3_47 );
      signalAccess[802] = new CDataSignalAccess( top.arraySlice->debug_4_47 );
      signalAccess[803] = new CDataSignalAccess( top.arraySlice->debug_5_47 );
      signalAccess[804] = new CDataSignalAccess( top.arraySlice->debug_6_47 );
      signalAccess[805] = new CDataSignalAccess( top.arraySlice->debug_7_47 );
      signalAccess[806] = new SDataSignalAccess( top.arraySlice->realValue_0_376 );
      signalAccess[807] = new SDataSignalAccess( top.arraySlice->realValue_0_377 );
      signalAccess[808] = new SDataSignalAccess( top.arraySlice->realValue_0_378 );
      signalAccess[809] = new SDataSignalAccess( top.arraySlice->realValue_0_379 );
      signalAccess[810] = new SDataSignalAccess( top.arraySlice->realValue_0_380 );
      signalAccess[811] = new SDataSignalAccess( top.arraySlice->realValue_0_381 );
      signalAccess[812] = new SDataSignalAccess( top.arraySlice->realValue_0_382 );
      signalAccess[813] = new SDataSignalAccess( top.arraySlice->realValue_0_383 );
      signalAccess[814] = new CDataSignalAccess( top.arraySlice->realValue1_0_46 );
      signalAccess[815] = new CDataSignalAccess( top.arraySlice->debug_0_48 );
      signalAccess[816] = new CDataSignalAccess( top.arraySlice->debug_1_48 );
      signalAccess[817] = new CDataSignalAccess( top.arraySlice->debug_2_48 );
      signalAccess[818] = new CDataSignalAccess( top.arraySlice->debug_3_48 );
      signalAccess[819] = new CDataSignalAccess( top.arraySlice->debug_4_48 );
      signalAccess[820] = new CDataSignalAccess( top.arraySlice->debug_5_48 );
      signalAccess[821] = new CDataSignalAccess( top.arraySlice->debug_6_48 );
      signalAccess[822] = new CDataSignalAccess( top.arraySlice->debug_7_48 );
      signalAccess[823] = new SDataSignalAccess( top.arraySlice->realValue_0_384 );
      signalAccess[824] = new SDataSignalAccess( top.arraySlice->realValue_0_385 );
      signalAccess[825] = new SDataSignalAccess( top.arraySlice->realValue_0_386 );
      signalAccess[826] = new SDataSignalAccess( top.arraySlice->realValue_0_387 );
      signalAccess[827] = new SDataSignalAccess( top.arraySlice->realValue_0_388 );
      signalAccess[828] = new SDataSignalAccess( top.arraySlice->realValue_0_389 );
      signalAccess[829] = new SDataSignalAccess( top.arraySlice->realValue_0_390 );
      signalAccess[830] = new SDataSignalAccess( top.arraySlice->realValue_0_391 );
      signalAccess[831] = new CDataSignalAccess( top.arraySlice->realValue1_0_47 );
      signalAccess[832] = new CDataSignalAccess( top.arraySlice->debug_0_49 );
      signalAccess[833] = new CDataSignalAccess( top.arraySlice->debug_1_49 );
      signalAccess[834] = new CDataSignalAccess( top.arraySlice->debug_2_49 );
      signalAccess[835] = new CDataSignalAccess( top.arraySlice->debug_3_49 );
      signalAccess[836] = new CDataSignalAccess( top.arraySlice->debug_4_49 );
      signalAccess[837] = new CDataSignalAccess( top.arraySlice->debug_5_49 );
      signalAccess[838] = new CDataSignalAccess( top.arraySlice->debug_6_49 );
      signalAccess[839] = new CDataSignalAccess( top.arraySlice->debug_7_49 );
      signalAccess[840] = new SDataSignalAccess( top.arraySlice->realValue_0_392 );
      signalAccess[841] = new SDataSignalAccess( top.arraySlice->realValue_0_393 );
      signalAccess[842] = new SDataSignalAccess( top.arraySlice->realValue_0_394 );
      signalAccess[843] = new SDataSignalAccess( top.arraySlice->realValue_0_395 );
      signalAccess[844] = new SDataSignalAccess( top.arraySlice->realValue_0_396 );
      signalAccess[845] = new SDataSignalAccess( top.arraySlice->realValue_0_397 );
      signalAccess[846] = new SDataSignalAccess( top.arraySlice->realValue_0_398 );
      signalAccess[847] = new SDataSignalAccess( top.arraySlice->realValue_0_399 );
      signalAccess[848] = new CDataSignalAccess( top.arraySlice->debug_0_50 );
      signalAccess[849] = new CDataSignalAccess( top.arraySlice->debug_1_50 );
      signalAccess[850] = new CDataSignalAccess( top.arraySlice->debug_2_50 );
      signalAccess[851] = new CDataSignalAccess( top.arraySlice->debug_3_50 );
      signalAccess[852] = new CDataSignalAccess( top.arraySlice->debug_4_50 );
      signalAccess[853] = new CDataSignalAccess( top.arraySlice->debug_5_50 );
      signalAccess[854] = new CDataSignalAccess( top.arraySlice->debug_6_50 );
      signalAccess[855] = new CDataSignalAccess( top.arraySlice->debug_7_50 );
      signalAccess[856] = new SDataSignalAccess( top.arraySlice->realValue_0_400 );
      signalAccess[857] = new SDataSignalAccess( top.arraySlice->realValue_0_401 );
      signalAccess[858] = new SDataSignalAccess( top.arraySlice->realValue_0_402 );
      signalAccess[859] = new SDataSignalAccess( top.arraySlice->realValue_0_403 );
      signalAccess[860] = new SDataSignalAccess( top.arraySlice->realValue_0_404 );
      signalAccess[861] = new SDataSignalAccess( top.arraySlice->realValue_0_405 );
      signalAccess[862] = new SDataSignalAccess( top.arraySlice->realValue_0_406 );
      signalAccess[863] = new SDataSignalAccess( top.arraySlice->realValue_0_407 );
      signalAccess[864] = new CDataSignalAccess( top.arraySlice->debug_0_51 );
      signalAccess[865] = new CDataSignalAccess( top.arraySlice->debug_1_51 );
      signalAccess[866] = new CDataSignalAccess( top.arraySlice->debug_2_51 );
      signalAccess[867] = new CDataSignalAccess( top.arraySlice->debug_3_51 );
      signalAccess[868] = new CDataSignalAccess( top.arraySlice->debug_4_51 );
      signalAccess[869] = new CDataSignalAccess( top.arraySlice->debug_5_51 );
      signalAccess[870] = new CDataSignalAccess( top.arraySlice->debug_6_51 );
      signalAccess[871] = new CDataSignalAccess( top.arraySlice->debug_7_51 );
      signalAccess[872] = new SDataSignalAccess( top.arraySlice->realValue_0_408 );
      signalAccess[873] = new SDataSignalAccess( top.arraySlice->realValue_0_409 );
      signalAccess[874] = new SDataSignalAccess( top.arraySlice->realValue_0_410 );
      signalAccess[875] = new SDataSignalAccess( top.arraySlice->realValue_0_411 );
      signalAccess[876] = new SDataSignalAccess( top.arraySlice->realValue_0_412 );
      signalAccess[877] = new SDataSignalAccess( top.arraySlice->realValue_0_413 );
      signalAccess[878] = new SDataSignalAccess( top.arraySlice->realValue_0_414 );
      signalAccess[879] = new SDataSignalAccess( top.arraySlice->realValue_0_415 );
      signalAccess[880] = new CDataSignalAccess( top.inputStreamArrayData_valid );
      signalAccess[881] = new CDataSignalAccess( top.inputStreamArrayData_ready );
      signalAccess[882] = new IDataSignalAccess( top.inputStreamArrayData_payload );
      signalAccess[883] = new CDataSignalAccess( top.inputFeatureMapWidth );
      signalAccess[884] = new CDataSignalAccess( top.inputFeatureMapHeight );
      signalAccess[885] = new CDataSignalAccess( top.outputFeatureMapHeight );
      signalAccess[886] = new CDataSignalAccess( top.outputFeatureMapWidth );
      signalAccess[887] = new CDataSignalAccess( top.outputStreamArrayData_0_valid );
      signalAccess[888] = new CDataSignalAccess( top.outputStreamArrayData_0_ready );
      signalAccess[889] = new IDataSignalAccess( top.outputStreamArrayData_0_payload );
      signalAccess[890] = new CDataSignalAccess( top.outputStreamArrayData_1_valid );
      signalAccess[891] = new CDataSignalAccess( top.outputStreamArrayData_1_ready );
      signalAccess[892] = new IDataSignalAccess( top.outputStreamArrayData_1_payload );
      signalAccess[893] = new CDataSignalAccess( top.outputStreamArrayData_2_valid );
      signalAccess[894] = new CDataSignalAccess( top.outputStreamArrayData_2_ready );
      signalAccess[895] = new IDataSignalAccess( top.outputStreamArrayData_2_payload );
      signalAccess[896] = new CDataSignalAccess( top.outputStreamArrayData_3_valid );
      signalAccess[897] = new CDataSignalAccess( top.outputStreamArrayData_3_ready );
      signalAccess[898] = new IDataSignalAccess( top.outputStreamArrayData_3_payload );
      signalAccess[899] = new CDataSignalAccess( top.outputStreamArrayData_4_valid );
      signalAccess[900] = new CDataSignalAccess( top.outputStreamArrayData_4_ready );
      signalAccess[901] = new IDataSignalAccess( top.outputStreamArrayData_4_payload );
      signalAccess[902] = new CDataSignalAccess( top.outputStreamArrayData_5_valid );
      signalAccess[903] = new CDataSignalAccess( top.outputStreamArrayData_5_ready );
      signalAccess[904] = new IDataSignalAccess( top.outputStreamArrayData_5_payload );
      signalAccess[905] = new CDataSignalAccess( top.outputStreamArrayData_6_valid );
      signalAccess[906] = new CDataSignalAccess( top.outputStreamArrayData_6_ready );
      signalAccess[907] = new IDataSignalAccess( top.outputStreamArrayData_6_payload );
      signalAccess[908] = new CDataSignalAccess( top.outputStreamArrayData_7_valid );
      signalAccess[909] = new CDataSignalAccess( top.outputStreamArrayData_7_ready );
      signalAccess[910] = new IDataSignalAccess( top.outputStreamArrayData_7_payload );
      signalAccess[911] = new CDataSignalAccess( top.clk );
      signalAccess[912] = new CDataSignalAccess( top.resetn );

      #ifdef TRACE
      Verilated::traceEverOn(true);
      top.trace(&tfp, 99);
      tfp.open((std::string("/home/lqx/IdeaProjects/LicioLib/./simWorkspace/case1/") + name + ".fst").c_str());
      #endif
      this->name = name;
    }

    virtual ~Wrapper_1(){
      for(int idx = 0;idx < 913;idx++){
          delete signalAccess[idx];
      }

      #ifdef TRACE
      if(waveEnabled) tfp.dump((vluint64_t)time);
      tfp.close();
      #endif
      #ifdef COVERAGE
      VerilatedCov::write((("/home/lqx/IdeaProjects/LicioLib/./simWorkspace/case1/") + name + ".dat").c_str());
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
     