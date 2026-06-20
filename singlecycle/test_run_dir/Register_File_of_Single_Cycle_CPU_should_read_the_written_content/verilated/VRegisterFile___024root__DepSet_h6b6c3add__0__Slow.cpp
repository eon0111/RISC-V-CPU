// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegisterFile.h for the primary calling header

#include "VRegisterFile__pch.h"
#include "VRegisterFile___024root.h"

VL_ATTR_COLD void VRegisterFile___024root___eval_static(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___eval_static\n"); );
}

VL_ATTR_COLD void VRegisterFile___024root___eval_initial(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
}

VL_ATTR_COLD void VRegisterFile___024root___eval_final(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegisterFile___024root___dump_triggers__stl(VRegisterFile___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VRegisterFile___024root___eval_phase__stl(VRegisterFile___024root* vlSelf);

VL_ATTR_COLD void VRegisterFile___024root___eval_settle(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___eval_settle\n"); );
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
            VRegisterFile___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("RegisterFile.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VRegisterFile___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegisterFile___024root___dump_triggers__stl(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VRegisterFile___024root___ico_sequent__TOP__0(VRegisterFile___024root* vlSelf);

VL_ATTR_COLD void VRegisterFile___024root___eval_stl(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VRegisterFile___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VRegisterFile___024root___eval_triggers__stl(VRegisterFile___024root* vlSelf);

VL_ATTR_COLD bool VRegisterFile___024root___eval_phase__stl(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VRegisterFile___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VRegisterFile___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegisterFile___024root___dump_triggers__ico(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VRegisterFile___024root___dump_triggers__act(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void VRegisterFile___024root___dump_triggers__nba(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VRegisterFile___024root___ctor_var_reset(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_write_enable = VL_RAND_RESET_I(1);
    vlSelf->io_write_address = VL_RAND_RESET_I(5);
    vlSelf->io_write_data = VL_RAND_RESET_I(32);
    vlSelf->io_read_address1 = VL_RAND_RESET_I(5);
    vlSelf->io_read_address2 = VL_RAND_RESET_I(5);
    vlSelf->io_read_data1 = VL_RAND_RESET_I(32);
    vlSelf->io_read_data2 = VL_RAND_RESET_I(32);
    vlSelf->io_debug_read_address = VL_RAND_RESET_I(5);
    vlSelf->io_debug_read_data = VL_RAND_RESET_I(32);
    vlSelf->RegisterFile__DOT__registers_0 = VL_RAND_RESET_I(32);
    vlSelf->RegisterFile__DOT__registers_1 = VL_RAND_RESET_I(32);
    vlSelf->RegisterFile__DOT__registers_2 = VL_RAND_RESET_I(32);
    vlSelf->RegisterFile__DOT__registers_3 = VL_RAND_RESET_I(32);
    vlSelf->RegisterFile__DOT__registers_4 = VL_RAND_RESET_I(32);
    vlSelf->RegisterFile__DOT__registers_5 = VL_RAND_RESET_I(32);
    vlSelf->RegisterFile__DOT__registers_6 = VL_RAND_RESET_I(32);
    vlSelf->RegisterFile__DOT__registers_7 = VL_RAND_RESET_I(32);
    vlSelf->RegisterFile__DOT__registers_8 = VL_RAND_RESET_I(32);
    vlSelf->RegisterFile__DOT__registers_9 = VL_RAND_RESET_I(32);
    vlSelf->RegisterFile__DOT__registers_10 = VL_RAND_RESET_I(32);
    vlSelf->RegisterFile__DOT__registers_11 = VL_RAND_RESET_I(32);
    vlSelf->RegisterFile__DOT__registers_12 = VL_RAND_RESET_I(32);
    vlSelf->RegisterFile__DOT__registers_13 = VL_RAND_RESET_I(32);
    vlSelf->RegisterFile__DOT__registers_14 = VL_RAND_RESET_I(32);
    vlSelf->RegisterFile__DOT__registers_15 = VL_RAND_RESET_I(32);
    vlSelf->RegisterFile__DOT__registers_16 = VL_RAND_RESET_I(32);
    vlSelf->RegisterFile__DOT__registers_17 = VL_RAND_RESET_I(32);
    vlSelf->RegisterFile__DOT__registers_18 = VL_RAND_RESET_I(32);
    vlSelf->RegisterFile__DOT__registers_19 = VL_RAND_RESET_I(32);
    vlSelf->RegisterFile__DOT__registers_20 = VL_RAND_RESET_I(32);
    vlSelf->RegisterFile__DOT__registers_21 = VL_RAND_RESET_I(32);
    vlSelf->RegisterFile__DOT__registers_22 = VL_RAND_RESET_I(32);
    vlSelf->RegisterFile__DOT__registers_23 = VL_RAND_RESET_I(32);
    vlSelf->RegisterFile__DOT__registers_24 = VL_RAND_RESET_I(32);
    vlSelf->RegisterFile__DOT__registers_25 = VL_RAND_RESET_I(32);
    vlSelf->RegisterFile__DOT__registers_26 = VL_RAND_RESET_I(32);
    vlSelf->RegisterFile__DOT__registers_27 = VL_RAND_RESET_I(32);
    vlSelf->RegisterFile__DOT__registers_28 = VL_RAND_RESET_I(32);
    vlSelf->RegisterFile__DOT__registers_29 = VL_RAND_RESET_I(32);
    vlSelf->RegisterFile__DOT__registers_30 = VL_RAND_RESET_I(32);
    vlSelf->RegisterFile__DOT__registers_31 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
}

VL_ATTR_COLD void VRegisterFile___024root___configure_coverage(VRegisterFile___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
