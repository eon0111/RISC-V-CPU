// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VInstructionFetch.h for the primary calling header

#include "VInstructionFetch.h"
#include "VInstructionFetch__Syms.h"

//==========

void VInstructionFetch::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VInstructionFetch::eval\n"); );
    VInstructionFetch__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VInstructionFetch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("InstructionFetch.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VInstructionFetch::_eval_initial_loop(VInstructionFetch__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("InstructionFetch.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VInstructionFetch::_combo__TOP__1(VInstructionFetch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionFetch::_combo__TOP__1\n"); );
    VInstructionFetch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_instruction = ((IData)(vlTOPp->io_instruction_valid)
                               ? vlTOPp->io_instruction_read_data
                               : 0x13U);
}

VL_INLINE_OPT void VInstructionFetch::_sequent__TOP__3(VInstructionFetch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionFetch::_sequent__TOP__3\n"); );
    VInstructionFetch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->InstructionFetch__DOT__pc = 0x1000U;
    } else {
        if (vlTOPp->io_instruction_valid) {
            vlTOPp->InstructionFetch__DOT__pc = ((IData)(vlTOPp->io_jump_flag_id)
                                                  ? vlTOPp->io_jump_address_id
                                                  : vlTOPp->InstructionFetch__DOT___pc_T_1);
        }
    }
    vlTOPp->InstructionFetch__DOT___pc_T_1 = ((IData)(4U) 
                                              + vlTOPp->InstructionFetch__DOT__pc);
    vlTOPp->io_instruction_address = vlTOPp->InstructionFetch__DOT__pc;
}

void VInstructionFetch::_eval(VInstructionFetch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionFetch::_eval\n"); );
    VInstructionFetch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VInstructionFetch::_change_request(VInstructionFetch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionFetch::_change_request\n"); );
    VInstructionFetch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VInstructionFetch::_change_request_1(VInstructionFetch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionFetch::_change_request_1\n"); );
    VInstructionFetch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VInstructionFetch::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionFetch::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((io_jump_flag_id & 0xfeU))) {
        Verilated::overWidthError("io_jump_flag_id");}
    if (VL_UNLIKELY((io_instruction_valid & 0xfeU))) {
        Verilated::overWidthError("io_instruction_valid");}
}
#endif  // VL_DEBUG
