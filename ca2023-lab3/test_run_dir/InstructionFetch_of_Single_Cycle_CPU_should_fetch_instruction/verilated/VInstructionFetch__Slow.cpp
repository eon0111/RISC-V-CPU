// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VInstructionFetch.h for the primary calling header

#include "VInstructionFetch.h"
#include "VInstructionFetch__Syms.h"

//==========

VL_CTOR_IMP(VInstructionFetch) {
    VInstructionFetch__Syms* __restrict vlSymsp = __VlSymsp = new VInstructionFetch__Syms(this, name());
    VInstructionFetch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VInstructionFetch::__Vconfigure(VInstructionFetch__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    _configure_coverage(vlSymsp, first);
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VInstructionFetch::~VInstructionFetch() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

// Coverage
#ifndef CHISEL_VL_COVER_INSERT
#define CHISEL_VL_COVER_INSERT(countp, ...) \
    VL_IF_COVER(VerilatedCov::_inserti(countp); VerilatedCov::_insertf(__FILE__, __LINE__); \
                chisel_insertp("hier", name(), __VA_ARGS__))

#ifdef VM_COVERAGE
static void chisel_insertp(
  const char* key0, const char* valp0, const char* key1, const char* valp1,
  const char* key2, int lineno, const char* key3, int column,
  const char* key4, const std::string& hier_str,
  const char* key5, const char* valp5, const char* key6, const char* valp6,
  const char* key7 = nullptr, const char* valp7 = nullptr) {

    std::string val2str = vlCovCvtToStr(lineno);
    std::string val3str = vlCovCvtToStr(column);
    VerilatedCov::_insertp(
        key0, valp0, key1, valp1, key2, val2str.c_str(),
        key3, val3str.c_str(), key4, hier_str.c_str(),
        key5, valp5, key6, valp6, key7, valp7,
        // turn on per instance cover points
        "per_instance", "1");
}
#endif // VM_COVERAGE
#endif // CHISEL_VL_COVER_INSERT


void VInstructionFetch::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    CHISEL_VL_COVER_INSERT(count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

void VInstructionFetch::_settle__TOP__2(VInstructionFetch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionFetch::_settle__TOP__2\n"); );
    VInstructionFetch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_instruction = ((IData)(vlTOPp->io_instruction_valid)
                               ? vlTOPp->io_instruction_read_data
                               : 0x13U);
    vlTOPp->InstructionFetch__DOT___pc_T_1 = ((IData)(4U) 
                                              + vlTOPp->InstructionFetch__DOT__pc);
    vlTOPp->io_instruction_address = vlTOPp->InstructionFetch__DOT__pc;
}

void VInstructionFetch::_eval_initial(VInstructionFetch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionFetch::_eval_initial\n"); );
    VInstructionFetch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VInstructionFetch::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionFetch::final\n"); );
    // Variables
    VInstructionFetch__Syms* __restrict vlSymsp = this->__VlSymsp;
    VInstructionFetch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VInstructionFetch::_eval_settle(VInstructionFetch__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionFetch::_eval_settle\n"); );
    VInstructionFetch* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VInstructionFetch::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionFetch::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_jump_flag_id = VL_RAND_RESET_I(1);
    io_jump_address_id = VL_RAND_RESET_I(32);
    io_instruction_read_data = VL_RAND_RESET_I(32);
    io_instruction_valid = VL_RAND_RESET_I(1);
    io_instruction_address = VL_RAND_RESET_I(32);
    io_instruction = VL_RAND_RESET_I(32);
    InstructionFetch__DOT__pc = VL_RAND_RESET_I(32);
    InstructionFetch__DOT___pc_T_1 = VL_RAND_RESET_I(32);
}

void VInstructionFetch::_configure_coverage(VInstructionFetch__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionFetch::_configure_coverage\n"); );
    // Body
    if (false && vlSymsp && first) {}  // Prevent unused
}