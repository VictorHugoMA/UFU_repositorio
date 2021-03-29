#include<stdio.h>
//10 - Struct ponto e funcao

    struct ponto{
        int x, y;
    };

    int imprime_ponto (struct ponto p){
        printf("(%d,%d)\n", p.x, p.y);
    }

    int main(){
        struct ponto p;

        scanf("%d", &p.x);
        scanf("%d", &p.y);
        imprime_ponto(p);
    }