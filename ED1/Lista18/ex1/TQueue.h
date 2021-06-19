#ifndef _TQueue_
#define _TQueue_

#define SUCCESS 0
#define ERROR -1
#include "aluno.h"

typedef struct TQueue TQueue;

TQueue *queue_create();
int queue_free(TQueue *st);

int queue_push(TQueue *st, struct aluno a);
int queue_pop(TQueue *st);
int queue_top(TQueue *st, struct aluno *a);

int queue_empty(TQueue *st);
int queue_full(TQueue *st);
int queue_print(TQueue *st);

#endif