
#include "jeffsu.h"
#include QMK_KEYBOARD_H

bool favor_hold(uint16_t keycode) {
    switch (keycode) {
        case SYM_BSPC:
        case SFT_ESC:
            return true;
        default:
            return false;
    }
}

// ┌────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┐
// │ C U S T O M  C O N F I G                                                                                                                   │
// └────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────┘
// ▝▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▘
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    return favor_hold(keycode) ? TAPPING_TERM : TAPPING_TERM + 1500;
}

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    return favor_hold(keycode);
}

bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    return favor_hold(keycode);
}
