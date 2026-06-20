// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestTopModule.h for the primary calling header

#include "VTestTopModule__pch.h"
#include "VTestTopModule___024root.h"

VL_INLINE_OPT void VTestTopModule___024root___ico_sequent__TOP__0(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___ico_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_181;
    TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_181 = 0;
    // Body
    vlSelf->io_mem_debug_read_data = (((vlSelf->TestTopModule__DOT__mem__DOT__mem_3
                                        [(0x1fffU & 
                                          (vlSelf->io_mem_debug_read_address 
                                           >> 2U))] 
                                        << 0x18U) | 
                                       (vlSelf->TestTopModule__DOT__mem__DOT__mem_2
                                        [(0x1fffU & 
                                          (vlSelf->io_mem_debug_read_address 
                                           >> 2U))] 
                                        << 0x10U)) 
                                      | ((vlSelf->TestTopModule__DOT__mem__DOT__mem_1
                                          [(0x1fffU 
                                            & (vlSelf->io_mem_debug_read_address 
                                               >> 2U))] 
                                          << 8U) | 
                                         vlSelf->TestTopModule__DOT__mem__DOT__mem_0
                                         [(0x1fffU 
                                           & (vlSelf->io_mem_debug_read_address 
                                              >> 2U))]));
    TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_181 
        = ((0x15U == (IData)(vlSelf->io_regs_debug_read_address))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_21
            : ((0x14U == (IData)(vlSelf->io_regs_debug_read_address))
                ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_20
                : ((0x13U == (IData)(vlSelf->io_regs_debug_read_address))
                    ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_19
                    : ((0x12U == (IData)(vlSelf->io_regs_debug_read_address))
                        ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_18
                        : ((0x11U == (IData)(vlSelf->io_regs_debug_read_address))
                            ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_17
                            : ((0x10U == (IData)(vlSelf->io_regs_debug_read_address))
                                ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_16
                                : ((0xfU == (IData)(vlSelf->io_regs_debug_read_address))
                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_15
                                    : ((0xeU == (IData)(vlSelf->io_regs_debug_read_address))
                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_14
                                        : ((0xdU == (IData)(vlSelf->io_regs_debug_read_address))
                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_13
                                            : ((0xcU 
                                                == (IData)(vlSelf->io_regs_debug_read_address))
                                                ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_12
                                                : (
                                                   (0xbU 
                                                    == (IData)(vlSelf->io_regs_debug_read_address))
                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_11
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSelf->io_regs_debug_read_address))
                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_10
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSelf->io_regs_debug_read_address))
                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_9
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelf->io_regs_debug_read_address))
                                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_8
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelf->io_regs_debug_read_address))
                                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_7
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelf->io_regs_debug_read_address))
                                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_6
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlSelf->io_regs_debug_read_address))
                                                          ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_5
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlSelf->io_regs_debug_read_address))
                                                           ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_4
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlSelf->io_regs_debug_read_address))
                                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_3
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlSelf->io_regs_debug_read_address))
                                                             ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_2
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlSelf->io_regs_debug_read_address))
                                                              ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_1
                                                              : vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_0)))))))))))))))))))));
    vlSelf->io_regs_debug_read_data = ((0U == (IData)(vlSelf->io_regs_debug_read_address))
                                        ? 0U : ((0x1fU 
                                                 == (IData)(vlSelf->io_regs_debug_read_address))
                                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_31
                                                 : 
                                                ((0x1eU 
                                                  == (IData)(vlSelf->io_regs_debug_read_address))
                                                  ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_30
                                                  : 
                                                 ((0x1dU 
                                                   == (IData)(vlSelf->io_regs_debug_read_address))
                                                   ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_29
                                                   : 
                                                  ((0x1cU 
                                                    == (IData)(vlSelf->io_regs_debug_read_address))
                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_28
                                                    : 
                                                   ((0x1bU 
                                                     == (IData)(vlSelf->io_regs_debug_read_address))
                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_27
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlSelf->io_regs_debug_read_address))
                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_26
                                                      : 
                                                     ((0x19U 
                                                       == (IData)(vlSelf->io_regs_debug_read_address))
                                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_25
                                                       : 
                                                      ((0x18U 
                                                        == (IData)(vlSelf->io_regs_debug_read_address))
                                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_24
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlSelf->io_regs_debug_read_address))
                                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_23
                                                         : 
                                                        ((0x16U 
                                                          == (IData)(vlSelf->io_regs_debug_read_address))
                                                          ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_22
                                                          : TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_181)))))))))));
}

