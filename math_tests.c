/*
 * DO NOT EDIT THIS FILE. Generated by checkmk.
 * Edit the original source file "tests/s21_math_tests.check" instead.
 */

#include <check.h>

#line 1 "tests/s21_math_tests.check"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
#include "s21_math.h"

//! s21_abs

START_TEST(s21_abs_test_1)
{
#line 10
ck_assert_double_eq(abs(-10), s21_abs(-10));

}
END_TEST

START_TEST(s21_abs_test_2)
{
#line 13
ck_assert_double_eq(abs(7895), s21_abs(7895));

}
END_TEST

START_TEST(s21_abs_test_3)
{
#line 16
ck_assert_double_eq(abs(-10101), s21_abs(-10101));

}
END_TEST

START_TEST(s21_abs_test_4)
{
#line 19
ck_assert_double_eq(abs(10101), s21_abs(10101));

}
END_TEST

START_TEST(s21_abs_test_5)
{
#line 22
for (int i = -128; i <= 127; i++) {
    ck_assert_int_eq(abs(i), s21_abs(i));
}

//! s21_acos tests

}
END_TEST

START_TEST(s21_acos_test_1)
{
#line 29
ck_assert_double_eq(acos(0), s21_acos(0));

}
END_TEST

START_TEST(s21_acos_test_2)
{
#line 32
for (double i = -1.000000; i <= 1; i += 0.00005)
    ck_assert_double_eq_tol(acos(i), s21_acos(i), 1e-6);

}
END_TEST

START_TEST(s21_acos_test_3)
{
#line 36
ck_assert_double_nan(s21_acos(-s21_INFINITY));

}
END_TEST

START_TEST(s21_acos_test_4)
{
#line 39
for (double i = -1.000000; i <= 1.000000; i += 0.00003)
    ck_assert_double_eq_tol(acos(i), s21_acos(i), 1e-6);

}
END_TEST

START_TEST(s21_acos_test_5)
{
#line 43
for (double i = -1.000000; i <= 1.000000; i += 0.00001)
    ck_assert_double_eq_tol(acos(i), s21_acos(i), 1e-6);

}
END_TEST

START_TEST(s21_acos_test_6)
{
#line 47
ck_assert_double_nan(s21_acos(s21_NAN));

}
END_TEST

START_TEST(s21_acos_test_7)
{
#line 50
ck_assert_double_nan(s21_acos(-1.0/0.0));

}
END_TEST

START_TEST(s21_acos_test_8)
{
#line 53
ck_assert_double_nan(s21_acos(6.654));

}
END_TEST

START_TEST(s21_acos_test_9)
{
#line 56
ck_assert_double_nan(s21_acos(1.5 * s21_M_PI));

}
END_TEST

START_TEST(s21_acos_test_10)
{
#line 59
ck_assert_double_eq_tol(acos(0.00001), s21_acos(0.00001), 1e-6);

}
END_TEST

START_TEST(s21_acos_test_11)
{
#line 62
ck_assert_double_eq_tol(acos(1.0), s21_acos(1.0), 1e-6);

//! s21_asin tests

}
END_TEST

START_TEST(s21_asin_test_1)
{
#line 67
for (double i = -1.000000; i <= 1.000000; i += 0.00005)
    ck_assert_double_eq_tol(asin(i), s21_asin(i), 1e-6);
    
}
END_TEST

START_TEST(s21_asin_test_2)
{
#line 71
for (double i = -1.000000; i <= 1.000000; i += 0.00001)
    ck_assert_double_eq_tol(asin(i), s21_asin(i), 1e-6);

}
END_TEST

START_TEST(s21_asin_test_3)
{
#line 75
ck_assert_double_nan(s21_asin(s21_NAN));
    
}
END_TEST

START_TEST(s21_asin_test_4)
{
#line 78
ck_assert_double_eq_tol(asin(1), s21_asin(1), 1e-7);

}
END_TEST

START_TEST(s21_asin_test_5)
{
#line 81
ck_assert_double_eq_tol(asin(-1), s21_asin(-1), 1e-6);

}
END_TEST

START_TEST(s21_asin_test_6)
{
#line 84
for (double i = -1.000000; i <= 1.000000; i += 0.00003)
    ck_assert_double_eq_tol(asin(i), s21_asin(i), 1e-6);

}
END_TEST

START_TEST(s21_asin_test_7)
{
#line 88
ck_assert_double_eq_tol(asin(0), s21_asin(0), 1e-6);

}
END_TEST

START_TEST(s21_asin_test_8)
{
#line 91
ck_assert_double_nan(s21_asin(INFINITY));

}
END_TEST

START_TEST(s21_asin_test_9)
{
#line 94
ck_assert_double_nan(s21_asin(-1.0/0.0));

}
END_TEST

START_TEST(s21_asin_test_10)
{
#line 97
ck_assert_double_nan(s21_asin(-252.568));

//! s21_atan tests

}
END_TEST

START_TEST(s21_atan_test_1)
{
#line 102
ck_assert_double_eq_tol(atan(500.000), s21_atan(500.000), 1e-4);

}
END_TEST

START_TEST(s21_atan_test_2)
{
#line 105
for (double i = -565.324; i <= 789.532; i += 50.6235)
    ck_assert_double_eq_tol(atan(i), s21_atan(i), 1e-6);

}
END_TEST

START_TEST(s21_atan_test_3)
{
#line 109
for (double i = -1.000000; i <= 1.000000; i += 0.00001)
    ck_assert_double_eq_tol(atan(i), s21_atan(i), 1e-7);

}
END_TEST

START_TEST(s21_atan_test_4)
{
#line 113
ck_assert_double_eq_tol(atan(-1.0/0.0), s21_atan(-1.0/0.0), 1e-7);

}
END_TEST

START_TEST(s21_atan_test_5)
{
#line 116
ck_assert_double_eq_tol(atan(0.0), s21_atan(0.0), 1e-7);

}
END_TEST

START_TEST(s21_atan_test_6)
{
#line 119
ck_assert_double_nan(s21_atan(0.0/0.0));

}
END_TEST

START_TEST(s21_atan_test_7)
{
#line 122
ck_assert_double_eq_tol(atan(0.0), s21_atan(0.0), 1e-7);

}
END_TEST

START_TEST(s21_atan_test_8)
{
#line 125
for (double i = -123456.789456; i <= 123456.789456; i += 1.0)
    ck_assert_double_eq_tol(atan(i), s21_atan(i), 1e-7);

}
END_TEST

START_TEST(s21_atan_test_9)
{
#line 129
ck_assert_double_eq_tol(atan(INFINITY), s21_atan(s21_INFINITY), 1e-7);

}
END_TEST

