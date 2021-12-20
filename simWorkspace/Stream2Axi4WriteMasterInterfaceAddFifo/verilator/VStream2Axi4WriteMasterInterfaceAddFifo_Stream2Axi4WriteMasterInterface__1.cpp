// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VStream2Axi4WriteMasterInterfaceAddFifo.h for the primary calling header

#include "VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterface.h" // For This
#include "VStream2Axi4WriteMasterInterfaceAddFifo__Syms.h"

#include "verilated_dpi.h"


//--------------------
// Internal Methods

VL_INLINE_OPT void VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterface::_combo__TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection__17(VStream2Axi4WriteMasterInterfaceAddFifo__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VStream2Axi4WriteMasterInterfaceAddFifo_Stream2Axi4WriteMasterInterface::_combo__TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection__17\n"); );
    VStream2Axi4WriteMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at /home/lqx/IdeaProjects/LicioLib/tmp/job_1/Stream2Axi4WriteMasterInterfaceAddFifo.v:1492
    vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_m_axi_wdata = 0U;
    if (((IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wvalid) 
	 & (IData)(vlTOPp->m_axi_wready))) {
	vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_m_axi_wdata = 1U;
    }
    // ALWAYS at /home/lqx/IdeaProjects/LicioLib/tmp/job_1/Stream2Axi4WriteMasterInterfaceAddFifo.v:1508
    vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_m_axi_wdata_1 
	= (0x1ffU & (((0x100U == (IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_m_axi_wdata_2)) 
		      & (IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_m_axi_wdata))
		      ? 0U : ((IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_m_axi_wdata_2) 
			      + (IData)(vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_m_axi_wdata))));
    if (vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_1) {
	vlSymsp->TOP__Stream2Axi4WriteMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_m_axi_wdata_1 = 0U;
    }
}
