#include QMK_KEYBOARD_H
#include <stdio.h>
#include "layouts/bleeez/common.c"

/*

    (
               ,       ,       ,       ,       ,       ,                               ,       ,       ,       ,       ,       ,
               ,       ,       ,       ,       ,       ,                               ,       ,       ,       ,       ,       ,
               ,       ,       ,       ,       ,       ,                               ,       ,       ,       ,       ,       ,
    )

    [_LOWER_MAC] = LAYOUT_5x6(
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
                        _______,_______,                                                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______
    ),
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTZ] = LAYOUT_5x6(
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
        _______, KC_Q  , KC_W  , KC_F  , KC_P  , KC_B  ,                         KC_J  , KC_L  , KC_U  , KC_Z  , S(KC_COMM)  ,_______,
        _______, KC_A ,LALT_T(KC_R),LGUI_T(KC_S),LCTL_T(KC_T),KC_G,              KC_M  ,RCTL_T(KC_N),RGUI_T(KC_E),RALT_T(KC_I), KC_O  ,_______,
        _______, KC_Y  , KC_X  , KC_C  , KC_D  , KC_V  ,                         KC_K  , KC_H  ,KC_COMM,KC_DOT ,KC_SLSH,_______,
                        _______,_______,                                                        _______,_______,
                                        SFT_T(KC_ENT),NAV_SPC,                   RAI_ESC, SFT_T(KC_BSPC),
                                        NUM_TAB,KC_TAB,                          ADJUST,LOW_DEL,
                                        KC_LALT,KC_CALC,/*CALC=RPI-KVM-Switch*/  OS_CHANGE, ADJUST
    ),
/*
               ,       ,       , Find  , Build ,       ,                            0  ,^(dead),   '   ,`(dead),   $   ,       ,
               , Undo  ,  Cut  , Copy  , Paste ,       ,                        KC_LEFT,KC_DOWN, KC_UP ,KC_RGHT,       ,       ,
               ,       ,       ,       ,  All  ,       ,                               ,  HOME ,word <-,word ->,  END  ,       ,
*/
    //MAC
    [_NAV_MAC] = LAYOUT_5x6(
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,C(KC_F),C(KC_B),_______,                         KC_0  ,DM_CIRC,DM_QUOT,DM_GRV ,DM_DLR ,_______,
        _______,C(KC_Y),C(KC_X),C(KC_C),C(KC_V),_______,                        KC_LEFT,KC_DOWN, KC_UP ,KC_RGHT,_______,_______,
        _______,_______,_______,_______,C(KC_A),_______,                        _______,KC_HOME,DM_WGL ,DM_WGR ,KC_END,_______,
                        _______,_______,                                                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______
    ),
    //Windows
    [_NAV_WIN] = LAYOUT_5x6(
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,C(KC_F),C(KC_B),_______,                         KC_0  ,DW_CIRC,DW_QUOT,DW_GRV ,DM_DLR ,_______,
        _______,C(KC_Y),C(KC_X),C(KC_C),C(KC_V),_______,                        KC_LEFT,KC_DOWN, KC_UP ,KC_RGHT,_______,_______,
        _______,_______,_______,_______,C(KC_A),_______,                        _______,KC_HOME,DW_WGL ,DW_WGR ,KC_END,_______,
                        _______,_______,                                                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______
    ),
/*
               ,       ,       ,       ,       ,       ,                               ,   7   ,   8   ,   9   ,       ,       ,
               ,       ,       ,Bright+, VOL + , MUTE  ,                           *   ,   4   ,   5   ,   6   ,   0   ,       ,
               ,       ,       ,Bright-, VOL - ,       ,                               ,   1   ,   2   ,   3   ,   +   ,       ,
*/
    //MAC
    [_NUMBER_MAC] = LAYOUT_5x6(
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                        _______, KC_7  , KC_8  , KC_9  ,_______,_______,
        _______,_______,_______,KC_BRIU,KC_VOLU,KC_MUTE,                        DM_ASTR, KC_4  , KC_5  , KC_6  , KC_0  ,_______,
        _______,_______,_______,KC_BRID,KC_VOLD,_______,                        _______, KC_1  , KC_2  , KC_3  ,DM_PLUS,_______,
                        _______,_______,                                                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______
    ),
    //Windows
    [_NUMBER_WIN] = LAYOUT_5x6(
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                        _______, KC_7  , KC_8  , KC_9  ,_______,_______,
        _______,_______,_______,KC_BRIU,KC_VOLU,KC_MUTE,                        DM_ASTR, KC_4  , KC_5  , KC_6  , KC_0  ,_______,
        _______,_______,_______,KC_BRID,KC_VOLD,_______,                        _______, KC_1  , KC_2  , KC_3  ,DW_PLUS,_______,
                        _______,_______,                                                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______
    ),
