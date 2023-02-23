#include<stdio.h>

    int main(){
        int fim, i, lat, cop, soma=0;

        scanf("%d", &fim);

        for(i=0; i<fim; i++){
            scanf("%d %d", &lat, &cop);
            if(lat>cop){
                soma+=cop;
            }
        }

        printf("%d\n", soma);

        return 0;
    }
