//  Copyright 2022 <gloriagi, thalassa>

#include "s21_math.h"

long double s21_asin(double x) {
    long double asinAlpha = s21_NAN;
    if (x == 1 || x == -1) asinAlpha = s21_M_PI_2 * x;
    else if (s21_fabs(x) < 1.0L)
        asinAlpha = s21_atan(x / s21_sqrt(1 - x * x));
    return asinAlpha;
}
