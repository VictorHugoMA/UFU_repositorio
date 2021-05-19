#ifndef _TStack_
#define _TStack_

#define SUCCESS 0
#define ERROR -1
#include "aluno.h"

typedef struct TStack TStack;

TStack *stack_create();
int stack_free(TStack *st);

int stack_push(TStack *st, struct aluno a);
int stack_pop(TStack *st);
int stack_top(TStack *st, struct aluno *a);

int stack_empty(TStack *st);
int stack_full(TStack *st);
int stack_print(TStack *st);

#endif