#include<stdio.h>
//13 - Area do retangulo funcao

    typedef struct ponto{
        float x, y;
    }ponto;

    float area_calc(ponto p1, ponto p2){
        float area;
        area = (p2.x-p1.x)*(p1.y-p2.y);
        return area;
    }
    float imprime_ponto (ponto p){
        printf("(%.2f, %.2f)", p.x, p.y);
    }

    float main(){
        float area;
        ponto p1, p2;

        printf("<<Calculo de Area>>\n");
        printf("Digite a coordenada x do ponto 1: ");
        scanf("%f", &p1.x);
        printf("Digite a coordenada y do ponto 1: ");
        scanf("%f", &p1.y);
        printf("Digite a coordenada x do ponto 2: ");
        scanf("%f", &p2.x);
        printf("Digite a coordenada y do ponto 2: ");
        scanf("%f", &p2.y);

        area = area_calc(p1, p2);

        printf("A area da retangulo definido por ");
        imprime_ponto(p1);
        printf(" e ");
        imprime_ponto(p2);
        printf(" eh %.2f", area);
    }