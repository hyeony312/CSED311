// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"is_halted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("print_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+4+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+36,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"is_halted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("print_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+39+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+71,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"is_halted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("print_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+74+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+106,0,"mem_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"mem_to_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"mem_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"alu_src",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"pc_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"pc_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"pc_source",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"alu_src_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"alu_src_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+115,0,"iord",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"irwrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"reg_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"is_ecall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"alu_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"imm_gen_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"current_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"next_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+124,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+125,0,"rs1_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"rs2_dout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+128,0,"rd_din",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"reg_write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"mem_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+132,0,"alu_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+133,0,"alu_in_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+134,0,"alu_in_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+135,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+136,0,"bcond",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"IR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+138,0,"MDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+139,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"ALUOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+286,0,"data_width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+142,0,"alu_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+143,0,"alu_in_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+144,0,"alu_in_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+145,0,"alu_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+146,0,"bcond",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("alu_control_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+147,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+148,0,"funct7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+149,0,"funct3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+150,0,"alu_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+151,0,"alu_op",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("alu_input1_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+152,0,"alu_src_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+153,0,"PC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+154,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+155,0,"alu_in_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("alu_input2_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+156,0,"alu_src_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+157,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+158,0,"imm_gen_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+159,0,"alu_in_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("control_unit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+160,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+161,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+162,0,"mem_read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+163,0,"mem_to_reg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+164,0,"mem_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"pc_source",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"pc_branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"pc_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"alu_src_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+169,0,"alu_src_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+170,0,"reg_write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"iord",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"irwrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+173,0,"alu_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+174,0,"is_ecall",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"curr_stage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+176,0,"next_stage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("immediate_generator", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+177,0,"instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"imm_gen_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem2reg_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+180,0,"mem_to_reg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+181,0,"MDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"ALUOut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"rd_din",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+184,0,"iord",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+185,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"ALUOut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("memory", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"MEM_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+192,0,"mem_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"mem_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+194,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+196,0,"mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+197,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+198,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+199,0,"next_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+200,0,"pc_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+201,0,"current_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+202,0,"pc_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("pc_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+203,0,"pc_source",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+204,0,"ALUOut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"alu_result",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,0,"current_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+207,0,"pc_branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"bcond",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+209,0,"next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg_file", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+210,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+212,0,"rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+213,0,"rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+214,0,"rd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+215,0,"rd_din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+216,0,"write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"is_ecall",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"is_halted",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+219,0,"rs1_dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+220,0,"rs2_dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("print_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+221+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+253,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("rf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+254+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+286,(0x20U),32);
    bufp->fullIData(oldp+287,(0x4000U),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->reset));
    bufp->fullBit(oldp+2,(vlSelf->clk));
    bufp->fullBit(oldp+3,(vlSelf->is_halted));
    bufp->fullIData(oldp+4,(vlSelf->print_reg[0]),32);
    bufp->fullIData(oldp+5,(vlSelf->print_reg[1]),32);
    bufp->fullIData(oldp+6,(vlSelf->print_reg[2]),32);
    bufp->fullIData(oldp+7,(vlSelf->print_reg[3]),32);
    bufp->fullIData(oldp+8,(vlSelf->print_reg[4]),32);
    bufp->fullIData(oldp+9,(vlSelf->print_reg[5]),32);
    bufp->fullIData(oldp+10,(vlSelf->print_reg[6]),32);
    bufp->fullIData(oldp+11,(vlSelf->print_reg[7]),32);
    bufp->fullIData(oldp+12,(vlSelf->print_reg[8]),32);
    bufp->fullIData(oldp+13,(vlSelf->print_reg[9]),32);
    bufp->fullIData(oldp+14,(vlSelf->print_reg[10]),32);
    bufp->fullIData(oldp+15,(vlSelf->print_reg[11]),32);
    bufp->fullIData(oldp+16,(vlSelf->print_reg[12]),32);
    bufp->fullIData(oldp+17,(vlSelf->print_reg[13]),32);
    bufp->fullIData(oldp+18,(vlSelf->print_reg[14]),32);
    bufp->fullIData(oldp+19,(vlSelf->print_reg[15]),32);
    bufp->fullIData(oldp+20,(vlSelf->print_reg[16]),32);
    bufp->fullIData(oldp+21,(vlSelf->print_reg[17]),32);
    bufp->fullIData(oldp+22,(vlSelf->print_reg[18]),32);
    bufp->fullIData(oldp+23,(vlSelf->print_reg[19]),32);
    bufp->fullIData(oldp+24,(vlSelf->print_reg[20]),32);
    bufp->fullIData(oldp+25,(vlSelf->print_reg[21]),32);
    bufp->fullIData(oldp+26,(vlSelf->print_reg[22]),32);
    bufp->fullIData(oldp+27,(vlSelf->print_reg[23]),32);
    bufp->fullIData(oldp+28,(vlSelf->print_reg[24]),32);
    bufp->fullIData(oldp+29,(vlSelf->print_reg[25]),32);
    bufp->fullIData(oldp+30,(vlSelf->print_reg[26]),32);
    bufp->fullIData(oldp+31,(vlSelf->print_reg[27]),32);
    bufp->fullIData(oldp+32,(vlSelf->print_reg[28]),32);
    bufp->fullIData(oldp+33,(vlSelf->print_reg[29]),32);
    bufp->fullIData(oldp+34,(vlSelf->print_reg[30]),32);
    bufp->fullIData(oldp+35,(vlSelf->print_reg[31]),32);
    bufp->fullBit(oldp+36,(vlSelf->top__DOT__reset));
    bufp->fullBit(oldp+37,(vlSelf->top__DOT__clk));
    bufp->fullBit(oldp+38,(vlSelf->top__DOT__is_halted));
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__print_reg[0]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__print_reg[1]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__print_reg[2]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__print_reg[3]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__print_reg[4]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__print_reg[5]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__print_reg[6]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__print_reg[7]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__print_reg[8]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__print_reg[9]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__print_reg[10]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__print_reg[11]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__print_reg[12]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__print_reg[13]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__print_reg[14]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__print_reg[15]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__print_reg[16]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__print_reg[17]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__print_reg[18]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__print_reg[19]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__print_reg[20]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__print_reg[21]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__print_reg[22]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__print_reg[23]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__print_reg[24]),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__print_reg[25]),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__print_reg[26]),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__print_reg[27]),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__print_reg[28]),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__print_reg[29]),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__print_reg[30]),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__print_reg[31]),32);
    bufp->fullBit(oldp+71,(vlSelf->top__DOT__cpu__DOT__reset));
    bufp->fullBit(oldp+72,(vlSelf->top__DOT__cpu__DOT__clk));
    bufp->fullBit(oldp+73,(vlSelf->top__DOT__cpu__DOT__is_halted));
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__cpu__DOT__print_reg[0]),32);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__cpu__DOT__print_reg[1]),32);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__cpu__DOT__print_reg[2]),32);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__cpu__DOT__print_reg[3]),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__cpu__DOT__print_reg[4]),32);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__cpu__DOT__print_reg[5]),32);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__cpu__DOT__print_reg[6]),32);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__cpu__DOT__print_reg[7]),32);
    bufp->fullIData(oldp+82,(vlSelf->top__DOT__cpu__DOT__print_reg[8]),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__cpu__DOT__print_reg[9]),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__cpu__DOT__print_reg[10]),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__cpu__DOT__print_reg[11]),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__cpu__DOT__print_reg[12]),32);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__cpu__DOT__print_reg[13]),32);
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__cpu__DOT__print_reg[14]),32);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__cpu__DOT__print_reg[15]),32);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__cpu__DOT__print_reg[16]),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__cpu__DOT__print_reg[17]),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__cpu__DOT__print_reg[18]),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__cpu__DOT__print_reg[19]),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__cpu__DOT__print_reg[20]),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__cpu__DOT__print_reg[21]),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__cpu__DOT__print_reg[22]),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__cpu__DOT__print_reg[23]),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__cpu__DOT__print_reg[24]),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__cpu__DOT__print_reg[25]),32);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__cpu__DOT__print_reg[26]),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__cpu__DOT__print_reg[27]),32);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__cpu__DOT__print_reg[28]),32);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__cpu__DOT__print_reg[29]),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__cpu__DOT__print_reg[30]),32);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__cpu__DOT__print_reg[31]),32);
    bufp->fullBit(oldp+106,(vlSelf->top__DOT__cpu__DOT__mem_read));
    bufp->fullBit(oldp+107,(vlSelf->top__DOT__cpu__DOT__mem_to_reg));
    bufp->fullBit(oldp+108,(vlSelf->top__DOT__cpu__DOT__mem_write));
    bufp->fullBit(oldp+109,(vlSelf->top__DOT__cpu__DOT__alu_src));
    bufp->fullBit(oldp+110,(vlSelf->top__DOT__cpu__DOT__pc_write));
    bufp->fullBit(oldp+111,(vlSelf->top__DOT__cpu__DOT__pc_branch));
    bufp->fullBit(oldp+112,(vlSelf->top__DOT__cpu__DOT__pc_source));
    bufp->fullBit(oldp+113,(vlSelf->top__DOT__cpu__DOT__alu_src_a));
    bufp->fullCData(oldp+114,(vlSelf->top__DOT__cpu__DOT__alu_src_b),2);
    bufp->fullBit(oldp+115,(vlSelf->top__DOT__cpu__DOT__iord));
    bufp->fullBit(oldp+116,(vlSelf->top__DOT__cpu__DOT__irwrite));
    bufp->fullBit(oldp+117,(vlSelf->top__DOT__cpu__DOT__reg_write));
    bufp->fullBit(oldp+118,(vlSelf->top__DOT__cpu__DOT__is_ecall));
    bufp->fullBit(oldp+119,(vlSelf->top__DOT__cpu__DOT__alu_pc));
    bufp->fullIData(oldp+120,(vlSelf->top__DOT__cpu__DOT__imm_gen_out),32);
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__cpu__DOT__current_pc),32);
    bufp->fullIData(oldp+122,(vlSelf->top__DOT__cpu__DOT__next_pc),32);
    bufp->fullCData(oldp+123,(vlSelf->top__DOT__cpu__DOT__rs1),5);
    bufp->fullCData(oldp+124,(vlSelf->top__DOT__cpu__DOT__rs2),5);
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__cpu__DOT__rs1_dout),32);
    bufp->fullIData(oldp+126,(vlSelf->top__DOT__cpu__DOT__rs2_dout),32);
    bufp->fullCData(oldp+127,(vlSelf->top__DOT__cpu__DOT__rd),5);
    bufp->fullIData(oldp+128,(vlSelf->top__DOT__cpu__DOT__rd_din),32);
    bufp->fullIData(oldp+129,(vlSelf->top__DOT__cpu__DOT__reg_write_data),32);
    bufp->fullIData(oldp+130,(vlSelf->top__DOT__cpu__DOT__mem_out),32);
    bufp->fullIData(oldp+131,(vlSelf->top__DOT__cpu__DOT__addr),32);
    bufp->fullCData(oldp+132,(vlSelf->top__DOT__cpu__DOT__alu_op),4);
    bufp->fullIData(oldp+133,(vlSelf->top__DOT__cpu__DOT__alu_in_1),32);
    bufp->fullIData(oldp+134,(vlSelf->top__DOT__cpu__DOT__alu_in_2),32);
    bufp->fullIData(oldp+135,(vlSelf->top__DOT__cpu__DOT__alu_result),32);
    bufp->fullBit(oldp+136,(vlSelf->top__DOT__cpu__DOT__bcond));
    bufp->fullIData(oldp+137,(vlSelf->top__DOT__cpu__DOT__IR),32);
    bufp->fullIData(oldp+138,(vlSelf->top__DOT__cpu__DOT__MDR),32);
    bufp->fullIData(oldp+139,(vlSelf->top__DOT__cpu__DOT__A),32);
    bufp->fullIData(oldp+140,(vlSelf->top__DOT__cpu__DOT__B),32);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__cpu__DOT__ALUOut),32);
    bufp->fullCData(oldp+142,(vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_op),4);
    bufp->fullIData(oldp+143,(vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_1),32);
    bufp->fullIData(oldp+144,(vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_2),32);
    bufp->fullIData(oldp+145,(vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_result),32);
    bufp->fullBit(oldp+146,(vlSelf->top__DOT__cpu__DOT__alu__DOT__bcond));
    bufp->fullCData(oldp+147,(vlSelf->top__DOT__cpu__DOT__alu_control_unit__DOT__opcode),7);
    bufp->fullBit(oldp+148,(vlSelf->top__DOT__cpu__DOT__alu_control_unit__DOT__funct7));
    bufp->fullCData(oldp+149,(vlSelf->top__DOT__cpu__DOT__alu_control_unit__DOT__funct3),3);
    bufp->fullBit(oldp+150,(vlSelf->top__DOT__cpu__DOT__alu_control_unit__DOT__alu_pc));
    bufp->fullCData(oldp+151,(vlSelf->top__DOT__cpu__DOT__alu_control_unit__DOT__alu_op),4);
    bufp->fullBit(oldp+152,(vlSelf->top__DOT__cpu__DOT__alu_input1_mux__DOT__alu_src_a));
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__cpu__DOT__alu_input1_mux__DOT__PC),32);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__cpu__DOT__alu_input1_mux__DOT__A),32);
    bufp->fullIData(oldp+155,(vlSelf->top__DOT__cpu__DOT__alu_input1_mux__DOT__alu_in_1),32);
    bufp->fullCData(oldp+156,(vlSelf->top__DOT__cpu__DOT__alu_input2_mux__DOT__alu_src_b),2);
    bufp->fullIData(oldp+157,(vlSelf->top__DOT__cpu__DOT__alu_input2_mux__DOT__B),32);
    bufp->fullIData(oldp+158,(vlSelf->top__DOT__cpu__DOT__alu_input2_mux__DOT__imm_gen_out),32);
    bufp->fullIData(oldp+159,(vlSelf->top__DOT__cpu__DOT__alu_input2_mux__DOT__alu_in_2),32);
    bufp->fullCData(oldp+160,(vlSelf->top__DOT__cpu__DOT__control_unit__DOT__opcode),7);
    bufp->fullBit(oldp+161,(vlSelf->top__DOT__cpu__DOT__control_unit__DOT__clk));
    bufp->fullBit(oldp+162,(vlSelf->top__DOT__cpu__DOT__control_unit__DOT__mem_read));
    bufp->fullBit(oldp+163,(vlSelf->top__DOT__cpu__DOT__control_unit__DOT__mem_to_reg));
    bufp->fullBit(oldp+164,(vlSelf->top__DOT__cpu__DOT__control_unit__DOT__mem_write));
    bufp->fullBit(oldp+165,(vlSelf->top__DOT__cpu__DOT__control_unit__DOT__pc_source));
    bufp->fullBit(oldp+166,(vlSelf->top__DOT__cpu__DOT__control_unit__DOT__pc_branch));
    bufp->fullBit(oldp+167,(vlSelf->top__DOT__cpu__DOT__control_unit__DOT__pc_write));
    bufp->fullBit(oldp+168,(vlSelf->top__DOT__cpu__DOT__control_unit__DOT__alu_src_a));
    bufp->fullCData(oldp+169,(vlSelf->top__DOT__cpu__DOT__control_unit__DOT__alu_src_b),2);
    bufp->fullBit(oldp+170,(vlSelf->top__DOT__cpu__DOT__control_unit__DOT__reg_write));
    bufp->fullBit(oldp+171,(vlSelf->top__DOT__cpu__DOT__control_unit__DOT__iord));
    bufp->fullBit(oldp+172,(vlSelf->top__DOT__cpu__DOT__control_unit__DOT__irwrite));
    bufp->fullBit(oldp+173,(vlSelf->top__DOT__cpu__DOT__control_unit__DOT__alu_pc));
    bufp->fullBit(oldp+174,(vlSelf->top__DOT__cpu__DOT__control_unit__DOT__is_ecall));
    bufp->fullCData(oldp+175,(vlSelf->top__DOT__cpu__DOT__control_unit__DOT__curr_stage),3);
    bufp->fullCData(oldp+176,(vlSelf->top__DOT__cpu__DOT__control_unit__DOT__next_stage),3);
    bufp->fullIData(oldp+177,(vlSelf->top__DOT__cpu__DOT__immediate_generator__DOT__instr),32);
    bufp->fullIData(oldp+178,(vlSelf->top__DOT__cpu__DOT__immediate_generator__DOT__imm_gen_out),32);
    bufp->fullCData(oldp+179,(vlSelf->top__DOT__cpu__DOT__immediate_generator__DOT__opcode),7);
    bufp->fullBit(oldp+180,(vlSelf->top__DOT__cpu__DOT__mem2reg_mux__DOT__mem_to_reg));
    bufp->fullIData(oldp+181,(vlSelf->top__DOT__cpu__DOT__mem2reg_mux__DOT__MDR),32);
    bufp->fullIData(oldp+182,(vlSelf->top__DOT__cpu__DOT__mem2reg_mux__DOT__ALUOut),32);
    bufp->fullIData(oldp+183,(vlSelf->top__DOT__cpu__DOT__mem2reg_mux__DOT__rd_din),32);
    bufp->fullBit(oldp+184,(vlSelf->top__DOT__cpu__DOT__mem_mux__DOT__iord));
    bufp->fullIData(oldp+185,(vlSelf->top__DOT__cpu__DOT__mem_mux__DOT__pc),32);
    bufp->fullIData(oldp+186,(vlSelf->top__DOT__cpu__DOT__mem_mux__DOT__ALUOut),32);
    bufp->fullIData(oldp+187,(vlSelf->top__DOT__cpu__DOT__mem_mux__DOT__addr),32);
    bufp->fullBit(oldp+188,(vlSelf->top__DOT__cpu__DOT__memory__DOT__reset));
    bufp->fullBit(oldp+189,(vlSelf->top__DOT__cpu__DOT__memory__DOT__clk));
    bufp->fullIData(oldp+190,(vlSelf->top__DOT__cpu__DOT__memory__DOT__addr),32);
    bufp->fullIData(oldp+191,(vlSelf->top__DOT__cpu__DOT__memory__DOT__din),32);
    bufp->fullBit(oldp+192,(vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_read));
    bufp->fullBit(oldp+193,(vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_write));
    bufp->fullIData(oldp+194,(vlSelf->top__DOT__cpu__DOT__memory__DOT__dout),32);
    bufp->fullIData(oldp+195,(vlSelf->top__DOT__cpu__DOT__memory__DOT__i),32);
    bufp->fullIData(oldp+196,(vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_addr),32);
    bufp->fullBit(oldp+197,(vlSelf->top__DOT__cpu__DOT__pc__DOT__reset));
    bufp->fullBit(oldp+198,(vlSelf->top__DOT__cpu__DOT__pc__DOT__clk));
    bufp->fullIData(oldp+199,(vlSelf->top__DOT__cpu__DOT__pc__DOT__next_pc),32);
    bufp->fullBit(oldp+200,(vlSelf->top__DOT__cpu__DOT__pc__DOT__pc_write));
    bufp->fullIData(oldp+201,(vlSelf->top__DOT__cpu__DOT__pc__DOT__current_pc),32);
    bufp->fullBit(oldp+202,(vlSelf->top__DOT__cpu__DOT__pc__DOT__pc_enable));
    bufp->fullBit(oldp+203,(vlSelf->top__DOT__cpu__DOT__pc_mux__DOT__pc_source));
    bufp->fullIData(oldp+204,(vlSelf->top__DOT__cpu__DOT__pc_mux__DOT__ALUOut),32);
    bufp->fullIData(oldp+205,(vlSelf->top__DOT__cpu__DOT__pc_mux__DOT__alu_result),32);
    bufp->fullIData(oldp+206,(vlSelf->top__DOT__cpu__DOT__pc_mux__DOT__current_pc),32);
    bufp->fullBit(oldp+207,(vlSelf->top__DOT__cpu__DOT__pc_mux__DOT__pc_branch));
    bufp->fullBit(oldp+208,(vlSelf->top__DOT__cpu__DOT__pc_mux__DOT__bcond));
    bufp->fullIData(oldp+209,(vlSelf->top__DOT__cpu__DOT__pc_mux__DOT__next_pc),32);
    bufp->fullBit(oldp+210,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__reset));
    bufp->fullBit(oldp+211,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__clk));
    bufp->fullCData(oldp+212,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1),5);
    bufp->fullCData(oldp+213,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2),5);
    bufp->fullCData(oldp+214,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd),5);
    bufp->fullIData(oldp+215,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd_din),32);
    bufp->fullBit(oldp+216,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__write_enable));
    bufp->fullBit(oldp+217,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__is_ecall));
    bufp->fullBit(oldp+218,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__is_halted));
    bufp->fullIData(oldp+219,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1_dout),32);
    bufp->fullIData(oldp+220,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2_dout),32);
    bufp->fullIData(oldp+221,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0]),32);
    bufp->fullIData(oldp+222,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[1]),32);
    bufp->fullIData(oldp+223,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[2]),32);
    bufp->fullIData(oldp+224,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[3]),32);
    bufp->fullIData(oldp+225,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[4]),32);
    bufp->fullIData(oldp+226,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[5]),32);
    bufp->fullIData(oldp+227,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[6]),32);
    bufp->fullIData(oldp+228,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[7]),32);
    bufp->fullIData(oldp+229,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[8]),32);
    bufp->fullIData(oldp+230,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[9]),32);
    bufp->fullIData(oldp+231,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[10]),32);
    bufp->fullIData(oldp+232,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[11]),32);
    bufp->fullIData(oldp+233,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[12]),32);
    bufp->fullIData(oldp+234,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[13]),32);
    bufp->fullIData(oldp+235,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[14]),32);
    bufp->fullIData(oldp+236,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[15]),32);
    bufp->fullIData(oldp+237,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[16]),32);
    bufp->fullIData(oldp+238,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[17]),32);
    bufp->fullIData(oldp+239,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[18]),32);
    bufp->fullIData(oldp+240,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[19]),32);
    bufp->fullIData(oldp+241,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[20]),32);
    bufp->fullIData(oldp+242,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[21]),32);
    bufp->fullIData(oldp+243,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[22]),32);
    bufp->fullIData(oldp+244,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[23]),32);
    bufp->fullIData(oldp+245,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[24]),32);
    bufp->fullIData(oldp+246,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[25]),32);
    bufp->fullIData(oldp+247,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[26]),32);
    bufp->fullIData(oldp+248,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[27]),32);
    bufp->fullIData(oldp+249,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[28]),32);
    bufp->fullIData(oldp+250,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[29]),32);
    bufp->fullIData(oldp+251,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[30]),32);
    bufp->fullIData(oldp+252,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[31]),32);
    bufp->fullIData(oldp+253,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i),32);
    bufp->fullIData(oldp+254,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0]),32);
    bufp->fullIData(oldp+255,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[1]),32);
    bufp->fullIData(oldp+256,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[2]),32);
    bufp->fullIData(oldp+257,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[3]),32);
    bufp->fullIData(oldp+258,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[4]),32);
    bufp->fullIData(oldp+259,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[5]),32);
    bufp->fullIData(oldp+260,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[6]),32);
    bufp->fullIData(oldp+261,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[7]),32);
    bufp->fullIData(oldp+262,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[8]),32);
    bufp->fullIData(oldp+263,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[9]),32);
    bufp->fullIData(oldp+264,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[10]),32);
    bufp->fullIData(oldp+265,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[11]),32);
    bufp->fullIData(oldp+266,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[12]),32);
    bufp->fullIData(oldp+267,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[13]),32);
    bufp->fullIData(oldp+268,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[14]),32);
    bufp->fullIData(oldp+269,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[15]),32);
    bufp->fullIData(oldp+270,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[16]),32);
    bufp->fullIData(oldp+271,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[17]),32);
    bufp->fullIData(oldp+272,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[18]),32);
    bufp->fullIData(oldp+273,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[19]),32);
    bufp->fullIData(oldp+274,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[20]),32);
    bufp->fullIData(oldp+275,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[21]),32);
    bufp->fullIData(oldp+276,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[22]),32);
    bufp->fullIData(oldp+277,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[23]),32);
    bufp->fullIData(oldp+278,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[24]),32);
    bufp->fullIData(oldp+279,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[25]),32);
    bufp->fullIData(oldp+280,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[26]),32);
    bufp->fullIData(oldp+281,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[27]),32);
    bufp->fullIData(oldp+282,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[28]),32);
    bufp->fullIData(oldp+283,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[29]),32);
    bufp->fullIData(oldp+284,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[30]),32);
    bufp->fullIData(oldp+285,(vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[31]),32);
}