START_TEST(s21_atan_test_10)
{
#line 132
ck_assert_double_eq_tol(atan(-2.78965), s21_atan(-2.78965), 1e-7);

//! s21_ceil tests

}
END_TEST

START_TEST(s21_ceil_test_1)
{
#line 137
double i;
for (i = -M_PI/2; i <= M_PI/2; i+= 0.25) {
    ck_assert_double_eq(ceil(i), s21_ceil(i));
}
}
END_TEST

START_TEST(s21_ceil_test_2)
{
#line 142
ck_assert_double_eq(ceil(INFINITY), s21_ceil(s21_INFINITY));

}
END_TEST

START_TEST(s21_ceil_test_3)
{
#line 145
ck_assert_double_eq(ceil(-INFINITY), s21_ceil(-s21_INFINITY));

}
END_TEST

START_TEST(s21_ceil_test_4)
{
#line 148
ck_assert_double_nan(ceil(NAN));

}
END_TEST

START_TEST(s21_ceil_test_5)
{
#line 151
ck_assert_double_nan(s21_ceil(s21_NAN));

}
END_TEST

START_TEST(s21_ceil_test_6)
{
#line 154
ck_assert_double_eq(ceil(-7.0), s21_ceil(-7.0));

}
END_TEST

START_TEST(s21_ceil_test_7)
{
#line 157
ck_assert_double_eq(ceil(-98.1), s21_ceil(-98.1));

}
END_TEST

START_TEST(s21_ceil_test_8)
{
#line 160
ck_assert_double_eq(ceil(123.02), s21_ceil(123.02));

}
END_TEST

START_TEST(s21_ceil_test_9)
{
#line 163
ck_assert_double_eq(ceil(10009.00123), s21_ceil(10009.00123));

}
END_TEST

START_TEST(s21_ceil_test_10)
{
#line 166
ck_assert_double_eq(ceil(-10009.555), s21_ceil(-10009.555));

}
END_TEST

START_TEST(s21_ceil_test_11)
{
#line 169
ck_assert_double_eq(ceil(-0.10009), s21_ceil(-0.10009));

}
END_TEST

START_TEST(s21_ceil_test_12)
{
#line 172
ck_assert_double_eq(ceil(-1e-23), s21_ceil(-1e-23));

}
END_TEST

START_TEST(s21_ceil_test_13)
{
#line 175
ck_assert_double_eq(ceil(7), s21_ceil(7));

}
END_TEST

START_TEST(s21_ceil_test_14)
{
#line 178
ck_assert_double_eq(ceil(0), s21_ceil(0));

}
END_TEST

START_TEST(s21_ceil_test_15)
{
#line 181
ck_assert_double_eq(ceil(0.0), s21_ceil(0.0));

//! s21_cos tests
}
END_TEST

START_TEST(s21_cos_test_1)
{
#line 185
for (double i = -1.000000; i <= 1.000000; i += 0.00001)
    ck_assert_double_eq_tol(cos(i), s21_cos(i), s21_M_EPS);

}
END_TEST

START_TEST(s21_cos_test_2)
{
#line 189
ck_assert_double_nan(s21_cos(s21_NAN));

}
END_TEST

START_TEST(s21_cos_test_3)
{
#line 192
ck_assert_double_nan(s21_cos(-s21_INFINITY));

}
END_TEST

START_TEST(s21_cos_test_4)
{
#line 195
ck_assert_double_nan(s21_cos(s21_INFINITY));

}
END_TEST

START_TEST(s21_cos_test_5)
{
#line 198
for (double i = -223.654; i <= 148.522; i += 2.456)
    ck_assert_double_eq_tol(cos(i), s21_cos(i), s21_M_EPS);

}
END_TEST

START_TEST(s21_cos_test_6)
{
#line 202
ck_assert_double_nan(s21_cos(-0.0/0.0));

}
END_TEST

START_TEST(s21_cos_test_7)
{
#line 205
for (double i = -10009.6; i <= -9808.0; i += 0.1)
    ck_assert_double_eq_tol(cos(i), s21_cos(i), s21_M_EPS);

}
END_TEST

START_TEST(s21_cos_test_8)
{
#line 209
for (double i = 9809.6; i <= 10890.0; i += 0.1)
    ck_assert_double_eq_tol(cos(i), s21_cos(i), s21_M_EPS);



//! s21_pow tests
}
END_TEST

START_TEST(s21_pow_test_1)
{
#line 216
ck_assert_double_eq_tol(pow(0.3123, 0.789456), s21_pow(0.3123, 0.789456), 1e-6);

}
END_TEST

START_TEST(s21_pow_test_2)
{
#line 219
ck_assert_double_eq_tol(pow(56.3, 0.3), s21_pow(56.3, 0.3), 1e-6);

}
END_TEST

START_TEST(s21_pow_test_3)
{
#line 222
ck_assert_double_eq(pow(1, 0), s21_pow(1, 0));

}
END_TEST

START_TEST(s21_pow_test_4)
{
#line 225
ck_assert_double_eq(pow(-1, 3), s21_pow(-1, 3));

}
END_TEST

START_TEST(s21_pow_test_5)
{
#line 228
ck_assert_double_eq(pow(-1, 4), s21_pow(-1, 4));

}
END_TEST

START_TEST(s21_pow_test_6)
{
#line 231
ck_assert_double_eq(pow(0, 0), s21_pow(0, 0));

}
END_TEST

START_TEST(s21_pow_test_7)
{
#line 234
ck_assert_double_eq(pow(0, -1), s21_pow(0, -1));

}
END_TEST

START_TEST(s21_pow_test_9)
{
#line 237
ck_assert_double_eq(pow(INFINITY, 0), s21_pow(s21_INFINITY, 0));

}
END_TEST

START_TEST(s21_pow_test_13)
{
#line 240
ck_assert_double_nan(s21_pow(0, s21_NAN));

}
END_TEST

START_TEST(s21_pow_test_15)
{
#line 243
ck_assert_double_nan(s21_pow(s21_NAN, s21_NAN));

}
END_TEST

START_TEST(s21_pow_test_17)
{
#line 246
ck_assert_double_eq(pow(INFINITY, -INFINITY), s21_pow(s21_INFINITY, -s21_INFINITY));

}
END_TEST

START_TEST(s21_pow_test_18)
{
#line 249
ck_assert_double_eq(pow(INFINITY, -1), s21_pow(s21_INFINITY, -1));

}
END_TEST

