#include "smart_calc.h"

double calculate(char *str, char *x_str, int *error) {
  double res = 0;
  double x = 0;
  bool flag_x = false;
  stack *expression = NULL;
  isValidExpression(str, &flag_x, error);
  isValidX(x_str, flag_x, error, &x);
  if (*error == OK) {
    parse(str, &expression);
    reversePolishNotation(&expression);
    res = get_result(expression, x);
    destroy_stack(&expression);
  }
  return res;
}

double get_result(stack *expression, double x) {
  double res = 0;
  stack *numbers = NULL;
  for (stack *token = expression; token != NULL; token = token->top) {
    if (token->type == NUMBER) {
      double num = token->data.number;
      push(&numbers, NUMBER, num, 0, 0);
    } else if (token->type == VARIABLE) {
      push(&numbers, NUMBER, x, 0, 0);
    } else {
      double res = 0;
      char operator= token->data.symbol;
      if (isTrigonometryToken(operator)) {
        double num = pop(&numbers);
        res = unary(operator, num);
      } else {
        double num1 = 0;
        double num2 = 0;
        num2 = pop(&numbers);
        num1 = pop(&numbers);
        res = binary(operator, num1, num2);
      }
      push(&numbers, NUMBER, res, 0, 0);
    }
  }
  res = pop(&numbers);
  return res;
}

double unary(char op, double num) {
  double res = 0;
  switch (op) {
    case 'c':
      res = cos(num);
      break;
    case 's':
      res = sin(num);
      break;
    case 't':
      res = tan(num);
      break;
    case 'o':
      res = acos(num);
      break;
    case 'i':
      res = asin(num);
      break;
    case 'n':
      res = atan(num);
      break;
    case 'q':
      res = sqrt(num);
      break;
    case 'l':
      res = log(num);
      break;
    case 'g':
      res = log10(num);
      break;
  }
  return res;
}

double binary(char op, double num1, double num2) {
  double res = 0;
  switch (op) {
    case '+':
      res = num1 + num2;
      break;
    case '-':
      res = num1 - num2;
      break;
    case '/':
      res = num1 / num2;
      break;
    case '*':
      res = num1 * num2;
      break;
    case '^':
      res = pow(num1, num2);
      break;
    case 'm':
      res = fmod(num1, num2);
      break;
  }
  return res;
}
