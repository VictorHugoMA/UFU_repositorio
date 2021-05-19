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

        for(int i=0; i<10; i++){
            stack_push(t, a[i]);
        }

        stack_print(t);

        stack_top(t, &aC);
        printf("\nConsultando ultimo elemento: ");
        aux=stack_top(t, &aC); //consulta ultimo aluno 
            if(aux==-1)
                printf("Erro na consulta\n");
            else{
                printf("\nInformacoes do aluno com a matricula %d\n", aC.matricula);
                printf("Nome: %s\n", aC.nome);
                printf("Notas: %.1f %.1f %.1f\n", aC.n1, aC.n2, aC.n3);
            }
        
        printf("\nRetirando o ultimo elemento\n\n");
        stack_pop(t);

        stack_print(t);


        stack_free(t);
        return 0;
    }