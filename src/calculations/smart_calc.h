#ifndef C7_SMARTCALC_V1_1_SMART_CALC_H_
#define C7_SMARTCALC_V1_1_SMART_CALC_H_

#include <ctype.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OK 1
#define FAIL 0

#define MINUS 1
#define PLUS 0

typedef enum { NUMBER, OPERATOR, VARIABLE, OPEN_BRACKET } type;

typedef struct stack {
  type type;
  int priority;
  union {
    double number;
    char symbol;
  } data;
  struct stack *top;
} stack;

double calculate(char *str, char *x, int *error);
double get_result(stack *expression, double x);
double unary(char op, double num);
double binary(char op, double num1, double num2);
void isValidX(char *str, bool flag_x, int *error, double *num);

void reversePolishNotation(stack **head);
void function_to_stack(stack **operators, stack **numbers, char symbol, int pr);
int getPriority(char symbol, stack *prev_token, stack *cur_token, stack *head);
bool isTrigonometryToken(char symbol);
bool isUnary(stack *prev_token, stack *cur_token, stack *head);

void isValidExpression(char *str, bool *flag_x, int *error);
void checkNumber(char *str, unsigned *i, bool *flag_x);
int isNumber(char *str, double *num);
int isTrigonometry(char *str);

bool push(stack **head, type type, double num, char sym, int pr);
double pop(stack **head);
char peek(stack *head);
bool isEmpty(stack *head);
void reverse(stack **head);
void destroy_stack(stack **head);

char getSymbol(char *str, unsigned *i);
void parse(char *str, stack **head);

#endif  // C7_SMARTCALC_V1_1_SMART_CALC_H_