// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VarraySlice.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VarraySlice_arraySlice.h"

VL_INLINE_OPT void VarraySlice_arraySlice___sequent__TOP__arraySlice__101(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___sequent__TOP__arraySlice__101\n"); );
    // Body
    if (vlSelf->__Vdlyvset__fifoGroup_9__DOT__logic_ram__v0) {
        vlSelf->__PVT__fifoGroup_9__DOT__logic_ram[vlSelf->__Vdlyvdim0__fifoGroup_9__DOT__logic_ram__v0] 
            = vlSelf->__Vdlyvval__fifoGroup_9__DOT__logic_ram__v0;
    }
    if (vlSelf->__Vdlyvset__fifoGroup_8__DOT__logic_ram__v0) {
        vlSelf->__PVT__fifoGroup_8__DOT__logic_ram[vlSelf->__Vdlyvdim0__fifoGroup_8__DOT__logic_ram__v0] 
            = vlSelf->__Vdlyvval__fifoGroup_8__DOT__logic_ram__v0;
    }
    if (vlSelf->__Vdlyvset__fifoGroup_7__DOT__logic_ram__v0) {
        vlSelf->__PVT__fifoGroup_7__DOT__logic_ram[vlSelf->__Vdlyvdim0__fifoGroup_7__DOT__logic_ram__v0] 
            = vlSelf->__Vdlyvval__fifoGroup_7__DOT__logic_ram__v0;
    }
    if (vlSelf->__Vdlyvset__fifoGroup_6__DOT__logic_ram__v0) {
        vlSelf->__PVT__fifoGroup_6__DOT__logic_ram[vlSelf->__Vdlyvdim0__fifoGroup_6__DOT__logic_ram__v0] 
            = vlSelf->__Vdlyvval__fifoGroup_6__DOT__logic_ram__v0;
    }
    if (vlSelf->__Vdlyvset__fifoGroup_5__DOT__logic_ram__v0) {
        vlSelf->__PVT__fifoGroup_5__DOT__logic_ram[vlSelf->__Vdlyvdim0__fifoGroup_5__DOT__logic_ram__v0] 
            = vlSelf->__Vdlyvval__fifoGroup_5__DOT__logic_ram__v0;
    }
    if (vlSelf->__Vdlyvset__fifoGroup_4__DOT__logic_ram__v0) {
        vlSelf->__PVT__fifoGroup_4__DOT__logic_ram[vlSelf->__Vdlyvdim0__fifoGroup_4__DOT__logic_ram__v0] 
            = vlSelf->__Vdlyvval__fifoGroup_4__DOT__logic_ram__v0;
    }
    if (vlSelf->__Vdlyvset__fifoGroup_3__DOT__logic_ram__v0) {
        vlSelf->__PVT__fifoGroup_3__DOT__logic_ram[vlSelf->__Vdlyvdim0__fifoGroup_3__DOT__logic_ram__v0] 
            = vlSelf->__Vdlyvval__fifoGroup_3__DOT__logic_ram__v0;
    }
    if (vlSelf->__Vdlyvset__fifoGroup_2__DOT__logic_ram__v0) {
        vlSelf->__PVT__fifoGroup_2__DOT__logic_ram[vlSelf->__Vdlyvdim0__fifoGroup_2__DOT__logic_ram__v0] 
            = vlSelf->__Vdlyvval__fifoGroup_2__DOT__logic_ram__v0;
    }
    if (vlSelf->__Vdlyvset__fifoGroup_1__DOT__logic_ram__v0) {
        vlSelf->__PVT__fifoGroup_1__DOT__logic_ram[vlSelf->__Vdlyvdim0__fifoGroup_1__DOT__logic_ram__v0] 
            = vlSelf->__Vdlyvval__fifoGroup_1__DOT__logic_ram__v0;
    }
    if (vlSelf->__Vdlyvset__fifoGroup_0__DOT__logic_ram__v0) {
        vlSelf->__PVT__fifoGroup_0__DOT__logic_ram[vlSelf->__Vdlyvdim0__fifoGroup_0__DOT__logic_ram__v0] 
            = vlSelf->__Vdlyvval__fifoGroup_0__DOT__logic_ram__v0;
    }
}

