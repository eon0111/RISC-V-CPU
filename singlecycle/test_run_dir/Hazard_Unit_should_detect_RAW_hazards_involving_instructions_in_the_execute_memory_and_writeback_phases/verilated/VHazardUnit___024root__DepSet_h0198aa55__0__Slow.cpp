// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHazardUnit.h for the primary calling header

#include "VHazardUnit__pch.h"
#include "VHazardUnit___024root.h"

VL_ATTR_COLD void VHazardUnit___024root___eval_static(VHazardUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHazardUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHazardUnit___024root___eval_static\n"); );
}

VL_ATTR_COLD void VHazardUnit___024root___eval_initial(VHazardUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHazardUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHazardUnit___024root___eval_initial\n"); );
}

VL_ATTR_COLD void VHazardUnit___024root___eval_final(VHazardUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHazardUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHazardUnit___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VHazardUnit___024root___dump_triggers__stl(VHazardUnit___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VHazardUnit___024root___eval_phase__stl(VHazardUnit___024root* vlSelf);

VL_ATTR_COLD void VHazardUnit___024root___eval_settle(VHazardUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHazardUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHazardUnit___024root___eval_settle\n"); );
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
            VHazardUnit___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("HazardUnit.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VHazardUnit___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VHazardUnit___024root___dump_triggers__stl(VHazardUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHazardUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHazardUnit___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void VHazardUnit___024root___ico_sequent__TOP__0(VHazardUnit___024root* vlSelf);

VL_ATTR_COLD void VHazardUnit___024root___eval_stl(VHazardUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHazardUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHazardUnit___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VHazardUnit___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VHazardUnit___024root___eval_triggers__stl(VHazardUnit___024root* vlSelf);

VL_ATTR_COLD bool VHazardUnit___024root___eval_phase__stl(VHazardUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHazardUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHazardUnit___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VHazardUnit___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VHazardUnit___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VHazardUnit___024root___dump_triggers__ico(VHazardUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHazardUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHazardUnit___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VHazardUnit___024root___dump_triggers__act(VHazardUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHazardUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHazardUnit___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VHazardUnit___024root___dump_triggers__nba(VHazardUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHazardUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHazardUnit___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VHazardUnit___024root___ctor_var_reset(VHazardUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHazardUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHazardUnit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_rs1_ex = VL_RAND_RESET_I(5);
    vlSelf->io_rs2_ex = VL_RAND_RESET_I(5);
    vlSelf->io_rd_mem = VL_RAND_RESET_I(5);
    vlSelf->io_rd_wb = VL_RAND_RESET_I(5);
    vlSelf->io_reg_wr_enable_mem = VL_RAND_RESET_I(1);
    vlSelf->io_reg_wr_enable_wb = VL_RAND_RESET_I(1);
    vlSelf->io_alu_rs1_src = VL_RAND_RESET_I(2);
    vlSelf->io_alu_rs2_src = VL_RAND_RESET_I(2);
    vlSelf->io_rs1_d = VL_RAND_RESET_I(5);
    vlSelf->io_rs2_d = VL_RAND_RESET_I(5);
    vlSelf->io_rd_ex = VL_RAND_RESET_I(5);
    vlSelf->io_ex_regs_write_src = VL_RAND_RESET_I(2);
    vlSelf->io_pc_stall = VL_RAND_RESET_I(1);
    vlSelf->io_srFD_stall = VL_RAND_RESET_I(1);
    vlSelf->io_srDE_flush = VL_RAND_RESET_I(1);
    vlSelf->io_ex_jump_flag = VL_RAND_RESET_I(1);
    vlSelf->io_srFD_flush = VL_RAND_RESET_I(1);
}

VL_ATTR_COLD void VHazardUnit___024root___configure_coverage(VHazardUnit___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VHazardUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHazardUnit___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
