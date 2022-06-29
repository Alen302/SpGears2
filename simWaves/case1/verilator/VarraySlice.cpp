// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VarraySlice.h"
#include "VarraySlice__Syms.h"
#include "verilated_fst_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VarraySlice::VarraySlice(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VarraySlice__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , resetn{vlSymsp->TOP.resetn}
    , inputStreamArrayData_valid{vlSymsp->TOP.inputStreamArrayData_valid}
    , inputStreamArrayData_ready{vlSymsp->TOP.inputStreamArrayData_ready}
    , inputFeatureMapWidth{vlSymsp->TOP.inputFeatureMapWidth}
    , inputFeatureMapHeight{vlSymsp->TOP.inputFeatureMapHeight}
    , outputFeatureMapHeight{vlSymsp->TOP.outputFeatureMapHeight}
    , outputFeatureMapWidth{vlSymsp->TOP.outputFeatureMapWidth}
    , outputStreamArrayData_0_valid{vlSymsp->TOP.outputStreamArrayData_0_valid}
    , outputStreamArrayData_0_ready{vlSymsp->TOP.outputStreamArrayData_0_ready}
    , outputStreamArrayData_1_valid{vlSymsp->TOP.outputStreamArrayData_1_valid}
    , outputStreamArrayData_1_ready{vlSymsp->TOP.outputStreamArrayData_1_ready}
    , outputStreamArrayData_2_valid{vlSymsp->TOP.outputStreamArrayData_2_valid}
    , outputStreamArrayData_2_ready{vlSymsp->TOP.outputStreamArrayData_2_ready}
    , outputStreamArrayData_3_valid{vlSymsp->TOP.outputStreamArrayData_3_valid}
    , outputStreamArrayData_3_ready{vlSymsp->TOP.outputStreamArrayData_3_ready}
    , outputStreamArrayData_4_valid{vlSymsp->TOP.outputStreamArrayData_4_valid}
    , outputStreamArrayData_4_ready{vlSymsp->TOP.outputStreamArrayData_4_ready}
    , outputStreamArrayData_5_valid{vlSymsp->TOP.outputStreamArrayData_5_valid}
    , outputStreamArrayData_5_ready{vlSymsp->TOP.outputStreamArrayData_5_ready}
    , outputStreamArrayData_6_valid{vlSymsp->TOP.outputStreamArrayData_6_valid}
    , outputStreamArrayData_6_ready{vlSymsp->TOP.outputStreamArrayData_6_ready}
    , outputStreamArrayData_7_valid{vlSymsp->TOP.outputStreamArrayData_7_valid}
    , outputStreamArrayData_7_ready{vlSymsp->TOP.outputStreamArrayData_7_ready}
    , inputStreamArrayData_payload{vlSymsp->TOP.inputStreamArrayData_payload}
    , outputStreamArrayData_0_payload{vlSymsp->TOP.outputStreamArrayData_0_payload}
    , outputStreamArrayData_1_payload{vlSymsp->TOP.outputStreamArrayData_1_payload}
    , outputStreamArrayData_2_payload{vlSymsp->TOP.outputStreamArrayData_2_payload}
    , outputStreamArrayData_3_payload{vlSymsp->TOP.outputStreamArrayData_3_payload}
    , outputStreamArrayData_4_payload{vlSymsp->TOP.outputStreamArrayData_4_payload}
    , outputStreamArrayData_5_payload{vlSymsp->TOP.outputStreamArrayData_5_payload}
    , outputStreamArrayData_6_payload{vlSymsp->TOP.outputStreamArrayData_6_payload}
    , outputStreamArrayData_7_payload{vlSymsp->TOP.outputStreamArrayData_7_payload}
    , arraySlice{vlSymsp->TOP.arraySlice}
    , rootp{&(vlSymsp->TOP)}
{
}

VarraySlice::VarraySlice(const char* _vcname__)
    : VarraySlice(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VarraySlice::~VarraySlice() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VarraySlice___024root___eval_initial(VarraySlice___024root* vlSelf);
void VarraySlice___024root___eval_settle(VarraySlice___024root* vlSelf);
void VarraySlice___024root___eval(VarraySlice___024root* vlSelf);
#ifdef VL_DEBUG
void VarraySlice___024root___eval_debug_assertions(VarraySlice___024root* vlSelf);
#endif  // VL_DEBUG
void VarraySlice___024root___final(VarraySlice___024root* vlSelf);

static void _eval_initial_loop(VarraySlice__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VarraySlice___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VarraySlice___024root___eval_settle(&(vlSymsp->TOP));
        VarraySlice___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VarraySlice::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VarraySlice::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VarraySlice___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VarraySlice___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VarraySlice::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VarraySlice::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VarraySlice::final() {
    VarraySlice___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VarraySlice___024root__trace_init_top(VarraySlice___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    VarraySlice___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VarraySlice___024root*>(voidSelf);
    VarraySlice__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VarraySlice___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VarraySlice___024root__trace_register(VarraySlice___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void VarraySlice::trace(VerilatedFstC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VarraySlice___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
