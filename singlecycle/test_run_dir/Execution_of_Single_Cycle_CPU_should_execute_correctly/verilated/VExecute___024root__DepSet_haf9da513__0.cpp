// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExecute.h for the primary calling header

#include "VExecute__pch.h"
#include "VExecute___024root.h"

VL_INLINE_OPT void VExecute___024root___ico_sequent__TOP__0(VExecute___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExecute___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ Execute__DOT__alu_io_func;
    Execute__DOT__alu_io_func = 0;
    IData/*31:0*/ Execute__DOT__alu_io_op1;
    Execute__DOT__alu_io_op1 = 0;
    IData/*31:0*/ Execute__DOT__alu_io_op2;
    Execute__DOT__alu_io_op2 = 0;
    // Body
    vlSelf->io_if_jump_flag = ((0x6fU == (0x7fU & vlSelf->io_instruction)) 
                               | ((0x67U == (0x7fU 
                                             & vlSelf->io_instruction)) 
                                  | ((0x63U == (0x7fU 
                                                & vlSelf->io_instruction)) 
                                     & ((7U == (7U 
                                                & (vlSelf->io_instruction 
                                                   >> 0xcU)))
                                         ? (vlSelf->io_reg1_data 
                                            >= vlSelf->io_reg2_data)
                                         : ((6U == 
                                             (7U & 
                                              (vlSelf->io_instruction 
                                               >> 0xcU)))
                                             ? (vlSelf->io_reg1_data 
                                                < vlSelf->io_reg2_data)
                                             : ((5U 
                                                 == 
                                                 (7U 
                                                  & (vlSelf->io_instruction 
                                                     >> 0xcU)))
                                                 ? 
                                                VL_GTES_III(32, vlSelf->io_reg1_data, vlSelf->io_reg2_data)
                                                 : 
                                                ((4U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->io_instruction 
                                                      >> 0xcU)))
                                                  ? 
                                                 VL_LTS_III(32, vlSelf->io_reg1_data, vlSelf->io_reg2_data)
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->io_instruction 
                                                       >> 0xcU)))
                                                   ? 
                                                  (vlSelf->io_reg1_data 
                                                   != vlSelf->io_reg2_data)
                                                   : (IData)(
                                                             ((0U 
                                                               == 
                                                               (0x7000U 
                                                                & vlSelf->io_instruction)) 
                                                              & (vlSelf->io_reg1_data 
                                                                 == vlSelf->io_reg2_data)))))))))));
    vlSelf->io_if_jump_address = (vlSelf->io_immediate 
                                  + ((0x67U == (0x7fU 
                                                & vlSelf->io_instruction))
                                      ? vlSelf->io_reg1_data
                                      : vlSelf->io_instruction_address));
    Execute__DOT__alu_io_func = ((0x13U == (0x7fU & vlSelf->io_instruction))
                                  ? ((5U == (7U & (vlSelf->io_instruction 
                                                   >> 0xcU)))
                                      ? ((0x40000000U 
                                          & vlSelf->io_instruction)
                                          ? 9U : 8U)
                                      : ((7U == (7U 
                                                 & (vlSelf->io_instruction 
                                                    >> 0xcU)))
                                          ? 7U : ((6U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->io_instruction 
                                                       >> 0xcU)))
                                                   ? 6U
                                                   : 
                                                  ((4U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->io_instruction 
                                                        >> 0xcU)))
                                                    ? 5U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->io_instruction 
                                                         >> 0xcU)))
                                                     ? 0xaU
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->io_instruction 
                                                          >> 0xcU)))
                                                      ? 4U
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->io_instruction 
                                                           >> 0xcU)))
                                                       ? 3U
                                                       : 1U)))))))
                                  : ((0x33U == (0x7fU 
                                                & vlSelf->io_instruction))
                                      ? ((5U == (7U 
                                                 & (vlSelf->io_instruction 
                                                    >> 0xcU)))
                                          ? ((0x40000000U 
                                              & vlSelf->io_instruction)
                                              ? 9U : 8U)
                                          : ((7U == 
                                              (7U & 
                                               (vlSelf->io_instruction 
                                                >> 0xcU)))
                                              ? 7U : 
                                             ((6U == 
                                               (7U 
                                                & (vlSelf->io_instruction 
                                                   >> 0xcU)))
                                               ? 6U
                                               : ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->io_instruction 
                                                       >> 0xcU)))
                                                   ? 5U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->io_instruction 
                                                        >> 0xcU)))
                                                    ? 0xaU
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->io_instruction 
                                                         >> 0xcU)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->io_instruction 
                                                          >> 0xcU)))
                                                      ? 3U
                                                      : 
                                                     ((0x40000000U 
                                                       & vlSelf->io_instruction)
                                                       ? 2U
                                                       : 1U))))))))
                                      : ((0x63U == 
                                          (0x7fU & vlSelf->io_instruction)) 
                                         | ((3U == 
                                             (0x7fU 
                                              & vlSelf->io_instruction)) 
                                            | ((0x23U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->io_instruction)) 
                                               | ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->io_instruction)) 
                                                  | ((0x67U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->io_instruction)) 
                                                     | ((0x37U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->io_instruction)) 
                                                        | (0x17U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->io_instruction))))))))));
    Execute__DOT__alu_io_op1 = ((IData)(vlSelf->io_aluop1_source)
                                 ? vlSelf->io_instruction_address
                                 : vlSelf->io_reg1_data);
    Execute__DOT__alu_io_op2 = ((IData)(vlSelf->io_aluop2_source)
                                 ? vlSelf->io_immediate
                                 : vlSelf->io_reg2_data);
    vlSelf->io_mem_alu_result = (IData)((0x7fffffffffffffffULL 
                                         & ((1U == (IData)(Execute__DOT__alu_io_func))
                                             ? (QData)((IData)(
                                                               (Execute__DOT__alu_io_op1 
                                                                + Execute__DOT__alu_io_op2)))
                                             : ((2U 
                                                 == (IData)(Execute__DOT__alu_io_func))
                                                 ? (QData)((IData)(
                                                                   (Execute__DOT__alu_io_op1 
                                                                    - Execute__DOT__alu_io_op2)))
                                                 : 
                                                ((3U 
                                                  == (IData)(Execute__DOT__alu_io_func))
                                                  ? 
                                                 ((QData)((IData)(Execute__DOT__alu_io_op1)) 
                                                  << 
                                                  (0x1fU 
                                                   & Execute__DOT__alu_io_op2))
                                                  : (QData)((IData)(
                                                                    ((4U 
                                                                      == (IData)(Execute__DOT__alu_io_func))
                                                                      ? 
                                                                     VL_LTS_III(32, Execute__DOT__alu_io_op1, Execute__DOT__alu_io_op2)
                                                                      : 
                                                                     ((5U 
                                                                       == (IData)(Execute__DOT__alu_io_func))
                                                                       ? 
                                                                      (Execute__DOT__alu_io_op1 
                                                                       ^ Execute__DOT__alu_io_op2)
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(Execute__DOT__alu_io_func))
                                                                        ? 
                                                                       (Execute__DOT__alu_io_op1 
                                                                        | Execute__DOT__alu_io_op2)
                                                                        : 
                                                                       ((7U 
                                                                         == (IData)(Execute__DOT__alu_io_func))
                                                                         ? 
                                                                        (Execute__DOT__alu_io_op1 
                                                                         & Execute__DOT__alu_io_op2)
                                                                         : 
                                                                        ((8U 
                                                                          == (IData)(Execute__DOT__alu_io_func))
                                                                          ? 
                                                                         (Execute__DOT__alu_io_op1 
                                                                          >> 
                                                                          (0x1fU 
                                                                           & Execute__DOT__alu_io_op2))
                                                                          : 
                                                                         ((9U 
                                                                           == (IData)(Execute__DOT__alu_io_func))
                                                                           ? 
                                                                          VL_SHIFTRS_III(32,32,5, Execute__DOT__alu_io_op1, 
                                                                                (0x1fU 
                                                                                & Execute__DOT__alu_io_op2))
                                                                           : 
                                                                          ((0xaU 
                                                                            == (IData)(Execute__DOT__alu_io_func)) 
                                                                           & (Execute__DOT__alu_io_op1 
                                                                              < Execute__DOT__alu_io_op2)))))))))))))));
}

