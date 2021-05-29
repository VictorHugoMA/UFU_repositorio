#include<stdlib.h>
#include"TQueue.h"

struct  TQueue{
    int front;
    int rear;
    int qt;
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
        q->qt=0;
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
        if(q->qt==q->sizeC){
            queue_increase(q);
        }
            q->data[q->rear]=a;
            q->rear=(q->rear+1)%q->sizeC;
            q->qt++;

            return SUCCESS;
    }
}

int queue_pop(TQueue *q){
    if(q==NULL){
        return INVALID_NULL_POINTER;
    }
    if(q->qt==0){
        return ELEM_NOT_FOUND;
    }
    else{
        q->front=(q->front+1)%q->sizeC;
        q->qt--;

        return SUCCESS;
    }
}

int queue_top(TQueue *q, struct aluno *a){
    if(q==NULL){
        return INVALID_NULL_POINTER;
    }
    if(q->rear==0){
        return ELEM_NOT_FOUND;
    }
    else{
        *a=q->data[q->front];

        return SUCCESS;
    }
}

int queue_empty(TQueue *q){
    if(q==NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        return (q->qt==0);
    }
}

int queue_full(TQueue *q){
        if(q==NULL)
            return INVALID_NULL_POINTER;
        else 
            return (q->qt==q->sizeC);
    }


int queue_print(TQueue *q){
    if(q==NULL){
        return INVALID_NULL_POINTER;
    }
    if(q->qt==0){
        return ELEM_NOT_FOUND;
    }
    else{
        printf("-------------------------------\n"); 
        printf("Matricula: %d\n", q->data[q->front].matricula);
        printf("Nome: %s\n", q->data[q->front].nome);
        printf("Notas: %.1f %.1f %.1f\n", q->data[q->front].n1, q->data[q->front].n2, q->data[q->front].n3);

        return SUCCESS; 
    }
} 