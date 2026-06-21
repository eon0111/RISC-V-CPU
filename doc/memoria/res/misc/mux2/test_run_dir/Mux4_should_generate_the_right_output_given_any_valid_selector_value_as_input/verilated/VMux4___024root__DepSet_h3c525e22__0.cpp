// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMux4.h for the primary calling header

#include "VMux4__pch.h"
#include "VMux4___024root.h"

VL_INLINE_OPT void VMux4___024root___ico_sequent__TOP__0(VMux4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->io_o = ((3U == (IData)(vlSelf->Mux4__DOT__selTmp))
                     ? vlSelf->io_i4 : ((2U == (IData)(vlSelf->Mux4__DOT__selTmp))
                                         ? vlSelf->io_i3
                                         : ((1U == (IData)(vlSelf->Mux4__DOT__selTmp))
                                             ? vlSelf->io_i2
                                             : vlSelf->io_i1)));
}

void VMux4___024root___eval_ico(VMux4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VMux4___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VMux4___024root___eval_triggers__ico(VMux4___024root* vlSelf);

bool VMux4___024root___eval_phase__ico(VMux4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VMux4___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VMux4___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VMux4___024root___eval_act(VMux4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4___024root___eval_act\n"); );
}

VL_INLINE_OPT void VMux4___024root___nba_sequent__TOP__0(VMux4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->Mux4__DOT__selTmp = ((IData)(vlSelf->reset)
                                  ? 0U : (IData)(vlSelf->Mux4__DOT___selTmp_T_1));
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

void VMux4___024root___eval_nba(VMux4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VMux4___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void VMux4___024root___eval_triggers__act(VMux4___024root* vlSelf);

bool VMux4___024root___eval_phase__act(VMux4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VMux4___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VMux4___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VMux4___024root___eval_phase__nba(VMux4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VMux4___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VMux4___024root___dump_triggers__ico(VMux4___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMux4___024root___dump_triggers__nba(VMux4___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VMux4___024root___dump_triggers__act(VMux4___024root* vlSelf);
#endif  // VL_DEBUG

void VMux4___024root___eval(VMux4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4___024root___eval\n"); );
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
            VMux4___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("Mux4.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VMux4___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VMux4___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("Mux4.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VMux4___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("Mux4.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VMux4___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VMux4___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VMux4___024root___eval_debug_assertions(VMux4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
