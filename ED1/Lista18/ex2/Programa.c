#include<stdio.h>
#include"TQueue.h"

    int main(){
        aluno aC, a[10]={
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

        int i;
        TQueue *t;

        t = queue_create(); //cria a fila

        for(i=0; i<5; i++){
            queue_push(t, a[i]); //insere na fila(final)
        }
        queue_print(t); //imprime o elemento que esta a mais tempo na fila

        queue_pop(t); //retira o elemento que esta a mais tempo na fila
        queue_print(t);



        queue_free(t); //libera a fila
        return 0;
    }