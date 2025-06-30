#include QMK_KEYBOARD_H

// Combo definitions
enum combos {
    RT_LPRN,
};

const uint16_t PROGMEM rt_combo[] = {KC_R, KC_T, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    [RT_LPRN] = COMBO(rt_combo, KC_LPRN),
}; 