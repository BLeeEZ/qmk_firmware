#define TAPPING_TERM 300
#define IGNORE_MOD_TAP_INTERRUPT_PER_KEY

// dactyl manuform pins
#undef DIODE_DIRECTION
#define DIODE_DIRECTION COL2ROW
#undef MATRIX_COL_PINS
#define MATRIX_COL_PINS { C6, D7, E6, B4, B5 }
#undef MATRIX_ROW_PINS
#define MATRIX_ROW_PINS { F7, B1, B3, B2 }

#ifdef MASTER_RIGHT
    #undef MASTER_RIGHT
#endif

#define LAYOUT(                             \
	k00, k01, k02, k03, k04,			k44, k43, k42, k41, k40, \
	k10, k11, k12, k13, k14,			k54, k53, k52, k51, k50, \
	k20, k21, k22, k23, k24,			k64, k63, k62, k61, k60, \
	          k32, k33, k34,			k74, k73, k72 \
)\
{\
	{   k00,   k01, k02, k03, k04 }, \
	{   k10,   k11, k12, k13, k14 }, \
	{   k20,   k21, k22, k23, k24 }, \
	{ KC_NO, KC_NO, k32, k33, k34 }, \
	{   k44,   k43, k42, k41, k40 }, \
	{   k54,   k53, k52, k51, k50}, \
	{   k64,   k63, k62, k61, k60}, \
	{   k74,   k73, k72, KC_NO, KC_NO}, \
}
