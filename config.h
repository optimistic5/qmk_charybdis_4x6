#pragma once

// #undef DIODE_DIRECTION
// #define DIODE_DIRECTION ROW2COL

#define BOOTMAGIC_LITE_ROW 5
#define BOOTMAGIC_LITE_COLUMN 0

/* VBUS detection. */
#define USB_VBUS_PIN GP19 

/* serial.c configuration (for split keyboard). */
#undef SOFT_SERIAL_PIN
#define SOFT_SERIAL_PIN GP1
