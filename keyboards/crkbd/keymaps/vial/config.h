/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define VIAL_KEYBOARD_UID {0x45, 0x89, 0xD8, 0xFA, 0xC7, 0x2A, 0x36, 0x89}
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}

#define VENDOR_ID 0x4653
#define PRODUCT_ID 0x0004

#define VIAL_TAP_DANCE_ENTRIES 48
#define VIAL_COMBO_ENTRIES 48
#undef VIAL_MACRO_ENTRIES
#define VIAL_MACRO_ENTRIES 96
#define VIAL_STORAGE_SIZE 8192
#undef KEY_OVERRIDE_ENABLE
#define KEY_OVERRIDE_ENABLE = no
#define VIALRGB_NO_DIRECT
#define VIAL_DEBUG_DISABLE

#define VIAL_KEY_OVERRIDE_ENTRIES 1
#define DYNAMIC_KEYMAP_MACRO_COUNT 96
#define DYNAMIC_KEYMAP_KEY_OVERRIDE_COUNT 0
#define NO_MUSIC_MODE
#define LAYER_STATE_8BIT
#undef DYNAMIC_KEYMAP_LAYER_COUNT
#define DYNAMIC_KEYMAP_LAYER_COUNT 6
#define TAPPING_TERM 180

//#define USE_MATRIX_I2C
#ifdef KEYBOARD_crkbd_rev1_legacy
#    undef USE_I2C
#    define USE_SERIAL
#endif

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define USE_SERIAL_PD2
#ifdef RGBLIGHT_ENABLE
#    undef RGBLIGHT_LED_COUNT
#    define RGBLIGHT_ANIMATIONS
#    define RGBLIGHT_LED_COUNT 54
#    undef RGBLED_SPLIT
#    define RGBLED_SPLIT \
        { 27, 27 }
#    define RGBLIGHT_LIMIT_VAL 120
#    define RGBLIGHT_HUE_STEP  10
#    define RGBLIGHT_SAT_STEP  17
#    define RGBLIGHT_VAL_STEP  17
#endif

#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"
