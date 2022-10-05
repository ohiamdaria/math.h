//  Copyright 2022 <gloriagi, thalassa>

#include "s21_math.h"

long double s21_sqrt(double x) {
    long double max = FLT_MAX;
    if (x < 0 || x != x) { max = s21_NAN;
//    } else if (x == 1e-16) { max = 0.0;
    } else if (x == s21_INFINITY) { max = s21_INFINITY;
    } else if (x == 0.0L) { max = 0.0;
    } else {
        long double min = 0;
        while (max - min > 1e-9) {
            long double mid = (max + min) / 2;
            if (mid * mid > x) max = mid;
            else
                min = mid;
        }
    }
    return max;
}
