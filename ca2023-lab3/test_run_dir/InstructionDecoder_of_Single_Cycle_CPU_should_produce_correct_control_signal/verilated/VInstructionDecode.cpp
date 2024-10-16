// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VInstructionDecode.h for the primary calling header

#include "VInstructionDecode.h"
#include "VInstructionDecode__Syms.h"

//==========

void VInstructionDecode::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VInstructionDecode::eval\n"); );
    VInstructionDecode__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VInstructionDecode* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("InstructionDecode.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VInstructionDecode::_eval_initial_loop(VInstructionDecode__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("InstructionDecode.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VInstructionDecode::_combo__TOP__1(VInstructionDecode__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionDecode::_combo__TOP__1\n"); );
    VInstructionDecode* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_regs_reg1_read_address = ((0x37U == 
                                          (0x7fU & vlTOPp->io_instruction))
                                          ? 0U : (0x1fU 
                                                  & (vlTOPp->io_instruction 
                                                     >> 0xfU)));
    vlTOPp->io_regs_reg2_read_address = (0x1fU & (vlTOPp->io_instruction 
                                                  >> 0x14U));
    vlTOPp->io_ex_aluop1_source = (((0x17U == (0x7fU 
                                               & vlTOPp->io_instruction)) 
                                    | (0x63U == (0x7fU 
                                                 & vlTOPp->io_instruction))) 
                                   | (0x6fU == (0x7fU 
                                                & vlTOPp->io_instruction)));
    vlTOPp->io_ex_aluop2_source = (0x33U != (0x7fU 
                                             & vlTOPp->io_instruction));
    vlTOPp->io_memory_read_enable = (3U == (0x7fU & vlTOPp->io_instruction));
    vlTOPp->io_memory_write_enable = (0x23U == (0x7fU 
                                                & vlTOPp->io_instruction));
    vlTOPp->io_wb_reg_write_source = (((((0x33U == 
                                          (0x7fU & vlTOPp->io_instruction)) 
                                         | (0x13U == 
                                            (0x7fU 
                                             & vlTOPp->io_instruction))) 
                                        | (0x37U == 
                                           (0x7fU & vlTOPp->io_instruction))) 
                                       | (0x17U == 
                                          (0x7fU & vlTOPp->io_instruction)))
                                       ? 0U : ((3U 
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->io_instruction))
                                                ? 1U
                                                : (
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->io_instruction)) 
                                                    | (0x67U 
                                                       == 
                                                       (0x7fU 
                                                        & vlTOPp->io_instruction)))
                                                    ? 3U
                                                    : 0U)));
    vlTOPp->io_reg_write_enable = (((((((0x33U == (0x7fU 
                                                   & vlTOPp->io_instruction)) 
                                        | (0x13U == 
                                           (0x7fU & vlTOPp->io_instruction))) 
                                       | (3U == (0x7fU 
                                                 & vlTOPp->io_instruction))) 
                                      | (0x17U == (0x7fU 
                                                   & vlTOPp->io_instruction))) 
                                     | (0x37U == (0x7fU 
                                                  & vlTOPp->io_instruction))) 
                                    | (0x6fU == (0x7fU 
                                                 & vlTOPp->io_instruction))) 
                                   | (0x67U == (0x7fU 
                                                & vlTOPp->io_instruction)));
    vlTOPp->io_reg_write_address = (0x1fU & (vlTOPp->io_instruction 
                                             >> 7U));
    vlTOPp->InstructionDecode__DOT___immediate_T_9 
        = ((((0x80000000U & vlTOPp->io_instruction)
              ? 0x1fffffU : 0U) << 0xbU) | (0x7ffU 
                                            & (vlTOPp->io_instruction 
                                               >> 0x14U)));
    vlTOPp->InstructionDecode__DOT___immediate_T_55 
        = ((0x37U == (0x7fU & vlTOPp->io_instruction))
            ? (0xfffff000U & vlTOPp->io_instruction)
            : ((0x63U == (0x7fU & vlTOPp->io_instruction))
                ? ((((0x80000000U & vlTOPp->io_instruction)
                      ? 0xfffffU : 0U) << 0xcU) | (
                                                   (0x800U 
                                                    & (vlTOPp->io_instruction 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlTOPp->io_instruction 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlTOPp->io_instruction 
                                                            >> 7U)))))
                : ((0x23U == (0x7fU & vlTOPp->io_instruction))
                    ? ((((0x80000000U & vlTOPp->io_instruction)
                          ? 0x1fffffU : 0U) << 0xbU) 
                       | ((0x7e0U & (vlTOPp->io_instruction 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlTOPp->io_instruction 
                                                      >> 7U))))
                    : ((0x67U == (0x7fU & vlTOPp->io_instruction))
                        ? vlTOPp->InstructionDecode__DOT___immediate_T_9
                        : ((3U == (0x7fU & vlTOPp->io_instruction))
                            ? vlTOPp->InstructionDecode__DOT___immediate_T_9
                            : ((0x13U == (0x7fU & vlTOPp->io_instruction))
                                ? vlTOPp->InstructionDecode__DOT___immediate_T_9
                                : ((((0x80000000U & vlTOPp->io_instruction)
                                      ? 0xfffffU : 0U) 
                                    << 0xcU) | (0xfffU 
                                                & (vlTOPp->io_instruction 
                                                   >> 0x14U)))))))));
    vlTOPp->io_ex_immediate = ((0x6fU == (0x7fU & vlTOPp->io_instruction))
                                ? ((((0x80000000U & vlTOPp->io_instruction)
                                      ? 0xfffU : 0U) 
                                    << 0x14U) | ((0xff000U 
                                                  & vlTOPp->io_instruction) 
                                                 | ((0x800U 
                                                     & (vlTOPp->io_instruction 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlTOPp->io_instruction 
                                                          >> 0x14U)))))
                                : ((0x17U == (0x7fU 
                                              & vlTOPp->io_instruction))
                                    ? (0xfffff000U 
                                       & vlTOPp->io_instruction)
                                    : vlTOPp->InstructionDecode__DOT___immediate_T_55));
}

void VInstructionDecode::_eval(VInstructionDecode__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionDecode::_eval\n"); );
    VInstructionDecode* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VInstructionDecode::_change_request(VInstructionDecode__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionDecode::_change_request\n"); );
    VInstructionDecode* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VInstructionDecode::_change_request_1(VInstructionDecode__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionDecode::_change_request_1\n"); );
    VInstructionDecode* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VInstructionDecode::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionDecode::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
