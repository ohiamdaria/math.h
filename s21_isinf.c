//  Copyright 2022 <gloriagi, thalassa>

#include "s21_math.h"

long double s21_isinf(long double x) {
    return (x == s21_INFINITY || x == -s21_INFINITY) ? 1 : 0;
}
