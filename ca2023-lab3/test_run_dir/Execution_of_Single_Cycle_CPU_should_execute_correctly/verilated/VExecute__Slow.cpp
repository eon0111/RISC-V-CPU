// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VExecute.h for the primary calling header

#include "VExecute.h"
#include "VExecute__Syms.h"

//==========

VL_CTOR_IMP(VExecute) {
    VExecute__Syms* __restrict vlSymsp = __VlSymsp = new VExecute__Syms(this, name());
    VExecute* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VExecute::__Vconfigure(VExecute__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    _configure_coverage(vlSymsp, first);
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VExecute::~VExecute() {
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


void VExecute::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    CHISEL_VL_COVER_INSERT(count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

void VExecute::_eval_initial(VExecute__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExecute::_eval_initial\n"); );
    VExecute* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VExecute::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExecute::final\n"); );
    // Variables
    VExecute__Syms* __restrict vlSymsp = this->__VlSymsp;
    VExecute* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VExecute::_eval_settle(VExecute__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExecute::_eval_settle\n"); );
    VExecute* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VExecute::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExecute::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_instruction = VL_RAND_RESET_I(32);
    io_instruction_address = VL_RAND_RESET_I(32);
    io_reg1_data = VL_RAND_RESET_I(32);
    io_reg2_data = VL_RAND_RESET_I(32);
    io_immediate = VL_RAND_RESET_I(32);
    io_aluop1_source = VL_RAND_RESET_I(1);
    io_aluop2_source = VL_RAND_RESET_I(1);
    io_mem_alu_result = VL_RAND_RESET_I(32);
    io_if_jump_flag = VL_RAND_RESET_I(1);
    io_if_jump_address = VL_RAND_RESET_I(32);
    Execute__DOT__alu_io_op1 = VL_RAND_RESET_I(32);
    Execute__DOT__alu_io_op2 = VL_RAND_RESET_I(32);
    Execute__DOT__alu_ctrl_io_alu_funct = VL_RAND_RESET_I(4);
    Execute__DOT__alu_ctrl__DOT___GEN_7 = VL_RAND_RESET_I(4);
}

void VExecute::_configure_coverage(VExecute__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VExecute::_configure_coverage\n"); );
    // Body
    if (false && vlSymsp && first) {}  // Prevent unused
}