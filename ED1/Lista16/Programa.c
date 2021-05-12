#include<stdio.h>
#include"TDLinkedList.h"

    int main(){
        aluno a[10]={
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

        DLlist *l;

        l = list_creat(); //cria a lista

        list_push_front(l, a[0]); //insere aluno na primeira posicao

        list_insert(l, 2, a[1]); //insere aluno em uma posicao

        list_print_forward(l); //imprime a lista na ordem 

        list_free(l); //libera a lista


        return 0;
    }