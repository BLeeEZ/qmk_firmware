#include QMK_KEYBOARD_H
#include <stdio.h>

enum layers {
    _QWERTZ,
    _LOWER_MAC,
    _LOWER_WIN,
    _RAISE_MAC,
    _RAISE_WIN,
    _ADJUST,
};

enum custom_keycodes { QWERTZ = SAFE_RANGE, LOWER, RAISE, OS_CHANGE, ADJUST };

#define LOW_SPC LT(_QWERTZ, KC_SPC)
#define RAI_BSPC LT(_QWERTZ, KC_BSPC)
#define RAI_ENT LT(_QWERTZ, KC_ENT)
#define RAI_ESC LT(_QWERTZ, KC_ESC)
#define ADJ_DEL LT(_ADJUST, KC_DEL)
#define ADJUST MO(_ADJUST)
#define CTL_TAB CTL_T(KC_TAB)
#define CTL_DEL CTL_T(KC_DEL)
#define GUI_ESC GUI_T(KC_ESC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTZ] = LAYOUT_5x6(
        KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_MINS,
        KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_LBRC,
        KC_ESC ,LSFT_T(KC_A), KC_S  ,LALT_T(KC_D),LGUI_T(KC_F),KC_G,             KC_H  ,RGUI_T(KC_J),RALT_T(KC_K), KC_L  ,RSFT_T(KC_SCLN),KC_QUOT,
        KC_LSFT, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_RSFT,
                        KC_LGUI,KC_LALT,                                                        KC_RGUI,_______,
                                        RAI_ENT,LOW_SPC,                         RAI_ESC, RAI_BSPC,
                                        CTL_TAB,GUI_ESC,                         ADJUST, ADJ_DEL ,
                                        KC_LALT,KC_CALC,/*CALC=RPI-KVM-Switch*/  OS_CHANGE, ADJUST
    ),

    /*
    [_LOWER] = LAYOUT_5x6(
        KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
           µ   ,   '   ,   #   ,   {   ,   (   ,   $   ,                           &   ,   )   ,   }   ,   °   ,   ?   ,´(dead),
           @   ,   "   ,   !   ,   ?   ,   =   ,   /   ,                        KC_LEFT,KC_DOWN, KC_UP ,KC_RGHT,   *   , PRINT ,
           €   ,   %   ,   \   ,   [   ,   <   ,^dead) ,                           |   ,   >   ,   ]   ,   ~   ,   +   ,^dead),
                        _______,_______,                                                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______
    ),
    [_LOWER] = LAYOUT_5x6(
        KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
        DE_MICR,DE_QUOT,DE_HASH,DE_LCBR,DE_LPRN,DE_DLR ,                        DE_AMPR,DE_LPRN ,KC_RCBR, DE_DEG,DE_QUES,DE_ACUT,
        DE_AT ,DE_DQUO,DE_EXLM,DE_QUES,DE_EQL ,DE_SLSH,                        KC_LEFT,KC_DOWN, KC_UP ,KC_RGHT,DE_ASTR,KC_PSCR,
        DE_EURO,DE_PERC,DE_BSLS,DE_LBRC,DE_LABK,DE_CIRC,                        DE_PIPE,DE_RABK,DE_RBRC,DE_TILD,DE_PLUS,DE_CIRC,
                        _______,_______,                                                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______
    ), */

    //MAC
    [_LOWER_MAC] = LAYOUT_5x6(
        KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
        A(KC_M),S(KC_NUHS),KC_NUHS,A(KC_8),S(KC_8),S(KC_4),                     S(KC_6),S(KC_9),A(KC_9),S(KC_GRV),S(KC_MINS),KC_EQL,
        A(KC_L),S(KC_2),S(KC_1),S(KC_MINS),S(KC_0),S(KC_7),                     KC_LEFT,KC_DOWN, KC_UP ,KC_RGHT,S(KC_RBRC),KC_PSCR,
        A(KC_E),S(KC_5),S(A(KC_7)),A(KC_5),KC_NUBS,KC_GRV,                      A(KC_7),S(KC_NUBS),A(KC_6),A(KC_N),KC_RBRC,KC_GRV,
                        _______,_______,                                                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______
    ),

    //Windows
    [_LOWER_WIN] = LAYOUT_5x6(
        KC_F12 , KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,                        KC_F6  , KC_F7 , KC_F8 , KC_F9 ,KC_F10 ,KC_F11 ,
        ALGR(KC_M),S(KC_NUHS),KC_NUHS,ALGR(KC_7),S(KC_8),S(KC_4),               S(KC_6),S(KC_9),ALGR(KC_0),S(KC_GRV),S(KC_MINS),KC_EQL,
        ALGR(KC_Q),S(KC_2),S(KC_1),S(KC_MINS),S(KC_0),S(KC_7),                  KC_LEFT,KC_DOWN, KC_UP ,KC_RGHT,S(KC_RBRC),KC_PSCR,
      ALGR(KC_E),S(KC_5),ALGR(KC_MINS),ALGR(KC_8),KC_NUBS,KC_GRV,                 ALGR(KC_NUBS),S(KC_NUBS),ALGR(KC_9),ALGR(KC_RBRC),KC_RBRC,KC_GRV,
                        _______,_______,                                                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______
    ),

    /*
    [_RAISE] = LAYOUT_5x6(
               ,       ,       ,       ,       ,       ,                               ,       ,       ,       ,       ,       ,
               ,       ,       ,       ,       ,       ,                               ,   7   ,   8   ,   9   ,       ,       ,
               , LSFT  ,   ä   ,   ö   ,   ü   ,   ß   ,                           0   ,   4   ,   5   ,   6   , RSFT  ,       ,
               ,       ,   µ   ,   €   ,   @   ,       ,                               ,   1   ,   2   ,   3   ,       ,       ,
                        _______,_______,                                                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______,
                                        _______,_______,                        _______,_______
    ), */

    //MAC
    [_RAISE_MAC] = LAYOUT_5x6(
        _______,_______,_______,_______,_______,_______,                          _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                          _______, KC_7  , KC_8  , KC_9  ,_______,_______,
        _______,KC_LSFT,KC_QUOT,KC_SCLN,KC_LBRC,KC_MINS,                           KC_0  , KC_4  , KC_5  , KC_6  ,KC_RSFT,_______,
        _______,_______,A(KC_M),A(KC_E),A(KC_L),_______,                          _______, KC_1  , KC_2  , KC_3  ,_______,_______,
                        _______,_______,                                                          _______,_______,
                                        _______,_______,                          _______,_______,
                                        _______,_______,                          _______,_______,
                                        _______,_______,                          _______,_______
    ),

    //Windows
    [_RAISE_WIN] = LAYOUT_5x6(
        _______,_______,_______,_______,_______,_______,                          _______,_______,_______,_______,_______,_______,
        _______,_______,_______,_______,_______,_______,                          _______, KC_7  , KC_8  , KC_9  ,_______,_______,
        _______,KC_LSFT,KC_QUOT,KC_SCLN,KC_LBRC,KC_MINS,                           KC_0  , KC_4  , KC_5  , KC_6  ,KC_RSFT,_______,
        _______,_______,ALGR(KC_M),ALGR(KC_E),ALGR(KC_Q),_______,                          _______, KC_1  , KC_2  , KC_3  ,_______,_______,
                        _______,_______,                                                          _______,_______,
                                        _______,_______,                          _______,_______,
                                        _______,_______,                          _______,_______,
                                        _______,_______,                          _______,_______
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

enum os_t {
    _MAC,
    _WINDOWS,
};

uint16_t os_active = _MAC;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case OS_CHANGE:
            if (record->event.pressed) {
                if (os_active == _MAC) {
                    os_active = _WINDOWS;
                } else {
                    os_active = _MAC;
                }
            }
            return false;
        case LOW_SPC:
            if (record->tap.count) {
                return true;
            } else if (record->event.pressed) {
                if (os_active == _MAC) {
                    layer_on(_LOWER_MAC);
                } else {
                    layer_on(_LOWER_WIN);
                }
            } else {
                if (os_active == _MAC) {
                    layer_off(_LOWER_MAC);
                } else {
                    layer_off(_LOWER_WIN);
                }
            }
            return false;
        case RAI_BSPC:
        case RAI_ESC:
            if (record->tap.count) {
                return true;
            } else if (record->event.pressed) {
                if (os_active == _MAC) {
                    layer_on(_RAISE_MAC);
                } else {
                    layer_on(_RAISE_WIN);
                }
            } else {
                if (os_active == _MAC) {
                    layer_off(_RAISE_MAC);
                } else {
                    layer_off(_RAISE_WIN);
                }
            }
            return false;
        default:
            return true;
    };
}

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

    if (layer_state_is(_LOWER_MAC) || layer_state_is(_LOWER_WIN)) {
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
    static const char PROGMEM font_layer[4][6] = {
        {0x85, 0x86, 0x87, 0x88, 0x89, 0}, // qwertz
        {0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0}, // lower
        {0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0}, // raise
        {0x9a, 0x9b, 0x9c, 0x9d, 0x9e, 0}, // adjust
    };
    uint8_t layer = 0;
    if (layer_state_is(_LOWER_MAC) || layer_state_is(_LOWER_WIN)) {
        layer = 1;
    } else if (layer_state_is(_RAISE_MAC) || layer_state_is(_RAISE_WIN)) {
        layer = 2;
    } else if (layer_state_is(_ADJUST)) {
        layer = 3;
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