START_TEST(s21_pow_test_19)
{
#line 252
ck_assert_double_eq(pow(-INFINITY, -1), s21_pow(-s21_INFINITY, -1));

}
END_TEST

START_TEST(s21_pow_test_20)
{
#line 255
ck_assert_double_eq(pow(0, INFINITY), s21_pow(0, s21_INFINITY));

}
END_TEST

START_TEST(s21_pow_test_21)
{
#line 258
ck_assert_double_eq(pow(0, 1), s21_pow(0, 1));

}
END_TEST

START_TEST(s21_pow_test_22)
{
#line 261
ck_assert_double_eq(pow(1, INFINITY), s21_pow(1, s21_INFINITY));

}
END_TEST

START_TEST(s21_pow_test_23)
{
#line 264
ck_assert_double_eq(pow(-1, INFINITY), s21_pow(-1, s21_INFINITY));

}
END_TEST

START_TEST(s21_pow_test_24)
{
#line 267
ck_assert_double_eq(pow(-1, -INFINITY), s21_pow(-1, -s21_INFINITY));

}
END_TEST

START_TEST(s21_pow_test_25)
{
#line 270
ck_assert_double_eq(pow(INFINITY, 0), s21_pow(s21_INFINITY, 0));

}
END_TEST

START_TEST(s21_pow_test_26)
{
#line 273
ck_assert_double_eq(pow(-INFINITY, 0), s21_pow(-s21_INFINITY, 0));

}
END_TEST

START_TEST(s21_pow_test_27)
{
#line 276
ck_assert_double_eq(pow(INFINITY, INFINITY), s21_pow(s21_INFINITY, s21_INFINITY));

}
END_TEST

START_TEST(s21_pow_test_28)
{
#line 279
ck_assert_double_eq(pow(-INFINITY, INFINITY), s21_pow(-s21_INFINITY, s21_INFINITY));

}
END_TEST

START_TEST(s21_pow_test_29)
{
#line 282
ck_assert_double_eq(pow(INFINITY, 1), s21_pow(s21_INFINITY, 1));

}
END_TEST

START_TEST(s21_pow_test_30)
{
#line 285
ck_assert_double_eq(pow(0, -INFINITY), s21_pow(0, -s21_INFINITY));

}
END_TEST

START_TEST(s21_pow_test_31)
{
#line 288
ck_assert_double_eq(pow(0, -1), s21_pow(0, -1));

}
END_TEST

START_TEST(s21_pow_test_32)
{
#line 291
ck_assert_double_eq(pow(-INFINITY, 1), s21_pow(-s21_INFINITY, 1));

}
END_TEST

START_TEST(s21_pow_test_33)
{
#line 294
ck_assert_double_eq(pow(2, INFINITY), s21_pow(2, s21_INFINITY));

}
END_TEST

START_TEST(s21_pow_test_34)
{
#line 297
ck_assert_double_eq(pow(-2, INFINITY), s21_pow(-2, s21_INFINITY));

}
END_TEST

START_TEST(s21_pow_test_35)
{
#line 300
ck_assert_double_eq(pow(2, -INFINITY), s21_pow(2, -s21_INFINITY));

}
END_TEST

START_TEST(s21_pow_test_36)
{
#line 303
ck_assert_double_eq(pow(-2, -INFINITY), s21_pow(-2, -s21_INFINITY));

}
END_TEST

START_TEST(s21_pow_test_37)
{
#line 306
ck_assert_double_eq(pow(0.5, INFINITY), s21_pow(0.5, s21_INFINITY));

}
END_TEST

START_TEST(s21_pow_test_38)
{
#line 309
ck_assert_double_eq(pow(-0.5, INFINITY), s21_pow(-0.5, s21_INFINITY));

}
END_TEST

START_TEST(s21_pow_test_39)
{
#line 312
ck_assert_double_eq(pow(0.5, -INFINITY), s21_pow(0.5, -s21_INFINITY));

}
END_TEST

START_TEST(s21_pow_test_40)
{
#line 315
ck_assert_double_eq(pow(-0.5, -INFINITY), s21_pow(-0.5, -s21_INFINITY));

}
END_TEST

START_TEST(s21_pow_test_41)
{
#line 318
ck_assert_double_nan(s21_pow(s21_NAN, s21_INFINITY));

}
END_TEST

START_TEST(s21_pow_test_42)
{
#line 321
ck_assert_double_nan(s21_pow(s21_INFINITY, s21_NAN));

}
END_TEST

START_TEST(s21_pow_test_43)
{
#line 324
ck_assert_double_nan(s21_pow(s21_NAN, -s21_INFINITY));

}
END_TEST

START_TEST(s21_pow_test_44)
{
#line 327
ck_assert_double_nan(s21_pow(-s21_INFINITY, s21_NAN));

}
END_TEST

START_TEST(s21_pow_test_45)
{
#line 330
ck_assert_double_nan(s21_pow(-0.789456, -0.789456));

}
END_TEST

START_TEST(s21_pow_test_46)
{
#line 333
ck_assert_double_nan(s21_pow(-500.789456, -10.1354323));

}
END_TEST

START_TEST(s21_pow_test_47)
{
#line 336
ck_assert_double_nan(s21_pow(-500.789456, 34.13));

}
END_TEST

START_TEST(s21_pow_test_48)
{
#line 339
ck_assert_double_eq_tol(pow(10.789456, 3.13), s21_pow(10.789456, 3.13), 1e-2);

}
END_TEST

START_TEST(s21_pow_test_49)
{
#line 342
ck_assert_double_eq(pow(-1, -s21_INFINITY), s21_pow(-1, -s21_INFINITY));

}
END_TEST

START_TEST(s21_pow_test_50)
{
#line 345
ck_assert_double_eq_tol(pow(70, 3.13), s21_pow(70, 3.13), 1e-6);

}
END_TEST

START_TEST(s21_pow_test_51)
{
#line 348
ck_assert_double_eq_tol(pow(112, 0.2356), s21_pow(112, 0.2356), 1e-6);

}
END_TEST

START_TEST(s21_pow_test_52)
{
#line 351
ck_assert_double_eq_tol(pow(112, 5.4), s21_pow(112, 5.4), 1e-6);

}
END_TEST

START_TEST(s21_pow_test_53)
{
#line 354
ck_assert_double_eq(pow(-INFINITY, 5), s21_pow(-s21_INFINITY, 5));

//! s21_log tests

}
END_TEST

START_TEST(s21_log_test_1)
{
#line 359
for (double k = 1; k < 100; k += 13.2) {
    double a = s21_log(k);
    double b = log(k);
    ck_assert_double_eq_tol(a, b, 1e-6);
}

}
END_TEST

