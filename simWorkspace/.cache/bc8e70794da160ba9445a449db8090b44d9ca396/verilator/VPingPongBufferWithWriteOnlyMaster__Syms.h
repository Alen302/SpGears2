// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPINGPONGBUFFERWITHWRITEONLYMASTER__SYMS_H_
#define VERILATED_VPINGPONGBUFFERWITHWRITEONLYMASTER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VPingPongBufferWithWriteOnlyMaster.h"

// INCLUDE MODULE CLASSES
#include "VPingPongBufferWithWriteOnlyMaster___024root.h"
#include "VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster.h"
#include "VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class VPingPongBufferWithWriteOnlyMaster__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VPingPongBufferWithWriteOnlyMaster* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VPingPongBufferWithWriteOnlyMaster___024root TOP;
    VPingPongBufferWithWriteOnlyMaster_PingPongBufferWithWriteOnlyMaster TOP__PingPongBufferWithWriteOnlyMaster;
    VPingPongBufferWithWriteOnlyMaster_Stream2Axi4WriteOnlyMasterInterface TOP__PingPongBufferWithWriteOnlyMaster__writeOnlyMater;

    // SCOPE NAMES
    VerilatedScope __Vscope_PingPongBufferWithWriteOnlyMaster__writeOnlyMater;

    // CONSTRUCTORS
    VPingPongBufferWithWriteOnlyMaster__Syms(VerilatedContext* contextp, const char* namep, VPingPongBufferWithWriteOnlyMaster* modelp);
    ~VPingPongBufferWithWriteOnlyMaster__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
