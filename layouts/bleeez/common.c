
/*
 SYMBOL     DE-SYMBOL   DE-MAC          DE-WINDOWS
 --------------------------------------------------
   '        DE_QUOT     S(KC_NUHS)      S(KC_NUHS)
   "        DE_DQUO     S(KC_2)         S(KC_2)
   %        DE_PERC     S(KC_5)         S(KC_5)
   #        DE_HASH     KC_NUHS         KC_NUHS
   !        DE_EXLM     S(KC_1)         S(KC_1)
   \        DE_BSLS     S(A(KC_7))      ALGR(KC_MINS)
   {        DE_LCBR     A(KC_8)         ALGR(KC_7)
   ?        DE_QUES     S(KC_MINS)      S(KC_MINS)
   [        DE_LBRC     A(KC_5)         ALGR(KC_8)
   (        DE_LPRN     S(KC_8)         S(KC_8)
   =        DE_EQL      S(KC_0)         S(KC_0)
   <        DE_LABK     KC_NUBS         KC_NUBS
   $        DE_DLR      S(KC_4)         S(KC_4)
   /        DE_SLSH     S(KC_7)         S(KC_7)
   ^(dead)  DE_CIRC     KC_GRV          KC_GRV
   &        DE_AMPR     S(KC_6)         S(KC_6)
   )        DE_RPRN     S(KC_9)         S(KC_9)
   }        KC_RCBR     A(KC_9)         ALGR(KC_0)
   °        DE_DEG      S(KC_GRV)       S(KC_GRV)
   ´(dead)  DE_ACUT     KC_EQL          KC_EQL
   `(dead)  DE_GRV      S(KC_EQL)       S(KC_EQL)
   *        DE_ASTR     S(KC_RBRC)      S(KC_RBRC)
   |        DE_PIPE     A(KC_7)         ALGR(KC_NUBS)
   >        DE_RABK     S(KC_NUBS)      S(KC_NUBS)
   ]        DE_RBRC     A(KC_6)         ALGR(KC_9)
   ~(dead)  DE_TILD     A(KC_N)         ALGR(KC_RBRC)
   +        DE_PLUS     KC_RBRC         KC_RBRC
   µ        DE_MICR     A(KC_M)         ALGR(KC_M)
   €        DE_EURO     A(KC_E)         ALGR(KC_E)
   @        DE_AT       A(KC_L)         ALGR(KC_Q)
   ß        DE_SS       KC_MINS         KC_MINS
   ä        DE_ADIA     KC_QUOT         KC_QUOT
   ö        DE_ODIA     KC_SCLN         KC_SCLN
   ü        DE_UDIA     KC_LBRC         KC_LBRC
   word <-              A(KC_LEFT)      C(KC_LEFT)
   word ->              A(KC_RGHT)      C(KC_RGHT)
*/

