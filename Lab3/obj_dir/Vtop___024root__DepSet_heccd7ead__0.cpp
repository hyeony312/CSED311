// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__reset = vlSelf->reset;
    vlSelf->top__DOT__clk = vlSelf->clk;
    vlSelf->top__DOT__cpu__DOT__reset = vlSelf->top__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__clk = vlSelf->top__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__pc__DOT__reset = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__reset 
        = vlSelf->top__DOT__cpu__DOT__reset;
    vlSelf->top__DOT__cpu__DOT__pc__DOT__clk = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__clk 
        = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__clk = vlSelf->top__DOT__cpu__DOT__clk;
    vlSelf->top__DOT__cpu__DOT__control_unit__DOT__clk 
        = vlSelf->top__DOT__cpu__DOT__clk;
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

extern const VlWide<14>/*447:0*/ Vtop__ConstPool__CONST_h6ed001c2_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h1b888275_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h03616de7_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h6268767d_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_hfbc69de0_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h066a3c3f_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h6c8a0d7c_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h873cb2cd_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_hdd25b741_0;
extern const VlUnpacked<CData/*1:0*/, 1024> Vtop__ConstPool__TABLE_h63de45f4_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_ha1c37c1d_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_h992d82e3_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_hdf2a67f4_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_hb1bb23c9_0;
extern const VlUnpacked<SData/*13:0*/, 1024> Vtop__ConstPool__TABLE_h54a6aacc_0;
extern const VlUnpacked<CData/*2:0*/, 1024> Vtop__ConstPool__TABLE_h915c4994_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*13:0*/ __Vdlyvdim0__top__DOT__cpu__DOT__memory__DOT__mem__v0;
    __Vdlyvdim0__top__DOT__cpu__DOT__memory__DOT__mem__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__cpu__DOT__memory__DOT__mem__v0;
    __Vdlyvval__top__DOT__cpu__DOT__memory__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cpu__DOT__memory__DOT__mem__v0;
    __Vdlyvset__top__DOT__cpu__DOT__memory__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__top__DOT__cpu__DOT__memory__DOT__mem__v0 = 0U;
    vlSelf->__Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 0U;
    vlSelf->__Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v33 = 0U;
    if (vlSelf->reset) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 1U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 2U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 3U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 4U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 5U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 6U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 7U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 8U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 9U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0xaU;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0xbU;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0xcU;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0xdU;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0xeU;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0xfU;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x10U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x11U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x12U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x13U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x14U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x15U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x16U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x17U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x18U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x19U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x1aU;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x1bU;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x1cU;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x1dU;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x1eU;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x1fU;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__i = 0x20U;
    }
    if (VL_UNLIKELY(vlSelf->reset)) {
        vlSelf->top__DOT__cpu__DOT__memory__DOT__i = 0U;
        while (VL_GTS_III(32, 0x4000U, vlSelf->top__DOT__cpu__DOT__memory__DOT__i)) {
            vlSelf->top__DOT__cpu__DOT__memory__DOT__mem[(0x3fffU 
                                                          & vlSelf->top__DOT__cpu__DOT__memory__DOT__i)] = 0U;
            vlSelf->top__DOT__cpu__DOT__memory__DOT__i 
                = ((IData)(1U) + vlSelf->top__DOT__cpu__DOT__memory__DOT__i);
        }
        VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(14, Vtop__ConstPool__CONST_h6ed001c2_0)
                     ,  &(vlSelf->top__DOT__cpu__DOT__memory__DOT__mem)
                     , 0, ~0ULL);
    } else if (vlSelf->top__DOT__cpu__DOT__mem_write) {
        __Vdlyvval__top__DOT__cpu__DOT__memory__DOT__mem__v0 
            = vlSelf->top__DOT__cpu__DOT__B;
        __Vdlyvset__top__DOT__cpu__DOT__memory__DOT__mem__v0 = 1U;
        __Vdlyvdim0__top__DOT__cpu__DOT__memory__DOT__mem__v0 
            = (0x3fffU & vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_addr);
    }
    if (vlSelf->reset) {
        vlSelf->__Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0 = 1U;
        vlSelf->top__DOT__cpu__DOT__current_pc = 0U;
    } else {
        if (vlSelf->top__DOT__cpu__DOT__reg_write) {
            vlSelf->__Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v33 
                = ((0U == (0x1fU & (vlSelf->top__DOT__cpu__DOT__IR 
                                    >> 7U))) ? 0U : vlSelf->top__DOT__cpu__DOT__rd_din);
            vlSelf->__Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v33 = 1U;
            vlSelf->__Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v33 
                = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IR 
                            >> 7U));
        }
        if (vlSelf->top__DOT__cpu__DOT__pc_write) {
            vlSelf->top__DOT__cpu__DOT__current_pc 
                = vlSelf->top__DOT__cpu__DOT__next_pc;
        }
    }
    vlSelf->top__DOT__cpu__DOT__MDR = vlSelf->top__DOT__cpu__DOT__mem_out;
    vlSelf->top__DOT__cpu__DOT__ALUOut = vlSelf->top__DOT__cpu__DOT__alu_result;
    vlSelf->top__DOT__cpu__DOT__control_unit__DOT__curr_stage 
        = vlSelf->top__DOT__cpu__DOT__control_unit__DOT__next_stage;
    if (__Vdlyvset__top__DOT__cpu__DOT__memory__DOT__mem__v0) {
        vlSelf->top__DOT__cpu__DOT__memory__DOT__mem[__Vdlyvdim0__top__DOT__cpu__DOT__memory__DOT__mem__v0] 
            = __Vdlyvval__top__DOT__cpu__DOT__memory__DOT__mem__v0;
    }
    if (vlSelf->top__DOT__cpu__DOT__irwrite) {
        vlSelf->top__DOT__cpu__DOT__IR = vlSelf->top__DOT__cpu__DOT__mem_out;
    }
    vlSelf->top__DOT__cpu__DOT__mem2reg_mux__DOT__MDR 
        = vlSelf->top__DOT__cpu__DOT__MDR;
    vlSelf->top__DOT__cpu__DOT__pc_mux__DOT__ALUOut 
        = vlSelf->top__DOT__cpu__DOT__ALUOut;
    vlSelf->top__DOT__cpu__DOT__mem_mux__DOT__ALUOut 
        = vlSelf->top__DOT__cpu__DOT__ALUOut;
    vlSelf->top__DOT__cpu__DOT__mem2reg_mux__DOT__ALUOut 
        = vlSelf->top__DOT__cpu__DOT__ALUOut;
    vlSelf->top__DOT__cpu__DOT__pc__DOT__current_pc 
        = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__pc_mux__DOT__current_pc 
        = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__mem_mux__DOT__pc = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__alu_input1_mux__DOT__PC 
        = vlSelf->top__DOT__cpu__DOT__current_pc;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1 
        = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IR 
                    >> 0xfU));
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2 
        = (0x1fU & (vlSelf->top__DOT__cpu__DOT__IR 
                    >> 0x14U));
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd = 
        (0x1fU & (vlSelf->top__DOT__cpu__DOT__IR >> 7U));
    vlSelf->top__DOT__cpu__DOT__control_unit__DOT__opcode 
        = (0x7fU & (vlSelf->top__DOT__cpu__DOT__IR 
                    >> 0U));
    vlSelf->top__DOT__cpu__DOT__immediate_generator__DOT__instr 
        = vlSelf->top__DOT__cpu__DOT__IR;
    vlSelf->top__DOT__cpu__DOT__alu_control_unit__DOT__opcode 
        = (0x7fU & (vlSelf->top__DOT__cpu__DOT__IR 
                    >> 0U));
    vlSelf->top__DOT__cpu__DOT__alu_control_unit__DOT__funct7 
        = (1U & (vlSelf->top__DOT__cpu__DOT__IR >> 0x1eU));
    vlSelf->top__DOT__cpu__DOT__alu_control_unit__DOT__funct3 
        = (7U & (vlSelf->top__DOT__cpu__DOT__IR >> 0xcU));
    vlSelf->top__DOT__cpu__DOT__immediate_generator__DOT__opcode 
        = (0x7fU & vlSelf->top__DOT__cpu__DOT__IR);
    vlSelf->top__DOT__cpu__DOT__imm_gen_out = ((((0x13U 
                                                  == (IData)(vlSelf->top__DOT__cpu__DOT__immediate_generator__DOT__opcode)) 
                                                 | (3U 
                                                    == (IData)(vlSelf->top__DOT__cpu__DOT__immediate_generator__DOT__opcode))) 
                                                | (0x67U 
                                                   == (IData)(vlSelf->top__DOT__cpu__DOT__immediate_generator__DOT__opcode)))
                                                ? (
                                                   ((- (IData)(
                                                               (vlSelf->top__DOT__cpu__DOT__IR 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->top__DOT__cpu__DOT__IR 
                                                      >> 0x14U))
                                                : (
                                                   (0x23U 
                                                    == (IData)(vlSelf->top__DOT__cpu__DOT__immediate_generator__DOT__opcode))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->top__DOT__cpu__DOT__IR 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0xfe0U 
                                                        & (vlSelf->top__DOT__cpu__DOT__IR 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelf->top__DOT__cpu__DOT__IR 
                                                             >> 7U))))
                                                    : 
                                                   ((0x63U 
                                                     == (IData)(vlSelf->top__DOT__cpu__DOT__immediate_generator__DOT__opcode))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->top__DOT__cpu__DOT__IR 
                                                                  >> 0x1fU))) 
                                                      << 0xdU) 
                                                     | ((0x1000U 
                                                         & (vlSelf->top__DOT__cpu__DOT__IR 
                                                            >> 0x13U)) 
                                                        | ((0x800U 
                                                            & (vlSelf->top__DOT__cpu__DOT__IR 
                                                               << 4U)) 
                                                           | ((0x7e0U 
                                                               & (vlSelf->top__DOT__cpu__DOT__IR 
                                                                  >> 0x14U)) 
                                                              | (0x1eU 
                                                                 & (vlSelf->top__DOT__cpu__DOT__IR 
                                                                    >> 7U))))))
                                                     : 
                                                    ((0x6fU 
                                                      == (IData)(vlSelf->top__DOT__cpu__DOT__immediate_generator__DOT__opcode))
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->top__DOT__cpu__DOT__IR 
                                                                   >> 0x1fU))) 
                                                       << 0x15U) 
                                                      | ((0x100000U 
                                                          & (vlSelf->top__DOT__cpu__DOT__IR 
                                                             >> 0xbU)) 
                                                         | ((0xff000U 
                                                             & vlSelf->top__DOT__cpu__DOT__IR) 
                                                            | ((0x800U 
                                                                & (vlSelf->top__DOT__cpu__DOT__IR 
                                                                   >> 9U)) 
                                                               | (0x7feU 
                                                                  & (vlSelf->top__DOT__cpu__DOT__IR 
                                                                     >> 0x14U))))))
                                                      : 0U))));
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__cpu__DOT__control_unit__DOT__curr_stage) 
                     << 7U) | (0x7fU & vlSelf->top__DOT__cpu__DOT__IR));
    vlSelf->top__DOT__cpu__DOT__alu_pc = Vtop__ConstPool__TABLE_h1b888275_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__mem_read = Vtop__ConstPool__TABLE_h03616de7_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__mem_to_reg = Vtop__ConstPool__TABLE_h6268767d_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__mem_write = Vtop__ConstPool__TABLE_hfbc69de0_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__pc_source = Vtop__ConstPool__TABLE_h066a3c3f_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__pc_branch = Vtop__ConstPool__TABLE_h6c8a0d7c_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__pc_write = Vtop__ConstPool__TABLE_h873cb2cd_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__alu_src_a = Vtop__ConstPool__TABLE_hdd25b741_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__alu_src_b = Vtop__ConstPool__TABLE_h63de45f4_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__reg_write = Vtop__ConstPool__TABLE_ha1c37c1d_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__iord = Vtop__ConstPool__TABLE_h992d82e3_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__irwrite = Vtop__ConstPool__TABLE_hdf2a67f4_0
        [__Vtableidx1];
    vlSelf->top__DOT__cpu__DOT__is_ecall = Vtop__ConstPool__TABLE_hb1bb23c9_0
        [__Vtableidx1];
    if ((0x2000U & Vtop__ConstPool__TABLE_h54a6aacc_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__cpu__DOT__control_unit__DOT__next_stage 
            = Vtop__ConstPool__TABLE_h915c4994_0[__Vtableidx1];
    }
    vlSelf->top__DOT__cpu__DOT__alu_input2_mux__DOT__imm_gen_out 
        = vlSelf->top__DOT__cpu__DOT__imm_gen_out;
    vlSelf->top__DOT__cpu__DOT__immediate_generator__DOT__imm_gen_out 
        = vlSelf->top__DOT__cpu__DOT__imm_gen_out;
    vlSelf->top__DOT__cpu__DOT__control_unit__DOT__irwrite 
        = vlSelf->top__DOT__cpu__DOT__irwrite;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_write 
        = vlSelf->top__DOT__cpu__DOT__mem_write;
    vlSelf->top__DOT__cpu__DOT__control_unit__DOT__mem_write 
        = vlSelf->top__DOT__cpu__DOT__mem_write;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__write_enable 
        = vlSelf->top__DOT__cpu__DOT__reg_write;
    vlSelf->top__DOT__cpu__DOT__control_unit__DOT__reg_write 
        = vlSelf->top__DOT__cpu__DOT__reg_write;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__is_ecall 
        = vlSelf->top__DOT__cpu__DOT__is_ecall;
    vlSelf->top__DOT__cpu__DOT__control_unit__DOT__is_ecall 
        = vlSelf->top__DOT__cpu__DOT__is_ecall;
    if (vlSelf->top__DOT__cpu__DOT__pc_write) {
        vlSelf->top__DOT__cpu__DOT__pc__DOT__pc_write = 1U;
        vlSelf->top__DOT__cpu__DOT__pc__DOT__pc_enable = 0U;
        vlSelf->top__DOT__cpu__DOT__pc__DOT__pc_enable = 1U;
        vlSelf->top__DOT__cpu__DOT__control_unit__DOT__pc_write = 1U;
    } else {
        vlSelf->top__DOT__cpu__DOT__pc__DOT__pc_write = 0U;
        vlSelf->top__DOT__cpu__DOT__pc__DOT__pc_enable = 0U;
        vlSelf->top__DOT__cpu__DOT__control_unit__DOT__pc_write = 0U;
    }
    vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_read 
        = vlSelf->top__DOT__cpu__DOT__mem_read;
    vlSelf->top__DOT__cpu__DOT__control_unit__DOT__mem_read 
        = vlSelf->top__DOT__cpu__DOT__mem_read;
    if (vlSelf->top__DOT__cpu__DOT__mem_to_reg) {
        vlSelf->top__DOT__cpu__DOT__mem2reg_mux__DOT__mem_to_reg = 1U;
        vlSelf->top__DOT__cpu__DOT__control_unit__DOT__mem_to_reg = 1U;
        vlSelf->top__DOT__cpu__DOT__rd_din = vlSelf->top__DOT__cpu__DOT__MDR;
    } else {
        vlSelf->top__DOT__cpu__DOT__mem2reg_mux__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__cpu__DOT__control_unit__DOT__mem_to_reg = 0U;
        vlSelf->top__DOT__cpu__DOT__rd_din = vlSelf->top__DOT__cpu__DOT__ALUOut;
    }
    vlSelf->top__DOT__cpu__DOT__pc_mux__DOT__pc_source 
        = vlSelf->top__DOT__cpu__DOT__pc_source;
    vlSelf->top__DOT__cpu__DOT__control_unit__DOT__pc_source 
        = vlSelf->top__DOT__cpu__DOT__pc_source;
    vlSelf->top__DOT__cpu__DOT__pc_mux__DOT__pc_branch 
        = vlSelf->top__DOT__cpu__DOT__pc_branch;
    vlSelf->top__DOT__cpu__DOT__control_unit__DOT__pc_branch 
        = vlSelf->top__DOT__cpu__DOT__pc_branch;
    if (vlSelf->top__DOT__cpu__DOT__iord) {
        vlSelf->top__DOT__cpu__DOT__mem_mux__DOT__iord = 1U;
        vlSelf->top__DOT__cpu__DOT__control_unit__DOT__iord = 1U;
        vlSelf->top__DOT__cpu__DOT__addr = vlSelf->top__DOT__cpu__DOT__ALUOut;
    } else {
        vlSelf->top__DOT__cpu__DOT__mem_mux__DOT__iord = 0U;
        vlSelf->top__DOT__cpu__DOT__control_unit__DOT__iord = 0U;
        vlSelf->top__DOT__cpu__DOT__addr = vlSelf->top__DOT__cpu__DOT__current_pc;
    }
    if (vlSelf->top__DOT__cpu__DOT__alu_pc) {
        vlSelf->top__DOT__cpu__DOT__control_unit__DOT__alu_pc = 1U;
        vlSelf->top__DOT__cpu__DOT__alu_control_unit__DOT__alu_pc = 1U;
        vlSelf->top__DOT__cpu__DOT__alu_op = 0U;
        vlSelf->top__DOT__cpu__DOT__alu_op = 0U;
    } else {
        vlSelf->top__DOT__cpu__DOT__control_unit__DOT__alu_pc = 0U;
        vlSelf->top__DOT__cpu__DOT__alu_control_unit__DOT__alu_pc = 0U;
        vlSelf->top__DOT__cpu__DOT__alu_op = 0U;
        if ((IData)((0x40000033U == (0x4000007fU & vlSelf->top__DOT__cpu__DOT__IR)))) {
            vlSelf->top__DOT__cpu__DOT__alu_op = 1U;
        } else if ((((((0x6fU == (0x7fU & vlSelf->top__DOT__cpu__DOT__IR)) 
                       | (0x67U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IR))) 
                      | (3U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IR))) 
                     | (0x23U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IR))) 
                    | (IData)(((0U == (0x7000U & vlSelf->top__DOT__cpu__DOT__IR)) 
                               & ((0x33U == (0x7fU 
                                             & vlSelf->top__DOT__cpu__DOT__IR)) 
                                  | (0x13U == (0x7fU 
                                               & vlSelf->top__DOT__cpu__DOT__IR))))))) {
            vlSelf->top__DOT__cpu__DOT__alu_op = 0U;
        } else if ((0x63U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IR))) {
            vlSelf->top__DOT__cpu__DOT__alu_op = ((0U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->top__DOT__cpu__DOT__IR 
                                                       >> 0xcU)))
                                                   ? 7U
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->top__DOT__cpu__DOT__IR 
                                                        >> 0xcU)))
                                                    ? 0xaU
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->top__DOT__cpu__DOT__IR 
                                                         >> 0xcU)))
                                                     ? 9U
                                                     : 8U)));
        } else if ((0x13U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IR))) {
            if ((4U == (7U & (vlSelf->top__DOT__cpu__DOT__IR 
                              >> 0xcU)))) {
                vlSelf->top__DOT__cpu__DOT__alu_op = 4U;
            } else if ((6U == (7U & (vlSelf->top__DOT__cpu__DOT__IR 
                                     >> 0xcU)))) {
                vlSelf->top__DOT__cpu__DOT__alu_op = 3U;
            } else if ((7U == (7U & (vlSelf->top__DOT__cpu__DOT__IR 
                                     >> 0xcU)))) {
                vlSelf->top__DOT__cpu__DOT__alu_op = 2U;
            } else if ((1U == (7U & (vlSelf->top__DOT__cpu__DOT__IR 
                                     >> 0xcU)))) {
                vlSelf->top__DOT__cpu__DOT__alu_op = 5U;
            } else if ((5U == (7U & (vlSelf->top__DOT__cpu__DOT__IR 
                                     >> 0xcU)))) {
                vlSelf->top__DOT__cpu__DOT__alu_op = 6U;
            }
        } else if ((0x33U == (0x7fU & vlSelf->top__DOT__cpu__DOT__IR))) {
            if ((4U == (7U & (vlSelf->top__DOT__cpu__DOT__IR 
                              >> 0xcU)))) {
                vlSelf->top__DOT__cpu__DOT__alu_op = 4U;
            } else if ((6U == (7U & (vlSelf->top__DOT__cpu__DOT__IR 
                                     >> 0xcU)))) {
                vlSelf->top__DOT__cpu__DOT__alu_op = 3U;
            } else if ((7U == (7U & (vlSelf->top__DOT__cpu__DOT__IR 
                                     >> 0xcU)))) {
                vlSelf->top__DOT__cpu__DOT__alu_op = 2U;
            } else if ((1U == (7U & (vlSelf->top__DOT__cpu__DOT__IR 
                                     >> 0xcU)))) {
                vlSelf->top__DOT__cpu__DOT__alu_op = 5U;
            } else if ((5U == (7U & (vlSelf->top__DOT__cpu__DOT__IR 
                                     >> 0xcU)))) {
                vlSelf->top__DOT__cpu__DOT__alu_op = 6U;
            }
        }
    }
    vlSelf->top__DOT__cpu__DOT__alu_input1_mux__DOT__alu_src_a 
        = vlSelf->top__DOT__cpu__DOT__alu_src_a;
    vlSelf->top__DOT__cpu__DOT__control_unit__DOT__alu_src_a 
        = vlSelf->top__DOT__cpu__DOT__alu_src_a;
    vlSelf->top__DOT__cpu__DOT__alu_input2_mux__DOT__alu_src_b 
        = vlSelf->top__DOT__cpu__DOT__alu_src_b;
    vlSelf->top__DOT__cpu__DOT__control_unit__DOT__alu_src_b 
        = vlSelf->top__DOT__cpu__DOT__alu_src_b;
    vlSelf->top__DOT__cpu__DOT__mem2reg_mux__DOT__rd_din 
        = vlSelf->top__DOT__cpu__DOT__rd_din;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rd_din 
        = vlSelf->top__DOT__cpu__DOT__rd_din;
    vlSelf->top__DOT__cpu__DOT__mem_mux__DOT__addr 
        = vlSelf->top__DOT__cpu__DOT__addr;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__addr = vlSelf->top__DOT__cpu__DOT__addr;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_addr 
        = VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__cpu__DOT__addr, 2U);
    vlSelf->top__DOT__cpu__DOT__alu_control_unit__DOT__alu_op 
        = vlSelf->top__DOT__cpu__DOT__alu_op;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_op = vlSelf->top__DOT__cpu__DOT__alu_op;
    vlSelf->top__DOT__cpu__DOT__mem_out = ((IData)(vlSelf->top__DOT__cpu__DOT__mem_read)
                                            ? vlSelf->top__DOT__cpu__DOT__memory__DOT__mem
                                           [(0x3fffU 
                                             & vlSelf->top__DOT__cpu__DOT__memory__DOT__mem_addr)]
                                            : 0U);
    vlSelf->top__DOT__cpu__DOT__memory__DOT__dout = vlSelf->top__DOT__cpu__DOT__mem_out;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    if ((0xaU == vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
         [0x11U])) {
        vlSelf->is_halted = 1U;
    }
    vlSelf->top__DOT__is_halted = vlSelf->is_halted;
    vlSelf->top__DOT__cpu__DOT__is_halted = vlSelf->top__DOT__is_halted;
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__is_halted 
        = vlSelf->top__DOT__cpu__DOT__is_halted;
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->__Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v0) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[1U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[2U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[3U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[4U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[5U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[6U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[7U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[8U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[9U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0xaU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0xbU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0xcU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0xdU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0xeU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0xfU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x10U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x11U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x12U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x13U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x14U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x15U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x16U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x17U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x18U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x19U] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x1aU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x1bU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x1cU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x1dU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x1eU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[0x1fU] = 0U;
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[2U] = 0x2ffcU;
    }
    if (vlSelf->__Vdlyvset__top__DOT__cpu__DOT__reg_file__DOT__rf__v33) {
        vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf[vlSelf->__Vdlyvdim0__top__DOT__cpu__DOT__reg_file__DOT__rf__v33] 
            = vlSelf->__Vdlyvval__top__DOT__cpu__DOT__reg_file__DOT__rf__v33;
    }
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
    vlSelf->top__DOT__cpu__DOT__A = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelf->top__DOT__cpu__DOT__IR >> 0xfU))];
    vlSelf->top__DOT__cpu__DOT__B = vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rf
        [(0x1fU & (vlSelf->top__DOT__cpu__DOT__IR >> 0x14U))];
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
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs1_dout 
        = vlSelf->top__DOT__cpu__DOT__A;
    vlSelf->top__DOT__cpu__DOT__alu_input1_mux__DOT__A 
        = vlSelf->top__DOT__cpu__DOT__A;
    vlSelf->top__DOT__cpu__DOT__alu_in_1 = ((IData)(vlSelf->top__DOT__cpu__DOT__alu_src_a)
                                             ? vlSelf->top__DOT__cpu__DOT__A
                                             : vlSelf->top__DOT__cpu__DOT__current_pc);
    vlSelf->top__DOT__cpu__DOT__reg_file__DOT__rs2_dout 
        = vlSelf->top__DOT__cpu__DOT__B;
    vlSelf->top__DOT__cpu__DOT__alu_input2_mux__DOT__B 
        = vlSelf->top__DOT__cpu__DOT__B;
    vlSelf->top__DOT__cpu__DOT__memory__DOT__din = vlSelf->top__DOT__cpu__DOT__B;
    vlSelf->top__DOT__cpu__DOT__alu_in_2 = ((0U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_src_b))
                                             ? vlSelf->top__DOT__cpu__DOT__B
                                             : ((1U 
                                                 == (IData)(vlSelf->top__DOT__cpu__DOT__alu_src_b))
                                                 ? 4U
                                                 : vlSelf->top__DOT__cpu__DOT__imm_gen_out));
    vlSelf->top__DOT__cpu__DOT__alu_input1_mux__DOT__alu_in_1 
        = vlSelf->top__DOT__cpu__DOT__alu_in_1;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_1 
        = vlSelf->top__DOT__cpu__DOT__alu_in_1;
    vlSelf->top__DOT__cpu__DOT__alu_input2_mux__DOT__alu_in_2 
        = vlSelf->top__DOT__cpu__DOT__alu_in_2;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_in_2 
        = vlSelf->top__DOT__cpu__DOT__alu_in_2;
    vlSelf->top__DOT__cpu__DOT__bcond = 0U;
    vlSelf->top__DOT__cpu__DOT__alu_result = 0U;
    if ((0U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
        vlSelf->top__DOT__cpu__DOT__alu_result = (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                  + vlSelf->top__DOT__cpu__DOT__alu_in_2);
    } else if ((1U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
        vlSelf->top__DOT__cpu__DOT__alu_result = (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                  - vlSelf->top__DOT__cpu__DOT__alu_in_2);
    } else if ((2U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
        vlSelf->top__DOT__cpu__DOT__alu_result = (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                  & vlSelf->top__DOT__cpu__DOT__alu_in_2);
    } else if ((3U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
        vlSelf->top__DOT__cpu__DOT__alu_result = (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                  | vlSelf->top__DOT__cpu__DOT__alu_in_2);
    } else if ((4U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
        vlSelf->top__DOT__cpu__DOT__alu_result = (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                  ^ vlSelf->top__DOT__cpu__DOT__alu_in_2);
    } else if ((5U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
        vlSelf->top__DOT__cpu__DOT__alu_result = VL_SHIFTL_III(32,32,32, vlSelf->top__DOT__cpu__DOT__alu_in_1, vlSelf->top__DOT__cpu__DOT__alu_in_2);
    } else if ((6U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
        vlSelf->top__DOT__cpu__DOT__alu_result = VL_SHIFTR_III(32,32,32, vlSelf->top__DOT__cpu__DOT__alu_in_1, vlSelf->top__DOT__cpu__DOT__alu_in_2);
    } else if ((7U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
        vlSelf->top__DOT__cpu__DOT__alu_result = (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                  - vlSelf->top__DOT__cpu__DOT__alu_in_2);
        vlSelf->top__DOT__cpu__DOT__bcond = (0U == vlSelf->top__DOT__cpu__DOT__alu_result);
    } else if ((8U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
        vlSelf->top__DOT__cpu__DOT__alu_result = (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                  - vlSelf->top__DOT__cpu__DOT__alu_in_2);
        vlSelf->top__DOT__cpu__DOT__bcond = (0U != vlSelf->top__DOT__cpu__DOT__alu_result);
    } else if ((9U == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
        vlSelf->top__DOT__cpu__DOT__alu_result = (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                  - vlSelf->top__DOT__cpu__DOT__alu_in_2);
        vlSelf->top__DOT__cpu__DOT__bcond = VL_LTS_III(32, vlSelf->top__DOT__cpu__DOT__alu_in_1, vlSelf->top__DOT__cpu__DOT__alu_in_2);
    } else if ((0xaU == (IData)(vlSelf->top__DOT__cpu__DOT__alu_op))) {
        vlSelf->top__DOT__cpu__DOT__alu_result = (vlSelf->top__DOT__cpu__DOT__alu_in_1 
                                                  - vlSelf->top__DOT__cpu__DOT__alu_in_2);
        vlSelf->top__DOT__cpu__DOT__bcond = VL_GTES_III(32, vlSelf->top__DOT__cpu__DOT__alu_in_1, vlSelf->top__DOT__cpu__DOT__alu_in_2);
    }
    vlSelf->top__DOT__cpu__DOT__pc_mux__DOT__bcond 
        = vlSelf->top__DOT__cpu__DOT__bcond;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__bcond = vlSelf->top__DOT__cpu__DOT__bcond;
    vlSelf->top__DOT__cpu__DOT__pc_mux__DOT__alu_result 
        = vlSelf->top__DOT__cpu__DOT__alu_result;
    vlSelf->top__DOT__cpu__DOT__alu__DOT__alu_result 
        = vlSelf->top__DOT__cpu__DOT__alu_result;
    vlSelf->top__DOT__cpu__DOT__next_pc = ((IData)(vlSelf->top__DOT__cpu__DOT__pc_branch)
                                            ? ((IData)(vlSelf->top__DOT__cpu__DOT__bcond)
                                                ? vlSelf->top__DOT__cpu__DOT__ALUOut
                                                : ((IData)(4U) 
                                                   + vlSelf->top__DOT__cpu__DOT__current_pc))
                                            : ((IData)(vlSelf->top__DOT__cpu__DOT__pc_source)
                                                ? vlSelf->top__DOT__cpu__DOT__ALUOut
                                                : vlSelf->top__DOT__cpu__DOT__alu_result));
    vlSelf->top__DOT__cpu__DOT__pc__DOT__next_pc = vlSelf->top__DOT__cpu__DOT__next_pc;
    vlSelf->top__DOT__cpu__DOT__pc_mux__DOT__next_pc 
        = vlSelf->top__DOT__cpu__DOT__next_pc;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("top.v", 2, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top.v", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top.v", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
