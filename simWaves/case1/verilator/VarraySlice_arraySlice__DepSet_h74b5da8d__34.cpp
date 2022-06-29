// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VarraySlice.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VarraySlice_arraySlice.h"

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__411(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__411\n"); );
    // Body
    vlSelf->__PVT__fifoGroup_0_io_pop_valid = (1U & 
                                               ((~ 
                                                 ((IData)(vlSelf->__PVT__fifoGroup_0__DOT__logic_ptrMatch) 
                                                  & (~ (IData)(vlSelf->__PVT__fifoGroup_0__DOT__logic_risingOccupancy)))) 
                                                & (~ 
                                                   ((IData)(vlSelf->__PVT__fifoGroup_0__DOT___zz_io_pop_valid) 
                                                    & (~ (IData)(vlSelf->__PVT__fifoGroup_0__DOT__logic_full))))));
    vlSelf->__PVT___zz_when_ArraySlice_l203 = ((0x40U 
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

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__479(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__479\n"); );
    // Body
    vlSelf->__PVT___zz_outputStreamArrayData_0_valid_2 
        = ((0x40U & (IData)(vlSelf->__PVT__selectReadFifo_0))
            ? ((0x20U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                ? ((0x10U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                    ? ((8U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                        ? ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_127_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_126_io_pop_valid))
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_125_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_124_io_pop_valid)))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_123_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_122_io_pop_valid))
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_121_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_120_io_pop_valid))))
                        : ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_119_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_118_io_pop_valid))
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_117_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_116_io_pop_valid)))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_115_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_114_io_pop_valid))
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_113_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_112_io_pop_valid)))))
                    : ((8U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                        ? ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_111_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_110_io_pop_valid))
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_109_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_108_io_pop_valid)))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_107_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_106_io_pop_valid))
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_105_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_104_io_pop_valid))))
                        : ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_103_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_102_io_pop_valid))
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_101_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_100_io_pop_valid)))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_99_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_98_io_pop_valid))
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_97_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_96_io_pop_valid))))))
                : ((0x10U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                    ? ((8U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                        ? ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_95_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_94_io_pop_valid))
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_93_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_92_io_pop_valid)))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_91_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_90_io_pop_valid))
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_89_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_88_io_pop_valid))))
                        : ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_87_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_86_io_pop_valid))
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_85_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_84_io_pop_valid)))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_83_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_82_io_pop_valid))
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_81_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_80_io_pop_valid)))))
                    : ((8U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                        ? ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_79_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_78_io_pop_valid))
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_77_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_76_io_pop_valid)))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_75_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_74_io_pop_valid))
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_73_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_72_io_pop_valid))))
                        : ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_71_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_70_io_pop_valid))
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_69_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_68_io_pop_valid)))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_67_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_66_io_pop_valid))
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_65_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_64_io_pop_valid)))))))
            : ((0x20U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                ? ((0x10U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                    ? ((8U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                        ? ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_63_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_62_io_pop_valid))
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_61_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_60_io_pop_valid)))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_59_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_58_io_pop_valid))
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_57_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_56_io_pop_valid))))
                        : ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_55_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_54_io_pop_valid))
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_53_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_52_io_pop_valid)))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_51_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_50_io_pop_valid))
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_49_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_48_io_pop_valid)))))
                    : ((8U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                        ? ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_47_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_46_io_pop_valid))
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_45_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_44_io_pop_valid)))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_43_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_42_io_pop_valid))
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_41_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_40_io_pop_valid))))
                        : ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_39_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_38_io_pop_valid))
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_37_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_36_io_pop_valid)))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_35_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_34_io_pop_valid))
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_33_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_32_io_pop_valid))))))
                : ((0x10U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                    ? ((8U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                        ? ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_31_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_30_io_pop_valid))
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_29_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_28_io_pop_valid)))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_27_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_26_io_pop_valid))
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_25_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_24_io_pop_valid))))
                        : ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_23_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_22_io_pop_valid))
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_21_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_20_io_pop_valid)))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_19_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_18_io_pop_valid))
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_17_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_16_io_pop_valid)))))
                    : ((8U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                        ? ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_15_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_14_io_pop_valid))
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_13_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_12_io_pop_valid)))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_11_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_10_io_pop_valid))
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_9_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_8_io_pop_valid))))
                        : ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_7_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_6_io_pop_valid))
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_5_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_4_io_pop_valid)))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_3_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_2_io_pop_valid))
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? (IData)(vlSelf->__PVT__fifoGroup_1_io_pop_valid)
                                    : (IData)(vlSelf->__PVT__fifoGroup_0_io_pop_valid))))))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__495(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__495\n"); );
    // Body
    vlSelf->__PVT__when_ArraySlice_l199 = ((IData)(vlSelf->__PVT___zz_when_ArraySlice_l199) 
                                           < (IData)(vlSelf->__PVT__hReg));
    vlSelf->__PVT__when_ArraySlice_l330 = ((IData)(vlSelf->__PVT___zz_when_ArraySlice_l330) 
                                           < (IData)(vlSelf->__PVT__hReg));
    vlSelf->__PVT__when_ArraySlice_l370 = ((~ (IData)(vlSelf->__PVT__holdReadOp_0)) 
                                           & (0U != (IData)(vlSelf->__PVT___zz_when_ArraySlice_l370)));
    vlSelf->__PVT__when_ArraySlice_l229 = ((~ (IData)(vlSelf->__PVT__holdReadOp_0)) 
                                           & (0U != (IData)(vlSelf->__PVT___zz_when_ArraySlice_l229)));
    vlSelf->__PVT__when_ArraySlice_l370_1 = ((~ (IData)(vlSelf->__PVT__holdReadOp_1)) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT___zz_when_ArraySlice_l370_1_1)));
    vlSelf->__PVT__when_ArraySlice_l370_2 = ((~ (IData)(vlSelf->__PVT__holdReadOp_2)) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT___zz_when_ArraySlice_l370_2_1)));
    vlSelf->__PVT__when_ArraySlice_l370_3 = ((~ (IData)(vlSelf->__PVT__holdReadOp_3)) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT___zz_when_ArraySlice_l370_3_1)));
    vlSelf->__PVT__when_ArraySlice_l370_4 = ((~ (IData)(vlSelf->__PVT__holdReadOp_4)) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT___zz_when_ArraySlice_l370_4_1)));
    vlSelf->__PVT__when_ArraySlice_l370_5 = ((~ (IData)(vlSelf->__PVT__holdReadOp_5)) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT___zz_when_ArraySlice_l370_5)));
    vlSelf->__PVT__when_ArraySlice_l370_6 = ((~ (IData)(vlSelf->__PVT__holdReadOp_6)) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT___zz_when_ArraySlice_l370_6)));
    vlSelf->__PVT__when_ArraySlice_l370_7 = ((~ (IData)(vlSelf->__PVT__holdReadOp_7)) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT___zz_when_ArraySlice_l370_7)));
    vlSelf->__PVT__when_ArraySlice_l229_1 = ((~ (IData)(vlSelf->__PVT__holdReadOp_1)) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT___zz_when_ArraySlice_l229_1_1)));
    vlSelf->__PVT__when_ArraySlice_l229_2 = ((~ (IData)(vlSelf->__PVT__holdReadOp_2)) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT___zz_when_ArraySlice_l229_2_1)));
    vlSelf->__PVT__when_ArraySlice_l229_3 = ((~ (IData)(vlSelf->__PVT__holdReadOp_3)) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT___zz_when_ArraySlice_l229_3_1)));
    vlSelf->__PVT__when_ArraySlice_l229_4 = ((~ (IData)(vlSelf->__PVT__holdReadOp_4)) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT___zz_when_ArraySlice_l229_4_1)));
    vlSelf->__PVT__when_ArraySlice_l229_5 = ((~ (IData)(vlSelf->__PVT__holdReadOp_5)) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT___zz_when_ArraySlice_l229_5)));
    vlSelf->__PVT__when_ArraySlice_l229_6 = ((~ (IData)(vlSelf->__PVT__holdReadOp_6)) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT___zz_when_ArraySlice_l229_6)));
    vlSelf->__PVT__when_ArraySlice_l229_7 = ((~ (IData)(vlSelf->__PVT__holdReadOp_7)) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT___zz_when_ArraySlice_l229_7)));
    vlSelf->inputStreamArrayData_ready = 0U;
    if ((1U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if (vlSelf->__PVT__when_ArraySlice_l199) {
            vlSelf->inputStreamArrayData_ready = vlSelf->__PVT___zz_inputStreamArrayData_ready;
        }
    } else if ((2U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l329) {
                if (vlSelf->__PVT__when_ArraySlice_l330) {
                    vlSelf->inputStreamArrayData_ready 
                        = vlSelf->__PVT___zz_inputStreamArrayData_ready_2;
                }
            }
        }
    }
    vlSelf->outputStreamArrayData_0_payload = 0U;
    if ((1U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l369) {
                if (vlSelf->__PVT__when_ArraySlice_l370) {
                    vlSelf->outputStreamArrayData_0_payload 
                        = vlSelf->__PVT___zz_outputStreamArrayData_0_payload;
                    vlSelf->outputStreamArrayData_0_valid = 0U;
                    vlSelf->outputStreamArrayData_0_valid 
                        = vlSelf->__PVT___zz_outputStreamArrayData_0_valid_2;
                } else {
                    vlSelf->outputStreamArrayData_0_valid = 0U;
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_0)))) {
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l410))) {
                        vlSelf->outputStreamArrayData_0_valid = 1U;
                    }
                }
            } else {
                vlSelf->outputStreamArrayData_0_valid = 0U;
                if (vlSelf->__PVT__when_ArraySlice_l439) {
                    vlSelf->outputStreamArrayData_0_valid = 1U;
                }
            }
            vlSelf->outputStreamArrayData_1_payload = 0U;
            if (vlSelf->__PVT__when_ArraySlice_l369_1) {
                if (vlSelf->__PVT__when_ArraySlice_l370_1) {
                    vlSelf->outputStreamArrayData_1_payload 
                        = vlSelf->__PVT___zz_outputStreamArrayData_1_payload;
                    vlSelf->outputStreamArrayData_1_valid = 0U;
                    vlSelf->outputStreamArrayData_1_valid 
                        = vlSelf->__PVT___zz_outputStreamArrayData_1_valid_2;
                } else {
                    vlSelf->outputStreamArrayData_1_valid = 0U;
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_1)))) {
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l410_1_1))) {
                        vlSelf->outputStreamArrayData_1_valid = 1U;
                    }
                }
            } else {
                vlSelf->outputStreamArrayData_1_valid = 0U;
                if (vlSelf->__PVT__when_ArraySlice_l439_1) {
                    vlSelf->outputStreamArrayData_1_valid = 1U;
                }
            }
            vlSelf->outputStreamArrayData_2_payload = 0U;
            if (vlSelf->__PVT__when_ArraySlice_l369_2) {
                if (vlSelf->__PVT__when_ArraySlice_l370_2) {
                    vlSelf->outputStreamArrayData_2_payload 
                        = vlSelf->__PVT___zz_outputStreamArrayData_2_payload;
                    vlSelf->outputStreamArrayData_2_valid = 0U;
                    vlSelf->outputStreamArrayData_2_valid 
                        = vlSelf->__PVT___zz_outputStreamArrayData_2_valid_2;
                } else {
                    vlSelf->outputStreamArrayData_2_valid = 0U;
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_2)))) {
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l410_2_1))) {
                        vlSelf->outputStreamArrayData_2_valid = 1U;
                    }
                }
            } else {
                vlSelf->outputStreamArrayData_2_valid = 0U;
                if (vlSelf->__PVT__when_ArraySlice_l439_2) {
                    vlSelf->outputStreamArrayData_2_valid = 1U;
                }
            }
            vlSelf->outputStreamArrayData_3_payload = 0U;
            if (vlSelf->__PVT__when_ArraySlice_l369_3) {
                if (vlSelf->__PVT__when_ArraySlice_l370_3) {
                    vlSelf->outputStreamArrayData_3_payload 
                        = vlSelf->__PVT___zz_outputStreamArrayData_3_payload;
                    vlSelf->outputStreamArrayData_3_valid = 0U;
                    vlSelf->outputStreamArrayData_3_valid 
                        = vlSelf->__PVT___zz_outputStreamArrayData_3_valid_2;
                } else {
                    vlSelf->outputStreamArrayData_3_valid = 0U;
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_3)))) {
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l410_3_1))) {
                        vlSelf->outputStreamArrayData_3_valid = 1U;
                    }
                }
            } else {
                vlSelf->outputStreamArrayData_3_valid = 0U;
                if (vlSelf->__PVT__when_ArraySlice_l439_3) {
                    vlSelf->outputStreamArrayData_3_valid = 1U;
                }
            }
        } else if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l369) {
                if (vlSelf->__PVT__when_ArraySlice_l229) {
                    vlSelf->outputStreamArrayData_0_payload 
                        = vlSelf->__PVT___zz_outputStreamArrayData_0_payload_2;
                    vlSelf->outputStreamArrayData_0_valid = 0U;
                    vlSelf->outputStreamArrayData_0_valid 
                        = vlSelf->__PVT___zz_outputStreamArrayData_0_valid_4;
                } else {
                    vlSelf->outputStreamArrayData_0_valid = 0U;
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_0)))) {
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l269))) {
                        vlSelf->outputStreamArrayData_0_valid = 1U;
                    }
                }
            } else {
                vlSelf->outputStreamArrayData_0_valid = 0U;
                if (vlSelf->__PVT__when_ArraySlice_l439) {
                    vlSelf->outputStreamArrayData_0_valid = 1U;
                }
            }
            vlSelf->outputStreamArrayData_1_payload = 0U;
            if (vlSelf->__PVT__when_ArraySlice_l369_1) {
                if (vlSelf->__PVT__when_ArraySlice_l229_1) {
                    vlSelf->outputStreamArrayData_1_payload 
                        = vlSelf->__PVT___zz_outputStreamArrayData_1_payload_2;
                    vlSelf->outputStreamArrayData_1_valid = 0U;
                    vlSelf->outputStreamArrayData_1_valid 
                        = vlSelf->__PVT___zz_outputStreamArrayData_1_valid_4;
                } else {
                    vlSelf->outputStreamArrayData_1_valid = 0U;
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_1)))) {
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l269_1_1))) {
                        vlSelf->outputStreamArrayData_1_valid = 1U;
                    }
                }
            } else {
                vlSelf->outputStreamArrayData_1_valid = 0U;
                if (vlSelf->__PVT__when_ArraySlice_l439_1) {
                    vlSelf->outputStreamArrayData_1_valid = 1U;
                }
            }
            vlSelf->outputStreamArrayData_2_payload = 0U;
            if (vlSelf->__PVT__when_ArraySlice_l369_2) {
                if (vlSelf->__PVT__when_ArraySlice_l229_2) {
                    vlSelf->outputStreamArrayData_2_payload 
                        = vlSelf->__PVT___zz_outputStreamArrayData_2_payload_2;
                    vlSelf->outputStreamArrayData_2_valid = 0U;
                    vlSelf->outputStreamArrayData_2_valid 
                        = vlSelf->__PVT___zz_outputStreamArrayData_2_valid_4;
                } else {
                    vlSelf->outputStreamArrayData_2_valid = 0U;
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_2)))) {
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l269_2_1))) {
                        vlSelf->outputStreamArrayData_2_valid = 1U;
                    }
                }
            } else {
                vlSelf->outputStreamArrayData_2_valid = 0U;
                if (vlSelf->__PVT__when_ArraySlice_l439_2) {
                    vlSelf->outputStreamArrayData_2_valid = 1U;
                }
            }
            vlSelf->outputStreamArrayData_3_payload = 0U;
            if (vlSelf->__PVT__when_ArraySlice_l369_3) {
                if (vlSelf->__PVT__when_ArraySlice_l229_3) {
                    vlSelf->outputStreamArrayData_3_payload 
                        = vlSelf->__PVT___zz_outputStreamArrayData_3_payload_2;
                    vlSelf->outputStreamArrayData_3_valid = 0U;
                    vlSelf->outputStreamArrayData_3_valid 
                        = vlSelf->__PVT___zz_outputStreamArrayData_3_valid_4;
                } else {
                    vlSelf->outputStreamArrayData_3_valid = 0U;
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_3)))) {
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l269_3_1))) {
                        vlSelf->outputStreamArrayData_3_valid = 1U;
                    }
                }
            } else {
                vlSelf->outputStreamArrayData_3_valid = 0U;
                if (vlSelf->__PVT__when_ArraySlice_l439_3) {
                    vlSelf->outputStreamArrayData_3_valid = 1U;
                }
            }
        } else {
            vlSelf->outputStreamArrayData_0_valid = 0U;
            vlSelf->outputStreamArrayData_1_payload = 0U;
            vlSelf->outputStreamArrayData_1_valid = 0U;
            vlSelf->outputStreamArrayData_2_payload = 0U;
            vlSelf->outputStreamArrayData_2_valid = 0U;
            vlSelf->outputStreamArrayData_3_payload = 0U;
            vlSelf->outputStreamArrayData_3_valid = 0U;
        }
    } else {
        vlSelf->outputStreamArrayData_0_valid = 0U;
        vlSelf->outputStreamArrayData_1_payload = 0U;
        vlSelf->outputStreamArrayData_1_valid = 0U;
        vlSelf->outputStreamArrayData_2_payload = 0U;
        vlSelf->outputStreamArrayData_2_valid = 0U;
        vlSelf->outputStreamArrayData_3_payload = 0U;
        vlSelf->outputStreamArrayData_3_valid = 0U;
    }
}

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__496(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__496\n"); );
    // Body
    vlSelf->outputStreamArrayData_4_payload = 0U;
    if ((1U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l369_4) {
                if (vlSelf->__PVT__when_ArraySlice_l370_4) {
                    vlSelf->outputStreamArrayData_4_payload 
                        = vlSelf->__PVT___zz_outputStreamArrayData_4_payload;
                    vlSelf->outputStreamArrayData_4_valid = 0U;
                    vlSelf->outputStreamArrayData_4_valid 
                        = vlSelf->__PVT___zz_outputStreamArrayData_4_valid_2;
                } else {
                    vlSelf->outputStreamArrayData_4_valid = 0U;
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_4)))) {
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l410_4_1))) {
                        vlSelf->outputStreamArrayData_4_valid = 1U;
                    }
                }
            } else {
                vlSelf->outputStreamArrayData_4_valid = 0U;
                if (vlSelf->__PVT__when_ArraySlice_l439_4) {
                    vlSelf->outputStreamArrayData_4_valid = 1U;
                }
            }
            vlSelf->outputStreamArrayData_5_payload = 0U;
            if (vlSelf->__PVT__when_ArraySlice_l369_5) {
                if (vlSelf->__PVT__when_ArraySlice_l370_5) {
                    vlSelf->outputStreamArrayData_5_payload 
                        = vlSelf->__PVT___zz_outputStreamArrayData_5_payload;
                    vlSelf->outputStreamArrayData_5_valid = 0U;
                    vlSelf->outputStreamArrayData_5_valid 
                        = vlSelf->__PVT___zz_outputStreamArrayData_5_valid_2;
                } else {
                    vlSelf->outputStreamArrayData_5_valid = 0U;
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_5)))) {
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l410_5))) {
                        vlSelf->outputStreamArrayData_5_valid = 1U;
                    }
                }
            } else {
                vlSelf->outputStreamArrayData_5_valid = 0U;
                if (vlSelf->__PVT__when_ArraySlice_l439_5) {
                    vlSelf->outputStreamArrayData_5_valid = 1U;
                }
            }
            vlSelf->outputStreamArrayData_6_payload = 0U;
            if (vlSelf->__PVT__when_ArraySlice_l369_6) {
                if (vlSelf->__PVT__when_ArraySlice_l370_6) {
                    vlSelf->outputStreamArrayData_6_payload 
                        = vlSelf->__PVT___zz_outputStreamArrayData_6_payload;
                    vlSelf->outputStreamArrayData_6_valid = 0U;
                    vlSelf->outputStreamArrayData_6_valid 
                        = vlSelf->__PVT___zz_outputStreamArrayData_6_valid_2;
                } else {
                    vlSelf->outputStreamArrayData_6_valid = 0U;
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_6)))) {
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l410_6))) {
                        vlSelf->outputStreamArrayData_6_valid = 1U;
                    }
                }
            } else {
                vlSelf->outputStreamArrayData_6_valid = 0U;
                if (vlSelf->__PVT__when_ArraySlice_l439_6) {
                    vlSelf->outputStreamArrayData_6_valid = 1U;
                }
            }
            vlSelf->outputStreamArrayData_7_payload = 0U;
            if (vlSelf->__PVT__when_ArraySlice_l369_7) {
                if (vlSelf->__PVT__when_ArraySlice_l370_7) {
                    vlSelf->outputStreamArrayData_7_payload 
                        = vlSelf->__PVT___zz_outputStreamArrayData_7_payload;
                    vlSelf->outputStreamArrayData_7_valid = 0U;
                    vlSelf->outputStreamArrayData_7_valid 
                        = vlSelf->__PVT___zz_outputStreamArrayData_7_valid_2;
                } else {
                    vlSelf->outputStreamArrayData_7_valid = 0U;
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_7)))) {
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l410_7))) {
                        vlSelf->outputStreamArrayData_7_valid = 1U;
                    }
                }
            } else {
                vlSelf->outputStreamArrayData_7_valid = 0U;
                if (vlSelf->__PVT__when_ArraySlice_l439_7) {
                    vlSelf->outputStreamArrayData_7_valid = 1U;
                }
            }
        } else if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l369_4) {
                if (vlSelf->__PVT__when_ArraySlice_l229_4) {
                    vlSelf->outputStreamArrayData_4_payload 
                        = vlSelf->__PVT___zz_outputStreamArrayData_4_payload_2;
                    vlSelf->outputStreamArrayData_4_valid = 0U;
                    vlSelf->outputStreamArrayData_4_valid 
                        = vlSelf->__PVT___zz_outputStreamArrayData_4_valid_4;
                } else {
                    vlSelf->outputStreamArrayData_4_valid = 0U;
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_4)))) {
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l269_4_1))) {
                        vlSelf->outputStreamArrayData_4_valid = 1U;
                    }
                }
            } else {
                vlSelf->outputStreamArrayData_4_valid = 0U;
                if (vlSelf->__PVT__when_ArraySlice_l439_4) {
                    vlSelf->outputStreamArrayData_4_valid = 1U;
                }
            }
            vlSelf->outputStreamArrayData_5_payload = 0U;
            if (vlSelf->__PVT__when_ArraySlice_l369_5) {
                if (vlSelf->__PVT__when_ArraySlice_l229_5) {
                    vlSelf->outputStreamArrayData_5_payload 
                        = vlSelf->__PVT___zz_outputStreamArrayData_5_payload_2;
                    vlSelf->outputStreamArrayData_5_valid = 0U;
                    vlSelf->outputStreamArrayData_5_valid 
                        = vlSelf->__PVT___zz_outputStreamArrayData_5_valid_4;
                } else {
                    vlSelf->outputStreamArrayData_5_valid = 0U;
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_5)))) {
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l269_5))) {
                        vlSelf->outputStreamArrayData_5_valid = 1U;
                    }
                }
            } else {
                vlSelf->outputStreamArrayData_5_valid = 0U;
                if (vlSelf->__PVT__when_ArraySlice_l439_5) {
                    vlSelf->outputStreamArrayData_5_valid = 1U;
                }
            }
            vlSelf->outputStreamArrayData_6_payload = 0U;
            if (vlSelf->__PVT__when_ArraySlice_l369_6) {
                if (vlSelf->__PVT__when_ArraySlice_l229_6) {
                    vlSelf->outputStreamArrayData_6_payload 
                        = vlSelf->__PVT___zz_outputStreamArrayData_6_payload_2;
                    vlSelf->outputStreamArrayData_6_valid = 0U;
                    vlSelf->outputStreamArrayData_6_valid 
                        = vlSelf->__PVT___zz_outputStreamArrayData_6_valid_4;
                } else {
                    vlSelf->outputStreamArrayData_6_valid = 0U;
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_6)))) {
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l269_6))) {
                        vlSelf->outputStreamArrayData_6_valid = 1U;
                    }
                }
            } else {
                vlSelf->outputStreamArrayData_6_valid = 0U;
                if (vlSelf->__PVT__when_ArraySlice_l439_6) {
                    vlSelf->outputStreamArrayData_6_valid = 1U;
                }
            }
            vlSelf->outputStreamArrayData_7_payload = 0U;
            if (vlSelf->__PVT__when_ArraySlice_l369_7) {
                if (vlSelf->__PVT__when_ArraySlice_l229_7) {
                    vlSelf->outputStreamArrayData_7_payload 
                        = vlSelf->__PVT___zz_outputStreamArrayData_7_payload_2;
                    vlSelf->outputStreamArrayData_7_valid = 0U;
                    vlSelf->outputStreamArrayData_7_valid 
                        = vlSelf->__PVT___zz_outputStreamArrayData_7_valid_4;
                } else {
                    vlSelf->outputStreamArrayData_7_valid = 0U;
                }
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_7)))) {
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l269_7))) {
                        vlSelf->outputStreamArrayData_7_valid = 1U;
                    }
                }
            } else {
                vlSelf->outputStreamArrayData_7_valid = 0U;
                if (vlSelf->__PVT__when_ArraySlice_l439_7) {
                    vlSelf->outputStreamArrayData_7_valid = 1U;
                }
            }
        } else {
            vlSelf->outputStreamArrayData_4_valid = 0U;
            vlSelf->outputStreamArrayData_5_payload = 0U;
            vlSelf->outputStreamArrayData_5_valid = 0U;
            vlSelf->outputStreamArrayData_6_payload = 0U;
            vlSelf->outputStreamArrayData_6_valid = 0U;
            vlSelf->outputStreamArrayData_7_payload = 0U;
            vlSelf->outputStreamArrayData_7_valid = 0U;
        }
    } else {
        vlSelf->outputStreamArrayData_4_valid = 0U;
        vlSelf->outputStreamArrayData_5_payload = 0U;
        vlSelf->outputStreamArrayData_5_valid = 0U;
        vlSelf->outputStreamArrayData_6_payload = 0U;
        vlSelf->outputStreamArrayData_6_valid = 0U;
        vlSelf->outputStreamArrayData_7_payload = 0U;
        vlSelf->outputStreamArrayData_7_valid = 0U;
    }
}

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__585(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__585\n"); );
    // Body
    vlSelf->__PVT__fifoGroup_1__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_1_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_1__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_2__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_2_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_2__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_3__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_3_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_3__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_4__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_4_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_4__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_5__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_5_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_5__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_6__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_6_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_6__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_7__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_7_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_7__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_8__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_8_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_8__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_9__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_9_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_9__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_10__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_10_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_10__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_11__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_11_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_11__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_12__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_12_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_12__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_13__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_13_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_13__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_14__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_14_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_14__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_15__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_15_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_15__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_16__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_16_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_16__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_17__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_17_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_17__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_18__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_18_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_18__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_19__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_19_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_19__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_20__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_20_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_20__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_21__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_21_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_21__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_22__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_22_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_22__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_23__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_23_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_23__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_24__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_24_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_24__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_25__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_25_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_25__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_26__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_26_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_26__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_27__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_27_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_27__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_28__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_28_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_28__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_29__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_29_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_29__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_30__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_30_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_30__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_31__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_31_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_31__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_32__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_32_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_32__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_33__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_33_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_33__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_34__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_34_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_34__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_35__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_35_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_35__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_36__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_36_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_36__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_37__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_37_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_37__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_38__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_38_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_38__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_39__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_39_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_39__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_40__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_40_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_40__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_41__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_41_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_41__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_42__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_42_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_42__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_43__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_43_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_43__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_44__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_44_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_44__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_45__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_45_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_45__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_46__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_46_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_46__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_47__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_47_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_47__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_48__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_48_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_48__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_49__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_49_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_49__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_50__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_50_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_50__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_51__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_51_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_51__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_52__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_52_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_52__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_53__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_53_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_53__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_54__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_54_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_54__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_55__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_55_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_55__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_56__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_56_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_56__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_57__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_57_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_57__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_58__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_58_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_58__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_59__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_59_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_59__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_60__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_60_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_60__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_61__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_61_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_61__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_62__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_62_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_62__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_63__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_63_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_63__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_64__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_64_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_64__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_65__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_65_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_65__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_66__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_66_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_66__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_67__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_67_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_67__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_68__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_68_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_68__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_69__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_69_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_69__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_70__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_70_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_70__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_71__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_71_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_71__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_72__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_72_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_72__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_73__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_73_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_73__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_74__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_74_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_74__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_75__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_75_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_75__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_76__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_76_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_76__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_77__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_77_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_77__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_78__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_78_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_78__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_79__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_79_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_79__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_80__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_80_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_80__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_81__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_81_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_81__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_82__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_82_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_82__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_83__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_83_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_83__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_84__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_84_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_84__DOT__logic_full)));
}

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__586(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__586\n"); );
    // Body
    vlSelf->__PVT__fifoGroup_85__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_85_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_85__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_86__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_86_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_86__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_87__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_87_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_87__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_88__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_88_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_88__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_89__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_89_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_89__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_90__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_90_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_90__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_91__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_91_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_91__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_92__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_92_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_92__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_93__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_93_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_93__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_94__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_94_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_94__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_95__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_95_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_95__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_96__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_96_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_96__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_97__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_97_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_97__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_98__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_98_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_98__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_99__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_99_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_99__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_100__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_100_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_100__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_101__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_101_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_101__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_102__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_102_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_102__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_103__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_103_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_103__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_104__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_104_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_104__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_105__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_105_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_105__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_106__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_106_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_106__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_107__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_107_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_107__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_108__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_108_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_108__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_109__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_109_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_109__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_110__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_110_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_110__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_111__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_111_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_111__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_112__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_112_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_112__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_113__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_113_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_113__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_114__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_114_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_114__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_115__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_115_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_115__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_116__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_116_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_116__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_117__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_117_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_117__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_118__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_118_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_118__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_119__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_119_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_119__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_120__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_120_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_120__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_121__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_121_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_121__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_122__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_122_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_122__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_123__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_123_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_123__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_124__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_124_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_124__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_125__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_125_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_125__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_126__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_126_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_126__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_127__DOT__logic_pushing 
        = ((IData)(vlSelf->__PVT__fifoGroup_127_io_push_valid) 
           & (~ (IData)(vlSelf->__PVT__fifoGroup_127__DOT__logic_full)));
    vlSelf->__PVT__fifoGroup_0__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_0_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_0_io_pop_ready));
    vlSelf->__PVT__fifoGroup_1__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_1_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_1_io_pop_ready));
    vlSelf->__PVT__fifoGroup_2__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_2_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_2_io_pop_ready));
    vlSelf->__PVT__fifoGroup_3__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_3_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_3_io_pop_ready));
    vlSelf->__PVT__fifoGroup_4__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_4_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_4_io_pop_ready));
    vlSelf->__PVT__fifoGroup_5__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_5_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_5_io_pop_ready));
    vlSelf->__PVT__fifoGroup_6__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_6_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_6_io_pop_ready));
    vlSelf->__PVT__fifoGroup_7__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_7_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_7_io_pop_ready));
    vlSelf->__PVT__fifoGroup_8__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_8_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_8_io_pop_ready));
    vlSelf->__PVT__fifoGroup_9__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_9_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_9_io_pop_ready));
    vlSelf->__PVT__fifoGroup_10__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_10_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_10_io_pop_ready));
    vlSelf->__PVT__fifoGroup_11__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_11_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_11_io_pop_ready));
    vlSelf->__PVT__fifoGroup_12__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_12_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_12_io_pop_ready));
    vlSelf->__PVT__fifoGroup_13__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_13_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_13_io_pop_ready));
    vlSelf->__PVT__fifoGroup_14__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_14_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_14_io_pop_ready));
    vlSelf->__PVT__fifoGroup_15__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_15_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_15_io_pop_ready));
    vlSelf->__PVT__fifoGroup_16__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_16_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_16_io_pop_ready));
    vlSelf->__PVT__fifoGroup_17__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_17_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_17_io_pop_ready));
    vlSelf->__PVT__fifoGroup_18__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_18_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_18_io_pop_ready));
    vlSelf->__PVT__fifoGroup_19__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_19_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_19_io_pop_ready));
    vlSelf->__PVT__fifoGroup_20__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_20_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_20_io_pop_ready));
    vlSelf->__PVT__fifoGroup_21__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_21_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_21_io_pop_ready));
    vlSelf->__PVT__fifoGroup_22__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_22_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_22_io_pop_ready));
    vlSelf->__PVT__fifoGroup_23__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_23_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_23_io_pop_ready));
    vlSelf->__PVT__fifoGroup_24__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_24_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_24_io_pop_ready));
    vlSelf->__PVT__fifoGroup_25__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_25_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_25_io_pop_ready));
    vlSelf->__PVT__fifoGroup_26__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_26_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_26_io_pop_ready));
    vlSelf->__PVT__fifoGroup_27__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_27_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_27_io_pop_ready));
    vlSelf->__PVT__fifoGroup_28__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_28_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_28_io_pop_ready));
    vlSelf->__PVT__fifoGroup_29__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_29_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_29_io_pop_ready));
    vlSelf->__PVT__fifoGroup_30__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_30_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_30_io_pop_ready));
    vlSelf->__PVT__fifoGroup_31__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_31_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_31_io_pop_ready));
    vlSelf->__PVT__fifoGroup_32__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_32_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_32_io_pop_ready));
    vlSelf->__PVT__fifoGroup_33__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_33_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_33_io_pop_ready));
    vlSelf->__PVT__fifoGroup_34__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_34_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_34_io_pop_ready));
    vlSelf->__PVT__fifoGroup_35__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_35_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_35_io_pop_ready));
    vlSelf->__PVT__fifoGroup_36__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_36_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_36_io_pop_ready));
    vlSelf->__PVT__fifoGroup_37__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_37_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_37_io_pop_ready));
    vlSelf->__PVT__fifoGroup_38__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_38_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_38_io_pop_ready));
    vlSelf->__PVT__fifoGroup_39__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_39_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_39_io_pop_ready));
    vlSelf->__PVT__fifoGroup_40__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_40_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_40_io_pop_ready));
    vlSelf->__PVT__fifoGroup_41__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_41_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_41_io_pop_ready));
    vlSelf->__PVT__fifoGroup_42__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_42_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_42_io_pop_ready));
    vlSelf->__PVT__fifoGroup_43__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_43_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_43_io_pop_ready));
    vlSelf->__PVT__fifoGroup_44__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_44_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_44_io_pop_ready));
    vlSelf->__PVT__fifoGroup_45__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_45_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_45_io_pop_ready));
    vlSelf->__PVT__fifoGroup_46__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_46_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_46_io_pop_ready));
    vlSelf->__PVT__fifoGroup_47__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_47_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_47_io_pop_ready));
    vlSelf->__PVT__fifoGroup_48__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_48_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_48_io_pop_ready));
}

