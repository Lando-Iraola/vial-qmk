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

#define VIAL_KEYBOARD_UID {0x3B, 0x6B, 0xA0, 0x29, 0x80, 0x56, 0xED, 0xD1}
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}

#undef DYNAMIC_KEYMAP_LAYER_COUNT
#define DYNAMIC_KEYMAP_LAYER_COUNT 4
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
#ifdef RGB_MATRIX_ENABLE
  #undef RGBLIGHT_LED_COUNT
    #define RGBLIGHT_ANIMATIONS
    #define RGBLIGHT_LED_COUNT 60
    #undef RGBLED_SPLIT
    #define RGBLED_SPLIT { 30, 30 } // 30 LEDs each half

    // Optional animation configuration
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif
#ifdef RGBLIGHT_ENABLE
  #undef RGBLIGHT_LED_COUNT
    #define RGBLIGHT_ANIMATIONS
    #define RGBLIGHT_LED_COUNT 60
    #undef RGBLED_SPLIT
    #define RGBLED_SPLIT { 30, 30 } // 30 LEDs each half

    // Optional animation configuration
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif

#ifdef RGB_MATRIX_ENABLE
    #define ENABLE_RGB_MATRIX_CYCLE_ALL
    #define ENABLE_RGB_MATRIX_SOLID_COLOR
    #define ENABLE_RGB_MATRIX_BREATHING
    #define RGB_MATRIX_JELLYBEAN_RAINDROPS
    #define RGB_MATRIX_RAINBOW_PINWHEELS
    #define ENABLE_RGB_MATRIX_BAND_PINWHEEL
    #define ENABLE_RGB_MATRIX_BAND_SPIRAL
    #define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
    #define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
    #define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
    #define ENABLE_RGB_MATRIX_TYPING_HEATMAP
    #define ENABLE_RGB_MATRIX_DIGITAL_RAIN
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif

#define RGB_DISABLE_WHEN_USB_SUSPENDED    
#define OLED_FONT_H "keyboards/crkbd/lib/glcdfont.c"