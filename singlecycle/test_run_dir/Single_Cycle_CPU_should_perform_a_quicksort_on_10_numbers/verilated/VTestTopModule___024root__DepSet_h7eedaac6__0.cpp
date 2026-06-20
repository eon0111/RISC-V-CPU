// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestTopModule.h for the primary calling header

#include "VTestTopModule__pch.h"
#include "VTestTopModule___024root.h"

VL_INLINE_OPT void VTestTopModule___024root___ico_sequent__TOP__0(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___ico_sequent__TOP__0\n"); );
    // Body
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
                                                          : 
                                                         ((0x15U 
                                                           == (IData)(vlSelf->io_regs_debug_read_address))
                                                           ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_21
                                                           : 
                                                          ((0x14U 
                                                            == (IData)(vlSelf->io_regs_debug_read_address))
                                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_20
                                                            : 
                                                           ((0x13U 
                                                             == (IData)(vlSelf->io_regs_debug_read_address))
                                                             ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_19
                                                             : 
                                                            ((0x12U 
                                                              == (IData)(vlSelf->io_regs_debug_read_address))
                                                              ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_18
                                                              : 
                                                             ((0x11U 
                                                               == (IData)(vlSelf->io_regs_debug_read_address))
                                                               ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_17
                                                               : 
                                                              ((0x10U 
                                                                == (IData)(vlSelf->io_regs_debug_read_address))
                                                                ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_16
                                                                : 
                                                               ((0xfU 
                                                                 == (IData)(vlSelf->io_regs_debug_read_address))
                                                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_15
                                                                 : 
                                                                ((0xeU 
                                                                  == (IData)(vlSelf->io_regs_debug_read_address))
                                                                  ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_14
                                                                  : 
                                                                 ((0xdU 
                                                                   == (IData)(vlSelf->io_regs_debug_read_address))
                                                                   ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_13
                                                                   : 
                                                                  ((0xcU 
                                                                    == (IData)(vlSelf->io_regs_debug_read_address))
                                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_12
                                                                    : 
                                                                   ((0xbU 
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
                                                                               : vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_0))))))))))))))))))))))))))))))));
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
    SData/*12:0*/ __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_3__v0;
    __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_3__v0 = 0;
    CData/*7:0*/ __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_3__v0;
    __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_3__v0;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_3__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_1__v0;
    __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_1__v0 = 0;
    CData/*7:0*/ __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_1__v0;
    __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_1__v0;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_1__v0 = 0;
    // Body
    vlSelf->__Vdly__TestTopModule__DOT__rom_loader__DOT__address 
        = vlSelf->TestTopModule__DOT__rom_loader__DOT__address;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_2__v0 = 0U;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_3__v0 = 0U;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_1__v0 = 0U;
    __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_0__v0 = 0U;
    vlSelf->TestTopModule__DOT__CPU_clkdiv = ((IData)(vlSelf->reset)
                                               ? 0U
                                               : ((3U 
                                                   == (IData)(vlSelf->TestTopModule__DOT__CPU_clkdiv))
                                                   ? 0U
                                                   : (IData)(vlSelf->TestTopModule__DOT___CPU_next_T_2)));
    if (((IData)(vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en) 
         & ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
             ? ((3U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)) 
                & ((0x23U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)) 
                   & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3))
                       ? (2U == (3U & (IData)(vlSelf->__VdfgTmp_h6e50e5ad__0)))
                       : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16))))
             : (0x40cU >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)))) {
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
             ? ((3U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)) 
                & ((0x23U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)) 
                   & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3))
                       ? (3U == (3U & (IData)(vlSelf->__VdfgTmp_h6e50e5ad__0)))
                       : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16))))
             : (0x40cU >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)))) {
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
             ? ((3U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)) 
                & ((0x23U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)) 
                   & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3))
                       ? (1U == (3U & (IData)(vlSelf->__VdfgTmp_h6e50e5ad__0)))
                       : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13))))
             : (0x40cU >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)))) {
        __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_1__v0 
            = (0xffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_write_data 
                        >> 8U));
        __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_1__v0 = 1U;
        __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_1__v0 
            = (0x1fffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_address 
                          >> 2U));
    }
    if (((IData)(vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en) 
         & ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
             ? ((3U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)) 
                & ((0x23U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)) 
                   & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3))
                       ? (0U == (3U & (IData)(vlSelf->__VdfgTmp_h6e50e5ad__0)))
                       : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13))))
             : (0x40cU >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)))) {
        __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_0__v0 
            = (0xffU & vlSelf->TestTopModule__DOT__mem_io_bundle_write_data);
        __Vdlyvset__TestTopModule__DOT__mem__DOT__mem_0__v0 = 1U;
        __Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_0__v0 
            = (0x1fffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_address 
                          >> 2U));
    }
    vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0 
        = (0x1fffU & (vlSelf->io_mem_debug_read_address 
                      >> 2U));
    vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_addr_pipe_0 
        = (0x1fffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_address 
                      >> 2U));
    vlSelf->TestTopModule__DOT__mem__DOT__mem_2_io_instruction_MPORT_addr_pipe_0 
        = (0x1fffU & (vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc 
                      >> 2U));
    vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0 
        = (0x1fffU & (vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc 
                      >> 2U));
    if (__Vdlyvset__TestTopModule__DOT__mem__DOT__mem_2__v0) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_2[__Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_2__v0] 
            = __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_2__v0;
    }
    if (__Vdlyvset__TestTopModule__DOT__mem__DOT__mem_3__v0) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_3[__Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_3__v0] 
            = __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_3__v0;
    }
    if (__Vdlyvset__TestTopModule__DOT__mem__DOT__mem_1__v0) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_1[__Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_1__v0] 
            = __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_1__v0;
    }
    if (__Vdlyvset__TestTopModule__DOT__mem__DOT__mem_0__v0) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_0[__Vdlyvdim0__TestTopModule__DOT__mem__DOT__mem_0__v0] 
            = __Vdlyvval__TestTopModule__DOT__mem__DOT__mem_0__v0;
    }
    vlSelf->TestTopModule__DOT___CPU_next_T_2 = (3U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->TestTopModule__DOT__CPU_clkdiv)));
    vlSelf->TestTopModule__DOT__cpu__DOT__regs_clock 
        = (0U == (IData)(vlSelf->TestTopModule__DOT__CPU_clkdiv));
    vlSelf->io_mem_debug_read_data = ((vlSelf->TestTopModule__DOT__mem__DOT__mem_3
                                       [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0] 
                                       << 0x18U) | 
                                      ((vlSelf->TestTopModule__DOT__mem__DOT__mem_2
                                        [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0] 
                                        << 0x10U) | 
                                       ((vlSelf->TestTopModule__DOT__mem__DOT__mem_1
                                         [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0] 
                                         << 8U) | vlSelf->TestTopModule__DOT__mem__DOT__mem_0
                                        [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0])));
    vlSelf->__VdfgTmp_ha885c88e__0 = vlSelf->TestTopModule__DOT__mem__DOT__mem_3
        [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_addr_pipe_0];
    vlSelf->__VdfgTmp_hcdfd3b03__0 = vlSelf->TestTopModule__DOT__mem__DOT__mem_2
        [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_addr_pipe_0];
    vlSelf->__VdfgTmp_haeeb6a10__0 = vlSelf->TestTopModule__DOT__mem__DOT__mem_0
        [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_addr_pipe_0];
    vlSelf->__VdfgTmp_h65e1bffd__0 = vlSelf->TestTopModule__DOT__mem__DOT__mem_1
        [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_addr_pipe_0];
    vlSelf->__VdfgTmp_hd329e994__0 = vlSelf->TestTopModule__DOT__mem__DOT__mem_2
        [vlSelf->TestTopModule__DOT__mem__DOT__mem_2_io_instruction_MPORT_addr_pipe_0];
    vlSelf->__VdfgTmp_h668a7439__0 = vlSelf->TestTopModule__DOT__mem__DOT__mem_3
        [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0];
    vlSelf->__VdfgTmp_h39040509__0 = vlSelf->TestTopModule__DOT__mem__DOT__mem_1
        [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0];
    vlSelf->__VdfgTmp_hf7b7a7fe__0 = vlSelf->TestTopModule__DOT__mem__DOT__mem_0
        [vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0];
    vlSelf->__VdfgTmp_he1cdd106__0 = (((IData)(vlSelf->__VdfgTmp_h65e1bffd__0) 
                                       << 8U) | (IData)(vlSelf->__VdfgTmp_haeeb6a10__0));
    vlSelf->__VdfgTmp_hf6cf16cb__0 = (((IData)(vlSelf->__VdfgTmp_h39040509__0) 
                                       << 8U) | (IData)(vlSelf->__VdfgTmp_hf7b7a7fe__0));
    vlSelf->__VdfgTmp_h1bc5eb2c__0 = (((IData)(vlSelf->__VdfgTmp_hd329e994__0) 
                                       << 0x10U) | (IData)(vlSelf->__VdfgTmp_hf6cf16cb__0));
    vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction_read_data 
        = (((IData)(vlSelf->__VdfgTmp_h668a7439__0) 
            << 0x18U) | vlSelf->__VdfgTmp_h1bc5eb2c__0);
}

