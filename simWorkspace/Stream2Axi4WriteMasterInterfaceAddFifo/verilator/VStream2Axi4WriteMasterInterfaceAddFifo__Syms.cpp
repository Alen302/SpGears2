// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VStream2Axi4WriteMasterInterfaceAddFifo__Syms.h"
#include "VStream2Axi4WriteMasterInterfaceAddFifo.h"
#include "VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterfaceAddFifo.h"
#include "VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterface.h"

// FUNCTIONS
VStream2Axi4WriteMasterInterfaceAddFifo__Syms::VStream2Axi4WriteMasterInterfaceAddFifo__Syms(VStream2Axi4WriteMasterInterfaceAddFifo* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_activity(false)
	, __Vm_didInit(false)
	// Setup submodule names
	, TOP__Stream2Axi4WriteMasterInterfaceAddFifo (Verilated::catName(topp->name(),"Stream2Axi4WriteMasterInterfaceAddFifo"))
	, TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection (Verilated::catName(topp->name(),"Stream2Axi4WriteMasterInterfaceAddFifo.axi4Interconnection"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->Stream2Axi4WriteMasterInterfaceAddFifo  = &TOP__Stream2Axi4WriteMasterInterfaceAddFifo;
    TOPp->Stream2Axi4WriteMasterInterfaceAddFifo->axi4Interconnection  = &TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__Stream2Axi4WriteMasterInterfaceAddFifo.__Vconfigure(this, true);
    TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection.__Vconfigure(this, true);
    // Setup scope names
    __Vscope_Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection.configure(this,name(),"Stream2Axi4WriteMasterInterfaceAddFifo.axi4Interconnection");
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
	__Vscope_Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection.varInsert(__Vfinal,"axi4Interface_address", &(TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection.axi4Interface_address), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
    }
}
