#include<stdio.h>
//5 - Pontos maior e menor struct e Aloc dinamica

    typedef struct ponto{
        int x, y;
    }ponto;

    int main(){
        int n, i;
        int *pac, *pab, *pdi, *pes;
        ponto *p;
        

        printf("Quantos pontos deseja digitar: ");
        scanf("%d", &n);

        p=malloc(n*sizeof(ponto));

        pac=&p[0].y;
        pab=&p[0].y;
        pdi=&p[0].x;
        pes=&p[0].x;

        for(i=0; i<n; i++){
            printf("Entre com a coordenada x do ponto %d: ", i+1);
            scanf("%d", &p[i].x);
            printf("Entre com a coordenada y do ponto %d: ", i+1);
            scanf("%d", &p[i].y);

            if(p[i].y>*pac)
                pac=&p[i].y;

            if(p[i].y<*pab)
                pab=&p[i].y;

            if(p[i].x>*pdi)
                pdi=&p[i].x;

            if(p[i].x<*pes)
                pes=&p[i].x;
            
        }

        printf("\n");
        printf("Pontos digitados: ");
        for(i=0; i<n-1; i++){
            printf("(%d,%d);", p[i].x, p[i].y);
        }
            printf("(%d,%d)\n", p[i].x, p[i].y);

        printf("Mais a esquerda: %d\n", *pes);
        printf("Mais a direita: %d\n", *pdi);
        printf("Mais acima: %d\n", *pac);
        printf("Mais abaixo: %d", *pab);

        free(p);
    }
