#pragma once

/* Disable unused features. */
#define NO_ACTION_ONESHOT

/* Tap-hold tuning, selected per key in source.c. */
#define PERMISSIVE_HOLD_PER_KEY
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY

/* Charybdis-specific features. */

// #define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_ENABLE
#define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_TIMEOUT_MS 3000
#define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_THRESHOLD 1

/* Reverse horizontal drag-scroll direction. */
#define CHARYBDIS_DRAGSCROLL_REVERSE_X
// #define CHARYBDIS_DRAGSCROLL_REVERSE_Y // Scroll like in MacOS
