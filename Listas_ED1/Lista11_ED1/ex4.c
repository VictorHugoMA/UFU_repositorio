#include<stdio.h>
//4 - Pontos struct Aloc dinamica

    typedef struct ponto{
        int x, y;
    }ponto;

    int main(){
        int n, i;
        ponto *p;
        

        printf("Quantos pontos deseja digitar: ");
        scanf("%d", &n);

        p=malloc(n*sizeof(ponto));

        for(i=0; i<n; i++){
            printf("Entre com a coordenada x do ponto %d: ", i+1);
            scanf("%d", &p[i].x);
            printf("Entre com a coordenada y do ponto %d: ", i+1);
            scanf("%d", &p[i].y);
        }

        printf("\n");
        printf("Pontos digitados: ");
        for(i=0; i<n-1; i++){
            printf("(%d,%d);", p[i].x, p[i].y);
        }
            printf("(%d,%d)", p[i].x, p[i].y);


        free(p);
    }