// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvending_machine.h for the primary calling header

#include "Vvending_machine__pch.h"
#include "Vvending_machine___024root.h"

VL_INLINE_OPT void Vvending_machine___024root___ico_sequent__TOP__0(Vvending_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->o_output_item = 0U;
    if ((0U == (IData)(vlSelf->i_input_coin))) {
        if ((0U != (IData)(vlSelf->i_select_item))) {
            vlSelf->o_output_item = ((1U & ((IData)(vlSelf->i_select_item) 
                                            & (IData)(vlSelf->o_available_item)))
                                      ? (1U | (IData)(vlSelf->o_output_item))
                                      : ((2U & ((IData)(vlSelf->i_select_item) 
                                                & (IData)(vlSelf->o_available_item)))
                                          ? (2U | (IData)(vlSelf->o_output_item))
                                          : ((4U & 
                                              ((IData)(vlSelf->i_select_item) 
                                               & (IData)(vlSelf->o_available_item)))
                                              ? (4U 
                                                 | (IData)(vlSelf->o_output_item))
                                              : ((8U 
                                                  & ((IData)(vlSelf->i_select_item) 
                                                     & (IData)(vlSelf->o_available_item)))
                                                  ? 
                                                 (8U 
                                                  | (IData)(vlSelf->o_output_item))
                                                  : 0U))));
        }
    }
    vlSelf->vending_machine__DOT__check_time_and_coin_module__DOT__wait_time_nxt 
        = ((1U & (IData)(vlSelf->i_input_coin)) ? 0xaU
            : ((2U & (IData)(vlSelf->i_input_coin))
                ? 0xaU : ((4U & (IData)(vlSelf->i_input_coin))
                           ? 0xaU : ((1U & ((IData)(vlSelf->i_select_item) 
                                            & (IData)(vlSelf->o_available_item)))
                                      ? 0xaU : ((2U 
                                                 & ((IData)(vlSelf->i_select_item) 
                                                    & (IData)(vlSelf->o_available_item)))
                                                 ? 0xaU
                                                 : 
                                                ((4U 
                                                  & ((IData)(vlSelf->i_select_item) 
                                                     & (IData)(vlSelf->o_available_item)))
                                                  ? 0xaU
                                                  : 
                                                 ((8U 
                                                   & ((IData)(vlSelf->i_select_item) 
                                                      & (IData)(vlSelf->o_available_item)))
                                                   ? 0xaU
                                                   : 
                                                  (vlSelf->vending_machine__DOT__wait_time 
                                                   - (IData)(1U)))))))));
    vlSelf->vending_machine__DOT__return_coin_nxt = 0U;
    if ((0U != (IData)(vlSelf->i_input_coin))) {
        vlSelf->vending_machine__DOT__calculate_current_state_module__DOT__i = 0U;
        vlSelf->vending_machine__DOT__current_total_nxt 
            = ((1U & (IData)(vlSelf->i_input_coin))
                ? (vlSelf->vending_machine__DOT__current_total 
                   + vlSelf->vending_machine__DOT__coin_value
                   [0U]) : ((2U & (IData)(vlSelf->i_input_coin))
                             ? (vlSelf->vending_machine__DOT__current_total 
                                + vlSelf->vending_machine__DOT__coin_value
                                [1U]) : ((4U & (IData)(vlSelf->i_input_coin))
                                          ? (vlSelf->vending_machine__DOT__current_total 
                                             + vlSelf->vending_machine__DOT__coin_value
                                             [2U]) : vlSelf->vending_machine__DOT__current_total)));
    } else if ((0U != (IData)(vlSelf->i_select_item))) {
        vlSelf->vending_machine__DOT__calculate_current_state_module__DOT__i = 0U;
        vlSelf->vending_machine__DOT__current_total_nxt 
            = ((1U & ((IData)(vlSelf->i_select_item) 
                      & (IData)(vlSelf->o_available_item)))
                ? (vlSelf->vending_machine__DOT__current_total 
                   - vlSelf->vending_machine__DOT__item_price
                   [0U]) : ((2U & ((IData)(vlSelf->i_select_item) 
                                   & (IData)(vlSelf->o_available_item)))
                             ? (vlSelf->vending_machine__DOT__current_total 
                                - vlSelf->vending_machine__DOT__item_price
                                [1U]) : ((4U & ((IData)(vlSelf->i_select_item) 
                                                & (IData)(vlSelf->o_available_item)))
                                          ? (vlSelf->vending_machine__DOT__current_total 
                                             - vlSelf->vending_machine__DOT__item_price
                                             [2U]) : 
                                         ((8U & ((IData)(vlSelf->i_select_item) 
                                                 & (IData)(vlSelf->o_available_item)))
                                           ? (vlSelf->vending_machine__DOT__current_total 
                                              - vlSelf->vending_machine__DOT__item_price
                                              [3U])
                                           : vlSelf->vending_machine__DOT__current_total))));
    } else if (vlSelf->i_trigger_return) {
        if (VL_LTES_III(32, 7U, vlSelf->vending_machine__DOT__calculate_current_state_module__DOT__i)) {
            if ((0x640U <= vlSelf->vending_machine__DOT__current_total)) {
                vlSelf->vending_machine__DOT__return_coin_nxt = 7U;
                vlSelf->vending_machine__DOT__current_total_nxt 
                    = (vlSelf->vending_machine__DOT__current_total 
                       - (IData)(0x640U));
            } else if ((0x5dcU <= vlSelf->vending_machine__DOT__current_total)) {
                vlSelf->vending_machine__DOT__return_coin_nxt = 6U;
                vlSelf->vending_machine__DOT__current_total_nxt 
                    = (vlSelf->vending_machine__DOT__current_total 
                       - (IData)(0x5dcU));
            } else if ((0x44cU <= vlSelf->vending_machine__DOT__current_total)) {
                vlSelf->vending_machine__DOT__return_coin_nxt = 5U;
                vlSelf->vending_machine__DOT__current_total_nxt 
                    = (vlSelf->vending_machine__DOT__current_total 
                       - (IData)(0x44cU));
            } else if ((0x3e8U <= vlSelf->vending_machine__DOT__current_total)) {
                vlSelf->vending_machine__DOT__return_coin_nxt = 4U;
                vlSelf->vending_machine__DOT__current_total_nxt 
                    = (vlSelf->vending_machine__DOT__current_total 
                       - (IData)(0x3e8U));
            } else if ((0x258U <= vlSelf->vending_machine__DOT__current_total)) {
                vlSelf->vending_machine__DOT__return_coin_nxt = 3U;
                vlSelf->vending_machine__DOT__current_total_nxt 
                    = (vlSelf->vending_machine__DOT__current_total 
                       - (IData)(0x258U));
            } else if ((0x1f4U <= vlSelf->vending_machine__DOT__current_total)) {
                vlSelf->vending_machine__DOT__return_coin_nxt = 2U;
                vlSelf->vending_machine__DOT__current_total_nxt 
                    = (vlSelf->vending_machine__DOT__current_total 
                       - (IData)(0x1f4U));
            } else if ((0x64U <= vlSelf->vending_machine__DOT__current_total)) {
                vlSelf->vending_machine__DOT__return_coin_nxt = 1U;
                vlSelf->vending_machine__DOT__current_total_nxt 
                    = (vlSelf->vending_machine__DOT__current_total 
                       - (IData)(0x64U));
            } else {
                vlSelf->vending_machine__DOT__current_total_nxt 
                    = vlSelf->vending_machine__DOT__current_total;
            }
        } else {
            vlSelf->vending_machine__DOT__current_total_nxt 
                = vlSelf->vending_machine__DOT__current_total;
        }
        vlSelf->vending_machine__DOT__calculate_current_state_module__DOT__i 
            = ((IData)(1U) + vlSelf->vending_machine__DOT__calculate_current_state_module__DOT__i);
    } else if (VL_GTES_III(32, 0xffffffffU, vlSelf->vending_machine__DOT__wait_time)) {
        vlSelf->vending_machine__DOT__calculate_current_state_module__DOT__i = 0U;
        if ((0x640U <= vlSelf->vending_machine__DOT__current_total)) {
            vlSelf->vending_machine__DOT__return_coin_nxt = 7U;
            vlSelf->vending_machine__DOT__current_total_nxt 
                = (vlSelf->vending_machine__DOT__current_total 
                   - (IData)(0x640U));
        } else if ((0x5dcU <= vlSelf->vending_machine__DOT__current_total)) {
            vlSelf->vending_machine__DOT__return_coin_nxt = 6U;
            vlSelf->vending_machine__DOT__current_total_nxt 
                = (vlSelf->vending_machine__DOT__current_total 
                   - (IData)(0x5dcU));
        } else if ((0x44cU <= vlSelf->vending_machine__DOT__current_total)) {
            vlSelf->vending_machine__DOT__return_coin_nxt = 5U;
            vlSelf->vending_machine__DOT__current_total_nxt 
                = (vlSelf->vending_machine__DOT__current_total 
                   - (IData)(0x44cU));
        } else if ((0x3e8U <= vlSelf->vending_machine__DOT__current_total)) {
            vlSelf->vending_machine__DOT__return_coin_nxt = 4U;
            vlSelf->vending_machine__DOT__current_total_nxt 
                = (vlSelf->vending_machine__DOT__current_total 
                   - (IData)(0x3e8U));
        } else if ((0x258U <= vlSelf->vending_machine__DOT__current_total)) {
            vlSelf->vending_machine__DOT__return_coin_nxt = 3U;
            vlSelf->vending_machine__DOT__current_total_nxt 
                = (vlSelf->vending_machine__DOT__current_total 
                   - (IData)(0x258U));
        } else if ((0x1f4U <= vlSelf->vending_machine__DOT__current_total)) {
            vlSelf->vending_machine__DOT__return_coin_nxt = 2U;
            vlSelf->vending_machine__DOT__current_total_nxt 
                = (vlSelf->vending_machine__DOT__current_total 
                   - (IData)(0x1f4U));
        } else if ((0x64U <= vlSelf->vending_machine__DOT__current_total)) {
            vlSelf->vending_machine__DOT__return_coin_nxt = 1U;
            vlSelf->vending_machine__DOT__current_total_nxt 
                = (vlSelf->vending_machine__DOT__current_total 
                   - (IData)(0x64U));
        } else {
            vlSelf->vending_machine__DOT__current_total_nxt 
                = vlSelf->vending_machine__DOT__current_total;
        }
    } else {
        vlSelf->vending_machine__DOT__calculate_current_state_module__DOT__i = 0U;
        vlSelf->vending_machine__DOT__current_total_nxt 
            = vlSelf->vending_machine__DOT__current_total;
    }
}

