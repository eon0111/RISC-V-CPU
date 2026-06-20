// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VInstructionFetch.h for the primary calling header

#include "VInstructionFetch__pch.h"
#include "VInstructionFetch___024root.h"

VL_ATTR_COLD void VInstructionFetch___024root___eval_static(VInstructionFetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstructionFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionFetch___024root___eval_static\n"); );
}

VL_ATTR_COLD void VInstructionFetch___024root___eval_initial(VInstructionFetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstructionFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionFetch___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
}

VL_ATTR_COLD void VInstructionFetch___024root___eval_final(VInstructionFetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstructionFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionFetch___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VInstructionFetch___024root___dump_triggers__stl(VInstructionFetch___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VInstructionFetch___024root___eval_phase__stl(VInstructionFetch___024root* vlSelf);

VL_ATTR_COLD void VInstructionFetch___024root___eval_settle(VInstructionFetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstructionFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionFetch___024root___eval_settle\n"); );
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
            VInstructionFetch___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("InstructionFetch.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VInstructionFetch___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VInstructionFetch___024root___dump_triggers__stl(VInstructionFetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstructionFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionFetch___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VInstructionFetch___024root___stl_sequent__TOP__0(VInstructionFetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstructionFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionFetch___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->io_instruction_address = vlSelf->InstructionFetch__DOT__pc;
    vlSelf->InstructionFetch__DOT___pc_T_1 = ((IData)(4U) 
                                              + vlSelf->InstructionFetch__DOT__pc);
    vlSelf->io_instruction = ((IData)(vlSelf->io_instruction_valid)
                               ? vlSelf->io_instruction_read_data
                               : 0x13U);
}

VL_ATTR_COLD void VInstructionFetch___024root___eval_stl(VInstructionFetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstructionFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionFetch___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VInstructionFetch___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VInstructionFetch___024root___eval_triggers__stl(VInstructionFetch___024root* vlSelf);

VL_ATTR_COLD bool VInstructionFetch___024root___eval_phase__stl(VInstructionFetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstructionFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionFetch___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VInstructionFetch___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VInstructionFetch___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VInstructionFetch___024root___dump_triggers__ico(VInstructionFetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstructionFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionFetch___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VInstructionFetch___024root___dump_triggers__act(VInstructionFetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstructionFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionFetch___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void VInstructionFetch___024root___dump_triggers__nba(VInstructionFetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstructionFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionFetch___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VInstructionFetch___024root___ctor_var_reset(VInstructionFetch___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstructionFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionFetch___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_jump_flag_id = VL_RAND_RESET_I(1);
    vlSelf->io_jump_address_id = VL_RAND_RESET_I(32);
    vlSelf->io_instruction_read_data = VL_RAND_RESET_I(32);
    vlSelf->io_instruction_valid = VL_RAND_RESET_I(1);
    vlSelf->io_instruction_address = VL_RAND_RESET_I(32);
    vlSelf->io_instruction = VL_RAND_RESET_I(32);
    vlSelf->InstructionFetch__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->InstructionFetch__DOT___pc_T_1 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
}

VL_ATTR_COLD void VInstructionFetch___024root___configure_coverage(VInstructionFetch___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VInstructionFetch__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionFetch___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
