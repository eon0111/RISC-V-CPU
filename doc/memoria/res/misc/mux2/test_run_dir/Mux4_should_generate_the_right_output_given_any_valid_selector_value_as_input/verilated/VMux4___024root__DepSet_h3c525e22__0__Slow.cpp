// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMux4.h for the primary calling header

#include "VMux4__pch.h"
#include "VMux4___024root.h"

VL_ATTR_COLD void VMux4___024root___eval_static(VMux4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4___024root___eval_static\n"); );
}

VL_ATTR_COLD void VMux4___024root___eval_initial(VMux4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
}

VL_ATTR_COLD void VMux4___024root___eval_final(VMux4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMux4___024root___dump_triggers__stl(VMux4___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VMux4___024root___eval_phase__stl(VMux4___024root* vlSelf);

VL_ATTR_COLD void VMux4___024root___eval_settle(VMux4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VMux4___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("Mux4.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VMux4___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMux4___024root___dump_triggers__stl(VMux4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VMux4___024root___stl_sequent__TOP__0(VMux4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->io_sel = vlSelf->Mux4__DOT__selTmp;
    vlSelf->Mux4__DOT___selTmp_T_1 = (3U & ((IData)(1U) 
                                            + (IData)(vlSelf->Mux4__DOT__selTmp)));
    vlSelf->io_o = ((3U == (IData)(vlSelf->Mux4__DOT__selTmp))
                     ? vlSelf->io_i4 : ((2U == (IData)(vlSelf->Mux4__DOT__selTmp))
                                         ? vlSelf->io_i3
                                         : ((1U == (IData)(vlSelf->Mux4__DOT__selTmp))
                                             ? vlSelf->io_i2
                                             : vlSelf->io_i1)));
}

VL_ATTR_COLD void VMux4___024root___eval_stl(VMux4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VMux4___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VMux4___024root___eval_triggers__stl(VMux4___024root* vlSelf);

VL_ATTR_COLD bool VMux4___024root___eval_phase__stl(VMux4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VMux4___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VMux4___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMux4___024root___dump_triggers__ico(VMux4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VMux4___024root___dump_triggers__act(VMux4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VMux4___024root___dump_triggers__nba(VMux4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VMux4___024root___ctor_var_reset(VMux4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_i1 = VL_RAND_RESET_I(32);
    vlSelf->io_i2 = VL_RAND_RESET_I(32);
    vlSelf->io_i3 = VL_RAND_RESET_I(32);
    vlSelf->io_i4 = VL_RAND_RESET_I(32);
    vlSelf->io_o = VL_RAND_RESET_I(32);
    vlSelf->io_sel = VL_RAND_RESET_I(2);
    vlSelf->Mux4__DOT__selTmp = VL_RAND_RESET_I(2);
    vlSelf->Mux4__DOT___selTmp_T_1 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
}

VL_ATTR_COLD void VMux4___024root___configure_coverage(VMux4___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
