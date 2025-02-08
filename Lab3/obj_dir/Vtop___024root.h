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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        CData/*0:0*/ top__DOT__cpu__DOT__is_ecall;
        VL_IN8(reset,0,0);
        VL_OUT8(is_halted,0,0);
        CData/*0:0*/ top__DOT__reset;
        CData/*0:0*/ top__DOT__clk;
        CData/*0:0*/ top__DOT__is_halted;
        CData/*0:0*/ top__DOT__cpu__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__is_halted;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_write;
        CData/*0:0*/ top__DOT__cpu__DOT__alu_src;
        CData/*0:0*/ top__DOT__cpu__DOT__pc_write;
        CData/*0:0*/ top__DOT__cpu__DOT__pc_branch;
        CData/*0:0*/ top__DOT__cpu__DOT__pc_source;
        CData/*0:0*/ top__DOT__cpu__DOT__alu_src_a;
        CData/*1:0*/ top__DOT__cpu__DOT__alu_src_b;
        CData/*0:0*/ top__DOT__cpu__DOT__iord;
        CData/*0:0*/ top__DOT__cpu__DOT__irwrite;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_write;
        CData/*0:0*/ top__DOT__cpu__DOT__alu_pc;
        CData/*4:0*/ top__DOT__cpu__DOT__rs1;
        CData/*4:0*/ top__DOT__cpu__DOT__rs2;
        CData/*4:0*/ top__DOT__cpu__DOT__rd;
        CData/*3:0*/ top__DOT__cpu__DOT__alu_op;
        CData/*0:0*/ top__DOT__cpu__DOT__bcond;
        CData/*0:0*/ top__DOT__cpu__DOT__pc__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__pc__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__pc__DOT__pc_write;
        CData/*0:0*/ top__DOT__cpu__DOT__pc__DOT__pc_enable;
        CData/*0:0*/ top__DOT__cpu__DOT__pc_mux__DOT__pc_source;
        CData/*0:0*/ top__DOT__cpu__DOT__pc_mux__DOT__pc_branch;
        CData/*0:0*/ top__DOT__cpu__DOT__pc_mux__DOT__bcond;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_mux__DOT__iord;
        CData/*0:0*/ top__DOT__cpu__DOT__mem2reg_mux__DOT__mem_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_file__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_file__DOT__clk;
        CData/*4:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs1;
        CData/*4:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs2;
        CData/*4:0*/ top__DOT__cpu__DOT__reg_file__DOT__rd;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_file__DOT__write_enable;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_file__DOT__is_ecall;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_file__DOT__is_halted;
        CData/*0:0*/ top__DOT__cpu__DOT__alu_input1_mux__DOT__alu_src_a;
        CData/*1:0*/ top__DOT__cpu__DOT__alu_input2_mux__DOT__alu_src_b;
        CData/*0:0*/ top__DOT__cpu__DOT__memory__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__memory__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__memory__DOT__mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__memory__DOT__mem_write;
        CData/*6:0*/ top__DOT__cpu__DOT__control_unit__DOT__opcode;
        CData/*0:0*/ top__DOT__cpu__DOT__control_unit__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__control_unit__DOT__mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__control_unit__DOT__mem_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__control_unit__DOT__mem_write;
        CData/*0:0*/ top__DOT__cpu__DOT__control_unit__DOT__pc_source;
        CData/*0:0*/ top__DOT__cpu__DOT__control_unit__DOT__pc_branch;
        CData/*0:0*/ top__DOT__cpu__DOT__control_unit__DOT__pc_write;
        CData/*0:0*/ top__DOT__cpu__DOT__control_unit__DOT__alu_src_a;
        CData/*1:0*/ top__DOT__cpu__DOT__control_unit__DOT__alu_src_b;
        CData/*0:0*/ top__DOT__cpu__DOT__control_unit__DOT__reg_write;
        CData/*0:0*/ top__DOT__cpu__DOT__control_unit__DOT__iord;
        CData/*0:0*/ top__DOT__cpu__DOT__control_unit__DOT__irwrite;
    };
    struct {
        CData/*0:0*/ top__DOT__cpu__DOT__control_unit__DOT__alu_pc;
        CData/*0:0*/ top__DOT__cpu__DOT__control_unit__DOT__is_ecall;
        CData/*2:0*/ top__DOT__cpu__DOT__control_unit__DOT__curr_stage;
        CData/*2:0*/ top__DOT__cpu__DOT__control_unit__DOT__next_stage;
        CData/*6:0*/ top__DOT__cpu__DOT__immediate_generator__DOT__opcode;
        CData/*6:0*/ top__DOT__cpu__DOT__alu_control_unit__DOT__opcode;
        CData/*0:0*/ top__DOT__cpu__DOT__alu_control_unit__DOT__funct7;
        CData/*2:0*/ top__DOT__cpu__DOT__alu_control_unit__DOT__funct3;
        CData/*0:0*/ top__DOT__cpu__DOT__alu_control_unit__DOT__alu_pc;
        CData/*3:0*/ top__DOT__cpu__DOT__alu_control_unit__DOT__alu_op;
        CData/*3:0*/ top__DOT__cpu__DOT__alu__DOT__alu_op;
        CData/*0:0*/ top__DOT__cpu__DOT__alu__DOT__bcond;
        CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0;
        CData/*4:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v33;
        CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v33;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__cpu__DOT__is_ecall__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ top__DOT__cpu__DOT__imm_gen_out;
        IData/*31:0*/ top__DOT__cpu__DOT__current_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__next_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__rs1_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__rs2_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__rd_din;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_write_data;
        IData/*31:0*/ top__DOT__cpu__DOT__mem_out;
        IData/*31:0*/ top__DOT__cpu__DOT__addr;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_in_1;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_in_2;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_result;
        IData/*31:0*/ top__DOT__cpu__DOT__IR;
        IData/*31:0*/ top__DOT__cpu__DOT__MDR;
        IData/*31:0*/ top__DOT__cpu__DOT__A;
        IData/*31:0*/ top__DOT__cpu__DOT__B;
        IData/*31:0*/ top__DOT__cpu__DOT__ALUOut;
        IData/*31:0*/ top__DOT__cpu__DOT__pc__DOT__next_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__pc__DOT__current_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__pc_mux__DOT__ALUOut;
        IData/*31:0*/ top__DOT__cpu__DOT__pc_mux__DOT__alu_result;
        IData/*31:0*/ top__DOT__cpu__DOT__pc_mux__DOT__current_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__pc_mux__DOT__next_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__mem_mux__DOT__pc;
        IData/*31:0*/ top__DOT__cpu__DOT__mem_mux__DOT__ALUOut;
        IData/*31:0*/ top__DOT__cpu__DOT__mem_mux__DOT__addr;
        IData/*31:0*/ top__DOT__cpu__DOT__mem2reg_mux__DOT__MDR;
        IData/*31:0*/ top__DOT__cpu__DOT__mem2reg_mux__DOT__ALUOut;
        IData/*31:0*/ top__DOT__cpu__DOT__mem2reg_mux__DOT__rd_din;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__rd_din;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs1_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs2_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__i;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_input1_mux__DOT__PC;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_input1_mux__DOT__A;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_input1_mux__DOT__alu_in_1;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_input2_mux__DOT__B;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_input2_mux__DOT__imm_gen_out;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_input2_mux__DOT__alu_in_2;
        IData/*31:0*/ top__DOT__cpu__DOT__memory__DOT__addr;
        IData/*31:0*/ top__DOT__cpu__DOT__memory__DOT__din;
        IData/*31:0*/ top__DOT__cpu__DOT__memory__DOT__dout;
        IData/*31:0*/ top__DOT__cpu__DOT__memory__DOT__i;
    };
    struct {
        IData/*31:0*/ top__DOT__cpu__DOT__memory__DOT__mem_addr;
        IData/*31:0*/ top__DOT__cpu__DOT__immediate_generator__DOT__instr;
        IData/*31:0*/ top__DOT__cpu__DOT__immediate_generator__DOT__imm_gen_out;
        IData/*31:0*/ top__DOT__cpu__DOT__alu__DOT__alu_in_1;
        IData/*31:0*/ top__DOT__cpu__DOT__alu__DOT__alu_in_2;
        IData/*31:0*/ top__DOT__cpu__DOT__alu__DOT__alu_result;
        IData/*31:0*/ __Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v33;
        IData/*31:0*/ __VactIterCount;
        VL_OUT(print_reg[32],31,0);
        VlUnpacked<IData/*31:0*/, 32> top__DOT__print_reg;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__print_reg;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__reg_file__DOT__print_reg;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__reg_file__DOT__rf;
        VlUnpacked<IData/*31:0*/, 16384> top__DOT__cpu__DOT__memory__DOT__mem;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__memory__DOT__MEM_DEPTH = 0x00004000U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__alu__DOT__data_width = 0x00000020U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
