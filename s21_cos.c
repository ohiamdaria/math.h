//  Copyright 2022 <gloriagi, thalassa>

#include "s21_math.h"

long double s21_cos(double x) {
    long double cosAlpha = 0.0;
    if (x != x || x == s21_INFINITY || x == -s21_INFINITY) { cosAlpha = s21_NAN;
    } else {
        x = s21_fmod(x, 2.0 * s21_M_PI);
        long double arg = 1.0;
        double k = 0;
        int n = 0;
        while (s21_fabs(arg) > 1e-50) {
            if (n % 2 != 0) cosAlpha -= arg;
            else
                cosAlpha += arg;
            k += 2;
            n++;
            arg *= x * x / ((k - 1) * k);
        }
    }
    return cosAlpha;
}
