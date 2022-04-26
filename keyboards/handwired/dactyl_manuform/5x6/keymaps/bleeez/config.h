/* serial.c configuration for split keyboard */
/* using i2c for OLED */
#undef SOFT_SERIAL_PIN
#define SOFT_SERIAL_PIN D2

#define OLED_FONT_H "keyboards/handwired/dactyl_manuform/5x6/keymaps/bleeez/glcdfont.c"

#define SPLIT_LAYER_STATE_ENABLE
#define SPLIT_WPM_ENABLE

#define TAPPING_TERM 200
#define IGNORE_MOD_TAP_INTERRUPT