extern const VlUnpacked<CData/*0:0*/, 64> VarraySlice__ConstPool__TABLE_h5206a6da_0;
extern const VlUnpacked<CData/*0:0*/, 64> VarraySlice__ConstPool__TABLE_hf0fb746f_0;

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__587(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__587\n"); );
    // Init
    CData/*5:0*/ __Vtableidx3;
    // Body
    vlSelf->__PVT__fifoGroup_49__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_49_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_49_io_pop_ready));
    vlSelf->__PVT__fifoGroup_50__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_50_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_50_io_pop_ready));
    vlSelf->__PVT__fifoGroup_51__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_51_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_51_io_pop_ready));
    vlSelf->__PVT__fifoGroup_52__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_52_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_52_io_pop_ready));
    vlSelf->__PVT__fifoGroup_53__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_53_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_53_io_pop_ready));
    vlSelf->__PVT__fifoGroup_54__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_54_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_54_io_pop_ready));
    vlSelf->__PVT__fifoGroup_55__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_55_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_55_io_pop_ready));
    vlSelf->__PVT__fifoGroup_56__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_56_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_56_io_pop_ready));
    vlSelf->__PVT__fifoGroup_57__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_57_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_57_io_pop_ready));
    vlSelf->__PVT__fifoGroup_58__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_58_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_58_io_pop_ready));
    vlSelf->__PVT__fifoGroup_59__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_59_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_59_io_pop_ready));
    vlSelf->__PVT__fifoGroup_60__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_60_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_60_io_pop_ready));
    vlSelf->__PVT__fifoGroup_61__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_61_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_61_io_pop_ready));
    vlSelf->__PVT__fifoGroup_62__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_62_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_62_io_pop_ready));
    vlSelf->__PVT__fifoGroup_63__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_63_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_63_io_pop_ready));
    vlSelf->__PVT__fifoGroup_64__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_64_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_64_io_pop_ready));
    vlSelf->__PVT__fifoGroup_65__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_65_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_65_io_pop_ready));
    vlSelf->__PVT__fifoGroup_66__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_66_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_66_io_pop_ready));
    vlSelf->__PVT__fifoGroup_67__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_67_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_67_io_pop_ready));
    vlSelf->__PVT__fifoGroup_68__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_68_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_68_io_pop_ready));
    vlSelf->__PVT__fifoGroup_69__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_69_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_69_io_pop_ready));
    vlSelf->__PVT__fifoGroup_70__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_70_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_70_io_pop_ready));
    vlSelf->__PVT__fifoGroup_71__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_71_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_71_io_pop_ready));
    vlSelf->__PVT__fifoGroup_72__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_72_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_72_io_pop_ready));
    vlSelf->__PVT__fifoGroup_73__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_73_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_73_io_pop_ready));
    vlSelf->__PVT__fifoGroup_74__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_74_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_74_io_pop_ready));
    vlSelf->__PVT__fifoGroup_75__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_75_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_75_io_pop_ready));
    vlSelf->__PVT__fifoGroup_76__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_76_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_76_io_pop_ready));
    vlSelf->__PVT__fifoGroup_77__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_77_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_77_io_pop_ready));
    vlSelf->__PVT__fifoGroup_78__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_78_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_78_io_pop_ready));
    vlSelf->__PVT__fifoGroup_79__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_79_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_79_io_pop_ready));
    vlSelf->__PVT__fifoGroup_80__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_80_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_80_io_pop_ready));
    vlSelf->__PVT__fifoGroup_81__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_81_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_81_io_pop_ready));
    vlSelf->__PVT__fifoGroup_82__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_82_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_82_io_pop_ready));
    vlSelf->__PVT__fifoGroup_83__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_83_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_83_io_pop_ready));
    vlSelf->__PVT__fifoGroup_84__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_84_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_84_io_pop_ready));
    vlSelf->__PVT__fifoGroup_85__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_85_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_85_io_pop_ready));
    vlSelf->__PVT__fifoGroup_86__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_86_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_86_io_pop_ready));
    vlSelf->__PVT__fifoGroup_87__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_87_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_87_io_pop_ready));
    vlSelf->__PVT__fifoGroup_88__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_88_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_88_io_pop_ready));
    vlSelf->__PVT__fifoGroup_89__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_89_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_89_io_pop_ready));
    vlSelf->__PVT__fifoGroup_90__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_90_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_90_io_pop_ready));
    vlSelf->__PVT__fifoGroup_91__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_91_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_91_io_pop_ready));
    vlSelf->__PVT__fifoGroup_92__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_92_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_92_io_pop_ready));
    vlSelf->__PVT__fifoGroup_93__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_93_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_93_io_pop_ready));
    vlSelf->__PVT__fifoGroup_94__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_94_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_94_io_pop_ready));
    vlSelf->__PVT__fifoGroup_95__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_95_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_95_io_pop_ready));
    vlSelf->__PVT__fifoGroup_96__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_96_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_96_io_pop_ready));
    vlSelf->__PVT__fifoGroup_97__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_97_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_97_io_pop_ready));
    vlSelf->__PVT__fifoGroup_98__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_98_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_98_io_pop_ready));
    vlSelf->__PVT__fifoGroup_99__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_99_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_99_io_pop_ready));
    vlSelf->__PVT__fifoGroup_100__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_100_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_100_io_pop_ready));
    vlSelf->__PVT__fifoGroup_101__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_101_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_101_io_pop_ready));
    vlSelf->__PVT__fifoGroup_102__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_102_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_102_io_pop_ready));
    vlSelf->__PVT__fifoGroup_103__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_103_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_103_io_pop_ready));
    vlSelf->__PVT__fifoGroup_104__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_104_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_104_io_pop_ready));
    vlSelf->__PVT__fifoGroup_105__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_105_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_105_io_pop_ready));
    vlSelf->__PVT__fifoGroup_106__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_106_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_106_io_pop_ready));
    vlSelf->__PVT__fifoGroup_107__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_107_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_107_io_pop_ready));
    vlSelf->__PVT__fifoGroup_108__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_108_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_108_io_pop_ready));
    vlSelf->__PVT__fifoGroup_109__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_109_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_109_io_pop_ready));
    vlSelf->__PVT__fifoGroup_110__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_110_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_110_io_pop_ready));
    vlSelf->__PVT__fifoGroup_111__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_111_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_111_io_pop_ready));
    vlSelf->__PVT__fifoGroup_112__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_112_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_112_io_pop_ready));
    vlSelf->__PVT__fifoGroup_113__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_113_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_113_io_pop_ready));
    vlSelf->__PVT__fifoGroup_114__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_114_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_114_io_pop_ready));
    vlSelf->__PVT__fifoGroup_115__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_115_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_115_io_pop_ready));
    vlSelf->__PVT__fifoGroup_116__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_116_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_116_io_pop_ready));
    vlSelf->__PVT__fifoGroup_117__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_117_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_117_io_pop_ready));
    vlSelf->__PVT__fifoGroup_118__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_118_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_118_io_pop_ready));
    vlSelf->__PVT__fifoGroup_119__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_119_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_119_io_pop_ready));
    vlSelf->__PVT__fifoGroup_120__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_120_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_120_io_pop_ready));
    vlSelf->__PVT__fifoGroup_121__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_121_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_121_io_pop_ready));
    vlSelf->__PVT__fifoGroup_122__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_122_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_122_io_pop_ready));
    vlSelf->__PVT__fifoGroup_123__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_123_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_123_io_pop_ready));
    vlSelf->__PVT__fifoGroup_124__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_124_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_124_io_pop_ready));
    vlSelf->__PVT__fifoGroup_125__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_125_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_125_io_pop_ready));
    vlSelf->__PVT__fifoGroup_126__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_126_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_126_io_pop_ready));
    vlSelf->__PVT__fifoGroup_127__DOT__logic_popping 
        = ((IData)(vlSelf->__PVT__fifoGroup_127_io_pop_valid) 
           & (IData)(vlSelf->__PVT__fifoGroup_127_io_pop_ready));
    __Vtableidx3 = (((IData)(vlSelf->__PVT__when_ArraySlice_l318) 
                     << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_0_fire_13) 
                                << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l459) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__outputStreamArrayData_0_fire_6) 
                                            << 2U) 
                                           | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_0_willIncrement = 
        VarraySlice__ConstPool__TABLE_h5206a6da_0[__Vtableidx3];
    vlSelf->__Vtableidx4 = (((IData)(vlSelf->__PVT__when_ArraySlice_l318) 
                             << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_0_fire_13) 
                                        << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l459) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->__PVT__outputStreamArrayData_0_fire_6) 
                                                      << 2U) 
                                                     | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_0_willClear = VarraySlice__ConstPool__TABLE_hf0fb746f_0
        [vlSelf->__Vtableidx4];
    vlSelf->__PVT__outSliceNumb_0_willClear = 0U;
    if ((1U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l369) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_0)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l385) {
                        if (vlSelf->__PVT__when_ArraySlice_l377) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l388)))) {
                                vlSelf->__PVT__outSliceNumb_0_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l410))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l413)))) {
                                vlSelf->__PVT__outSliceNumb_0_willClear = 1U;
                            }
                        }
                    }
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l439) {
                if (vlSelf->__PVT__when_ArraySlice_l411) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l442)))) {
                        vlSelf->__PVT__outSliceNumb_0_willClear = 1U;
                    }
                }
            }
        } else if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l369) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_0)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l244) {
                        if (vlSelf->__PVT__when_ArraySlice_l377) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l247)))) {
                                vlSelf->__PVT__outSliceNumb_0_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l269))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l272)))) {
                                vlSelf->__PVT__outSliceNumb_0_willClear = 1U;
                            }
                        }
                    }
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l439) {
                if (vlSelf->__PVT__when_ArraySlice_l411) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l301)))) {
                        vlSelf->__PVT__outSliceNumb_0_willClear = 1U;
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void VarraySlice_arraySlice___combo__TOP__arraySlice__588(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___combo__TOP__arraySlice__588\n"); );
    // Init
    CData/*5:0*/ __Vtableidx5;
    CData/*5:0*/ __Vtableidx6;
    CData/*5:0*/ __Vtableidx7;
    CData/*5:0*/ __Vtableidx8;
    // Body
    vlSelf->__PVT__outSliceNumb_0_willIncrement = 0U;
    if ((1U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l369) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_0)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l376) {
                        if (vlSelf->__PVT__when_ArraySlice_l377) {
                            vlSelf->__PVT__outSliceNumb_0_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l385) {
                        if (vlSelf->__PVT__when_ArraySlice_l377) {
                            if (vlSelf->__PVT__when_ArraySlice_l388) {
                                vlSelf->__PVT__outSliceNumb_0_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l410))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411) {
                            if (vlSelf->__PVT__when_ArraySlice_l413) {
                                vlSelf->__PVT__outSliceNumb_0_willIncrement = 1U;
                            }
                        }
                    }
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l439) {
                if (vlSelf->__PVT__when_ArraySlice_l411) {
                    if (vlSelf->__PVT__when_ArraySlice_l442) {
                        vlSelf->__PVT__outSliceNumb_0_willIncrement = 1U;
                    }
                }
            }
        } else if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l369) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_0)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l235) {
                        if (vlSelf->__PVT__when_ArraySlice_l377) {
                            vlSelf->__PVT__outSliceNumb_0_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l244) {
                        if (vlSelf->__PVT__when_ArraySlice_l377) {
                            if (vlSelf->__PVT__when_ArraySlice_l247) {
                                vlSelf->__PVT__outSliceNumb_0_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l269))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411) {
                            if (vlSelf->__PVT__when_ArraySlice_l272) {
                                vlSelf->__PVT__outSliceNumb_0_willIncrement = 1U;
                            }
                        }
                    }
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l439) {
                if (vlSelf->__PVT__when_ArraySlice_l411) {
                    if (vlSelf->__PVT__when_ArraySlice_l301) {
                        vlSelf->__PVT__outSliceNumb_0_willIncrement = 1U;
                    }
                }
            }
        }
    }
    __Vtableidx5 = (((IData)(vlSelf->__PVT__when_ArraySlice_l318_1) 
                     << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_1_fire_13) 
                                << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l459_1) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__outputStreamArrayData_1_fire_6) 
                                            << 2U) 
                                           | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_1_willIncrement = 
        VarraySlice__ConstPool__TABLE_h5206a6da_0[__Vtableidx5];
    __Vtableidx6 = (((IData)(vlSelf->__PVT__when_ArraySlice_l318_1) 
                     << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_1_fire_13) 
                                << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l459_1) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__outputStreamArrayData_1_fire_6) 
                                            << 2U) 
                                           | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_1_willClear = VarraySlice__ConstPool__TABLE_hf0fb746f_0
        [__Vtableidx6];
    vlSelf->__PVT__outSliceNumb_1_willClear = 0U;
    if ((1U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l369_1) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_1)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l385_1) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_1) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l388_1)))) {
                                vlSelf->__PVT__outSliceNumb_1_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l410_1_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411_1) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l413_1)))) {
                                vlSelf->__PVT__outSliceNumb_1_willClear = 1U;
                            }
                        }
                    }
                    vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l376_1) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_1) {
                            vlSelf->__PVT__outSliceNumb_1_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l385_1) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_1) {
                            if (vlSelf->__PVT__when_ArraySlice_l388_1) {
                                vlSelf->__PVT__outSliceNumb_1_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l410_1_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411_1) {
                            if (vlSelf->__PVT__when_ArraySlice_l413_1) {
                                vlSelf->__PVT__outSliceNumb_1_willIncrement = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l439_1) {
                if (vlSelf->__PVT__when_ArraySlice_l411_1) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l442_1)))) {
                        vlSelf->__PVT__outSliceNumb_1_willClear = 1U;
                    }
                    vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l442_1) {
                        vlSelf->__PVT__outSliceNumb_1_willIncrement = 1U;
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
                }
            } else {
                vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
            }
        } else if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l369_1) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_1)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l244_1) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_1) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l247_1)))) {
                                vlSelf->__PVT__outSliceNumb_1_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l269_1_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411_1) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l272_1)))) {
                                vlSelf->__PVT__outSliceNumb_1_willClear = 1U;
                            }
                        }
                    }
                    vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l235_1) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_1) {
                            vlSelf->__PVT__outSliceNumb_1_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l244_1) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_1) {
                            if (vlSelf->__PVT__when_ArraySlice_l247_1) {
                                vlSelf->__PVT__outSliceNumb_1_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l269_1_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411_1) {
                            if (vlSelf->__PVT__when_ArraySlice_l272_1) {
                                vlSelf->__PVT__outSliceNumb_1_willIncrement = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l439_1) {
                if (vlSelf->__PVT__when_ArraySlice_l411_1) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l301_1)))) {
                        vlSelf->__PVT__outSliceNumb_1_willClear = 1U;
                    }
                    vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l301_1) {
                        vlSelf->__PVT__outSliceNumb_1_willIncrement = 1U;
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
                }
            } else {
                vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
            }
        } else {
            vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
        }
    } else {
        vlSelf->__PVT__outSliceNumb_1_willIncrement = 0U;
    }
    __Vtableidx7 = (((IData)(vlSelf->__PVT__when_ArraySlice_l318_2) 
                     << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_2_fire_13) 
                                << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l459_2) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__outputStreamArrayData_2_fire_6) 
                                            << 2U) 
                                           | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_2_willIncrement = 
        VarraySlice__ConstPool__TABLE_h5206a6da_0[__Vtableidx7];
    __Vtableidx8 = (((IData)(vlSelf->__PVT__when_ArraySlice_l318_2) 
                     << 5U) | (((IData)(vlSelf->__PVT__outputStreamArrayData_2_fire_13) 
                                << 4U) | (((IData)(vlSelf->__PVT__when_ArraySlice_l459_2) 
                                           << 3U) | 
                                          (((IData)(vlSelf->__PVT__outputStreamArrayData_2_fire_6) 
                                            << 2U) 
                                           | (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg)))));
    vlSelf->__PVT__handshakeTimes_2_willClear = VarraySlice__ConstPool__TABLE_hf0fb746f_0
        [__Vtableidx8];
    vlSelf->__PVT__outSliceNumb_2_willClear = 0U;
    if ((1U != (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
        if ((2U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l369_2) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_2)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l385_2) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_2) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l388_2)))) {
                                vlSelf->__PVT__outSliceNumb_2_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l410_2_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411_2) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l413_2)))) {
                                vlSelf->__PVT__outSliceNumb_2_willClear = 1U;
                            }
                        }
                    }
                    vlSelf->__PVT__outSliceNumb_2_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l376_2) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_2) {
                            vlSelf->__PVT__outSliceNumb_2_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l385_2) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_2) {
                            if (vlSelf->__PVT__when_ArraySlice_l388_2) {
                                vlSelf->__PVT__outSliceNumb_2_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l410_2_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411_2) {
                            if (vlSelf->__PVT__when_ArraySlice_l413_2) {
                                vlSelf->__PVT__outSliceNumb_2_willIncrement = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_2_willIncrement = 0U;
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l439_2) {
                if (vlSelf->__PVT__when_ArraySlice_l411_2) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l442_2)))) {
                        vlSelf->__PVT__outSliceNumb_2_willClear = 1U;
                    }
                    vlSelf->__PVT__outSliceNumb_2_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l442_2) {
                        vlSelf->__PVT__outSliceNumb_2_willIncrement = 1U;
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_2_willIncrement = 0U;
                }
            } else {
                vlSelf->__PVT__outSliceNumb_2_willIncrement = 0U;
            }
        } else if ((3U == (IData)(vlSelf->__PVT__arraySliceStateMachine_stateReg))) {
            if (vlSelf->__PVT__when_ArraySlice_l369_2) {
                if ((1U & (~ (IData)(vlSelf->__PVT__holdReadOp_2)))) {
                    if (vlSelf->__PVT__when_ArraySlice_l244_2) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_2) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l247_2)))) {
                                vlSelf->__PVT__outSliceNumb_2_willClear = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l269_2_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411_2) {
                            if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l272_2)))) {
                                vlSelf->__PVT__outSliceNumb_2_willClear = 1U;
                            }
                        }
                    }
                    vlSelf->__PVT__outSliceNumb_2_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l235_2) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_2) {
                            vlSelf->__PVT__outSliceNumb_2_willIncrement = 1U;
                        }
                    }
                    if (vlSelf->__PVT__when_ArraySlice_l244_2) {
                        if (vlSelf->__PVT__when_ArraySlice_l377_2) {
                            if (vlSelf->__PVT__when_ArraySlice_l247_2) {
                                vlSelf->__PVT__outSliceNumb_2_willIncrement = 1U;
                            }
                        }
                    }
                    if ((0U == (IData)(vlSelf->__PVT___zz_when_ArraySlice_l269_2_1))) {
                        if (vlSelf->__PVT__when_ArraySlice_l411_2) {
                            if (vlSelf->__PVT__when_ArraySlice_l272_2) {
                                vlSelf->__PVT__outSliceNumb_2_willIncrement = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_2_willIncrement = 0U;
                }
            } else if (vlSelf->__PVT__when_ArraySlice_l439_2) {
                if (vlSelf->__PVT__when_ArraySlice_l411_2) {
                    if ((1U & (~ (IData)(vlSelf->__PVT__when_ArraySlice_l301_2)))) {
                        vlSelf->__PVT__outSliceNumb_2_willClear = 1U;
                    }
                    vlSelf->__PVT__outSliceNumb_2_willIncrement = 0U;
                    if (vlSelf->__PVT__when_ArraySlice_l301_2) {
                        vlSelf->__PVT__outSliceNumb_2_willIncrement = 1U;
                    }
                } else {
                    vlSelf->__PVT__outSliceNumb_2_willIncrement = 0U;
                }
            } else {
                vlSelf->__PVT__outSliceNumb_2_willIncrement = 0U;
            }
        } else {
            vlSelf->__PVT__outSliceNumb_2_willIncrement = 0U;
        }
    } else {
        vlSelf->__PVT__outSliceNumb_2_willIncrement = 0U;
    }
}
