#include<stdio.h>
#include "TSeqList.h"


    int main(){
        int i, mat, aux;
        lista *l;
        aluno aCon, a[3]={
        {120, "Victor", 10, 10, 10},
        {110, "Pedro", 10, 10, 10},
        {130, "Joao", 7, 8, 10}
        };

        l=cria_lista(); //cria a lista

        for(i=0; i<3; i++){
            insere_ordenado_lista(l, a[i]); //insere os alunos de maneira ordenada pela matricula
        }
        imprime_lista(l); //imprime a lista

        printf("\nDigite uma matricula para consultar: ");
        scanf("%d", &mat);
        aux=consulta_lista_mat(l, mat, &aCon); //consulta lista por matricula
            if(aux==-1)
                printf("Erro na consulta\n");
            else if(aux==-2)
                printf("\nMatricula nao encontrada\n");
            else{
                printf("\nInformacoes do aluno com a matricula %d\n", aCon.matricula);
                printf("Nome: %s\n", aCon.nome);
                printf("Notas: %.1f %.1f %.1f\n", aCon.n1, aCon.n2, aCon.n3);
            }
            

        printf("\nImprimindo a lista apos retirar o ultimo elemento\n\n");
        remove_final_lista(l); //remove final da lista
        imprime_lista(l);

        free_lista(l); //libera a lista
        return 0;
    }