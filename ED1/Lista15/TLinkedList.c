#include<stdlib.h>
#include"TLinkedList.h"

struct list{
    list_node *head;
};

typedef struct list_node{
    aluno dada;
    aluno *next;
}list_node;

list *list_creat(){
    list *l;

    l = malloc(sizeof(list));

    if(l!=NULL)
        l->head=NULL;

    return l;
}

int list_free(list *l){

}

int list_push_front(list *l, aluno a){
    if(l==NULL){
        return INVALID_NULL_POINTER;
    }
    else{
        list_node *n;

        n = malloc(sizeof(list_node));
        if(n==NULL){
            return OUT_OF_MEMORY;
        }
        n->dada=a;

        if(l->head==NULL){ //lista vazia
            n->next=NULL;
        }
        else{ //lista com elementos
            n->next=l->head;
        }
        l->head=n;

    }
}

