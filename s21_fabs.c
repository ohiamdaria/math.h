//  Copyright 2022 <gloriagi, thalassa>

#include "s21_math.h"

long double s21_fabs(double x) {
    if (s21_isnan(x)) return s21_NAN;
    if (s21_isinf(x)) return s21_INFINITY;
    return __builtin_signbit(x) ? -x : x;
}
