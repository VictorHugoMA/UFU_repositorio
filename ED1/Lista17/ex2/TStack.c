#include<stdio.h>
#include<stdlib.h>
#include"TStack.h"
#include"TLinkedList.h"


struct TStack{
    list *list;
};


TStack *stack_create(int n){
    TStack *st;
    st = malloc(sizeof(TStack));
    if(st!=NULL){
        st->list = list_creat();
        if (st->list == NULL){
            free(st);
            return NULL;
        }
    }
    return st;
}


int stack_free(TStack *st){
    if(st ==NULL)
        return ERROR;
    
    else{
        list_free(st->list);
        free(st);
        return SUCCESS;
    }
}

int stack_push(TStack *st, struct aluno a){
    if (st == NULL)
        return ERROR;
    
    return list_push_back(st->list, a);

}

int stack_pop(TStack *st){
    if (st == NULL)
        return ERROR;

    else{
        return list_pop_back(st->list);
    }
}

int stack_top(TStack *st, struct aluno *a){
    if (st == NULL)
        return ERROR;

    else{
        return list_back(st->list, a);
    }
}

int stack_empty(TStack *st){
    if (st == NULL)
        return ERROR;
    
    else{
        return list_size(st->list);
    }
}


int stack_print(TStack *st){
    if(st==NULL)
        return ERROR;

    else{
        return list_print(st->list);
    }
  
}