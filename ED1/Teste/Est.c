#include<stdlib.h>
#include<math.h>
#include "Est.h"

    struct ponto{
        int x, y;
    };

    ponto *cria_ponto(int x, int y){
        ponto *p;

        p=malloc(sizeof(ponto));

        if(p!=NULL){
            p->x=x;
            p->y=y;
            return p;
        }

    }

    int libera_ponto(ponto *p){
        if(p==NULL)
            return -1;
        
        else{
            free(p);
            return 0;
        }

    }

    int acessa_ponto(ponto *p, int *x, int *y){
        if(p==NULL)
            return -1;
        
        else{
            *x=p->x;
            *y=p->y;
            return 0;
        }
    }

    int altera_ponto(ponto *p, int x, int y){
        if(p==NULL)
            return -1;
        
        else{
            p->x=x;
            p->y=y;
            return 0;
        }
    }

    int dist_2pontos(ponto *p1, ponto *p2, float *d){
        if(p1==NULL || p2==NULL)
            return -1;
        
        else{
            float r;
            r=(p2->x-p1->x)*(p2->x-p1->x)+(p2->y-p1->y)*(p2->y-p1->y);
            *d=sqrt(r);
            return 0;
        }

    }
    