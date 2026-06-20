// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestTopModule.h for the primary calling header

#include "VTestTopModule__pch.h"
#include "VTestTopModule___024root.h"

VL_ATTR_COLD void VTestTopModule___024root___eval_static(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_static\n"); );
}

VL_ATTR_COLD void VTestTopModule___024root___eval_initial__TOP(VTestTopModule___024root* vlSelf);

VL_ATTR_COLD void VTestTopModule___024root___eval_initial(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_initial\n"); );
    // Body
    VTestTopModule___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
    vlSelf->__Vtrigprevexpr___TOP__TestTopModule__DOT__cpu__DOT__regs_clock__0 
        = vlSelf->TestTopModule__DOT__cpu__DOT__regs_clock;
}

extern const VlWide<16>/*511:0*/ VTestTopModule__ConstPool__CONST_h2fd816fb_0;

VL_ATTR_COLD void VTestTopModule___024root___eval_initial__TOP(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_initial__TOP\n"); );
    // Body
    VL_READMEM_N(true, 32, 132, 0, VL_CVT_PACK_STR_NW(16, VTestTopModule__ConstPool__CONST_h2fd816fb_0)
                 ,  &(vlSelf->TestTopModule__DOT__instruction_rom__DOT__mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VTestTopModule___024root___eval_final(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestTopModule___024root___dump_triggers__stl(VTestTopModule___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VTestTopModule___024root___eval_phase__stl(VTestTopModule___024root* vlSelf);

VL_ATTR_COLD void VTestTopModule___024root___eval_settle(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_settle\n"); );
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
            VTestTopModule___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("TestTopModule.sv", 1643, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VTestTopModule___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestTopModule___024root___dump_triggers__stl(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTestTopModule___024root___stl_sequent__TOP__0(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__mem_io_wb_memory_read_data;
    TestTopModule__DOT__cpu__DOT__mem_io_wb_memory_read_data = 0;
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_9;
    TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_9 = 0;
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_34;
    TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_34 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__id__DOT___io_wb_reg_write_source_T_4;
    TestTopModule__DOT__cpu__DOT__id__DOT___io_wb_reg_write_source_T_4 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__id__DOT____VdfgTmp_h61009027__0;
    TestTopModule__DOT__cpu__DOT__id__DOT____VdfgTmp_h61009027__0 = 0;
    CData/*5:0*/ TestTopModule__DOT__cpu__DOT__id__DOT____VdfgTmp_h6129493d__0;
    TestTopModule__DOT__cpu__DOT__id__DOT____VdfgTmp_h6129493d__0 = 0;
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op1;
    TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op1 = 0;
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2;
    TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op2 = 0;
    CData/*0:0*/ TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl__DOT____VdfgTmp_hbf806e4e__0;
    TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl__DOT____VdfgTmp_hbf806e4e__0 = 0;
    IData/*16:0*/ TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h051b1b1b__0;
    TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h051b1b1b__0 = 0;
    IData/*31:0*/ __VdfgTmp_hd4253c43__0;
    __VdfgTmp_hd4253c43__0 = 0;
    CData/*0:0*/ __VdfgTmp_h5bf30c63__0;
    __VdfgTmp_h5bf30c63__0 = 0;
    // Body
    vlSelf->TestTopModule__DOT__rom_loader__DOT___address_T_1 
        = ((IData)(1U) + vlSelf->TestTopModule__DOT__rom_loader__DOT__address);
    vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT___pc_T_1 
        = ((IData)(4U) + vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc);
    vlSelf->TestTopModule__DOT___CPU_next_T_2 = (3U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->TestTopModule__DOT__CPU_clkdiv)));
    vlSelf->TestTopModule__DOT__cpu__DOT__regs_clock 
        = (0U == (IData)(vlSelf->TestTopModule__DOT__CPU_clkdiv));
    vlSelf->TestTopModule__DOT__rom_loader__DOT___GEN_0 
        = ((0x83U == vlSelf->TestTopModule__DOT__rom_loader__DOT__address) 
           | (IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid));
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
    vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45fa5d80__0 
        = ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) 
           & ((IData)(vlSelf->__VdfgTmp_ha885c88e__0) 
              >> 7U));
    vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4529f3cd__0 
        = ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) 
           & ((IData)(vlSelf->__VdfgTmp_h65e1bffd__0) 
              >> 7U));
    vlSelf->__VdfgTmp_he1cdd106__0 = (((IData)(vlSelf->__VdfgTmp_h65e1bffd__0) 
                                       << 8U) | (IData)(vlSelf->__VdfgTmp_haeeb6a10__0));
    TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl__DOT____VdfgTmp_hbf806e4e__0 
        = ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) 
           & ((IData)(vlSelf->__VdfgTmp_h668a7439__0) 
              >> 6U));
    TestTopModule__DOT__cpu__DOT__id__DOT____VdfgTmp_h61009027__0 
        = ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) 
           & ((IData)(vlSelf->__VdfgTmp_h668a7439__0) 
              >> 7U));
    TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_34 
        = (((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
             ? (((IData)(vlSelf->__VdfgTmp_h668a7439__0) 
                 << 0xcU) | (((IData)(vlSelf->__VdfgTmp_hd329e994__0) 
                              << 4U) | (0xfU & ((IData)(vlSelf->__VdfgTmp_h39040509__0) 
                                                >> 4U))))
             : 0U) << 0xcU);
    vlSelf->__VdfgTmp_hf6cf16cb__0 = (((IData)(vlSelf->__VdfgTmp_h39040509__0) 
                                       << 8U) | (IData)(vlSelf->__VdfgTmp_hf7b7a7fe__0));
    if (vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) {
        vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45261729__0 
            = vlSelf->__VdfgTmp_hcdfd3b03__0;
        vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4562db72__0 
            = vlSelf->__VdfgTmp_haeeb6a10__0;
        vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45053cf4__0 
            = vlSelf->__VdfgTmp_h65e1bffd__0;
        TestTopModule__DOT__cpu__DOT__id__DOT____VdfgTmp_h6129493d__0 
            = (0x3fU & ((IData)(vlSelf->__VdfgTmp_h668a7439__0) 
                        >> 1U));
        vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3 
            = (7U & ((IData)(vlSelf->__VdfgTmp_h39040509__0) 
                     >> 4U));
        vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode 
            = (0x7fU & (IData)(vlSelf->__VdfgTmp_hf7b7a7fe__0));
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45261729__0 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4562db72__0 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45053cf4__0 = 0U;
        TestTopModule__DOT__cpu__DOT__id__DOT____VdfgTmp_h6129493d__0 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode = 0x13U;
    }
    TestTopModule__DOT__cpu__DOT__id__DOT___io_wb_reg_write_source_T_4 
        = ((0x33U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)) 
           | (0x13U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)));
    vlSelf->__VdfgTmp_h90b3d085__0 = ((0x6fU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)) 
                                      | (0x67U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)));
    __VdfgTmp_h5bf30c63__0 = ((0x37U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)) 
                              | (0x17U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)));
    vlSelf->__VdfgTmp_h1bc5eb2c__0 = (((IData)(vlSelf->__VdfgTmp_hd329e994__0) 
                                       << 0x10U) | (IData)(vlSelf->__VdfgTmp_hf6cf16cb__0));
    vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_enable 
        = ((IData)(TestTopModule__DOT__cpu__DOT__id__DOT___io_wb_reg_write_source_T_4) 
           | ((3U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)) 
              | ((0x17U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)) 
                 | ((0x37U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)) 
                    | (IData)(vlSelf->__VdfgTmp_h90b3d085__0)))));
    vlSelf->TestTopModule__DOT__cpu__DOT__id_io_wb_reg_write_source 
        = (((IData)(TestTopModule__DOT__cpu__DOT__id__DOT___io_wb_reg_write_source_T_4) 
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
    vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1 
        = ((0x37U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode))
            ? 0U : ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
                     ? (0x1fU & (vlSelf->__VdfgTmp_h1bc5eb2c__0 
                                 >> 0xfU)) : 0U));
    vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction_read_data 
        = (((IData)(vlSelf->__VdfgTmp_h668a7439__0) 
            << 0x18U) | vlSelf->__VdfgTmp_h1bc5eb2c__0);
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
    TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_9 
        = ((((IData)(TestTopModule__DOT__cpu__DOT__id__DOT____VdfgTmp_h61009027__0)
              ? 0x1fffffU : 0U) << 0xbU) | ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
                                             ? (0x7ffU 
                                                & (vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction_read_data 
                                                   >> 0x14U))
                                             : 0U));
    TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_op1 
        = (((0x17U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)) 
            | ((0x63U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)) 
               | (0x6fU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode))))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc
            : vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_data1);
    if (vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) {
        vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4562d974__0 
            = vlSelf->__VdfgTmp_he1cdd106__0;
        vlSelf->TestTopModule__DOT__cpu__DOT__mem_io_memory_bundle_read_data 
            = (((IData)(vlSelf->__VdfgTmp_ha885c88e__0) 
                << 0x18U) | (((IData)(vlSelf->__VdfgTmp_hcdfd3b03__0) 
                              << 0x10U) | (IData)(vlSelf->__VdfgTmp_he1cdd106__0)));
        vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en 
            = ((3U != (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)) 
               & (0x23U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode)));
        vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address 
            = (0x1fU & ((IData)(vlSelf->__VdfgTmp_hf6cf16cb__0) 
                        >> 7U));
    } else {
        vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4562d974__0 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__mem_io_memory_bundle_read_data = 0U;
        vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en 
            = (0x83U >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address);
        vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address = 0U;
    }
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
    vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2 
        = ((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
            ? (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction_read_data 
                        >> 0x14U)) : 0U);
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
    vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch_io_jump_address_id 
        = (vlSelf->TestTopModule__DOT__cpu__DOT__id_io_ex_immediate 
           + ((0x67U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode))
               ? vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_data1
               : vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc));
    if ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2))) {
        TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h051b1b1b__0 = 0U;
        vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_data2 = 0U;
    } else {
        TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h051b1b1b__0 
            = (0x1ffffU & __VdfgTmp_hd4253c43__0);
        vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_data2 
            = __VdfgTmp_hd4253c43__0;
    }
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
    } else if ((0x83U >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)) {
        vlSelf->TestTopModule__DOT__mem_io_bundle_address 
            = ((IData)(0x1000U) + (IData)(((QData)((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__address)) 
                                           << 2U)));
        vlSelf->TestTopModule__DOT__mem_io_bundle_write_data 
            = ((0x83U >= (0xffU & vlSelf->TestTopModule__DOT__rom_loader__DOT__address))
                ? vlSelf->TestTopModule__DOT__instruction_rom__DOT__mem
               [(0xffU & vlSelf->TestTopModule__DOT__rom_loader__DOT__address)]
                : 0U);
    } else {
        vlSelf->TestTopModule__DOT__mem_io_bundle_address = 0U;
        vlSelf->TestTopModule__DOT__mem_io_bundle_write_data = 0U;
    }
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

