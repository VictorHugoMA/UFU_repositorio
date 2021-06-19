#include<stdio.h>
#include<stdlib.h>
#include"TQueue.h"
#include"Tlinkedlist.h"


struct TQueue{
    list *list;
};


TQueue *queue_create(){
    TQueue *st;
    st = malloc(sizeof(TQueue));
    if(st!=NULL){
        st->list = list_creat();
        if (st->list == NULL){
            free(st);
            return NULL;
        }
    }
    return st;
}


int queue_free(TQueue *st){
    if(st ==NULL)
        return ERROR;
    
    else{
        list_free(st->list);
        free(st);
        return SUCCESS;
    }
}

int queue_push(TQueue *st, struct aluno a){
    if (st == NULL)
        return ERROR;
    
    return list_push_back(st->list, a);

}

int queue_pop(TQueue *st){
    if (st == NULL)
        return ERROR;

    else{
        return list_pop_front(st->list);
    }
}

int queue_top(TQueue *st, struct aluno *a){
    if (st == NULL)
        return ERROR;

    else{
        return list_front(st->list, a);
    }
}

//Retorno -1 para erro, 0 para vazia
int queue_empty(TQueue *st){
    if (st == NULL)
        return ERROR;
    
    else{
        return list_size(st->list);
    }
}


int queue_print(TQueue *st){
    if(st==NULL)
        return ERROR;

    else{
        return list_print(st->list);
    }
  
}