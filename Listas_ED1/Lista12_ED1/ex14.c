#include<stdio.h>
//14 - Multiplica ponto Funcao

    typedef struct ponto{
        int x, y;
    }ponto;

    void multP(ponto *p, int n){
        p->x*=n;
        p->y*=n;
    }

    int main(){
        int n;
        ponto p;

        printf("Digite o ponto: ");
        scanf("%d", &p.x);
        scanf("%d", &p.y);
        
        printf("Digite a contante: ");
        scanf("%d", &n);

        printf("Resultado: (%d,%d) * %d", p.x, p.y, n);
        multP(&p, n);
        printf(" = (%d,%d)\n", p.x, p.y);

    }