void VTestTopModule___024root___eval_ico(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VTestTopModule___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VTestTopModule___024root___eval_triggers__ico(VTestTopModule___024root* vlSelf);

bool VTestTopModule___024root___eval_phase__ico(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VTestTopModule___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VTestTopModule___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VTestTopModule___024root___eval_act(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_act\n"); );
}

VL_INLINE_OPT void VTestTopModule___024root___nba_sequent__TOP__0(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45fa5d80__0;
    TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45fa5d80__0 = 0;
    CData/*7:0*/ TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4562db72__0;
    TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4562db72__0 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4529f3cd__0;
    TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4529f3cd__0 = 0;
    CData/*7:0*/ TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45053cf4__0;
    TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45053cf4__0 = 0;
    CData/*7:0*/ TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45261729__0;
    TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45261729__0 = 0;
    SData/*12:0*/ __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_0__v0;
    __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_0__v0 = 0;
    CData/*7:0*/ __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_0__v0;
    __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_0__v0;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_0__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_2__v0;
    __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_2__v0 = 0;
    CData/*7:0*/ __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_2__v0;
    __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_2__v0;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_2__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_1__v0;
    __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_1__v0 = 0;
    CData/*7:0*/ __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_1__v0;
    __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_1__v0;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_1__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_3__v0;
    __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_3__v0 = 0;
    CData/*7:0*/ __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_3__v0;
    __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_3__v0;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_3__v0 = 0;
    IData/*31:0*/ __Vdly__TestTopModule__DOT__rom_loader__DOT__address;
    __Vdly__TestTopModule__DOT__rom_loader__DOT__address = 0;
    IData/*31:0*/ __Vdly__TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc;
    __Vdly__TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc = 0;
    // Body
    __Vdly__TestTopModule__DOT__rom_loader__DOT__address 
        = vlSelf->TestTopModule__DOT__rom_loader__DOT__address;
    __Vdly__TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc 
        = vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_3__v0 = 0U;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_2__v0 = 0U;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_0__v0 = 0U;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_1__v0 = 0U;
    if (((IData)(vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en) 
         & ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
             ? ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable)) 
                & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable) 
                   & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3))
                       ? (3U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result))
                       : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16))))
             : (0x7aU >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)))) {
        __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_3__v0 
            = (vlSelf->TestTopModule__DOT__mem_io_bundle_write_data 
               >> 0x18U);
        __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_3__v0 = 1U;
        __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_3__v0 
            = (0x1fffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_address 
                          >> 2U));
    }
    if (((IData)(vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en) 
         & ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
             ? ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable)) 
                & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable) 
                   & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3))
                       ? (2U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result))
                       : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16))))
             : (0x7aU >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)))) {
        __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_2__v0 
            = (0xffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_write_data 
                        >> 0x10U));
        __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_2__v0 = 1U;
        __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_2__v0 
            = (0x1fffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_address 
                          >> 2U));
    }
    if (((IData)(vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en) 
         & ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
             ? ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable)) 
                & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable) 
                   & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3))
                       ? (0U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result))
                       : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13))))
             : (0x7aU >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)))) {
        __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_0__v0 
            = (0xffU & vlSelf->TestTopModule__DOT__mem_io_bundle_write_data);
        __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_0__v0 = 1U;
        __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_0__v0 
            = (0x1fffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_address 
                          >> 2U));
    }
    if (((IData)(vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en) 
         & ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
             ? ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable)) 
                & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable) 
                   & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3))
                       ? (1U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result))
                       : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13))))
             : (0x7aU >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)))) {
        __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_1__v0 
            = (0xffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_write_data 
                        >> 8U));
        __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_1__v0 = 1U;
        __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_1__v0 
            = (0x1fffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_address 
                          >> 2U));
    }
    if (vlSelf->TestTopModule__DOT__cpu__DOT__hazard_unit_io_srDE_flush) {
        vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__rs1 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__rs2 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__regs_read_data_2 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__regs_read_data_1 = 0U;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__rs1 
            = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1;
        vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__rs2 
            = (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                        >> 0x14U));
        vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__regs_read_data_2 
            = ((0U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                >> 0x14U))) ? 0U : 
               ((0x1fU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                    >> 0x14U))) ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_31
                 : ((0x1eU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                        >> 0x14U)))
                     ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_30
                     : ((0x1dU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                            >> 0x14U)))
                         ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_29
                         : ((0x1cU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                >> 0x14U)))
                             ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_28
                             : ((0x1bU == (0x1fU & 
                                           (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                            >> 0x14U)))
                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_27
                                 : vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_154))))));
        vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__regs_read_data_1 
            = ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                ? 0U : ((0x1fU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                         ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_31
                         : ((0x1eU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                             ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_30
                             : ((0x1dU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_29
                                 : ((0x1cU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_28
                                     : ((0x1bU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_27
                                         : ((0x1aU 
                                             == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                             ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_26
                                             : ((0x19U 
                                                 == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_25
                                                 : 
                                                ((0x18U 
                                                  == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                  ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_24
                                                  : 
                                                 ((0x17U 
                                                   == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                   ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_23
                                                   : 
                                                  ((0x16U 
                                                    == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_22
                                                    : vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_117)))))))))));
    }
    if (vlSelf->reset) {
        __Vdly__TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc = 0x1000U;
    } else if (((IData)(vlSelf->io_instruction_valid) 
                & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__hazard_unit__DOT__lw_stall)))) {
        __Vdly__TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc 
            = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch_io_jump_flag_id)
                ? (vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_immediate 
                   + ((0x67U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__opcode))
                       ? vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_rs1_src
                       : vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__current_pc))
                : vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc_plus_four);
    }
    if (vlSelf->TestTopModule__DOT__cpu__DOT__hazard_unit_io_srDE_flush) {
        vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__current_pc = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_immediate = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__opcode = 0U;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__current_pc 
            = vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__current_pc;
        vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_immediate 
            = ((0x6fU == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                ? ((((vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                      >> 0x1fU) ? 0xfffU : 0U) << 0x14U) 
                   | ((0xff000U & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction) 
                      | ((0x800U & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                    >> 9U)) | (0x7feU 
                                               & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                  >> 0x14U)))))
                : ((0x17U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                    ? (0xfffff000U & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)
                    : ((0x37U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                        ? (0xfffff000U & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)
                        : ((0x63U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                            ? ((((vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                  >> 0x1fU) ? 0xfffffU
                                  : 0U) << 0xcU) | 
                               ((0x800U & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                           << 4U)) 
                                | ((0x7e0U & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                              >> 0x14U)) 
                                   | (0x1eU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                               >> 7U)))))
                            : ((0x23U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                                ? ((((vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                      >> 0x1fU) ? 0x1fffffU
                                      : 0U) << 0xbU) 
                                   | ((0x7e0U & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                 >> 0x14U)) 
                                      | (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                  >> 7U))))
                                : ((0x67U == (0x7fU 
                                              & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_7
                                    : ((3U == (0x7fU 
                                               & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_7
                                        : ((0x13U == 
                                            (0x7fU 
                                             & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_7
                                            : ((((vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                  >> 0x1fU)
                                                  ? 0xfffffU
                                                  : 0U) 
                                                << 0xcU) 
                                               | (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                  >> 0x14U))))))))));
        vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__opcode 
            = (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction);
    }
    if (vlSelf->reset) {
        vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__regs_read_data_2 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__next_pc = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__wb_src = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__alu_result = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__mem_read_data = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__next_pc = 0U;
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__regs_read_data_2 
            = vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_rs2_src;
        vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__next_pc 
            = vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__next_pc;
        vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__wb_src 
            = vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__wb_src;
        vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__alu_result 
            = vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result;
        vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__mem_read_data 
            = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable)
                ? ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3))
                    ? vlSelf->TestTopModule__DOT__cpu__DOT__mem_io_memory_bundle_read_data
                    : ((5U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3))
                        ? ((0U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result))
                            ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4562d974__0)
                            : VL_SHIFTR_III(32,32,32, vlSelf->TestTopModule__DOT__cpu__DOT__mem_io_memory_bundle_read_data, 0x10U))
                        : vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___io_wb_memory_read_data_T_63))
                : 0U);
        vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address 
            = vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__reg_write_address;
        vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__next_pc 
            = vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__next_pc;
    }
    vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__next_pc 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__hazard_unit_io_srDE_flush)
            ? 0U : vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__next_pc);
    vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__wb_src 
        = ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__wb_src));
    vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__wb_src 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__hazard_unit_io_srDE_flush)
            ? 0U : ((((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT___io_wb_src_T_4) 
                      | (0x37U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))) 
                     | (0x17U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)))
                     ? 0U : ((3U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                              ? 1U : (((0x6fU == (0x7fU 
                                                  & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
                                       | (0x67U == 
                                          (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)))
                                       ? 2U : 0U))));
    vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3 
        = ((IData)(vlSelf->reset) ? 0U : (7U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__func3)));
    vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__func3 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__hazard_unit_io_srDE_flush)
            ? 0U : (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                          >> 0xcU)));
    vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result 
        = ((IData)(vlSelf->reset) ? 0U : (IData)((0x7fffffffffffffffULL 
                                                  & ((1U 
                                                      == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_alu_func))
                                                      ? (QData)((IData)(
                                                                        (vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6 
                                                                         + vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7)))
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_alu_func))
                                                       ? (QData)((IData)(
                                                                         (vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6 
                                                                          - vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7)))
                                                       : 
                                                      ((3U 
                                                        == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_alu_func))
                                                        ? 
                                                       ((QData)((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6)) 
                                                        << 
                                                        (0x1fU 
                                                         & vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7))
                                                        : (QData)((IData)(
                                                                          ((4U 
                                                                            == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_alu_func))
                                                                            ? 
                                                                           VL_LTS_III(32, vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6, vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7)
                                                                            : 
                                                                           ((5U 
                                                                             == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_alu_func))
                                                                             ? 
                                                                            (vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6 
                                                                             ^ vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7)
                                                                             : 
                                                                            ((6U 
                                                                              == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_alu_func))
                                                                              ? 
                                                                             (vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6 
                                                                              | vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7)
                                                                              : 
                                                                             ((7U 
                                                                               == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_alu_func))
                                                                               ? 
                                                                              (vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6 
                                                                               & vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7)
                                                                               : 
                                                                              ((8U 
                                                                                == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_alu_func))
                                                                                ? 
                                                                               (vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7))
                                                                                : 
                                                                               ((9U 
                                                                                == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_alu_func))
                                                                                 ? 
                                                                                VL_SHIFTRS_III(32,32,5, vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6, 
                                                                                (0x1fU 
                                                                                & vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7))
                                                                                 : 
                                                                                ((0xaU 
                                                                                == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_alu_func)) 
                                                                                & (vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6 
                                                                                < vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7))))))))))))))));
    vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_alu_func 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__hazard_unit_io_srDE_flush)
            ? 1U : ((0x13U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                     ? ((5U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                      >> 0xcU))) ? 
                        ((0x40000000U & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)
                          ? 9U : 8U) : ((7U == (7U 
                                                & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                   >> 0xcU)))
                                         ? 7U : ((6U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                      >> 0xcU)))
                                                  ? 6U
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                       >> 0xcU)))
                                                   ? 5U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                        >> 0xcU)))
                                                    ? 0xaU
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                         >> 0xcU)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                          >> 0xcU)))
                                                      ? 3U
                                                      : 1U)))))))
                     : ((0x33U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                         ? ((5U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                          >> 0xcU)))
                             ? ((0x40000000U & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)
                                 ? 9U : 8U) : ((7U 
                                                == 
                                                (7U 
                                                 & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                    >> 0xcU)))
                                                ? 7U
                                                : (
                                                   (6U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                        >> 0xcU)))
                                                    ? 6U
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                         >> 0xcU)))
                                                     ? 5U
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                          >> 0xcU)))
                                                      ? 0xaU
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                           >> 0xcU)))
                                                       ? 4U
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                            >> 0xcU)))
                                                        ? 3U
                                                        : 
                                                       ((0x40000000U 
                                                         & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)
                                                         ? 2U
                                                         : 1U))))))))
                         : ((0x63U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
                            | ((3U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
                               | ((0x23U == (0x7fU 
                                             & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
                                  | ((0x6fU == (0x7fU 
                                                & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
                                     | ((0x67U == (0x7fU 
                                                   & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
                                        | ((0x37U == 
                                            (0x7fU 
                                             & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
                                           | (0x17U 
                                              == (0x7fU 
                                                  & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)))))))))));
    vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__reg_write_address 
        = ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__reg_write_address));
    vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__reg_write_address 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__hazard_unit_io_srDE_flush)
            ? 0U : (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                             >> 7U)));
    vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_aluop1_source 
        = ((1U & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__hazard_unit_io_srDE_flush))) 
           && ((0x17U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
               | ((0x63U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
                  | (0x6fU == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)))));
    vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_aluop2_source 
        = ((1U & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__hazard_unit_io_srDE_flush))) 
           && (0x33U != (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)));
    vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_enable 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__reg_write_enable));
    if (__Vdlyvset__TestTopModule__DOT__mem__DOT__mem_3__v0) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_3[__Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_3__v0] 
            = __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_3__v0;
    }
    if (__Vdlyvset__TestTopModule__DOT__mem__DOT__mem_2__v0) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_2[__Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_2__v0] 
            = __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_2__v0;
    }
    if (__Vdlyvset__TestTopModule__DOT__mem__DOT__mem_0__v0) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_0[__Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_0__v0] 
            = __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_0__v0;
    }
    if (__Vdlyvset__TestTopModule__DOT__mem__DOT__mem_1__v0) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_1[__Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_1__v0] 
            = __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_1__v0;
    }
    vlSelf->io_mem_debug_read_data = (((vlSelf->TestTopModule__DOT__mem__DOT__mem_3
                                        [(0x1fffU & 
                                          (vlSelf->io_mem_debug_read_address 
                                           >> 2U))] 
                                        << 0x18U) | 
                                       (vlSelf->TestTopModule__DOT__mem__DOT__mem_2
                                        [(0x1fffU & 
                                          (vlSelf->io_mem_debug_read_address 
                                           >> 2U))] 
                                        << 0x10U)) 
                                      | ((vlSelf->TestTopModule__DOT__mem__DOT__mem_1
                                          [(0x1fffU 
                                            & (vlSelf->io_mem_debug_read_address 
                                               >> 2U))] 
                                          << 8U) | 
                                         vlSelf->TestTopModule__DOT__mem__DOT__mem_0
                                         [(0x1fffU 
                                           & (vlSelf->io_mem_debug_read_address 
                                              >> 2U))]));
    vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__memory_write_enable));
    vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data 
        = ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__wb_src))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__next_pc
            : ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__wb_src))
                ? vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__mem_read_data
                : vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__alu_result));
    vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__memory_read_enable));
    vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__reg_write_enable 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__reg_write_enable));
    vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__memory_write_enable 
        = ((1U & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__hazard_unit_io_srDE_flush))) 
           && (0x23U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)));
    vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__memory_read_enable 
        = ((1U & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__hazard_unit_io_srDE_flush))) 
           && (3U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)));
    vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_22 
        = (0xffffffffffULL & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3))
                               ? ((QData)((IData)((0x1ffU 
                                                   & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__regs_read_data_2))) 
                                  << (0x18U & (vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result 
                                               << 3U)))
                               : ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3))
                                   ? ((0U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result))
                                       ? (QData)((IData)(
                                                         (0x1ffffU 
                                                          & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__regs_read_data_2)))
                                       : ((QData)((IData)(
                                                          (0x1ffffU 
                                                           & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__regs_read_data_2))) 
                                          << 0x10U))
                                   : (QData)((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__regs_read_data_2)))));
    vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__reg_write_enable 
        = ((1U & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__hazard_unit_io_srDE_flush))) 
           && ((((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT___io_wb_src_T_4) 
                 | (3U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))) 
                | ((0x17U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
                   | ((0x37U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
                      | (0x6fU == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))))) 
               | (0x67U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))));
    if (vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch_io_jump_flag_id) {
        vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__current_pc = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__next_pc = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction = 0U;
    } else if ((1U & (~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__hazard_unit__DOT__lw_stall)))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__current_pc 
            = vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc;
        vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__next_pc 
            = ((IData)(4U) + vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc);
        vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
            = (((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__hazard_unit__DOT__lw_stall)) 
                & (IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid))
                ? vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction_read_data
                : (((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) 
                    & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__hazard_unit__DOT__lw_stall))
                    ? vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction_read_data
                    : 0x13U));
    }
    if (vlSelf->reset) {
        __Vdly__TestTopModule__DOT__rom_loader__DOT__address = 0U;
        vlSelf->TestTopModule__DOT__rom_loader__DOT__valid = 0U;
    } else if ((0x7aU >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)) {
        __Vdly__TestTopModule__DOT__rom_loader__DOT__address 
            = vlSelf->TestTopModule__DOT__rom_loader__DOT___address_T_1;
        vlSelf->TestTopModule__DOT__rom_loader__DOT__valid 
            = vlSelf->TestTopModule__DOT__rom_loader__DOT___GEN_0;
    }
    vlSelf->TestTopModule__DOT__cpu__DOT__ex_io_rs1_src 
        = ((((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__rs1) 
             == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__reg_write_address)) 
            & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__reg_write_enable) 
               & (0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__rs1))))
            ? 1U : ((((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__rs1) 
                      == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address)) 
                     & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_enable) 
                        & (0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__rs1))))
                     ? 2U : 0U));
    vlSelf->TestTopModule__DOT__cpu__DOT__ex_io_rs2_src 
        = ((((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__rs2) 
             == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__reg_write_address)) 
            & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__reg_write_enable) 
               & (0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__rs2))))
            ? 1U : ((((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__rs2) 
                      == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address)) 
                     & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_enable) 
                        & (0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__rs2))))
                     ? 2U : 0U));
    vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_rs1_src 
        = ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex_io_rs1_src))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data
            : ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex_io_rs1_src))
                ? vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result
                : vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__regs_read_data_1));
    vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_rs2_src 
        = ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex_io_rs2_src))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data
            : ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex_io_rs2_src))
                ? vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result
                : vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__regs_read_data_2));
    vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_aluop1_source)
            ? vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__current_pc
            : vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_rs1_src);
    vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_aluop2_source)
            ? vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_immediate
            : vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_rs2_src);
    vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc 
        = __Vdly__TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc;
    vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch_io_jump_flag_id 
        = (((0x6fU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__opcode)) 
            | (0x67U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__opcode))) 
           | ((0x63U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__opcode)) 
              & ((7U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__func3))
                  ? (vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_rs1_src 
                     >= vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_rs2_src)
                  : ((6U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__func3))
                      ? (vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_rs1_src 
                         < vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_rs2_src)
                      : ((5U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__func3))
                          ? VL_GTES_III(32, vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_rs1_src, vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_rs2_src)
                          : ((4U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__func3))
                              ? VL_LTS_III(32, vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_rs1_src, vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_rs2_src)
                              : ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__func3))
                                  ? (vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_rs1_src 
                                     != vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_rs2_src)
                                  : ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__func3)) 
                                     & (vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_rs1_src 
                                        == vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_rs2_src)))))))));
    vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc_plus_four 
        = ((IData)(4U) + vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc);
    vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction_read_data 
        = (((vlSelf->TestTopModule__DOT__mem__DOT__mem_3
             [(0x1fffU & (vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc 
                          >> 2U))] << 0x18U) | (vlSelf->TestTopModule__DOT__mem__DOT__mem_2
                                                [(0x1fffU 
                                                  & (vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                     >> 2U))] 
                                                << 0x10U)) 
           | ((vlSelf->TestTopModule__DOT__mem__DOT__mem_1
               [(0x1fffU & (vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc 
                            >> 2U))] << 8U) | vlSelf->TestTopModule__DOT__mem__DOT__mem_0
              [(0x1fffU & (vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc 
                           >> 2U))]));
    vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_7 
        = ((((vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
              >> 0x1fU) ? 0x1fffffU : 0U) << 0xbU) 
           | (0x7ffU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                        >> 0x14U)));
    vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT___io_wb_src_T_4 
        = ((0x33U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
           | (0x13U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)));
    vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1 
        = ((0x37U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
            ? 0U : (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                             >> 0xfU)));
    vlSelf->TestTopModule__DOT__cpu__DOT__hazard_unit__DOT__lw_stall 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__wb_src) 
           & (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__reg_write_address) 
               == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1)) 
              | ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__reg_write_address) 
                 == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                              >> 0x14U)))));
    vlSelf->TestTopModule__DOT__rom_loader__DOT__address 
        = __Vdly__TestTopModule__DOT__rom_loader__DOT__address;
    vlSelf->TestTopModule__DOT__cpu__DOT__hazard_unit_io_srDE_flush 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__hazard_unit__DOT__lw_stall) 
           | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch_io_jump_flag_id));
    vlSelf->TestTopModule__DOT__rom_loader__DOT___address_T_1 
        = ((IData)(1U) + vlSelf->TestTopModule__DOT__rom_loader__DOT__address);
    vlSelf->io_instruction_valid = vlSelf->TestTopModule__DOT__rom_loader__DOT__valid;
    vlSelf->TestTopModule__DOT__rom_loader__DOT___GEN_0 
        = ((0x7aU == vlSelf->TestTopModule__DOT__rom_loader__DOT__address) 
           | (IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid));
    if (vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en 
            = ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable)) 
               & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable));
        vlSelf->TestTopModule__DOT__mem_io_bundle_write_data 
            = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable)
                ? 0U : ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable)
                         ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_22)
                         : 0U));
        vlSelf->TestTopModule__DOT__mem_io_bundle_address 
            = (0x1fffffffU & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result);
    } else if ((0x7aU >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en = 1U;
        vlSelf->TestTopModule__DOT__mem_io_bundle_write_data 
            = ((0x7aU >= (0x7fU & vlSelf->TestTopModule__DOT__rom_loader__DOT__address))
                ? vlSelf->TestTopModule__DOT__instruction_rom__DOT__mem
               [(0x7fU & vlSelf->TestTopModule__DOT__rom_loader__DOT__address)]
                : 0U);
        vlSelf->TestTopModule__DOT__mem_io_bundle_address 
            = ((IData)(0x1000U) + (IData)(((QData)((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__address)) 
                                           << 2U)));
    } else {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en = 0U;
        vlSelf->TestTopModule__DOT__mem_io_bundle_write_data = 0U;
        vlSelf->TestTopModule__DOT__mem_io_bundle_address = 0U;
    }
    vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_data 
        = vlSelf->TestTopModule__DOT__mem__DOT__mem_3
        [(0x1fffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_address 
                     >> 2U))];
    vlSelf->TestTopModule__DOT__mem__DOT__mem_2_io_bundle_read_data_MPORT_data 
        = vlSelf->TestTopModule__DOT__mem__DOT__mem_2
        [(0x1fffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_address 
                     >> 2U))];
    vlSelf->TestTopModule__DOT__mem__DOT__mem_0_io_bundle_read_data_MPORT_data 
        = vlSelf->TestTopModule__DOT__mem__DOT__mem_0
        [(0x1fffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_address 
                     >> 2U))];
    vlSelf->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_data 
        = vlSelf->TestTopModule__DOT__mem__DOT__mem_1
        [(0x1fffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_address 
                     >> 2U))];
    TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45fa5d80__0 
        = ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) 
           & ((IData)(vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_data) 
              >> 7U));
    vlSelf->TestTopModule__DOT__mem__DOT__io_bundle_read_data_hi 
        = (((IData)(vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_data) 
            << 8U) | (IData)(vlSelf->TestTopModule__DOT__mem__DOT__mem_2_io_bundle_read_data_MPORT_data));
    TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4529f3cd__0 
        = ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) 
           & ((IData)(vlSelf->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_data) 
              >> 7U));
    vlSelf->TestTopModule__DOT__mem__DOT__io_bundle_read_data_lo 
        = (((IData)(vlSelf->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_data) 
            << 8U) | (IData)(vlSelf->TestTopModule__DOT__mem__DOT__mem_0_io_bundle_read_data_MPORT_data));
    if (vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) {
        TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45261729__0 
            = vlSelf->TestTopModule__DOT__mem__DOT__mem_2_io_bundle_read_data_MPORT_data;
        TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4562db72__0 
            = vlSelf->TestTopModule__DOT__mem__DOT__mem_0_io_bundle_read_data_MPORT_data;
        TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45053cf4__0 
            = vlSelf->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_data;
        vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4562d974__0 
            = vlSelf->TestTopModule__DOT__mem__DOT__io_bundle_read_data_lo;
        vlSelf->TestTopModule__DOT__cpu__DOT__mem_io_memory_bundle_read_data 
            = (((IData)(vlSelf->TestTopModule__DOT__mem__DOT__io_bundle_read_data_hi) 
                << 0x10U) | (IData)(vlSelf->TestTopModule__DOT__mem__DOT__io_bundle_read_data_lo));
    } else {
        TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45261729__0 = 0U;
        TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4562db72__0 = 0U;
        TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45053cf4__0 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4562d974__0 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__mem_io_memory_bundle_read_data = 0U;
    }
    if ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13 
            = (0U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result));
        vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16 
            = (0U != (3U & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result));
        vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___io_wb_memory_read_data_T_63 
            = ((0U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result))
                ? ((((IData)(TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4529f3cd__0)
                      ? 0xffffU : 0U) << 0x10U) | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4562d974__0))
                : ((((IData)(TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45fa5d80__0)
                      ? 0xffffU : 0U) << 0x10U) | ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
                                                    ? (IData)(vlSelf->TestTopModule__DOT__mem__DOT__io_bundle_read_data_hi)
                                                    : 0U)));
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13 
            = (2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3));
        vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16 
            = (2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3));
        vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___io_wb_memory_read_data_T_63 
            = ((4U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3))
                ? ((2U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result))
                    ? (IData)(TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45261729__0)
                    : ((1U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result))
                        ? (IData)(TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45053cf4__0)
                        : ((0U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result))
                            ? (IData)(TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4562db72__0)
                            : VL_SHIFTR_III(32,32,32, vlSelf->TestTopModule__DOT__cpu__DOT__mem_io_memory_bundle_read_data, 0x18U))))
                : ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3))
                    ? ((2U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result))
                        ? (((((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) 
                              & ((IData)(vlSelf->TestTopModule__DOT__mem__DOT__mem_2_io_bundle_read_data_MPORT_data) 
                                 >> 7U)) ? 0xffffffU
                              : 0U) << 8U) | (IData)(TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45261729__0))
                        : ((1U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result))
                            ? ((((IData)(TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4529f3cd__0)
                                  ? 0xffffffU : 0U) 
                                << 8U) | (IData)(TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45053cf4__0))
                            : ((0U == (3U & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result))
                                ? (((((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) 
                                      & ((IData)(vlSelf->TestTopModule__DOT__mem__DOT__mem_0_io_bundle_read_data_MPORT_data) 
                                         >> 7U)) ? 0xffffffU
                                      : 0U) << 8U) 
                                   | (IData)(TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4562db72__0))
                                : ((((IData)(TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45fa5d80__0)
                                      ? 0xffffffU : 0U) 
                                    << 8U) | ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
                                               ? (IData)(vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_data)
                                               : 0U)))))
                    : 0U));
    }
}

