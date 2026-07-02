#pragma once

/* Disable unused features. */
#define NO_ACTION_ONESHOT

/* Charybdis-specific features. */

// #define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_ENABLE
#define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_TIMEOUT_MS 3000
#define CHARYBDIS_AUTO_POINTER_LAYER_TRIGGER_THRESHOLD 1

/* Reverse horizontal drag-scroll direction. */
#define CHARYBDIS_DRAGSCROLL_REVERSE_X
// #define CHARYBDIS_DRAGSCROLL_REVERSE_Y // Scroll like in MacOS
