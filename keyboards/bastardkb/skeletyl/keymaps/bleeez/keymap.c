#include QMK_KEYBOARD_H
#include <stdio.h>
#include "layouts/bleeez/common.c"

// redefine to resolve macros correct: https://stackoverflow.com/questions/31293714/how-to-call-a-macro-inside-a-macro
#define LAYOUT_bleeez(a,b,c,d,e,f,g,h,i) LAYOUT(a,b,c,d,e,f,g,h,i)

/*
    [_LOWER_MAC] = LAYOUT_split_3x5_3(
        _______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,
                                _______,_______,_______,        _______,_______,_______
    ),
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTZ] = LAYOUT_bleeez(
                                                      ALPHA_L1,
                                                      ALPHA_L2,
                                                      ALPHA_L3,
                                TMB_LA1,TMB_LP ,TMB_LA2,        TMB_RA2,TMB_RP ,TMB_RA1
    ),
    //MAC
    [_NAV_MAC] = LAYOUT_bleeez(
                                                       NAV_DM_L1,
                                                       NAV_DM_L2,
                                                       NAV_DM_L3,
                                _______,_______,_______,        _______,_______,_______
    ),
    //Windows
    [_NAV_WIN] = LAYOUT_bleeez(
                                                       NAV_DW_L1,
                                                       NAV_DW_L2,
                                                       NAV_DW_L3,
                                _______,_______,_______,        _______,_______,_______
    ),

    //MAC
    [_NUMBER_MAC] = LAYOUT_bleeez(
                                                       NUM_DM_L1,
                                                       NUM_DM_L2,
                                                       NUM_DM_L3,
                                _______,_______,_______,        _______,_______,_______
    ),
    //Windows
    [_NUMBER_WIN] = LAYOUT_bleeez(
                                                       NUM_DW_L1,
                                                       NUM_DW_L2,
                                                       NUM_DW_L3,
                                _______,_______,_______,        _______,_______,_______
    ),
    //MAC
    [_RAISE_MAC] = LAYOUT_bleeez(
                                                       RAISE_DM_L1,
                                                       RAISE_DM_L2,
                                                       RAISE_DM_L3,
                                _______,_______,_______,        _______,_______,_______
    ),
    //Windows
    [_RAISE_WIN] = LAYOUT_bleeez(
                                                       RAISE_DW_L1,
                                                       RAISE_DW_L2,
                                                       RAISE_DW_L3,
                                _______,_______,_______,        _______,_______,_______
    ),
    //MAC
    [_LOWER_MAC] = LAYOUT_bleeez(
                                                       LOWER_DM_L1,
                                                       LOWER_DM_L2,
                                                       LOWER_DM_L3,
                                _______,_______,_______,        _______,_______,_______
    ),
    //Windows
    [_LOWER_WIN] = LAYOUT_bleeez(
                                                       LOWER_DW_L1,
                                                       LOWER_DW_L2,
                                                       LOWER_DW_L3,
                                _______,_______,_______,        _______,_______,_______
    ),
    [_ADJUST] = LAYOUT_bleeez(
                                                       ADJUST_L1,
                                                       ADJUST_L2,
                                                       ADJUST_L3,
                                _______,_______,_______,        _______,_______,_______
    )
};
