#ifndef _TQueue_
#define _TQueue_

#define SUCCESS 0
#define INVALID_NULL_POINTER -1
#define OUT_OF_MEMORY -2
#define OUT_OF_RANGE -3
#define ELEM_NOT_FOUND -4
#include "aluno.h"

typedef struct TQueue TQueue;

TQueue *queue_create(int n);
int queue_free(TQueue *st);

int queue_increase(TQueue *q);
int queue_compact(TQueue *q);


int queue_push(TQueue *st, struct aluno a);
int queue_pop(TQueue *st);
int queue_top(TQueue *st, struct aluno *a);

int queue_empty(TQueue *st);
int queue_print(TQueue *st);

#endif