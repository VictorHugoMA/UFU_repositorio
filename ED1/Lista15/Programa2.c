#include<stdio.h>
#include"TSULinkedList.h"

    int main(){
        int i, aux;
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

        list *l;

        l = list_creat(0); //cria a lista sabendo se eh ordenada ou nao
        
        printf("Inserindo elemento de maneira ordenada:\n");
        for(i=0; i<10; i++){
            aux = list_insert_sorted(l, a[i]); //insere de maneira ordenada
        }
            if(aux==SUCCESS)
                printf("Insercao bem sucedida\n");
            else if(aux==INVALID_NULL_POINTER)
                printf("Ponteiro invalido\n");
            else if(aux==OUT_OF_MEMORY)
                printf("Nao foi posivel alocar a memoria\n");
            else if(aux==NOT_ALLOWED)
                printf("Tipo de insercao nao permitida\n");
        
        printf("\nInserindo elemento na primeira posicao (nao ordenada):\n");
        aux = list_push_front(l, a[0]); //insere na primeira posicao
            if(aux==SUCCESS)
                printf("Insercao bem sucedida\n");
            else if(aux==INVALID_NULL_POINTER)
                printf("Ponteiro invalido\n");
            else if(aux==OUT_OF_MEMORY)
                printf("Nao foi posivel alocar a memoria\n");
            else if(aux==NOT_ALLOWED)
                printf("Tipo de insercao nao permitida\n");
        
        list_print(l);

        list_free(l);

        return 0;
    }