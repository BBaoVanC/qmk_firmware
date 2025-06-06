#include QMK_KEYBOARD_H
#define _LAYER0 0
#define _LAYER1 1
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
		[_LAYER0] = LAYOUT_60_ansi( /* Base */
			QK_GESC,         KC_1,     KC_2,     KC_3,  KC_4,  KC_5,  KC_6,    KC_7,  KC_8,    KC_9,     KC_0,      KC_MINS,  KC_EQL,  KC_BSPC,
		    KC_TAB,          KC_Q,     KC_W,     KC_E,  KC_R,  KC_T,  KC_Y,    KC_U,  KC_I,    KC_O,     KC_P,      KC_LBRC,  KC_RBRC, KC_BSLS,
			CTL_T(KC_CAPS),  KC_A,     KC_S,     KC_D,  KC_F,  KC_G,  KC_H,    KC_J,  KC_K,    KC_L,     KC_SCLN,   KC_QUOT,           KC_ENT,
		    KC_LSFT,         KC_Z,     KC_X,     KC_C,  KC_V,  KC_B,  KC_N,    KC_M,  KC_COMM, KC_DOT,   KC_SLSH,   KC_RSFT,
		    KC_LCTL,         KC_LGUI,  KC_LALT,                KC_SPC,                         KC_RALT,  MO(1),     KC_RGUI,             KC_RCTL),
		[_LAYER1] = LAYOUT_60_ansi( /* FN */
				QK_GESC,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL ,
			    KC_TRNS,  RM_TOGG,  KC_UP,    RM_NEXT,  KC_TRNS,  KC_TRNS,  KC_CALC,  KC_TRNS,  KC_INS,   KC_TRNS,  KC_PSCR,  KC_SCRL,  KC_PAUS,  QK_BOOT  ,
			    KC_TRNS,  KC_LEFT,  KC_DOWN,  KC_RIGHT, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_HOME,  KC_PGUP,            KC_TRNS,
				KC_MPRV,  KC_VOLD,  KC_VOLU,  KC_MUTE,  KC_TRNS,  KC_TRNS,  NK_TOGG,  KC_TRNS,  KC_TRNS,  KC_END,   KC_PGDN,  KC_MNXT,
				KC_TRNS,  KC_TRNS,  KC_TRNS,                      KC_TRNS,                                  KC_TRNS,  KC_TRNS,  KC_TRNS,            KC_TRNS),
		};