VL_INLINE_OPT void VTestTopModule___024root___nba_sequent__TOP__1(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_31 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_30 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_29 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_28 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_27 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_26 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_8 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_6 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_2 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_5 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_16 = 0U;
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
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_14 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_15 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_17 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_18 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_19 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_20 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_21 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_22 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_23 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_24 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_25 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc = 0x1000U;
    } else {
        if ((1U & (~ (IData)(vlSelf->reset)))) {
            if (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_enable) 
                 & (0U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address)))) {
                if ((0x1fU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_31 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
                }
                if ((0x1eU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_30 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
                }
                if ((0x1dU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_29 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
                }
                if ((0x1cU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_28 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
                }
                if ((0x1bU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_27 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
                }
                if ((0x1aU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_26 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
                }
                if ((8U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_8 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
                }
                if ((6U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_6 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
                }
                if ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_2 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
                }
                if ((5U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_5 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
                }
                if ((0x10U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_16 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
                }
                if ((9U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_9 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
                }
                if ((0xbU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_11 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
                }
                if ((7U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_7 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
                }
                if ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_0 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
                }
                if ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_1 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
                }
                if ((3U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_3 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
                }
                if ((0xaU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_10 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
                }
                if ((4U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_4 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
                }
                if ((0xcU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_12 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
                }
                if ((0xdU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_13 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
                }
                if ((0xeU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_14 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
                }
                if ((0xfU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_15 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
                }
                if ((0x11U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_17 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
                }
                if ((0x12U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_18 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
                }
                if ((0x13U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_19 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
                }
                if ((0x14U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_20 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
                }
                if ((0x15U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_21 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
                }
                if ((0x16U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_22 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
                }
                if ((0x17U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_23 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
                }
                if ((0x18U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_24 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
                }
                if ((0x19U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address))) {
                    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_25 
                        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data;
                }
            }
        }
        if (vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) {
            vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc 
                = (((IData)(vlSelf->__VdfgTmp_h90b3d085__0) 
                    | ((0x63U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)) 
                       & ((7U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3))
                           ? (vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_data1 
                              >= vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_data2)
                           : ((6U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3))
                               ? (vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_data1 
                                  < vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_data2)
                               : ((5U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3))
                                   ? VL_GTES_III(32, vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_data1, vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_data2)
                                   : ((4U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3))
                                       ? VL_LTS_III(32, vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_data1, vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_data2)
                                       : ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3))
                                           ? (vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_data1 
                                              != vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_data2)
                                           : ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3)) 
                                              & (vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_data1 
                                                 == vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_data2)))))))))
                    ? vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch_io_jump_address_id
                    : vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT___pc_T_1);
        }
    }
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
                                                          : 
                                                         ((0x15U 
                                                           == (IData)(vlSelf->io_regs_debug_read_address))
                                                           ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_21
                                                           : 
                                                          ((0x14U 
                                                            == (IData)(vlSelf->io_regs_debug_read_address))
                                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_20
                                                            : 
                                                           ((0x13U 
                                                             == (IData)(vlSelf->io_regs_debug_read_address))
                                                             ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_19
                                                             : 
                                                            ((0x12U 
                                                              == (IData)(vlSelf->io_regs_debug_read_address))
                                                              ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_18
                                                              : 
                                                             ((0x11U 
                                                               == (IData)(vlSelf->io_regs_debug_read_address))
                                                               ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_17
                                                               : 
                                                              ((0x10U 
                                                                == (IData)(vlSelf->io_regs_debug_read_address))
                                                                ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_16
                                                                : 
                                                               ((0xfU 
                                                                 == (IData)(vlSelf->io_regs_debug_read_address))
                                                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_15
                                                                 : 
                                                                ((0xeU 
                                                                  == (IData)(vlSelf->io_regs_debug_read_address))
                                                                  ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_14
                                                                  : 
                                                                 ((0xdU 
                                                                   == (IData)(vlSelf->io_regs_debug_read_address))
                                                                   ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_13
                                                                   : 
                                                                  ((0xcU 
                                                                    == (IData)(vlSelf->io_regs_debug_read_address))
                                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_12
                                                                    : 
                                                                   ((0xbU 
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
                                                                               : vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_0))))))))))))))))))))))))))))))));
    vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT___pc_T_1 
        = ((IData)(4U) + vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc);
}

