#include<stdio.h>
#include "ListaSeqDinamica.h"


    int main(){
        int n, i, mat, aux;
        lista *l;
        aluno aCon, a[10]={
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

        printf("Tamanho Inicial: ");
        scanf("%d", &n);
        printf("\n");

        l=cria_lista(n); //cria a lista

        for(i=0; i<10; i++){
            insere_ordenado_lista(l, a[i]); //insere os alunos de maneira ordenada pela matricula
        }

        imprime_lista(l); //imprime a lista

        
        printf("Tamanho maximo da lista antes de aumentar: %d\n", tamanho_max_lista(l)); //tamanho max que a lista suporta no momento
        for(i=0; i<5; i++){
            aumenta_tam_lista(l); //aumenta tamanho da lista para teste de compactacao
        }
        printf("Tamanho maximo da lista depois de aumentar: %d\n", tamanho_max_lista(l));
        compactar_lista(l); //compacta a lista
        printf("Tamanho maximo da lista depois de compactar: %d\n", tamanho_max_lista(l));


        free_lista(l); //libera a lista
        return 0;
    }