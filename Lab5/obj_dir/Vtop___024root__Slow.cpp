// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

// Parameter definitions for Vtop___024root
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__imem__DOT__MEM_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__cache__DOT__LINE_SIZE;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__cache__DOT__NUM_SETS;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__cache__DOT__NUM_WAYS;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__MEM_DEPTH;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__DELAY;
constexpr IData/*31:0*/ Vtop___024root::top__DOT__cpu__DOT__cache__DOT__data_mem__DOT__BLOCK_SIZE;


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop___024root::~Vtop___024root() {
}
