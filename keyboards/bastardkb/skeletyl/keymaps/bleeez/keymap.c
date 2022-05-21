#include QMK_KEYBOARD_H
#include <stdio.h>
#include "layouts/bleeez/common.c"

/*

    (
               ,       ,       ,       ,       ,                               ,       ,       ,       ,       ,
               ,       ,       ,       ,       ,                               ,       ,       ,       ,       ,
               ,       ,       ,       ,       ,                               ,       ,       ,       ,       ,
    )

    [_LOWER_MAC] = LAYOUT_split_3x5_3(
        _______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,
                                _______,_______,_______,        _______,_______,_______
    ),
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTZ] = LAYOUT_split_3x5_3(
         KC_Q  , KC_W  , KC_F  , KC_P  , KC_B  ,                         KC_J  , KC_L  , KC_U  , KC_Z  , S(KC_COMM)  ,
         KC_A ,LALT_T(KC_R),LGUI_T(KC_S),LCTL_T(KC_T),KC_G,              KC_M  ,RCTL_T(KC_N),RGUI_T(KC_E),RALT_T(KC_I), KC_O  ,
         KC_Y  , KC_X  , KC_C  , KC_D  , KC_V  ,                         KC_K  , KC_H  ,KC_COMM,KC_DOT ,KC_SLSH,
                                SFT_T(KC_ENT),NAV_SPC,NUM_TAB,   LOW_DEL,RAI_ESC,SFT_T(KC_BSPC)
    ),
/*
               ,       , Find  , Build ,       ,                            0  ,^(dead),   '   ,`(dead),   $   ,
         Undo  ,  Cut  , Copy  , Paste ,       ,                        KC_LEFT,KC_DOWN, KC_UP ,KC_RGHT,       ,
               ,       ,       ,  All  ,       ,                               ,  HOME ,word <-,word ->,  END  ,
*/
    //MAC
    [_NAV_MAC] = LAYOUT_split_3x5_3(
        _______,_______,C(KC_F),C(KC_B),_______,                         KC_0  ,DM_CIRC,DM_QUOT,DM_GRV ,DM_DLR ,
        C(KC_Y),C(KC_X),C(KC_C),C(KC_V),_______,                        KC_LEFT,KC_DOWN, KC_UP ,KC_RGHT,_______,
        _______,_______,_______,C(KC_A),_______,                        _______,KC_HOME,DM_WGL ,DM_WGR , KC_END,
                                _______,_______,_______,        _______,_______,_______
    ),
    //Windows
    [_NAV_WIN] = LAYOUT_split_3x5_3(
        _______,_______,C(KC_F),C(KC_B),_______,                         KC_0  ,DW_CIRC,DW_QUOT,DW_GRV ,DW_DLR ,
        C(KC_Y),C(KC_X),C(KC_C),C(KC_V),_______,                        KC_LEFT,KC_DOWN, KC_UP ,KC_RGHT,_______,
        _______,_______,_______,C(KC_A),_______,                        _______,KC_HOME,DW_WGL ,DW_WGR , KC_END,
                                _______,_______,_______,        _______,_______,_______
    ),
/*
               ,       ,       ,       ,       ,                               ,   7   ,   8   ,   9   ,       ,
               ,OS_CHANGE,Bright+, VOL +, MUTE ,                           *   ,   4   ,   5   ,   6   ,   0   ,
               ,       ,Bright-, VOL - ,       ,                               ,   1   ,   2   ,   3   ,   +   ,
*/
    //MAC
    [_NUMBER_MAC] = LAYOUT_split_3x5_3(
        _______,_______,_______,_______,_______,                        _______, KC_7  , KC_8  , KC_9  ,_______,
        _______,OS_CHANGE,KC_BRIU,KC_VOLU,KC_MUTE,                      DM_ASTR, KC_4  , KC_5  , KC_6  , KC_0  ,
        _______,_______,KC_BRID,KC_VOLD,_______,                        _______, KC_1  , KC_2  , KC_3  ,DM_PLUS,
                                _______,_______,_______,        _______,_______,_______
    ),
    //Windows
    [_NUMBER_WIN] = LAYOUT_split_3x5_3(
        _______,_______,_______,_______,_______,                        _______, KC_7  , KC_8  , KC_9  ,_______,
        _______,OS_CHANGE,KC_BRIU,KC_VOLU,KC_MUTE,                      DW_ASTR, KC_4  , KC_5  , KC_6  , KC_0  ,
        _______,_______,KC_BRID,KC_VOLD,_______,                        _______, KC_1  , KC_2  , KC_3  ,DW_PLUS,
                                _______,_______,_______,        _______,_______,_______
    ),
