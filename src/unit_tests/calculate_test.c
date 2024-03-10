#include "smart_calc_test.h"

START_TEST(operators) {
  double res = 0;
  int error = 0;
  double origin = 12345;
  res = calculate("10000 + 2000 + 300 + 40 + 5", "", &error);
  ck_assert_double_eq_tol(origin, res, 1e-7);
  ck_assert_int_eq(error, OK);

  origin = -12345;
  res = calculate("-10000 - 2000 - 300 - 40 - 5", "", &error);
  ck_assert_double_eq_tol(origin, res, 1e-7);
  ck_assert_int_eq(error, OK);

  origin = 1 * 2 * 3 * 4 * 5;
  res = calculate("1 * 2 * 3 * 4 * 5", "", &error);
  ck_assert_double_eq_tol(origin, res, 1e-7);
  ck_assert_int_eq(error, OK);

  origin = 1000. / 200 / 30 / 4;
  res = calculate("1000/200/30/4", "", &error);
  ck_assert_double_eq_tol(origin, res, 1e-7);
  ck_assert_int_eq(error, OK);

  origin = -1000 + 55;
  res = calculate("-1000 + 55", "", &error);
  ck_assert_double_eq_tol(origin, res, 1e-7);
  ck_assert_int_eq(error, OK);

  origin = 1 - pow(2, 2 + 3);
  res = calculate("1 - 2 ^ (2 + 3)", "", &error);
  ck_assert_double_eq_tol(origin, res, 1e-7);
  ck_assert_int_eq(error, OK);

  origin = 1234 - pow(2, 10);
  res = calculate("1234-2 ^10", "", &error);
  ck_assert_double_eq_tol(origin, res, 1e-7);
  ck_assert_int_eq(error, OK);

  origin = -1;
  res = calculate("-1", "", &error);
  ck_assert_double_eq_tol(origin, res, 1e-7);
  ck_assert_int_eq(error, OK);

  origin = 1;
  res = calculate("+1", "", &error);
  ck_assert_double_eq_tol(origin, res, 1e-7);
  ck_assert_int_eq(error, OK);

  origin = 10 % 5;
  res = calculate("10mod5", "", &error);
  ck_assert_double_eq_tol(origin, res, 1e-7);
  ck_assert_int_eq(error, OK);

  origin = 5 % 10;
  res = calculate("5mod10", "", &error);
  ck_assert_double_eq_tol(origin, res, 1e-7);
  ck_assert_int_eq(error, OK);

  origin = sqrt(4);
  res = calculate("sqrt(4)", "", &error);
  ck_assert_double_eq_tol(origin, res, 1e-7);
  ck_assert_int_eq(error, OK);

  origin = sqrt(-4);
  res = calculate("sqrt(-4)", "", &error);
  ck_assert_double_nan(res);
  ck_assert_int_eq(error, OK);

  origin = INFINITY;
  res = calculate("10 / 0", "", &error);
  ck_assert_double_infinite(res);
  ck_assert_int_eq(error, OK);

  origin = -100;
  res = calculate("10 * (0 - 10)", "", &error);
  ck_assert_double_eq_tol(origin, res, 1e-7);
  ck_assert_int_eq(error, OK);

  origin = 123 + 0.456;
  res = calculate("123 + 0.456", "", &error);
  ck_assert_double_eq_tol(origin, res, 1e-7);
  ck_assert_int_eq(error, OK);
}
END_TEST

START_TEST(functions) {
  double res = 0;
  int error = 0;
  double origin = sin(30);
  res = calculate("sin(30)", "", &error);
  ck_assert_double_eq_tol(origin, res, 1e-7);
  ck_assert_int_eq(error, OK);

  origin = cos(30);
  res = calculate("cos(30)", "", &error);
  ck_assert_double_eq_tol(origin, res, 1e-7);
  ck_assert_int_eq(error, OK);

  origin = tan(30);
  res = calculate("tan(30)", "", &error);
  ck_assert_double_eq_tol(origin, res, 1e-7);
  ck_assert_int_eq(error, OK);

  origin = asin(0.5);
  res = calculate("asin(0.5)", "", &error);
  ck_assert_double_eq_tol(origin, res, 1e-7);
  ck_assert_int_eq(error, OK);

  origin = acos(0.5);
  res = calculate("acos(0.5)", "", &error);
  ck_assert_double_eq_tol(origin, res, 1e-7);
  ck_assert_int_eq(error, OK);

  origin = atan(10);
  res = calculate("atan(10)", "", &error);
  ck_assert_double_eq_tol(origin, res, 1e-7);
  ck_assert_int_eq(error, OK);

  origin = fmod(10, 3);
  res = calculate("10 mod 3", "", &error);
  ck_assert_double_eq_tol(origin, res, 1e-7);
  ck_assert_int_eq(error, OK);

  origin = log(10);
  res = calculate("ln(10)", "", &error);
  ck_assert_double_eq_tol(origin, res, 1e-7);
  ck_assert_int_eq(error, OK);

  origin = log10(10);
  res = calculate("log(10)", "", &error);
  ck_assert_double_eq_tol(origin, res, 1e-7);
  ck_assert_int_eq(error, OK);
}
END_TEST