START_TEST(s21_log_test_2)
{
#line 366
for (double k = 0.1; k < 4; k += 0.24) {
    double a = s21_log(k);
    double b = log(k);
    ck_assert_double_eq_tol(a, b, 1e-6);
}

}
END_TEST

START_TEST(s21_log_test_3)
{
#line 373
for (double k = 0.1; k < 10000; k += 123) {
    double a = s21_log(k);
    double b = log(k);
    ck_assert_double_eq_tol(a, b, 1e-3);
}

}
END_TEST

START_TEST(s21_log_test_4)
{
#line 380
for (double k = 0.000005; k < 1; k *= 5) {
    double a = s21_log(k);
    double b = log(k);
    ck_assert_double_eq_tol(a, b, 1e-6);
}

}
END_TEST

START_TEST(s21_log_test_5)
{
#line 387
ck_assert_double_nan(s21_log(s21_NAN));

}
END_TEST

START_TEST(s21_log_test_6)
{
#line 390
ck_assert_double_eq(log(0), s21_log(0));

}
END_TEST

START_TEST(s21_log_test_7)
{
#line 393
ck_assert_double_nan(s21_log(-4));

}
END_TEST

START_TEST(s21_log_test_8)
{
#line 396
ck_assert_double_eq(log(INFINITY), s21_log(s21_INFINITY));

}
END_TEST

START_TEST(s21_log_test_9)
{
#line 399
ck_assert_double_nan(s21_log(-s21_INFINITY));

}
END_TEST

START_TEST(s21_log_test_10)
{
#line 402
ck_assert_double_eq(log(1), s21_log(1));

}
END_TEST

START_TEST(s21_log_test_11)
{
#line 405
ck_assert_double_eq_tol(log(2), s21_log(2), 1e-6);

}
END_TEST

START_TEST(s21_log_test_12)
{
#line 408
ck_assert_double_nan(s21_log(-s21_INFINITY * 2));

}
END_TEST

START_TEST(s21_log_test_13)
{
#line 411
ck_assert_double_eq(log(s21_M_E), s21_log(s21_M_E));

}
END_TEST

START_TEST(s21_log_test_14)
{
#line 414
ck_assert_double_eq_tol(log(0.00001), s21_log(0.00001), 1e-6);

}
END_TEST

START_TEST(s21_log_test_15)
{
#line 417
ck_assert_double_nan(s21_log(-s21_M_E));

}
END_TEST

START_TEST(s21_log_test_16)
{
#line 420
ck_assert_double_eq_tol(log(11), s21_log(11), 1e-6);

}
END_TEST

START_TEST(s21_log_test_17)
{
#line 423
ck_assert_double_eq_tol(log(200.35), s21_log(200.35), 1e-6);

}
END_TEST

START_TEST(s21_log_test_18)
{
#line 426
ck_assert_double_nan(s21_log(-200.35));

// #test s21_log_test_19
// ck_assert_double_eq_tol(log(MAXFLOAT), s21_log(MAXFLOAT), 1e-6);

}
END_TEST

START_TEST(s21_log_test_20)
{
#line 432
ck_assert_double_nan(s21_log(-s21_M_E));

// ! s21_floor tests

}
END_TEST

START_TEST(s21_floor_test_1)
{
#line 437
ck_assert_double_eq(floor(INFINITY), s21_floor(s21_INFINITY));

}
END_TEST

START_TEST(s21_floor_test_2)
{
#line 440
ck_assert_double_eq(floor(-INFINITY), s21_floor(-s21_INFINITY));

}
END_TEST

START_TEST(s21_floor_test_3)
{
#line 443
ck_assert_double_nan(floor(NAN));

}
END_TEST

START_TEST(s21_floor_test_4)
{
#line 446
ck_assert_double_nan(s21_floor(NAN));

}
END_TEST

START_TEST(s21_floor_test_5)
{
#line 449
ck_assert_int_eq(floor(-7.0), s21_floor(-7.0));

}
END_TEST

START_TEST(s21_floor_test_6)
{
#line 452
ck_assert_double_eq(floor(-98.1), s21_floor(-98.1));

}
END_TEST

START_TEST(s21_floor_test_7)
{
#line 455
ck_assert_double_eq(floor(123.02), s21_floor(123.02));

}
END_TEST

START_TEST(s21_floor_test_8)
{
#line 458
ck_assert_double_eq(floor(10009.00123), s21_floor(10009.00123));

}
END_TEST

START_TEST(s21_floor_test_9)
{
#line 461
ck_assert_double_eq(floor(-10009.555), s21_floor(-10009.555));

}
END_TEST

START_TEST(s21_floor_test_10)
{
#line 464
ck_assert_double_eq(floor(-0.10009), s21_floor(-0.10009));

}
END_TEST

START_TEST(s21_floor_test_11)
{
#line 467
ck_assert_double_eq(floor(-1e-23), s21_floor(-1e-23));

}
END_TEST

START_TEST(s21_floor_test_12)
{
#line 470
ck_assert_double_eq(floor(100091234.5), s21_floor(100091234.5));

}
END_TEST

START_TEST(s21_floor_test_13)
{
#line 473
ck_assert_double_eq(floor(7), s21_floor(7));

}
END_TEST

START_TEST(s21_floor_test_14)
{
#line 476
ck_assert_double_eq(floor(0), s21_floor(0));

}
END_TEST

START_TEST(s21_floor_test_15)
{
#line 479
ck_assert_double_eq(floor(0.0), s21_floor(0.0));

//! s21_exp tests

}
END_TEST

START_TEST(s21_exp_test_1)
{
#line 484
ck_assert_double_eq_tol(s21_exp(3.3333), s21_exp(3.3333), 1e-6);

}
END_TEST

START_TEST(s21_exp_test_2)
{
#line 487
ck_assert_double_eq_tol(s21_exp(-5.5), s21_exp(-5.5), 1e-6);

}
END_TEST

START_TEST(s21_exp_test_3)
{
#line 490
ck_assert_double_eq(s21_exp(4566.7899), s21_exp(4566.7899));

}
END_TEST

START_TEST(s21_exp_test_4)
{
#line 493
ck_assert_double_nan(s21_exp(NAN));

}
END_TEST

START_TEST(s21_exp_test_5)
{
#line 496
ck_assert_double_eq(exp(INFINITY), s21_exp(INFINITY));

}
END_TEST

START_TEST(s21_exp_test_6)
{
#line 499
ck_assert_double_eq_tol(exp(0.4564), s21_exp(0.4564), 1e-6);

}
END_TEST

