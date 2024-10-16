// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VInstructionDecode.h for the primary calling header

#include "VInstructionDecode.h"
#include "VInstructionDecode__Syms.h"

//==========

VL_CTOR_IMP(VInstructionDecode) {
    VInstructionDecode__Syms* __restrict vlSymsp = __VlSymsp = new VInstructionDecode__Syms(this, name());
    VInstructionDecode* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VInstructionDecode::__Vconfigure(VInstructionDecode__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    _configure_coverage(vlSymsp, first);
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VInstructionDecode::~VInstructionDecode() {
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


void VInstructionDecode::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    CHISEL_VL_COVER_INSERT(count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

void VInstructionDecode::_eval_initial(VInstructionDecode__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionDecode::_eval_initial\n"); );
    VInstructionDecode* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VInstructionDecode::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionDecode::final\n"); );
    // Variables
    VInstructionDecode__Syms* __restrict vlSymsp = this->__VlSymsp;
    VInstructionDecode* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VInstructionDecode::_eval_settle(VInstructionDecode__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionDecode::_eval_settle\n"); );
    VInstructionDecode* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VInstructionDecode::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionDecode::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_instruction = VL_RAND_RESET_I(32);
    io_regs_reg1_read_address = VL_RAND_RESET_I(5);
    io_regs_reg2_read_address = VL_RAND_RESET_I(5);
    io_ex_immediate = VL_RAND_RESET_I(32);
    io_ex_aluop1_source = VL_RAND_RESET_I(1);
    io_ex_aluop2_source = VL_RAND_RESET_I(1);
    io_memory_read_enable = VL_RAND_RESET_I(1);
    io_memory_write_enable = VL_RAND_RESET_I(1);
    io_wb_reg_write_source = VL_RAND_RESET_I(2);
    io_reg_write_enable = VL_RAND_RESET_I(1);
    io_reg_write_address = VL_RAND_RESET_I(5);
    InstructionDecode__DOT___immediate_T_9 = VL_RAND_RESET_I(32);
    InstructionDecode__DOT___immediate_T_55 = VL_RAND_RESET_I(32);
}

void VInstructionDecode::_configure_coverage(VInstructionDecode__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VInstructionDecode::_configure_coverage\n"); );
    // Body
    if (false && vlSymsp && first) {}  // Prevent unused
}