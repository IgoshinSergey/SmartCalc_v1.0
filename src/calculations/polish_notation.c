#include "smart_calc.h"

void reversePolishNotation(stack **head) {
  stack *numbers = NULL;
  stack *operators = NULL;
  stack *prev_token = NULL;
  for (stack *token = *head; token != NULL; token = token->top) {
    char symbol = token->data.symbol;
    double num = token->data.number;
    if (token->type == NUMBER) {
      push(&numbers, NUMBER, num, 0, 0);
    } else if (token->type == VARIABLE) {
      push(&numbers, VARIABLE, 0, 'x', 0);
    } else if (symbol == '(') {
      push(&operators, OPEN_BRACKET, 0, symbol, 0);
    } else if (symbol == ')') {
      while (operators->type != OPEN_BRACKET) {
        char op = operators->data.symbol;
        push(&numbers, OPERATOR, 0, op, 0);
        pop(&operators);
      }
      pop(&operators);
      if (!isEmpty(operators) && isTrigonometryToken(peek(operators))) {
        push(&numbers, OPERATOR, 0, operators->data.symbol, 0);
        pop(&operators);
      }
    } else {
      int pr = getPriority(symbol, prev_token, token, *head);
      if (pr == 4 && symbol == '-') {
        push(&numbers, NUMBER, 0, 0, 0);
      } else if (pr == 4 && symbol == '+')
        continue;
      function_to_stack(&operators, &numbers, symbol, pr);
    }
    prev_token = token;
  }
  while (!isEmpty(operators)) {
    char op = operators->data.symbol;
    push(&numbers, OPERATOR, 0, op, 0);
    pop(&operators);
  }
  destroy_stack(head);
  reverse(&numbers);
  *head = numbers;
}

void function_to_stack(stack **operators, stack **numbers, char symbol,
                       int pr) {
  if (isEmpty(*operators)) {
    push(operators, OPERATOR, 0, symbol, pr);
  } else {
    char prev_op = peek(*operators);
    int prev_pr = (*operators)->priority;
    if ((pr > prev_pr) || (symbol == '^' && prev_op == '^') ||
        (prev_op == '(') || (prev_op == '-' && prev_pr == 4 && pr == 4)) {
      push(operators, OPERATOR, 0, symbol, pr);
    } else {
      while (!isEmpty(*operators) && (pr <= prev_pr) &&
             (peek(*operators) != '(')) {
        char op = (*operators)->data.symbol;
        push(numbers, OPERATOR, 0, op, 0);
        pop(operators);
        if (!isEmpty(*operators)) prev_pr = (*operators)->priority;
      }
      push(operators, OPERATOR, 0, symbol, pr);
    }
  }
}

/*
 * priority
 * 4. унарные операции +, -, sin, cos, ...
 * 3. ^
 * 2. /, mod, *
 * 1. +, -
 */

int getPriority(char symbol, stack *prev_token, stack *cur_token, stack *head) {
  int priority = 0;
  if (symbol == '^') {
    priority = 3;
  } else if (strchr("/*m", symbol)) {
    priority = 2;
  } else if (isTrigonometryToken(symbol)) {
    priority = 4;
  } else if (isUnary(prev_token, cur_token, head)) {
    priority = 4;
  } else {
    priority = 1;
  }
  return priority;
}

bool isTrigonometryToken(char symbol) {
  bool res = false;
  if (strchr("cstoinqlg", symbol)) res = true;
  return res;
}

bool isUnary(stack *prev_token, stack *cur_token, stack *head) {
  bool res = false;
  if (peek(prev_token) == '(' || (cur_token == head)) {
    res = true;
  }
  return res;
}
