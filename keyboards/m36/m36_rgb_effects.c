#include "rgb_matrix.h"

#define DRIVER_LED_TOTAL 36

bool rgb_matrix_indicators_user(void) {
    rgb_matrix_config.mode = 1;

     for (uint8_t i = 0; i < DRIVER_LED_TOTAL; i++) {
        rgb_matrix_set_color(i, 0, 0, 0);
    }

    HSV hsv = rgb_matrix_config.hsv;
    RGB rgb = hsv_to_rgb(hsv);

    rgb_matrix_set_color(6, rgb.r, rgb.g, rgb.b);

    return false;
}
