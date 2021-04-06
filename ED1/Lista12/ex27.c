#include<stdio.h>
//27 - Pontos com aloc dinamica Funcao

    typedef struct ponto{
        int x, y;
    }ponto;

    ponto *npontos(int n){
        ponto *p;

        p=(ponto *)calloc(n, sizeof(ponto));

        return p;

    }
    
    int main(){
        int i, n;
        ponto *pt;

        printf("Digite quantos ponto(x,y) voce deseja: ");
        scanf("%d", &n);

        pt=npontos(n);

        printf("(%d,%d) ,", pt[0].x, pt[0].y);
        for(i=1; i<n-1; i++){
            printf(" (%d,%d) ,", pt[i].x, pt[i].y);
        }
        printf(" (%d,%d)", pt[i].x, pt[i].y);

        free(pt);
        
    }