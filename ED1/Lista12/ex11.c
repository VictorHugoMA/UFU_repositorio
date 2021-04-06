#include<stdio.h>
//11 - soma e funcao

    typedef struct ponto{
        int x, y;
    }ponto;

    ponto soma_ponto(ponto p1, ponto p2){
        ponto p3;

        p3.x=p1.x+p2.x;
        p3.y=p1.y+p2.y;

        return p3;
    }
    int imprime_ponto (ponto p){
        printf("(%d,%d)", p.x, p.y);
    }

    int main(){
        ponto p1,p2,p3;

        printf("Digite o valor de x1: ");
        scanf("%d", &p1.x);
        printf("Digite o valor de y1: ");
        scanf("%d", &p1.y);
        printf("Digite o valor de x2: ");
        scanf("%d", &p2.x);
        printf("Digite o valor de y2: ");
        scanf("%d", &p2.y);

        p3=soma_ponto(p1,p2);

        printf("A soma de ");
        imprime_ponto(p1); 
        printf(" com ");
        imprime_ponto(p2);
        printf(" eh ");
        imprime_ponto(p3);


    }