// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegisterFile.h for the primary calling header

#include "VRegisterFile__pch.h"
#include "VRegisterFile___024root.h"

VL_INLINE_OPT void VRegisterFile___024root___ico_sequent__TOP__0(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->io_read_data1 = ((0U == (IData)(vlSelf->io_read_address1))
                              ? 0U : ((0x1fU == (IData)(vlSelf->io_read_address1))
                                       ? vlSelf->RegisterFile__DOT__registers_31
                                       : ((0x1eU == (IData)(vlSelf->io_read_address1))
                                           ? vlSelf->RegisterFile__DOT__registers_30
                                           : ((0x1dU 
                                               == (IData)(vlSelf->io_read_address1))
                                               ? vlSelf->RegisterFile__DOT__registers_29
                                               : ((0x1cU 
                                                   == (IData)(vlSelf->io_read_address1))
                                                   ? vlSelf->RegisterFile__DOT__registers_28
                                                   : 
                                                  ((0x1bU 
                                                    == (IData)(vlSelf->io_read_address1))
                                                    ? vlSelf->RegisterFile__DOT__registers_27
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelf->io_read_address1))
                                                     ? vlSelf->RegisterFile__DOT__registers_26
                                                     : 
                                                    ((0x19U 
                                                      == (IData)(vlSelf->io_read_address1))
                                                      ? vlSelf->RegisterFile__DOT__registers_25
                                                      : 
                                                     ((0x18U 
                                                       == (IData)(vlSelf->io_read_address1))
                                                       ? vlSelf->RegisterFile__DOT__registers_24
                                                       : 
                                                      ((0x17U 
                                                        == (IData)(vlSelf->io_read_address1))
                                                        ? vlSelf->RegisterFile__DOT__registers_23
                                                        : 
                                                       ((0x16U 
                                                         == (IData)(vlSelf->io_read_address1))
                                                         ? vlSelf->RegisterFile__DOT__registers_22
                                                         : 
                                                        ((0x15U 
                                                          == (IData)(vlSelf->io_read_address1))
                                                          ? vlSelf->RegisterFile__DOT__registers_21
                                                          : 
                                                         ((0x14U 
                                                           == (IData)(vlSelf->io_read_address1))
                                                           ? vlSelf->RegisterFile__DOT__registers_20
                                                           : 
                                                          ((0x13U 
                                                            == (IData)(vlSelf->io_read_address1))
                                                            ? vlSelf->RegisterFile__DOT__registers_19
                                                            : 
                                                           ((0x12U 
                                                             == (IData)(vlSelf->io_read_address1))
                                                             ? vlSelf->RegisterFile__DOT__registers_18
                                                             : 
                                                            ((0x11U 
                                                              == (IData)(vlSelf->io_read_address1))
                                                              ? vlSelf->RegisterFile__DOT__registers_17
                                                              : 
                                                             ((0x10U 
                                                               == (IData)(vlSelf->io_read_address1))
                                                               ? vlSelf->RegisterFile__DOT__registers_16
                                                               : 
                                                              ((0xfU 
                                                                == (IData)(vlSelf->io_read_address1))
                                                                ? vlSelf->RegisterFile__DOT__registers_15
                                                                : 
                                                               ((0xeU 
                                                                 == (IData)(vlSelf->io_read_address1))
                                                                 ? vlSelf->RegisterFile__DOT__registers_14
                                                                 : 
                                                                ((0xdU 
                                                                  == (IData)(vlSelf->io_read_address1))
                                                                  ? vlSelf->RegisterFile__DOT__registers_13
                                                                  : 
                                                                 ((0xcU 
                                                                   == (IData)(vlSelf->io_read_address1))
                                                                   ? vlSelf->RegisterFile__DOT__registers_12
                                                                   : 
                                                                  ((0xbU 
                                                                    == (IData)(vlSelf->io_read_address1))
                                                                    ? vlSelf->RegisterFile__DOT__registers_11
                                                                    : 
                                                                   ((0xaU 
                                                                     == (IData)(vlSelf->io_read_address1))
                                                                     ? vlSelf->RegisterFile__DOT__registers_10
                                                                     : 
                                                                    ((9U 
                                                                      == (IData)(vlSelf->io_read_address1))
                                                                      ? vlSelf->RegisterFile__DOT__registers_9
                                                                      : 
                                                                     ((8U 
                                                                       == (IData)(vlSelf->io_read_address1))
                                                                       ? vlSelf->RegisterFile__DOT__registers_8
                                                                       : 
                                                                      ((7U 
                                                                        == (IData)(vlSelf->io_read_address1))
                                                                        ? vlSelf->RegisterFile__DOT__registers_7
                                                                        : 
                                                                       ((6U 
                                                                         == (IData)(vlSelf->io_read_address1))
                                                                         ? vlSelf->RegisterFile__DOT__registers_6
                                                                         : 
                                                                        ((5U 
                                                                          == (IData)(vlSelf->io_read_address1))
                                                                          ? vlSelf->RegisterFile__DOT__registers_5
                                                                          : 
                                                                         ((4U 
                                                                           == (IData)(vlSelf->io_read_address1))
                                                                           ? vlSelf->RegisterFile__DOT__registers_4
                                                                           : 
                                                                          ((3U 
                                                                            == (IData)(vlSelf->io_read_address1))
                                                                            ? vlSelf->RegisterFile__DOT__registers_3
                                                                            : 
                                                                           ((2U 
                                                                             == (IData)(vlSelf->io_read_address1))
                                                                             ? vlSelf->RegisterFile__DOT__registers_2
                                                                             : 
                                                                            ((1U 
                                                                              == (IData)(vlSelf->io_read_address1))
                                                                              ? vlSelf->RegisterFile__DOT__registers_1
                                                                              : vlSelf->RegisterFile__DOT__registers_0))))))))))))))))))))))))))))))));
    vlSelf->io_read_data2 = ((0U == (IData)(vlSelf->io_read_address2))
                              ? 0U : ((0x1fU == (IData)(vlSelf->io_read_address2))
                                       ? vlSelf->RegisterFile__DOT__registers_31
                                       : ((0x1eU == (IData)(vlSelf->io_read_address2))
                                           ? vlSelf->RegisterFile__DOT__registers_30
                                           : ((0x1dU 
                                               == (IData)(vlSelf->io_read_address2))
                                               ? vlSelf->RegisterFile__DOT__registers_29
                                               : ((0x1cU 
                                                   == (IData)(vlSelf->io_read_address2))
                                                   ? vlSelf->RegisterFile__DOT__registers_28
                                                   : 
                                                  ((0x1bU 
                                                    == (IData)(vlSelf->io_read_address2))
                                                    ? vlSelf->RegisterFile__DOT__registers_27
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelf->io_read_address2))
                                                     ? vlSelf->RegisterFile__DOT__registers_26
                                                     : 
                                                    ((0x19U 
                                                      == (IData)(vlSelf->io_read_address2))
                                                      ? vlSelf->RegisterFile__DOT__registers_25
                                                      : 
                                                     ((0x18U 
                                                       == (IData)(vlSelf->io_read_address2))
                                                       ? vlSelf->RegisterFile__DOT__registers_24
                                                       : 
                                                      ((0x17U 
                                                        == (IData)(vlSelf->io_read_address2))
                                                        ? vlSelf->RegisterFile__DOT__registers_23
                                                        : 
                                                       ((0x16U 
                                                         == (IData)(vlSelf->io_read_address2))
                                                         ? vlSelf->RegisterFile__DOT__registers_22
                                                         : 
                                                        ((0x15U 
                                                          == (IData)(vlSelf->io_read_address2))
                                                          ? vlSelf->RegisterFile__DOT__registers_21
                                                          : 
                                                         ((0x14U 
                                                           == (IData)(vlSelf->io_read_address2))
                                                           ? vlSelf->RegisterFile__DOT__registers_20
                                                           : 
                                                          ((0x13U 
                                                            == (IData)(vlSelf->io_read_address2))
                                                            ? vlSelf->RegisterFile__DOT__registers_19
                                                            : 
                                                           ((0x12U 
                                                             == (IData)(vlSelf->io_read_address2))
                                                             ? vlSelf->RegisterFile__DOT__registers_18
                                                             : 
                                                            ((0x11U 
                                                              == (IData)(vlSelf->io_read_address2))
                                                              ? vlSelf->RegisterFile__DOT__registers_17
                                                              : 
                                                             ((0x10U 
                                                               == (IData)(vlSelf->io_read_address2))
                                                               ? vlSelf->RegisterFile__DOT__registers_16
                                                               : 
                                                              ((0xfU 
                                                                == (IData)(vlSelf->io_read_address2))
                                                                ? vlSelf->RegisterFile__DOT__registers_15
                                                                : 
                                                               ((0xeU 
                                                                 == (IData)(vlSelf->io_read_address2))
                                                                 ? vlSelf->RegisterFile__DOT__registers_14
                                                                 : 
                                                                ((0xdU 
                                                                  == (IData)(vlSelf->io_read_address2))
                                                                  ? vlSelf->RegisterFile__DOT__registers_13
                                                                  : 
                                                                 ((0xcU 
                                                                   == (IData)(vlSelf->io_read_address2))
                                                                   ? vlSelf->RegisterFile__DOT__registers_12
                                                                   : 
                                                                  ((0xbU 
                                                                    == (IData)(vlSelf->io_read_address2))
                                                                    ? vlSelf->RegisterFile__DOT__registers_11
                                                                    : 
                                                                   ((0xaU 
                                                                     == (IData)(vlSelf->io_read_address2))
                                                                     ? vlSelf->RegisterFile__DOT__registers_10
                                                                     : 
                                                                    ((9U 
                                                                      == (IData)(vlSelf->io_read_address2))
                                                                      ? vlSelf->RegisterFile__DOT__registers_9
                                                                      : 
                                                                     ((8U 
                                                                       == (IData)(vlSelf->io_read_address2))
                                                                       ? vlSelf->RegisterFile__DOT__registers_8
                                                                       : 
                                                                      ((7U 
                                                                        == (IData)(vlSelf->io_read_address2))
                                                                        ? vlSelf->RegisterFile__DOT__registers_7
                                                                        : 
                                                                       ((6U 
                                                                         == (IData)(vlSelf->io_read_address2))
                                                                         ? vlSelf->RegisterFile__DOT__registers_6
                                                                         : 
                                                                        ((5U 
                                                                          == (IData)(vlSelf->io_read_address2))
                                                                          ? vlSelf->RegisterFile__DOT__registers_5
                                                                          : 
                                                                         ((4U 
                                                                           == (IData)(vlSelf->io_read_address2))
                                                                           ? vlSelf->RegisterFile__DOT__registers_4
                                                                           : 
                                                                          ((3U 
                                                                            == (IData)(vlSelf->io_read_address2))
                                                                            ? vlSelf->RegisterFile__DOT__registers_3
                                                                            : 
                                                                           ((2U 
                                                                             == (IData)(vlSelf->io_read_address2))
                                                                             ? vlSelf->RegisterFile__DOT__registers_2
                                                                             : 
                                                                            ((1U 
                                                                              == (IData)(vlSelf->io_read_address2))
                                                                              ? vlSelf->RegisterFile__DOT__registers_1
                                                                              : vlSelf->RegisterFile__DOT__registers_0))))))))))))))))))))))))))))))));
    vlSelf->io_debug_read_data = ((0U == (IData)(vlSelf->io_debug_read_address))
                                   ? 0U : ((0x1fU == (IData)(vlSelf->io_debug_read_address))
                                            ? vlSelf->RegisterFile__DOT__registers_31
                                            : ((0x1eU 
                                                == (IData)(vlSelf->io_debug_read_address))
                                                ? vlSelf->RegisterFile__DOT__registers_30
                                                : (
                                                   (0x1dU 
                                                    == (IData)(vlSelf->io_debug_read_address))
                                                    ? vlSelf->RegisterFile__DOT__registers_29
                                                    : 
                                                   ((0x1cU 
                                                     == (IData)(vlSelf->io_debug_read_address))
                                                     ? vlSelf->RegisterFile__DOT__registers_28
                                                     : 
                                                    ((0x1bU 
                                                      == (IData)(vlSelf->io_debug_read_address))
                                                      ? vlSelf->RegisterFile__DOT__registers_27
                                                      : 
                                                     ((0x1aU 
                                                       == (IData)(vlSelf->io_debug_read_address))
                                                       ? vlSelf->RegisterFile__DOT__registers_26
                                                       : 
                                                      ((0x19U 
                                                        == (IData)(vlSelf->io_debug_read_address))
                                                        ? vlSelf->RegisterFile__DOT__registers_25
                                                        : 
                                                       ((0x18U 
                                                         == (IData)(vlSelf->io_debug_read_address))
                                                         ? vlSelf->RegisterFile__DOT__registers_24
                                                         : 
                                                        ((0x17U 
                                                          == (IData)(vlSelf->io_debug_read_address))
                                                          ? vlSelf->RegisterFile__DOT__registers_23
                                                          : 
                                                         ((0x16U 
                                                           == (IData)(vlSelf->io_debug_read_address))
                                                           ? vlSelf->RegisterFile__DOT__registers_22
                                                           : 
                                                          ((0x15U 
                                                            == (IData)(vlSelf->io_debug_read_address))
                                                            ? vlSelf->RegisterFile__DOT__registers_21
                                                            : 
                                                           ((0x14U 
                                                             == (IData)(vlSelf->io_debug_read_address))
                                                             ? vlSelf->RegisterFile__DOT__registers_20
                                                             : 
                                                            ((0x13U 
                                                              == (IData)(vlSelf->io_debug_read_address))
                                                              ? vlSelf->RegisterFile__DOT__registers_19
                                                              : 
                                                             ((0x12U 
                                                               == (IData)(vlSelf->io_debug_read_address))
                                                               ? vlSelf->RegisterFile__DOT__registers_18
                                                               : 
                                                              ((0x11U 
                                                                == (IData)(vlSelf->io_debug_read_address))
                                                                ? vlSelf->RegisterFile__DOT__registers_17
                                                                : 
                                                               ((0x10U 
                                                                 == (IData)(vlSelf->io_debug_read_address))
                                                                 ? vlSelf->RegisterFile__DOT__registers_16
                                                                 : 
                                                                ((0xfU 
                                                                  == (IData)(vlSelf->io_debug_read_address))
                                                                  ? vlSelf->RegisterFile__DOT__registers_15
                                                                  : 
                                                                 ((0xeU 
                                                                   == (IData)(vlSelf->io_debug_read_address))
                                                                   ? vlSelf->RegisterFile__DOT__registers_14
                                                                   : 
                                                                  ((0xdU 
                                                                    == (IData)(vlSelf->io_debug_read_address))
                                                                    ? vlSelf->RegisterFile__DOT__registers_13
                                                                    : 
                                                                   ((0xcU 
                                                                     == (IData)(vlSelf->io_debug_read_address))
                                                                     ? vlSelf->RegisterFile__DOT__registers_12
                                                                     : 
                                                                    ((0xbU 
                                                                      == (IData)(vlSelf->io_debug_read_address))
                                                                      ? vlSelf->RegisterFile__DOT__registers_11
                                                                      : 
                                                                     ((0xaU 
                                                                       == (IData)(vlSelf->io_debug_read_address))
                                                                       ? vlSelf->RegisterFile__DOT__registers_10
                                                                       : 
                                                                      ((9U 
                                                                        == (IData)(vlSelf->io_debug_read_address))
                                                                        ? vlSelf->RegisterFile__DOT__registers_9
                                                                        : 
                                                                       ((8U 
                                                                         == (IData)(vlSelf->io_debug_read_address))
                                                                         ? vlSelf->RegisterFile__DOT__registers_8
                                                                         : 
                                                                        ((7U 
                                                                          == (IData)(vlSelf->io_debug_read_address))
                                                                          ? vlSelf->RegisterFile__DOT__registers_7
                                                                          : 
                                                                         ((6U 
                                                                           == (IData)(vlSelf->io_debug_read_address))
                                                                           ? vlSelf->RegisterFile__DOT__registers_6
                                                                           : 
                                                                          ((5U 
                                                                            == (IData)(vlSelf->io_debug_read_address))
                                                                            ? vlSelf->RegisterFile__DOT__registers_5
                                                                            : 
                                                                           ((4U 
                                                                             == (IData)(vlSelf->io_debug_read_address))
                                                                             ? vlSelf->RegisterFile__DOT__registers_4
                                                                             : 
                                                                            ((3U 
                                                                              == (IData)(vlSelf->io_debug_read_address))
                                                                              ? vlSelf->RegisterFile__DOT__registers_3
                                                                              : 
                                                                             ((2U 
                                                                               == (IData)(vlSelf->io_debug_read_address))
                                                                               ? vlSelf->RegisterFile__DOT__registers_2
                                                                               : 
                                                                              ((1U 
                                                                                == (IData)(vlSelf->io_debug_read_address))
                                                                                ? vlSelf->RegisterFile__DOT__registers_1
                                                                                : vlSelf->RegisterFile__DOT__registers_0))))))))))))))))))))))))))))))));
}

