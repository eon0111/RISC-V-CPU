// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExecute.h for the primary calling header

#include "VExecute.h"
#include "VExecute__Syms.h"

//==========

void VExecute::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VExecute::eval\n"); );
    VExecute__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VExecute* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Execute.sv", 61, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VExecute::_eval_initial_loop(VExecute__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Execute.sv", 61, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VExecute::_combo__TOP__1(VExecute__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExecute::_combo__TOP__1\n"); );
    VExecute* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_if_jump_flag = (((0x6fU == (0x7fU & vlTOPp->io_instruction)) 
                                | (0x67U == (0x7fU 
                                             & vlTOPp->io_instruction))) 
                               | ((0x63U == (0x7fU 
                                             & vlTOPp->io_instruction)) 
                                  & ((7U == (7U & (vlTOPp->io_instruction 
                                                   >> 0xcU)))
                                      ? (vlTOPp->io_reg1_data 
                                         >= vlTOPp->io_reg2_data)
                                      : ((6U == (7U 
                                                 & (vlTOPp->io_instruction 
                                                    >> 0xcU)))
                                          ? (vlTOPp->io_reg1_data 
                                             < vlTOPp->io_reg2_data)
                                          : ((5U == 
                                              (7U & 
                                               (vlTOPp->io_instruction 
                                                >> 0xcU)))
                                              ? VL_GTES_III(1,32,32, vlTOPp->io_reg1_data, vlTOPp->io_reg2_data)
                                              : ((4U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->io_instruction 
                                                      >> 0xcU)))
                                                  ? 
                                                 VL_LTS_III(1,32,32, vlTOPp->io_reg1_data, vlTOPp->io_reg2_data)
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->io_instruction 
                                                       >> 0xcU)))
                                                   ? 
                                                  (vlTOPp->io_reg1_data 
                                                   != vlTOPp->io_reg2_data)
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->io_instruction 
                                                        >> 0xcU))) 
                                                   & (vlTOPp->io_reg1_data 
                                                      == vlTOPp->io_reg2_data)))))))));
    vlTOPp->io_if_jump_address = (vlTOPp->io_immediate 
                                  + ((0x67U == (0x7fU 
                                                & vlTOPp->io_instruction))
                                      ? vlTOPp->io_reg1_data
                                      : vlTOPp->io_instruction_address));
    vlTOPp->Execute__DOT__alu_io_op1 = ((IData)(vlTOPp->io_aluop1_source)
                                         ? vlTOPp->io_instruction_address
                                         : vlTOPp->io_reg1_data);
    vlTOPp->Execute__DOT__alu_io_op2 = ((IData)(vlTOPp->io_aluop2_source)
                                         ? vlTOPp->io_immediate
                                         : vlTOPp->io_reg2_data);
    vlTOPp->Execute__DOT__alu_ctrl__DOT___GEN_7 = (
                                                   (0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->io_instruction))
                                                    ? 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->io_instruction 
                                                         >> 0xcU)))
                                                     ? 
                                                    ((0x40000000U 
                                                      & vlTOPp->io_instruction)
                                                      ? 9U
                                                      : 8U)
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->io_instruction 
                                                          >> 0xcU)))
                                                      ? 7U
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & (vlTOPp->io_instruction 
                                                           >> 0xcU)))
                                                       ? 6U
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (7U 
                                                         & (vlTOPp->io_instruction 
                                                            >> 0xcU)))
                                                        ? 5U
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (7U 
                                                          & (vlTOPp->io_instruction 
                                                             >> 0xcU)))
                                                         ? 0xaU
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (7U 
                                                           & (vlTOPp->io_instruction 
                                                              >> 0xcU)))
                                                          ? 4U
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (vlTOPp->io_instruction 
                                                               >> 0xcU)))
                                                           ? 3U
                                                           : 
                                                          ((0x40000000U 
                                                            & vlTOPp->io_instruction)
                                                            ? 2U
                                                            : 1U))))))))
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->io_instruction)) 
                                                    | ((3U 
                                                        == 
                                                        (0x7fU 
                                                         & vlTOPp->io_instruction)) 
                                                       | ((0x23U 
                                                           == 
                                                           (0x7fU 
                                                            & vlTOPp->io_instruction)) 
                                                          | ((0x6fU 
                                                              == 
                                                              (0x7fU 
                                                               & vlTOPp->io_instruction)) 
                                                             | ((0x67U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlTOPp->io_instruction)) 
                                                                | ((0x37U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlTOPp->io_instruction)) 
                                                                   | (0x17U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlTOPp->io_instruction)))))))));
    vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct = (
                                                   (0x13U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->io_instruction))
                                                    ? 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->io_instruction 
                                                         >> 0xcU)))
                                                     ? 
                                                    ((0x40000000U 
                                                      & vlTOPp->io_instruction)
                                                      ? 9U
                                                      : 8U)
                                                     : 
                                                    ((7U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->io_instruction 
                                                          >> 0xcU)))
                                                      ? 7U
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & (vlTOPp->io_instruction 
                                                           >> 0xcU)))
                                                       ? 6U
                                                       : 
                                                      ((4U 
                                                        == 
                                                        (7U 
                                                         & (vlTOPp->io_instruction 
                                                            >> 0xcU)))
                                                        ? 5U
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (7U 
                                                          & (vlTOPp->io_instruction 
                                                             >> 0xcU)))
                                                         ? 0xaU
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (7U 
                                                           & (vlTOPp->io_instruction 
                                                              >> 0xcU)))
                                                          ? 4U
                                                          : 
                                                         ((1U 
                                                           == 
                                                           (7U 
                                                            & (vlTOPp->io_instruction 
                                                               >> 0xcU)))
                                                           ? 3U
                                                           : 1U)))))))
                                                    : (IData)(vlTOPp->Execute__DOT__alu_ctrl__DOT___GEN_7));
    vlTOPp->io_mem_alu_result = (IData)((0x7fffffffffffffffULL 
                                         & ((1U == (IData)(vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct))
                                             ? (QData)((IData)(
                                                               (vlTOPp->Execute__DOT__alu_io_op1 
                                                                + vlTOPp->Execute__DOT__alu_io_op2)))
                                             : ((2U 
                                                 == (IData)(vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct))
                                                 ? (QData)((IData)(
                                                                   (vlTOPp->Execute__DOT__alu_io_op1 
                                                                    - vlTOPp->Execute__DOT__alu_io_op2)))
                                                 : 
                                                ((3U 
                                                  == (IData)(vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct))
                                                  ? 
                                                 ((QData)((IData)(vlTOPp->Execute__DOT__alu_io_op1)) 
                                                  << 
                                                  (0x1fU 
                                                   & vlTOPp->Execute__DOT__alu_io_op2))
                                                  : (QData)((IData)(
                                                                    ((4U 
                                                                      == (IData)(vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct))
                                                                      ? 
                                                                     VL_LTS_III(32,32,32, vlTOPp->Execute__DOT__alu_io_op1, vlTOPp->Execute__DOT__alu_io_op2)
                                                                      : 
                                                                     ((5U 
                                                                       == (IData)(vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct))
                                                                       ? 
                                                                      (vlTOPp->Execute__DOT__alu_io_op1 
                                                                       ^ vlTOPp->Execute__DOT__alu_io_op2)
                                                                       : 
                                                                      ((6U 
                                                                        == (IData)(vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct))
                                                                        ? 
                                                                       (vlTOPp->Execute__DOT__alu_io_op1 
                                                                        | vlTOPp->Execute__DOT__alu_io_op2)
                                                                        : 
                                                                       ((7U 
                                                                         == (IData)(vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct))
                                                                         ? 
                                                                        (vlTOPp->Execute__DOT__alu_io_op1 
                                                                         & vlTOPp->Execute__DOT__alu_io_op2)
                                                                         : 
                                                                        ((8U 
                                                                          == (IData)(vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct))
                                                                          ? 
                                                                         (vlTOPp->Execute__DOT__alu_io_op1 
                                                                          >> 
                                                                          (0x1fU 
                                                                           & vlTOPp->Execute__DOT__alu_io_op2))
                                                                          : 
                                                                         ((9U 
                                                                           == (IData)(vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct))
                                                                           ? 
                                                                          VL_SHIFTRS_III(32,32,5, vlTOPp->Execute__DOT__alu_io_op1, 
                                                                                (0x1fU 
                                                                                & vlTOPp->Execute__DOT__alu_io_op2))
                                                                           : 
                                                                          ((0xaU 
                                                                            == (IData)(vlTOPp->Execute__DOT__alu_ctrl_io_alu_funct)) 
                                                                           & (vlTOPp->Execute__DOT__alu_io_op1 
                                                                              < vlTOPp->Execute__DOT__alu_io_op2)))))))))))))));
}

void VExecute::_eval(VExecute__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExecute::_eval\n"); );
    VExecute* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VExecute::_change_request(VExecute__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExecute::_change_request\n"); );
    VExecute* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VExecute::_change_request_1(VExecute__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExecute::_change_request_1\n"); );
    VExecute* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VExecute::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExecute::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((io_aluop1_source & 0xfeU))) {
        Verilated::overWidthError("io_aluop1_source");}
    if (VL_UNLIKELY((io_aluop2_source & 0xfeU))) {
        Verilated::overWidthError("io_aluop2_source");}
}
#endif  // VL_DEBUG
