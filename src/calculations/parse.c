#include "smart_calc.h"

void parse(char *str, stack **head) {
  for (unsigned i = 0; (i < strlen(str));) {
    if (str[i] == ' ') {
      i++;
    } else if (isdigit(str[i])) {
      double num = 0;
      int len = isNumber(str + i, &num);
      push(head, NUMBER, num, 0, 0);
      i += len;
    } else if (str[i] == 'x') {
      push(head, VARIABLE, 0, str[i++], 0);
    } else if (strchr("()*/^+-", str[i])) {
      push(head, OPERATOR, 0, str[i++], 0);
    } else {
      char symbol = getSymbol(str + i, &i);
      push(head, OPERATOR, 0, symbol, 0);
    }
  }
  reverse(head);
}

/*
 * functions:
 * cos -> c
 * sin -> s
 * tan -> t
 * acos -> o
 * asin -> i
 * atan -> n
 * sqrt -> q
 * ln -> l
 * log -> g
 * mod -> m
 */

char getSymbol(char *str, unsigned *i) {
  char symbol = 0;
  int step = 0;
  if (strncmp("cos", str, 3) == 0) {
    step = 3;
    symbol = 'c';
  } else if (strncmp("sin", str, 3) == 0) {
    step = 3;
    symbol = 's';
  } else if (strncmp("tan", str, 3) == 0) {
    step = 3;
    symbol = 't';
  } else if (strncmp("acos", str, 4) == 0) {
    step = 4;
    symbol = 'o';
  } else if (strncmp("asin", str, 4) == 0) {
    step = 4;
    symbol = 'i';
  } else if (strncmp("atan", str, 4) == 0) {
    step = 4;
    symbol = 'n';
  } else if (strncmp("sqrt", str, 4) == 0) {
    step = 4;
    symbol = 'q';
  } else if (strncmp("ln", str, 2) == 0) {
    step = 2;
    symbol = 'l';
  } else if (strncmp("log", str, 3) == 0) {
    step = 3;
    symbol = 'g';
  } else if (strncmp("mod", str, 3) == 0) {
    step = 3;
    symbol = 'm';
  }
  *i += step;
  return symbol;
}
