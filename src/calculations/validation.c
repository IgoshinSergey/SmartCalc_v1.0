#include "smart_calc.h"

/*
 * flag_operators
 * 1. +, -      <- 0, 2, 3, 7
 * 2. (         <- 0, 1, 2, 4, 5, 6, 8
 * 3. )         <- 3, 7
 * 4. *, /      <- 3, 7
 * 5. ^         <- 3, 7
 * 6. mod       <- 3, 7
 * 7. x, number <- 0, 1, 2, 4, 5, 6
 * 8. cos, sin, tan, acos, asin
 * atan, sqrt, ln, log <- 0, 1, 2, 4, 5, 6
 * err_end 1, 2, 4, 5, 6, 8
 */

void isValidExpression(char *str, bool *flag_x, int *error) {
  int len = strlen(str);
  *error = (len > 255 || !len) ? FAIL : OK;
  char flag_operators = '0';
  int closed_brackets = 0, open_brackets = 0;
  for (unsigned i = 0; (i < strlen(str)) && (*error == OK);) {
    if (str[i] == ' ') {
      i++;
    } else if (strchr("+-", str[i]) && strchr("01234567", flag_operators)) {
      if (strchr("1456", flag_operators)) {
        *error = FAIL;
      } else {
        flag_operators = '1';
        i++;
      }
    } else if (strchr("(", str[i]) && strchr("0124568", flag_operators)) {
      flag_operators = '2';
      open_brackets++;
      i++;
    } else if (strchr(")*/^", str[i]) && strchr("37", flag_operators)) {
      if (str[i] == ')') {
        *error = (open_brackets <= closed_brackets) ? FAIL : OK;
        closed_brackets++;
        flag_operators = '3';
      } else if (strchr("*/", str[i])) {
        flag_operators = '4';
      } else if (str[i] == '^') {
        flag_operators = '5';
      }
      i++;
    } else if ((strncmp("mod", str + i, 3) == 0) &&
               strchr("37", flag_operators)) {
      flag_operators = '6';
      i += 3;
    } else if (isTrigonometry(str + i) && strchr("012456", flag_operators)) {
      flag_operators = '8';
      i += isTrigonometry(str + i);
    } else if ((isNumber(str + i, NULL) || str[i] == 'x') &&
               strchr("012456", flag_operators)) {
      checkNumber(str, &i, flag_x);
      flag_operators = '7';
    } else {
      *error = FAIL;
    }
  }
  if (open_brackets != closed_brackets) *error = FAIL;
  if (strchr("124568", flag_operators)) *error = FAIL;
}

void isValidX(char *str, bool flag_x, int *error, double *num) {
  char *end;
  int len = strlen(str);
  if ((*error == OK) && flag_x) {
    if (len) {
      double tmp = strtod(str, &end);
      if (num) *num = tmp;
      *error = (end - str == (int)strlen(str)) ? OK : FAIL;
    } else {
      *error = FAIL;
    }
  }
}

void checkNumber(char *str, unsigned *i, bool *flag_x) {
  int len = 0;
  if (str[*i] == 'x') {
    len = 1;
    *flag_x = true;
  } else {
    len = isNumber(str + *i, NULL);
  }
  *i += len;
}

int isNumber(char *str, double *num) {
  char *end;
  double tmp = strtod(str, &end);
  if (num) *num = tmp;
  return end - str;
}

int isTrigonometry(char *str) {
  int res = 0;
  char tmp[9][5] = {"sin",  "cos",  "tan", "acos", "asin",
                    "atan", "sqrt", "ln",  "log"};
  for (int i = 0; i < 9; i++) {
    unsigned len = strlen(tmp[i]);
    if (strncmp(tmp[i], str, len) == 0) {
      res = len;
      break;
    }
  }
  return res;
}