VL_INLINE_OPT void VTestTopModule___024root___nba_sequent__TOP__2(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___nba_sequent__TOP__2\n"); );
    // Init
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_9;
    TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_9 = 0;
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_34;
    TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_34 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__id__DOT___io_wb_reg_write_source_T_2;
    TestTopModule__DOT__cpu__DOT__id__DOT___io_wb_reg_write_source_T_2 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__id__DOT____VdfgTmp_h61009027__0;
    TestTopModule__DOT__cpu__DOT__id__DOT____VdfgTmp_h61009027__0 = 0;
    CData/*5:0*/ TestTopModule__DOT__cpu__DOT__id__DOT____VdfgTmp_h6129493d__0;
    TestTopModule__DOT__cpu__DOT__id__DOT____VdfgTmp_h6129493d__0 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl__DOT____VdfgTmp_hbf806e4e__0;
    TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl__DOT____VdfgTmp_hbf806e4e__0 = 0;
    CData/*0:0*/ __VdfgTmp_h5bf30c63__0;
    __VdfgTmp_h5bf30c63__0 = 0;
    // Body
    if (vlSelf->reset) {
        vlSelf->__Vdly__TestTopModule__DOT__rom_loader__DOT__address = 0U;
        vlSelf->TestTopModule__DOT__rom_loader__DOT__valid = 0U;
    } else if ((0x40cU >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)) {
        vlSelf->__Vdly__TestTopModule__DOT__rom_loader__DOT__address 
            = vlSelf->TestTopModule__DOT__rom_loader__DOT___address_T_1;
        vlSelf->TestTopModule__DOT__rom_loader__DOT__valid 
            = vlSelf->TestTopModule__DOT__rom_loader__DOT___GEN_0;
    }
    vlSelf->TestTopModule__DOT__rom_loader__DOT__address 
        = vlSelf->__Vdly__TestTopModule__DOT__rom_loader__DOT__address;
    vlSelf->TestTopModule__DOT__rom_loader__DOT___address_T_1 
        = ((IData)(1U) + vlSelf->TestTopModule__DOT__rom_loader__DOT__address);
    vlSelf->TestTopModule__DOT__rom_loader__DOT___GEN_0 
        = ((0x40cU == vlSelf->TestTopModule__DOT__rom_loader__DOT__address) 
           | (IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid));
    if (vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) {
        vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4562d974__0 
            = vlSelf->__VdfgTmp_he1cdd106__0;
        vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45261729__0 
            = vlSelf->__VdfgTmp_hcdfd3b03__0;
        vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45053cf4__0 
            = vlSelf->__VdfgTmp_h65e1bffd__0;
        vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4562db72__0 
            = vlSelf->__VdfgTmp_haeeb6a10__0;
        vlSelf->TestTopModule__DOT__cpu__DOT__mem_io_memory_bundle_read_data 
            = (((IData)(vlSelf->__VdfgTmp_ha885c88e__0) 
                << 0x18U) | (((IData)(vlSelf->__VdfgTmp_hcdfd3b03__0) 
                              << 0x10U) | (IData)(vlSelf->__VdfgTmp_he1cdd106__0)));
        vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address 
            = (0x1fU & ((IData)(vlSelf->__VdfgTmp_hf6cf16cb__0) 
                        >> 7U));
        TestTopModule__DOT__cpu__DOT__id__DOT____VdfgTmp_h6129493d__0 
            = (0x3fU & ((IData)(vlSelf->__VdfgTmp_h668a7439__0) 
                        >> 1U));
        vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3 
            = (7U & ((IData)(vlSelf->__VdfgTmp_h39040509__0) 
                     >> 4U));
        vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2 
            = (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction_read_data 
                        >> 0x14U));
        vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode 
            = (0x7fU & (IData)(vlSelf->__VdfgTmp_hf7b7a7fe__0));
        vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en 
            = ((3U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)) 
               & (0x23U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)));
        vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4529f3cd__0 
            = ((IData)(vlSelf->__VdfgTmp_h65e1bffd__0) 
               >> 7U);
        vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45fa5d80__0 
            = ((IData)(vlSelf->__VdfgTmp_ha885c88e__0) 
               >> 7U);
        TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl__DOT____VdfgTmp_hbf806e4e__0 
            = (1U & ((IData)(vlSelf->__VdfgTmp_h668a7439__0) 
                     >> 6U));
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4562d974__0 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45261729__0 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45053cf4__0 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4562db72__0 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__mem_io_memory_bundle_read_data = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address = 0U;
        TestTopModule__DOT__cpu__DOT__id__DOT____VdfgTmp_h6129493d__0 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode = 0x13U;
        vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en 
            = (0x40cU >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address);
        vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4529f3cd__0 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45fa5d80__0 = 0U;
        TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl__DOT____VdfgTmp_hbf806e4e__0 = 0U;
    }
    TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_34 
        = (((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
             ? (((IData)(vlSelf->__VdfgTmp_h668a7439__0) 
                 << 0xcU) | (((IData)(vlSelf->__VdfgTmp_hd329e994__0) 
                              << 4U) | (0xfU & ((IData)(vlSelf->__VdfgTmp_h39040509__0) 
                                                >> 4U))))
             : 0U) << 0xcU);
    TestTopModule__DOT__cpu__DOT__id__DOT____VdfgTmp_h61009027__0 
        = ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) 
           & ((IData)(vlSelf->__VdfgTmp_h668a7439__0) 
              >> 7U));
    TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_9 
        = ((((IData)(TestTopModule__DOT__cpu__DOT__id__DOT____VdfgTmp_h61009027__0)
              ? 0x1fffffU : 0U) << 0xbU) | ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
                                             ? (0x7ffU 
                                                & (vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction_read_data 
                                                   >> 0x14U))
                                             : 0U));
    TestTopModule__DOT__cpu__DOT__id__DOT___io_wb_reg_write_source_T_2 
        = ((0x33U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)) 
           | (0x13U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)));
    vlSelf->__VdfgTmp_h90b3d085__0 = ((0x6fU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)) 
                                      | (0x67U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)));
    __VdfgTmp_h5bf30c63__0 = ((0x37U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)) 
                              | (0x17U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)));
    vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1 
        = ((0x37U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode))
            ? 0U : ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
                     ? (0x1fU & (vlSelf->__VdfgTmp_h1bc5eb2c__0 
                                 >> 0xfU)) : 0U));
    vlSelf->TestTopModule__DOT__cpu__DOT__id_io_ex_immediate 
        = ((0x6fU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode))
            ? ((((IData)(TestTopModule__DOT__cpu__DOT__id__DOT____VdfgTmp_h61009027__0)
                  ? 0xfffU : 0U) << 0x14U) | ((((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
                                                 ? 
                                                (0xffU 
                                                 & (vlSelf->__VdfgTmp_h1bc5eb2c__0 
                                                    >> 0xcU))
                                                 : 0U) 
                                               << 0xcU) 
                                              | ((0xfffff800U 
                                                  & (((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) 
                                                      << 0xbU) 
                                                     & ((IData)(vlSelf->__VdfgTmp_hd329e994__0) 
                                                        << 7U))) 
                                                 | (((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
                                                      ? 
                                                     (0x3ffU 
                                                      & (vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction_read_data 
                                                         >> 0x15U))
                                                      : 0U) 
                                                    << 1U))))
            : ((0x17U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode))
                ? TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_34
                : ((0x37U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode))
                    ? TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_34
                    : ((0x63U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode))
                        ? ((((IData)(TestTopModule__DOT__cpu__DOT__id__DOT____VdfgTmp_h61009027__0)
                              ? 0xfffffU : 0U) << 0xcU) 
                           | ((0xfffff800U & (((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) 
                                               << 0xbU) 
                                              & ((IData)(vlSelf->__VdfgTmp_hf7b7a7fe__0) 
                                                 << 4U))) 
                              | (((IData)(TestTopModule__DOT__cpu__DOT__id__DOT____VdfgTmp_h6129493d__0) 
                                  << 5U) | (((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
                                              ? (0xfU 
                                                 & (IData)(vlSelf->__VdfgTmp_h39040509__0))
                                              : 0U) 
                                            << 1U))))
                        : ((0x23U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode))
                            ? ((((IData)(TestTopModule__DOT__cpu__DOT__id__DOT____VdfgTmp_h61009027__0)
                                  ? 0x1fffffU : 0U) 
                                << 0xbU) | (((IData)(TestTopModule__DOT__cpu__DOT__id__DOT____VdfgTmp_h6129493d__0) 
                                             << 5U) 
                                            | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address)))
                            : ((0x67U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode))
                                ? TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_9
                                : ((3U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode))
                                    ? TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_9
                                    : ((0x13U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode))
                                        ? TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_9
                                        : ((((IData)(TestTopModule__DOT__cpu__DOT__id__DOT____VdfgTmp_h61009027__0)
                                              ? 0xfffffU
                                              : 0U) 
                                            << 0xcU) 
                                           | ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
                                               ? (((IData)(vlSelf->__VdfgTmp_h668a7439__0) 
                                                   << 4U) 
                                                  | (0xfU 
                                                     & ((IData)(vlSelf->__VdfgTmp_hd329e994__0) 
                                                        >> 4U)))
                                               : 0U))))))))));
    vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_enable 
        = ((IData)(TestTopModule__DOT__cpu__DOT__id__DOT___io_wb_reg_write_source_T_2) 
           | ((3U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)) 
              | ((0x17U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)) 
                 | ((0x37U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)) 
                    | (IData)(vlSelf->__VdfgTmp_h90b3d085__0)))));
    vlSelf->TestTopModule__DOT__cpu__DOT__id_io_wb_reg_write_source 
        = (((IData)(TestTopModule__DOT__cpu__DOT__id__DOT___io_wb_reg_write_source_T_2) 
            | (IData)(__VdfgTmp_h5bf30c63__0)) ? 0U
            : ((3U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode))
                ? 1U : ((IData)(vlSelf->__VdfgTmp_h90b3d085__0)
                         ? 3U : 0U)));
    vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_func 
        = ((0x13U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode))
            ? ((5U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3))
                ? ((IData)(TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl__DOT____VdfgTmp_hbf806e4e__0)
                    ? 9U : 8U) : ((7U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3))
                                   ? 7U : ((6U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3))
                                            ? 6U : 
                                           ((4U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3))
                                             ? 5U : 
                                            ((3U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3))
                                              ? 0xaU
                                              : ((2U 
                                                  == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3))
                                                  ? 4U
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3))
                                                   ? 3U
                                                   : 1U)))))))
            : ((0x33U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode))
                ? ((5U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3))
                    ? ((IData)(TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl__DOT____VdfgTmp_hbf806e4e__0)
                        ? 9U : 8U) : ((7U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3))
                                       ? 7U : ((6U 
                                                == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3))
                                                ? 6U
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3))
                                                    ? 5U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3))
                                                     ? 0xaU
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3))
                                                      ? 4U
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3))
                                                       ? 3U
                                                       : 
                                                      ((IData)(TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl__DOT____VdfgTmp_hbf806e4e__0)
                                                        ? 2U
                                                        : 1U))))))))
                : ((0x63U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)) 
                   | ((3U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)) 
                      | ((0x23U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)) 
                         | ((0x6fU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)) 
                            | ((0x67U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)) 
                               | (IData)(__VdfgTmp_h5bf30c63__0))))))));
}

