//  Copyright 2022 <gloriagi, thalassa>

#include "s21_math.h"

long double s21_floor(double x) {
    long double rez = 0.0;
    if (x == s21_INFINITY) { rez = s21_INFINITY;
    } else if (x == -s21_INFINITY) { rez = -s21_INFINITY;
    } else if (x != x) { rez = s21_NAN;
    } else {
        int rez2 = x;
        rez = rez2;
        if (rez > x) rez -= 1.0;
    }
    return rez;
}
