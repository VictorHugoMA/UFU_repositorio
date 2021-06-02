#ifndef _TStack_
#define _TStack_

#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3
#define ELEM_NOT_FOUND -4

typedef struct TStack TStack;

TStack *stack_create(int n);
int stack_free(TStack *st);

int stack_push(TStack *st, char c);
int stack_pop(TStack *st);
int stack_top(TStack *st, char *c);

int stack_empty(TStack *st);
int stack_print(TStack *st);

char *inf_pos(TStack *t);
int calcula_op(TStack *t, int *res);


#endif