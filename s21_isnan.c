//  Copyright 2022 <gloriagi, thalassa>

#include "s21_math.h"

int s21_isnan(double x) {
    return (!(x < 0) && !(x >= 0)) ? 1 : 0;
}
