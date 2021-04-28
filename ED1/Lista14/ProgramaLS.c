#include<stdio.h>
#include "TSeqList.h"


    int main(){
        int i, mat, aux;
        lista *l;
        aluno aCon, a[5]={
        {120, "Victor", 10, 10, 10},
        {110, "Pedro", 10, 10, 10},
        {105, "Maria", 7.5, 9.1, 10},
        {150, "Guilherme", 6.5, 9.0, 8},
        {100, "Alisson", 10, 8, 10}
        };

        l=cria_lista(); //cria a lista

        for(i=0; i<5; i++){
            insere_ordenado_lista(l, a[i]); //insere os alunos de maneira ordenada pela matricula
        }
        printf("\n");
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
            
        printf("\nDigite a matricula do aluno que deseja remover da lista: ");
        scanf("%d", &mat);
        aux = remove_mat_lista(l, mat); //remove aluno da lista pela matricula
            if(aux==-1)
                printf("\nErro na remocao\n");
            else{
                printf("\nAluno removido\n\n");
                imprime_lista(l);
            }
        
        printf("\nImprimindo a lista apos retirar o ultimo elemento\n\n");
        remove_final_lista(l); //remove final da lista
        imprime_lista(l);

        printf("\nTamanho da lista: %d\n", tamanho_lista(l)); //informa a quantidade de alunos na lista
        aux = cheia_lista(l); // verifica se lista esta cheia
            if(aux==1)
                printf("A lista esta cheia\n");
            else if(aux==0)
                printf("A lista nao esta cheia\n");

        free_lista(l); //libera a lista
        return 0;
    }