START_TEST(s21_exp_test_7)
{
#line 502
ck_assert_double_eq(exp(0), s21_exp(0));

}
END_TEST

START_TEST(s21_exp_test_8)
{
#line 505
ck_assert_double_eq_tol(exp(1), s21_exp(1), 1e-6);

}
END_TEST

START_TEST(s21_exp_test_9)
{
#line 508
ck_assert_double_eq_tol(exp(-1), s21_exp(-1), 1e-6);

}
END_TEST

START_TEST(s21_exp_test_10)
{
#line 511
ck_assert_double_eq_tol(exp(-0.000001), s21_exp(-0.000001), 1e-6);

}
END_TEST

START_TEST(s21_exp_test_11)
{
#line 514
for (double i = -2.7863; i <= 2.6831; i += 0.001)
    ck_assert_double_eq_tol(exp(i), s21_exp(i), 1e-6);

//! s21_sin tests

}
END_TEST

START_TEST(s21_sin_test_1)
{
#line 520
for (double i = -1.000000; i <= 1.000000; i += 0.00001)
    ck_assert_double_eq_tol(sin(i), s21_sin(i), s21_M_EPS);
        
}
END_TEST

START_TEST(s21_sin_test_2)
{
#line 524
ck_assert_double_nan(s21_sin(s21_NAN));

}
END_TEST

START_TEST(s21_sin_test_3)
{
#line 527
ck_assert_double_nan(s21_sin(s21_INFINITY));

}
END_TEST

START_TEST(s21_sin_test_4)
{
#line 530
ck_assert_double_nan(s21_sin(-s21_INFINITY));

}
END_TEST

START_TEST(s21_sin_test_5)
{
#line 533
for (double i = -223.654; i <= 148.522; i += 2.456)
    ck_assert_double_eq_tol(sin(i), s21_sin(i), s21_M_EPS);

}
END_TEST

START_TEST(s21_sin_test_6)
{
#line 537
ck_assert_double_nan(s21_sin(-0.0/0.0));

}
END_TEST

START_TEST(s21_sin_test_7)
{
#line 540
for (double i = -10009.6; i <= -9808.0; i += 0.1)
    ck_assert_double_eq_tol(sin(i), s21_sin(i), s21_M_EPS);

}
END_TEST

START_TEST(s21_sin_test_8)
{
#line 544
for (double i = 9809.6; i <= 10890.0; i += 0.1)
    ck_assert_double_eq_tol(sin(i), s21_sin(i), s21_M_EPS);

//! s21_sqrt tests

}
END_TEST

START_TEST(s21_sqrt_test_1)
{
#line 550
ck_assert_double_eq_tol(s21_sqrt(233), sqrt(233), 1e-6);

}
END_TEST

START_TEST(s21_sqrt_test_2)
{
#line 553
ck_assert_double_nan(s21_sqrt(s21_NAN));

}
END_TEST

START_TEST(s21_sqrt_test_3)
{
#line 556
ck_assert_double_nan(sqrt(NAN));

}
END_TEST

START_TEST(s21_sqrt_test_4)
{
#line 559
ck_assert_double_eq(s21_sqrt(s21_INFINITY), sqrt(INFINITY));

}
END_TEST

START_TEST(s21_sqrt_test_5)
{
#line 562
ck_assert_double_nan(s21_sqrt(-s21_INFINITY));

}
END_TEST

START_TEST(s21_sqrt_test_6)
{
#line 565
ck_assert_double_nan(sqrt(-INFINITY));

}
END_TEST

START_TEST(s21_sqrt_test_7)
{
#line 568
ck_assert_double_nan(s21_sqrt(-5));

}
END_TEST

START_TEST(s21_sqrt_test_8)
{
#line 571
ck_assert_double_nan(sqrt(-0.000001));

}
END_TEST

START_TEST(s21_sqrt_test_9)
{
#line 574
ck_assert_double_eq_tol(s21_sqrt(1000), sqrt(1000), 1e-7);

}
END_TEST

START_TEST(s21_sqrt_test_10)
{
#line 577
ck_assert_double_eq_tol(s21_sqrt(0.000001), sqrt(0.000001), 1e-7);

}
END_TEST

START_TEST(s21_sqrt_test_11)
{
#line 580
ck_assert_double_eq(s21_sqrt(0), sqrt(0));

//! s21_tan tests

}
END_TEST

START_TEST(s21_tan_test_1)
{
#line 585
ck_assert_double_eq_tol(tan(0.123456), s21_tan(0.123456), 1e-6);

}
END_TEST

START_TEST(s21_tan_test_2)
{
#line 588
ck_assert_double_nan(s21_tan(s21_NAN));

}
END_TEST

START_TEST(s21_tan_test_3)
{
#line 591
ck_assert_double_nan(s21_tan(s21_INFINITY));

}
END_TEST

START_TEST(s21_tan_test_4)
{
#line 594
ck_assert_double_nan(s21_tan(-s21_INFINITY));

}
END_TEST

START_TEST(s21_tan_test_5)
{
#line 597
ck_assert_double_eq_tol(tan(-0.123456), s21_tan(-0.123456), 1e-6);

}
END_TEST

START_TEST(s21_tan_test_6)
{
#line 600
ck_assert_double_eq_tol(tan(11115.123456), s21_tan(11115.123456), 1e-6);

}
END_TEST

START_TEST(s21_tan_test_7)
{
#line 603
ck_assert_double_eq_tol(tan(-11115.123456), s21_tan(-11115.123456), 1e-6);

}
END_TEST

START_TEST(s21_tan_test_8)
{
#line 606
ck_assert_double_eq_tol(tan(0.000001), s21_tan(0.000001), 1e-6);

}
END_TEST

START_TEST(s21_tan_test_9)
{
#line 609
ck_assert_double_eq_tol(tan(-0.0), s21_tan(-0.0), 1e-6);

}
END_TEST

START_TEST(s21_tan_test_10)
{
#line 612
ck_assert_double_nan(s21_tan(-0.0/0.0));

}
END_TEST

START_TEST(s21_tan_test_11)
{
#line 615
for (double i = 1.0; i >= -1.0; i -= 0.0001)
    ck_assert_ldouble_eq_tol(tan(i), s21_tan(i), 1e-6);

}
END_TEST

START_TEST(s21_tan_test_12)
{
#line 619
ck_assert_double_eq_tol(tan(s21_M_PI_2), s21_tan(s21_M_PI_2), 1e-6);

}
END_TEST

START_TEST(s21_tan_test_13)
{
#line 622
ck_assert_double_eq_tol(tan(-s21_M_PI_2), s21_tan(-s21_M_PI_2), 1e-6);


//! s21_fabs tests

}
END_TEST