void VRegisterFile___024root___eval_ico(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VRegisterFile___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VRegisterFile___024root___eval_triggers__ico(VRegisterFile___024root* vlSelf);

bool VRegisterFile___024root___eval_phase__ico(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VRegisterFile___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VRegisterFile___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VRegisterFile___024root___eval_act(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___eval_act\n"); );
}

VL_INLINE_OPT void VRegisterFile___024root___nba_sequent__TOP__0(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->RegisterFile__DOT__registers_31 = 0U;
        vlSelf->RegisterFile__DOT__registers_30 = 0U;
        vlSelf->RegisterFile__DOT__registers_29 = 0U;
        vlSelf->RegisterFile__DOT__registers_28 = 0U;
        vlSelf->RegisterFile__DOT__registers_27 = 0U;
        vlSelf->RegisterFile__DOT__registers_26 = 0U;
        vlSelf->RegisterFile__DOT__registers_8 = 0U;
        vlSelf->RegisterFile__DOT__registers_6 = 0U;
        vlSelf->RegisterFile__DOT__registers_2 = 0U;
        vlSelf->RegisterFile__DOT__registers_5 = 0U;
        vlSelf->RegisterFile__DOT__registers_16 = 0U;
        vlSelf->RegisterFile__DOT__registers_9 = 0U;
        vlSelf->RegisterFile__DOT__registers_11 = 0U;
        vlSelf->RegisterFile__DOT__registers_7 = 0U;
        vlSelf->RegisterFile__DOT__registers_0 = 0U;
        vlSelf->RegisterFile__DOT__registers_1 = 0U;
        vlSelf->RegisterFile__DOT__registers_3 = 0U;
        vlSelf->RegisterFile__DOT__registers_10 = 0U;
        vlSelf->RegisterFile__DOT__registers_4 = 0U;
        vlSelf->RegisterFile__DOT__registers_12 = 0U;
        vlSelf->RegisterFile__DOT__registers_13 = 0U;
        vlSelf->RegisterFile__DOT__registers_14 = 0U;
        vlSelf->RegisterFile__DOT__registers_15 = 0U;
        vlSelf->RegisterFile__DOT__registers_17 = 0U;
        vlSelf->RegisterFile__DOT__registers_18 = 0U;
        vlSelf->RegisterFile__DOT__registers_19 = 0U;
        vlSelf->RegisterFile__DOT__registers_20 = 0U;
        vlSelf->RegisterFile__DOT__registers_21 = 0U;
        vlSelf->RegisterFile__DOT__registers_22 = 0U;
        vlSelf->RegisterFile__DOT__registers_23 = 0U;
        vlSelf->RegisterFile__DOT__registers_24 = 0U;
        vlSelf->RegisterFile__DOT__registers_25 = 0U;
    } else if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((IData)(vlSelf->io_write_enable) & (0U 
                                                 != (IData)(vlSelf->io_write_address)))) {
            if ((0x1fU == (IData)(vlSelf->io_write_address))) {
                vlSelf->RegisterFile__DOT__registers_31 
                    = vlSelf->io_write_data;
            }
            if ((0x1eU == (IData)(vlSelf->io_write_address))) {
                vlSelf->RegisterFile__DOT__registers_30 
                    = vlSelf->io_write_data;
            }
            if ((0x1dU == (IData)(vlSelf->io_write_address))) {
                vlSelf->RegisterFile__DOT__registers_29 
                    = vlSelf->io_write_data;
            }
            if ((0x1cU == (IData)(vlSelf->io_write_address))) {
                vlSelf->RegisterFile__DOT__registers_28 
                    = vlSelf->io_write_data;
            }
            if ((0x1bU == (IData)(vlSelf->io_write_address))) {
                vlSelf->RegisterFile__DOT__registers_27 
                    = vlSelf->io_write_data;
            }
            if ((0x1aU == (IData)(vlSelf->io_write_address))) {
                vlSelf->RegisterFile__DOT__registers_26 
                    = vlSelf->io_write_data;
            }
            if ((8U == (IData)(vlSelf->io_write_address))) {
                vlSelf->RegisterFile__DOT__registers_8 
                    = vlSelf->io_write_data;
            }
            if ((6U == (IData)(vlSelf->io_write_address))) {
                vlSelf->RegisterFile__DOT__registers_6 
                    = vlSelf->io_write_data;
            }
            if ((2U == (IData)(vlSelf->io_write_address))) {
                vlSelf->RegisterFile__DOT__registers_2 
                    = vlSelf->io_write_data;
            }
            if ((5U == (IData)(vlSelf->io_write_address))) {
                vlSelf->RegisterFile__DOT__registers_5 
                    = vlSelf->io_write_data;
            }
            if ((0x10U == (IData)(vlSelf->io_write_address))) {
                vlSelf->RegisterFile__DOT__registers_16 
                    = vlSelf->io_write_data;
            }
            if ((9U == (IData)(vlSelf->io_write_address))) {
                vlSelf->RegisterFile__DOT__registers_9 
                    = vlSelf->io_write_data;
            }
            if ((0xbU == (IData)(vlSelf->io_write_address))) {
                vlSelf->RegisterFile__DOT__registers_11 
                    = vlSelf->io_write_data;
            }
            if ((7U == (IData)(vlSelf->io_write_address))) {
                vlSelf->RegisterFile__DOT__registers_7 
                    = vlSelf->io_write_data;
            }
            if ((0U == (IData)(vlSelf->io_write_address))) {
                vlSelf->RegisterFile__DOT__registers_0 
                    = vlSelf->io_write_data;
            }
            if ((1U == (IData)(vlSelf->io_write_address))) {
                vlSelf->RegisterFile__DOT__registers_1 
                    = vlSelf->io_write_data;
            }
            if ((3U == (IData)(vlSelf->io_write_address))) {
                vlSelf->RegisterFile__DOT__registers_3 
                    = vlSelf->io_write_data;
            }
            if ((0xaU == (IData)(vlSelf->io_write_address))) {
                vlSelf->RegisterFile__DOT__registers_10 
                    = vlSelf->io_write_data;
            }
            if ((4U == (IData)(vlSelf->io_write_address))) {
                vlSelf->RegisterFile__DOT__registers_4 
                    = vlSelf->io_write_data;
            }
            if ((0xcU == (IData)(vlSelf->io_write_address))) {
                vlSelf->RegisterFile__DOT__registers_12 
                    = vlSelf->io_write_data;
            }
            if ((0xdU == (IData)(vlSelf->io_write_address))) {
                vlSelf->RegisterFile__DOT__registers_13 
                    = vlSelf->io_write_data;
            }
            if ((0xeU == (IData)(vlSelf->io_write_address))) {
                vlSelf->RegisterFile__DOT__registers_14 
                    = vlSelf->io_write_data;
            }
            if ((0xfU == (IData)(vlSelf->io_write_address))) {
                vlSelf->RegisterFile__DOT__registers_15 
                    = vlSelf->io_write_data;
            }
            if ((0x11U == (IData)(vlSelf->io_write_address))) {
                vlSelf->RegisterFile__DOT__registers_17 
                    = vlSelf->io_write_data;
            }
            if ((0x12U == (IData)(vlSelf->io_write_address))) {
                vlSelf->RegisterFile__DOT__registers_18 
                    = vlSelf->io_write_data;
            }
            if ((0x13U == (IData)(vlSelf->io_write_address))) {
                vlSelf->RegisterFile__DOT__registers_19 
                    = vlSelf->io_write_data;
            }
            if ((0x14U == (IData)(vlSelf->io_write_address))) {
                vlSelf->RegisterFile__DOT__registers_20 
                    = vlSelf->io_write_data;
            }
            if ((0x15U == (IData)(vlSelf->io_write_address))) {
                vlSelf->RegisterFile__DOT__registers_21 
                    = vlSelf->io_write_data;
            }
            if ((0x16U == (IData)(vlSelf->io_write_address))) {
                vlSelf->RegisterFile__DOT__registers_22 
                    = vlSelf->io_write_data;
            }
            if ((0x17U == (IData)(vlSelf->io_write_address))) {
                vlSelf->RegisterFile__DOT__registers_23 
                    = vlSelf->io_write_data;
            }
            if ((0x18U == (IData)(vlSelf->io_write_address))) {
                vlSelf->RegisterFile__DOT__registers_24 
                    = vlSelf->io_write_data;
            }
            if ((0x19U == (IData)(vlSelf->io_write_address))) {
                vlSelf->RegisterFile__DOT__registers_25 
                    = vlSelf->io_write_data;
            }
        }
    }
    vlSelf->io_read_data1 = ((0U == (IData)(vlSelf->io_read_address1))
                              ? 0U : ((0x1fU == (IData)(vlSelf->io_read_address1))
                                       ? vlSelf->RegisterFile__DOT__registers_31
                                       : ((0x1eU == (IData)(vlSelf->io_read_address1))
                                           ? vlSelf->RegisterFile__DOT__registers_30
                                           : ((0x1dU 
                                               == (IData)(vlSelf->io_read_address1))
                                               ? vlSelf->RegisterFile__DOT__registers_29
                                               : ((0x1cU 
                                                   == (IData)(vlSelf->io_read_address1))
                                                   ? vlSelf->RegisterFile__DOT__registers_28
                                                   : 
                                                  ((0x1bU 
                                                    == (IData)(vlSelf->io_read_address1))
                                                    ? vlSelf->RegisterFile__DOT__registers_27
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelf->io_read_address1))
                                                     ? vlSelf->RegisterFile__DOT__registers_26
                                                     : 
                                                    ((0x19U 
                                                      == (IData)(vlSelf->io_read_address1))
                                                      ? vlSelf->RegisterFile__DOT__registers_25
                                                      : 
                                                     ((0x18U 
                                                       == (IData)(vlSelf->io_read_address1))
                                                       ? vlSelf->RegisterFile__DOT__registers_24
                                                       : 
                                                      ((0x17U 
                                                        == (IData)(vlSelf->io_read_address1))
                                                        ? vlSelf->RegisterFile__DOT__registers_23
                                                        : 
                                                       ((0x16U 
                                                         == (IData)(vlSelf->io_read_address1))
                                                         ? vlSelf->RegisterFile__DOT__registers_22
                                                         : 
                                                        ((0x15U 
                                                          == (IData)(vlSelf->io_read_address1))
                                                          ? vlSelf->RegisterFile__DOT__registers_21
                                                          : 
                                                         ((0x14U 
                                                           == (IData)(vlSelf->io_read_address1))
                                                           ? vlSelf->RegisterFile__DOT__registers_20
                                                           : 
                                                          ((0x13U 
                                                            == (IData)(vlSelf->io_read_address1))
                                                            ? vlSelf->RegisterFile__DOT__registers_19
                                                            : 
                                                           ((0x12U 
                                                             == (IData)(vlSelf->io_read_address1))
                                                             ? vlSelf->RegisterFile__DOT__registers_18
                                                             : 
                                                            ((0x11U 
                                                              == (IData)(vlSelf->io_read_address1))
                                                              ? vlSelf->RegisterFile__DOT__registers_17
                                                              : 
                                                             ((0x10U 
                                                               == (IData)(vlSelf->io_read_address1))
                                                               ? vlSelf->RegisterFile__DOT__registers_16
                                                               : 
                                                              ((0xfU 
                                                                == (IData)(vlSelf->io_read_address1))
                                                                ? vlSelf->RegisterFile__DOT__registers_15
                                                                : 
                                                               ((0xeU 
                                                                 == (IData)(vlSelf->io_read_address1))
                                                                 ? vlSelf->RegisterFile__DOT__registers_14
                                                                 : 
                                                                ((0xdU 
                                                                  == (IData)(vlSelf->io_read_address1))
                                                                  ? vlSelf->RegisterFile__DOT__registers_13
                                                                  : 
                                                                 ((0xcU 
                                                                   == (IData)(vlSelf->io_read_address1))
                                                                   ? vlSelf->RegisterFile__DOT__registers_12
                                                                   : 
                                                                  ((0xbU 
                                                                    == (IData)(vlSelf->io_read_address1))
                                                                    ? vlSelf->RegisterFile__DOT__registers_11
                                                                    : 
                                                                   ((0xaU 
                                                                     == (IData)(vlSelf->io_read_address1))
                                                                     ? vlSelf->RegisterFile__DOT__registers_10
                                                                     : 
                                                                    ((9U 
                                                                      == (IData)(vlSelf->io_read_address1))
                                                                      ? vlSelf->RegisterFile__DOT__registers_9
                                                                      : 
                                                                     ((8U 
                                                                       == (IData)(vlSelf->io_read_address1))
                                                                       ? vlSelf->RegisterFile__DOT__registers_8
                                                                       : 
                                                                      ((7U 
                                                                        == (IData)(vlSelf->io_read_address1))
                                                                        ? vlSelf->RegisterFile__DOT__registers_7
                                                                        : 
                                                                       ((6U 
                                                                         == (IData)(vlSelf->io_read_address1))
                                                                         ? vlSelf->RegisterFile__DOT__registers_6
                                                                         : 
                                                                        ((5U 
                                                                          == (IData)(vlSelf->io_read_address1))
                                                                          ? vlSelf->RegisterFile__DOT__registers_5
                                                                          : 
                                                                         ((4U 
                                                                           == (IData)(vlSelf->io_read_address1))
                                                                           ? vlSelf->RegisterFile__DOT__registers_4
                                                                           : 
                                                                          ((3U 
                                                                            == (IData)(vlSelf->io_read_address1))
                                                                            ? vlSelf->RegisterFile__DOT__registers_3
                                                                            : 
                                                                           ((2U 
                                                                             == (IData)(vlSelf->io_read_address1))
                                                                             ? vlSelf->RegisterFile__DOT__registers_2
                                                                             : 
                                                                            ((1U 
                                                                              == (IData)(vlSelf->io_read_address1))
                                                                              ? vlSelf->RegisterFile__DOT__registers_1
                                                                              : vlSelf->RegisterFile__DOT__registers_0))))))))))))))))))))))))))))))));
    vlSelf->io_read_data2 = ((0U == (IData)(vlSelf->io_read_address2))
                              ? 0U : ((0x1fU == (IData)(vlSelf->io_read_address2))
                                       ? vlSelf->RegisterFile__DOT__registers_31
                                       : ((0x1eU == (IData)(vlSelf->io_read_address2))
                                           ? vlSelf->RegisterFile__DOT__registers_30
                                           : ((0x1dU 
                                               == (IData)(vlSelf->io_read_address2))
                                               ? vlSelf->RegisterFile__DOT__registers_29
                                               : ((0x1cU 
                                                   == (IData)(vlSelf->io_read_address2))
                                                   ? vlSelf->RegisterFile__DOT__registers_28
                                                   : 
                                                  ((0x1bU 
                                                    == (IData)(vlSelf->io_read_address2))
                                                    ? vlSelf->RegisterFile__DOT__registers_27
                                                    : 
                                                   ((0x1aU 
                                                     == (IData)(vlSelf->io_read_address2))
                                                     ? vlSelf->RegisterFile__DOT__registers_26
                                                     : 
                                                    ((0x19U 
                                                      == (IData)(vlSelf->io_read_address2))
                                                      ? vlSelf->RegisterFile__DOT__registers_25
                                                      : 
                                                     ((0x18U 
                                                       == (IData)(vlSelf->io_read_address2))
                                                       ? vlSelf->RegisterFile__DOT__registers_24
                                                       : 
                                                      ((0x17U 
                                                        == (IData)(vlSelf->io_read_address2))
                                                        ? vlSelf->RegisterFile__DOT__registers_23
                                                        : 
                                                       ((0x16U 
                                                         == (IData)(vlSelf->io_read_address2))
                                                         ? vlSelf->RegisterFile__DOT__registers_22
                                                         : 
                                                        ((0x15U 
                                                          == (IData)(vlSelf->io_read_address2))
                                                          ? vlSelf->RegisterFile__DOT__registers_21
                                                          : 
                                                         ((0x14U 
                                                           == (IData)(vlSelf->io_read_address2))
                                                           ? vlSelf->RegisterFile__DOT__registers_20
                                                           : 
                                                          ((0x13U 
                                                            == (IData)(vlSelf->io_read_address2))
                                                            ? vlSelf->RegisterFile__DOT__registers_19
                                                            : 
                                                           ((0x12U 
                                                             == (IData)(vlSelf->io_read_address2))
                                                             ? vlSelf->RegisterFile__DOT__registers_18
                                                             : 
                                                            ((0x11U 
                                                              == (IData)(vlSelf->io_read_address2))
                                                              ? vlSelf->RegisterFile__DOT__registers_17
                                                              : 
                                                             ((0x10U 
                                                               == (IData)(vlSelf->io_read_address2))
                                                               ? vlSelf->RegisterFile__DOT__registers_16
                                                               : 
                                                              ((0xfU 
                                                                == (IData)(vlSelf->io_read_address2))
                                                                ? vlSelf->RegisterFile__DOT__registers_15
                                                                : 
                                                               ((0xeU 
                                                                 == (IData)(vlSelf->io_read_address2))
                                                                 ? vlSelf->RegisterFile__DOT__registers_14
                                                                 : 
                                                                ((0xdU 
                                                                  == (IData)(vlSelf->io_read_address2))
                                                                  ? vlSelf->RegisterFile__DOT__registers_13
                                                                  : 
                                                                 ((0xcU 
                                                                   == (IData)(vlSelf->io_read_address2))
                                                                   ? vlSelf->RegisterFile__DOT__registers_12
                                                                   : 
                                                                  ((0xbU 
                                                                    == (IData)(vlSelf->io_read_address2))
                                                                    ? vlSelf->RegisterFile__DOT__registers_11
                                                                    : 
                                                                   ((0xaU 
                                                                     == (IData)(vlSelf->io_read_address2))
                                                                     ? vlSelf->RegisterFile__DOT__registers_10
                                                                     : 
                                                                    ((9U 
                                                                      == (IData)(vlSelf->io_read_address2))
                                                                      ? vlSelf->RegisterFile__DOT__registers_9
                                                                      : 
                                                                     ((8U 
                                                                       == (IData)(vlSelf->io_read_address2))
                                                                       ? vlSelf->RegisterFile__DOT__registers_8
                                                                       : 
                                                                      ((7U 
                                                                        == (IData)(vlSelf->io_read_address2))
                                                                        ? vlSelf->RegisterFile__DOT__registers_7
                                                                        : 
                                                                       ((6U 
                                                                         == (IData)(vlSelf->io_read_address2))
                                                                         ? vlSelf->RegisterFile__DOT__registers_6
                                                                         : 
                                                                        ((5U 
                                                                          == (IData)(vlSelf->io_read_address2))
                                                                          ? vlSelf->RegisterFile__DOT__registers_5
                                                                          : 
                                                                         ((4U 
                                                                           == (IData)(vlSelf->io_read_address2))
                                                                           ? vlSelf->RegisterFile__DOT__registers_4
                                                                           : 
                                                                          ((3U 
                                                                            == (IData)(vlSelf->io_read_address2))
                                                                            ? vlSelf->RegisterFile__DOT__registers_3
                                                                            : 
                                                                           ((2U 
                                                                             == (IData)(vlSelf->io_read_address2))
                                                                             ? vlSelf->RegisterFile__DOT__registers_2
                                                                             : 
                                                                            ((1U 
                                                                              == (IData)(vlSelf->io_read_address2))
                                                                              ? vlSelf->RegisterFile__DOT__registers_1
                                                                              : vlSelf->RegisterFile__DOT__registers_0))))))))))))))))))))))))))))))));
    vlSelf->io_debug_read_data = ((0U == (IData)(vlSelf->io_debug_read_address))
                                   ? 0U : ((0x1fU == (IData)(vlSelf->io_debug_read_address))
                                            ? vlSelf->RegisterFile__DOT__registers_31
                                            : ((0x1eU 
                                                == (IData)(vlSelf->io_debug_read_address))
                                                ? vlSelf->RegisterFile__DOT__registers_30
                                                : (
                                                   (0x1dU 
                                                    == (IData)(vlSelf->io_debug_read_address))
                                                    ? vlSelf->RegisterFile__DOT__registers_29
                                                    : 
                                                   ((0x1cU 
                                                     == (IData)(vlSelf->io_debug_read_address))
                                                     ? vlSelf->RegisterFile__DOT__registers_28
                                                     : 
                                                    ((0x1bU 
                                                      == (IData)(vlSelf->io_debug_read_address))
                                                      ? vlSelf->RegisterFile__DOT__registers_27
                                                      : 
                                                     ((0x1aU 
                                                       == (IData)(vlSelf->io_debug_read_address))
                                                       ? vlSelf->RegisterFile__DOT__registers_26
                                                       : 
                                                      ((0x19U 
                                                        == (IData)(vlSelf->io_debug_read_address))
                                                        ? vlSelf->RegisterFile__DOT__registers_25
                                                        : 
                                                       ((0x18U 
                                                         == (IData)(vlSelf->io_debug_read_address))
                                                         ? vlSelf->RegisterFile__DOT__registers_24
                                                         : 
                                                        ((0x17U 
                                                          == (IData)(vlSelf->io_debug_read_address))
                                                          ? vlSelf->RegisterFile__DOT__registers_23
                                                          : 
                                                         ((0x16U 
                                                           == (IData)(vlSelf->io_debug_read_address))
                                                           ? vlSelf->RegisterFile__DOT__registers_22
                                                           : 
                                                          ((0x15U 
                                                            == (IData)(vlSelf->io_debug_read_address))
                                                            ? vlSelf->RegisterFile__DOT__registers_21
                                                            : 
                                                           ((0x14U 
                                                             == (IData)(vlSelf->io_debug_read_address))
                                                             ? vlSelf->RegisterFile__DOT__registers_20
                                                             : 
                                                            ((0x13U 
                                                              == (IData)(vlSelf->io_debug_read_address))
                                                              ? vlSelf->RegisterFile__DOT__registers_19
                                                              : 
                                                             ((0x12U 
                                                               == (IData)(vlSelf->io_debug_read_address))
                                                               ? vlSelf->RegisterFile__DOT__registers_18
                                                               : 
                                                              ((0x11U 
                                                                == (IData)(vlSelf->io_debug_read_address))
                                                                ? vlSelf->RegisterFile__DOT__registers_17
                                                                : 
                                                               ((0x10U 
                                                                 == (IData)(vlSelf->io_debug_read_address))
                                                                 ? vlSelf->RegisterFile__DOT__registers_16
                                                                 : 
                                                                ((0xfU 
                                                                  == (IData)(vlSelf->io_debug_read_address))
                                                                  ? vlSelf->RegisterFile__DOT__registers_15
                                                                  : 
                                                                 ((0xeU 
                                                                   == (IData)(vlSelf->io_debug_read_address))
                                                                   ? vlSelf->RegisterFile__DOT__registers_14
                                                                   : 
                                                                  ((0xdU 
                                                                    == (IData)(vlSelf->io_debug_read_address))
                                                                    ? vlSelf->RegisterFile__DOT__registers_13
                                                                    : 
                                                                   ((0xcU 
                                                                     == (IData)(vlSelf->io_debug_read_address))
                                                                     ? vlSelf->RegisterFile__DOT__registers_12
                                                                     : 
                                                                    ((0xbU 
                                                                      == (IData)(vlSelf->io_debug_read_address))
                                                                      ? vlSelf->RegisterFile__DOT__registers_11
                                                                      : 
                                                                     ((0xaU 
                                                                       == (IData)(vlSelf->io_debug_read_address))
                                                                       ? vlSelf->RegisterFile__DOT__registers_10
                                                                       : 
                                                                      ((9U 
                                                                        == (IData)(vlSelf->io_debug_read_address))
                                                                        ? vlSelf->RegisterFile__DOT__registers_9
                                                                        : 
                                                                       ((8U 
                                                                         == (IData)(vlSelf->io_debug_read_address))
                                                                         ? vlSelf->RegisterFile__DOT__registers_8
                                                                         : 
                                                                        ((7U 
                                                                          == (IData)(vlSelf->io_debug_read_address))
                                                                          ? vlSelf->RegisterFile__DOT__registers_7
                                                                          : 
                                                                         ((6U 
                                                                           == (IData)(vlSelf->io_debug_read_address))
                                                                           ? vlSelf->RegisterFile__DOT__registers_6
                                                                           : 
                                                                          ((5U 
                                                                            == (IData)(vlSelf->io_debug_read_address))
                                                                            ? vlSelf->RegisterFile__DOT__registers_5
                                                                            : 
                                                                           ((4U 
                                                                             == (IData)(vlSelf->io_debug_read_address))
                                                                             ? vlSelf->RegisterFile__DOT__registers_4
                                                                             : 
                                                                            ((3U 
                                                                              == (IData)(vlSelf->io_debug_read_address))
                                                                              ? vlSelf->RegisterFile__DOT__registers_3
                                                                              : 
                                                                             ((2U 
                                                                               == (IData)(vlSelf->io_debug_read_address))
                                                                               ? vlSelf->RegisterFile__DOT__registers_2
                                                                               : 
                                                                              ((1U 
                                                                                == (IData)(vlSelf->io_debug_read_address))
                                                                                ? vlSelf->RegisterFile__DOT__registers_1
                                                                                : vlSelf->RegisterFile__DOT__registers_0))))))))))))))))))))))))))))))));
}