void VExecute___024root___eval_ico(VExecute___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExecute___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VExecute___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VExecute___024root___eval_triggers__ico(VExecute___024root* vlSelf);

bool VExecute___024root___eval_phase__ico(VExecute___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExecute___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VExecute___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VExecute___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VExecute___024root___eval_act(VExecute___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExecute___024root___eval_act\n"); );
}

void VExecute___024root___eval_nba(VExecute___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExecute___024root___eval_nba\n"); );
}

void VExecute___024root___eval_triggers__act(VExecute___024root* vlSelf);

bool VExecute___024root___eval_phase__act(VExecute___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExecute___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VExecute___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VExecute___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VExecute___024root___eval_phase__nba(VExecute___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExecute___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VExecute___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VExecute___024root___dump_triggers__ico(VExecute___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VExecute___024root___dump_triggers__nba(VExecute___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VExecute___024root___dump_triggers__act(VExecute___024root* vlSelf);
#endif  // VL_DEBUG

void VExecute___024root___eval(VExecute___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExecute___024root___eval\n"); );
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
            VExecute___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("Execute.sv", 61, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VExecute___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VExecute___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("Execute.sv", 61, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VExecute___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("Execute.sv", 61, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VExecute___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VExecute___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VExecute___024root___eval_debug_assertions(VExecute___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VExecute__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExecute___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_aluop1_source & 0xfeU))) {
        Verilated::overWidthError("io_aluop1_source");}
    if (VL_UNLIKELY((vlSelf->io_aluop2_source & 0xfeU))) {
        Verilated::overWidthError("io_aluop2_source");}
}
#endif  // VL_DEBUG