VL_INLINE_OPT void VarraySlice_arraySlice___settle__TOP__arraySlice__103(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__103\n"); );
    // Body
    vlSelf->__PVT___zz_outputStreamArrayData_0_payload_2 
        = ((0x40U & (IData)(vlSelf->__PVT__selectReadFifo_0))
            ? ((0x20U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                ? ((0x10U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                    ? ((8U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                        ? ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_127__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_126__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_125__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_124__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_123__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_122__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_121__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_120__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_119__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_118__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_117__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_116__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_115__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_114__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_113__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_112__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                        ? ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_111__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_110__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_109__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_108__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_107__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_106__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_105__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_104__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_103__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_102__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_101__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_100__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_99__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_98__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_97__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_96__DOT___zz_logic_ram_port0)))))
                : ((0x10U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                    ? ((8U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                        ? ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_95__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_94__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_93__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_92__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_91__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_90__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_89__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_88__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_87__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_86__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_85__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_84__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_83__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_82__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_81__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_80__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                        ? ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_78__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_77__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_76__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_75__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_74__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_73__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_72__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_71__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_70__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_69__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_68__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_67__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_66__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_65__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_64__DOT___zz_logic_ram_port0))))))
            : ((0x20U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                ? ((0x10U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                    ? ((8U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                        ? ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_63__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_62__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_61__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_60__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_59__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_58__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_57__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_56__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_55__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_54__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_53__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_52__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_51__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_50__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_49__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_48__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                        ? ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_47__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_46__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_45__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_44__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_43__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_42__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_41__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_40__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_39__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_38__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_37__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_36__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_35__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_34__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_33__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_32__DOT___zz_logic_ram_port0)))))
                : ((0x10U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                    ? ((8U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                        ? ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_31__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_30__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_29__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_28__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_27__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_26__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_25__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_24__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_23__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_22__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_21__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_20__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_19__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_18__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_17__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_16__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                        ? ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_15__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_14__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_13__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_12__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_11__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_10__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_9__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_8__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                            ? ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_7__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_6__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_5__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_4__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                ? ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_3__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_2__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT__selectReadFifo_0))
                                    ? vlSelf->__PVT__fifoGroup_1__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_0__DOT___zz_logic_ram_port0)))))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___settle__TOP__arraySlice__131(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__131\n"); );
    // Body
    vlSelf->__PVT___zz_outputStreamArrayData_7_payload_2 
        = ((0x40U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
            ? ((0x20U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                ? ((0x10U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_127__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_126__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_125__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_124__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_123__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_122__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_121__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_120__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_119__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_118__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_117__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_116__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_115__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_114__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_113__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_112__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_111__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_110__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_109__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_108__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_107__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_106__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_105__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_104__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_103__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_102__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_101__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_100__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_99__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_98__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_97__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_96__DOT___zz_logic_ram_port0)))))
                : ((0x10U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_95__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_94__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_93__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_92__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_91__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_90__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_89__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_88__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_87__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_86__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_85__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_84__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_83__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_82__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_81__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_80__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_78__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_77__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_76__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_75__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_74__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_73__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_72__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_71__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_70__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_69__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_68__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_67__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_66__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_65__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_64__DOT___zz_logic_ram_port0))))))
            : ((0x20U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                ? ((0x10U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_63__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_62__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_61__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_60__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_59__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_58__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_57__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_56__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_55__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_54__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_53__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_52__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_51__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_50__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_49__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_48__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_47__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_46__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_45__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_44__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_43__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_42__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_41__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_40__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_39__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_38__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_37__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_36__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_35__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_34__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_33__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_32__DOT___zz_logic_ram_port0)))))
                : ((0x10U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_31__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_30__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_29__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_28__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_27__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_26__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_25__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_24__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_23__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_22__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_21__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_20__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_19__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_18__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_17__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_16__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_15__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_14__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_13__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_12__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_11__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_10__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_9__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_8__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_7__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_6__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_5__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_4__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_3__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_2__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_selectReadFifo_7_6))
                                    ? vlSelf->__PVT__fifoGroup_1__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_0__DOT___zz_logic_ram_port0)))))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___settle__TOP__arraySlice__132(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__132\n"); );
    // Body
    vlSelf->__PVT___zz_outputStreamArrayData_2_payload 
        = ((0x40U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
            ? ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                ? ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_127__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_126__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_125__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_124__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_123__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_122__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_121__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_120__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_119__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_118__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_117__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_116__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_115__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_114__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_113__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_112__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_111__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_110__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_109__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_108__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_107__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_106__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_105__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_104__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_103__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_102__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_101__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_100__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_99__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_98__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_97__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_96__DOT___zz_logic_ram_port0)))))
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_95__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_94__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_93__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_92__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_91__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_90__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_89__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_88__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_87__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_86__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_85__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_84__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_83__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_82__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_81__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_80__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_78__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_77__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_76__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_75__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_74__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_73__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_72__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_71__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_70__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_69__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_68__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_67__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_66__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_65__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_64__DOT___zz_logic_ram_port0))))))
            : ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                ? ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_63__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_62__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_61__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_60__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_59__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_58__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_57__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_56__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_55__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_54__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_53__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_52__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_51__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_50__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_49__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_48__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_47__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_46__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_45__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_44__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_43__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_42__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_41__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_40__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_39__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_38__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_37__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_36__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_35__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_34__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_33__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_32__DOT___zz_logic_ram_port0)))))
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_31__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_30__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_29__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_28__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_27__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_26__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_25__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_24__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_23__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_22__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_21__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_20__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_19__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_18__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_17__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_16__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_15__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_14__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_13__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_12__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_11__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_10__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_9__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_8__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_7__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_6__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_5__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_4__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_3__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_2__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_1__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_0__DOT___zz_logic_ram_port0)))))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___settle__TOP__arraySlice__133(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__133\n"); );
    // Body
    vlSelf->__PVT___zz_outputStreamArrayData_2_payload_2 
        = ((0x40U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
            ? ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                ? ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_127__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_126__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_125__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_124__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_123__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_122__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_121__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_120__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_119__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_118__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_117__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_116__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_115__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_114__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_113__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_112__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_111__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_110__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_109__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_108__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_107__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_106__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_105__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_104__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_103__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_102__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_101__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_100__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_99__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_98__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_97__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_96__DOT___zz_logic_ram_port0)))))
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_95__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_94__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_93__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_92__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_91__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_90__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_89__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_88__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_87__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_86__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_85__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_84__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_83__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_82__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_81__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_80__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_78__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_77__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_76__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_75__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_74__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_73__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_72__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_71__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_70__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_69__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_68__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_67__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_66__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_65__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_64__DOT___zz_logic_ram_port0))))))
            : ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                ? ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_63__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_62__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_61__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_60__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_59__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_58__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_57__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_56__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_55__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_54__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_53__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_52__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_51__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_50__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_49__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_48__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_47__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_46__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_45__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_44__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_43__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_42__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_41__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_40__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_39__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_38__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_37__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_36__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_35__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_34__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_33__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_32__DOT___zz_logic_ram_port0)))))
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_31__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_30__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_29__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_28__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_27__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_26__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_25__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_24__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_23__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_22__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_21__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_20__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_19__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_18__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_17__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_16__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_15__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_14__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_13__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_12__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_11__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_10__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_9__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_8__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_7__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_6__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_5__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_4__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_3__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_2__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_2_valid))
                                    ? vlSelf->__PVT__fifoGroup_1__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_0__DOT___zz_logic_ram_port0)))))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___settle__TOP__arraySlice__134(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__134\n"); );
    // Body
    vlSelf->__PVT___zz_outputStreamArrayData_3_payload 
        = ((0x40U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
            ? ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                ? ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_127__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_126__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_125__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_124__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_123__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_122__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_121__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_120__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_119__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_118__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_117__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_116__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_115__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_114__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_113__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_112__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_111__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_110__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_109__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_108__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_107__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_106__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_105__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_104__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_103__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_102__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_101__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_100__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_99__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_98__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_97__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_96__DOT___zz_logic_ram_port0)))))
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_95__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_94__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_93__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_92__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_91__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_90__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_89__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_88__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_87__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_86__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_85__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_84__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_83__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_82__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_81__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_80__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_78__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_77__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_76__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_75__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_74__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_73__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_72__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_71__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_70__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_69__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_68__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_67__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_66__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_65__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_64__DOT___zz_logic_ram_port0))))))
            : ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                ? ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_63__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_62__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_61__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_60__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_59__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_58__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_57__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_56__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_55__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_54__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_53__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_52__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_51__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_50__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_49__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_48__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_47__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_46__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_45__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_44__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_43__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_42__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_41__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_40__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_39__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_38__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_37__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_36__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_35__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_34__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_33__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_32__DOT___zz_logic_ram_port0)))))
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_31__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_30__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_29__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_28__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_27__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_26__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_25__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_24__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_23__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_22__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_21__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_20__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_19__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_18__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_17__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_16__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_15__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_14__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_13__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_12__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_11__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_10__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_9__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_8__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_7__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_6__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_5__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_4__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_3__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_2__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_1__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_0__DOT___zz_logic_ram_port0)))))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___settle__TOP__arraySlice__135(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__135\n"); );
    // Body
    vlSelf->__PVT___zz_outputStreamArrayData_3_payload_2 
        = ((0x40U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
            ? ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                ? ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_127__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_126__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_125__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_124__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_123__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_122__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_121__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_120__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_119__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_118__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_117__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_116__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_115__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_114__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_113__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_112__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_111__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_110__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_109__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_108__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_107__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_106__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_105__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_104__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_103__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_102__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_101__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_100__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_99__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_98__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_97__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_96__DOT___zz_logic_ram_port0)))))
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_95__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_94__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_93__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_92__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_91__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_90__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_89__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_88__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_87__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_86__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_85__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_84__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_83__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_82__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_81__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_80__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_78__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_77__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_76__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_75__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_74__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_73__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_72__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_71__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_70__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_69__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_68__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_67__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_66__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_65__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_64__DOT___zz_logic_ram_port0))))))
            : ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                ? ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_63__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_62__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_61__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_60__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_59__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_58__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_57__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_56__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_55__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_54__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_53__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_52__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_51__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_50__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_49__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_48__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_47__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_46__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_45__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_44__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_43__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_42__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_41__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_40__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_39__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_38__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_37__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_36__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_35__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_34__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_33__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_32__DOT___zz_logic_ram_port0)))))
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_31__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_30__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_29__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_28__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_27__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_26__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_25__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_24__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_23__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_22__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_21__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_20__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_19__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_18__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_17__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_16__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_15__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_14__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_13__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_12__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_11__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_10__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_9__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_8__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_7__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_6__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_5__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_4__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_3__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_2__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_3_valid))
                                    ? vlSelf->__PVT__fifoGroup_1__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_0__DOT___zz_logic_ram_port0)))))));
}

