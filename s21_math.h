//  Copyright 2022 <gloriagi, thalassa>

#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#include <stdio.h>
#include <float.h>

int s21_abs(int x);
int s21_fact(int n);
long double s21_exp(double x);
long double s21_pow(double x, double n);
long double s21_sin(double x);
int s21_isnan(double x);
long double s21_isinf(long double x);
long double s21_log(double x);
long double s21_cos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_sqrt(double x);
long double s21_tan(double x);
long double s21_fmod(double x, double y);
long double s21_atan(double x);
long double s21_acos(double x);
long double s21_ceil(double x);
long double s21_floor(double x);
long double s21_fabs(double x);

#define s21_M_PI 3.14159265358979323846
#define s21_M_PI_2 1.57079632679489661923
#define s21_M_PI_4 0.785398163397448309616
#define s21_M_E 2.718281828459045236
#define s21_M_EPS 1e-8
#define s21_INFINITY 1/0.0
#define s21_NAN 0.0/0.0
#define s21_M_LN2 0.693147180559945309417
#define s21_05pi 16331239353195370.000000

#endif  // SRC_S21_MATH_H_
