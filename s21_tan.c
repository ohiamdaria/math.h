//  Copyright 2022 <gloriagi, thalassa>

#include "s21_math.h"

long double s21_tan(double x) {
    long double tanAlpha = 0.0;
    int znak = 1;
    if (s21_fmod(x, s21_M_PI * 2) == s21_M_PI_2) {
        tanAlpha = s21_05pi;
    } else if (s21_fmod(x, s21_M_PI * 2) == -s21_M_PI_2) {
        tanAlpha = -s21_05pi;
    } else {
        if (x < 0.0) znak = -1;
        x = s21_fmod(s21_fabs(x), s21_M_PI * 2.0);
        tanAlpha = (long double) s21_sin(x) / (long double) s21_cos(x);
    }
    return znak * tanAlpha;
}