/*
              ,    [   ,   <   ,   >   ,   !   ,   #   ,                                ,   7   ,   8   ,   9   ,       ,
              ,    "   ,   (   ,   )   ,   =   ,   /   ,                            *   ,   4   ,   5   ,   6   ,   0   ,
              ,    ]   ,   {   ,   }   ,   ?   ,   \   ,                         ´(dead),   1   ,   2   ,   3   ,   +   ,
*/
    //MAC
    [_RAISE_MAC] = LAYOUT_5x6(
        _______,_______,_______,_______,_______,_______,                          _______,_______,_______,_______,_______,_______,
        _______,DM_LBRC,DM_LABK,DM_RABK,DM_EXLM,DM_HASH,                          _______, KC_7  , KC_8  , KC_9  ,_______,_______,
        _______,DM_DQUO,DM_LPRN,DM_RPRN,DM_EQL ,DM_SLSH,                          DM_ASTR, KC_4  , KC_5  , KC_6  , KC_0  ,_______,
        _______,DM_RBRC,DM_LCBR,DM_RCBR,DM_QUES,DM_BSLS,                          DM_ACUT, KC_1  , KC_2  , KC_3  ,DM_PLUS,_______,
                        _______,_______,                                                          _______,_______,
                                        _______,_______,                          _______,_______,
                                        _______,_______,                          _______,_______,
                                        _______,_______,                          _______,_______
    ),
    //Windows
    [_RAISE_WIN] = LAYOUT_5x6(
        _______,_______,_______,_______,_______,_______,                          _______,_______,_______,_______,_______,_______,
        _______,DW_LBRC,DW_LABK,DW_RABK,DW_EXLM,DW_HASH,                          _______, KC_7  , KC_8  , KC_9  ,_______,_______,
        _______,DW_DQUO,DW_LPRN,DW_RPRN,DW_EQL ,DW_SLSH,                          DW_ASTR, KC_4  , KC_5  , KC_6  , KC_0  ,_______,
        _______,DW_RCBR,DW_LCBR,DW_RBRC,DW_QUES,DW_BSLS,                          DW_ACUT, KC_1  , KC_2  , KC_3  ,DW_PLUS,_______,
                        _______,_______,                                                          _______,_______,
                                        _______,_______,                          _______,_______,
                                        _______,_______,                          _______,_______,
                                        _______,_______,                          _______,_______
    ),
