#include "smart_calc.h"

bool push(stack** head, type type, double num, char sym, int pr) {
  bool error = OK;
  stack* tmp = (stack*)calloc(1, sizeof(stack));
  if (tmp != NULL) {
    tmp->type = type;
    if (type == NUMBER) {
      tmp->data.number = num;
    } else {
      tmp->data.symbol = sym;
      tmp->priority = pr;
    }
    tmp->top = NULL;
    if (*head != NULL) tmp->top = *head;
    *head = tmp;
  } else {
    error = FAIL;
  }
  return error;
}

double pop(stack** head) {
  stack* tmp = *head;
  double num = tmp->data.number;
  *head = tmp->top;
  free(tmp);
  return num;
}

char peek(stack* head) {
  char symbol = 0;
  if (head != NULL) {
    symbol = head->data.symbol;
  }
  return symbol;
}

bool isEmpty(stack* head) { return head == NULL; }

void destroy_stack(stack** head) {
  while (*head != NULL) {
    pop(head);
  }
}

void reverse(stack** head) {
  stack* new = NULL;
  while (!isEmpty(*head)) {
    if ((*head)->type == NUMBER) {
      double num = (*head)->data.number;
      push(&new, NUMBER, num, 0, 0);
    } else if ((*head)->type == VARIABLE) {
      char sym = 'x';
      push(&new, VARIABLE, 0, sym, 0);
    } else if ((*head)->type == OPERATOR) {
      char sym = (*head)->data.symbol;
      push(&new, OPERATOR, 0, sym, 0);
    }
    pop(head);
  }
  *head = new;
}