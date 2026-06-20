// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestTopModule__Syms.h"


void VTestTopModule___024root__trace_chg_0_sub_0(VTestTopModule___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VTestTopModule___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root__trace_chg_0\n"); );
    // Init
    VTestTopModule___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTestTopModule___024root*>(voidSelf);
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTestTopModule___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VTestTopModule___024root__trace_chg_0_sub_0(VTestTopModule___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->TestTopModule__DOT__instruction_rom__DOT__mem[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->TestTopModule__DOT__instruction_rom__DOT__mem[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->TestTopModule__DOT__instruction_rom__DOT__mem[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->TestTopModule__DOT__instruction_rom__DOT__mem[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->TestTopModule__DOT__instruction_rom__DOT__mem[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->TestTopModule__DOT__instruction_rom__DOT__mem[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->TestTopModule__DOT__instruction_rom__DOT__mem[6]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+7,(vlSelf->TestTopModule__DOT__mem_io_bundle_address),32);
        bufp->chgIData(oldp+8,(vlSelf->TestTopModule__DOT__mem_io_bundle_write_data),32);
        bufp->chgBit(oldp+9,(vlSelf->TestTopModule__DOT__mem__DOT__mem_0_MPORT_en));
        bufp->chgBit(oldp+10,(((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
                                ? ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable)) 
                                   & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable) 
                                      & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3))
                                          ? (0U == 
                                             (3U & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result))
                                          : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13))))
                                : (6U >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address))));
        bufp->chgBit(oldp+11,(((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
                                ? ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable)) 
                                   & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable) 
                                      & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3))
                                          ? (1U == 
                                             (3U & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result))
                                          : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13))))
                                : (6U >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address))));
        bufp->chgBit(oldp+12,(((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
                                ? ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable)) 
                                   & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable) 
                                      & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3))
                                          ? (2U == 
                                             (3U & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result))
                                          : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16))))
                                : (6U >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address))));
        bufp->chgBit(oldp+13,(((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid)
                                ? ((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable)) 
                                   & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable) 
                                      & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3))
                                          ? (3U == 
                                             (3U & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result))
                                          : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16))))
                                : (6U >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address))));
        bufp->chgIData(oldp+14,((((IData)(vlSelf->TestTopModule__DOT__mem__DOT__io_bundle_read_data_hi) 
                                  << 0x10U) | (IData)(vlSelf->TestTopModule__DOT__mem__DOT__io_bundle_read_data_lo))),32);
        bufp->chgIData(oldp+15,(vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction_read_data),32);
        bufp->chgIData(oldp+16,(vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc),32);
        bufp->chgIData(oldp+17,(vlSelf->TestTopModule__DOT__rom_loader__DOT__address),32);
        bufp->chgIData(oldp+18,(((6U >= (7U & vlSelf->TestTopModule__DOT__rom_loader__DOT__address))
                                  ? vlSelf->TestTopModule__DOT__instruction_rom__DOT__mem
                                 [(7U & vlSelf->TestTopModule__DOT__rom_loader__DOT__address)]
                                  : 0U)),32);
        bufp->chgIData(oldp+19,(((6U >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)
                                  ? ((IData)(0x1000U) 
                                     + (IData)(((QData)((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__address)) 
                                                << 2U)))
                                  : 0U)),32);
        bufp->chgIData(oldp+20,(((6U >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)
                                  ? ((6U >= (7U & vlSelf->TestTopModule__DOT__rom_loader__DOT__address))
                                      ? vlSelf->TestTopModule__DOT__instruction_rom__DOT__mem
                                     [(7U & vlSelf->TestTopModule__DOT__rom_loader__DOT__address)]
                                      : 0U) : 0U)),32);
        bufp->chgBit(oldp+21,((6U >= vlSelf->TestTopModule__DOT__rom_loader__DOT__address)));
        bufp->chgIData(oldp+22,((0x1fffffffU & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result)),32);
        bufp->chgIData(oldp+23,(((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable)
                                  ? 0U : ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable)
                                           ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_22)
                                           : 0U))),32);
        bufp->chgBit(oldp+24,(((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable)) 
                               & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable))));
        bufp->chgBit(oldp+25,(((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable)) 
                               & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable) 
                                  & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3))
                                      ? (0U == (3U 
                                                & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result))
                                      : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13))))));
        bufp->chgBit(oldp+26,(((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable)) 
                               & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable) 
                                  & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3))
                                      ? (1U == (3U 
                                                & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result))
                                      : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_13))))));
        bufp->chgBit(oldp+27,(((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable)) 
                               & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable) 
                                  & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3))
                                      ? (2U == (3U 
                                                & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result))
                                      : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16))))));
        bufp->chgBit(oldp+28,(((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable)) 
                               & ((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable) 
                                  & ((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3))
                                      ? (3U == (3U 
                                                & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result))
                                      : (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___GEN_16))))));
        bufp->chgIData(oldp+29,(vlSelf->TestTopModule__DOT__cpu__DOT__mem_io_memory_bundle_read_data),32);
        bufp->chgBit(oldp+30,(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_enable));
        bufp->chgCData(oldp+31,(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__reg_write_address),5);
        bufp->chgIData(oldp+32,(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_write_data),32);
        bufp->chgCData(oldp+33,(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1),5);
        bufp->chgCData(oldp+34,((0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                          >> 0x14U))),5);
        bufp->chgBit(oldp+35,(vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch_io_jump_flag_id));
        bufp->chgIData(oldp+36,((vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_immediate 
                                 + ((0x67U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__opcode))
                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_rs1_src
                                     : vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__current_pc))),32);
        bufp->chgBit(oldp+37,(vlSelf->TestTopModule__DOT__cpu__DOT__hazard_unit__DOT__lw_stall));
        bufp->chgIData(oldp+38,(((IData)(4U) + vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc)),32);
        bufp->chgIData(oldp+39,((((~ (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__hazard_unit__DOT__lw_stall)) 
                                  & (IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid))
                                  ? vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction_read_data
                                  : (((IData)(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid) 
                                      & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__hazard_unit__DOT__lw_stall))
                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch_io_instruction_read_data
                                      : 0x13U))),32);
        bufp->chgIData(oldp+40,(vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction),32);
        bufp->chgCData(oldp+41,(((0x13U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                                  ? ((5U == (7U & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                   >> 0xcU)))
                                      ? ((0x40000000U 
                                          & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)
                                          ? 9U : 8U)
                                      : ((7U == (7U 
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
                                  : ((0x33U == (0x7fU 
                                                & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                                      ? ((5U == (7U 
                                                 & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                    >> 0xcU)))
                                          ? ((0x40000000U 
                                              & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)
                                              ? 9U : 8U)
                                          : ((7U == 
                                              (7U & 
                                               (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                >> 0xcU)))
                                              ? 7U : 
                                             ((6U == 
                                               (7U 
                                                & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                   >> 0xcU)))
                                               ? 6U
                                               : ((4U 
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
                                      : ((0x63U == 
                                          (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
                                         | ((3U == 
                                             (0x7fU 
                                              & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
                                            | ((0x23U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
                                               | ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
                                                  | ((0x67U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
                                                     | ((0x37U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
                                                        | (0x17U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))))))))))),4);
        bufp->chgIData(oldp+42,(((0x6fU == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                                  ? ((((vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                        >> 0x1fU) ? 0xfffU
                                        : 0U) << 0x14U) 
                                     | ((0xff000U & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction) 
                                        | ((0x800U 
                                            & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                 >> 0x14U)))))
                                  : ((0x17U == (0x7fU 
                                                & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                                      ? (0xfffff000U 
                                         & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)
                                      : ((0x37U == 
                                          (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                                          ? (0xfffff000U 
                                             & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)
                                          : ((0x63U 
                                              == (0x7fU 
                                                  & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                                              ? (((
                                                   (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                    >> 0x1fU)
                                                    ? 0xfffffU
                                                    : 0U) 
                                                  << 0xcU) 
                                                 | ((0x800U 
                                                     & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                        << 4U)) 
                                                    | ((0x7e0U 
                                                        & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                             >> 7U)))))
                                              : ((0x23U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                                                  ? 
                                                 ((((vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                     >> 0x1fU)
                                                     ? 0x1fffffU
                                                     : 0U) 
                                                   << 0xbU) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                         >> 0x14U)) 
                                                     | (0x1fU 
                                                        & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                           >> 7U))))
                                                  : 
                                                 ((0x67U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                                                   ? vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_7
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_7
                                                    : 
                                                   ((0x13U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT___immediate_T_7
                                                     : 
                                                    ((((vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                        >> 0x1fU)
                                                        ? 0xfffffU
                                                        : 0U) 
                                                      << 0xcU) 
                                                     | (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                        >> 0x14U))))))))))),32);
        bufp->chgBit(oldp+43,(((0x17U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
                               | ((0x63U == (0x7fU 
                                             & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
                                  | (0x6fU == (0x7fU 
                                               & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))))));
        bufp->chgBit(oldp+44,((0x33U != (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))));
        bufp->chgBit(oldp+45,((3U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))));
        bufp->chgBit(oldp+46,((0x23U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))));
        bufp->chgCData(oldp+47,(((((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT___io_wb_src_T_4) 
                                   | (0x37U == (0x7fU 
                                                & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))) 
                                  | (0x17U == (0x7fU 
                                               & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)))
                                  ? 0U : ((3U == (0x7fU 
                                                  & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))
                                           ? 1U : (
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
                                                    | (0x67U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)))
                                                    ? 2U
                                                    : 0U)))),2);
        bufp->chgBit(oldp+48,(((((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__id__DOT___io_wb_src_T_4) 
                                 | (3U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))) 
                                | ((0x17U == (0x7fU 
                                              & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
                                   | ((0x37U == (0x7fU 
                                                 & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)) 
                                      | (0x6fU == (0x7fU 
                                                   & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction))))) 
                               | (0x67U == (0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)))));
        bufp->chgCData(oldp+49,((0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                          >> 7U))),5);
        bufp->chgCData(oldp+50,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__opcode),7);
        bufp->chgCData(oldp+51,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__func3),7);
        bufp->chgIData(oldp+52,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__current_pc),32);
        bufp->chgIData(oldp+53,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__regs_read_data_1),32);
        bufp->chgIData(oldp+54,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__regs_read_data_2),32);
        bufp->chgIData(oldp+55,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_immediate),32);
        bufp->chgBit(oldp+56,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_aluop1_source));
        bufp->chgBit(oldp+57,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_aluop2_source));
        bufp->chgCData(oldp+58,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_alu_func),4);
        bufp->chgCData(oldp+59,(vlSelf->TestTopModule__DOT__cpu__DOT__ex_io_rs1_src),2);
        bufp->chgCData(oldp+60,(vlSelf->TestTopModule__DOT__cpu__DOT__ex_io_rs2_src),2);
        bufp->chgIData(oldp+61,(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result),32);
        bufp->chgIData(oldp+62,(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_rs2_src),32);
        bufp->chgIData(oldp+63,((IData)((0x7fffffffffffffffULL 
                                         & ((1U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__ex_alu_func))
                                             ? (QData)((IData)(
                                                               (vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6 
                                                                + vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7)))
                                             : ((2U 
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
                                                                              < vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7)))))))))))))))),32);
        bufp->chgIData(oldp+64,(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__regs_read_data_2),32);
        bufp->chgBit(oldp+65,(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable));
        bufp->chgBit(oldp+66,(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_write_enable));
        bufp->chgCData(oldp+67,(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3),3);
        bufp->chgIData(oldp+68,(((IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__memory_read_enable)
                                  ? ((2U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3))
                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__mem_io_memory_bundle_read_data
                                      : ((5U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__funct3))
                                          ? ((0U == 
                                              (3U & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result))
                                              ? (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT____VdfgTmp_h4562d974__0)
                                              : VL_SHIFTR_III(32,32,32, vlSelf->TestTopModule__DOT__cpu__DOT__mem_io_memory_bundle_read_data, 0x10U))
                                          : vlSelf->TestTopModule__DOT__cpu__DOT__mem__DOT___io_wb_memory_read_data_T_63))
                                  : 0U)),32);
        bufp->chgIData(oldp+69,(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__next_pc),32);
        bufp->chgIData(oldp+70,(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__alu_result),32);
        bufp->chgIData(oldp+71,(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__mem_read_data),32);
        bufp->chgCData(oldp+72,(vlSelf->TestTopModule__DOT__cpu__DOT__srMW__DOT__wb_src),2);
        bufp->chgCData(oldp+73,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__rs1),5);
        bufp->chgCData(oldp+74,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__rs2),5);
        bufp->chgCData(oldp+75,(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__reg_write_address),5);
        bufp->chgBit(oldp+76,(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__reg_write_enable));
        bufp->chgCData(oldp+77,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__reg_write_address),5);
        bufp->chgCData(oldp+78,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__wb_src),2);
        bufp->chgBit(oldp+79,(vlSelf->TestTopModule__DOT__cpu__DOT__hazard_unit_io_srDE_flush));
        bufp->chgIData(oldp+80,(vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__current_pc),32);
        bufp->chgIData(oldp+81,(vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__next_pc),32);
        bufp->chgBit(oldp+82,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__memory_read_enable));
        bufp->chgBit(oldp+83,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__memory_write_enable));
        bufp->chgBit(oldp+84,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__reg_write_enable));
        bufp->chgCData(oldp+85,((0x7fU & vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction)),7);
        bufp->chgCData(oldp+86,((7U & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                       >> 0xcU))),7);
        bufp->chgIData(oldp+87,(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__next_pc),32);
        bufp->chgCData(oldp+88,((7U & (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__srDE__DOT__func3))),3);
        bufp->chgIData(oldp+89,(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__next_pc),32);
        bufp->chgCData(oldp+90,(vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__wb_src),2);
        bufp->chgIData(oldp+91,(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_6),32);
        bufp->chgIData(oldp+92,(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu__DOT___io_result_T_7),32);
        bufp->chgIData(oldp+93,(vlSelf->TestTopModule__DOT__cpu__DOT__ex__DOT__alu_rs1_src),32);
        bufp->chgCData(oldp+94,((7U & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+95,((vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+96,((0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+97,((3U & vlSelf->TestTopModule__DOT__cpu__DOT__srEM__DOT__alu_result)),2);
        bufp->chgCData(oldp+98,((7U & vlSelf->TestTopModule__DOT__rom_loader__DOT__address)),3);
        bufp->chgSData(oldp+99,((0x1fffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_address 
                                            >> 2U))),13);
        bufp->chgCData(oldp+100,(vlSelf->TestTopModule__DOT__mem__DOT__mem_0_io_bundle_read_data_MPORT_data),8);
        bufp->chgSData(oldp+101,((0x1fffU & (vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                             >> 2U))),13);
        bufp->chgCData(oldp+102,(vlSelf->TestTopModule__DOT__mem__DOT__mem_0
                                 [(0x1fffU & (vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                              >> 2U))]),8);
        bufp->chgCData(oldp+103,((0xffU & vlSelf->TestTopModule__DOT__mem_io_bundle_write_data)),8);
        bufp->chgCData(oldp+104,(vlSelf->TestTopModule__DOT__mem__DOT__mem_1_io_bundle_read_data_MPORT_data),8);
        bufp->chgCData(oldp+105,(vlSelf->TestTopModule__DOT__mem__DOT__mem_1
                                 [(0x1fffU & (vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                              >> 2U))]),8);
        bufp->chgCData(oldp+106,((0xffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_write_data 
                                           >> 8U))),8);
        bufp->chgCData(oldp+107,(vlSelf->TestTopModule__DOT__mem__DOT__mem_2_io_bundle_read_data_MPORT_data),8);
        bufp->chgCData(oldp+108,(vlSelf->TestTopModule__DOT__mem__DOT__mem_2
                                 [(0x1fffU & (vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                              >> 2U))]),8);
        bufp->chgCData(oldp+109,((0xffU & (vlSelf->TestTopModule__DOT__mem_io_bundle_write_data 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+110,(vlSelf->TestTopModule__DOT__mem__DOT__mem_3_io_bundle_read_data_MPORT_data),8);
        bufp->chgCData(oldp+111,(vlSelf->TestTopModule__DOT__mem__DOT__mem_3
                                 [(0x1fffU & (vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                              >> 2U))]),8);
        bufp->chgCData(oldp+112,((vlSelf->TestTopModule__DOT__mem_io_bundle_write_data 
                                  >> 0x18U)),8);
        bufp->chgSData(oldp+113,(vlSelf->TestTopModule__DOT__mem__DOT__io_bundle_read_data_lo),16);
        bufp->chgSData(oldp+114,(vlSelf->TestTopModule__DOT__mem__DOT__io_bundle_read_data_hi),16);
        bufp->chgSData(oldp+115,(((vlSelf->TestTopModule__DOT__mem__DOT__mem_1
                                   [(0x1fffU & (vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                >> 2U))] 
                                   << 8U) | vlSelf->TestTopModule__DOT__mem__DOT__mem_0
                                  [(0x1fffU & (vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                               >> 2U))])),16);
        bufp->chgSData(oldp+116,(((vlSelf->TestTopModule__DOT__mem__DOT__mem_3
                                   [(0x1fffU & (vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                                >> 2U))] 
                                   << 8U) | vlSelf->TestTopModule__DOT__mem__DOT__mem_2
                                  [(0x1fffU & (vlSelf->TestTopModule__DOT__cpu__DOT__inst_fetch__DOT__pc 
                                               >> 2U))])),16);
        bufp->chgBit(oldp+117,(vlSelf->TestTopModule__DOT__rom_loader__DOT__valid));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+118,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_0),32);
        bufp->chgIData(oldp+119,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_1),32);
        bufp->chgIData(oldp+120,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_2),32);
        bufp->chgIData(oldp+121,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_3),32);
        bufp->chgIData(oldp+122,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_4),32);
        bufp->chgIData(oldp+123,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_5),32);
        bufp->chgIData(oldp+124,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_6),32);
        bufp->chgIData(oldp+125,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_7),32);
        bufp->chgIData(oldp+126,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_8),32);
        bufp->chgIData(oldp+127,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_9),32);
        bufp->chgIData(oldp+128,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_10),32);
        bufp->chgIData(oldp+129,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_11),32);
        bufp->chgIData(oldp+130,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_12),32);
        bufp->chgIData(oldp+131,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_13),32);
        bufp->chgIData(oldp+132,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_14),32);
        bufp->chgIData(oldp+133,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_15),32);
        bufp->chgIData(oldp+134,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_16),32);
        bufp->chgIData(oldp+135,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_17),32);
        bufp->chgIData(oldp+136,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_18),32);
        bufp->chgIData(oldp+137,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_19),32);
        bufp->chgIData(oldp+138,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_20),32);
        bufp->chgIData(oldp+139,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_21),32);
        bufp->chgIData(oldp+140,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_22),32);
        bufp->chgIData(oldp+141,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_23),32);
        bufp->chgIData(oldp+142,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_24),32);
        bufp->chgIData(oldp+143,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_25),32);
        bufp->chgIData(oldp+144,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_26),32);
        bufp->chgIData(oldp+145,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_27),32);
        bufp->chgIData(oldp+146,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_28),32);
        bufp->chgIData(oldp+147,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_29),32);
        bufp->chgIData(oldp+148,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_30),32);
        bufp->chgIData(oldp+149,(vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_31),32);
    }
    bufp->chgBit(oldp+150,(vlSelf->clock));
    bufp->chgBit(oldp+151,(vlSelf->reset));
    bufp->chgIData(oldp+152,(vlSelf->io_mem_debug_read_address),32);
    bufp->chgCData(oldp+153,(vlSelf->io_regs_debug_read_address),5);
    bufp->chgIData(oldp+154,(vlSelf->io_regs_debug_read_data),32);
    bufp->chgIData(oldp+155,(vlSelf->io_mem_debug_read_data),32);
    bufp->chgBit(oldp+156,(vlSelf->io_instruction_valid));
    bufp->chgBit(oldp+157,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->chgIData(oldp+158,(((0U == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                               ? 0U : ((0x1fU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_31
                                        : ((0x1eU == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_30
                                            : ((0x1dU 
                                                == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_29
                                                : (
                                                   (0x1cU 
                                                    == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_28
                                                    : 
                                                   ((0x1bU 
                                                     == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_27
                                                     : 
                                                    ((0x1aU 
                                                      == (IData)(vlSelf->TestTopModule__DOT__cpu__DOT__regs_io_read_address1))
                                                      ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_26
                                                      : 
                                                     ((0x19U 
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
                                                          : vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_117)))))))))))),32);
    bufp->chgIData(oldp+159,(((0U == (0x1fU & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                               >> 0x14U)))
                               ? 0U : ((0x1fU == (0x1fU 
                                                  & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                     >> 0x14U)))
                                        ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_31
                                        : ((0x1eU == 
                                            (0x1fU 
                                             & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                >> 0x14U)))
                                            ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_30
                                            : ((0x1dU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                    >> 0x14U)))
                                                ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_29
                                                : (
                                                   (0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                        >> 0x14U)))
                                                    ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->TestTopModule__DOT__cpu__DOT__srFD__DOT__instruction 
                                                         >> 0x14U)))
                                                     ? vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT__registers_27
                                                     : vlSelf->TestTopModule__DOT__cpu__DOT__regs__DOT___GEN_154))))))),32);
    bufp->chgSData(oldp+160,((0x1fffU & (vlSelf->io_mem_debug_read_address 
                                         >> 2U))),13);
    bufp->chgCData(oldp+161,(vlSelf->TestTopModule__DOT__mem__DOT__mem_0
                             [(0x1fffU & (vlSelf->io_mem_debug_read_address 
                                          >> 2U))]),8);
    bufp->chgCData(oldp+162,(vlSelf->TestTopModule__DOT__mem__DOT__mem_1
                             [(0x1fffU & (vlSelf->io_mem_debug_read_address 
                                          >> 2U))]),8);
    bufp->chgCData(oldp+163,(vlSelf->TestTopModule__DOT__mem__DOT__mem_2
                             [(0x1fffU & (vlSelf->io_mem_debug_read_address 
                                          >> 2U))]),8);
    bufp->chgCData(oldp+164,(vlSelf->TestTopModule__DOT__mem__DOT__mem_3
                             [(0x1fffU & (vlSelf->io_mem_debug_read_address 
                                          >> 2U))]),8);
    bufp->chgSData(oldp+165,(((vlSelf->TestTopModule__DOT__mem__DOT__mem_1
                               [(0x1fffU & (vlSelf->io_mem_debug_read_address 
                                            >> 2U))] 
                               << 8U) | vlSelf->TestTopModule__DOT__mem__DOT__mem_0
                              [(0x1fffU & (vlSelf->io_mem_debug_read_address 
                                           >> 2U))])),16);
    bufp->chgSData(oldp+166,(((vlSelf->TestTopModule__DOT__mem__DOT__mem_3
                               [(0x1fffU & (vlSelf->io_mem_debug_read_address 
                                            >> 2U))] 
                               << 8U) | vlSelf->TestTopModule__DOT__mem__DOT__mem_2
                              [(0x1fffU & (vlSelf->io_mem_debug_read_address 
                                           >> 2U))])),16);
}

void VTestTopModule___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestTopModule___024root__trace_cleanup\n"); );
    // Init
    VTestTopModule___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTestTopModule___024root*>(voidSelf);
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
