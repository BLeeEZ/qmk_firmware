#include QMK_KEYBOARD_H
#include <stdio.h>
#include "layouts/bleeez/common.c"

// redefine to resolve macros correct: https://stackoverflow.com/questions/31293714/how-to-call-a-macro-inside-a-macro
#define LAYOUT_5x6_bleeez(a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26) LAYOUT_5x6(a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26)

#define EMPTY_ROW _______,_______,_______,_______,_______,_______,      _______,_______,_______,_______,_______,_______

/*
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
    [_QWERTZ] = LAYOUT_5x6_bleeez(
                                                                 EMPTY_ROW,
                                                         _______,ALPHA_L1,_______,
                                                         _______,ALPHA_L2,_______,
                                                         _______,ALPHA_L3,_______,
                        _______,_______,                                                        _______,_______,
                                        TMB_LA1,TMB_LP ,                         TMB_RP,TMB_RA1,
                                        TMB_LA2,KC_TAB ,                         ADJUST,TMB_RA2,
                                        KC_LALT,KC_CALC,/*CALC=RPI-KVM-Switch*/  OS_CHANGE,ADJUST
    ),
    //MAC
    [_NAV_MAC] = LAYOUT_5x6_bleeez(
                                                                 EMPTY_ROW,
                                                         _______,NAV_DM_L1,_______,
                                                         _______,NAV_DM_L2,_______,
                                                         _______,NAV_DM_L3,_______,
                        _______,_______,                                                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______
    ),
    //Windows
    [_NAV_WIN] = LAYOUT_5x6_bleeez(
                                                                 EMPTY_ROW,
                                                         _______,NAV_DW_L1,_______,
                                                         _______,NAV_DW_L2,_______,
                                                         _______,NAV_DW_L3,_______,
                        _______,_______,                                                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______
    ),
    //MAC
    [_NUMBER_MAC] = LAYOUT_5x6_bleeez(
                                                                 EMPTY_ROW,
                                                         _______,NUM_DM_L1,_______,
                                                         _______,NUM_DM_L2,_______,
                                                         _______,NUM_DM_L3,_______,
                        _______,_______,                                                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______
    ),
    //Windows
    [_NUMBER_WIN] = LAYOUT_5x6_bleeez(
                                                                 EMPTY_ROW,
                                                         _______,NUM_DW_L1,_______,
                                                         _______,NUM_DW_L2,_______,
                                                         _______,NUM_DW_L3,_______,
                        _______,_______,                                                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______
    ),
    //MAC
    [_RAISE_MAC] = LAYOUT_5x6_bleeez(
                                                                 EMPTY_ROW,
                                                         _______,RAISE_DM_L1,_______,
                                                         _______,RAISE_DM_L2,_______,
                                                         _______,RAISE_DM_L3,_______,
                        _______,_______,                                                          _______,_______,
                                        _______,_______,                          _______,_______,
                                        _______,_______,                          _______,_______,
                                        _______,_______,                          _______,_______
    ),
    //Windows
    [_RAISE_WIN] = LAYOUT_5x6_bleeez(
                                                                 EMPTY_ROW,
                                                         _______,RAISE_DW_L1,_______,
                                                         _______,RAISE_DW_L2,_______,
                                                         _______,RAISE_DW_L3,_______,
                        _______,_______,                                                          _______,_______,
                                        _______,_______,                          _______,_______,
                                        _______,_______,                          _______,_______,
                                        _______,_______,                          _______,_______
    ),
    //MAC
    [_LOWER_MAC] = LAYOUT_5x6_bleeez(
                                                                 EMPTY_ROW,
                                                         _______,LOWER_DM_L1,_______,
                                                         _______,LOWER_DM_L2,_______,
                                                         _______,LOWER_DM_L3,_______,
                        _______,_______,                                                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______
    ),
    //Windows
    [_LOWER_WIN] = LAYOUT_5x6_bleeez(
                                                                 EMPTY_ROW,
                                                         _______,LOWER_DW_L1,_______,
                                                         _______,LOWER_DW_L2,_______,
                                                         _______,LOWER_DW_L3,_______,
                        _______,_______,                                                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______
    ),

    [_ADJUST] = LAYOUT_5x6_bleeez(
                                                                 EMPTY_ROW,
                                                         _______,ADJUST_L1,_______,
                                                         _______,ADJUST_L2,_______,
                                                         _______,ADJUST_L3,_______,
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
