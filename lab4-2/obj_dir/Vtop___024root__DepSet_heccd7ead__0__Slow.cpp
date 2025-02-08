// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top__DOT__cpu__DOT__alu_result = 0U;
    vlSelf->top__DOT__cpu__DOT__bcond = 0U;
    vlSelf->top__DOT__cpu__DOT__pc_src = 0U;
    vlSelf->top__DOT__cpu__DOT__bubble = 0U;
    vlSelf->top__DOT__cpu__DOT__forward_a = 0U;
    vlSelf->top__DOT__cpu__DOT__forward_b = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("top.v", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*3:0*/, 2048> Vtop__ConstPool__TABLE_h116a3470_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->top__DOT__cpu__DOT__pc_mux__DOT__current_pc 
        = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__pc__DOT__current_pc 
        = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__imem__DOT__addr = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__eq_mux__DOT__rs1 = 
        (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                  >> 0xfU));
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2 
        = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0x14U));
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd = vlSelf->top__DOT__cpu__DOT__MEM_WB_rd;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__write_enable 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__part_of_inst 
        = (0x7fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0U));
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__bubble 
        = vlSelf->top__DOT__cpu__DOT__IF_ID_bubble;
    vlSelf->top__DOT__cpu__DOT__hazard__DOT__ID_EX_mem_read 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read;
    vlSelf->top__DOT__cpu__DOT__hazard__DOT__ID_EX_reg_write 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_reg_write;
    vlSelf->top__DOT__cpu__DOT__hazard__DOT__EX_MEM_reg_write 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write;
    vlSelf->top__DOT__cpu__DOT__hazard__DOT__id_rs1 
        = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0xfU));
    vlSelf->top__DOT__cpu__DOT__hazard__DOT__id_rs2 
        = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0x14U));
    vlSelf->top__DOT__cpu__DOT__hazard__DOT__ex_rd 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rd;
    vlSelf->top__DOT__cpu__DOT__hazard__DOT__mem_rd 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_rd;
    vlSelf->top__DOT__cpu__DOT__hazard__DOT__opcode 
        = (0x7fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                    >> 0U));
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__instr 
        = vlSelf->top__DOT__cpu__DOT__IF_ID_inst;
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode 
        = (0x7fU & (vlSelf->top__DOT__cpu__DOT__ID_EX_inst 
                    >> 0U));
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct7 
        = (1U & (vlSelf->top__DOT__cpu__DOT__ID_EX_inst 
                 >> 0x1eU));
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3 
        = (7U & (vlSelf->top__DOT__cpu__DOT__ID_EX_inst 
                 >> 0xcU));
    vlSelf->top__DOT__cpu__DOT__forward_a_mux__DOT__rs1_data 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data;
    vlSelf->top__DOT__cpu__DOT__forward_a_mux__DOT__EX_MEM_alu_out 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out;
    vlSelf->top__DOT__cpu__DOT__forward_b_mux__DOT__rs2_data 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rs2_data;
    vlSelf->top__DOT__cpu__DOT__forward_b_mux__DOT__EX_MEM_alu_out 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out;
    vlSelf->top__DOT__cpu__DOT__Imm_mux__DOT__alu_src 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_alu_src;
    vlSelf->top__DOT__cpu__DOT__Imm_mux__DOT__imm_gen_out 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_imm;
    vlSelf->top__DOT__cpu__DOT__pc_imm_alu__DOT__current_pc 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_pc;
    vlSelf->top__DOT__cpu__DOT__pc_imm_alu__DOT__imm 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_imm;
    vlSelf->top__DOT__cpu__DOT__branch_bubble_unit__DOT__ID_EX_is_branch 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_is_branch;
    vlSelf->top__DOT__cpu__DOT__branch_bubble_unit__DOT__ID_EX_is_jal 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_is_jal;
    vlSelf->top__DOT__cpu__DOT__branch_bubble_unit__DOT__ID_EX_is_jalr 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_is_jalr;
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__addr = vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out;
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__din = vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data;
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__mem_read 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_read;
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__mem_write 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_write;
    vlSelf->top__DOT__cpu__DOT__mem_src_mux__DOT__mem2reg 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg;
    vlSelf->top__DOT__cpu__DOT__mem_src_mux__DOT__is_jal 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_is_jal;
    vlSelf->top__DOT__cpu__DOT__mem_src_mux__DOT__is_jalr 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_is_jalr;
    vlSelf->top__DOT__cpu__DOT__mem_src_mux__DOT__cur_pc 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_pc;
    vlSelf->top__DOT__cpu__DOT__mem_src_mux__DOT__MEM_src_1 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1;
    vlSelf->top__DOT__cpu__DOT__mem_src_mux__DOT__MEM_src_2 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2;
    vlSelf->top__DOT__cpu__DOT__forward_unit__DOT__ID_EX_rs1 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rs1;
    vlSelf->top__DOT__cpu__DOT__forward_unit__DOT__ID_EX_rs2 
        = vlSelf->top__DOT__cpu__DOT__ID_EX_rs2;
    vlSelf->top__DOT__cpu__DOT__forward_unit__DOT__EX_MEM_reg_write 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write;
    vlSelf->top__DOT__cpu__DOT__forward_unit__DOT__MEM_WB_reg_write 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write;
    vlSelf->top__DOT__cpu__DOT__forward_unit__DOT__EX_MEM_rd 
        = vlSelf->top__DOT__cpu__DOT__EX_MEM_rd;
    vlSelf->top__DOT__cpu__DOT__forward_unit__DOT__MEM_WB_rd 
        = vlSelf->top__DOT__cpu__DOT__MEM_WB_rd;
    vlSelf->top__DOT__cpu__DOT__alu_src = 0U;
    vlSelf->top__DOT__cpu__DOT__mem_to_reg = 0U;
    vlSelf->top__DOT__cpu__DOT__rs2_dout = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                   >> 0x14U))];
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode 
        = (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst);
    vlSelf->top__DOT__cpu__DOT__imm_gen_out = ((((0x13U 
                                                  == (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode)) 
                                                 | (3U 
                                                    == (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))) 
                                                | (0x67U 
                                                   == (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode)))
                                                ? (
                                                   ((- (IData)(
                                                               (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                      >> 0x14U))
                                                : (
                                                   (0x23U 
                                                    == (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0xfe0U 
                                                        & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                             >> 7U))))
                                                    : 
                                                   ((0x63U 
                                                     == (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                  >> 0x1fU))) 
                                                      << 0xdU) 
                                                     | ((0x1000U 
                                                         & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                            >> 0x13U)) 
                                                        | ((0x800U 
                                                            & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                               << 4U)) 
                                                           | ((0x7e0U 
                                                               & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                    >> 7U))))))
                                                     : 
                                                    ((0x6fU 
                                                      == (IData)(vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode))
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                   >> 0x1fU))) 
                                                       << 0x15U) 
                                                      | ((0x100000U 
                                                          & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                             >> 0xbU)) 
                                                         | ((0xff000U 
                                                             & vlSelf->top__DOT__cpu__DOT__IF_ID_inst) 
                                                            | ((0x800U 
                                                                & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                   >> 9U)) 
                                                               | (0x7feU 
                                                                  & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                                     >> 0x14U))))))
                                                      : 0U))));
    vlSelf->is_halted = vlSelf->top__DOT__cpu__DOT__halt_flag;
    vlSelf->top__DOT__cpu__DOT__imem__DOT__imem_addr 
        = VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__cpu__DOT__current_pc, 2U);
    vlSelf->top__DOT__cpu__DOT__IF_ID_write = 1U;
    if ((((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read) 
          & ((0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                       >> 0xfU)) == (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd))) 
         & (0x11U != (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                               >> 0xfU))))) {
        vlSelf->top__DOT__cpu__DOT__IF_ID_write = 0U;
    }
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__dmem_addr 
        = VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out, 2U);
    vlSelf->top__DOT__cpu__DOT__pc_write = 1U;
    if ((((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read) 
          & ((0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                       >> 0xfU)) == (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd))) 
         & (0x11U != (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                               >> 0xfU))))) {
        vlSelf->top__DOT__cpu__DOT__pc_write = 0U;
    }
    if ((((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read) 
          & ((0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                       >> 0x14U)) == (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd))) 
         & (0x11U != (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                               >> 0x14U))))) {
        vlSelf->top__DOT__cpu__DOT__IF_ID_write = 0U;
        vlSelf->top__DOT__cpu__DOT__pc_write = 0U;
    }
    vlSelf->top__DOT__reset = vlSelf->reset;
    vlSelf->top__DOT__clk = vlSelf->clk;
    vlSelf->top__DOT__cpu__DOT__imm_plus_pc = (vlSelf->top__DOT__cpu__DOT__ID_EX_imm 
                                               + vlSelf->top__DOT__cpu__DOT__ID_EX_pc);
    vlSelf->top__DOT__cpu__DOT__is_ecall = 0U;
    vlSelf->top__DOT__cpu__DOT__stall = 0U;
    if ((((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read) 
          & ((0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                       >> 0xfU)) == (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd))) 
         & (0x11U != (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                               >> 0xfU))))) {
        vlSelf->top__DOT__cpu__DOT__stall = 1U;
    }
    if ((((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read) 
          & ((0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                       >> 0x14U)) == (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd))) 
         & (0x11U != (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                               >> 0x14U))))) {
        vlSelf->top__DOT__cpu__DOT__stall = 1U;
    }
    if ((0x73U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
        vlSelf->top__DOT__cpu__DOT__IF_ID_write = (
                                                   (1U 
                                                    & (~ 
                                                       ((0x11U 
                                                         == (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd)) 
                                                        & (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_reg_write)))) 
                                                   && (1U 
                                                       & (~ 
                                                          ((0x11U 
                                                            == (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_rd)) 
                                                           & (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write)))));
        vlSelf->top__DOT__cpu__DOT__pc_write = ((1U 
                                                 & (~ 
                                                    ((0x11U 
                                                      == (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd)) 
                                                     & (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_reg_write)))) 
                                                && (1U 
                                                    & (~ 
                                                       ((0x11U 
                                                         == (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_rd)) 
                                                        & (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write)))));
        vlSelf->top__DOT__cpu__DOT__stall = (((0x11U 
                                               == (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rd)) 
                                              & (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_reg_write)) 
                                             || ((0x11U 
                                                  == (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_rd)) 
                                                 & (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write)));
    }
    __Vtableidx1 = ((0x700U & (vlSelf->top__DOT__cpu__DOT__ID_EX_inst 
                               >> 4U)) | ((0x80U & 
                                           (vlSelf->top__DOT__cpu__DOT__ID_EX_inst 
                                            >> 0x17U)) 
                                          | (0x7fU 
                                             & vlSelf->top__DOT__cpu__DOT__ID_EX_inst)));
    vlSelf->top__DOT__cpu__DOT__alu_op = Vtop__ConstPool__TABLE_h116a3470_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__forward_a = ((((0U 
                                                != (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rs1)) 
                                               & ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rs1) 
                                                  == (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_rd))) 
                                              & (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write))
                                              ? 2U : 
                                             ((((0U 
                                                 != (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rs1)) 
                                                & ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rs1) 
                                                   == (IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_rd))) 
                                               & (IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write))
                                               ? 1U
                                               : 0U));
    vlSelf->top__DOT__cpu__DOT__forward_b = ((((0U 
                                                != (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rs2)) 
                                               & ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rs2) 
                                                  == (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_rd))) 
                                              & (IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write))
                                              ? 2U : 
                                             ((((0U 
                                                 != (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rs2)) 
                                                & ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_rs2) 
                                                   == (IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_rd))) 
                                               & (IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write))
                                               ? 1U
                                               : 0U));
    vlSelf->top__DOT__cpu__DOT__rd_din = (((IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_is_jal) 
                                           | (IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_is_jalr))
                                           ? ((IData)(4U) 
                                              + vlSelf->top__DOT__cpu__DOT__MEM_WB_pc)
                                           : ((IData)(vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg)
                                               ? vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1
                                               : vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2));
    vlSelf->print_reg[0U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0U];
    vlSelf->print_reg[1U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [1U];
    vlSelf->print_reg[2U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [2U];
    vlSelf->print_reg[3U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [3U];
    vlSelf->print_reg[4U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [4U];
    vlSelf->print_reg[5U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [5U];
    vlSelf->print_reg[6U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [6U];
    vlSelf->print_reg[7U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [7U];
    vlSelf->print_reg[8U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [8U];
    vlSelf->print_reg[9U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [9U];
    vlSelf->print_reg[0xaU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xaU];
    vlSelf->print_reg[0xbU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xbU];
    vlSelf->print_reg[0xcU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xcU];
    vlSelf->print_reg[0xdU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xdU];
    vlSelf->print_reg[0xeU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xeU];
    vlSelf->print_reg[0xfU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0xfU];
    vlSelf->print_reg[0x10U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x10U];
    vlSelf->print_reg[0x11U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x11U];
    vlSelf->print_reg[0x12U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x12U];
    vlSelf->print_reg[0x13U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x13U];
    vlSelf->print_reg[0x14U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x14U];
    vlSelf->print_reg[0x15U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x15U];
    vlSelf->print_reg[0x16U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x16U];
    vlSelf->print_reg[0x17U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x17U];
    vlSelf->print_reg[0x18U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x18U];
    vlSelf->print_reg[0x19U] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x19U];
    vlSelf->print_reg[0x1aU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1aU];
    vlSelf->print_reg[0x1bU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1bU];
    vlSelf->print_reg[0x1cU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1cU];
    vlSelf->print_reg[0x1dU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1dU];
    vlSelf->print_reg[0x1eU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1eU];
    vlSelf->print_reg[0x1fU] = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [0x1fU];
    if ((0x33U != (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
        if ((0x13U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
            vlSelf->top__DOT__cpu__DOT__alu_src = 1U;
        } else if ((0x23U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
            vlSelf->top__DOT__cpu__DOT__alu_src = 1U;
        } else if ((3U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
            vlSelf->top__DOT__cpu__DOT__alu_src = 1U;
        } else if ((0x63U != (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
            if ((0x6fU != (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
                if ((0x67U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
                    vlSelf->top__DOT__cpu__DOT__alu_src = 1U;
                }
            }
        }
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_src 
            = vlSelf->top__DOT__cpu__DOT__alu_src;
        if ((0x13U != (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
            if ((0x23U != (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
                if ((3U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
                    vlSelf->top__DOT__cpu__DOT__mem_to_reg = 1U;
                }
            }
        }
    } else {
        vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_src 
            = vlSelf->top__DOT__cpu__DOT__alu_src;
    }
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_to_reg 
        = vlSelf->top__DOT__cpu__DOT__mem_to_reg;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2_dout 
        = vlSelf->top__DOT__cpu__DOT__rs2_dout;
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out 
        = vlSelf->top__DOT__cpu__DOT__imm_gen_out;
    vlSelf->top__DOT__is_halted = vlSelf->is_halted;
    vlSelf->top__DOT__cpu__DOT__inst = vlSelf->top__DOT__cpu__DOT__imem__DOT__mem
        [(0x3ffU & vlSelf->top__DOT__cpu__DOT__imem__DOT__imem_addr)];
    vlSelf->top__DOT__cpu__DOT__hazard__DOT__IF_ID_write 
        = vlSelf->top__DOT__cpu__DOT__IF_ID_write;
    vlSelf->top__DOT__cpu__DOT__mem_dout = ((IData)(vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_read)
                                             ? vlSelf->top__DOT__cpu__DOT__dmem__DOT__mem
                                            [(0x3fffU 
                                              & vlSelf->top__DOT__cpu__DOT__dmem__DOT__dmem_addr)]
                                             : 0U);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__pc_write = vlSelf->top__DOT__cpu__DOT__pc_write;
    vlSelf->top__DOT__cpu__DOT__hazard__DOT__pc_write 
        = vlSelf->top__DOT__cpu__DOT__pc_write;
    vlSelf->top__DOT__cpu__DOT__reset = vlSelf->top__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__clk = vlSelf->top__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__pc_mux__DOT__imm_plus_pc 
        = vlSelf->top__DOT__cpu__DOT__imm_plus_pc;
    vlSelf->top__DOT__cpu__DOT__pc_imm_alu__DOT__imm_plus_pc 
        = vlSelf->top__DOT__cpu__DOT__imm_plus_pc;
    if ((0x33U != (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
        if ((0x13U != (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
            if ((0x23U != (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
                if ((3U != (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
                    if ((0x63U != (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
                        if ((0x6fU != (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
                            if ((0x67U != (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
                                if ((0x73U == (0x7fU 
                                               & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
                                    vlSelf->top__DOT__cpu__DOT__is_ecall = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__cpu__DOT__eq_mux__DOT__is_ecall 
        = vlSelf->top__DOT__cpu__DOT__is_ecall;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall 
        = vlSelf->top__DOT__cpu__DOT__is_ecall;
    vlSelf->top__DOT__cpu__DOT__halt__DOT__is_ecall 
        = vlSelf->top__DOT__cpu__DOT__is_ecall;
    vlSelf->top__DOT__cpu__DOT__rs1_in = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IF_ID_inst 
                                                   >> 0xfU));
    if (vlSelf->top__DOT__cpu__DOT__is_ecall) {
        vlSelf->top__DOT__cpu__DOT__rs1_in = 0x11U;
    }
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__stall 
        = vlSelf->top__DOT__cpu__DOT__stall;
    vlSelf->top__DOT__cpu__DOT__hazard__DOT__stall 
        = vlSelf->top__DOT__cpu__DOT__stall;
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op 
        = vlSelf->top__DOT__cpu__DOT__alu_op;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_op = vlSelf->top__DOT__cpu__DOT__alu_op;
    vlSelf->top__DOT__cpu__DOT__forward_a_mux__DOT__forward_a 
        = vlSelf->top__DOT__cpu__DOT__forward_a;
    vlSelf->top__DOT__cpu__DOT__forward_unit__DOT__forward_a 
        = vlSelf->top__DOT__cpu__DOT__forward_a;
    vlSelf->top__DOT__cpu__DOT__forward_b_mux__DOT__forward_b 
        = vlSelf->top__DOT__cpu__DOT__forward_b;
    vlSelf->top__DOT__cpu__DOT__forward_unit__DOT__forward_b 
        = vlSelf->top__DOT__cpu__DOT__forward_b;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd_din 
        = vlSelf->top__DOT__cpu__DOT__rd_din;
    vlSelf->top__DOT__cpu__DOT__forward_a_mux__DOT__MEM_WB_output 
        = vlSelf->top__DOT__cpu__DOT__rd_din;
    vlSelf->top__DOT__cpu__DOT__forward_b_mux__DOT__MEM_WB_output 
        = vlSelf->top__DOT__cpu__DOT__rd_din;
    vlSelf->top__DOT__cpu__DOT__mem_src_mux__DOT__MEM_output 
        = vlSelf->top__DOT__cpu__DOT__rd_din;
    vlSelf->top__DOT__cpu__DOT__alu_1_forward = ((0U 
                                                  == (IData)(vlSelf->top__DOT__cpu__DOT__forward_a))
                                                  ? vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->top__DOT__cpu__DOT__forward_a))
                                                   ? vlSelf->top__DOT__cpu__DOT__rd_din
                                                   : vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out));
    vlSelf->top__DOT__cpu__DOT__Imm_mux_input = ((0U 
                                                  == (IData)(vlSelf->top__DOT__cpu__DOT__forward_b))
                                                  ? vlSelf->top__DOT__cpu__DOT__ID_EX_rs2_data
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->top__DOT__cpu__DOT__forward_b))
                                                   ? vlSelf->top__DOT__cpu__DOT__rd_din
                                                   : vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out));
    vlSelf->top__DOT__print_reg[0U] = vlSelf->print_reg
        [0U];
    vlSelf->top__DOT__print_reg[1U] = vlSelf->print_reg
        [1U];
    vlSelf->top__DOT__print_reg[2U] = vlSelf->print_reg
        [2U];
    vlSelf->top__DOT__print_reg[3U] = vlSelf->print_reg
        [3U];
    vlSelf->top__DOT__print_reg[4U] = vlSelf->print_reg
        [4U];
    vlSelf->top__DOT__print_reg[5U] = vlSelf->print_reg
        [5U];
    vlSelf->top__DOT__print_reg[6U] = vlSelf->print_reg
        [6U];
    vlSelf->top__DOT__print_reg[7U] = vlSelf->print_reg
        [7U];
    vlSelf->top__DOT__print_reg[8U] = vlSelf->print_reg
        [8U];
    vlSelf->top__DOT__print_reg[9U] = vlSelf->print_reg
        [9U];
    vlSelf->top__DOT__print_reg[0xaU] = vlSelf->print_reg
        [0xaU];
    vlSelf->top__DOT__print_reg[0xbU] = vlSelf->print_reg
        [0xbU];
    vlSelf->top__DOT__print_reg[0xcU] = vlSelf->print_reg
        [0xcU];
    vlSelf->top__DOT__print_reg[0xdU] = vlSelf->print_reg
        [0xdU];
    vlSelf->top__DOT__print_reg[0xeU] = vlSelf->print_reg
        [0xeU];
    vlSelf->top__DOT__print_reg[0xfU] = vlSelf->print_reg
        [0xfU];
    vlSelf->top__DOT__print_reg[0x10U] = vlSelf->print_reg
        [0x10U];
    vlSelf->top__DOT__print_reg[0x11U] = vlSelf->print_reg
        [0x11U];
    vlSelf->top__DOT__print_reg[0x12U] = vlSelf->print_reg
        [0x12U];
    vlSelf->top__DOT__print_reg[0x13U] = vlSelf->print_reg
        [0x13U];
    vlSelf->top__DOT__print_reg[0x14U] = vlSelf->print_reg
        [0x14U];
    vlSelf->top__DOT__print_reg[0x15U] = vlSelf->print_reg
        [0x15U];
    vlSelf->top__DOT__print_reg[0x16U] = vlSelf->print_reg
        [0x16U];
    vlSelf->top__DOT__print_reg[0x17U] = vlSelf->print_reg
        [0x17U];
    vlSelf->top__DOT__print_reg[0x18U] = vlSelf->print_reg
        [0x18U];
    vlSelf->top__DOT__print_reg[0x19U] = vlSelf->print_reg
        [0x19U];
    vlSelf->top__DOT__print_reg[0x1aU] = vlSelf->print_reg
        [0x1aU];
    vlSelf->top__DOT__print_reg[0x1bU] = vlSelf->print_reg
        [0x1bU];
    vlSelf->top__DOT__print_reg[0x1cU] = vlSelf->print_reg
        [0x1cU];
    vlSelf->top__DOT__print_reg[0x1dU] = vlSelf->print_reg
        [0x1dU];
    vlSelf->top__DOT__print_reg[0x1eU] = vlSelf->print_reg
        [0x1eU];
    vlSelf->top__DOT__print_reg[0x1fU] = vlSelf->print_reg
        [0x1fU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0U] = vlSelf->print_reg
        [0U];
    vlSelf->top__DOT__cpu__DOT__print_reg[1U] = vlSelf->print_reg
        [1U];
    vlSelf->top__DOT__cpu__DOT__print_reg[2U] = vlSelf->print_reg
        [2U];
    vlSelf->top__DOT__cpu__DOT__print_reg[3U] = vlSelf->print_reg
        [3U];
    vlSelf->top__DOT__cpu__DOT__print_reg[4U] = vlSelf->print_reg
        [4U];
    vlSelf->top__DOT__cpu__DOT__print_reg[5U] = vlSelf->print_reg
        [5U];
    vlSelf->top__DOT__cpu__DOT__print_reg[6U] = vlSelf->print_reg
        [6U];
    vlSelf->top__DOT__cpu__DOT__print_reg[7U] = vlSelf->print_reg
        [7U];
    vlSelf->top__DOT__cpu__DOT__print_reg[8U] = vlSelf->print_reg
        [8U];
    vlSelf->top__DOT__cpu__DOT__print_reg[9U] = vlSelf->print_reg
        [9U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xaU] = vlSelf->print_reg
        [0xaU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xbU] = vlSelf->print_reg
        [0xbU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xcU] = vlSelf->print_reg
        [0xcU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xdU] = vlSelf->print_reg
        [0xdU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xeU] = vlSelf->print_reg
        [0xeU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0xfU] = vlSelf->print_reg
        [0xfU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x10U] = 
        vlSelf->print_reg[0x10U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x11U] = 
        vlSelf->print_reg[0x11U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x12U] = 
        vlSelf->print_reg[0x12U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x13U] = 
        vlSelf->print_reg[0x13U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x14U] = 
        vlSelf->print_reg[0x14U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x15U] = 
        vlSelf->print_reg[0x15U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x16U] = 
        vlSelf->print_reg[0x16U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x17U] = 
        vlSelf->print_reg[0x17U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x18U] = 
        vlSelf->print_reg[0x18U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x19U] = 
        vlSelf->print_reg[0x19U];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1aU] = 
        vlSelf->print_reg[0x1aU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1bU] = 
        vlSelf->print_reg[0x1bU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1cU] = 
        vlSelf->print_reg[0x1cU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1dU] = 
        vlSelf->print_reg[0x1dU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1eU] = 
        vlSelf->print_reg[0x1eU];
    vlSelf->top__DOT__cpu__DOT__print_reg[0x1fU] = 
        vlSelf->print_reg[0x1fU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0U] 
        = vlSelf->print_reg[0U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[1U] 
        = vlSelf->print_reg[1U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[2U] 
        = vlSelf->print_reg[2U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[3U] 
        = vlSelf->print_reg[3U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[4U] 
        = vlSelf->print_reg[4U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[5U] 
        = vlSelf->print_reg[5U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[6U] 
        = vlSelf->print_reg[6U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[7U] 
        = vlSelf->print_reg[7U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[8U] 
        = vlSelf->print_reg[8U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[9U] 
        = vlSelf->print_reg[9U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xaU] 
        = vlSelf->print_reg[0xaU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xbU] 
        = vlSelf->print_reg[0xbU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xcU] 
        = vlSelf->print_reg[0xcU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xdU] 
        = vlSelf->print_reg[0xdU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xeU] 
        = vlSelf->print_reg[0xeU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0xfU] 
        = vlSelf->print_reg[0xfU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x10U] 
        = vlSelf->print_reg[0x10U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x11U] 
        = vlSelf->print_reg[0x11U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x12U] 
        = vlSelf->print_reg[0x12U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x13U] 
        = vlSelf->print_reg[0x13U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x14U] 
        = vlSelf->print_reg[0x14U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x15U] 
        = vlSelf->print_reg[0x15U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x16U] 
        = vlSelf->print_reg[0x16U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x17U] 
        = vlSelf->print_reg[0x17U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x18U] 
        = vlSelf->print_reg[0x18U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x19U] 
        = vlSelf->print_reg[0x19U];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1aU] 
        = vlSelf->print_reg[0x1aU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1bU] 
        = vlSelf->print_reg[0x1bU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1cU] 
        = vlSelf->print_reg[0x1cU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1dU] 
        = vlSelf->print_reg[0x1dU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1eU] 
        = vlSelf->print_reg[0x1eU];
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[0x1fU] 
        = vlSelf->print_reg[0x1fU];
    vlSelf->top__DOT__cpu__DOT__is_halted = vlSelf->top__DOT__is_halted;
    vlSelf->top__DOT__cpu__DOT__imem__DOT__dout = vlSelf->top__DOT__cpu__DOT__inst;
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__dout = vlSelf->top__DOT__cpu__DOT__mem_dout;
    vlSelf->top__DOT__cpu__DOT__pc__DOT__reset = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__imem__DOT__reset = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__reset = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__pc__DOT__clk = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__imem__DOT__clk = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__clk 
        = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__clk = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__eq_mux__DOT__rs1_in 
        = vlSelf->top__DOT__cpu__DOT__rs1_in;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1 
        = vlSelf->top__DOT__cpu__DOT__rs1_in;
    vlSelf->top__DOT__cpu__DOT__rs1_dout = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [vlSelf->top__DOT__cpu__DOT__rs1_in];
    vlSelf->top__DOT__cpu__DOT__forward_a_mux__DOT__alu_input1 
        = vlSelf->top__DOT__cpu__DOT__alu_1_forward;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_1 
        = vlSelf->top__DOT__cpu__DOT__alu_1_forward;
    vlSelf->top__DOT__cpu__DOT__forward_b_mux__DOT__Imm_mux_input 
        = vlSelf->top__DOT__cpu__DOT__Imm_mux_input;
    vlSelf->top__DOT__cpu__DOT__Imm_mux__DOT__Imm_mux_input 
        = vlSelf->top__DOT__cpu__DOT__Imm_mux_input;
    vlSelf->top__DOT__cpu__DOT__alu_2_forward = ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_alu_src)
                                                  ? vlSelf->top__DOT__cpu__DOT__ID_EX_imm
                                                  : vlSelf->top__DOT__cpu__DOT__Imm_mux_input);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1_dout 
        = vlSelf->top__DOT__cpu__DOT__rs1_dout;
    vlSelf->top__DOT__cpu__DOT__halt__DOT__rs1_dout 
        = vlSelf->top__DOT__cpu__DOT__rs1_dout;
    vlSelf->top__DOT__cpu__DOT__halt_id = ((IData)(vlSelf->top__DOT__cpu__DOT__is_ecall) 
                                           & (0xaU 
                                              == vlSelf->top__DOT__cpu__DOT__rs1_dout));
    vlSelf->top__DOT__cpu__DOT__Imm_mux__DOT__alu_input2 
        = vlSelf->top__DOT__cpu__DOT__alu_2_forward;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_2 
        = vlSelf->top__DOT__cpu__DOT__alu_2_forward;
    vlSelf->top__DOT__cpu__DOT__bcond = 0U;
    vlSelf->top__DOT__cpu__DOT__alu_result = 0U;
    if ((0U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
        vlSelf->top__DOT__cpu__DOT__alu_result = (vlSelf->top__DOT__cpu__DOT__alu_1_forward 
                                                  + vlSelf->top__DOT__cpu__DOT__alu_2_forward);
    } else if ((1U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
        vlSelf->top__DOT__cpu__DOT__alu_result = (vlSelf->top__DOT__cpu__DOT__alu_1_forward 
                                                  - vlSelf->top__DOT__cpu__DOT__alu_2_forward);
    } else if ((2U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
        vlSelf->top__DOT__cpu__DOT__alu_result = (vlSelf->top__DOT__cpu__DOT__alu_1_forward 
                                                  & vlSelf->top__DOT__cpu__DOT__alu_2_forward);
    } else if ((3U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
        vlSelf->top__DOT__cpu__DOT__alu_result = (vlSelf->top__DOT__cpu__DOT__alu_1_forward 
                                                  | vlSelf->top__DOT__cpu__DOT__alu_2_forward);
    } else if ((4U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
        vlSelf->top__DOT__cpu__DOT__alu_result = (vlSelf->top__DOT__cpu__DOT__alu_1_forward 
                                                  ^ vlSelf->top__DOT__cpu__DOT__alu_2_forward);
    } else if ((5U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
        vlSelf->top__DOT__cpu__DOT__alu_result = VL_SHIFTL_III(32,32,32, vlSelf->top__DOT__cpu__DOT__alu_1_forward, vlSelf->top__DOT__cpu__DOT__alu_2_forward);
    } else if ((6U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
        vlSelf->top__DOT__cpu__DOT__alu_result = VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__cpu__DOT__alu_1_forward, vlSelf->top__DOT__cpu__DOT__alu_2_forward);
    } else if ((7U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
        vlSelf->top__DOT__cpu__DOT__alu_result = (vlSelf->top__DOT__cpu__DOT__alu_1_forward 
                                                  - vlSelf->top__DOT__cpu__DOT__alu_2_forward);
        vlSelf->top__DOT__cpu__DOT__bcond = (0U == vlSelf->top__DOT__cpu__DOT__alu_result);
    } else if ((8U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
        vlSelf->top__DOT__cpu__DOT__alu_result = (vlSelf->top__DOT__cpu__DOT__alu_1_forward 
                                                  - vlSelf->top__DOT__cpu__DOT__alu_2_forward);
        vlSelf->top__DOT__cpu__DOT__bcond = (0U != vlSelf->top__DOT__cpu__DOT__alu_result);
    } else if ((9U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
        vlSelf->top__DOT__cpu__DOT__alu_result = (vlSelf->top__DOT__cpu__DOT__alu_1_forward 
                                                  - vlSelf->top__DOT__cpu__DOT__alu_2_forward);
        vlSelf->top__DOT__cpu__DOT__bcond = VL_LTS_III(32, vlSelf->top__DOT__cpu__DOT__alu_1_forward, vlSelf->top__DOT__cpu__DOT__alu_2_forward);
    } else if ((0xaU == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
        vlSelf->top__DOT__cpu__DOT__alu_result = (vlSelf->top__DOT__cpu__DOT__alu_1_forward 
                                                  - vlSelf->top__DOT__cpu__DOT__alu_2_forward);
        vlSelf->top__DOT__cpu__DOT__bcond = VL_GTES_III(32, vlSelf->top__DOT__cpu__DOT__alu_1_forward, vlSelf->top__DOT__cpu__DOT__alu_2_forward);
    }
    vlSelf->top__DOT__cpu__DOT__halt__DOT__is_halted 
        = vlSelf->top__DOT__cpu__DOT__halt_id;
    vlSelf->top__DOT__cpu__DOT__pc_mux__DOT__jalr_pc 
        = vlSelf->top__DOT__cpu__DOT__alu_result;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_result 
        = vlSelf->top__DOT__cpu__DOT__alu_result;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__bcond = vlSelf->top__DOT__cpu__DOT__bcond;
    vlSelf->top__DOT__cpu__DOT__branch_bubble_unit__DOT__bcond 
        = vlSelf->top__DOT__cpu__DOT__bcond;
    vlSelf->top__DOT__cpu__DOT__bubble = ((((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_is_branch) 
                                            & (IData)(vlSelf->top__DOT__cpu__DOT__bcond)) 
                                           | (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_is_jal)) 
                                          || (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_is_jalr));
    vlSelf->top__DOT__cpu__DOT__pc_src = ((((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_is_branch) 
                                            & (IData)(vlSelf->top__DOT__cpu__DOT__bcond)) 
                                           | (IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_is_jal))
                                           ? 1U : ((IData)(vlSelf->top__DOT__cpu__DOT__ID_EX_is_jalr)
                                                    ? 2U
                                                    : 0U));
    vlSelf->top__DOT__cpu__DOT__branch_bubble_unit__DOT__bubble 
        = vlSelf->top__DOT__cpu__DOT__bubble;
    vlSelf->top__DOT__cpu__DOT__pc_mux__DOT__pc_src 
        = vlSelf->top__DOT__cpu__DOT__pc_src;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__pc_src 
        = vlSelf->top__DOT__cpu__DOT__pc_src;
    vlSelf->top__DOT__cpu__DOT__branch_bubble_unit__DOT__pc_src 
        = vlSelf->top__DOT__cpu__DOT__pc_src;
    vlSelf->top__DOT__cpu__DOT__reg_write = 0U;
    if ((0x33U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
        vlSelf->top__DOT__cpu__DOT__reg_write = 1U;
    } else if ((0x13U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
        vlSelf->top__DOT__cpu__DOT__reg_write = 1U;
    } else if ((0x23U != (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
        if ((3U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
            vlSelf->top__DOT__cpu__DOT__reg_write = 1U;
        } else if ((0x63U != (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
            if ((0x6fU == (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
                vlSelf->top__DOT__cpu__DOT__reg_write = 1U;
            } else if ((0x67U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
                vlSelf->top__DOT__cpu__DOT__reg_write = 1U;
            }
        }
    }
    vlSelf->top__DOT__cpu__DOT__mem_write = 0U;
    vlSelf->top__DOT__cpu__DOT__mem_read = 0U;
    vlSelf->top__DOT__cpu__DOT__is_branch = 0U;
    vlSelf->top__DOT__cpu__DOT__is_jalr = 0U;
    if ((0x33U != (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
        vlSelf->top__DOT__cpu__DOT__is_jal = 0U;
        if ((0x13U != (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
            if ((0x23U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
                vlSelf->top__DOT__cpu__DOT__mem_write = 1U;
            }
            if ((0x23U != (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
                if ((3U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
                    vlSelf->top__DOT__cpu__DOT__mem_read = 1U;
                }
                if ((3U != (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
                    if ((0x63U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
                        vlSelf->top__DOT__cpu__DOT__is_branch = 1U;
                    }
                    if ((0x63U != (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
                        if ((0x6fU != (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
                            if ((0x67U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
                                vlSelf->top__DOT__cpu__DOT__is_jalr = 1U;
                            }
                        }
                        if ((0x6fU == (0x7fU & vlSelf->top__DOT__cpu__DOT__IF_ID_inst))) {
                            vlSelf->top__DOT__cpu__DOT__is_jal = 1U;
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->top__DOT__cpu__DOT__is_jal = 0U;
    }
    if ((((IData)(vlSelf->top__DOT__cpu__DOT__stall) 
          | (0U != (IData)(vlSelf->top__DOT__cpu__DOT__pc_src))) 
         | (IData)(vlSelf->top__DOT__cpu__DOT__IF_ID_bubble))) {
        vlSelf->top__DOT__cpu__DOT__reg_write = 0U;
        vlSelf->top__DOT__cpu__DOT__mem_write = 0U;
        vlSelf->top__DOT__cpu__DOT__mem_read = 0U;
        vlSelf->top__DOT__cpu__DOT__is_branch = 0U;
        vlSelf->top__DOT__cpu__DOT__is_jalr = 0U;
        vlSelf->top__DOT__cpu__DOT__is_jal = 0U;
    }
    vlSelf->top__DOT__cpu__DOT__next_pc = ((0U == (IData)(vlSelf->top__DOT__cpu__DOT__pc_src))
                                            ? ((IData)(4U) 
                                               + vlSelf->top__DOT__cpu__DOT__current_pc)
                                            : ((1U 
                                                == (IData)(vlSelf->top__DOT__cpu__DOT__pc_src))
                                                ? vlSelf->top__DOT__cpu__DOT__imm_plus_pc
                                                : vlSelf->top__DOT__cpu__DOT__alu_result));
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__reg_write 
        = vlSelf->top__DOT__cpu__DOT__reg_write;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_write 
        = vlSelf->top__DOT__cpu__DOT__mem_write;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_read 
        = vlSelf->top__DOT__cpu__DOT__mem_read;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__branch 
        = vlSelf->top__DOT__cpu__DOT__is_branch;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_jalr 
        = vlSelf->top__DOT__cpu__DOT__is_jalr;
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_jal 
        = vlSelf->top__DOT__cpu__DOT__is_jal;
    vlSelf->top__DOT__cpu__DOT__pc_mux__DOT__next_pc 
        = vlSelf->top__DOT__cpu__DOT__next_pc;
    vlSelf->top__DOT__cpu__DOT__pc__DOT__next_pc = vlSelf->top__DOT__cpu__DOT__next_pc;
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->is_halted = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__is_halted = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_halted = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc_src = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__imm_plus_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__rs1_in = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__rs1_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__rs2_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imm_gen_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__bubble = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__IF_ID_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu_src = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__halt_id = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__bcond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__forward_a = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__forward_b = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__alu_1_forward = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_2_forward = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__Imm_mux_input = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mem_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__rd_din = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__IF_ID_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__IF_ID_bubble = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__IF_ID_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_alu_op = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_alu_src = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_is_halted = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_is_branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_is_jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ID_EX_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__ID_EX_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__ID_EX_rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__ID_EX_rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__ID_EX_inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_is_halted = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_is_jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_alu_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_dmem_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__EX_MEM_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_is_halted = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_is_jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__MEM_WB_mem_to_reg_src_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__halt_flag = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc_mux__DOT__pc_src = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__pc_mux__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc_mux__DOT__imm_plus_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc_mux__DOT__jalr_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc_mux__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__pc_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc__DOT__pc_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imem__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__imem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__imem__DOT__imem_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__eq_mux__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__eq_mux__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__eq_mux__DOT__rs1_in = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd_din = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__write_enable = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2_dout = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__print_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__part_of_inst = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__pc_src = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__bubble = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__alu_src = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__ctrl_unit__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__hazard__DOT__ID_EX_mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__hazard__DOT__ID_EX_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__hazard__DOT__EX_MEM_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__hazard__DOT__id_rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__hazard__DOT__id_rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__hazard__DOT__ex_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__hazard__DOT__mem_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__hazard__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__hazard__DOT__stall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__hazard__DOT__pc_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__hazard__DOT__IF_ID_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__halt__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__halt__DOT__rs1_dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__halt__DOT__is_halted = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__imm_gen_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__imm_gen__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__cpu__DOT__alu_ctrl_unit__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__forward_a_mux__DOT__forward_a = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__forward_a_mux__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__forward_a_mux__DOT__MEM_WB_output = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__forward_a_mux__DOT__EX_MEM_alu_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__forward_a_mux__DOT__alu_input1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__forward_b_mux__DOT__forward_b = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__forward_b_mux__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__forward_b_mux__DOT__MEM_WB_output = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__forward_b_mux__DOT__EX_MEM_alu_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__forward_b_mux__DOT__Imm_mux_input = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__Imm_mux__DOT__alu_src = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__Imm_mux__DOT__Imm_mux_input = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__Imm_mux__DOT__imm_gen_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__Imm_mux__DOT__alu_input2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc_imm_alu__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc_imm_alu__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__pc_imm_alu__DOT__imm_plus_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_op = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__alu__DOT__bcond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_bubble_unit__DOT__ID_EX_is_branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_bubble_unit__DOT__ID_EX_is_jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_bubble_unit__DOT__ID_EX_is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_bubble_unit__DOT__bcond = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_bubble_unit__DOT__bubble = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__branch_bubble_unit__DOT__pc_src = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__din = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__dout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->top__DOT__cpu__DOT__dmem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu__DOT__dmem__DOT__dmem_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mem_src_mux__DOT__mem2reg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_src_mux__DOT__is_jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_src_mux__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__mem_src_mux__DOT__cur_pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mem_src_mux__DOT__MEM_src_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mem_src_mux__DOT__MEM_src_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__mem_src_mux__DOT__MEM_output = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu__DOT__forward_unit__DOT__ID_EX_rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__forward_unit__DOT__ID_EX_rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__forward_unit__DOT__EX_MEM_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__forward_unit__DOT__MEM_WB_reg_write = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu__DOT__forward_unit__DOT__EX_MEM_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__forward_unit__DOT__MEM_WB_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__cpu__DOT__forward_unit__DOT__forward_a = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__cpu__DOT__forward_unit__DOT__forward_b = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