/*
               ,   °   ,   µ   ,   €   ,   @   ,   ß   ,                                ,  F7   ,  F8   ,  F9   ,  F12  ,       ,
               ,   |   ,   &   ,   ü   ,   ö   ,   ä   ,                                ,  F4   ,  F5   ,  F6   ,  F11  ,       ,
               ,   %   ,       ,       ,~(dead), PRINT ,                                ,  F1   ,  F2   ,  F3   ,  F10  ,       ,
*/
    //MAC
    [_LOWER_MAC] = LAYOUT_5x6(
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
        _______,DM_DEG ,DM_MICR,DM_EURO, DM_AT , DM_SS ,                        _______, KC_F7 , KC_F8 , KC_F9 ,KC_F12 ,_______,
        _______,DM_PIPE,DM_AMPR,DM_UDIA,DM_ODIA,DM_ADIA,                        _______, KC_F4 , KC_F5 , KC_F6 ,KC_F11 ,_______,
        _______,DM_PERC,_______,_______,DM_TILD,KC_PSCR,                        _______, KC_F1 , KC_F2 , KC_F3 ,KC_F10 ,_______,
                        _______,_______,                                                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______
    ),
    //Windows
    [_LOWER_WIN] = LAYOUT_5x6(
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
        _______,DW_DEG ,DW_MICR,DW_EURO, DW_AT , DW_SS ,                        _______, KC_F7 , KC_F8 , KC_F9 ,KC_F12 ,_______,
        _______,DW_PIPE,DW_AMPR,DW_UDIA,DW_ODIA,DW_ADIA,                        _______, KC_F4 , KC_F5 , KC_F6 ,KC_F11 ,_______,
        _______,DW_PERC,_______,_______,DW_TILD,KC_PSCR,                        _______, KC_F1 , KC_F2 , KC_F3 ,KC_F10 ,_______,
                        _______,_______,                                                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______
    ),

    [_ADJUST] = LAYOUT_5x6(
        _______,_______,_______,_______,_______,_______,                        _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                        _______, KC_F7 , KC_F8 , KC_F9 ,KC_F12 ,_______,
        _______,_______,_______,KC_BRIU,KC_VOLU,KC_MUTE,                        _______, KC_F4 , KC_F5 , KC_F6 ,KC_F11 ,_______,
        _______,_______,_______,KC_BRID,KC_VOLD,_______,                        _______, KC_F1 , KC_F2 , KC_F3 ,KC_F10 ,_______,
                        _______,_______,                                                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______
    )
};

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_90;
}

bool wpm_keycode_user(uint16_t keycode) {
    return true;
}

// 5x3 Logos

void render_sun_logo(void) {
    static const char PROGMEM font_logo[16] = {0x80, 0x81, 0x82, 0x83, 0x84, 0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0};
    oled_write_P(font_logo, false);
};

void render_qmk_logo(void) {
    static const char PROGMEM font_qmk_logo[16] = {0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0};
    oled_write_P(font_qmk_logo, false);
};

// 5x2 Keyboard, Controller logos

void render_kb_split(void) {
    static const char PROGMEM font_kb_split[11] = {0xba, 0xbb, 0xbc, 0xbd, 0xbe, 0xda, 0xdb, 0xdc, 0xdd, 0xde, 0};
    oled_write_P(font_kb_split, false);
};

// 2x1 Ctrl, Alt, Shift, GUI, Mouse

void render_mod_ctrl(void) {
    static const char PROGMEM font_ctrl[3] = {0x93, 0x94, 0};
    oled_write_P(font_ctrl, false);
};

void render_mod_alt(void) {
    static const char PROGMEM font_alt[3] = {0xb3, 0xb4, 0};
    oled_write_P(font_alt, false);
};

void render_mod_shift(void) {
    static const char PROGMEM font_shift[3] = {0xd3, 0xd4, 0};
    oled_write_P(font_shift, false);
};

void render_mod_gui(void) {
    static const char PROGMEM font_gui[3] = {0x95, 0x96, 0};
    oled_write_P(font_gui, false);
};

void render_prog_mac(void) {
    static const char PROGMEM font_gui_top[3] = {0xb5, 0xb6, 0};
    oled_write_P(PSTR(" "), false);
    oled_write_ln_P(font_gui_top, false);
    oled_write_P(PSTR(" "), false);
    static const char PROGMEM font_gui_bottom[3] = {0xd5, 0xd6, 0};
    oled_write_ln_P(font_gui_bottom, false);
};

void render_prog_win(void) {
    static const char PROGMEM font_gui_top[3] = {0xb7, 0xb8, 0};
    oled_write_P(PSTR(" "), false);
    oled_write_ln_P(font_gui_top, false);
    static const char PROGMEM font_gui_bottom[3] = {0xd7, 0xd8, 0};
    oled_write_P(PSTR(" "), false);
    oled_write_ln_P(font_gui_bottom, false);
};

