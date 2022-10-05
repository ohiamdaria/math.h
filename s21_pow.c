//  Copyright 2022 <gloriagi, thalassa>

#include "s21_math.h"

long double s21_pow(double x, double n) {
    long double rez = 1.0;
    if (x == -s21_INFINITY && n >= 1.0L &&
     !s21_isinf(n) && s21_fmod(n, 2) == 1) {
        rez = -s21_INFINITY;
    } else if (x == -s21_INFINITY && n >= 1.0L &&
     !s21_isinf(n) && s21_fmod(n, 2) == 0) {
        rez = s21_INFINITY;
    } else if (x <= 0.0001 && x >= -0.0001 && x != 0.0) {
        rez = 0.0;
    } else if (x == 0 && n == 0) {
        rez = 1.0;
    } else if (x == -s21_INFINITY && n < 1 && n > -1 && n != 0) {
        rez = s21_INFINITY;
    } else if ((s21_isinf(x) && n == s21_INFINITY) ||
     (x == s21_INFINITY && n > 0.0L) ||
     (x == 0.0L && (n == -s21_INFINITY || n == -1.0L))) {
        rez = s21_INFINITY;
    } else if ((s21_isinf(x) && n == -s21_INFINITY) ||
     (x == 0.0L && (n == s21_INFINITY || n > 0.0L))) {
        rez = 0.0L;
    } else if ((((x == 1.0 || x == -1.0) && s21_isinf(n)) ||
     (x == 0.0L && n == s21_INFINITY)) || (n == 0.0L)) {
        rez = 1.0L;
    } else if (x == s21_INFINITY && n == -1.0L) {
        rez = 0.0L;
    } else if (x == -s21_INFINITY && n == -1.0L) {
        rez = -0.0L;
    } else if ((x < -1.0 && n == s21_INFINITY ) ||
     (x > -1.0 && x < 0.0 && n == -s21_INFINITY)) {
        rez = s21_INFINITY;
    } else if (x != x || n != n || (x < 0.0 && s21_fmod(n, 1.0) != 0.0 &&
        !s21_isinf(n))) {
        rez = s21_NAN;
    } else {
        if (s21_fabs(x) >= 70.0) {
            for (int k = 0; k < s21_floor(n); k++) rez *= x;
            long double rez2 = 0.0L;
            rez2 = s21_exp(s21_fmod(n, 1) * s21_log(s21_fabs(x)));
            rez *= rez2;
        } else {
            rez = s21_exp(n * s21_log(s21_fabs(x)));
        }
        if ((x < s21_M_EPS && s21_fmod(n, 2) != 0) || rez == -s21_INFINITY
            || rez == 0.0) rez = -rez;
    }
    return (rez);
}
