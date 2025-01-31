/* Copyright 2019 Thomas Baart <thomas@splitkb.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#ifdef OLED_DRIVER_ENABLE
  #define OLED_DISPLAY_128X64
  #define OLED_DISPLAY_SLEEP
#endif

#ifdef RGBLIGHT_ENABLE
  #define RGBLIGHT_ANIMATIONS
  #define RGBLIGHT_HUE_STEP 8
  #define RGBLIGHT_SAT_STEP 8
  #define RGBLIGHT_VAL_STEP 8
  #define RGBLIGHT_LIMIT_VAL 150
  #define RGBLIGHT_LAYERS
  #define RGBLIGHT_SLEEP
  #define NO_MUSIC_MODE
    
  #undef LOCKING_SUPPORT_ENABLE
  #undef LOCKING_RESYNC_ENABLE
  
  #define NO_ACTION_ONESHOT
  #define LAYER_STATE_8BIT
  #define SPLIT_LAYER_STATE_ENABLE
  
  #undef ENABLE_RGB_MATRIX_ALPHAS_MODS
  #undef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
  #undef ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
  #undef ENABLE_RGB_MATRIX_BREATHING
  #undef ENABLE_RGB_MATRIX_BAND_SAT
  #undef ENABLE_RGB_MATRIX_BAND_VAL
  #undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
  #undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
  #undef ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
  #undef ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL
  #undef ENABLE_RGB_MATRIX_CYCLE_ALL
  #undef ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
  #undef ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
  #undef ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
  #undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN
  #undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
  #undef ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
  #undef ENABLE_RGB_MATRIX_CYCLE_SPIRAL
  #undef ENABLE_RGB_MATRIX_DUAL_BEACON
  #undef ENABLE_RGB_MATRIX_RAINBOW_BEACON
  #undef ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
  #undef ENABLE_RGB_MATRIX_RAINDROPS
  #undef ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
  #undef ENABLE_RGB_MATRIX_HUE_BREATHING
  #undef ENABLE_RGB_MATRIX_HUE_PENDULUM
  #undef ENABLE_RGB_MATRIX_HUE_WAVE
  #undef ENABLE_RGB_MATRIX_PIXEL_FRACTAL
  #undef ENABLE_RGB_MATRIX_PIXEL_RAIN

  #undef ENABLE_RGB_MATRIX_TYPING_HEATMAP
  #undef ENABLE_RGB_MATRIX_DIGITAL_RAIN

  #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
  #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE
  #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
  #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
  #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
  #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
  #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
  #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
  #undef ENABLE_RGB_MATRIX_SPLASH
  #undef ENABLE_RGB_MATRIX_MULTISPLASH
  #undef ENABLE_RGB_MATRIX_SOLID_SPLASH
  #undef ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#endif


// If you are using an Elite C rev3 on the slave side, uncomment the lines below:
// #define SPLIT_USB_DETECT
// #define NO_USB_STARTUP_CHECK
