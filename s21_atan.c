//  Copyright 2022 <gloriagi, thalassa>

#include "s21_math.h"

long double s21_atan(double x) {
    long double atanAlpha = 0.0;
    int sign = 1;
    if (x < 0.0) {
        sign = -1;
        x = -x;
    }
    if (x > 1.0) {
        atanAlpha = s21_M_PI_2 - s21_atan(1.0 / x);
    } else if (s21_fabs(x - 1.0) < s21_M_EPS) {
        atanAlpha = s21_M_PI_4;
    } else if (s21_fabs(x) == 0.0) {
        atanAlpha = 0.0L;
    } else {
        atanAlpha = s21_fabs(x);
        long double arg = s21_fabs(x);
        double k = 1;
        int n = 1;
        while (s21_fabs(arg / k) > 1e-10) {
            k += 2; n++;
            arg *= x * x;
            if (n % 2 == 0) atanAlpha -= arg / k;
            else
                atanAlpha += arg / k;
        }
    }
    return atanAlpha * sign;
}
