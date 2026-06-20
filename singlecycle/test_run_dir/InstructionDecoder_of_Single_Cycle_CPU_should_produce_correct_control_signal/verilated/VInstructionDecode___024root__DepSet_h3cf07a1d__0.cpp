// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VInstructionDecode.h for the primary calling header

#include "VInstructionDecode__pch.h"
#include "VInstructionDecode___024root.h"

VL_INLINE_OPT void VInstructionDecode___024root___ico_sequent__TOP__0(VInstructionDecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstructionDecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionDecode___024root___ico_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ InstructionDecode__DOT___immediate_T_9;
    InstructionDecode__DOT___immediate_T_9 = 0;
    CData/*0:0*/ InstructionDecode__DOT___io_wb_reg_write_source_T_2;
    InstructionDecode__DOT___io_wb_reg_write_source_T_2 = 0;
    CData/*0:0*/ __VdfgTmp_ha77ee14f__0;
    __VdfgTmp_ha77ee14f__0 = 0;
    // Body
    vlSelf->io_regs_reg1_read_address = ((0x37U == 
                                          (0x7fU & vlSelf->io_instruction))
                                          ? 0U : (0x1fU 
                                                  & (vlSelf->io_instruction 
                                                     >> 0xfU)));
    vlSelf->io_regs_reg2_read_address = (0x1fU & (vlSelf->io_instruction 
                                                  >> 0x14U));
    vlSelf->io_ex_aluop1_source = ((0x17U == (0x7fU 
                                              & vlSelf->io_instruction)) 
                                   | ((0x63U == (0x7fU 
                                                 & vlSelf->io_instruction)) 
                                      | (0x6fU == (0x7fU 
                                                   & vlSelf->io_instruction))));
    vlSelf->io_ex_aluop2_source = (0x33U != (0x7fU 
                                             & vlSelf->io_instruction));
    vlSelf->io_reg_write_address = (0x1fU & (vlSelf->io_instruction 
                                             >> 7U));
    InstructionDecode__DOT___immediate_T_9 = ((((vlSelf->io_instruction 
                                                 >> 0x1fU)
                                                 ? 0x1fffffU
                                                 : 0U) 
                                               << 0xbU) 
                                              | (0x7ffU 
                                                 & (vlSelf->io_instruction 
                                                    >> 0x14U)));
    InstructionDecode__DOT___io_wb_reg_write_source_T_2 
        = ((0x33U == (0x7fU & vlSelf->io_instruction)) 
           | (0x13U == (0x7fU & vlSelf->io_instruction)));
    __VdfgTmp_ha77ee14f__0 = ((0x6fU == (0x7fU & vlSelf->io_instruction)) 
                              | (0x67U == (0x7fU & vlSelf->io_instruction)));
    vlSelf->io_memory_read_enable = (3U == (0x7fU & vlSelf->io_instruction));
    vlSelf->io_memory_write_enable = vlSelf->io_memory_read_enable;
    vlSelf->io_ex_immediate = ((0x6fU == (0x7fU & vlSelf->io_instruction))
                                ? ((((vlSelf->io_instruction 
                                      >> 0x1fU) ? 0xfffU
                                      : 0U) << 0x14U) 
                                   | ((0xff000U & vlSelf->io_instruction) 
                                      | ((0x800U & 
                                          (vlSelf->io_instruction 
                                           >> 9U)) 
                                         | (0x7feU 
                                            & (vlSelf->io_instruction 
                                               >> 0x14U)))))
                                : ((0x17U == (0x7fU 
                                              & vlSelf->io_instruction))
                                    ? (0xfffff000U 
                                       & vlSelf->io_instruction)
                                    : ((0x37U == (0x7fU 
                                                  & vlSelf->io_instruction))
                                        ? (0xfffff000U 
                                           & vlSelf->io_instruction)
                                        : ((0x63U == 
                                            (0x7fU 
                                             & vlSelf->io_instruction))
                                            ? ((((vlSelf->io_instruction 
                                                  >> 0x1fU)
                                                  ? 0xfffffU
                                                  : 0U) 
                                                << 0xcU) 
                                               | ((0x800U 
                                                   & (vlSelf->io_instruction 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->io_instruction 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelf->io_instruction 
                                                           >> 7U)))))
                                            : ((0x23U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->io_instruction))
                                                ? (
                                                   (((vlSelf->io_instruction 
                                                      >> 0x1fU)
                                                      ? 0x1fffffU
                                                      : 0U) 
                                                    << 0xbU) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->io_instruction 
                                                          >> 0x14U)) 
                                                      | (IData)(vlSelf->io_reg_write_address)))
                                                : (
                                                   (0x67U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->io_instruction))
                                                    ? InstructionDecode__DOT___immediate_T_9
                                                    : 
                                                   ((IData)(vlSelf->io_memory_read_enable)
                                                     ? InstructionDecode__DOT___immediate_T_9
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->io_instruction))
                                                      ? InstructionDecode__DOT___immediate_T_9
                                                      : 
                                                     ((((vlSelf->io_instruction 
                                                         >> 0x1fU)
                                                         ? 0xfffffU
                                                         : 0U) 
                                                       << 0xcU) 
                                                      | (vlSelf->io_instruction 
                                                         >> 0x14U))))))))));
    vlSelf->io_wb_reg_write_source = (((IData)(InstructionDecode__DOT___io_wb_reg_write_source_T_2) 
                                       | ((0x37U == 
                                           (0x7fU & vlSelf->io_instruction)) 
                                          | (0x17U 
                                             == (0x7fU 
                                                 & vlSelf->io_instruction))))
                                       ? 0U : ((IData)(vlSelf->io_memory_read_enable)
                                                ? 1U
                                                : ((IData)(__VdfgTmp_ha77ee14f__0)
                                                    ? 3U
                                                    : 0U)));
    vlSelf->io_reg_write_enable = ((IData)(InstructionDecode__DOT___io_wb_reg_write_source_T_2) 
                                   | ((IData)(vlSelf->io_memory_read_enable) 
                                      | ((0x17U == 
                                          (0x7fU & vlSelf->io_instruction)) 
                                         | ((0x37U 
                                             == (0x7fU 
                                                 & vlSelf->io_instruction)) 
                                            | (IData)(__VdfgTmp_ha77ee14f__0)))));
}

