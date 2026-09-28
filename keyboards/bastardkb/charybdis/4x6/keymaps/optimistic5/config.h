#pragma once

/* Disable unused features. */
#define NO_ACTION_ONESHOT

/* Tap-hold tuning, selected per key in source.c. */
#define PERMISSIVE_HOLD_PER_KEY
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY

/* Charybdis-specific features. */

// Trackball DPI at step 0 (boot / after EE_CLR). DPI_MOD / DPI_RMOD move in
// 200 DPI steps across 16 steps and wrap, so the range is 3200-6200.
#define CHARYBDIS_MINIMUM_DEFAULT_DPI 3200

// #define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_ENABLE
#define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_TIMEOUT_MS 3000
#define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_THRESHOLD 1

/* Reverse horizontal drag-scroll direction. */
#define CHARYBDIS_DRAGSCROLL_REVERSE_X
// #define CHARYBDIS_DRAGSCROLL_REVERSE_Y // Scroll like in MacOS
