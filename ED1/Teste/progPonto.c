#include<stdio.h>
#include "Est.h"

    int main(){
        ponto *p1, *p2;
        int x, y;
        float dist;

        p1=cria_ponto(5, 6);
        p2=cria_ponto(10, 2);

        acessa_ponto(p1, &x, &y);
        printf("Ponto 1: (%d, %d)\n", x, y);
        acessa_ponto(p2, &x, &y);
        printf("Ponto 2: (%d, %d)\n", x, y);

        dist_2pontos(p1, p2, &dist);
        printf("Distancia: %.1f\n", dist);


        libera_ponto(p1);
        libera_ponto(p2);

        return 0;

    }