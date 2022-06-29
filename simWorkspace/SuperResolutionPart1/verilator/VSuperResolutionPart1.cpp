// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSuperResolutionPart1.h"
#include "VSuperResolutionPart1__Syms.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

VSuperResolutionPart1::VSuperResolutionPart1(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VSuperResolutionPart1__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , pixelsIn_valid{vlSymsp->TOP.pixelsIn_valid}
    , pixelsIn_ready{vlSymsp->TOP.pixelsIn_ready}
    , pixelsIn_payload_pixel{vlSymsp->TOP.pixelsIn_payload_pixel}
    , pixelsIn_payload_frameStart{vlSymsp->TOP.pixelsIn_payload_frameStart}
    , pixelsIn_payload_rowEnd{vlSymsp->TOP.pixelsIn_payload_rowEnd}
    , StartIn{vlSymsp->TOP.StartIn}
    , inpTwoDoneIn{vlSymsp->TOP.inpTwoDoneIn}
    , inpThreeDoneIn{vlSymsp->TOP.inpThreeDoneIn}
    , pixelsOut_valid{vlSymsp->TOP.pixelsOut_valid}
    , pixelsOut_ready{vlSymsp->TOP.pixelsOut_ready}
    , pixelsOut_payload_pixel{vlSymsp->TOP.pixelsOut_payload_pixel}
    , pixelsOut_payload_frameStart{vlSymsp->TOP.pixelsOut_payload_frameStart}
    , pixelsOut_payload_rowEnd{vlSymsp->TOP.pixelsOut_payload_rowEnd}
    , pixelsOut_payload_inpValid{vlSymsp->TOP.pixelsOut_payload_inpValid}
    , startOut{vlSymsp->TOP.startOut}
    , inpDoneOut{vlSymsp->TOP.inpDoneOut}
    , thresholdIn{vlSymsp->TOP.thresholdIn}
    , widthIn{vlSymsp->TOP.widthIn}
    , heightIn{vlSymsp->TOP.heightIn}
    , rootp{&(vlSymsp->TOP)}
{
}

VSuperResolutionPart1::VSuperResolutionPart1(const char* _vcname__)
    : VSuperResolutionPart1(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VSuperResolutionPart1::~VSuperResolutionPart1() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VSuperResolutionPart1___024root___eval_initial(VSuperResolutionPart1___024root* vlSelf);
void VSuperResolutionPart1___024root___eval_settle(VSuperResolutionPart1___024root* vlSelf);
void VSuperResolutionPart1___024root___eval(VSuperResolutionPart1___024root* vlSelf);
#ifdef VL_DEBUG
void VSuperResolutionPart1___024root___eval_debug_assertions(VSuperResolutionPart1___024root* vlSelf);
#endif  // VL_DEBUG
void VSuperResolutionPart1___024root___final(VSuperResolutionPart1___024root* vlSelf);

static void _eval_initial_loop(VSuperResolutionPart1__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VSuperResolutionPart1___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VSuperResolutionPart1___024root___eval_settle(&(vlSymsp->TOP));
        VSuperResolutionPart1___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VSuperResolutionPart1::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSuperResolutionPart1::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSuperResolutionPart1___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VSuperResolutionPart1___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VSuperResolutionPart1::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VSuperResolutionPart1::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VSuperResolutionPart1::final() {
    VSuperResolutionPart1___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VSuperResolutionPart1___024root__trace_init_top(VSuperResolutionPart1___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSuperResolutionPart1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSuperResolutionPart1___024root*>(voidSelf);
    VSuperResolutionPart1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VSuperResolutionPart1___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VSuperResolutionPart1___024root__trace_register(VSuperResolutionPart1___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void VSuperResolutionPart1::trace(VerilatedFstC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VSuperResolutionPart1___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
