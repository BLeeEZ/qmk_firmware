#include QMK_KEYBOARD_H
#include <stdio.h>
#include "keymap_german.h"

#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3

#define RAI_ENT LT(_RAISE, KC_ENT)
#define LOWER MO(_LOWER)
#define ADJUST MO(_ADJUST)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x6(
        KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,DE_SS,
        KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         DE_Z  , KC_U  , KC_I  , KC_O  , KC_P  ,DE_UDIA,
        KC_ESC , KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  ,DE_ODIA,DE_ADIA,
        KC_LSFT, DE_Y  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,DE_MINS,KC_RSFT,
                        KC_LGUI,KC_LALT,                                                        KC_RGUI,_______,
                                         LOWER , KC_SPC,                         KC_BSPC,RAI_ENT,
                                        KC_LCTL, KC_DEL,                         KC_ENT, ADJUST ,
                                        KC_HOME,KC_CALC,/*CALC=RPI-KVM-Switch*/  KC_END, KC_RALT
    ),

    /*
    // Programming Overview
    [_LOWER] = LAYOUT_5x6(
          KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
          _______,   <   ,   [   ,   {   ,   (   ,_______,                        _______,   )   ,   }   ,   ]   ,   >   ,_______,
          _______,   ~   ,   '   ,   "   ,   =   ,_______,                        KC_LEFT,KC_DOWN, KC_UP ,KC_RGHT,_______,_______,
          _______,   |   ,   \   ,   /   ,   #   ,_______,                        _______,_______,_______,_______,_______,_______,
                          _______,_______,                                                        _______,_______,
                                          _______,_______,                        _______,_______,
                                          _______,_______,                        _______,_______,
                                          _______,_______,                        _______,_______
    ),
    */

    /*

    [_LOWER] = LAYOUT_5x6(
          KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
          _______,DE_LABK,DE_LBRC,DE_LCBR,DE_LPRN,_______,                        _______,KC_RCBR,DE_RBRC,DE_RABK,_______,
          _______,DE_TILD,DE_QUOT,DE_DQUO,DE_EQL ,_______,                        KC_LEFT,KC_DOWN, KC_UP ,KC_RGHT,_______,_______,
          _______,DE_PIPE,DE_BSLS,DE_SLSH,DE_HASH,_______,                        _______,_______,_______,_______,_______,_______,
                          _______,_______,                                                        _______,_______,
                                          _______,_______,                        _______,_______,
                                          _______,_______,                        _______,_______,
                                          _______,_______,                        _______,_______
    ), */

    //OSX
    [_LOWER] = LAYOUT_5x6(
          KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
          _______, KC_GRV,A(DE_5),A(DE_8),S(DE_8),_______,                        _______,S(DE_9),A(DE_9),A(DE_6),S(KC_GRV),_______,
          _______,A(DE_N),S(DE_HASH),S(DE_2),S(DE_0),_______,                     KC_LEFT,KC_DOWN, KC_UP ,KC_RGHT,_______,_______,
          _______,A(DE_7),S(A(DE_7)),S(DE_7),KC_NUHS,_______,                     _______,_______,_______,_______,_______,_______,
                          _______,_______,                                                        _______,_______,
                                          _______,_______,                        _______,_______,
                                          _______,_______,                        _______,_______,
                                          _______,_______,                        _______,_______
    ),

    [_RAISE] = LAYOUT_5x6(
        KC_TILD,KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                        KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_DEL,
        _______,_______,_______,_______,_______,KC_LBRC,                        KC_RBRC, KC_P7 , KC_P8 , KC_P9 ,_______,KC_PLUS,
        _______,KC_HOME,KC_PGUP,KC_PGDN,KC_END ,KC_LPRN,                        KC_RPRN, KC_P4 , KC_P5 , KC_P6 ,KC_MINS,KC_PIPE,
        _______,_______,_______,_______,_______,_______,                        _______, KC_P1 , KC_P2 , KC_P3 ,KC_EQL ,KC_UNDS,
                        _______,KC_PSCR,                                                        _______, KC_P0,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______

    ),

    [_ADJUST] = LAYOUT_5x6(
          KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
          _______,_______,_______,_______,_______,KC_LBRC,                        _______,KC_MUTE,KC_NLCK,KC_INS ,KC_SLCK,_______,
          _______,KC_LEFT,KC_UP  ,KC_DOWN,KC_RGHT,KC_LPRN,                        _______,KC_VOLU,KC_MPLY,KC_MNXT,_______,_______,
          _______,_______,_______,_______,_______,_______,                        _______,KC_VOLD,_______,_______,_______,_______,
                          _______,_______,                                                        KC_EQL ,_______,
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

void render_prompt(void) {
    bool blink = (timer_read() % 1000) < 500;

    if (layer_state_is(_LOWER)) {
        oled_write_ln_P(blink ? PSTR("> lo_") : PSTR("> lo "), false);
    } else if (layer_state_is(_RAISE)) {
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
    static const char PROGMEM font_layer[4][6] = {
        {0x85, 0x86, 0x87, 0x88, 0x89, 0}, // qwerty
        {0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0}, // lower
        {0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0}, // raise
        {0x9a, 0x9b, 0x9c, 0x9d, 0x9e, 0}, // adjust
    };
    uint8_t layer = 0;
    if (layer_state_is(_LOWER)) {
        layer = 1;
    } else if (layer_state_is(_RAISE)) {
        layer = 2;
    } else if (layer_state_is(_ADJUST)) {
        layer = 3;
    }
    oled_write_P(font_layer[layer], false);
};

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

    render_kb_split();

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
