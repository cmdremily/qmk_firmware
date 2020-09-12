#pragma once

#include "config_common.h"

// USB Device descriptor parameter
#define VENDOR_ID       0xC1ED
#define PRODUCT_ID      0x2EC0
#define DEVICE_VER      0x0001
#define MANUFACTURER    KnKArt
#define PRODUCT         Commodore16USB
#define DESCRIPTION     QMK Firmware for Commodore16USB

// Key matrix (TtB, LtR)
#define MATRIX_ROWS 8
#define MATRIX_COLS 8
#define MATRIX_COL_PINS { B2, D0, D1, F6, F4, F0, C7, B3 }
#define MATRIX_ROW_PINS { F5, F1, D3, C6, D2, F7, B7, B1 }
#define DIODE_DIRECTION COL2ROW
#define MATRIX_HAS_GHOST
#define DRIVER_LED_TOTAL 0

#define BACKLIGHT_PIN D7
#define BACKLIGHT_LEVELS 1
#define BACKLIGHT_ON_STATE 1
#define BACKLIGHT_BREATHING 1

// Set 0 if debouncing isn't needed
#define DEBOUNCE 5

#define FORCE_NKRO