VL_INLINE_OPT void VTestTopModule___024root___nba_sequent__TOP__1(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_181;
    TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_181 = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_16 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_14 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_15 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_17 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_18 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_19 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_20 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_21 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_8 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_6 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_2 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_5 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_9 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_11 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_7 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_0 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_1 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_3 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_10 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_4 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_12 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_13 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_31 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_30 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_29 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_28 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_27 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_26 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_22 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_23 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_24 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_25 = 0U;
    } else if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_enable) 
             & (0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address)))) {
            if ((0x10U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_16 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0xeU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_14 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0xfU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_15 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x11U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_17 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x12U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_18 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x13U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_19 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x14U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_20 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x15U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_21 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((8U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_8 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((6U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_6 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_2 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((5U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_5 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((9U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_9 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0xbU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_11 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((7U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_7 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_0 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_1 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((3U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_3 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0xaU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_10 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((4U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_4 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0xcU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_12 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0xdU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_13 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x1fU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_31 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x1eU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_30 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x1dU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_29 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x1cU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_28 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x1bU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_27 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x1aU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_26 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x16U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_22 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x17U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_23 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x18U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_24 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
            }
            if ((0x19U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address))) {
                vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_25 
                    = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
            }
        }
    }
    TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_181 
        = ((0x15U == (IData)(vlSelf->io_regs_debug_read_address))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_21
            : ((0x14U == (IData)(vlSelf->io_regs_debug_read_address))
                ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_20
                : ((0x13U == (IData)(vlSelf->io_regs_debug_read_address))
                    ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_19
                    : ((0x12U == (IData)(vlSelf->io_regs_debug_read_address))
                        ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_18
                        : ((0x11U == (IData)(vlSelf->io_regs_debug_read_address))
                            ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_17
                            : ((0x10U == (IData)(vlSelf->io_regs_debug_read_address))
                                ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_16
                                : ((0xfU == (IData)(vlSelf->io_regs_debug_read_address))
                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_15
                                    : ((0xeU == (IData)(vlSelf->io_regs_debug_read_address))
                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_14
                                        : ((0xdU == (IData)(vlSelf->io_regs_debug_read_address))
                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_13
                                            : ((0xcU 
                                                == (IData)(vlSelf->io_regs_debug_read_address))
                                                ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_12
                                                : (
                                                   (0xbU 
                                                    == (IData)(vlSelf->io_regs_debug_read_address))
                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_11
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSelf->io_regs_debug_read_address))
                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_10
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSelf->io_regs_debug_read_address))
                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_9
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelf->io_regs_debug_read_address))
                                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_8
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelf->io_regs_debug_read_address))
                                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_7
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelf->io_regs_debug_read_address))
                                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_6
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlSelf->io_regs_debug_read_address))
                                                          ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_5
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlSelf->io_regs_debug_read_address))
                                                           ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_4
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlSelf->io_regs_debug_read_address))
                                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_3
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlSelf->io_regs_debug_read_address))
                                                             ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_2
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlSelf->io_regs_debug_read_address))
                                                              ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_1
                                                              : vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_0)))))))))))))))))))));
    vlSelf->io_regs_debug_read_data = ((0U == (IData)(vlSelf->io_regs_debug_read_address))
                                        ? 0U : ((0x1fU 
                                                 == (IData)(vlSelf->io_regs_debug_read_address))
                                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_31
                                                 : 
                                                ((0x1eU 
                                                  == (IData)(vlSelf->io_regs_debug_read_address))
                                                  ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_30
                                                  : 
                                                 ((0x1dU 
                                                   == (IData)(vlSelf->io_regs_debug_read_address))
                                                   ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_29
                                                   : 
                                                  ((0x1cU 
                                                    == (IData)(vlSelf->io_regs_debug_read_address))
                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_28
                                                    : 
                                                   ((0x1bU 
                                                     == (IData)(vlSelf->io_regs_debug_read_address))
                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_27
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlSelf->io_regs_debug_read_address))
                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_26
                                                      : 
                                                     ((0x19U 
                                                       == (IData)(vlSelf->io_regs_debug_read_address))
                                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_25
                                                       : 
                                                      ((0x18U 
                                                        == (IData)(vlSelf->io_regs_debug_read_address))
                                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_24
                                                        : 
                                                       ((0x17U 
                                                         == (IData)(vlSelf->io_regs_debug_read_address))
                                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_23
                                                         : 
                                                        ((0x16U 
                                                          == (IData)(vlSelf->io_regs_debug_read_address))
                                                          ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_22
                                                          : TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_181)))))))))));
}