/*
           [   ,   <   ,   >   ,   !   ,   #   ,                                ,   7   ,   8   ,   9   ,       ,
           "   ,   (   ,   )   ,   =   ,   /   ,                            *   ,   4   ,   5   ,   6   ,   0   ,
           ]   ,   {   ,   }   ,   ?   ,   \   ,                         ´(dead),   1   ,   2   ,   3   ,   +   ,
*/
    //MAC
    [_RAISE_MAC] = LAYOUT_split_3x5_3(
        DM_LBRC,DM_LABK,DM_RABK,DM_EXLM,DM_HASH,                          _______, KC_7  , KC_8  , KC_9  ,_______,
        DM_DQUO,DM_LPRN,DM_RPRN,DM_EQL ,DM_SLSH,                          DM_ASTR, KC_4  , KC_5  , KC_6  , KC_0  ,
        DM_RBRC,DM_LCBR,DM_RCBR,DM_QUES,DM_BSLS,                          DM_ACUT, KC_1  , KC_2  , KC_3  ,DM_PLUS,
                                _______,_______,_______,        _______,_______,_______
    ),
    //Windows
    [_RAISE_WIN] = LAYOUT_split_3x5_3(
        DW_LBRC,DW_LABK,DW_RABK,DW_EXLM,DW_HASH,                          _______, KC_7  , KC_8  , KC_9  ,_______,
        DW_DQUO,DW_LPRN,DW_RPRN,DW_EQL ,DW_SLSH,                          DW_ASTR, KC_4  , KC_5  , KC_6  , KC_0  ,
        DW_RBRC,DW_LCBR,DW_RCBR,DW_QUES,DW_BSLS,                          DW_ACUT, KC_1  , KC_2  , KC_3  ,DW_PLUS,
                                _______,_______,_______,        _______,_______,_______
    ),
/*
           °   ,   µ   ,   €   ,   @   ,   ß   ,                                ,  F7   ,  F8   ,  F9   ,  F12  ,
           |   ,   &   ,   ü   ,   ö   ,   ä   ,                                ,  F4   ,  F5   ,  F6   ,  F11  ,
           %   ,       ,       ,~(dead), PRINT ,                                ,  F1   ,  F2   ,  F3   ,  F10  ,
*/
    //MAC
    [_LOWER_MAC] = LAYOUT_split_3x5_3(
        DM_DEG ,DM_MICR,DM_EURO, DM_AT , DM_SS ,                        _______, KC_F7 , KC_F8 , KC_F9 ,KC_F12 ,
        DM_PIPE,DM_AMPR,DM_UDIA,DM_ODIA,DM_ADIA,                        _______, KC_F4 , KC_F5 , KC_F6 ,KC_F11 ,
        DM_PERC,_______,_______,DM_TILD,KC_PSCR,                        _______, KC_F1 , KC_F2 , KC_F3 ,KC_F10 ,
                                _______,_______,_______,        _______,_______,_______
    ),
    //Windows
    [_LOWER_WIN] = LAYOUT_split_3x5_3(
        DW_DEG ,DW_MICR,DW_EURO, DW_AT , DW_SS ,                        _______, KC_F7 , KC_F8 , KC_F9 ,KC_F12 ,
        DW_PIPE,DW_AMPR,DW_UDIA,DW_ODIA,DW_ADIA,                        _______, KC_F4 , KC_F5 , KC_F6 ,KC_F11 ,
        DW_PERC,_______,_______,DW_TILD,KC_PSCR,                        _______, KC_F1 , KC_F2 , KC_F3 ,KC_F10 ,
                                _______,_______,_______,        _______,_______,_______
    ),

    [_ADJUST] = LAYOUT_split_3x5_3(
        _______,_______,_______,_______,_______,                        _______, KC_F7 , KC_F8 , KC_F9 ,KC_F12 ,
        _______,OS_CHANGE,KC_BRIU,KC_VOLU,KC_MUTE,                      _______, KC_F4 , KC_F5 , KC_F6 ,KC_F11 ,
        _______,_______,KC_BRID,KC_VOLD,_______,                        _______, KC_F1 , KC_F2 , KC_F3 ,KC_F10 ,
                                _______,_______,_______,        _______,_______,_______
    )
};
