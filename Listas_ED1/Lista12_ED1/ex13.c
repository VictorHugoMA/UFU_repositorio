#include<stdio.h>
//13 - Area do retangulo funcao

    typedef struct ponto{
        int x, y;
    }ponto;

    int area_calc(ponto p1, ponto p2){
        int area;
        area = (p2.x-p1.x)*(p1.y-p2.y);
        return area;
    }
    int imprime_ponto (ponto p){
        printf("(%d,%d)", p.x, p.y);
    }

    int main(){
        int area;
        ponto p1, p2;

        scanf("%d", &p1.x);
        scanf("%d", &p1.y);
        scanf("%d", &p2.x);
        scanf("%d", &p2.y);

        area = area_calc(p1, p2);

        printf("A area da retangulo definido por ");
        imprime_ponto(p1);
        printf(" e ");
        imprime_ponto(p2);
        printf(" eh %d\n",area);
    }