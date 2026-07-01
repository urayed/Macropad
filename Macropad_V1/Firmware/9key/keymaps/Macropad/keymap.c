#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* LAYER 0
 * ,-----------------------.
 * |   1   |   2   |   3   |
 * |-------+-------+-------|
 * |   4   | 5/ENT |   6   | Dbl Tap 5 for Enter
 * |-------+-------+-------|
 * |  7/0  |   8   | 9/FN  | 7/0 = Dbl Tap 7 for 0  -  9/FN = Hold 9 for FN
 * `-----------------------'
 */
[0] = LAYOUT(
  KC_UNDO,       KC_PSCR,      KC_KB_VOLUME_UP,
  KC_COPY,       KC_PASTE,      KC_KB_VOLUME_DOWN,
  KC_CUT,       KC_8,      KC_KB_MUTE
)

};
