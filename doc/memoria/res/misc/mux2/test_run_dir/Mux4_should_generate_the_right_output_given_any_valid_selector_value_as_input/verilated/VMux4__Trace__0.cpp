// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMux4__Syms.h"


void VMux4___024root__trace_chg_0_sub_0(VMux4___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VMux4___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4___024root__trace_chg_0\n"); );
    // Init
    VMux4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMux4___024root*>(voidSelf);
    VMux4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VMux4___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VMux4___024root__trace_chg_0_sub_0(VMux4___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clock));
    bufp->chgBit(oldp+1,(vlSelf->reset));
    bufp->chgIData(oldp+2,(vlSelf->io_i1),32);
    bufp->chgIData(oldp+3,(vlSelf->io_i2),32);
    bufp->chgIData(oldp+4,(vlSelf->io_i3),32);
    bufp->chgIData(oldp+5,(vlSelf->io_i4),32);
    bufp->chgIData(oldp+6,(vlSelf->io_o),32);
    bufp->chgCData(oldp+7,(vlSelf->io_sel),2);
    bufp->chgCData(oldp+8,(vlSelf->Mux4__DOT__selTmp),2);
}

void VMux4___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4___024root__trace_cleanup\n"); );
    // Init
    VMux4___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VMux4___024root*>(voidSelf);
    VMux4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