void Vvending_machine___024root___eval_ico(Vvending_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vvending_machine___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vvending_machine___024root___eval_triggers__ico(Vvending_machine___024root* vlSelf);

bool Vvending_machine___024root___eval_phase__ico(Vvending_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vvending_machine___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vvending_machine___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vvending_machine___024root___eval_act(Vvending_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vvending_machine___024root___nba_sequent__TOP__0(Vvending_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->reset_n) {
        vlSelf->o_return_coin = vlSelf->vending_machine__DOT__return_coin_nxt;
        vlSelf->vending_machine__DOT__wait_time = vlSelf->vending_machine__DOT__check_time_and_coin_module__DOT__wait_time_nxt;
        vlSelf->vending_machine__DOT__current_total 
            = vlSelf->vending_machine__DOT__current_total_nxt;
    } else {
        vlSelf->o_return_coin = 0U;
        vlSelf->vending_machine__DOT__wait_time = 0xaU;
        vlSelf->vending_machine__DOT__current_total = 0U;
    }
    vlSelf->o_available_item = ((0x7d0U <= vlSelf->vending_machine__DOT__current_total)
                                 ? 0xfU : ((0x3e8U 
                                            <= vlSelf->vending_machine__DOT__current_total)
                                            ? 7U : 
                                           ((0x1f4U 
                                             <= vlSelf->vending_machine__DOT__current_total)
                                             ? 3U : 
                                            ((0x190U 
                                              <= vlSelf->vending_machine__DOT__current_total)
                                              ? 1U : 0U))));
    vlSelf->o_output_item = 0U;
    if ((0U == (IData)(vlSelf->i_input_coin))) {
        if ((0U != (IData)(vlSelf->i_select_item))) {
            vlSelf->o_output_item = ((1U & ((IData)(vlSelf->i_select_item) 
                                            & (IData)(vlSelf->o_available_item)))
                                      ? (1U | (IData)(vlSelf->o_output_item))
                                      : ((2U & ((IData)(vlSelf->i_select_item) 
                                                & (IData)(vlSelf->o_available_item)))
                                          ? (2U | (IData)(vlSelf->o_output_item))
                                          : ((4U & 
                                              ((IData)(vlSelf->i_select_item) 
                                               & (IData)(vlSelf->o_available_item)))
                                              ? (4U 
                                                 | (IData)(vlSelf->o_output_item))
                                              : ((8U 
                                                  & ((IData)(vlSelf->i_select_item) 
                                                     & (IData)(vlSelf->o_available_item)))
                                                  ? 
                                                 (8U 
                                                  | (IData)(vlSelf->o_output_item))
                                                  : 0U))));
        }
    }
    vlSelf->vending_machine__DOT__check_time_and_coin_module__DOT__wait_time_nxt 
        = ((1U & (IData)(vlSelf->i_input_coin)) ? 0xaU
            : ((2U & (IData)(vlSelf->i_input_coin))
                ? 0xaU : ((4U & (IData)(vlSelf->i_input_coin))
                           ? 0xaU : ((1U & ((IData)(vlSelf->i_select_item) 
                                            & (IData)(vlSelf->o_available_item)))
                                      ? 0xaU : ((2U 
                                                 & ((IData)(vlSelf->i_select_item) 
                                                    & (IData)(vlSelf->o_available_item)))
                                                 ? 0xaU
                                                 : 
                                                ((4U 
                                                  & ((IData)(vlSelf->i_select_item) 
                                                     & (IData)(vlSelf->o_available_item)))
                                                  ? 0xaU
                                                  : 
                                                 ((8U 
                                                   & ((IData)(vlSelf->i_select_item) 
                                                      & (IData)(vlSelf->o_available_item)))
                                                   ? 0xaU
                                                   : 
                                                  (vlSelf->vending_machine__DOT__wait_time 
                                                   - (IData)(1U)))))))));
    vlSelf->vending_machine__DOT__return_coin_nxt = 0U;
    if ((0U != (IData)(vlSelf->i_input_coin))) {
        vlSelf->vending_machine__DOT__calculate_current_state_module__DOT__i = 0U;
        vlSelf->vending_machine__DOT__current_total_nxt 
            = ((1U & (IData)(vlSelf->i_input_coin))
                ? (vlSelf->vending_machine__DOT__current_total 
                   + vlSelf->vending_machine__DOT__coin_value
                   [0U]) : ((2U & (IData)(vlSelf->i_input_coin))
                             ? (vlSelf->vending_machine__DOT__current_total 
                                + vlSelf->vending_machine__DOT__coin_value
                                [1U]) : ((4U & (IData)(vlSelf->i_input_coin))
                                          ? (vlSelf->vending_machine__DOT__current_total 
                                             + vlSelf->vending_machine__DOT__coin_value
                                             [2U]) : vlSelf->vending_machine__DOT__current_total)));
    } else if ((0U != (IData)(vlSelf->i_select_item))) {
        vlSelf->vending_machine__DOT__calculate_current_state_module__DOT__i = 0U;
        vlSelf->vending_machine__DOT__current_total_nxt 
            = ((1U & ((IData)(vlSelf->i_select_item) 
                      & (IData)(vlSelf->o_available_item)))
                ? (vlSelf->vending_machine__DOT__current_total 
                   - vlSelf->vending_machine__DOT__item_price
                   [0U]) : ((2U & ((IData)(vlSelf->i_select_item) 
                                   & (IData)(vlSelf->o_available_item)))
                             ? (vlSelf->vending_machine__DOT__current_total 
                                - vlSelf->vending_machine__DOT__item_price
                                [1U]) : ((4U & ((IData)(vlSelf->i_select_item) 
                                                & (IData)(vlSelf->o_available_item)))
                                          ? (vlSelf->vending_machine__DOT__current_total 
                                             - vlSelf->vending_machine__DOT__item_price
                                             [2U]) : 
                                         ((8U & ((IData)(vlSelf->i_select_item) 
                                                 & (IData)(vlSelf->o_available_item)))
                                           ? (vlSelf->vending_machine__DOT__current_total 
                                              - vlSelf->vending_machine__DOT__item_price
                                              [3U])
                                           : vlSelf->vending_machine__DOT__current_total))));
    } else if (vlSelf->i_trigger_return) {
        if (VL_LTES_III(32, 7U, vlSelf->vending_machine__DOT__calculate_current_state_module__DOT__i)) {
            if ((0x640U <= vlSelf->vending_machine__DOT__current_total)) {
                vlSelf->vending_machine__DOT__return_coin_nxt = 7U;
                vlSelf->vending_machine__DOT__current_total_nxt 
                    = (vlSelf->vending_machine__DOT__current_total 
                       - (IData)(0x640U));
            } else if ((0x5dcU <= vlSelf->vending_machine__DOT__current_total)) {
                vlSelf->vending_machine__DOT__return_coin_nxt = 6U;
                vlSelf->vending_machine__DOT__current_total_nxt 
                    = (vlSelf->vending_machine__DOT__current_total 
                       - (IData)(0x5dcU));
            } else if ((0x44cU <= vlSelf->vending_machine__DOT__current_total)) {
                vlSelf->vending_machine__DOT__return_coin_nxt = 5U;
                vlSelf->vending_machine__DOT__current_total_nxt 
                    = (vlSelf->vending_machine__DOT__current_total 
                       - (IData)(0x44cU));
            } else if ((0x3e8U <= vlSelf->vending_machine__DOT__current_total)) {
                vlSelf->vending_machine__DOT__return_coin_nxt = 4U;
                vlSelf->vending_machine__DOT__current_total_nxt 
                    = (vlSelf->vending_machine__DOT__current_total 
                       - (IData)(0x3e8U));
            } else if ((0x258U <= vlSelf->vending_machine__DOT__current_total)) {
                vlSelf->vending_machine__DOT__return_coin_nxt = 3U;
                vlSelf->vending_machine__DOT__current_total_nxt 
                    = (vlSelf->vending_machine__DOT__current_total 
                       - (IData)(0x258U));
            } else if ((0x1f4U <= vlSelf->vending_machine__DOT__current_total)) {
                vlSelf->vending_machine__DOT__return_coin_nxt = 2U;
                vlSelf->vending_machine__DOT__current_total_nxt 
                    = (vlSelf->vending_machine__DOT__current_total 
                       - (IData)(0x1f4U));
            } else if ((0x64U <= vlSelf->vending_machine__DOT__current_total)) {
                vlSelf->vending_machine__DOT__return_coin_nxt = 1U;
                vlSelf->vending_machine__DOT__current_total_nxt 
                    = (vlSelf->vending_machine__DOT__current_total 
                       - (IData)(0x64U));
            } else {
                vlSelf->vending_machine__DOT__current_total_nxt 
                    = vlSelf->vending_machine__DOT__current_total;
            }
        } else {
            vlSelf->vending_machine__DOT__current_total_nxt 
                = vlSelf->vending_machine__DOT__current_total;
        }
        vlSelf->vending_machine__DOT__calculate_current_state_module__DOT__i 
            = ((IData)(1U) + vlSelf->vending_machine__DOT__calculate_current_state_module__DOT__i);
    } else if (VL_GTES_III(32, 0xffffffffU, vlSelf->vending_machine__DOT__wait_time)) {
        vlSelf->vending_machine__DOT__calculate_current_state_module__DOT__i = 0U;
        if ((0x640U <= vlSelf->vending_machine__DOT__current_total)) {
            vlSelf->vending_machine__DOT__return_coin_nxt = 7U;
            vlSelf->vending_machine__DOT__current_total_nxt 
                = (vlSelf->vending_machine__DOT__current_total 
                   - (IData)(0x640U));
        } else if ((0x5dcU <= vlSelf->vending_machine__DOT__current_total)) {
            vlSelf->vending_machine__DOT__return_coin_nxt = 6U;
            vlSelf->vending_machine__DOT__current_total_nxt 
                = (vlSelf->vending_machine__DOT__current_total 
                   - (IData)(0x5dcU));
        } else if ((0x44cU <= vlSelf->vending_machine__DOT__current_total)) {
            vlSelf->vending_machine__DOT__return_coin_nxt = 5U;
            vlSelf->vending_machine__DOT__current_total_nxt 
                = (vlSelf->vending_machine__DOT__current_total 
                   - (IData)(0x44cU));
        } else if ((0x3e8U <= vlSelf->vending_machine__DOT__current_total)) {
            vlSelf->vending_machine__DOT__return_coin_nxt = 4U;
            vlSelf->vending_machine__DOT__current_total_nxt 
                = (vlSelf->vending_machine__DOT__current_total 
                   - (IData)(0x3e8U));
        } else if ((0x258U <= vlSelf->vending_machine__DOT__current_total)) {
            vlSelf->vending_machine__DOT__return_coin_nxt = 3U;
            vlSelf->vending_machine__DOT__current_total_nxt 
                = (vlSelf->vending_machine__DOT__current_total 
                   - (IData)(0x258U));
        } else if ((0x1f4U <= vlSelf->vending_machine__DOT__current_total)) {
            vlSelf->vending_machine__DOT__return_coin_nxt = 2U;
            vlSelf->vending_machine__DOT__current_total_nxt 
                = (vlSelf->vending_machine__DOT__current_total 
                   - (IData)(0x1f4U));
        } else if ((0x64U <= vlSelf->vending_machine__DOT__current_total)) {
            vlSelf->vending_machine__DOT__return_coin_nxt = 1U;
            vlSelf->vending_machine__DOT__current_total_nxt 
                = (vlSelf->vending_machine__DOT__current_total 
                   - (IData)(0x64U));
        } else {
            vlSelf->vending_machine__DOT__current_total_nxt 
                = vlSelf->vending_machine__DOT__current_total;
        }
    } else {
        vlSelf->vending_machine__DOT__calculate_current_state_module__DOT__i = 0U;
        vlSelf->vending_machine__DOT__current_total_nxt 
            = vlSelf->vending_machine__DOT__current_total;
    }
}

void Vvending_machine___024root___eval_nba(Vvending_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vvending_machine___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vvending_machine___024root___eval_triggers__act(Vvending_machine___024root* vlSelf);

bool Vvending_machine___024root___eval_phase__act(Vvending_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vvending_machine___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vvending_machine___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vvending_machine___024root___eval_phase__nba(Vvending_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vvending_machine___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvending_machine___024root___dump_triggers__ico(Vvending_machine___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vvending_machine___024root___dump_triggers__nba(Vvending_machine___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vvending_machine___024root___dump_triggers__act(Vvending_machine___024root* vlSelf);
#endif  // VL_DEBUG

void Vvending_machine___024root___eval(Vvending_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval\n"); );
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
            Vvending_machine___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("vending_machine.v", 9, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vvending_machine___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vvending_machine___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("vending_machine.v", 9, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vvending_machine___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("vending_machine.v", 9, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vvending_machine___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vvending_machine___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vvending_machine___024root___eval_debug_assertions(Vvending_machine___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvending_machine__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvending_machine___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset_n & 0xfeU))) {
        Verilated::overWidthError("reset_n");}
    if (VL_UNLIKELY((vlSelf->i_input_coin & 0xf8U))) {
        Verilated::overWidthError("i_input_coin");}
    if (VL_UNLIKELY((vlSelf->i_select_item & 0xf0U))) {
        Verilated::overWidthError("i_select_item");}
    if (VL_UNLIKELY((vlSelf->i_trigger_return & 0xfeU))) {
        Verilated::overWidthError("i_trigger_return");}
}
#endif  // VL_DEBUG
