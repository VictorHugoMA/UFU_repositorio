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
int queue_free(TQueue *q);

int queue_increase(TQueue *q);
int queue_compact(TQueue *q);


int queue_push(TQueue *q, struct aluno a);
int queue_pop(TQueue *q);
int queue_top(TQueue *q, struct aluno *a);

int queue_empty(TQueue *q);
int queue_full(TQueue *q);

int queue_print(TQueue *q);

#endif