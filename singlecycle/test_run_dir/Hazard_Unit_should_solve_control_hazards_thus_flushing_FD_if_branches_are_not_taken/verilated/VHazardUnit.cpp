// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VHazardUnit__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VHazardUnit::VHazardUnit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VHazardUnit__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_rs1_ex{vlSymsp->TOP.io_rs1_ex}
    , io_rs2_ex{vlSymsp->TOP.io_rs2_ex}
    , io_rd_mem{vlSymsp->TOP.io_rd_mem}
    , io_rd_wb{vlSymsp->TOP.io_rd_wb}
    , io_reg_wr_enable_mem{vlSymsp->TOP.io_reg_wr_enable_mem}
    , io_reg_wr_enable_wb{vlSymsp->TOP.io_reg_wr_enable_wb}
    , io_alu_rs1_src{vlSymsp->TOP.io_alu_rs1_src}
    , io_alu_rs2_src{vlSymsp->TOP.io_alu_rs2_src}
    , io_rs1_d{vlSymsp->TOP.io_rs1_d}
    , io_rs2_d{vlSymsp->TOP.io_rs2_d}
    , io_rd_ex{vlSymsp->TOP.io_rd_ex}
    , io_ex_regs_write_src{vlSymsp->TOP.io_ex_regs_write_src}
    , io_pc_stall{vlSymsp->TOP.io_pc_stall}
    , io_srFD_stall{vlSymsp->TOP.io_srFD_stall}
    , io_srDE_flush{vlSymsp->TOP.io_srDE_flush}
    , io_ex_jump_flag{vlSymsp->TOP.io_ex_jump_flag}
    , io_srFD_flush{vlSymsp->TOP.io_srFD_flush}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VHazardUnit::VHazardUnit(const char* _vcname__)
    : VHazardUnit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VHazardUnit::~VHazardUnit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VHazardUnit___024root___eval_debug_assertions(VHazardUnit___024root* vlSelf);
#endif  // VL_DEBUG
void VHazardUnit___024root___eval_static(VHazardUnit___024root* vlSelf);
void VHazardUnit___024root___eval_initial(VHazardUnit___024root* vlSelf);
void VHazardUnit___024root___eval_settle(VHazardUnit___024root* vlSelf);
void VHazardUnit___024root___eval(VHazardUnit___024root* vlSelf);

void VHazardUnit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VHazardUnit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VHazardUnit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VHazardUnit___024root___eval_static(&(vlSymsp->TOP));
        VHazardUnit___024root___eval_initial(&(vlSymsp->TOP));
        VHazardUnit___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VHazardUnit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VHazardUnit::eventsPending() { return false; }

uint64_t VHazardUnit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VHazardUnit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VHazardUnit___024root___eval_final(VHazardUnit___024root* vlSelf);

VL_ATTR_COLD void VHazardUnit::final() {
    VHazardUnit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VHazardUnit::hierName() const { return vlSymsp->name(); }
const char* VHazardUnit::modelName() const { return "VHazardUnit"; }
unsigned VHazardUnit::threads() const { return 1; }
void VHazardUnit::prepareClone() const { contextp()->prepareClone(); }
void VHazardUnit::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VHazardUnit::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VHazardUnit___024root__trace_decl_types(VerilatedVcd* tracep);

void VHazardUnit___024root__trace_init_top(VHazardUnit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VHazardUnit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VHazardUnit___024root*>(voidSelf);
    VHazardUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VHazardUnit___024root__trace_decl_types(tracep);
    VHazardUnit___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VHazardUnit___024root__trace_register(VHazardUnit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VHazardUnit::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VHazardUnit::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VHazardUnit___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
