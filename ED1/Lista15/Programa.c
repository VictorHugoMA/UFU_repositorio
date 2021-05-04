#include<stdio.h>
#include"TLinkedList.h"

    int main(){
        int i;
        aluno   a[5]={
        {120, "Victor", 10, 10, 10},
        {110, "Pedro", 10, 10, 10},
        {105, "Maria", 7.5, 9.1, 10},
        {150, "Guilherme", 6.5, 9.0, 8},
        {100, "Alisson", 10, 8, 10}
        };

        list *l;

        l = list_creat();

        for(i=0; i<4; i++){
            list_push_front(l, a[i]);
        }

        list_push_back(l, a[4]);

        list_print(l);

        list_free(l);

        return 0;
    }