VL_INLINE_OPT void VarraySlice_arraySlice___settle__TOP__arraySlice__136(VarraySlice_arraySlice* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      VarraySlice_arraySlice___settle__TOP__arraySlice__136\n"); );
    // Body
    vlSelf->__PVT___zz_outputStreamArrayData_4_payload 
        = ((0x40U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
            ? ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                ? ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_127__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_126__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_125__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_124__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_123__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_122__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_121__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_120__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_119__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_118__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_117__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_116__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_115__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_114__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_113__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_112__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_111__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_110__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_109__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_108__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_107__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_106__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_105__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_104__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_103__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_102__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_101__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_100__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_99__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_98__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_97__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_96__DOT___zz_logic_ram_port0)))))
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_95__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_94__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_93__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_92__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_91__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_90__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_89__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_88__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_87__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_86__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_85__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_84__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_83__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_82__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_81__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_80__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_79__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_78__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_77__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_76__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_75__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_74__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_73__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_72__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_71__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_70__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_69__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_68__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_67__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_66__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_65__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_64__DOT___zz_logic_ram_port0))))))
            : ((0x20U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                ? ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_63__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_62__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_61__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_60__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_59__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_58__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_57__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_56__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_55__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_54__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_53__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_52__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_51__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_50__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_49__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_48__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_47__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_46__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_45__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_44__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_43__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_42__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_41__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_40__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_39__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_38__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_37__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_36__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_35__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_34__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_33__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_32__DOT___zz_logic_ram_port0)))))
                : ((0x10U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                    ? ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_31__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_30__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_29__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_28__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_27__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_26__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_25__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_24__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_23__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_22__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_21__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_20__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_19__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_18__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_17__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_16__DOT___zz_logic_ram_port0))))
                    : ((8U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                        ? ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_15__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_14__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_13__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_12__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_11__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_10__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_9__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_8__DOT___zz_logic_ram_port0)))
                        : ((4U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                            ? ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_7__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_6__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_5__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_4__DOT___zz_logic_ram_port0))
                            : ((2U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                ? ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_3__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_2__DOT___zz_logic_ram_port0)
                                : ((1U & (IData)(vlSelf->__PVT___zz_outputStreamArrayData_4_valid))
                                    ? vlSelf->__PVT__fifoGroup_1__DOT___zz_logic_ram_port0
                                    : vlSelf->__PVT__fifoGroup_0__DOT___zz_logic_ram_port0)))))));
}