VL_INLINE_OPT void VTestTopModule___024root___nba_comb__TOP__0(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___nba_comb__TOP__0\n"); );
    // Init
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_141;
    TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_141 = 0;
    // Body
    TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_141 
        = ((0xdU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                              >> 0x14U))) ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_13
            : ((0xcU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                  >> 0x14U))) ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_12
                : ((0xbU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                      >> 0x14U))) ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_11
                    : ((0xaU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                          >> 0x14U)))
                        ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_10
                        : ((9U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                            >> 0x14U)))
                            ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_9
                            : ((8U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                >> 0x14U)))
                                ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_8
                                : ((7U == (0x1fU & 
                                           (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                            >> 0x14U)))
                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_7
                                    : ((6U == (0x1fU 
                                               & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                  >> 0x14U)))
                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_6
                                        : ((5U == (0x1fU 
                                                   & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                      >> 0x14U)))
                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                    >> 0x14U)))
                                                ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                        >> 0x14U)))
                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                         >> 0x14U)))
                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                          >> 0x14U)))
                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_1
                                                      : vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_0)))))))))))));
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_117 
        = ((0x15U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_21
            : ((0x14U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_20
                : ((0x13U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                    ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_19
                    : ((0x12U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                        ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_18
                        : ((0x11U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                            ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_17
                            : ((0x10U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_16
                                : ((0xfU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_15
                                    : ((0xeU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_14
                                        : ((0xdU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_13
                                            : ((0xcU 
                                                == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_12
                                                : (
                                                   (0xbU 
                                                    == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_11
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_10
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_9
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_8
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_7
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_6
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                          ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_5
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                           ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_4
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_3
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                             ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_2
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                              ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_1
                                                              : vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_0)))))))))))))))))))));
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_154 
        = ((0x1aU == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                               >> 0x14U))) ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_26
            : ((0x19U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                   >> 0x14U))) ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_25
                : ((0x18U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                       >> 0x14U))) ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_24
                    : ((0x17U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                           >> 0x14U)))
                        ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_23
                        : ((0x16U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                               >> 0x14U)))
                            ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_22
                            : ((0x15U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                   >> 0x14U)))
                                ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_21
                                : ((0x14U == (0x1fU 
                                              & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                 >> 0x14U)))
                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_20
                                    : ((0x13U == (0x1fU 
                                                  & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                     >> 0x14U)))
                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                >> 0x14U)))
                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                    >> 0x14U)))
                                                ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                        >> 0x14U)))
                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                         >> 0x14U)))
                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                          >> 0x14U)))
                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_14
                                                      : TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_141)))))))))))));
}

void VTestTopModule___024root___eval_nba(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestTopModule___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestTopModule___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestTopModule___024root___nba_comb__TOP__0(vlSelf);
    }
}

void VTestTopModule___024root___eval_triggers__act(VTestTopModule___024root* vlSelf);

bool VTestTopModule___024root___eval_phase__act(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTestTopModule___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VTestTopModule___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VTestTopModule___024root___eval_phase__nba(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTestTopModule___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestTopModule___024root___dump_triggers__ico(VTestTopModule___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTestTopModule___024root___dump_triggers__nba(VTestTopModule___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTestTopModule___024root___dump_triggers__act(VTestTopModule___024root* vlSelf);
#endif  // VL_DEBUG

void VTestTopModule___024root___eval(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval\n"); );
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
            VTestTopModule___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("TestTopModule.sv", 2472, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VTestTopModule___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VTestTopModule___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("TestTopModule.sv", 2472, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VTestTopModule___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("TestTopModule.sv", 2472, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VTestTopModule___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VTestTopModule___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTestTopModule___024root___eval_debug_assertions(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_regs_debug_read_address 
                     & 0xe0U))) {
        Verilated::overWidthError("io_regs_debug_read_address");}
}
#endif  // VL_DEBUG
