//  Copyright 2022 <gloriagi, thalassa>

#include "s21_math.h"

long double s21_exp(double x) {
    long double answer = 0.0;
    if (x == s21_INFINITY) { answer = s21_INFINITY;
    } else if (x == -s21_INFINITY) { answer = 0.0;
    } else if (x != x) { answer = s21_NAN;
    } else if (x > 709.8) { answer = s21_INFINITY;
    } else if (x < -708.4 ) { answer = 0.0;
    } else {
        long double arg = 1.0;
        int k = 1;
        while (s21_fabs(arg/answer) > 1e-100) {
            answer += arg;
            arg *= x / k++;
        }
    }
    return answer;
}
