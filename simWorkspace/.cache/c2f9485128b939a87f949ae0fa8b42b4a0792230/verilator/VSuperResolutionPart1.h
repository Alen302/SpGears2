// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VSUPERRESOLUTIONPART1_H_
#define VERILATED_VSUPERRESOLUTIONPART1_H_  // guard

#include "verilated.h"

class VSuperResolutionPart1__Syms;
class VSuperResolutionPart1___024root;
class VerilatedFstC;

// This class is the main interface to the Verilated model
class VSuperResolutionPart1 VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    VSuperResolutionPart1__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&pixelsIn_valid,0,0);
    VL_OUT8(&pixelsIn_ready,0,0);
    VL_IN8(&pixelsIn_payload_pixel,7,0);
    VL_IN8(&pixelsIn_payload_frameStart,0,0);
    VL_IN8(&pixelsIn_payload_rowEnd,0,0);
    VL_IN8(&StartIn,0,0);
    VL_IN8(&inpTwoDoneIn,0,0);
    VL_IN8(&inpThreeDoneIn,0,0);
    VL_OUT8(&pixelsOut_valid,0,0);
    VL_IN8(&pixelsOut_ready,0,0);
    VL_OUT8(&pixelsOut_payload_pixel,7,0);
    VL_OUT8(&pixelsOut_payload_frameStart,0,0);
    VL_OUT8(&pixelsOut_payload_rowEnd,0,0);
    VL_OUT8(&pixelsOut_payload_inpValid,0,0);
    VL_OUT8(&startOut,0,0);
    VL_OUT8(&inpDoneOut,0,0);
    VL_IN8(&thresholdIn,7,0);
    VL_IN16(&widthIn,9,0);
    VL_IN16(&heightIn,9,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VSuperResolutionPart1___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VSuperResolutionPart1(VerilatedContext* contextp, const char* name = "TOP");
    explicit VSuperResolutionPart1(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VSuperResolutionPart1();
  private:
    VL_UNCOPYABLE(VSuperResolutionPart1);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Trace signals in the model; called by application code
    void trace(VerilatedFstC* tfp, int levels, int options = 0);
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