void render_prompt(void) {
    bool blink = (timer_read() % 1000) < 500;

    if (layer_state_is(_NAV_MAC) || layer_state_is(_NAV_WIN)) {
        oled_write_ln_P(blink ? PSTR(">nav_") : PSTR(">nav "), false);
    } else if (layer_state_is(_NUMBER_MAC) || layer_state_is(_NUMBER_WIN)) {
        oled_write_ln_P(blink ? PSTR(">123_") : PSTR(">123 "), false);
    } else if (layer_state_is(_LOWER_MAC) || layer_state_is(_LOWER_WIN)) {
        oled_write_ln_P(blink ? PSTR("> lo_") : PSTR("> lo "), false);
    } else if (layer_state_is(_RAISE_MAC) || layer_state_is(_RAISE_WIN)) {
        oled_write_ln_P(blink ? PSTR("> hi_") : PSTR("> hi "), false);
    } else if (layer_state_is(_ADJUST)) {
        oled_write_ln_P(blink ? PSTR("> aj_") : PSTR("> aj "), false);
    } else {
        oled_write_ln_P(blink ? PSTR("> _  ") : PSTR(">    "), false);
    }
};

void render_wpm(void) {
	char buf[5];
	oled_write_ln(" WPM", false);
    sprintf(buf, " %03d", get_current_wpm());
	oled_write_ln(buf, false);
}

// 5x1 Layer indicator

void render_layer(void) {
    static const char PROGMEM font_layer[6][6] = {
        {0x85, 0x86, 0x87, 0x88, 0x89, 0}, // qwertz
        {0xba, 0xbb, 0xbc, 0xbd, 0xbe, 0}, // nav
        {0xda, 0xdb, 0xdc, 0xdd, 0xde, 0}, // number
        {0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0}, // lower
        {0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0}, // raise
        {0x9a, 0x9b, 0x9c, 0x9d, 0x9e, 0}, // adjust
    };
    uint8_t layer = 0;
    if (layer_state_is(_NAV_MAC) || layer_state_is(_NAV_WIN)) {
        layer = 1;
    } else if (layer_state_is(_NUMBER_MAC) || layer_state_is(_NUMBER_WIN)) {
        layer = 2;
    } else if (layer_state_is(_LOWER_MAC) || layer_state_is(_LOWER_WIN)) {
        layer = 3;
    } else if (layer_state_is(_RAISE_MAC) || layer_state_is(_RAISE_WIN)) {
        layer = 4;
    } else if (layer_state_is(_ADJUST)) {
        layer = 5;
    }
    oled_write_P(font_layer[layer], false);
};

void render_prog_os(void) {
    if (os_active == _MAC) {
        render_prog_mac();
    } else {
        render_prog_win();
    }
}

// 5x2 Mod and feature indicator clusters

void render_mod_status(void) {
    uint8_t modifiers = get_mods() | get_oneshot_mods();

    (modifiers & MOD_MASK_CTRL) ? render_mod_ctrl() : oled_write_P(PSTR("  "), false);
    oled_write_P(PSTR(" "), false);
    (modifiers & MOD_MASK_SHIFT) ? render_mod_shift() : oled_write_P(PSTR("  "), false);

    (modifiers & MOD_MASK_ALT) ? render_mod_alt() : oled_write_P(PSTR("  "), false);
    oled_write_P(PSTR(" "), false);
    (modifiers & MOD_MASK_GUI) ? render_mod_gui() : oled_write_P(PSTR("  "), false);
};

void render_status_main(void) {
    oled_write_ln("", false);
    oled_write_ln("", false);
    oled_write_ln("", false);

    render_prog_os();

    oled_write_ln("", false);
    oled_write_ln("", false);
    oled_write_ln("", false);

    render_layer();

    oled_write_ln("", false);
    oled_write_ln("", false);
    oled_write_ln("", false);

    render_mod_status();
};

void render_status_secondary(void) {
    render_sun_logo();

    oled_write_ln("", false);
    oled_write_ln("", false);

    render_qmk_logo();

    oled_write_ln("", false);
    oled_write_ln("", false);

    render_prompt();
    oled_write_ln("", false);
    render_wpm();
    oled_write_ln("", false);
}

void oled_task_user(void) {
    if (get_current_wpm() == 0) {
        oled_clear();
        oled_off();
        return;
    } else {
        oled_on();
    }

    if (is_keyboard_master()) {
        render_status_main();
    } else {
        render_status_secondary();
    }
}
#endif
