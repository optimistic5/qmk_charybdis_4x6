#pragma once

enum charybdis_keymap_layers {
    LAYER_BASE = 0,
    LAYER_POINTER = 3,
};

#ifndef POINTING_DEVICE_ENABLE
#    define DRGSCRL KC_NO
#    define DPI_MOD KC_NO
#    define S_D_MOD KC_NO
#    define SNIPING KC_NO
#endif // !POINTING_DEVICE_ENABLE
