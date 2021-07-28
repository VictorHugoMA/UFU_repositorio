#include<stdio.h>
#include<stdlib.h>

    int main(){
        int i, j, fim, mil, *vento, casos;

        scanf("%d", &fim);

        for(i=0; i<fim; i++){
            scanf("%d", &mil);

            casos = mil/10;

            vento = malloc(casos*sizeof(int));
            for(j=0; j<casos; j++){
                scanf("%d", vento[j]);
            }

            


            free(vento);
        }
    }