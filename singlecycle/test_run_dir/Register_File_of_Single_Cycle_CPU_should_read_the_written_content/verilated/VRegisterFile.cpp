// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRegisterFile__pch.h"

//============================================================
// Constructors

VRegisterFile::VRegisterFile(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VRegisterFile__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_write_enable{vlSymsp->TOP.io_write_enable}
    , io_write_address{vlSymsp->TOP.io_write_address}
    , io_read_address1{vlSymsp->TOP.io_read_address1}
    , io_read_address2{vlSymsp->TOP.io_read_address2}
    , io_debug_read_address{vlSymsp->TOP.io_debug_read_address}
    , io_write_data{vlSymsp->TOP.io_write_data}
    , io_read_data1{vlSymsp->TOP.io_read_data1}
    , io_read_data2{vlSymsp->TOP.io_read_data2}
    , io_debug_read_data{vlSymsp->TOP.io_debug_read_data}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VRegisterFile::VRegisterFile(const char* _vcname__)
    : VRegisterFile(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VRegisterFile::~VRegisterFile() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VRegisterFile___024root___eval_debug_assertions(VRegisterFile___024root* vlSelf);
#endif  // VL_DEBUG
void VRegisterFile___024root___eval_static(VRegisterFile___024root* vlSelf);
void VRegisterFile___024root___eval_initial(VRegisterFile___024root* vlSelf);
void VRegisterFile___024root___eval_settle(VRegisterFile___024root* vlSelf);
void VRegisterFile___024root___eval(VRegisterFile___024root* vlSelf);

void VRegisterFile::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRegisterFile::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRegisterFile___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VRegisterFile___024root___eval_static(&(vlSymsp->TOP));
        VRegisterFile___024root___eval_initial(&(vlSymsp->TOP));
        VRegisterFile___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VRegisterFile___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VRegisterFile::eventsPending() { return false; }

uint64_t VRegisterFile::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VRegisterFile::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VRegisterFile___024root___eval_final(VRegisterFile___024root* vlSelf);

VL_ATTR_COLD void VRegisterFile::final() {
    VRegisterFile___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VRegisterFile::hierName() const { return vlSymsp->name(); }
const char* VRegisterFile::modelName() const { return "VRegisterFile"; }
unsigned VRegisterFile::threads() const { return 1; }
void VRegisterFile::prepareClone() const { contextp()->prepareClone(); }
void VRegisterFile::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void VRegisterFile::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'VRegisterFile::trace()' called on model that was Verilated without --trace option");
}