void VRegisterFile___024root___eval_nba(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VRegisterFile___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void VRegisterFile___024root___eval_triggers__act(VRegisterFile___024root* vlSelf);

bool VRegisterFile___024root___eval_phase__act(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VRegisterFile___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VRegisterFile___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VRegisterFile___024root___eval_phase__nba(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VRegisterFile___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRegisterFile___024root___dump_triggers__ico(VRegisterFile___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VRegisterFile___024root___dump_triggers__nba(VRegisterFile___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VRegisterFile___024root___dump_triggers__act(VRegisterFile___024root* vlSelf);
#endif  // VL_DEBUG

void VRegisterFile___024root___eval(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___eval\n"); );
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
            VRegisterFile___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("RegisterFile.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VRegisterFile___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VRegisterFile___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("RegisterFile.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VRegisterFile___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("RegisterFile.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VRegisterFile___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VRegisterFile___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VRegisterFile___024root___eval_debug_assertions(VRegisterFile___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRegisterFile__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRegisterFile___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_write_enable & 0xfeU))) {
        Verilated::overWidthError("io_write_enable");}
    if (VL_UNLIKELY((vlSelf->io_write_address & 0xe0U))) {
        Verilated::overWidthError("io_write_address");}
    if (VL_UNLIKELY((vlSelf->io_read_address1 & 0xe0U))) {
        Verilated::overWidthError("io_read_address1");}
    if (VL_UNLIKELY((vlSelf->io_read_address2 & 0xe0U))) {
        Verilated::overWidthError("io_read_address2");}
    if (VL_UNLIKELY((vlSelf->io_debug_read_address 
                     & 0xe0U))) {
        Verilated::overWidthError("io_debug_read_address");}
}
#endif  // VL_DEBUG
