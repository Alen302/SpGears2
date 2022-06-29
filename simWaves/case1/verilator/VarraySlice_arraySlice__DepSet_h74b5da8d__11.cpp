// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VarraySlice.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VarraySlice_arraySlice.h"

VL_INLINE_OPT void VarraySlice_arraySlice___settle__TOP__arraySlice__189(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__189\n"); );
    // Body
    vlSelf->__PVT___zz_inputStreamArrayData_ready_2 
        = (1U & ((0x40U & (IData)(vlSelf->__PVT__selectWriteFifo))
                  ? ((0x20U & (IData)(vlSelf->__PVT__selectWriteFifo))
                      ? ((0x10U & (IData)(vlSelf->__PVT__selectWriteFifo))
                          ? ((8U & (IData)(vlSelf->__PVT__selectWriteFifo))
                              ? ((4U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                  ? ((2U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                      ? ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_127__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_126__DOT__logic_full)))
                                      : ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_125__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_124__DOT__logic_full))))
                                  : ((2U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                      ? ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_123__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_122__DOT__logic_full)))
                                      : ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_121__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_120__DOT__logic_full)))))
                              : ((4U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                  ? ((2U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                      ? ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_119__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_118__DOT__logic_full)))
                                      : ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_117__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_116__DOT__logic_full))))
                                  : ((2U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                      ? ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_115__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_114__DOT__logic_full)))
                                      : ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_113__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_112__DOT__logic_full))))))
                          : ((8U & (IData)(vlSelf->__PVT__selectWriteFifo))
                              ? ((4U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                  ? ((2U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                      ? ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_111__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_110__DOT__logic_full)))
                                      : ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_109__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_108__DOT__logic_full))))
                                  : ((2U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                      ? ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_107__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_106__DOT__logic_full)))
                                      : ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_105__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_104__DOT__logic_full)))))
                              : ((4U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                  ? ((2U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                      ? ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_103__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_102__DOT__logic_full)))
                                      : ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_101__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_100__DOT__logic_full))))
                                  : ((2U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                      ? ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_99__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_98__DOT__logic_full)))
                                      : ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_97__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_96__DOT__logic_full)))))))
                      : ((0x10U & (IData)(vlSelf->__PVT__selectWriteFifo))
                          ? ((8U & (IData)(vlSelf->__PVT__selectWriteFifo))
                              ? ((4U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                  ? ((2U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                      ? ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_95__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_94__DOT__logic_full)))
                                      : ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_93__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_92__DOT__logic_full))))
                                  : ((2U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                      ? ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_91__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_90__DOT__logic_full)))
                                      : ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_89__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_88__DOT__logic_full)))))
                              : ((4U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                  ? ((2U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                      ? ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_87__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_86__DOT__logic_full)))
                                      : ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_85__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_84__DOT__logic_full))))
                                  : ((2U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                      ? ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_83__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_82__DOT__logic_full)))
                                      : ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_81__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_80__DOT__logic_full))))))
                          : ((8U & (IData)(vlSelf->__PVT__selectWriteFifo))
                              ? ((4U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                  ? ((2U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                      ? ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_79__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_78__DOT__logic_full)))
                                      : ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_77__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_76__DOT__logic_full))))
                                  : ((2U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                      ? ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_75__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_74__DOT__logic_full)))
                                      : ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_73__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_72__DOT__logic_full)))))
                              : ((4U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                  ? ((2U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                      ? ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_71__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_70__DOT__logic_full)))
                                      : ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_69__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_68__DOT__logic_full))))
                                  : ((2U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                      ? ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_67__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_66__DOT__logic_full)))
                                      : ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_65__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_64__DOT__logic_full))))))))
                  : ((0x20U & (IData)(vlSelf->__PVT__selectWriteFifo))
                      ? ((0x10U & (IData)(vlSelf->__PVT__selectWriteFifo))
                          ? ((8U & (IData)(vlSelf->__PVT__selectWriteFifo))
                              ? ((4U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                  ? ((2U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                      ? ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_63__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_62__DOT__logic_full)))
                                      : ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_61__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_60__DOT__logic_full))))
                                  : ((2U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                      ? ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_59__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_58__DOT__logic_full)))
                                      : ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_57__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_56__DOT__logic_full)))))
                              : ((4U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                  ? ((2U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                      ? ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_55__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_54__DOT__logic_full)))
                                      : ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_53__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_52__DOT__logic_full))))
                                  : ((2U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                      ? ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_51__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_50__DOT__logic_full)))
                                      : ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_49__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_48__DOT__logic_full))))))
                          : ((8U & (IData)(vlSelf->__PVT__selectWriteFifo))
                              ? ((4U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                  ? ((2U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                      ? ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_47__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_46__DOT__logic_full)))
                                      : ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_45__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_44__DOT__logic_full))))
                                  : ((2U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                      ? ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_43__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_42__DOT__logic_full)))
                                      : ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_41__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_40__DOT__logic_full)))))
                              : ((4U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                  ? ((2U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                      ? ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_39__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_38__DOT__logic_full)))
                                      : ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_37__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_36__DOT__logic_full))))
                                  : ((2U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                      ? ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_35__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_34__DOT__logic_full)))
                                      : ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_33__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_32__DOT__logic_full)))))))
                      : ((0x10U & (IData)(vlSelf->__PVT__selectWriteFifo))
                          ? ((8U & (IData)(vlSelf->__PVT__selectWriteFifo))
                              ? ((4U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                  ? ((2U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                      ? ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_31__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_30__DOT__logic_full)))
                                      : ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_29__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_28__DOT__logic_full))))
                                  : ((2U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                      ? ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_27__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_26__DOT__logic_full)))
                                      : ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_25__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_24__DOT__logic_full)))))
                              : ((4U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                  ? ((2U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                      ? ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_23__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_22__DOT__logic_full)))
                                      : ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_21__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_20__DOT__logic_full))))
                                  : ((2U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                      ? ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_19__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_18__DOT__logic_full)))
                                      : ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_17__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_16__DOT__logic_full))))))
                          : ((8U & (IData)(vlSelf->__PVT__selectWriteFifo))
                              ? ((4U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                  ? ((2U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                      ? ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_15__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_14__DOT__logic_full)))
                                      : ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_13__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_12__DOT__logic_full))))
                                  : ((2U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                      ? ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_11__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_10__DOT__logic_full)))
                                      : ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_9__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_8__DOT__logic_full)))))
                              : ((4U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                  ? ((2U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                      ? ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_7__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_6__DOT__logic_full)))
                                      : ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_5__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_4__DOT__logic_full))))
                                  : ((2U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                      ? ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_3__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_2__DOT__logic_full)))
                                      : ((1U & (IData)(vlSelf->__PVT__selectWriteFifo))
                                          ? (~ (IData)(vlSelf->__PVT__fifoGroup_1__DOT__logic_full))
                                          : (~ (IData)(vlSelf->__PVT__fifoGroup_0__DOT__logic_full))))))))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___settle__TOP__arraySlice__191(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__191\n"); );
    // Body
    vlSelf->__PVT___zz_when_ArraySlice_l334 = ((0x40U 
                                                & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                ? (
                                                   (0x20U 
                                                    & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_127_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_126_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_125_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_124_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_123_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_122_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_121_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_120_io_occupancy))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_119_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_118_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_117_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_116_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_115_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_114_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_113_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_112_io_occupancy)))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_111_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_110_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_109_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_108_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_107_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_106_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_105_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_104_io_occupancy))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_103_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_102_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_101_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_100_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_99_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_98_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_97_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_96_io_occupancy))))))
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_95_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_94_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_93_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_92_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_91_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_90_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_89_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_88_io_occupancy))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_87_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_86_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_85_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_84_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_83_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_82_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_81_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_80_io_occupancy)))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_79_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_78_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_77_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_76_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_75_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_74_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_73_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_72_io_occupancy))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_71_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_70_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_69_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_68_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_67_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_66_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_65_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_64_io_occupancy)))))))
                                                : (
                                                   (0x20U 
                                                    & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_63_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_62_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_61_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_60_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_59_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_58_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_57_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_56_io_occupancy))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_55_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_54_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_53_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_52_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_51_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_50_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_49_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_48_io_occupancy)))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_47_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_46_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_45_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_44_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_43_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_42_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_41_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_40_io_occupancy))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_39_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_38_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_37_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_36_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_35_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_34_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_33_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_32_io_occupancy))))))
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_31_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_30_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_29_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_28_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_27_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_26_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_25_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_24_io_occupancy))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_23_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_22_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_21_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_20_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_19_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_18_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_17_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_16_io_occupancy)))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_15_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_14_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_13_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_12_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_11_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_10_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_9_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_8_io_occupancy))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_7_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_6_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_5_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_4_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_3_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_2_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectWriteFifo))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_1_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_0_io_occupancy))))))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___settle__TOP__arraySlice__192(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__192\n"); );
    // Body
    vlSelf->__PVT___zz_when_ArraySlice_l376 = ((0x40U 
                                                & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                ? (
                                                   (0x20U 
                                                    & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_127_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_126_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_125_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_124_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_123_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_122_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_121_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_120_io_occupancy))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_119_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_118_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_117_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_116_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_115_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_114_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_113_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_112_io_occupancy)))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_111_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_110_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_109_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_108_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_107_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_106_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_105_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_104_io_occupancy))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_103_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_102_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_101_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_100_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_99_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_98_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_97_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_96_io_occupancy))))))
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_95_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_94_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_93_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_92_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_91_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_90_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_89_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_88_io_occupancy))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_87_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_86_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_85_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_84_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_83_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_82_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_81_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_80_io_occupancy)))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_79_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_78_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_77_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_76_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_75_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_74_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_73_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_72_io_occupancy))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_71_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_70_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_69_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_68_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_67_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_66_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_65_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_64_io_occupancy)))))))
                                                : (
                                                   (0x20U 
                                                    & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_63_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_62_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_61_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_60_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_59_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_58_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_57_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_56_io_occupancy))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_55_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_54_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_53_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_52_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_51_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_50_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_49_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_48_io_occupancy)))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_47_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_46_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_45_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_44_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_43_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_42_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_41_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_40_io_occupancy))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_39_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_38_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_37_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_36_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_35_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_34_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_33_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_32_io_occupancy))))))
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_31_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_30_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_29_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_28_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_27_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_26_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_25_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_24_io_occupancy))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_23_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_22_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_21_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_20_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_19_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_18_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_17_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_16_io_occupancy)))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_15_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_14_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_13_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_12_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_11_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_10_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_9_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_8_io_occupancy))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_7_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_6_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_5_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_4_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_3_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_2_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_1_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_0_io_occupancy))))))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___settle__TOP__arraySlice__193(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__193\n"); );
    // Body
    vlSelf->__PVT___zz_when_ArraySlice_l235 = ((0x40U 
                                                & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                ? (
                                                   (0x20U 
                                                    & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_127_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_126_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_125_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_124_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_123_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_122_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_121_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_120_io_occupancy))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_119_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_118_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_117_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_116_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_115_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_114_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_113_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_112_io_occupancy)))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_111_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_110_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_109_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_108_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_107_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_106_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_105_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_104_io_occupancy))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_103_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_102_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_101_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_100_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_99_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_98_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_97_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_96_io_occupancy))))))
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_95_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_94_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_93_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_92_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_91_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_90_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_89_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_88_io_occupancy))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_87_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_86_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_85_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_84_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_83_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_82_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_81_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_80_io_occupancy)))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_79_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_78_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_77_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_76_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_75_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_74_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_73_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_72_io_occupancy))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_71_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_70_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_69_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_68_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_67_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_66_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_65_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_64_io_occupancy)))))))
                                                : (
                                                   (0x20U 
                                                    & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_63_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_62_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_61_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_60_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_59_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_58_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_57_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_56_io_occupancy))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_55_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_54_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_53_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_52_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_51_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_50_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_49_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_48_io_occupancy)))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_47_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_46_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_45_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_44_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_43_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_42_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_41_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_40_io_occupancy))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_39_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_38_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_37_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_36_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_35_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_34_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_33_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_32_io_occupancy))))))
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_31_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_30_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_29_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_28_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_27_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_26_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_25_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_24_io_occupancy))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_23_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_22_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_21_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_20_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_19_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_18_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_17_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_16_io_occupancy)))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                      ? 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_15_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_14_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_13_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_12_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_11_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_10_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_9_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_8_io_occupancy))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_7_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_6_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_5_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_4_io_occupancy)))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_3_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_2_io_occupancy))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                                         ? (IData)(vlSelf->__PVT__fifoGroup_1_io_occupancy)
                                                         : (IData)(vlSelf->__PVT__fifoGroup_0_io_occupancy))))))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___settle__TOP__arraySlice__194(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__194\n"); );
    // Body
    vlSelf->__PVT___zz_when_ArraySlice_l376_1_1 = (
                                                   (0x40U 
                                                    & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                       + (IData)(vlSelf->__PVT__bReg)))
                                                    ? 
                                                   ((0x20U 
                                                     & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                        + (IData)(vlSelf->__PVT__bReg)))
                                                     ? 
                                                    ((0x10U 
                                                      & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                         + (IData)(vlSelf->__PVT__bReg)))
                                                      ? 
                                                     ((8U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                          + (IData)(vlSelf->__PVT__bReg)))
                                                       ? 
                                                      ((4U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                           + (IData)(vlSelf->__PVT__bReg)))
                                                        ? 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                            + (IData)(vlSelf->__PVT__bReg)))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_127_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_126_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_125_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_124_io_occupancy)))
                                                        : 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                            + (IData)(vlSelf->__PVT__bReg)))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_123_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_122_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_121_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_120_io_occupancy))))
                                                       : 
                                                      ((4U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                           + (IData)(vlSelf->__PVT__bReg)))
                                                        ? 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                            + (IData)(vlSelf->__PVT__bReg)))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_119_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_118_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_117_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_116_io_occupancy)))
                                                        : 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                            + (IData)(vlSelf->__PVT__bReg)))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_115_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_114_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_113_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_112_io_occupancy)))))
                                                      : 
                                                     ((8U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                          + (IData)(vlSelf->__PVT__bReg)))
                                                       ? 
                                                      ((4U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                           + (IData)(vlSelf->__PVT__bReg)))
                                                        ? 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                            + (IData)(vlSelf->__PVT__bReg)))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_111_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_110_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_109_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_108_io_occupancy)))
                                                        : 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                            + (IData)(vlSelf->__PVT__bReg)))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_107_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_106_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_105_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_104_io_occupancy))))
                                                       : 
                                                      ((4U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                           + (IData)(vlSelf->__PVT__bReg)))
                                                        ? 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                            + (IData)(vlSelf->__PVT__bReg)))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_103_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_102_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_101_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_100_io_occupancy)))
                                                        : 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                            + (IData)(vlSelf->__PVT__bReg)))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_99_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_98_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_97_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_96_io_occupancy))))))
                                                     : 
                                                    ((0x10U 
                                                      & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                         + (IData)(vlSelf->__PVT__bReg)))
                                                      ? 
                                                     ((8U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                          + (IData)(vlSelf->__PVT__bReg)))
                                                       ? 
                                                      ((4U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                           + (IData)(vlSelf->__PVT__bReg)))
                                                        ? 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                            + (IData)(vlSelf->__PVT__bReg)))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_95_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_94_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_93_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_92_io_occupancy)))
                                                        : 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                            + (IData)(vlSelf->__PVT__bReg)))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_91_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_90_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_89_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_88_io_occupancy))))
                                                       : 
                                                      ((4U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                           + (IData)(vlSelf->__PVT__bReg)))
                                                        ? 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                            + (IData)(vlSelf->__PVT__bReg)))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_87_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_86_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_85_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_84_io_occupancy)))
                                                        : 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                            + (IData)(vlSelf->__PVT__bReg)))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_83_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_82_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_81_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_80_io_occupancy)))))
                                                      : 
                                                     ((8U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                          + (IData)(vlSelf->__PVT__bReg)))
                                                       ? 
                                                      ((4U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                           + (IData)(vlSelf->__PVT__bReg)))
                                                        ? 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                            + (IData)(vlSelf->__PVT__bReg)))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_79_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_78_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_77_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_76_io_occupancy)))
                                                        : 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                            + (IData)(vlSelf->__PVT__bReg)))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_75_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_74_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_73_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_72_io_occupancy))))
                                                       : 
                                                      ((4U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                           + (IData)(vlSelf->__PVT__bReg)))
                                                        ? 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                            + (IData)(vlSelf->__PVT__bReg)))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_71_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_70_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_69_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_68_io_occupancy)))
                                                        : 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                            + (IData)(vlSelf->__PVT__bReg)))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_67_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_66_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_65_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_64_io_occupancy)))))))
                                                    : 
                                                   ((0x20U 
                                                     & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                        + (IData)(vlSelf->__PVT__bReg)))
                                                     ? 
                                                    ((0x10U 
                                                      & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                         + (IData)(vlSelf->__PVT__bReg)))
                                                      ? 
                                                     ((8U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                          + (IData)(vlSelf->__PVT__bReg)))
                                                       ? 
                                                      ((4U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                           + (IData)(vlSelf->__PVT__bReg)))
                                                        ? 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                            + (IData)(vlSelf->__PVT__bReg)))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_63_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_62_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_61_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_60_io_occupancy)))
                                                        : 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                            + (IData)(vlSelf->__PVT__bReg)))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_59_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_58_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_57_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_56_io_occupancy))))
                                                       : 
                                                      ((4U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                           + (IData)(vlSelf->__PVT__bReg)))
                                                        ? 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                            + (IData)(vlSelf->__PVT__bReg)))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_55_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_54_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_53_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_52_io_occupancy)))
                                                        : 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                            + (IData)(vlSelf->__PVT__bReg)))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_51_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_50_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_49_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_48_io_occupancy)))))
                                                      : 
                                                     ((8U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                          + (IData)(vlSelf->__PVT__bReg)))
                                                       ? 
                                                      ((4U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                           + (IData)(vlSelf->__PVT__bReg)))
                                                        ? 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                            + (IData)(vlSelf->__PVT__bReg)))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_47_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_46_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_45_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_44_io_occupancy)))
                                                        : 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                            + (IData)(vlSelf->__PVT__bReg)))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_43_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_42_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_41_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_40_io_occupancy))))
                                                       : 
                                                      ((4U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                           + (IData)(vlSelf->__PVT__bReg)))
                                                        ? 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                            + (IData)(vlSelf->__PVT__bReg)))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_39_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_38_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_37_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_36_io_occupancy)))
                                                        : 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                            + (IData)(vlSelf->__PVT__bReg)))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_35_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_34_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_33_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_32_io_occupancy))))))
                                                     : 
                                                    ((0x10U 
                                                      & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                         + (IData)(vlSelf->__PVT__bReg)))
                                                      ? 
                                                     ((8U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                          + (IData)(vlSelf->__PVT__bReg)))
                                                       ? 
                                                      ((4U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                           + (IData)(vlSelf->__PVT__bReg)))
                                                        ? 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                            + (IData)(vlSelf->__PVT__bReg)))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_31_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_30_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_29_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_28_io_occupancy)))
                                                        : 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                            + (IData)(vlSelf->__PVT__bReg)))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_27_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_26_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_25_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_24_io_occupancy))))
                                                       : 
                                                      ((4U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                           + (IData)(vlSelf->__PVT__bReg)))
                                                        ? 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                            + (IData)(vlSelf->__PVT__bReg)))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_23_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_22_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_21_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_20_io_occupancy)))
                                                        : 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                            + (IData)(vlSelf->__PVT__bReg)))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_19_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_18_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_17_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_16_io_occupancy)))))
                                                      : 
                                                     ((8U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                          + (IData)(vlSelf->__PVT__bReg)))
                                                       ? 
                                                      ((4U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                           + (IData)(vlSelf->__PVT__bReg)))
                                                        ? 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                            + (IData)(vlSelf->__PVT__bReg)))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_15_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_14_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_13_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_12_io_occupancy)))
                                                        : 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                            + (IData)(vlSelf->__PVT__bReg)))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_11_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_10_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_9_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_8_io_occupancy))))
                                                       : 
                                                      ((4U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                           + (IData)(vlSelf->__PVT__bReg)))
                                                        ? 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                            + (IData)(vlSelf->__PVT__bReg)))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_7_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_6_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_5_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_4_io_occupancy)))
                                                        : 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                            + (IData)(vlSelf->__PVT__bReg)))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_3_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_2_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_1) 
                                                             + (IData)(vlSelf->__PVT__bReg)))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_1_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_0_io_occupancy))))))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___settle__TOP__arraySlice__195(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__195\n"); );
    // Body
    vlSelf->__PVT___zz_when_ArraySlice_l376_2_1 = (
                                                   (0x40U 
                                                    & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                       + 
                                                       (0x7fU 
                                                        & ((IData)(vlSelf->__PVT__bReg) 
                                                           << 1U))))
                                                    ? 
                                                   ((0x20U 
                                                     & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 1U))))
                                                     ? 
                                                    ((0x10U 
                                                      & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(vlSelf->__PVT__bReg) 
                                                             << 1U))))
                                                      ? 
                                                     ((8U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(vlSelf->__PVT__bReg) 
                                                              << 1U))))
                                                       ? 
                                                      ((4U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(vlSelf->__PVT__bReg) 
                                                               << 1U))))
                                                        ? 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__bReg) 
                                                                << 1U))))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_127_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_126_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_125_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_124_io_occupancy)))
                                                        : 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__bReg) 
                                                                << 1U))))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_123_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_122_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_121_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_120_io_occupancy))))
                                                       : 
                                                      ((4U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(vlSelf->__PVT__bReg) 
                                                               << 1U))))
                                                        ? 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__bReg) 
                                                                << 1U))))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_119_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_118_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_117_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_116_io_occupancy)))
                                                        : 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__bReg) 
                                                                << 1U))))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_115_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_114_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_113_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_112_io_occupancy)))))
                                                      : 
                                                     ((8U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(vlSelf->__PVT__bReg) 
                                                              << 1U))))
                                                       ? 
                                                      ((4U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(vlSelf->__PVT__bReg) 
                                                               << 1U))))
                                                        ? 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__bReg) 
                                                                << 1U))))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_111_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_110_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_109_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_108_io_occupancy)))
                                                        : 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__bReg) 
                                                                << 1U))))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_107_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_106_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_105_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_104_io_occupancy))))
                                                       : 
                                                      ((4U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(vlSelf->__PVT__bReg) 
                                                               << 1U))))
                                                        ? 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__bReg) 
                                                                << 1U))))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_103_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_102_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_101_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_100_io_occupancy)))
                                                        : 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__bReg) 
                                                                << 1U))))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_99_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_98_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_97_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_96_io_occupancy))))))
                                                     : 
                                                    ((0x10U 
                                                      & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(vlSelf->__PVT__bReg) 
                                                             << 1U))))
                                                      ? 
                                                     ((8U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(vlSelf->__PVT__bReg) 
                                                              << 1U))))
                                                       ? 
                                                      ((4U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(vlSelf->__PVT__bReg) 
                                                               << 1U))))
                                                        ? 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__bReg) 
                                                                << 1U))))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_95_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_94_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_93_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_92_io_occupancy)))
                                                        : 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__bReg) 
                                                                << 1U))))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_91_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_90_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_89_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_88_io_occupancy))))
                                                       : 
                                                      ((4U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(vlSelf->__PVT__bReg) 
                                                               << 1U))))
                                                        ? 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__bReg) 
                                                                << 1U))))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_87_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_86_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_85_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_84_io_occupancy)))
                                                        : 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__bReg) 
                                                                << 1U))))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_83_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_82_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_81_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_80_io_occupancy)))))
                                                      : 
                                                     ((8U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(vlSelf->__PVT__bReg) 
                                                              << 1U))))
                                                       ? 
                                                      ((4U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(vlSelf->__PVT__bReg) 
                                                               << 1U))))
                                                        ? 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__bReg) 
                                                                << 1U))))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_79_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_78_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_77_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_76_io_occupancy)))
                                                        : 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__bReg) 
                                                                << 1U))))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_75_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_74_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_73_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_72_io_occupancy))))
                                                       : 
                                                      ((4U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(vlSelf->__PVT__bReg) 
                                                               << 1U))))
                                                        ? 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__bReg) 
                                                                << 1U))))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_71_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_70_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_69_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_68_io_occupancy)))
                                                        : 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__bReg) 
                                                                << 1U))))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_67_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_66_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_65_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_64_io_occupancy)))))))
                                                    : 
                                                   ((0x20U 
                                                     & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                        + 
                                                        (0x7fU 
                                                         & ((IData)(vlSelf->__PVT__bReg) 
                                                            << 1U))))
                                                     ? 
                                                    ((0x10U 
                                                      & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(vlSelf->__PVT__bReg) 
                                                             << 1U))))
                                                      ? 
                                                     ((8U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(vlSelf->__PVT__bReg) 
                                                              << 1U))))
                                                       ? 
                                                      ((4U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(vlSelf->__PVT__bReg) 
                                                               << 1U))))
                                                        ? 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__bReg) 
                                                                << 1U))))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_63_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_62_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_61_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_60_io_occupancy)))
                                                        : 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__bReg) 
                                                                << 1U))))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_59_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_58_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_57_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_56_io_occupancy))))
                                                       : 
                                                      ((4U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(vlSelf->__PVT__bReg) 
                                                               << 1U))))
                                                        ? 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__bReg) 
                                                                << 1U))))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_55_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_54_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_53_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_52_io_occupancy)))
                                                        : 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__bReg) 
                                                                << 1U))))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_51_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_50_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_49_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_48_io_occupancy)))))
                                                      : 
                                                     ((8U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(vlSelf->__PVT__bReg) 
                                                              << 1U))))
                                                       ? 
                                                      ((4U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(vlSelf->__PVT__bReg) 
                                                               << 1U))))
                                                        ? 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__bReg) 
                                                                << 1U))))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_47_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_46_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_45_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_44_io_occupancy)))
                                                        : 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__bReg) 
                                                                << 1U))))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_43_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_42_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_41_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_40_io_occupancy))))
                                                       : 
                                                      ((4U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(vlSelf->__PVT__bReg) 
                                                               << 1U))))
                                                        ? 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__bReg) 
                                                                << 1U))))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_39_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_38_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_37_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_36_io_occupancy)))
                                                        : 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__bReg) 
                                                                << 1U))))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_35_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_34_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_33_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_32_io_occupancy))))))
                                                     : 
                                                    ((0x10U 
                                                      & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                         + 
                                                         (0x7fU 
                                                          & ((IData)(vlSelf->__PVT__bReg) 
                                                             << 1U))))
                                                      ? 
                                                     ((8U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(vlSelf->__PVT__bReg) 
                                                              << 1U))))
                                                       ? 
                                                      ((4U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(vlSelf->__PVT__bReg) 
                                                               << 1U))))
                                                        ? 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__bReg) 
                                                                << 1U))))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_31_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_30_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_29_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_28_io_occupancy)))
                                                        : 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__bReg) 
                                                                << 1U))))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_27_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_26_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_25_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_24_io_occupancy))))
                                                       : 
                                                      ((4U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(vlSelf->__PVT__bReg) 
                                                               << 1U))))
                                                        ? 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__bReg) 
                                                                << 1U))))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_23_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_22_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_21_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_20_io_occupancy)))
                                                        : 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__bReg) 
                                                                << 1U))))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_19_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_18_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_17_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_16_io_occupancy)))))
                                                      : 
                                                     ((8U 
                                                       & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                          + 
                                                          (0x7fU 
                                                           & ((IData)(vlSelf->__PVT__bReg) 
                                                              << 1U))))
                                                       ? 
                                                      ((4U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(vlSelf->__PVT__bReg) 
                                                               << 1U))))
                                                        ? 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__bReg) 
                                                                << 1U))))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_15_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_14_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_13_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_12_io_occupancy)))
                                                        : 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__bReg) 
                                                                << 1U))))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_11_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_10_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_9_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_8_io_occupancy))))
                                                       : 
                                                      ((4U 
                                                        & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                           + 
                                                           (0x7fU 
                                                            & ((IData)(vlSelf->__PVT__bReg) 
                                                               << 1U))))
                                                        ? 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__bReg) 
                                                                << 1U))))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_7_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_6_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_5_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_4_io_occupancy)))
                                                        : 
                                                       ((2U 
                                                         & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                            + 
                                                            (0x7fU 
                                                             & ((IData)(vlSelf->__PVT__bReg) 
                                                                << 1U))))
                                                         ? 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_3_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_2_io_occupancy))
                                                         : 
                                                        ((1U 
                                                          & ((IData)(vlSelf->__PVT__selectReadFifo_2) 
                                                             + 
                                                             (0x7fU 
                                                              & ((IData)(vlSelf->__PVT__bReg) 
                                                                 << 1U))))
                                                          ? (IData)(vlSelf->__PVT__fifoGroup_1_io_occupancy)
                                                          : (IData)(vlSelf->__PVT__fifoGroup_0_io_occupancy))))))));
}
