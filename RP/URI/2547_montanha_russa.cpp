#include<stdio.h>

    int main(){
        int numVis, AltMin, AltMax, AltVis, i, cont;

        while(scanf("%d %d %d", &numVis, &AltMin, &AltMax)!=EOF){
            cont=0;

            for(i=0; i<numVis; i++){
                scanf("%d", &AltVis);

                if(AltVis >= AltMin && AltVis <=AltMax){
                    cont++;
                }
            }
        printf("%d\n", cont);

        }

        return 0;
    }
