// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VPINGPONGBUFFERWITHWRITEONLYMASTER_H_
#define VERILATED_VPINGPONGBUFFERWITHWRITEONLYMASTER_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class VPingPongBufferWithWriteOnlyMaster__Syms;
class VPingPongBufferWithWriteOnlyMaster___024root;
class VerilatedVcdC;
class VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster;


// This class is the main interface to the Verilated model
class VPingPongBufferWithWriteOnlyMaster VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    VPingPongBufferWithWriteOnlyMaster__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&startIn,0,0);
    VL_IN8(&aresetn,0,0);
    VL_IN8(&aclk,0,0);
    VL_IN8(&streamIn_valid,0,0);
    VL_OUT8(&streamIn_ready,0,0);
    VL_IN8(&bufferDepthIn,7,0);
    VL_OUT8(&interruptOut,0,0);
    VL_IN8(&pathNumb,7,0);
    VL_OUT8(&full_aw_valid,0,0);
    VL_IN8(&full_aw_ready,0,0);
    VL_OUT8(&full_aw_payload_region,3,0);
    VL_OUT8(&full_aw_payload_len,7,0);
    VL_OUT8(&full_aw_payload_size,2,0);
    VL_OUT8(&full_aw_payload_burst,1,0);
    VL_OUT8(&full_aw_payload_cache,3,0);
    VL_OUT8(&full_aw_payload_qos,3,0);
    VL_OUT8(&full_aw_payload_prot,2,0);
    VL_OUT8(&full_w_valid,0,0);
    VL_IN8(&full_w_ready,0,0);
    VL_OUT8(&full_w_payload_strb,3,0);
    VL_OUT8(&full_w_payload_last,0,0);
    VL_IN8(&full_b_valid,0,0);
    VL_OUT8(&full_b_ready,0,0);
    VL_IN8(&full_b_payload_resp,1,0);
    VL_IN(&streamIn_payload,31,0);
    VL_IN(&startAddr,31,0);
    VL_IN(&offset,31,0);
    VL_OUT(&full_aw_payload_addr,31,0);
    VL_OUT(&full_w_payload_data,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster* const PingPongBufferWithWriteOnlyMaster;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    VPingPongBufferWithWriteOnlyMaster___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit VPingPongBufferWithWriteOnlyMaster(VerilatedContext* contextp, const char* name = "TOP");
    explicit VPingPongBufferWithWriteOnlyMaster(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~VPingPongBufferWithWriteOnlyMaster();
  private:
    VL_UNCOPYABLE(VPingPongBufferWithWriteOnlyMaster);  ///< Copying not allowed

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
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