VL_ATTR_COLD void VTestTopModule___024root___eval_stl(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTestTopModule___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VTestTopModule___024root___eval_triggers__stl(VTestTopModule___024root* vlSelf);

VL_ATTR_COLD bool VTestTopModule___024root___eval_phase__stl(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VTestTopModule___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VTestTopModule___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestTopModule___024root___dump_triggers__ico(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VTestTopModule___024root___dump_triggers__act(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge TestTopModule.cpu.regs_clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestTopModule___024root___dump_triggers__nba(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge TestTopModule.cpu.regs_clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTestTopModule___024root___ctor_var_reset(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_mem_debug_read_address = VL_RAND_RESET_I(32);
    vlSelf->io_regs_debug_read_address = VL_RAND_RESET_I(5);
    vlSelf->io_regs_debug_read_data = VL_RAND_RESET_I(32);
    vlSelf->io_mem_debug_read_data = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__mem_io_bundle_address = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__mem_io_bundle_write_data = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__CPU_clkdiv = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT___CPU_next_T_2 = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_0[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_2[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TestTopModule__DOT__mem__DOT__mem_2_io_instruction_MPORT_addr_pipe_0 = VL_RAND_RESET_I(13);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_3[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_addr_pipe_0 = VL_RAND_RESET_I(13);
    vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_debug_read_data_MPORT_addr_pipe_0 = VL_RAND_RESET_I(13);
    vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_instruction_MPORT_addr_pipe_0 = VL_RAND_RESET_I(13);
    for (int __Vi0 = 0; __Vi0 < 132; ++__Vi0) {
        vlSelf->TestTopModule__DOT__instruction_rom__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->TestTopModule__DOT__rom_loader__DOT__address = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__rom_loader__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__rom_loader__DOT___address_T_1 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__rom_loader__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs_clock = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_enable = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_address = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1 = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address2 = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_data1 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_data2 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch_io_jump_address_id = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction_read_data = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__id_io_ex_immediate = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__id_io_wb_reg_write_source = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__mem_io_memory_bundle_read_data = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_0 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_1 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_2 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_3 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_4 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_5 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_6 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_7 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_8 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_9 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_10 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_11 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_12 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_13 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_14 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_15 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_16 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_17 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_18 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_19 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_20 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_21 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_22 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_23 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_24 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_25 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_26 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_27 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_28 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_29 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_30 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_31 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT___pc_T_1 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_io_func = VL_RAND_RESET_I(4);
    vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_funct3 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4562d974__0 = 0;
    vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4529f3cd__0 = 0;
    vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45fa5d80__0 = 0;
    vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45261729__0 = 0;
    vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h45053cf4__0 = 0;
    vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4562db72__0 = 0;
    vlSelf->__VdfgTmp_h6e50e5ad__0 = 0;
    vlSelf->__VdfgTmp_ha885c88e__0 = 0;
    vlSelf->__VdfgTmp_hcdfd3b03__0 = 0;
    vlSelf->__VdfgTmp_he1cdd106__0 = 0;
    vlSelf->__VdfgTmp_h668a7439__0 = 0;
    vlSelf->__VdfgTmp_h1bc5eb2c__0 = 0;
    vlSelf->__VdfgTmp_h90b3d085__0 = 0;
    vlSelf->__VdfgTmp_hf6cf16cb__0 = 0;
    vlSelf->__VdfgTmp_hd329e994__0 = 0;
    vlSelf->__VdfgTmp_hf7b7a7fe__0 = 0;
    vlSelf->__VdfgTmp_h39040509__0 = 0;
    vlSelf->__VdfgTmp_haeeb6a10__0 = 0;
    vlSelf->__VdfgTmp_h65e1bffd__0 = 0;
    vlSelf->__Vdly__TestTopModule__DOT__rom_loader__DOT__address = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__TestTopModule__DOT__cpu__DOT__regs_clock__0 = VL_RAND_RESET_I(1);
}

VL_ATTR_COLD void VTestTopModule___024root___configure_coverage(VTestTopModule___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