// '
#define DM_QUOT S(KC_NUHS)
#define DW_QUOT S(KC_NUHS)
// "
#define DM_DQUO S(KC_2)
#define DW_DQUO S(KC_2)
// %
#define DM_PERC S(KC_5)
#define DW_PERC S(KC_5)
// #
#define DM_HASH KC_NUHS
#define DW_HASH KC_NUHS
// !
#define DM_EXLM S(KC_1)
#define DW_EXLM S(KC_1)
// \ Backslash
#define DM_BSLS S(A(KC_7))
#define DW_BSLS ALGR(KC_MINS)
// {
#define DM_LCBR A(KC_8)
#define DW_LCBR ALGR(KC_7)
// ?
#define DM_QUES S(KC_MINS)
#define DW_QUES S(KC_MINS)
// [
#define DM_LBRC A(KC_5)
#define DW_LBRC ALGR(KC_8)
// (
#define DM_LPRN S(KC_8)
#define DW_LPRN S(KC_8)
// =
#define DM_EQL S(KC_0)
#define DW_EQL S(KC_0)
// <
#define DM_LABK KC_NUBS
#define DW_LABK KC_NUBS
// $
#define DM_DLR S(KC_4)
#define DW_DLR S(KC_4)
// /
#define DM_SLSH S(KC_7)
#define DW_SLSH S(KC_7)
// ^(dead)
#define DM_CIRC KC_GRV
#define DW_CIRC KC_GRV
// &
#define DM_AMPR S(KC_6)
#define DW_AMPR S(KC_6)
// )
#define DM_RPRN S(KC_9)
#define DW_RPRN S(KC_9)
// }
#define DM_RCBR A(KC_9)
#define DW_RCBR ALGR(KC_0)
// °
#define DM_DEG S(KC_GRV)
#define DW_DEG S(KC_GRV)
// ´(dead)
#define DM_ACUT KC_EQL
#define DW_ACUT KC_EQL
// `(dead)
#define DM_GRV S(KC_EQL)
#define DW_GRV S(KC_EQL)
// *
#define DM_ASTR S(KC_RBRC)
#define DW_ASTR S(KC_RBRC)
// |
#define DM_PIPE A(KC_7)
#define DW_PIPE ALGR(KC_NUBS)
// >
#define DM_RABK S(KC_NUBS)
#define DW_RABK S(KC_NUBS)
// ]
#define DM_RBRC A(KC_6)
#define DW_RBRC ALGR(KC_9)
// ~(dead)
#define DM_TILD A(KC_N)
#define DW_TILD ALGR(KC_RBRC)
// +
#define DM_PLUS KC_RBRC
#define DW_PLUS KC_RBRC
// µ
#define DM_MICR A(KC_M)
#define DW_MICR ALGR(KC_M)
// €
#define DM_EURO A(KC_E)
#define DW_EURO ALGR(KC_E)
// @
#define DM_AT A(KC_L)
#define DW_AT ALGR(KC_Q)
// ß
#define DM_SS KC_MINS
#define DW_SS KC_MINS
// ä
#define DM_ADIA KC_QUOT
#define DW_ADIA KC_QUOT
// ö
#define DM_ODIA KC_SCLN
#define DW_ODIA KC_SCLN
// ü
#define DM_UDIA KC_LBRC
#define DW_UDIA KC_LBRC
// -------------- SPECIAL --------------
// word <-
#define DM_WGL A(KC_LEFT)
#define DW_WGL C(KC_LEFT)
// word ->
#define DM_WGR A(KC_RGHT)
#define DW_WGR C(KC_RGHT)



enum layers {
    _QWERTZ,
    _NAV_MAC,
    _NAV_WIN,
    _NUMBER_MAC,
    _NUMBER_WIN,
    _LOWER_MAC,
    _LOWER_WIN,
    _RAISE_MAC,
    _RAISE_WIN,
    _ADJUST,
};



enum custom_keycodes { QWERTZ = SAFE_RANGE, LOWER, RAISE, OS_CHANGE, ADJUST };

#define NAV_SPC LT(_NAV_MAC, KC_SPC)
#define NUM_TAB LT(_NUMBER_MAC, KC_TAB)

#define RAI_SPC LT(_RAISE_MAC, KC_SPC)
#define RAI_ESC LT(_RAISE_MAC, KC_ESC)
#define LOW_DEL LT(_LOWER_MAC, KC_DEL)

#define ADJ_DEL LT(_ADJUST, KC_DEL)
#define RAI_DEL LT(_QWERTZ, KC_DEL)
#define ADJUST MO(_ADJUST)
#define CTL_TAB CTL_T(KC_TAB)
#define CTL_ENT CTL_T(KC_ENT)
#define CTL_ESC CTL_T(KC_ESC)
#define GUI_ESC GUI_T(KC_ESC)


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
        case NAV_SPC:
            if (record->tap.count) {
                return true;
            } else if (record->event.pressed) {
                if (os_active == _MAC) {
                    layer_on(_NAV_MAC);
                } else {
                    layer_on(_NAV_WIN);
                }
            } else {
                if (os_active == _MAC) {
                    layer_off(_NAV_MAC);
                } else {
                    layer_off(_NAV_WIN);
                }
            }
            return false;
        case NUM_TAB:
            if (record->tap.count) {
                return true;
            } else if (record->event.pressed) {
                if (os_active == _MAC) {
                    layer_on(_NUMBER_MAC);
                } else {
                    layer_on(_NUMBER_WIN);
                }
            } else {
                if (os_active == _MAC) {
                    layer_off(_NUMBER_MAC);
                } else {
                    layer_off(_NUMBER_WIN);
                }
            }
            return false;
        case LOW_DEL:
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
        case RAI_ESC:
        case RAI_SPC:
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

bool get_ignore_mod_tap_interrupt(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LCTL_T(KC_T):
        case LGUI_T(KC_S):
        case LALT_T(KC_R):
        case RCTL_T(KC_N):
        case RGUI_T(KC_E):
        case RALT_T(KC_I):
            // Do not force the mod-tap key press to be handled as a modifier
            // if any other key was pressed while the mod-tap key is held down.
            return true;
        default:
            // Force the mod-tap key press to be handled as a modifier if any
            // other key was pressed while the mod-tap key is held down.
            return false;
    }
}
