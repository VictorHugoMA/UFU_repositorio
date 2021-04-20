#include<stdio.h>
#include "ListaSequencial.h"


    int main(){
        aluno a={12011, "Victor", 10, 10, 10}, aCon;
        lista *l;

        l=cria_lista();

        insere_final_lista(l, a);

        consulta_lista_pos(l, 1, &aCon);
        printf("Matricula: %d\n", aCon.matricula);
        printf("Matricula: %s\n", aCon.nome);
        printf("Matricula: %.1f\n", aCon.n1);
        printf("Matricula: %.1f\n", aCon.n2);
        printf("Matricula: %.1f\n", aCon.n3);



        free_lista(l);
        return 0;
    }