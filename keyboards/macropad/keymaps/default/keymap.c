/* Copyright 2021 nottank
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_base( \
  //,--------------------------------------------.
         KC_1,    KC_1,    KC_1,    KC_1,         \
  //|--------+--------+--------+--------+--------|
         KC_1,    KC_1,    KC_1,    KC_1,         \
  //|--------+--------+--------+--------+--------|
         KC_1,    KC_1,    KC_1,    KC_1,         \
  //|--------+--------+--------+--------+--------|
         KC_1,    KC_1,    KC_1,    KC_1,    KC_1,\
  //|--------+--------+--------+--------+--------|
         KC_1,    KC_1,    KC_1,    KC_1,    KC_1 \
  //|--------+--------+--------+--------+--------|
  ),

  [1] = LAYOUT_base( \
  //,--------------------------------------------.
      _______, _______, _______, _______,         \
  //|--------+--------+--------+--------+--------|
      _______, _______, _______, _______,         \
  //|--------+--------+--------+--------+--------|
      _______, _______, _______, _______,         \
  //|--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______,\
  //|--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______ \
  //|--------+--------+--------+--------+--------|
  ),

  [2] = LAYOUT_base( \
  //,--------------------------------------------.
      _______, _______, _______, _______,         \
  //|--------+--------+--------+--------+--------|
      _______, _______, _______, _______,         \
  //|--------+--------+--------+--------+--------|
      _______, _______, _______, _______,         \
  //|--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______,\
  //|--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______ \
  //|--------+--------+--------+--------+--------|
  ),

  [3] = LAYOUT_base( \
  //,--------------------------------------------.
      _______, _______, _______, _______,         \
  //|--------+--------+--------+--------+--------|
      _______, _______, _______, _______,         \
  //|--------+--------+--------+--------+--------|
      _______, _______, _______, _______,         \
  //|--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______,\
  //|--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______ \
  //|--------+--------+--------+--------+--------|
  )
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
#ifdef RGBLIGHT_ENABLE
        case RGB_RST:
            if (record->event.pressed) {
                uint8_t mode = rgblight_get_mode();
                eeconfig_update_rgblight_default();
                rgblight_enable();
                rgblight_mode(mode);
             }
             break;
#endif
    }

    return true;
}
