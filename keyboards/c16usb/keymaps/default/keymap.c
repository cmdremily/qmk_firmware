#include QMK_KEYBOARD_H

#define _BL 0

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BL] = KEYMAP(
    KC_1,       KC_BSPACE,       KC_LCTRL,       KC_LALT,       KC_SPACE,       KC_LGUI,       KC_Q,       KC_2,
    KC_3,       KC_W,            KC_A,           KC_LSHIFT,     KC_Z,           KC_S,          KC_E,       KC_4,
    KC_5,       KC_R,            KC_D,           KC_X,          KC_C,           KC_F,          KC_T,       KC_6,
    KC_7,       KC_Y,            KC_G,           KC_V,          KC_B,           KC_H,          KC_U,       KC_8,
    KC_9,       KC_I,            KC_J,           KC_N,          KC_M,           KC_K,          KC_O,       KC_0,
    KC_DOWN,    KC_P,            KC_L,           KC_COMMA,      KC_DOT,         KC_SCOLON,     KC_MINUS,   KC_UP,
    KC_LEFT,    KC_KP_ASTERISK,  KC_SCOLON,      KC_SLASH,      KC_ESCAPE,      KC_KP_EQUAL,   KC_KP_PLUS, KC_RIGHT,
    KC_DEL,     KC_RETURN,       KC_INSERT,      BL_TOGG,       KC_TAB,         KC_RALT,       KC_KP_ENTER,BL_BRTG
    )
};
