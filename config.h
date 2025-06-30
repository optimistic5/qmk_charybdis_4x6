#pragma once

// #undef DIODE_DIRECTION
// #define DIODE_DIRECTION ROW2COL

#define BOOTMAGIC_LITE_ROW 5
#define BOOTMAGIC_LITE_COLUMN 0

#define COMBO_COUNT 1

#ifndef __ASSEMBLER__
#ifdef COMBO_ENABLE
#include "quantum/process_keycode/process_combo.h"
extern const combo_t key_combos[COMBO_COUNT];
#endif
#endif
