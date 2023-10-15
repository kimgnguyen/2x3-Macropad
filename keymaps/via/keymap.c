// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [0] = LAYOUT_ortho_2x3(
       LALT(KC_F4), KC_MUTE, KC_MPLY,
       KC_MNXT, KC_MSTP, KC_MPRV
	),
};