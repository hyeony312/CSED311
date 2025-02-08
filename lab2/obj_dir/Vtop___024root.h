// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ top__DOT__cpu__DOT__is_ecall;
    VL_IN8(reset,0,0);
    VL_OUT8(is_halted,0,0);
    CData/*0:0*/ top__DOT__cpu__DOT__is_jal;
    CData/*0:0*/ top__DOT__cpu__DOT__is_jalr;
    CData/*0:0*/ top__DOT__cpu__DOT__branch;
    CData/*0:0*/ top__DOT__cpu__DOT__mem_read;
    CData/*0:0*/ top__DOT__cpu__DOT__mem_to_reg;
    CData/*0:0*/ top__DOT__cpu__DOT__mem_write;
    CData/*0:0*/ top__DOT__cpu__DOT__alu_src;
    CData/*0:0*/ top__DOT__cpu__DOT__write_enable;
    CData/*0:0*/ top__DOT__cpu__DOT__pc_to_reg;
    CData/*3:0*/ top__DOT__cpu__DOT__alu_op;
    CData/*0:0*/ top__DOT__cpu__DOT__bcond;
    CData/*6:0*/ top__DOT__cpu__DOT__imm_gen__DOT__opcode;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__cpu__DOT__is_ecall__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ top__DOT__cpu__DOT__imm_gen_out;
    IData/*31:0*/ top__DOT__cpu__DOT__current_pc;
    IData/*31:0*/ top__DOT__cpu__DOT__next_pc;
    IData/*31:0*/ top__DOT__cpu__DOT__instr;
    IData/*31:0*/ top__DOT__cpu__DOT__rs1_dout;
    IData/*31:0*/ top__DOT__cpu__DOT__rs2_dout;
    IData/*31:0*/ top__DOT__cpu__DOT__alu_in_2;
    IData/*31:0*/ top__DOT__cpu__DOT__alu_result;
    IData/*31:0*/ top__DOT__cpu__DOT__imem__DOT__i;
    IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__i;
    IData/*31:0*/ top__DOT__cpu__DOT__dmem__DOT__i;
    IData/*31:0*/ __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v0;
    IData/*31:0*/ __VactIterCount;
    VL_OUT(print_reg[32],31,0);
    VlUnpacked<IData/*31:0*/, 1024> top__DOT__cpu__DOT__imem__DOT__mem;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__reg_file__DOT__rf;
    VlUnpacked<IData/*31:0*/, 16384> top__DOT__cpu__DOT__dmem__DOT__mem;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
