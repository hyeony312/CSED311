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
        CData/*1:0*/ top__DOT__cpu__DOT__pc_src;
        CData/*4:0*/ top__DOT__cpu__DOT__rs1_in;
        CData/*0:0*/ top__DOT__cpu__DOT__bubble;
        CData/*0:0*/ top__DOT__cpu__DOT__pc_write;
        CData/*0:0*/ top__DOT__cpu__DOT__stall;
        CData/*0:0*/ top__DOT__cpu__DOT__IF_ID_write;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_write;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_write;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__alu_src;
        CData/*0:0*/ top__DOT__cpu__DOT__halt_id;
        CData/*0:0*/ top__DOT__cpu__DOT__is_branch;
        CData/*0:0*/ top__DOT__cpu__DOT__is_jal;
        CData/*0:0*/ top__DOT__cpu__DOT__is_jalr;
        CData/*0:0*/ top__DOT__cpu__DOT__bcond;
        CData/*3:0*/ top__DOT__cpu__DOT__alu_op;
        CData/*1:0*/ top__DOT__cpu__DOT__forward_a;
        CData/*1:0*/ top__DOT__cpu__DOT__forward_b;
        CData/*0:0*/ top__DOT__cpu__DOT__is_ready;
        CData/*0:0*/ top__DOT__cpu__DOT__is_output_valid;
        CData/*0:0*/ top__DOT__cpu__DOT__is_hit;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_rw;
        CData/*0:0*/ top__DOT__cpu__DOT__is_input_valid;
        CData/*0:0*/ top__DOT__cpu__DOT__cache_stall;
        CData/*0:0*/ top__DOT__cpu__DOT__IF_ID_bubble;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_alu_op;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_alu_src;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_mem_write;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_mem_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_reg_write;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_is_halted;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_is_branch;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_is_jal;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_is_jalr;
        CData/*4:0*/ top__DOT__cpu__DOT__ID_EX_rd;
        CData/*4:0*/ top__DOT__cpu__DOT__ID_EX_rs1;
        CData/*4:0*/ top__DOT__cpu__DOT__ID_EX_rs2;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_mem_rw;
        CData/*0:0*/ top__DOT__cpu__DOT__ID_EX_is_input_valid;
        CData/*0:0*/ top__DOT__cpu__DOT__EX_MEM_mem_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__EX_MEM_reg_write;
        CData/*0:0*/ top__DOT__cpu__DOT__EX_MEM_is_halted;
        CData/*0:0*/ top__DOT__cpu__DOT__EX_MEM_is_jal;
        CData/*0:0*/ top__DOT__cpu__DOT__EX_MEM_is_jalr;
        CData/*4:0*/ top__DOT__cpu__DOT__EX_MEM_rd;
        CData/*0:0*/ top__DOT__cpu__DOT__EX_MEM_mem_rw;
        CData/*0:0*/ top__DOT__cpu__DOT__EX_MEM_is_input_valid;
        CData/*0:0*/ top__DOT__cpu__DOT__MEM_WB_mem_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__MEM_WB_reg_write;
        CData/*0:0*/ top__DOT__cpu__DOT__MEM_WB_is_halted;
        CData/*0:0*/ top__DOT__cpu__DOT__MEM_WB_is_jal;
        CData/*0:0*/ top__DOT__cpu__DOT__MEM_WB_is_jalr;
    };
    struct {
        CData/*4:0*/ top__DOT__cpu__DOT__MEM_WB_rd;
        CData/*0:0*/ top__DOT__cpu__DOT__halt_flag;
        CData/*1:0*/ top__DOT__cpu__DOT__pc_mux__DOT__pc_src;
        CData/*0:0*/ top__DOT__cpu__DOT__pc__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__pc__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__pc__DOT__pc_write;
        CData/*0:0*/ top__DOT__cpu__DOT__pc__DOT__cache_stall;
        CData/*0:0*/ top__DOT__cpu__DOT__imem__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__imem__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__eq_mux__DOT__is_ecall;
        CData/*4:0*/ top__DOT__cpu__DOT__eq_mux__DOT__rs1;
        CData/*4:0*/ top__DOT__cpu__DOT__eq_mux__DOT__rs1_in;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_file__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_file__DOT__clk;
        CData/*4:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs1;
        CData/*4:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs2;
        CData/*4:0*/ top__DOT__cpu__DOT__reg_file__DOT__rd;
        CData/*0:0*/ top__DOT__cpu__DOT__reg_file__DOT__write_enable;
        CData/*6:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__part_of_inst;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__stall;
        CData/*1:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__pc_src;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__bubble;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__is_jal;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__is_jalr;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__branch;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__mem_to_reg;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__mem_write;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__alu_src;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__reg_write;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__mem_rw;
        CData/*0:0*/ top__DOT__cpu__DOT__ctrl_unit__DOT__is_input_valid;
        CData/*0:0*/ top__DOT__cpu__DOT__hazard__DOT__ID_EX_mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__hazard__DOT__ID_EX_reg_write;
        CData/*0:0*/ top__DOT__cpu__DOT__hazard__DOT__EX_MEM_reg_write;
        CData/*4:0*/ top__DOT__cpu__DOT__hazard__DOT__id_rs1;
        CData/*4:0*/ top__DOT__cpu__DOT__hazard__DOT__id_rs2;
        CData/*4:0*/ top__DOT__cpu__DOT__hazard__DOT__ex_rd;
        CData/*4:0*/ top__DOT__cpu__DOT__hazard__DOT__mem_rd;
        CData/*6:0*/ top__DOT__cpu__DOT__hazard__DOT__opcode;
        CData/*0:0*/ top__DOT__cpu__DOT__hazard__DOT__stall;
        CData/*0:0*/ top__DOT__cpu__DOT__hazard__DOT__pc_write;
        CData/*0:0*/ top__DOT__cpu__DOT__hazard__DOT__IF_ID_write;
        CData/*0:0*/ top__DOT__cpu__DOT__halt__DOT__is_ecall;
        CData/*0:0*/ top__DOT__cpu__DOT__halt__DOT__is_halted;
        CData/*6:0*/ top__DOT__cpu__DOT__imm_gen__DOT__opcode;
        CData/*6:0*/ top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode;
        CData/*0:0*/ top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct7;
        CData/*2:0*/ top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3;
        CData/*3:0*/ top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op;
        CData/*1:0*/ top__DOT__cpu__DOT__forward_a_mux__DOT__forward_a;
        CData/*1:0*/ top__DOT__cpu__DOT__forward_b_mux__DOT__forward_b;
        CData/*0:0*/ top__DOT__cpu__DOT__Imm_mux__DOT__alu_src;
        CData/*3:0*/ top__DOT__cpu__DOT__alu__DOT__alu_op;
        CData/*0:0*/ top__DOT__cpu__DOT__alu__DOT__bcond;
        CData/*0:0*/ top__DOT__cpu__DOT__branch_bubble_unit__DOT__ID_EX_is_branch;
        CData/*0:0*/ top__DOT__cpu__DOT__branch_bubble_unit__DOT__ID_EX_is_jal;
        CData/*0:0*/ top__DOT__cpu__DOT__branch_bubble_unit__DOT__ID_EX_is_jalr;
        CData/*0:0*/ top__DOT__cpu__DOT__branch_bubble_unit__DOT__bcond;
        CData/*0:0*/ top__DOT__cpu__DOT__branch_bubble_unit__DOT__bubble;
        CData/*1:0*/ top__DOT__cpu__DOT__branch_bubble_unit__DOT__pc_src;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__clk;
    };
    struct {
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__is_input_valid;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__mem_rw;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__is_ready;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__is_output_valid;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__is_hit;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__is_data_mem_ready;
        CData/*3:0*/ top__DOT__cpu__DOT__cache__DOT__idx;
        CData/*1:0*/ top__DOT__cpu__DOT__cache__DOT__offset;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__mem_output_valid;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__mem_input_valid;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT___mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT___mem_write;
        CData/*2:0*/ top__DOT__cpu__DOT__cache__DOT__current_state;
        CData/*2:0*/ top__DOT__cpu__DOT__cache__DOT__next_state;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__cache_update;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__cache_update_dirty;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__cache_update_valid;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__reset;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__clk;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_input_valid;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_write;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__is_output_valid;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem_ready;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_read;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_write;
        CData/*0:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__request_arrived;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_src_mux__DOT__mem2reg;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_src_mux__DOT__is_jal;
        CData/*0:0*/ top__DOT__cpu__DOT__mem_src_mux__DOT__is_jalr;
        CData/*4:0*/ top__DOT__cpu__DOT__forward_unit__DOT__ID_EX_rs1;
        CData/*4:0*/ top__DOT__cpu__DOT__forward_unit__DOT__ID_EX_rs2;
        CData/*0:0*/ top__DOT__cpu__DOT__forward_unit__DOT__EX_MEM_reg_write;
        CData/*0:0*/ top__DOT__cpu__DOT__forward_unit__DOT__MEM_WB_reg_write;
        CData/*4:0*/ top__DOT__cpu__DOT__forward_unit__DOT__EX_MEM_rd;
        CData/*4:0*/ top__DOT__cpu__DOT__forward_unit__DOT__MEM_WB_rd;
        CData/*1:0*/ top__DOT__cpu__DOT__forward_unit__DOT__forward_a;
        CData/*1:0*/ top__DOT__cpu__DOT__forward_unit__DOT__forward_b;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*15:0*/ top__DOT__cpu__DOT__cache__DOT__is_valid;
        SData/*15:0*/ top__DOT__cpu__DOT__cache__DOT__is_dirty;
        IData/*31:0*/ top__DOT__cpu__DOT__current_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__next_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__inst;
        IData/*31:0*/ top__DOT__cpu__DOT__imm_plus_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__rs1_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__rs2_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__imm_gen_out;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_1_forward;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_2_forward;
        IData/*31:0*/ top__DOT__cpu__DOT__Imm_mux_input;
        IData/*31:0*/ top__DOT__cpu__DOT__alu_result;
        IData/*31:0*/ top__DOT__cpu__DOT__mem_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__rd_din;
        IData/*31:0*/ top__DOT__cpu__DOT__IF_ID_inst;
        IData/*31:0*/ top__DOT__cpu__DOT__IF_ID_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__ID_EX_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__ID_EX_rs1_data;
        IData/*31:0*/ top__DOT__cpu__DOT__ID_EX_rs2_data;
        IData/*31:0*/ top__DOT__cpu__DOT__ID_EX_imm;
    };
    struct {
        IData/*31:0*/ top__DOT__cpu__DOT__ID_EX_inst;
        IData/*31:0*/ top__DOT__cpu__DOT__EX_MEM_alu_out;
        IData/*31:0*/ top__DOT__cpu__DOT__EX_MEM_dmem_data;
        IData/*31:0*/ top__DOT__cpu__DOT__EX_MEM_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__MEM_WB_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1;
        IData/*31:0*/ top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2;
        IData/*31:0*/ top__DOT__cpu__DOT__pc_mux__DOT__current_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__pc_mux__DOT__imm_plus_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__pc_mux__DOT__jalr_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__pc_mux__DOT__next_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__pc__DOT__next_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__pc__DOT__current_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__pc__DOT__pc_reg;
        IData/*31:0*/ top__DOT__cpu__DOT__imem__DOT__addr;
        IData/*31:0*/ top__DOT__cpu__DOT__imem__DOT__dout;
        IData/*31:0*/ top__DOT__cpu__DOT__imem__DOT__i;
        IData/*31:0*/ top__DOT__cpu__DOT__imem__DOT__imem_addr;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__rd_din;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs1_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__rs2_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__reg_file__DOT__i;
        IData/*31:0*/ top__DOT__cpu__DOT__halt__DOT__rs1_dout;
        IData/*31:0*/ top__DOT__cpu__DOT__imm_gen__DOT__instr;
        IData/*31:0*/ top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out;
        IData/*31:0*/ top__DOT__cpu__DOT__forward_a_mux__DOT__rs1_data;
        IData/*31:0*/ top__DOT__cpu__DOT__forward_a_mux__DOT__MEM_WB_output;
        IData/*31:0*/ top__DOT__cpu__DOT__forward_a_mux__DOT__EX_MEM_alu_out;
        IData/*31:0*/ top__DOT__cpu__DOT__forward_a_mux__DOT__alu_input1;
        IData/*31:0*/ top__DOT__cpu__DOT__forward_b_mux__DOT__rs2_data;
        IData/*31:0*/ top__DOT__cpu__DOT__forward_b_mux__DOT__MEM_WB_output;
        IData/*31:0*/ top__DOT__cpu__DOT__forward_b_mux__DOT__EX_MEM_alu_out;
        IData/*31:0*/ top__DOT__cpu__DOT__forward_b_mux__DOT__Imm_mux_input;
        IData/*31:0*/ top__DOT__cpu__DOT__Imm_mux__DOT__Imm_mux_input;
        IData/*31:0*/ top__DOT__cpu__DOT__Imm_mux__DOT__imm_gen_out;
        IData/*31:0*/ top__DOT__cpu__DOT__Imm_mux__DOT__alu_input2;
        IData/*31:0*/ top__DOT__cpu__DOT__pc_imm_alu__DOT__current_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__pc_imm_alu__DOT__imm;
        IData/*31:0*/ top__DOT__cpu__DOT__pc_imm_alu__DOT__imm_plus_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__alu__DOT__alu_in_1;
        IData/*31:0*/ top__DOT__cpu__DOT__alu__DOT__alu_in_2;
        IData/*31:0*/ top__DOT__cpu__DOT__alu__DOT__alu_result;
        IData/*31:0*/ top__DOT__cpu__DOT__cache__DOT__addr;
        IData/*31:0*/ top__DOT__cpu__DOT__cache__DOT__din;
        IData/*31:0*/ top__DOT__cpu__DOT__cache__DOT__dout;
        IData/*23:0*/ top__DOT__cpu__DOT__cache__DOT__tag;
        VlWide<4>/*127:0*/ top__DOT__cpu__DOT__cache__DOT__mem_din;
        VlWide<4>/*127:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem_dout;
        VlWide<4>/*127:0*/ top__DOT__cpu__DOT__cache__DOT__cache_update_data;
        IData/*31:0*/ top__DOT__cpu__DOT__cache__DOT__mem_addr;
        IData/*31:0*/ top__DOT__cpu__DOT__cache__DOT__i;
        IData/*23:0*/ top__DOT__cpu__DOT__cache__DOT__cache_update_tag;
        IData/*31:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__addr;
        VlWide<4>/*127:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__din;
        VlWide<4>/*127:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__dout;
        IData/*31:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__i;
        IData/*31:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__delay_counter;
        IData/*31:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___mem_addr;
        VlWide<4>/*127:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT___din;
        IData/*31:0*/ top__DOT__cpu__DOT__mem_src_mux__DOT__cur_pc;
        IData/*31:0*/ top__DOT__cpu__DOT__mem_src_mux__DOT__MEM_src_1;
        IData/*31:0*/ top__DOT__cpu__DOT__mem_src_mux__DOT__MEM_src_2;
        IData/*31:0*/ top__DOT__cpu__DOT__mem_src_mux__DOT__MEM_output;
        IData/*31:0*/ __VactIterCount;
    };
    struct {
        VL_OUT(print_reg[32],31,0);
        VlUnpacked<IData/*31:0*/, 32> top__DOT__print_reg;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__print_reg;
        VlUnpacked<IData/*31:0*/, 16384> top__DOT__cpu__DOT__imem__DOT__mem;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__reg_file__DOT__print_reg;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__cpu__DOT__reg_file__DOT__rf;
        VlUnpacked<VlWide<4>/*127:0*/, 16> top__DOT__cpu__DOT__cache__DOT__data_bank;
        VlUnpacked<IData/*23:0*/, 16> top__DOT__cpu__DOT__cache__DOT__tag_bank;
        VlUnpacked<VlWide<4>/*127:0*/, 16384> top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__mem;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__imem__DOT__MEM_DEPTH = 0x00004000U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__cache__DOT__LINE_SIZE = 0x00000010U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__cache__DOT__NUM_SETS = 0x00000010U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__cache__DOT__NUM_WAYS = 1U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__MEM_DEPTH = 0x00004000U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__DELAY = 0x00000032U;
    static constexpr IData/*31:0*/ top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__BLOCK_SIZE = 0x00000010U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
