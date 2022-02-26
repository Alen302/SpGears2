// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms.h"


//======================

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceInit, &VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceFull, &VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceChg, this);
}
void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* t = (VStream2Axi4WriteOnlyMasterInterfaceAddFifo*)userthis;
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* t = (VStream2Axi4WriteOnlyMasterInterfaceAddFifo*)userthis;
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceInitThis(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceFullThis(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceInitThis__1(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+601,"s_axis_valid", false,-1);
        vcdp->declBit(c+609,"s_axis_ready", false,-1);
        vcdp->declBus(c+617,"s_axis_payload", false,-1, 31,0);
        vcdp->declBit(c+625,"m_axi_awvalid", false,-1);
        vcdp->declBit(c+633,"m_axi_awready", false,-1);
        vcdp->declBus(c+641,"m_axi_awaddr", false,-1, 31,0);
        vcdp->declBus(c+649,"m_axi_awregion", false,-1, 3,0);
        vcdp->declBus(c+657,"m_axi_awlen", false,-1, 7,0);
        vcdp->declBus(c+665,"m_axi_awsize", false,-1, 2,0);
        vcdp->declBus(c+673,"m_axi_awburst", false,-1, 1,0);
        vcdp->declBus(c+681,"m_axi_awcache", false,-1, 3,0);
        vcdp->declBus(c+689,"m_axi_awqos", false,-1, 3,0);
        vcdp->declBus(c+697,"m_axi_awprot", false,-1, 2,0);
        vcdp->declBit(c+705,"m_axi_wvalid", false,-1);
        vcdp->declBit(c+713,"m_axi_wready", false,-1);
        vcdp->declBus(c+721,"m_axi_wdata", false,-1, 31,0);
        vcdp->declBus(c+729,"m_axi_wstrb", false,-1, 3,0);
        vcdp->declBit(c+737,"m_axi_wlast", false,-1);
        vcdp->declBit(c+745,"m_axi_bvalid", false,-1);
        vcdp->declBit(c+753,"m_axi_bready", false,-1);
        vcdp->declBus(c+761,"m_axi_bresp", false,-1, 1,0);
        vcdp->declBit(c+769,"aresetn", false,-1);
        vcdp->declBit(c+777,"start", false,-1);
        vcdp->declBus(c+785,"burstLen", false,-1, 7,0);
        vcdp->declBus(c+793,"startAddr", false,-1, 31,0);
        vcdp->declBus(c+801,"offset", false,-1, 31,0);
        vcdp->declBus(c+809,"pathNumb", false,-1, 7,0);
        vcdp->declBit(c+817,"transInterrupt", false,-1);
        vcdp->declBit(c+825,"aclk", false,-1);
        vcdp->declBit(c+601,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo s_axis_valid", false,-1);
        vcdp->declBit(c+9,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo s_axis_ready", false,-1);
        vcdp->declBus(c+617,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo s_axis_payload", false,-1, 31,0);
        vcdp->declBit(c+417,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_awvalid", false,-1);
        vcdp->declBit(c+633,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_awready", false,-1);
        vcdp->declBus(c+425,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_awaddr", false,-1, 31,0);
        vcdp->declBus(c+865,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_awregion", false,-1, 3,0);
        vcdp->declBus(c+433,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_awlen", false,-1, 7,0);
        vcdp->declBus(c+873,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_awsize", false,-1, 2,0);
        vcdp->declBus(c+881,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_awburst", false,-1, 1,0);
        vcdp->declBus(c+865,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_awcache", false,-1, 3,0);
        vcdp->declBus(c+865,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_awqos", false,-1, 3,0);
        vcdp->declBus(c+889,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_awprot", false,-1, 2,0);
        vcdp->declBit(c+257,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_wvalid", false,-1);
        vcdp->declBit(c+713,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_wready", false,-1);
        vcdp->declBus(c+265,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_wdata", false,-1, 31,0);
        vcdp->declBus(c+897,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_wstrb", false,-1, 3,0);
        vcdp->declBit(c+17,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_wlast", false,-1);
        vcdp->declBit(c+745,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_bvalid", false,-1);
        vcdp->declBit(c+441,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_bready", false,-1);
        vcdp->declBus(c+761,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo m_axi_bresp", false,-1, 1,0);
        vcdp->declBit(c+769,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo aresetn", false,-1);
        vcdp->declBit(c+777,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo start", false,-1);
        vcdp->declBus(c+785,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo burstLen", false,-1, 7,0);
        vcdp->declBus(c+793,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo startAddr", false,-1, 31,0);
        vcdp->declBus(c+801,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo offset", false,-1, 31,0);
        vcdp->declBus(c+809,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo pathNumb", false,-1, 7,0);
        vcdp->declBit(c+377,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo transInterrupt", false,-1);
        vcdp->declBit(c+825,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo aclk", false,-1);
        vcdp->declBit(c+273,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection_s_axis_ready", false,-1);
        vcdp->declBit(c+417,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection_m_axi_awvalid", false,-1);
        vcdp->declBus(c+425,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection_m_axi_awaddr", false,-1, 31,0);
        vcdp->declBus(c+865,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection_m_axi_awregion", false,-1, 3,0);
        vcdp->declBus(c+433,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection_m_axi_awlen", false,-1, 7,0);
        vcdp->declBus(c+873,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection_m_axi_awsize", false,-1, 2,0);
        vcdp->declBus(c+881,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection_m_axi_awburst", false,-1, 1,0);
        vcdp->declBus(c+865,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection_m_axi_awcache", false,-1, 3,0);
        vcdp->declBus(c+865,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection_m_axi_awqos", false,-1, 3,0);
        vcdp->declBus(c+889,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection_m_axi_awprot", false,-1, 2,0);
        vcdp->declBit(c+257,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection_m_axi_wvalid", false,-1);
        vcdp->declBus(c+265,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection_m_axi_wdata", false,-1, 31,0);
        vcdp->declBus(c+897,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection_m_axi_wstrb", false,-1, 3,0);
        vcdp->declBit(c+17,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection_m_axi_wlast", false,-1);
        vcdp->declBit(c+441,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection_m_axi_bready", false,-1);
        vcdp->declBit(c+377,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection_transInterrupt", false,-1);
        vcdp->declBit(c+9,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance_io_push_ready", false,-1);
        vcdp->declBit(c+25,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance_io_pop_valid", false,-1);
        vcdp->declBus(c+385,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance_io_pop_payload", false,-1, 31,0);
        vcdp->declBus(c+33,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance_io_occupancy", false,-1, 8,0);
        vcdp->declBus(c+41,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance_io_availability", false,-1, 8,0);
        vcdp->declBit(c+601,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance io_push_valid", false,-1);
        vcdp->declBit(c+9,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance io_push_ready", false,-1);
        vcdp->declBus(c+617,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance io_push_payload", false,-1, 31,0);
        vcdp->declBit(c+25,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance io_pop_valid", false,-1);
        vcdp->declBit(c+273,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance io_pop_ready", false,-1);
        vcdp->declBus(c+385,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance io_pop_payload", false,-1, 31,0);
        vcdp->declBit(c+905,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance io_flush", false,-1);
        vcdp->declBus(c+33,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance io_occupancy", false,-1, 8,0);
        vcdp->declBus(c+41,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance io_availability", false,-1, 8,0);
        vcdp->declBit(c+825,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance aclk", false,-1);
        vcdp->declBit(c+769,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance aresetn", false,-1);
        vcdp->declBit(c+169,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+905,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+177,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_pushPtr_valueNext", false,-1, 7,0);
        vcdp->declBus(c+449,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_pushPtr_value", false,-1, 7,0);
        vcdp->declBit(c+457,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+129,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+281,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+905,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+289,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_popPtr_valueNext", false,-1, 7,0);
        vcdp->declBus(c+465,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_popPtr_value", false,-1, 7,0);
        vcdp->declBit(c+473,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+145,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+49,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_ptrMatch", false,-1);
        vcdp->declBit(c+481,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_risingOccupancy", false,-1);
        vcdp->declBit(c+185,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_pushing", false,-1);
        vcdp->declBit(c+297,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_popping", false,-1);
        vcdp->declBit(c+57,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_empty", false,-1);
        vcdp->declBit(c+65,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_full", false,-1);
        vcdp->declBit(c+241,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance when_Stream_l946", false,-1);
        vcdp->declBus(c+489,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo fifoInstance logic_ptrDif", false,-1, 7,0);
        vcdp->declBit(c+777,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection start", false,-1);
        vcdp->declBus(c+785,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection burstLen", false,-1, 7,0);
        vcdp->declBus(c+793,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection startAddr", false,-1, 31,0);
        vcdp->declBus(c+801,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection offset", false,-1, 31,0);
        vcdp->declBus(c+809,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection pathNumb", false,-1, 7,0);
        vcdp->declBit(c+25,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection s_axis_valid", false,-1);
        vcdp->declBit(c+273,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection s_axis_ready", false,-1);
        vcdp->declBus(c+385,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection s_axis_payload", false,-1, 31,0);
        vcdp->declBit(c+417,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_awvalid", false,-1);
        vcdp->declBit(c+633,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_awready", false,-1);
        vcdp->declBus(c+425,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_awaddr", false,-1, 31,0);
        vcdp->declBus(c+865,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_awregion", false,-1, 3,0);
        vcdp->declBus(c+433,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_awlen", false,-1, 7,0);
        vcdp->declBus(c+873,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_awsize", false,-1, 2,0);
        vcdp->declBus(c+881,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_awburst", false,-1, 1,0);
        vcdp->declBus(c+865,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_awcache", false,-1, 3,0);
        vcdp->declBus(c+865,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_awqos", false,-1, 3,0);
        vcdp->declBus(c+889,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_awprot", false,-1, 2,0);
        vcdp->declBit(c+257,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_wvalid", false,-1);
        vcdp->declBit(c+713,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_wready", false,-1);
        vcdp->declBus(c+265,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_wdata", false,-1, 31,0);
        vcdp->declBus(c+897,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_wstrb", false,-1, 3,0);
        vcdp->declBit(c+17,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_wlast", false,-1);
        vcdp->declBit(c+745,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_bvalid", false,-1);
        vcdp->declBit(c+441,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_bready", false,-1);
        vcdp->declBus(c+761,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_bresp", false,-1, 1,0);
        vcdp->declBit(c+377,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection transInterrupt", false,-1);
        vcdp->declBit(c+769,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection aresetn", false,-1);
        vcdp->declBit(c+825,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection aclk", false,-1);
        vcdp->declBit(c+305,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2_io_push_valid", false,-1);
        vcdp->declBus(c+313,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2_io_push_payload", false,-1, 31,0);
        vcdp->declBit(c+193,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2_io_pop_ready", false,-1);
        vcdp->declBit(c+73,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2_io_push_ready", false,-1);
        vcdp->declBit(c+81,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2_io_pop_valid", false,-1);
        vcdp->declBus(c+393,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2_io_pop_payload", false,-1, 31,0);
        vcdp->declBus(c+89,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2_io_occupancy", false,-1, 8,0);
        vcdp->declBus(c+97,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2_io_availability", false,-1, 8,0);
        vcdp->declBus(c+913,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_transferDataType", false,-1, 31,0);
        vcdp->declBit(c+401,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection m_axi_wlast_regNext", false,-1);
        vcdp->declBit(c+1,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_resetStartSendSignal", false,-1);
        vcdp->declBit(c+593,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection startSendSignal", false,-1);
        vcdp->declBus(c+497,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection burstLengthReg", false,-1, 7,0);
        vcdp->declBit(c+321,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection when_Axi4WriteOnlyMater_l105", false,-1);
        vcdp->declBit(c+153,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2_io_push_fire", false,-1);
        vcdp->declBit(c+833,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_full_b_fire", false,-1);
        vcdp->declBit(c+505,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_newBurst", false,-1);
        vcdp->declBit(c+833,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_full_b_fire_1", false,-1);
        vcdp->declBit(c+417,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_controlAwValidSignal", false,-1);
        vcdp->declBit(c+201,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection when_Axi4WriteOnlyMater_l131", false,-1);
        vcdp->declBit(c+209,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_full_aw_fire", false,-1);
        vcdp->declBit(c+841,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_isInitialIterate", false,-1);
        vcdp->declBit(c+513,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_isRefreshAddr", false,-1);
        vcdp->declBit(c+833,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_full_b_fire_2", false,-1);
        vcdp->declBit(c+833,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_full_b_fire_3", false,-1);
        vcdp->declBit(c+833,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_full_b_fire_4", false,-1);
        vcdp->declBit(c+849,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection when_Axi4WriteOnlyMater_l152", false,-1);
        vcdp->declBus(c+521,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection offsetAddressReg", false,-1, 31,0);
        vcdp->declBus(c+425,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_finalAddressReg", false,-1, 31,0);
        vcdp->declBit(c+329,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection when_Axi4WriteOnlyMater_l159", false,-1);
        vcdp->declBit(c+337,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection when_Axi4WriteOnlyMater_l164", false,-1);
        vcdp->declBit(c+345,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection when_Axi4WriteOnlyMater_l187", false,-1);
        vcdp->declBit(c+529,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2_io_pop_m2sPipe_valid", false,-1);
        vcdp->declBit(c+713,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2_io_pop_m2sPipe_ready", false,-1);
        vcdp->declBus(c+409,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2_io_pop_m2sPipe_payload", false,-1, 31,0);
        vcdp->declBit(c+529,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2_io_pop_rValid", false,-1);
        vcdp->declBus(c+409,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2_io_pop_rData", false,-1, 31,0);
        vcdp->declBit(c+537,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection when_Stream_l342", false,-1);
        vcdp->declBit(c+857,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_full_w_fire", false,-1);
        vcdp->declBit(c+833,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_full_b_fire_5", false,-1);
        vcdp->declBit(c+441,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_controlBReady", false,-1);
        vcdp->declBit(c+833,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_full_b_fire_6", false,-1);
        vcdp->declBit(c+833,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_full_b_fire_7", false,-1);
        vcdp->declBit(c+377,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection axi4Interface_isBurstComplete", false,-1);
        vcdp->declBit(c+305,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 io_push_valid", false,-1);
        vcdp->declBit(c+73,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 io_push_ready", false,-1);
        vcdp->declBus(c+313,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 io_push_payload", false,-1, 31,0);
        vcdp->declBit(c+81,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 io_pop_valid", false,-1);
        vcdp->declBit(c+193,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 io_pop_ready", false,-1);
        vcdp->declBus(c+393,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 io_pop_payload", false,-1, 31,0);
        vcdp->declBit(c+905,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 io_flush", false,-1);
        vcdp->declBus(c+89,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 io_occupancy", false,-1, 8,0);
        vcdp->declBus(c+97,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 io_availability", false,-1, 8,0);
        vcdp->declBit(c+825,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 aclk", false,-1);
        vcdp->declBit(c+769,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 aresetn", false,-1);
        vcdp->declBit(c+353,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_pushPtr_willIncrement", false,-1);
        vcdp->declBit(c+905,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_pushPtr_willClear", false,-1);
        vcdp->declBus(c+361,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_pushPtr_valueNext", false,-1, 7,0);
        vcdp->declBus(c+545,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_pushPtr_value", false,-1, 7,0);
        vcdp->declBit(c+553,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_pushPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+161,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_pushPtr_willOverflow", false,-1);
        vcdp->declBit(c+217,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_popPtr_willIncrement", false,-1);
        vcdp->declBit(c+905,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_popPtr_willClear", false,-1);
        vcdp->declBus(c+225,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_popPtr_valueNext", false,-1, 7,0);
        vcdp->declBus(c+561,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_popPtr_value", false,-1, 7,0);
        vcdp->declBit(c+569,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_popPtr_willOverflowIfInc", false,-1);
        vcdp->declBit(c+137,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_popPtr_willOverflow", false,-1);
        vcdp->declBit(c+105,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_ptrMatch", false,-1);
        vcdp->declBit(c+577,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_risingOccupancy", false,-1);
        vcdp->declBit(c+369,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_pushing", false,-1);
        vcdp->declBit(c+233,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_popping", false,-1);
        vcdp->declBit(c+113,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_empty", false,-1);
        vcdp->declBit(c+121,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_full", false,-1);
        vcdp->declBit(c+249,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 when_Stream_l946", false,-1);
        vcdp->declBus(c+585,"Stream2Axi4WriteOnlyMasterInterfaceAddFifo axi4Interconnection streamFifo_2 logic_ptrDif", false,-1, 7,0);
    }
}

void VStream2Axi4WriteOnlyMasterInterfaceAddFifo::traceFullThis__1(VStream2Axi4WriteOnlyMasterInterfaceAddFifo__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VStream2Axi4WriteOnlyMasterInterfaceAddFifo* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(((~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wlast)) 
                            & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wlast_regNext))));
        vcdp->fullBit(c+9,((1U & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_full)))));
        vcdp->fullBit(c+17,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wlast));
        vcdp->fullBit(c+25,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance_io_pop_valid));
        vcdp->fullBus(c+33,(((((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_risingOccupancy) 
                               & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_ptrMatch)) 
                              << 8U) | (0xffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_value))))),9);
        vcdp->fullBus(c+41,(((((~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_risingOccupancy)) 
                               & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_ptrMatch)) 
                              << 8U) | (0xffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_value))))),9);
        vcdp->fullBit(c+49,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_ptrMatch));
        vcdp->fullBit(c+57,(((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_ptrMatch) 
                             & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+65,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_full));
        vcdp->fullBit(c+73,((1U & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_full)))));
        vcdp->fullBit(c+81,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_pop_valid));
        vcdp->fullBus(c+89,(((((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_risingOccupancy) 
                               & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_ptrMatch)) 
                              << 8U) | (0xffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushPtr_value) 
                                                 - (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_value))))),9);
        vcdp->fullBus(c+97,(((((~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_risingOccupancy)) 
                               & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_ptrMatch)) 
                              << 8U) | (0xffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_value) 
                                                 - (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushPtr_value))))),9);
        vcdp->fullBit(c+105,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_ptrMatch));
        vcdp->fullBit(c+113,(((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_ptrMatch) 
                              & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_risingOccupancy)))));
        vcdp->fullBit(c+121,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_full));
        vcdp->fullBit(c+129,(((0xffU == (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_value)) 
                              & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_willIncrement))));
        vcdp->fullBit(c+137,(((0xffU == (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_value)) 
                              & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+145,(((0xffU == (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_value)) 
                              & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_willIncrement))));
        vcdp->fullBit(c+153,(((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_push_valid) 
                              & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_full)))));
        vcdp->fullBit(c+161,(((0xffU == (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushPtr_value)) 
                              & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushPtr_willIncrement))));
        vcdp->fullBit(c+169,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+177,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_valueNext),8);
        vcdp->fullBit(c+185,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushing));
        vcdp->fullBit(c+193,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_pop_ready));
        vcdp->fullBit(c+201,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l131));
        vcdp->fullBit(c+209,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_full_aw_fire));
        vcdp->fullBit(c+217,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_willIncrement));
        vcdp->fullBus(c+225,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_valueNext),8);
        vcdp->fullBit(c+233,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popping));
        vcdp->fullBit(c+241,(((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushing) 
                              != (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popping))));
        vcdp->fullBit(c+249,(((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushing) 
                              != (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popping))));
        vcdp->fullBit(c+257,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wvalid));
        vcdp->fullBus(c+265,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wdata),32);
        vcdp->fullBit(c+273,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__s_axis_ready));
        vcdp->fullBit(c+281,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_willIncrement));
        vcdp->fullBus(c+289,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_valueNext),8);
        vcdp->fullBit(c+297,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popping));
        vcdp->fullBit(c+305,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_push_valid));
        vcdp->fullBus(c+313,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_push_payload),32);
        vcdp->fullBit(c+321,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l105));
        vcdp->fullBit(c+329,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l159));
        vcdp->fullBit(c+337,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l164));
        vcdp->fullBit(c+345,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__when_Axi4WriteOnlyMater_l187));
        vcdp->fullBit(c+353,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushPtr_willIncrement));
        vcdp->fullBus(c+361,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushPtr_valueNext),8);
        vcdp->fullBit(c+369,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushing));
        vcdp->fullBit(c+377,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_isBurstComplete));
        vcdp->fullBus(c+385,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT___zz_logic_ram_port0),32);
        vcdp->fullBus(c+393,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT___zz_logic_ram_port0),32);
        vcdp->fullBit(c+401,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wlast_regNext));
        vcdp->fullBus(c+409,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_pop_rData),32);
        vcdp->fullBit(c+417,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_controlAwValidSignal));
        vcdp->fullBus(c+425,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_finalAddressReg),32);
        vcdp->fullBus(c+433,((0xffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__burstLengthReg) 
                                       - (IData)(1U)))),8);
        vcdp->fullBit(c+441,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_controlBReady));
        vcdp->fullBus(c+449,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_value),8);
        vcdp->fullBit(c+457,((0xffU == (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+465,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_value),8);
        vcdp->fullBit(c+473,((0xffU == (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_value))));
        vcdp->fullBit(c+481,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+489,((0xffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_pushPtr_value) 
                                       - (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo.__PVT__fifoInstance__DOT__logic_popPtr_value)))),8);
        vcdp->fullBus(c+497,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__burstLengthReg),8);
        vcdp->fullBit(c+505,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_newBurst));
        vcdp->fullBit(c+513,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_isRefreshAddr));
        vcdp->fullBus(c+521,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__offsetAddressReg),32);
        vcdp->fullBit(c+529,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_pop_rValid));
        vcdp->fullBit(c+537,((1U & (~ (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2_io_pop_rValid)))));
        vcdp->fullBus(c+545,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushPtr_value),8);
        vcdp->fullBit(c+553,((0xffU == (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushPtr_value))));
        vcdp->fullBus(c+561,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_value),8);
        vcdp->fullBit(c+569,((0xffU == (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_value))));
        vcdp->fullBit(c+577,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_risingOccupancy));
        vcdp->fullBus(c+585,((0xffU & ((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_pushPtr_value) 
                                       - (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__streamFifo_2__DOT__logic_popPtr_value)))),8);
        vcdp->fullBit(c+593,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__startSendSignal));
        vcdp->fullBit(c+601,(vlTOPp->s_axis_valid));
        vcdp->fullBit(c+609,(vlTOPp->s_axis_ready));
        vcdp->fullBus(c+617,(vlTOPp->s_axis_payload),32);
        vcdp->fullBit(c+625,(vlTOPp->m_axi_awvalid));
        vcdp->fullBit(c+633,(vlTOPp->m_axi_awready));
        vcdp->fullBus(c+641,(vlTOPp->m_axi_awaddr),32);
        vcdp->fullBus(c+649,(vlTOPp->m_axi_awregion),4);
        vcdp->fullBus(c+657,(vlTOPp->m_axi_awlen),8);
        vcdp->fullBus(c+665,(vlTOPp->m_axi_awsize),3);
        vcdp->fullBus(c+673,(vlTOPp->m_axi_awburst),2);
        vcdp->fullBus(c+681,(vlTOPp->m_axi_awcache),4);
        vcdp->fullBus(c+689,(vlTOPp->m_axi_awqos),4);
        vcdp->fullBus(c+697,(vlTOPp->m_axi_awprot),3);
        vcdp->fullBit(c+705,(vlTOPp->m_axi_wvalid));
        vcdp->fullBit(c+713,(vlTOPp->m_axi_wready));
        vcdp->fullBus(c+721,(vlTOPp->m_axi_wdata),32);
        vcdp->fullBus(c+729,(vlTOPp->m_axi_wstrb),4);
        vcdp->fullBit(c+737,(vlTOPp->m_axi_wlast));
        vcdp->fullBit(c+745,(vlTOPp->m_axi_bvalid));
        vcdp->fullBit(c+753,(vlTOPp->m_axi_bready));
        vcdp->fullBus(c+761,(vlTOPp->m_axi_bresp),2);
        vcdp->fullBit(c+769,(vlTOPp->aresetn));
        vcdp->fullBit(c+777,(vlTOPp->start));
        vcdp->fullBus(c+785,(vlTOPp->burstLen),8);
        vcdp->fullBus(c+793,(vlTOPp->startAddr),32);
        vcdp->fullBus(c+801,(vlTOPp->offset),32);
        vcdp->fullBus(c+809,(vlTOPp->pathNumb),8);
        vcdp->fullBit(c+817,(vlTOPp->transInterrupt));
        vcdp->fullBit(c+825,(vlTOPp->aclk));
        vcdp->fullBit(c+833,(((IData)(vlTOPp->m_axi_bvalid) 
                              & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_controlBReady))));
        vcdp->fullBit(c+841,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.axi4Interface_isInitialIterate));
        vcdp->fullBit(c+849,((((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT___zz_axi4Interface_isInitialIterate_2) 
                               == (IData)(vlTOPp->pathNumb)) 
                              & ((IData)(vlTOPp->m_axi_bvalid) 
                                 & (IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_controlBReady)))));
        vcdp->fullBit(c+857,(((IData)(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__m_axi_wvalid) 
                              & (IData)(vlTOPp->m_axi_wready))));
        vcdp->fullBus(c+865,(0U),4);
        vcdp->fullBus(c+873,(2U),3);
        vcdp->fullBus(c+881,(1U),2);
        vcdp->fullBus(c+889,(0U),3);
        vcdp->fullBus(c+897,(0xfU),4);
        vcdp->fullBit(c+905,(0U));
        vcdp->fullBus(c+913,(vlSymsp->TOP__Stream2Axi4WriteOnlyMasterInterfaceAddFifo__axi4Interconnection.__PVT__axi4Interface_transferDataType),32);
    }
}
