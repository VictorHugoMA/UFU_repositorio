#include<stdlib.h>
#include"TQueue.h"

struct  TQueue{
    int front;
    int rear;
    int sizeI;
    int sizeC;
    aluno *data;
};

TQueue *queue_creat(int n){
    TQueue *q;

    q = malloc (sizeof(TQueue));

    if(q!=NULL){
        q->front = 0;
        q->rear = 0;
        q->sizeI = n;
        q->sizeC = n;
        q->data = malloc(n*sizeof(aluno));
    }
    return q;
}


int queue_free(TQueue *q){
    if(q==NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        free(q->data);
        free(q);

        return SUCCESS;
    }
}


int queue_increase(TQueue *q){

}

int queue_compact(TQueue *q){

}


int queue_push(TQueue *q, aluno a){
    if(q==NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        if(q->rear==q->sizeC){
            queue_increase(q);
        }
            q->data[q->rear]=a;
            q->rear=(q->rear+1)%q->sizeC;

            return SUCCESS;
    }
}