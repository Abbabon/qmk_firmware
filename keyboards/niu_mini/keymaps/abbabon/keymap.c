#include QMK_KEYBOARD_H

// readability, _______ == 7 * _
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	/* Layer 0
	 * ,-----------------------------------------------------------------------------------.
	 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
	 * |------+------+------+------+------+-------------+------+------+------+------+------|
	 * | Ctrl |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
	 * |------+------+------+------+------+------|------+------+------+------+------+------|
	 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |  Up  |Enter |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * |  '   |  \   |  ALT  | GUI  |Layer1|    Space    |Layer2|  /   | Left  | Down | Right|
	 * `-----------------------------------------------------------------------------------'
	 */
	[0] = LAYOUT_planck_mit(
		KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,  KC_T,   KC_Y,   KC_U,  KC_I,    KC_O,    KC_P,    KC_BSPC,
		KC_LCTL,  KC_A,    KC_S,    KC_D,    KC_F,  KC_G,   KC_H,   KC_J,  KC_K,    KC_L,    KC_SCLN, KC_QUOT,
		KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,  KC_B,   KC_N,   KC_M,  KC_COMM, KC_DOT,  KC_UP,   KC_ENT,
		KC_GRV, KC_BSLASH, KC_LALT, KC_LGUI, MO(1),     KC_SPC,     MO(2), KC_SLSH, KC_LEFT, KC_DOWN, KC_RGHT
  ),

	/* Layer 1 - LOWER (Left Hand)
	 * ,-----------------------------------------------------------------------------------.
	 * | Esc  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   10 | Del  |
	 * |------+------+------+------+------+-------------+------+------+------+------+------|
	 * |      | Vol- | Vol+ | Mute |      |   _  |   +  |   -  |  =   |   [  |   ]  | Ins  |
	 * |------+------+------+------+------+------|------+------+------+------+------+------|
	 * |      | Play |      |      |      |      |      |      |      |  ({) |  (}) |      |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * |  (~) |  (|) |      |      |      |      |      |      |      |      |      |      |
	 * `-----------------------------------------------------------------------------------'
	 */
	[1] = LAYOUT_planck_mit(
		KC_ESC,  KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,  KC_DEL,
		_______, KC_VOLD, KC_VOLU, KC_MUTE, _______, LSFT(KC_MINUS), LSFT(KC_EQUAL), KC_MINUS,  KC_EQUAL,  KC_LBRC, KC_RBRC, KC_INS,
		_______, KC_MPLY, _______, _______, _______, _______, _______, _______, _______, LSFT(KC_LBRC), LSFT(KC_RBRC), _______,
		LSFT(KC_GRV),   LSFT(KC_BSLASH), _______, _______, _______,     _______,      _______, _______, _______, _______, _______
	),

	/* Layer 2 - UPPER (Right Hand) (r_ Indicates RGB Controls)
	 * ,-----------------------------------------------------------------------------------.
	 * |  Esc |   F1 |   F2 |   F3 |   F4 |   F5 |   F6 |   F7 |   F8 |   F9 |  F10 |  Del |
	 * |------+------+------+------+------+-------------+------+------+------+------+------|
	 * | RESET|r_TOG |r_Mode|r_Hue+|r_Hue-|   _  |   +  |   -  |   =  |   [  |   ]  | F11  |
	 * |------+------+------+------+------+------|------+------+------+------+------+------|
	 * |      |BL_TOG|BL_STEP|     |      |      |      |      |      |   {  |   }  | F12  |
	 * |------+------+------+------+------+------+------+------+------+------+------+------|
	 * |      |      |      |      |      |      |      |      |      |      |      |      |
	 * `-----------------------------------------------------------------------------------'
	 */
	[2] = LAYOUT_planck_mit(
		KC_ESC, KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,    KC_DEL,
		RESET, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, LSFT(KC_MINS), LSFT(KC_EQL), KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_F11,
		_______, BL_TOGG, BL_STEP, _______, _______, _______, _______, _______, _______, LSFT(KC_LBRC), LSFT(KC_RBRC), KC_F12,
		_______, _______, _______, _______, _______,     _______,      _______, _______, _______, _______, _______
  )
};


void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_KANA)) {

	} else {

	}

}
