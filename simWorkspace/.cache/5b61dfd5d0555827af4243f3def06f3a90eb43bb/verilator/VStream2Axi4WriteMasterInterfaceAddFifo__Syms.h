// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VStream2Axi4WriteMasterInterfaceAddFifo__Syms_H_
#define _VStream2Axi4WriteMasterInterfaceAddFifo__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VStream2Axi4WriteMasterInterfaceAddFifo.h"
#include "VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterfaceAddFifo.h"
#include "VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterface.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class VStream2Axi4WriteMasterInterfaceAddFifo__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VStream2Axi4WriteMasterInterfaceAddFifo* TOPp;
    VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterfaceAddFifo TOP__Stream2Axi4WriteMasterInterfaceAddFifo;
    VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterface TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection;
    
    // CREATORS
    VStream2Axi4WriteMasterInterfaceAddFifo__Syms(VStream2Axi4WriteMasterInterfaceAddFifo* topp, const char* namep);
    ~VStream2Axi4WriteMasterInterfaceAddFifo__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
