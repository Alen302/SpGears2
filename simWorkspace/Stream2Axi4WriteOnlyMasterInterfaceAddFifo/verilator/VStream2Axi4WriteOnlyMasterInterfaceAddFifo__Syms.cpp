// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms.h"
#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo.h"
#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterfaceAddFifo.h"
#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo_Stream2Axi4WriteOnlyMasterInterface.h"



// FUNCTIONS
VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms::VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms(VStream2Axi4WriteOnlyMasterInterfaceAddFifo* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo(Verilated::catName(topp->name(), "Stream2Axi4WriteOnlyMasterInterfaceAddFifo"))
    , TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection(Verilated::catName(topp->name(), "Stream2Axi4WriteOnlyMasterInterfaceAddFifo.axi4Interconnection"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo = &TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo;
    TOPp->Stream2Axi4WriteOnlyMasterInterfaceAddFifo->axi4Interconnection = &TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__Vconfigure(this, true);
    TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.configure(this, name(), "Stream2Axi4WriteOnlyMasterInterfaceAddFifo.axi4Interconnection", "axi4Interconnection", VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.varInsert(__Vfinal,"axi4Interface_isInitialIterate", &(TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.axi4Interface_isInitialIterate), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
    }
}
