// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHazardUnit.h for the primary calling header

#include "VHazardUnit__pch.h"
#include "VHazardUnit__Syms.h"
#include "VHazardUnit___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VHazardUnit___024root___dump_triggers__stl(VHazardUnit___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VHazardUnit___024root___eval_triggers__stl(VHazardUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHazardUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHazardUnit___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VHazardUnit___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
