#include<stdio.h>
#include"TStack.h"
#include"aluno.h" 

    int main(){
        int aux, pos;
        struct aluno aC, a[10]={
        {120, "Victor", 10, 10, 10},
        {110, "Pedro", 10, 10, 10},
        {130, "Joao", 7, 8, 10},
        {105, "Maria", 7.5, 9.1, 10},
        {150, "Guilherme", 6.5, 9.0, 8},
        {100, "Alisson", 10, 10, 10},
        {170, "Felipe", 10, 10, 10},
        {200, "Carolina", 7, 8, 10},
        {115, "Jorge", 7.5, 9.1, 10},
        {195, "Ana", 6.5, 9.0, 8}
        };

        TStack *t;

        t = stack_create();

        aux = stack_push(t, a[0]);

        printf("%d\n", aux);


        stack_free(t);
        return 0;
    }