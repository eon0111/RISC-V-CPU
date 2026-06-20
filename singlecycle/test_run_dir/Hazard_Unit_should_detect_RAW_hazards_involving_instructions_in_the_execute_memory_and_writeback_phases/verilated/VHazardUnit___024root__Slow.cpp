// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHazardUnit.h for the primary calling header

#include "VHazardUnit__pch.h"
#include "VHazardUnit__Syms.h"
#include "VHazardUnit___024root.h"

void VHazardUnit___024root___ctor_var_reset(VHazardUnit___024root* vlSelf);

VHazardUnit___024root::VHazardUnit___024root(VHazardUnit__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VHazardUnit___024root___ctor_var_reset(this);
}

void VHazardUnit___024root___configure_coverage(VHazardUnit___024root* vlSelf, bool first);

void VHazardUnit___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
    VHazardUnit___024root___configure_coverage(this, first);
}

VHazardUnit___024root::~VHazardUnit___024root() {
}

// Coverage
void VHazardUnit___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string{name()} + hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}