START_TEST(bigExpressions) {
  double res = 0;
  int error = 0;
  double x = 2;
  double origin = pow(4, acos(x / 4)) / tan(2 * x);
  res = calculate("4^acos(x/4)/tan(2*x)", "0", &error);
  ck_assert_double_infinite(res);
  ck_assert_int_eq(error, OK);

  origin = pow(4, acos(x / 4)) / tan(2 * x);
  res = calculate("4^acos(x/4)/tan(2*x)", "2", &error);
  ck_assert_double_eq_tol(origin, res, 1e-7);
  ck_assert_int_eq(error, OK);

  origin = -x + pow(x, 2.5) / 2 * sqrt(x);
  res = calculate("-x + x ^ 2.5 / 2 * sqrt(x)", "2", &error);
  ck_assert_double_eq_tol(origin, res, 1e-7);
  ck_assert_int_eq(error, OK);

  origin = pow(sin(cos(x)), log(10));
  res = calculate("sin(cos(x)) ^ ln(10)", "2", &error);
  ck_assert_double_nan(res);
  ck_assert_int_eq(error, OK);

  origin = pow(2, pow(3, 4));
  res = calculate("2^3^4 * log(10)", "", &error);
  ck_assert_double_eq_tol(origin, res, 1e-7);
  ck_assert_int_eq(error, OK);

  origin = tan(2) + asin(1) * asin(1) - atan(2) + sqrt(5) + log(10) + log10(10);
  res = calculate(
      "tan(2) + asin(1) * asin(1) - atan(2) + sqrt(5) + ln(10) + log(10)", "",
      &error);
  ck_assert_double_eq_tol(origin, res, 1e-7);
  ck_assert_int_eq(error, OK);

  origin = tan(tan(tan(10)));
  res = calculate("tan(tan(tan(10)))", "", &error);
  ck_assert_double_eq_tol(origin, res, 1e-7);
  ck_assert_int_eq(error, OK);
}
END_TEST

START_TEST(errors) {
  int error = 0;
  calculate(
      "1+2+3+4+5+1+2+3+4+5+1+2+3+4+5+1+2+3+4+5+1+2+3+4+5+1+2+3+4+5+1+2+3+4+5+1+"
      "2+3+4+5+1+2+3+4+5+1+2+3+4+5+1+2+3+4+5+1+2+3+4+5+1+2+3+4+5+1+2+3+4+5+1+2+"
      "3+4+5+1+2+3+4+5+1+2+3+4+5+1+2+3+4+5+1+2+3+4+5+1+2+3+4+5+1+2+3+4+5+1+2+3+"
      "4+5+1+2+3+4+5+1+2+3+4+5+1+2+3+4+5+1+1+1+1",
      "", &error);
  ck_assert_int_eq(error, FAIL);  // > 255 symbols

  calculate("(2+2)))))))", "", &error);
  ck_assert_int_eq(error, FAIL);

  calculate("1 +++ 2", "", &error);
  ck_assert_int_eq(error, FAIL);

  calculate("1 + ()", "", &error);
  ck_assert_int_eq(error, FAIL);

  calculate(")1 + ()", "", &error);
  ck_assert_int_eq(error, FAIL);

  calculate("(1 + 1)))", "", &error);
  ck_assert_int_eq(error, FAIL);

  calculate("(1 + 2) + )", "", &error);
  ck_assert_int_eq(error, FAIL);

  calculate("sin(1)+", "", &error);
  ck_assert_int_eq(error, FAIL);

  calculate("acos()", "", &error);
  ck_assert_int_eq(error, FAIL);

  calculate("aco()", "", &error);
  ck_assert_int_eq(error, FAIL);

  calculate("aco", "", &error);
  ck_assert_int_eq(error, FAIL);

  calculate("sin(x)", "", &error);
  ck_assert_int_eq(error, FAIL);

  calculate("sin(x)", "qwerty", &error);
  ck_assert_int_eq(error, FAIL);

  calculate("sin(x)", "1.123qwerty", &error);
  ck_assert_int_eq(error, FAIL);

  calculate("sin(x)", "qwerty1.123", &error);
  ck_assert_int_eq(error, FAIL);

  calculate("sin(x)", "qwerty1.123", &error);
  ck_assert_int_eq(error, FAIL);
}
END_TEST

Suite *suite_calculate(void) {
  Suite *suite = suite_create("\033[30;43m CALCULATE \033[0m");
  TCase *tc = tcase_create("tc_calculate");

  tcase_add_test(tc, operators);
  tcase_add_test(tc, functions);
  tcase_add_test(tc, bigExpressions);
  tcase_add_test(tc, errors);

  suite_add_tcase(suite, tc);
  return suite;
}