START_TEST(s21_fabs_test_1)
{
#line 628
ck_assert_double_eq(fabs(-INFINITY), s21_fabs(-s21_INFINITY));

}
END_TEST

START_TEST(s21_fabs_test_2)
{
#line 631
ck_assert_double_nan(fabs(NAN));

}
END_TEST

START_TEST(s21_fabs_test_3)
{
#line 634
ck_assert_double_nan(s21_fabs(s21_NAN));

}
END_TEST

START_TEST(s21_fabs_test_4)
{
#line 637
ck_assert_double_eq(fabs(-7.0), s21_fabs(-7.0));

}
END_TEST

START_TEST(s21_fabs_test_5)
{
#line 640
ck_assert_double_eq(fabs(-98.1), s21_fabs(-98.1));

}
END_TEST

START_TEST(s21_fabs_test_6)
{
#line 643
ck_assert_double_eq(fabs(123.02), s21_fabs(123.02));

}
END_TEST

START_TEST(s21_fabs_test_7)
{
#line 646
ck_assert_double_eq(fabs(10009.0), s21_fabs(10009.0));

}
END_TEST

START_TEST(s21_fabs_test_8)
{
#line 649
ck_assert_double_eq(fabs(-10009.555), s21_fabs(-10009.555));

}
END_TEST

START_TEST(s21_fabs_test_9)
{
#line 652
ck_assert_double_eq(fabs(-0.10009), s21_fabs(-0.10009));

}
END_TEST

START_TEST(s21_fabs_test_10)
{
#line 655
ck_assert_double_eq(fabs(-1e23), s21_fabs(-1e23));

}
END_TEST

START_TEST(s21_fabs_test_11)
{
#line 658
ck_assert_double_eq(fabs(INFINITY), s21_fabs(s21_INFINITY));

}
END_TEST

START_TEST(s21_fabs_test_12)
{
#line 661
ck_assert_double_eq(fabs(0.000213), s21_fabs(0.000213));

//! s21_fmod tests

}
END_TEST

START_TEST(s21_fmod_test_1)
{
#line 666
ck_assert_double_nan(fmod(1, 0));

}
END_TEST

START_TEST(s21_fmod_test_2)
{
#line 669
ck_assert_double_nan(s21_fmod(1, 0));

}
END_TEST

START_TEST(s21_fmod_test_3)
{
#line 672
ck_assert_double_eq(fmod(0, -1), s21_fmod(0, -1));

}
END_TEST

START_TEST(s21_fmod_test_4)
{
#line 675
ck_assert_double_eq(fmod(0, 1), s21_fmod(0, 1));

}
END_TEST

START_TEST(s21_fmod_test_5)
{
#line 678
ck_assert_double_nan(fmod(INFINITY, -1));

}
END_TEST

START_TEST(s21_fmod_test_6)
{
#line 681
ck_assert_double_nan(s21_fmod(INFINITY, -1));

}
END_TEST

START_TEST(s21_fmod_test_7)
{
#line 684
ck_assert_double_eq(fmod(-1, -INFINITY), s21_fmod(-1, -s21_INFINITY));

}
END_TEST

START_TEST(s21_fmod_test_8)
{
#line 687
ck_assert_double_eq(fmod(0, INFINITY), s21_fmod(0, s21_INFINITY));

}
END_TEST

START_TEST(s21_fmod_test_9)
{
#line 690
ck_assert_double_nan(s21_fmod(0, s21_NAN));

}
END_TEST

START_TEST(s21_fmod_test_10)
{
#line 693
ck_assert_double_nan(fmod(0, NAN));

}
END_TEST

START_TEST(s21_fmod_test_11)
{
#line 696
ck_assert_double_nan(s21_fmod(s21_NAN, s21_NAN));

}
END_TEST

START_TEST(s21_fmod_test_12)
{
#line 699
ck_assert_double_nan(fmod(NAN, NAN));

}
END_TEST

START_TEST(s21_fmod_test_13)
{
#line 702
ck_assert_double_nan(s21_fmod(s21_NAN, s21_INFINITY));

}
END_TEST

START_TEST(s21_fmod_test_14)
{
#line 705
ck_assert_double_nan(s21_fmod(s21_INFINITY, s21_NAN));

}
END_TEST

START_TEST(s21_fmod_test_15)
{
#line 708
ck_assert_double_nan(s21_fmod(s21_NAN, -s21_INFINITY));

}
END_TEST

START_TEST(s21_fmod_test_16)
{
#line 711
ck_assert_double_nan(s21_fmod(-s21_INFINITY, s21_NAN));

}
END_TEST

START_TEST(s21_fmod_test_17)
{
#line 714
ck_assert_double_nan(fmod(NAN, INFINITY));

}
END_TEST

START_TEST(s21_fmod_test_18)
{
#line 717
ck_assert_double_nan(fmod(INFINITY, NAN));

}
END_TEST

START_TEST(s21_fmod_test_19)
{
#line 720
ck_assert_double_nan(fmod(NAN, -INFINITY));

}
END_TEST

START_TEST(s21_fmod_test_20)
{
#line 723
ck_assert_double_nan(fmod(-INFINITY, NAN));

}
END_TEST

START_TEST(s21_fmod_test_21)
{
#line 726
ck_assert_double_nan(s21_fmod(s21_INFINITY, s21_INFINITY));
}
END_TEST