VL_INLINE_OPT void VTestTopModule___024root___nba_comb__TOP__0(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___nba_comb__TOP__0\n"); );
    // Init
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__mem_io_wb_memory_read_data;
    TestTopModule__DOT__cpu__DOT__mem_io_wb_memory_read_data = 0;
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op1;
    TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op1 = 0;
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2;
    TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2 = 0;
    IData/*16:0*/ TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h051b1b1b__0;
    TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h051b1b1b__0 = 0;
    IData/*31:0*/ __VdfgTmp_hd4253c43__0;
    __VdfgTmp_hd4253c43__0 = 0;
    // Body
    __VdfgTmp_hd4253c43__0 = ((0x1fU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))
                               ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_31
                               : ((0x1eU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))
                                   ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_30
                                   : ((0x1dU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))
                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_29
                                       : ((0x1cU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))
                                           ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_28
                                           : ((0x1bU 
                                               == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))
                                               ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_27
                                               : ((0x1aU 
                                                   == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))
                                                   ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_26
                                                   : 
                                                  ((0x19U 
                                                    == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))
                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_25
                                                    : 
                                                   ((0x18U 
                                                     == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))
                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_24
                                                     : 
                                                    ((0x17U 
                                                      == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))
                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_23
                                                      : 
                                                     ((0x16U 
                                                       == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))
                                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_22
                                                       : 
                                                      ((0x15U 
                                                        == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))
                                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_21
                                                        : 
                                                       ((0x14U 
                                                         == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))
                                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_20
                                                         : 
                                                        ((0x13U 
                                                          == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))
                                                          ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_19
                                                          : 
                                                         ((0x12U 
                                                           == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))
                                                           ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_18
                                                           : 
                                                          ((0x11U 
                                                            == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))
                                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_17
                                                            : 
                                                           ((0x10U 
                                                             == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))
                                                             ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_16
                                                             : 
                                                            ((0xfU 
                                                              == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))
                                                              ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_15
                                                              : 
                                                             ((0xeU 
                                                               == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))
                                                               ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_14
                                                               : 
                                                              ((0xdU 
                                                                == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))
                                                                ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_13
                                                                : 
                                                               ((0xcU 
                                                                 == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))
                                                                 ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_12
                                                                 : 
                                                                ((0xbU 
                                                                  == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))
                                                                  ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_11
                                                                  : 
                                                                 ((0xaU 
                                                                   == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))
                                                                   ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_10
                                                                   : 
                                                                  ((9U 
                                                                    == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))
                                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_9
                                                                    : 
                                                                   ((8U 
                                                                     == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))
                                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_8
                                                                     : 
                                                                    ((7U 
                                                                      == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))
                                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_7
                                                                      : 
                                                                     ((6U 
                                                                       == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))
                                                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_6
                                                                       : 
                                                                      ((5U 
                                                                        == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))
                                                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_5
                                                                        : 
                                                                       ((4U 
                                                                         == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))
                                                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_4
                                                                         : 
                                                                        ((3U 
                                                                          == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))
                                                                          ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_3
                                                                          : 
                                                                         ((2U 
                                                                           == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))
                                                                           ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_2
                                                                           : 
                                                                          ((1U 
                                                                            == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))
                                                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_1
                                                                            : vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_0)))))))))))))))))))))))))))))));
    vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_data1 
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
                                     : ((0x1aU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_26
                                         : ((0x19U 
                                             == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                             ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_25
                                             : ((0x18U 
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
                                                   : 
                                                  ((0x15U 
                                                    == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_21
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_20
                                                     : 
                                                    ((0x13U 
                                                      == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_19
                                                      : 
                                                     ((0x12U 
                                                       == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                       ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_18
                                                       : 
                                                      ((0x11U 
                                                        == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_17
                                                        : 
                                                       ((0x10U 
                                                         == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                         ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_16
                                                         : 
                                                        ((0xfU 
                                                          == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                          ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_15
                                                          : 
                                                         ((0xeU 
                                                           == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                           ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_14
                                                           : 
                                                          ((0xdU 
                                                            == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_13
                                                            : 
                                                           ((0xcU 
                                                             == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                             ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_12
                                                             : 
                                                            ((0xbU 
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
                                                                        : vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_0))))))))))))))))))))))))))))))));
    if ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))) {
        TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h051b1b1b__0 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_data2 = 0U;
    } else {
        TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h051b1b1b__0 
            = (0x1ffffU & __VdfgTmp_hd4253c43__0);
        vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_data2 
            = __VdfgTmp_hd4253c43__0;
    }
    vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch_io_jump_address_id 
        = (vlSelf->TestTopModule__DOT__cpu__DOT__id_io_ex_immediate 
           + ((0x67U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode))
               ? vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_data1
               : vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc));
    TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op1 
        = (((0x17U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)) 
            | ((0x63U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)) 
               | (0x6fU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode))))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc
            : vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_data1);
    TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2 
        = ((0x33U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_data2
            : vlSelf->TestTopModule__DOT__cpu__DOT__id_io_ex_immediate);
    vlSelf->__VdfgTmp_h6e50e5ad__0 = (0x7fffffffffffffffULL 
                                      & ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                          ? (QData)((IData)(
                                                            (TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                             + TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2)))
                                          : ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                              ? (QData)((IData)(
                                                                (TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                                 - TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2)))
                                              : ((3U 
                                                  == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                  ? 
                                                 ((QData)((IData)(TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op1)) 
                                                  << 
                                                  (0x1fU 
                                                   & TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2))
                                                  : (QData)((IData)(
                                                                    ((4U 
                                                                      == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                                      ? 
                                                                     VL_LTS_III(32, TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op1, TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                                      : 
                                                                     ((5U 
                                                                       == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                                       ? 
                                                                      (TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                                       ^ TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                                        ? 
                                                                       (TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                                        | TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                                        : 
                                                                       ((7U 
                                                                         == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                                         ? 
                                                                        (TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                                         & TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                                         : 
                                                                        ((8U 
                                                                          == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                                          ? 
                                                                         (TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                                          >> 
                                                                          (0x1fU 
                                                                           & TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2))
                                                                          : 
                                                                         ((9U 
                                                                           == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_func))
                                                                           ? 
                                                                          VL_SHIFTRS_III(32,32,5, TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op1, 
                                                                                (0x1fU 
                                                                                & TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2))
                                                                           : 
                                                                          ((0xaU 
                                                                            == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_func)) 
                                                                           & (TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                                              < TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2))))))))))))));
    if ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3))) {
        vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13 
            = (0U == (3U & (IData)(vlSelf->__VdfgTmp_h6e50e5ad__0)));
        vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16 
            = (0U != (3U & (IData)(vlSelf->__VdfgTmp_h6e50e5ad__0)));
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13 
            = (2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3));
        vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16 
            = (2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3));
    }
    if (vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) {
        vlSelf->TestTopModule__DOT__mem_io_bundle_address 
            = (0x1fffffffU & (IData)(vlSelf->__VdfgTmp_h6e50e5ad__0));
        vlSelf->TestTopModule__DOT__mem_io_bundle_write_data 
            = ((3U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode))
                ? 0U : ((0x23U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode))
                         ? (IData)((0xffffffffffULL 
                                    & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3))
                                        ? ((QData)((IData)(
                                                           ((0U 
                                                             == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))
                                                             ? 0U
                                                             : 
                                                            (0x1ffU 
                                                             & __VdfgTmp_hd4253c43__0)))) 
                                           << (0x18U 
                                               & ((IData)(vlSelf->__VdfgTmp_h6e50e5ad__0) 
                                                  << 3U)))
                                        : ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3))
                                            ? ((0U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->__VdfgTmp_h6e50e5ad__0)))
                                                ? (QData)((IData)(TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h051b1b1b__0))
                                                : ((QData)((IData)(TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h051b1b1b__0)) 
                                                   << 0x10U))
                                            : (QData)((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_data2))))))
                         : 0U));
    } else if ((0x40cU >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)) {
        vlSelf->TestTopModule__DOT__mem_io_bundle_address 
            = ((IData)(0x1000U) + (IData)(((QData)((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__address)) 
                                           << 2U)));
        vlSelf->TestTopModule__DOT__mem_io_bundle_write_data 
            = ((0x40cU >= (0x7ffU & vlSelf->TestTopModule__DOT__rom_loader__DOT__address))
                ? vlSelf->TestTopModule__DOT__instruction_rom__DOT__mem
               [(0x7ffU & vlSelf->TestTopModule__DOT__rom_loader__DOT__address)]
                : 0U);
    } else {
        vlSelf->TestTopModule__DOT__mem_io_bundle_address = 0U;
        vlSelf->TestTopModule__DOT__mem_io_bundle_write_data = 0U;
    }
    TestTopModule__DOT__cpu__DOT__mem_io_wb_memory_read_data 
        = ((3U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode))
            ? ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3))
                ? vlSelf->TestTopModule__DOT__cpu__DOT__mem_io_memory_bundle_read_data
                : ((5U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3))
                    ? ((0U == (3U & (IData)(vlSelf->__VdfgTmp_h6e50e5ad__0)))
                        ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4562d974__0)
                        : VL_SHIFTR_III(32,32,32, vlSelf->TestTopModule__DOT__cpu__DOT__mem_io_memory_bundle_read_data, 0x10U))
                    : ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3))
                        ? ((0U == (3U & (IData)(vlSelf->__VdfgTmp_h6e50e5ad__0)))
                            ? ((((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4529f3cd__0)
                                  ? 0xffffU : 0U) << 0x10U) 
                               | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4562d974__0))
                            : ((((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45fa5d80__0)
                                  ? 0xffffU : 0U) << 0x10U) 
                               | ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
                                   ? (((IData)(vlSelf->__VdfgTmp_ha885c88e__0) 
                                       << 8U) | (IData)(vlSelf->__VdfgTmp_hcdfd3b03__0))
                                   : 0U))) : ((4U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3))
                                               ? ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->__VdfgTmp_h6e50e5ad__0)))
                                                   ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45261729__0)
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->__VdfgTmp_h6e50e5ad__0)))
                                                    ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45053cf4__0)
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->__VdfgTmp_h6e50e5ad__0)))
                                                     ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4562db72__0)
                                                     : 
                                                    VL_SHIFTR_III(32,32,32, vlSelf->TestTopModule__DOT__cpu__DOT__mem_io_memory_bundle_read_data, 0x18U))))
                                               : ((0U 
                                                   == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3))
                                                   ? 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->__VdfgTmp_h6e50e5ad__0)))
                                                    ? 
                                                   (((((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) 
                                                       & ((IData)(vlSelf->__VdfgTmp_hcdfd3b03__0) 
                                                          >> 7U))
                                                       ? 0xffffffU
                                                       : 0U) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45261729__0))
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->__VdfgTmp_h6e50e5ad__0)))
                                                     ? 
                                                    ((((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4529f3cd__0)
                                                        ? 0xffffffU
                                                        : 0U) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45053cf4__0))
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->__VdfgTmp_h6e50e5ad__0)))
                                                      ? 
                                                     (((((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) 
                                                         & ((IData)(vlSelf->__VdfgTmp_haeeb6a10__0) 
                                                            >> 7U))
                                                         ? 0xffffffU
                                                         : 0U) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4562db72__0))
                                                      : 
                                                     ((((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45fa5d80__0)
                                                         ? 0xffffffU
                                                         : 0U) 
                                                       << 8U) 
                                                      | ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
                                                          ? (IData)(vlSelf->__VdfgTmp_ha885c88e__0)
                                                          : 0U)))))
                                                   : 0U)))))
            : 0U);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data 
        = ((3U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id_io_wb_reg_write_source))
            ? ((IData)(4U) + vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc)
            : ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id_io_wb_reg_write_source))
                ? TestTopModule__DOT__cpu__DOT__mem_io_wb_memory_read_data
                : (IData)(vlSelf->__VdfgTmp_h6e50e5ad__0)));
}

void VTestTopModule___024root___eval_nba(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestTopModule___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestTopModule___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTestTopModule___024root___nba_sequent__TOP__2(vlSelf);
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
            VL_FATAL_MT("TestTopModule.sv", 1643, "", "Input combinational region did not converge.");
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
            VL_FATAL_MT("TestTopModule.sv", 1643, "", "NBA region did not converge.");
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
                VL_FATAL_MT("TestTopModule.sv", 1643, "", "Active region did not converge.");
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
