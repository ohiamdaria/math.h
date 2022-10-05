//  Copyright 2022 <gloriagi, thalassa>

#include "s21_math.h"

long double s21_fmod(double x, double y) {
    long double absX = 0.0;
    if (s21_isinf(x) && s21_isinf(y)) { absX = s21_NAN;
    } else if (y == s21_INFINITY || y == -s21_INFINITY) {
        absX = x;
    } else if (y == 0 || y != y || x != x ||
        x == s21_INFINITY || x == -s21_INFINITY) {
        absX = s21_NAN;
    } else if (s21_fabs(x) < s21_fabs(y)) { absX = x;
    } else {
        absX = s21_fabs(x);
        long double absY = s21_fabs(y);
        while (absX >= absY)
            absX -= absY;
        if (x / s21_fabs(y) < 0.0) absX = -absX;
    }
    return absX;
}
