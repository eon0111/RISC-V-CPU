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
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
}

extern const VlWide<16>/*511:0*/ VTestTopModule__ConstPool__CONST_h25bbce63_0;

VL_ATTR_COLD void VTestTopModule___024root___eval_initial__TOP(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_initial__TOP\n"); );
    // Body
    VL_READMEM_N(true, 32, 123, 0, VL_CVT_PACK_STR_NW(16, VTestTopModule__ConstPool__CONST_h25bbce63_0)
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
            VL_FATAL_MT("TestTopModule.sv", 2472, "", "Settle region did not converge.");
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
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_141;
    TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_141 = 0;
    IData/*31:0*/ TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_181;
    TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_181 = 0;
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
    // Body
    vlSelf->io_instruction_valid = vlSelf->TestTopModule__DOT__rom_loader__DOT__valid;
    vlSelf->TestTopModule__DOT__rom_loader__DOT___address_T_1 
        = ((IData)(1U) + vlSelf->TestTopModule__DOT__rom_loader__DOT__address);
    vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc_plus_four 
        = ((IData)(4U) + vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc);
    vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_7 
        = ((((vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
              >> 0x1fU) ? 0x1fffffU : 0U) << 0xbU) 
           | (0x7ffU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                        >> 0x14U)));
    vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT___io_wb_src_T_4 
        = ((0x33U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
           | (0x13U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)));
    vlSelf->TestTopModule__DOT__rom_loader__DOT___GEN_0 
        = ((0x7aU == vlSelf->TestTopModule__DOT__rom_loader__DOT__address) 
           | (IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid));
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
    vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1 
        = ((0x37U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
            ? 0U : (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                             >> 0xfU)));
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
    vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data 
        = ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__wb_src))
            ? vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__next_pc
            : ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__wb_src))
                ? vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__mem_read_data
                : vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__alu_result));
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
    vlSelf->TestTopModule__DOT__cpu__DOT__hazard_unit__DOT__lw_stall 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__wb_src) 
           & (((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__reg_write_address) 
               == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1)) 
              | ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__reg_write_address) 
                 == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                              >> 0x14U)))));
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
    if (vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en 
            = ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable)) 
               & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable));
        vlSelf->TestTopModule__DOT__mem_io_bundle_address 
            = (0x1fffffffU & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result);
    } else if ((0x7aU >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en = 1U;
        vlSelf->TestTopModule__DOT__mem_io_bundle_address 
            = ((IData)(0x1000U) + (IData)(((QData)((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__address)) 
                                           << 2U)));
    } else {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en = 0U;
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
    vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_aluop1_source)
            ? vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__current_pc
            : vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_rs1_src);
    vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_aluop2_source)
            ? vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_immediate
            : vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_rs2_src);
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
        vlSelf->TestTopModule__DOT__mem_io_bundle_write_data 
            = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable)
                ? 0U : ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable)
                         ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_22)
                         : 0U));
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
        vlSelf->TestTopModule__DOT__mem_io_bundle_write_data 
            = ((0x7aU >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)
                ? ((0x7aU >= (0x7fU & vlSelf->TestTopModule__DOT__rom_loader__DOT__address))
                    ? vlSelf->TestTopModule__DOT__instruction_rom__DOT__mem
                   [(0x7fU & vlSelf->TestTopModule__DOT__rom_loader__DOT__address)]
                    : 0U) : 0U);
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
    vlSelf->TestTopModule__DOT__cpu__DOT__hazard_unit_io_srDE_flush 
        = ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__hazard_unit__DOT__lw_stall) 
           | (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch_io_jump_flag_id));
}

VL_ATTR_COLD void VTestTopModule___024root___eval_stl(VTestTopModule___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VTestTopModule___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
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
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge clock)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge clock)\n");
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
    vlSelf->io_instruction_valid = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__mem_io_bundle_address = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__mem_io_bundle_write_data = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_0[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TestTopModule__DOT__mem__DOT__mem_0_io_bundle_read_data_MPORT_data = VL_RAND_RESET_I(8);
    vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_1[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_data = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_2[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TestTopModule__DOT__mem__DOT__mem_2_io_bundle_read_data_MPORT_data = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->TestTopModule__DOT__mem__DOT__mem_3[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_data = VL_RAND_RESET_I(8);
    vlSelf->TestTopModule__DOT__mem__DOT__io_bundle_read_data_lo = VL_RAND_RESET_I(16);
    vlSelf->TestTopModule__DOT__mem__DOT__io_bundle_read_data_hi = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 123; ++__Vi0) {
        vlSelf->TestTopModule__DOT__instruction_rom__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->TestTopModule__DOT__instruction_rom__DOT__initvar = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__rom_loader__DOT__address = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__rom_loader__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__rom_loader__DOT___address_T_1 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__rom_loader__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1 = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch_io_jump_flag_id = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction_read_data = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__ex_io_rs1_src = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__ex_io_rs2_src = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__mem_io_memory_bundle_read_data = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__hazard_unit_io_srDE_flush = VL_RAND_RESET_I(1);
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
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_117 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_154 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc_plus_four = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_7 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT___io_wb_src_T_4 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_rs1_src = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_rs2_src = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___io_wb_memory_read_data_T_63 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16 = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_22 = VL_RAND_RESET_Q(40);
    vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4562d974__0 = 0;
    vlSelf->TestTopModule__DOT__cpu__DOT__hazard_unit__DOT__lw_stall = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__func3 = VL_RAND_RESET_I(7);
    vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__regs_read_data_1 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__regs_read_data_2 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_immediate = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_alu_func = VL_RAND_RESET_I(4);
    vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_aluop1_source = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_aluop2_source = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__memory_read_enable = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__memory_write_enable = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__wb_src = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__reg_write_enable = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__reg_write_address = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__regs_read_data_2 = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__wb_src = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__reg_write_enable = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__reg_write_address = VL_RAND_RESET_I(5);
    vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__mem_read_data = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__wb_src = VL_RAND_RESET_I(2);
    vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_enable = VL_RAND_RESET_I(1);
    vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

VL_ATTR_COLD void VTestTopModule___024root___configure_coverage(VTestTopModule___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
}
