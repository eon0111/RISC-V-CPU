// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VHazardUnit__Syms.h"


void VHazardUnit___024root__trace_chg_0_sub_0(VHazardUnit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VHazardUnit___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHazardUnit___024root__trace_chg_0\n"); );
    // Init
    VHazardUnit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VHazardUnit___024root*>(voidSelf);
    VHazardUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VHazardUnit___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VHazardUnit___024root__trace_chg_0_sub_0(VHazardUnit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VHazardUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHazardUnit___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clock));
    bufp->chgBit(oldp+1,(vlSelf->reset));
    bufp->chgCData(oldp+2,(vlSelf->io_rs1_ex),5);
    bufp->chgCData(oldp+3,(vlSelf->io_rs2_ex),5);
    bufp->chgCData(oldp+4,(vlSelf->io_rd_mem),5);
    bufp->chgCData(oldp+5,(vlSelf->io_rd_wb),5);
    bufp->chgBit(oldp+6,(vlSelf->io_reg_wr_enable_mem));
    bufp->chgBit(oldp+7,(vlSelf->io_reg_wr_enable_wb));
    bufp->chgCData(oldp+8,(vlSelf->io_alu_rs1_src),2);
    bufp->chgCData(oldp+9,(vlSelf->io_alu_rs2_src),2);
    bufp->chgCData(oldp+10,(vlSelf->io_rs1_d),5);
    bufp->chgCData(oldp+11,(vlSelf->io_rs2_d),5);
    bufp->chgCData(oldp+12,(vlSelf->io_rd_ex),5);
    bufp->chgCData(oldp+13,(vlSelf->io_ex_regs_write_src),2);
    bufp->chgBit(oldp+14,(vlSelf->io_pc_stall));
    bufp->chgBit(oldp+15,(vlSelf->io_srFD_stall));
    bufp->chgBit(oldp+16,(vlSelf->io_srDE_flush));
    bufp->chgBit(oldp+17,(vlSelf->io_ex_jump_flag));
    bufp->chgBit(oldp+18,(vlSelf->io_srFD_flush));
}

void VHazardUnit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHazardUnit___024root__trace_cleanup\n"); );
    // Init
    VHazardUnit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VHazardUnit___024root*>(voidSelf);
    VHazardUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
