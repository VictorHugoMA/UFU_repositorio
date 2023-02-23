#include<stdio.h>

struct ponto{
    float x,y,z;
};

int pegapontos(int i){
    Ponto *ponto = (Ponto *) malloc(i * sizeof(Ponto));

    if(ponto == NULL)
        return 0;

    printf("Insira o ponto x: ");
    scanf("%f",&ponto->x);

    printf("Insira o ponto y: ");
    scanf("%f",&ponto->y);

    return ponto;
}

float distanciaf(Ponto *p, Ponto *p1){
    float distancia = 0, x1,x2,y1,y2;
    x1 = p->x;
    x2 = p1->x;
    y1 = p->y;
    y2 = p1->y;

    distancia = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    return distancia;
}