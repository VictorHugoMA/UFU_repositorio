#include<stdio.h>
#include<stdlib.h>
#include"TDLinkedList.h"

typedef struct DLNode DLNode;

struct DLNode{
    aluno data;
    DLNode *prev;
    DLNode *next;
};

struct TDLinkedList{
    DLNode *begin;
    DLNode *end;
    int size;
};

DLlist* list_creat(){
    DLlist *list;

    list = malloc(sizeof(DLlist));

    if(list!=NULL){
        list->begin=NULL;
        list->end=NULL;
        list->size=0;
    }
    return list;
}