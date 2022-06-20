// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VARRAYSLICE_H_
#define VERILATED_VARRAYSLICE_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class VarraySlice__Syms;
class VarraySlice___024root;
class VerilatedFstC;
class VarraySlice_arraySlice;


// This class is the main interface to the Verilated model
class VarraySlice VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    VarraySlice__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&resetn,0,0);
    VL_IN8(&inputStreamArrayData_valid,0,0);
    VL_OUT8(&inputStreamArrayData_ready,0,0);
    VL_IN8(&inputFeatureMapWidth,7,0);
    VL_IN8(&inputFeatureMapHeight,5,0);
    VL_IN8(&outputFeatureMapHeight,2,0);
    VL_IN8(&outputFeatureMapWidth,4,0);
    VL_OUT8(&outputStreamArrayData_0_valid,0,0);
    VL_IN8(&outputStreamArrayData_0_ready,0,0);
    VL_OUT8(&outputStreamArrayData_1_valid,0,0);
    VL_IN8(&outputStreamArrayData_1_ready,0,0);
    VL_OUT8(&outputStreamArrayData_2_valid,0,0);
    VL_IN8(&outputStreamArrayData_2_ready,0,0);
    VL_OUT8(&outputStreamArrayData_3_valid,0,0);
    VL_IN8(&outputStreamArrayData_3_ready,0,0);
    VL_OUT8(&outputStreamArrayData_4_valid,0,0);
    VL_IN8(&outputStreamArrayData_4_ready,0,0);
    VL_OUT8(&outputStreamArrayData_5_valid,0,0);
    VL_IN8(&outputStreamArrayData_5_ready,0,0);
    VL_OUT8(&outputStreamArrayData_6_valid,0,0);
    VL_IN8(&outputStreamArrayData_6_ready,0,0);
    VL_OUT8(&outputStreamArrayData_7_valid,0,0);
    VL_IN8(&outputStreamArrayData_7_ready,0,0);
    VL_IN(&inputStreamArrayData_payload,31,0);
    VL_OUT(&outputStreamArrayData_0_payload,31,0);
    VL_OUT(&outputStreamArrayData_1_payload,31,0);
    VL_OUT(&outputStreamArrayData_2_payload,31,0);
    VL_OUT(&outputStreamArrayData_3_payload,31,0);
    VL_OUT(&outputStreamArrayData_4_payload,31,0);
    VL_OUT(&outputStreamArrayData_5_payload,31,0);
    VL_OUT(&outputStreamArrayData_6_payload,31,0);
    VL_OUT(&outputStreamArrayData_7_payload,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VarraySlice_arraySlice* const arraySlice;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VarraySlice___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VarraySlice(VerilatedContext* contextp, const char* name = "TOP");
    explicit VarraySlice(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VarraySlice();
  private:
    VL_UNCOPYABLE(VarraySlice);  ///< Copying not allowed

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