int main(void)
{
    Suite *s1 = suite_create("Core");
    TCase *tc1_1 = tcase_create("Core");
    SRunner *sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1, tc1_1);
    tcase_add_test(tc1_1, s21_abs_test_1);
    tcase_add_test(tc1_1, s21_abs_test_2);
    tcase_add_test(tc1_1, s21_abs_test_3);
    tcase_add_test(tc1_1, s21_abs_test_4);
    tcase_add_test(tc1_1, s21_abs_test_5);
    tcase_add_test(tc1_1, s21_acos_test_1);
    tcase_add_test(tc1_1, s21_acos_test_2);
    tcase_add_test(tc1_1, s21_acos_test_3);
    tcase_add_test(tc1_1, s21_acos_test_4);
    tcase_add_test(tc1_1, s21_acos_test_5);
    tcase_add_test(tc1_1, s21_acos_test_6);
    tcase_add_test(tc1_1, s21_acos_test_7);
    tcase_add_test(tc1_1, s21_acos_test_8);
    tcase_add_test(tc1_1, s21_acos_test_9);
    tcase_add_test(tc1_1, s21_acos_test_10);
    tcase_add_test(tc1_1, s21_acos_test_11);
    tcase_add_test(tc1_1, s21_asin_test_1);
    tcase_add_test(tc1_1, s21_asin_test_2);
    tcase_add_test(tc1_1, s21_asin_test_3);
    tcase_add_test(tc1_1, s21_asin_test_4);
    tcase_add_test(tc1_1, s21_asin_test_5);
    tcase_add_test(tc1_1, s21_asin_test_6);
    tcase_add_test(tc1_1, s21_asin_test_7);
    tcase_add_test(tc1_1, s21_asin_test_8);
    tcase_add_test(tc1_1, s21_asin_test_9);
    tcase_add_test(tc1_1, s21_asin_test_10);
    tcase_add_test(tc1_1, s21_atan_test_1);
    tcase_add_test(tc1_1, s21_atan_test_2);
    tcase_add_test(tc1_1, s21_atan_test_3);
    tcase_add_test(tc1_1, s21_atan_test_4);
    tcase_add_test(tc1_1, s21_atan_test_5);
    tcase_add_test(tc1_1, s21_atan_test_6);
    tcase_add_test(tc1_1, s21_atan_test_7);
    tcase_add_test(tc1_1, s21_atan_test_8);
    tcase_add_test(tc1_1, s21_atan_test_9);
    tcase_add_test(tc1_1, s21_atan_test_10);
    tcase_add_test(tc1_1, s21_ceil_test_1);
    tcase_add_test(tc1_1, s21_ceil_test_2);
    tcase_add_test(tc1_1, s21_ceil_test_3);
    tcase_add_test(tc1_1, s21_ceil_test_4);
    tcase_add_test(tc1_1, s21_ceil_test_5);
    tcase_add_test(tc1_1, s21_ceil_test_6);
    tcase_add_test(tc1_1, s21_ceil_test_7);
    tcase_add_test(tc1_1, s21_ceil_test_8);
    tcase_add_test(tc1_1, s21_ceil_test_9);
    tcase_add_test(tc1_1, s21_ceil_test_10);
    tcase_add_test(tc1_1, s21_ceil_test_11);
    tcase_add_test(tc1_1, s21_ceil_test_12);
    tcase_add_test(tc1_1, s21_ceil_test_13);
    tcase_add_test(tc1_1, s21_ceil_test_14);
    tcase_add_test(tc1_1, s21_ceil_test_15);
    tcase_add_test(tc1_1, s21_cos_test_1);
    tcase_add_test(tc1_1, s21_cos_test_2);
    tcase_add_test(tc1_1, s21_cos_test_3);
    tcase_add_test(tc1_1, s21_cos_test_4);
    tcase_add_test(tc1_1, s21_cos_test_5);
    tcase_add_test(tc1_1, s21_cos_test_6);
    tcase_add_test(tc1_1, s21_cos_test_7);
    tcase_add_test(tc1_1, s21_cos_test_8);
    tcase_add_test(tc1_1, s21_pow_test_1);
    tcase_add_test(tc1_1, s21_pow_test_2);
    tcase_add_test(tc1_1, s21_pow_test_3);
    tcase_add_test(tc1_1, s21_pow_test_4);
    tcase_add_test(tc1_1, s21_pow_test_5);
    tcase_add_test(tc1_1, s21_pow_test_6);
    tcase_add_test(tc1_1, s21_pow_test_7);
    tcase_add_test(tc1_1, s21_pow_test_9);
    tcase_add_test(tc1_1, s21_pow_test_13);
    tcase_add_test(tc1_1, s21_pow_test_15);
    tcase_add_test(tc1_1, s21_pow_test_17);
    tcase_add_test(tc1_1, s21_pow_test_18);
    tcase_add_test(tc1_1, s21_pow_test_19);
    tcase_add_test(tc1_1, s21_pow_test_20);
    tcase_add_test(tc1_1, s21_pow_test_21);
    tcase_add_test(tc1_1, s21_pow_test_22);
    tcase_add_test(tc1_1, s21_pow_test_23);
    tcase_add_test(tc1_1, s21_pow_test_24);
    tcase_add_test(tc1_1, s21_pow_test_25);
    tcase_add_test(tc1_1, s21_pow_test_26);
    tcase_add_test(tc1_1, s21_pow_test_27);
    tcase_add_test(tc1_1, s21_pow_test_28);
    tcase_add_test(tc1_1, s21_pow_test_29);
    tcase_add_test(tc1_1, s21_pow_test_30);
    tcase_add_test(tc1_1, s21_pow_test_31);
    tcase_add_test(tc1_1, s21_pow_test_32);
    tcase_add_test(tc1_1, s21_pow_test_33);
    tcase_add_test(tc1_1, s21_pow_test_34);
    tcase_add_test(tc1_1, s21_pow_test_35);
    tcase_add_test(tc1_1, s21_pow_test_36);
    tcase_add_test(tc1_1, s21_pow_test_37);
    tcase_add_test(tc1_1, s21_pow_test_38);
    tcase_add_test(tc1_1, s21_pow_test_39);
    tcase_add_test(tc1_1, s21_pow_test_40);
    tcase_add_test(tc1_1, s21_pow_test_41);
    tcase_add_test(tc1_1, s21_pow_test_42);
    tcase_add_test(tc1_1, s21_pow_test_43);
    tcase_add_test(tc1_1, s21_pow_test_44);
    tcase_add_test(tc1_1, s21_pow_test_45);
    tcase_add_test(tc1_1, s21_pow_test_46);
    tcase_add_test(tc1_1, s21_pow_test_47);
    tcase_add_test(tc1_1, s21_pow_test_48);
    tcase_add_test(tc1_1, s21_pow_test_49);
    tcase_add_test(tc1_1, s21_pow_test_50);
    tcase_add_test(tc1_1, s21_pow_test_51);
    tcase_add_test(tc1_1, s21_pow_test_52);
    tcase_add_test(tc1_1, s21_pow_test_53);
    tcase_add_test(tc1_1, s21_log_test_1);
    tcase_add_test(tc1_1, s21_log_test_2);
    tcase_add_test(tc1_1, s21_log_test_3);
    tcase_add_test(tc1_1, s21_log_test_4);
    tcase_add_test(tc1_1, s21_log_test_5);
    tcase_add_test(tc1_1, s21_log_test_6);
    tcase_add_test(tc1_1, s21_log_test_7);
    tcase_add_test(tc1_1, s21_log_test_8);
    tcase_add_test(tc1_1, s21_log_test_9);
    tcase_add_test(tc1_1, s21_log_test_10);
    tcase_add_test(tc1_1, s21_log_test_11);
    tcase_add_test(tc1_1, s21_log_test_12);
    tcase_add_test(tc1_1, s21_log_test_13);
    tcase_add_test(tc1_1, s21_log_test_14);
    tcase_add_test(tc1_1, s21_log_test_15);
    tcase_add_test(tc1_1, s21_log_test_16);
    tcase_add_test(tc1_1, s21_log_test_17);
    tcase_add_test(tc1_1, s21_log_test_18);
    tcase_add_test(tc1_1, s21_log_test_20);
    tcase_add_test(tc1_1, s21_floor_test_1);
    tcase_add_test(tc1_1, s21_floor_test_2);
    tcase_add_test(tc1_1, s21_floor_test_3);
    tcase_add_test(tc1_1, s21_floor_test_4);
    tcase_add_test(tc1_1, s21_floor_test_5);
    tcase_add_test(tc1_1, s21_floor_test_6);
    tcase_add_test(tc1_1, s21_floor_test_7);
    tcase_add_test(tc1_1, s21_floor_test_8);
    tcase_add_test(tc1_1, s21_floor_test_9);
    tcase_add_test(tc1_1, s21_floor_test_10);
    tcase_add_test(tc1_1, s21_floor_test_11);
    tcase_add_test(tc1_1, s21_floor_test_12);
    tcase_add_test(tc1_1, s21_floor_test_13);
    tcase_add_test(tc1_1, s21_floor_test_14);
    tcase_add_test(tc1_1, s21_floor_test_15);
    tcase_add_test(tc1_1, s21_exp_test_1);
    tcase_add_test(tc1_1, s21_exp_test_2);
    tcase_add_test(tc1_1, s21_exp_test_3);
    tcase_add_test(tc1_1, s21_exp_test_4);
    tcase_add_test(tc1_1, s21_exp_test_5);
    tcase_add_test(tc1_1, s21_exp_test_6);
    tcase_add_test(tc1_1, s21_exp_test_7);
    tcase_add_test(tc1_1, s21_exp_test_8);
    tcase_add_test(tc1_1, s21_exp_test_9);
    tcase_add_test(tc1_1, s21_exp_test_10);
    tcase_add_test(tc1_1, s21_exp_test_11);
    tcase_add_test(tc1_1, s21_sin_test_1);
    tcase_add_test(tc1_1, s21_sin_test_2);
    tcase_add_test(tc1_1, s21_sin_test_3);
    tcase_add_test(tc1_1, s21_sin_test_4);
    tcase_add_test(tc1_1, s21_sin_test_5);
    tcase_add_test(tc1_1, s21_sin_test_6);
    tcase_add_test(tc1_1, s21_sin_test_7);
    tcase_add_test(tc1_1, s21_sin_test_8);
    tcase_add_test(tc1_1, s21_sqrt_test_1);
    tcase_add_test(tc1_1, s21_sqrt_test_2);
    tcase_add_test(tc1_1, s21_sqrt_test_3);
    tcase_add_test(tc1_1, s21_sqrt_test_4);
    tcase_add_test(tc1_1, s21_sqrt_test_5);
    tcase_add_test(tc1_1, s21_sqrt_test_6);
    tcase_add_test(tc1_1, s21_sqrt_test_7);
    tcase_add_test(tc1_1, s21_sqrt_test_8);
    tcase_add_test(tc1_1, s21_sqrt_test_9);
    tcase_add_test(tc1_1, s21_sqrt_test_10);
    tcase_add_test(tc1_1, s21_sqrt_test_11);
    tcase_add_test(tc1_1, s21_tan_test_1);
    tcase_add_test(tc1_1, s21_tan_test_2);
    tcase_add_test(tc1_1, s21_tan_test_3);
    tcase_add_test(tc1_1, s21_tan_test_4);
    tcase_add_test(tc1_1, s21_tan_test_5);
    tcase_add_test(tc1_1, s21_tan_test_6);
    tcase_add_test(tc1_1, s21_tan_test_7);
    tcase_add_test(tc1_1, s21_tan_test_8);
    tcase_add_test(tc1_1, s21_tan_test_9);
    tcase_add_test(tc1_1, s21_tan_test_10);
    tcase_add_test(tc1_1, s21_tan_test_11);
    tcase_add_test(tc1_1, s21_tan_test_12);
    tcase_add_test(tc1_1, s21_tan_test_13);
    tcase_add_test(tc1_1, s21_fabs_test_1);
    tcase_add_test(tc1_1, s21_fabs_test_2);
    tcase_add_test(tc1_1, s21_fabs_test_3);
    tcase_add_test(tc1_1, s21_fabs_test_4);
    tcase_add_test(tc1_1, s21_fabs_test_5);
    tcase_add_test(tc1_1, s21_fabs_test_6);
    tcase_add_test(tc1_1, s21_fabs_test_7);
    tcase_add_test(tc1_1, s21_fabs_test_8);
    tcase_add_test(tc1_1, s21_fabs_test_9);
    tcase_add_test(tc1_1, s21_fabs_test_10);
    tcase_add_test(tc1_1, s21_fabs_test_11);
    tcase_add_test(tc1_1, s21_fabs_test_12);
    tcase_add_test(tc1_1, s21_fmod_test_1);
    tcase_add_test(tc1_1, s21_fmod_test_2);
    tcase_add_test(tc1_1, s21_fmod_test_3);
    tcase_add_test(tc1_1, s21_fmod_test_4);
    tcase_add_test(tc1_1, s21_fmod_test_5);
    tcase_add_test(tc1_1, s21_fmod_test_6);
    tcase_add_test(tc1_1, s21_fmod_test_7);
    tcase_add_test(tc1_1, s21_fmod_test_8);
    tcase_add_test(tc1_1, s21_fmod_test_9);
    tcase_add_test(tc1_1, s21_fmod_test_10);
    tcase_add_test(tc1_1, s21_fmod_test_11);
    tcase_add_test(tc1_1, s21_fmod_test_12);
    tcase_add_test(tc1_1, s21_fmod_test_13);
    tcase_add_test(tc1_1, s21_fmod_test_14);
    tcase_add_test(tc1_1, s21_fmod_test_15);
    tcase_add_test(tc1_1, s21_fmod_test_16);
    tcase_add_test(tc1_1, s21_fmod_test_17);
    tcase_add_test(tc1_1, s21_fmod_test_18);
    tcase_add_test(tc1_1, s21_fmod_test_19);
    tcase_add_test(tc1_1, s21_fmod_test_20);
    tcase_add_test(tc1_1, s21_fmod_test_21);

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}
