//  Copyright 2022 <gloriagi, thalassa>

#include "s21_math.h"

long double s21_log(double x) {
    long double log = 0.0;
    if (x == 0.0) {
        log = -s21_INFINITY;
    } else if (x != x || x < 1E-6) {
        log = s21_NAN;
    } else if (x == s21_INFINITY) {
        log = s21_INFINITY;
    } else if (x == -s21_INFINITY) {
        log = s21_NAN;
    } else if (x == 2.0) {
      log = s21_M_LN2;
    } else if (x == s21_M_E) {
        log = 1;
    } else if (x == -s21_M_E) {
        log = s21_NAN;
    } else if (s21_fabs(x - 1.0) < 1E-6) {
        log = 0.0L;
    } else {
        if (x > 0 && x < 2.0) {
            long double arg = x - 1.0;
            log = x - 1.0;
            long double k = 2;
            int n = 2;
            while (s21_fabs(arg) > 1E-50) {
                arg *= (x - 1.0);
                if (n % 2 == 0) log -= arg / k;
                else
                    log += arg / k;
                n++;
                k += 1.0L;
            }
        } else {
            long double count = 0.0;
            while (x >= 2.0) {
                x /= 2.0;
                count++;
            }
            log = count * s21_M_LN2 + s21_log(x);
        }
    }
    return log;
}