void VInstructionDecode___024root___eval_ico(VInstructionDecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstructionDecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionDecode___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VInstructionDecode___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VInstructionDecode___024root___eval_triggers__ico(VInstructionDecode___024root* vlSelf);

bool VInstructionDecode___024root___eval_phase__ico(VInstructionDecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstructionDecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionDecode___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VInstructionDecode___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VInstructionDecode___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VInstructionDecode___024root___eval_act(VInstructionDecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstructionDecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionDecode___024root___eval_act\n"); );
}

void VInstructionDecode___024root___eval_nba(VInstructionDecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstructionDecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionDecode___024root___eval_nba\n"); );
}

void VInstructionDecode___024root___eval_triggers__act(VInstructionDecode___024root* vlSelf);

bool VInstructionDecode___024root___eval_phase__act(VInstructionDecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstructionDecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionDecode___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VInstructionDecode___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VInstructionDecode___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VInstructionDecode___024root___eval_phase__nba(VInstructionDecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstructionDecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionDecode___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VInstructionDecode___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VInstructionDecode___024root___dump_triggers__ico(VInstructionDecode___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VInstructionDecode___024root___dump_triggers__nba(VInstructionDecode___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VInstructionDecode___024root___dump_triggers__act(VInstructionDecode___024root* vlSelf);
#endif  // VL_DEBUG

void VInstructionDecode___024root___eval(VInstructionDecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstructionDecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionDecode___024root___eval\n"); );
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
            VInstructionDecode___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("InstructionDecode.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VInstructionDecode___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VInstructionDecode___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("InstructionDecode.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VInstructionDecode___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("InstructionDecode.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VInstructionDecode___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VInstructionDecode___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VInstructionDecode___024root___eval_debug_assertions(VInstructionDecode___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VInstructionDecode__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionDecode___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
