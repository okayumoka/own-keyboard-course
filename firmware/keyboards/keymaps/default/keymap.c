/* Copyright 2019 okayu
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

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
  QMKBEST = SAFE_RANGE,
  QMKURL
};

#define WIN 0
#define MAC 1
#define LOWER 2
#define RAISE 3
#define ADJUST 4
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Base for Windows
   * ,------------------------------------------------.   ,------------------------------------------------.
   * | Tab  |   Q  |   W  |   E  |   R  |   T  | Reset|   | Reset|  Y   |   U  |   I  |   O  |   P  | Bksp |
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | LCTL |   A  |   S  |   D  |   F  |   G  |  (   |   |  )   |  H   |   J  |   K  |   L  |   ;  |Enter |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * | Shift|   Z  |   X  |   C  |   V  |   B  |  [   |   |  ]   |  N   |   M  |   ,  |   .  |   /  |  '   |
   * |------+------+------+------+------+------+------+   |------+------+------+------+------+------+------|
   * | LGUI | Alt  |ADJUST| LGUI | Lower| Space| ESC  |   | C-Spc| Space| Raise| Left | Down |  Up  |Right |
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [WIN] = LAYOUT(
    KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , RESET  ,     RESET  , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC, \
    KC_LCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_LPRN,     KC_RPRN, KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_ENT , \
    KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_LBRC,     KC_RBRC, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_QUOT, \
    KC_LCTL, KC_LALT, MO(ADJUST), KC_LGUI, MO(LOWER), KC_SPC , KC_ESC ,     LCTL(KC_SPC), KC_SPC , MO(RAISE), KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT  \
  ),
  /* Base for Mac
   * ,------------------------------------------------.   ,------------------------------------------------.
   * | Tab  |   Q  |   W  |   E  |   R  |   T  | Reset|   | Reset|  Y   |   U  |   I  |   O  |   P  | Bksp |
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | LCTL |   A  |   S  |   D  |   F  |   G  |  (   |   |  )   |  H   |   J  |   K  |   L  |   ;  |Enter |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * | Shift|   Z  |   X  |   C  |   V  |   B  |  [   |   |  ]   |  N   |   M  |   ,  |   .  |   /  |  '   |
   * |------+------+------+------+------+------+------+   |------+------+------+------+------+------+------|
   * | LGUI | Alt  |ADJUST| LGUI | Lower| Space| ESC  |   | C-Spc| Space| Raise| Left | Down |  Up  |Right |
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [MAC] = LAYOUT(
    KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , RESET  ,     RESET  , KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC, \
    KC_LCTL, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_LPRN,     KC_RPRN, KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_ENT , \
    KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , KC_LBRC,     KC_RBRC, KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_QUOT, \
    KC_LGUI, KC_LALT, MO(ADJUST), KC_LGUI, MO(LOWER), KC_SPC , KC_ESC ,     LCTL(KC_SPC), KC_SPC , MO(RAISE), KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT  \
  ),
  /* Lower
   * ,------------------------------------------------.   ,------------------------------------------------.
   * |  ~   |  !   |  @   |  #   |  $   |  %   |      |   |      |  ^   |  &   |  *   |  (   |  )   |      |
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * |      |      |      |      | Del  | End  |PgDown|   |      |  _   |  +   |  {   |  }   |  |   |     |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * | F1   | F2   | F3   | F4   | F5   | F6   |      |   |      |  F7  | F8   | F9   | F10  | F11  | F12  |
   * |------+------+------+------+------+------+------+   |------+------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |   |      |      |      |      |      |      |      |
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [LOWER] = LAYOUT(
    KC_TILD, KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC, _______,     _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______, \
    _______, _______, _______, KC_DEL , KC_END,  KC_PGDN, _______,     _______, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, _______, \
    KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_F6  , _______,     _______, KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_F11 , KC_F12 , \
    _______, _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______, _______  \
  ),
  /* Upper
   * ,------------------------------------------------.   ,------------------------------------------------.
   * |  `   |  1   |  2   |  3   |  4   |  5   |      |   |      |  6   |  7   |  8   |  9   |  0   |      |
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * |      |      |      |Insert| Home | PgUp |      |   |      |  -   |  =   |  [   |  ]   |  \   |      |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * |      |PtScr |ScLock| Pause|      |      |      |   |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+------+   |------+------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |   |      |      |      |      |      |      |      |
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [RAISE] = LAYOUT( \
    KC_GRV,  KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , _______,     _______, KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , _______, \
    _______, _______, _______, KC_INS , KC_HOME, KC_PGUP, _______,     _______, KC_MINS, KC_EQL , KC_LBRC, KC_RBRC, KC_BSLS, _______, \
    _______, KC_PSCR, KC_SLCK, KC_PAUS, _______, _______, _______,     _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______, _______  \
  ),
  /* Adjust
   * ,------------------------------------------------.   ,------------------------------------------------.
   * |      |      | Win  | Reset|      |      |      |   |      |      |      | Reset|      |      |      |
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * |      |      |      | Mac  |      |      |      |   |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |   |      |      | Mac  |      |      |      |      |
   * |------+------+------+------+------+------+------+   |------+------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |   |      |      |      |      |      |      |      |
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [ADJUST] = LAYOUT( \
    _______, _______, DF(WIN), RESET  , _______, _______, _______,     _______, _______, _______, RESET  , _______, _______, _______, \
    _______, _______, _______, DF(MAC), _______, _______, _______,     _______, _______, _______, _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______,     _______, _______, DF(MAC), _______, _______, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______, _______, _______  \
  ),
  /* template
   * ,------------------------------------------------.   ,------------------------------------------------.
   * |      |      |      |      |      |      |      |   |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |   |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |   |      |      |      |      |      |      |      |
   * |------+------+------+------+------+------+------+   |------+------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |   |      |      |      |      |      |      |      |
   * `------------------------------------------------'   `------------------------------------------------'
   */
};

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   switch (keycode) {
//     case QMKBEST:
//       if (record->event.pressed) {
//         // when keycode QMKBEST is pressed
//         SEND_STRING("QMK is the best thing ever!");
//       } else {
//         // when keycode QMKBEST is released
//       }
//       break;
//     case QMKURL:
//       if (record->event.pressed) {
//         // when keycode QMKURL is pressed
//         SEND_STRING("https://qmk.fm/" SS_TAP(X_ENTER));
//       } else {
//         // when keycode QMKURL is released
//       }
//       break;
//   }
//   return true;
// }

// void matrix_init_user(void) {

// }

// void matrix_scan_user(void) {

// }

// void led_set_user(uint8_t usb_led) {

// }
