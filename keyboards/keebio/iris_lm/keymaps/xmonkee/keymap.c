// Copyright 2023 Danny Nguyen (@nooges)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_layers {
     _QWERTY,
     _LOWER,
     _RAISE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
    	     QK_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
MT(MOD_LALT, KC_TAB), KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_ESC,
    	     KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    	     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, TL_UPPR,             TL_UPPR, KC_N,    KC_M,  KC_COMM,   KC_DOT,   KC_SLSH, KC_ENT,
    	     		                          TL_LOWR, KC_LGUI, KC_LSFT,              KC_ENT, KC_SPC,  TL_LOWR
  ),

    // PRN, BRC, CBR

  [_LOWER] = LAYOUT(
     KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                                 KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
     KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                               KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_F12,
     _______, KC_LBRC, KC_LPRN, KC_RPRN, KC_RBRC, _______,                               KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_BSLS, KC_PIPE,
     _______, _______, KC_LCBR, KC_RCBR, _______, _______, _______,             _______, KC_UNDS, KC_EQL,  KC_MINS, KC_PLUS, QK_MAKE, QK_BOOT,
                                         TL_UPPR, _______, _______,             _______, KC_BSPC, TL_UPPR
  ),

    [_RAISE] = LAYOUT(
     _______,  _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
     _______,  _______, KC_MPRV, KC_MPLY, KC_MNXT, _______,                            _______,    KC_7,    KC_8,    KC_9, _______, _______,
     _______,  _______, _______, KC_VOLU, _______, _______,                            _______,    KC_4,    KC_5,    KC_6,    KC_0, _______,
     _______,  _______, _______, KC_VOLD, _______, _______, _______,         _______,     KC_0,    KC_1,    KC_2,    KC_3, _______, _______,
                                          _______,  _______, _______,         _______,  _______, _______
    )
};

// const uint16_t PROGMEM lbrc_combo[] = {KC_W, KC_E, COMBO_END};
// const uint16_t PROGMEM lcbr_combo[] = {KC_S, KC_D, COMBO_END};
// const uint16_t PROGMEM lprn_combo[] = {KC_D, KC_F, COMBO_END};
// const uint16_t PROGMEM rbrc_combo[] = {KC_I, KC_O, COMBO_END};
// const uint16_t PROGMEM rcbr_combo[] = {KC_K, KC_L, COMBO_END};
// const uint16_t PROGMEM rprn_combo[] = {KC_J, KC_K, COMBO_END};
// combo_t key_combos[] = {
//     COMBO(lbrc_combo, KC_LBRC),
//     COMBO(lcbr_combo, KC_LCBR),
//     COMBO(lprn_combo, KC_LPRN),
//     COMBO(rbrc_combo, KC_RBRC),
//     COMBO(rcbr_combo, KC_RCBR),
//     COMBO(rprn_combo, KC_RPRN)
// };
