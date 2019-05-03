// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.2
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __vibrato_fptrunc_6kbM__HH__
#define __vibrato_fptrunc_6kbM__HH__
#include "ACMP_fptrunc_comb.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int dout_WIDTH>
SC_MODULE(vibrato_fptrunc_6kbM) {
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    ACMP_fptrunc_comb<ID, 1, din0_WIDTH, dout_WIDTH> ACMP_fptrunc_comb_U;

    SC_CTOR(vibrato_fptrunc_6kbM):  ACMP_fptrunc_comb_U ("ACMP_fptrunc_comb_U") {
        ACMP_fptrunc_comb_U.din0(din0);
        ACMP_fptrunc_comb_U.dout(dout);

    }

};

#endif //
