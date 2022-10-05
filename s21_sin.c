//  Copyright 2022 <gloriagi, thalassa>

#include "s21_math.h"

long double s21_sin(double x) {
    long double sinAlpha = 0.0;
    if (x != x || x == s21_INFINITY || x == -s21_INFINITY) { sinAlpha = s21_NAN;
    } else {
        x = s21_fmod(x, 2.0 * s21_M_PI);
        long double arg = x;
        double k = 1;
        int n = 0;
        while (s21_fabs(arg) > 1e-15) {
            if (n % 2 != 0) sinAlpha -= arg;
            else
                sinAlpha += arg;
            k += 2; n++;
            arg *= x * x  / ((k - 1) * k);
        }
    }
    return sinAlpha;
}
