//  Copyright 2022 <gloriagi, thalassa>

#include "s21_math.h"

long double s21_acos(double x) {
    long double acosAlpha = s21_NAN;
    if (x == -1.0) acosAlpha = s21_M_PI;
    else if (x == 1.0) acosAlpha = 0.0;
    else if (x >= -1.0000000 && x <= 1.000000)
        acosAlpha = 2.0 * s21_asin(s21_sqrt((1 - x) / 2.0));
    return acosAlpha;
}
