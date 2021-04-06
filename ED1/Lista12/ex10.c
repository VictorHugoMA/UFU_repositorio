#include<stdio.h>
//10 - Struct ponto e funcao

    struct ponto{
        int x, y;
    };

    int imprime_ponto (struct ponto p){
        printf("O ponto digitado eh: (%d,%d)", p.x, p.y);
    }

    int main(){
        struct ponto p;

        printf("Digite o valor de x: ");
        scanf("%d", &p.x);
        printf("Digite o valor de y: ");
        scanf("%d", &p.y);
        imprime_ponto(p);
    }