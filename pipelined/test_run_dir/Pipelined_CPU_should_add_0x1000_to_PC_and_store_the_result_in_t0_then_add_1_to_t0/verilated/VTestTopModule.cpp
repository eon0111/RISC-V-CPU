// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTestTopModule__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VTestTopModule::VTestTopModule(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VTestTopModule__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_regs_debug_read_address{vlSymsp->TOP.io_regs_debug_read_address}
    , io_instruction_valid{vlSymsp->TOP.io_instruction_valid}
    , io_mem_debug_read_address{vlSymsp->TOP.io_mem_debug_read_address}
    , io_regs_debug_read_data{vlSymsp->TOP.io_regs_debug_read_data}
    , io_mem_debug_read_data{vlSymsp->TOP.io_mem_debug_read_data}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VTestTopModule::VTestTopModule(const char* _vcname__)
    : VTestTopModule(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VTestTopModule::~VTestTopModule() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VTestTopModule___024root___eval_debug_assertions(VTestTopModule___024root* vlSelf);
#endif  // VL_DEBUG
void VTestTopModule___024root___eval_static(VTestTopModule___024root* vlSelf);
void VTestTopModule___024root___eval_initial(VTestTopModule___024root* vlSelf);
void VTestTopModule___024root___eval_settle(VTestTopModule___024root* vlSelf);
void VTestTopModule___024root___eval(VTestTopModule___024root* vlSelf);

void VTestTopModule::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTestTopModule::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTestTopModule___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VTestTopModule___024root___eval_static(&(vlSymsp->TOP));
        VTestTopModule___024root___eval_initial(&(vlSymsp->TOP));
        VTestTopModule___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VTestTopModule___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VTestTopModule::eventsPending() { return false; }

uint64_t VTestTopModule::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VTestTopModule::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VTestTopModule___024root___eval_final(VTestTopModule___024root* vlSelf);

VL_ATTR_COLD void VTestTopModule::final() {
    VTestTopModule___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VTestTopModule::hierName() const { return vlSymsp->name(); }
const char* VTestTopModule::modelName() const { return "VTestTopModule"; }
unsigned VTestTopModule::threads() const { return 1; }
void VTestTopModule::prepareClone() const { contextp()->prepareClone(); }
void VTestTopModule::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VTestTopModule::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VTestTopModule___024root__trace_decl_types(VerilatedVcd* tracep);

void VTestTopModule___024root__trace_init_top(VTestTopModule___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTestTopModule___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTestTopModule___024root*>(voidSelf);
    VTestTopModule__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VTestTopModule___024root__trace_decl_types(tracep);
    VTestTopModule___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VTestTopModule___024root__trace_register(VTestTopModule___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTestTopModule::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VTestTopModule::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VTestTopModule___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
