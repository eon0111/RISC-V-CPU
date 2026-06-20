// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHazardUnit.h for the primary calling header

#include "VHazardUnit__pch.h"
#include "VHazardUnit___024root.h"

VL_INLINE_OPT void VHazardUnit___024root___ico_sequent__TOP__0(VHazardUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHazardUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHazardUnit___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->io_srFD_flush = vlSelf->io_ex_jump_flag;
    vlSelf->io_alu_rs1_src = ((((IData)(vlSelf->io_rd_mem) 
                                == (IData)(vlSelf->io_rs1_ex)) 
                               & ((IData)(vlSelf->io_reg_wr_enable_mem) 
                                  & (0U != (IData)(vlSelf->io_rs1_ex))))
                               ? 1U : ((((IData)(vlSelf->io_rd_wb) 
                                         == (IData)(vlSelf->io_rs1_ex)) 
                                        & ((IData)(vlSelf->io_reg_wr_enable_wb) 
                                           & (0U != (IData)(vlSelf->io_rs1_ex))))
                                        ? 2U : 0U));
    vlSelf->io_alu_rs2_src = ((((IData)(vlSelf->io_rd_mem) 
                                == (IData)(vlSelf->io_rs2_ex)) 
                               & ((IData)(vlSelf->io_reg_wr_enable_mem) 
                                  & (0U != (IData)(vlSelf->io_rs2_ex))))
                               ? 1U : ((((IData)(vlSelf->io_rd_wb) 
                                         == (IData)(vlSelf->io_rs2_ex)) 
                                        & ((IData)(vlSelf->io_reg_wr_enable_wb) 
                                           & (0U != (IData)(vlSelf->io_rs2_ex))))
                                        ? 2U : 0U));
    vlSelf->io_pc_stall = ((IData)(vlSelf->io_ex_regs_write_src) 
                           & (((IData)(vlSelf->io_rd_ex) 
                               == (IData)(vlSelf->io_rs1_d)) 
                              | ((IData)(vlSelf->io_rd_ex) 
                                 == (IData)(vlSelf->io_rs2_d))));
    vlSelf->io_srFD_stall = vlSelf->io_pc_stall;
    vlSelf->io_srDE_flush = ((IData)(vlSelf->io_pc_stall) 
                             | (IData)(vlSelf->io_ex_jump_flag));
}

void VHazardUnit___024root___eval_ico(VHazardUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHazardUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHazardUnit___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VHazardUnit___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VHazardUnit___024root___eval_triggers__ico(VHazardUnit___024root* vlSelf);

bool VHazardUnit___024root___eval_phase__ico(VHazardUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHazardUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHazardUnit___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VHazardUnit___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VHazardUnit___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VHazardUnit___024root___eval_act(VHazardUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHazardUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHazardUnit___024root___eval_act\n"); );
}

void VHazardUnit___024root___eval_nba(VHazardUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHazardUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHazardUnit___024root___eval_nba\n"); );
}

void VHazardUnit___024root___eval_triggers__act(VHazardUnit___024root* vlSelf);

bool VHazardUnit___024root___eval_phase__act(VHazardUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHazardUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHazardUnit___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VHazardUnit___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VHazardUnit___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VHazardUnit___024root___eval_phase__nba(VHazardUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHazardUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHazardUnit___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VHazardUnit___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VHazardUnit___024root___dump_triggers__ico(VHazardUnit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VHazardUnit___024root___dump_triggers__nba(VHazardUnit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VHazardUnit___024root___dump_triggers__act(VHazardUnit___024root* vlSelf);
#endif  // VL_DEBUG

void VHazardUnit___024root___eval(VHazardUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHazardUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHazardUnit___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VHazardUnit___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("HazardUnit.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VHazardUnit___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VHazardUnit___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("HazardUnit.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VHazardUnit___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("HazardUnit.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VHazardUnit___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VHazardUnit___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VHazardUnit___024root___eval_debug_assertions(VHazardUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VHazardUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VHazardUnit___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_rs1_ex & 0xe0U))) {
        Verilated::overWidthError("io_rs1_ex");}
    if (VL_UNLIKELY((vlSelf->io_rs2_ex & 0xe0U))) {
        Verilated::overWidthError("io_rs2_ex");}
    if (VL_UNLIKELY((vlSelf->io_rd_mem & 0xe0U))) {
        Verilated::overWidthError("io_rd_mem");}
    if (VL_UNLIKELY((vlSelf->io_rd_wb & 0xe0U))) {
        Verilated::overWidthError("io_rd_wb");}
    if (VL_UNLIKELY((vlSelf->io_reg_wr_enable_mem & 0xfeU))) {
        Verilated::overWidthError("io_reg_wr_enable_mem");}
    if (VL_UNLIKELY((vlSelf->io_reg_wr_enable_wb & 0xfeU))) {
        Verilated::overWidthError("io_reg_wr_enable_wb");}
    if (VL_UNLIKELY((vlSelf->io_rs1_d & 0xe0U))) {
        Verilated::overWidthError("io_rs1_d");}
    if (VL_UNLIKELY((vlSelf->io_rs2_d & 0xe0U))) {
        Verilated::overWidthError("io_rs2_d");}
    if (VL_UNLIKELY((vlSelf->io_rd_ex & 0xe0U))) {
        Verilated::overWidthError("io_rd_ex");}
    if (VL_UNLIKELY((vlSelf->io_ex_regs_write_src & 0xfcU))) {
        Verilated::overWidthError("io_ex_regs_write_src");}
    if (VL_UNLIKELY((vlSelf->io_ex_jump_flag & 0xfeU))) {
        Verilated::overWidthError("io_ex_jump_flag");}
}
#endif  // VL_DEBUG
