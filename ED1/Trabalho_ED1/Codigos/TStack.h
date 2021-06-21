#ifndef _TStack_
#define _TStack_

#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3
#define ELEM_NOT_FOUND -4

#include "Ponto.h"

typedef struct Stack Stack;

Stack *stack_create();

int stack_free(Stack *st);

int stack_push(Stack *st, ponto p);

int stack_pop(Stack *st);

int stack_top(Stack *st, ponto *p);

int stack_size(Stack *st);

int stack_print(Stack *st);

#endif