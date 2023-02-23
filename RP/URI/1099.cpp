#include<stdio.h>

    int main(){
        int fim, i=1, x, y, aux, j, soma;

        scanf("%d", &fim);

        while(i<=fim){
            scanf("%d %d", &x, &y);

            soma=0;

            if(x>y){
                aux=x;
                x=y;
                y=aux;
            }

            for(j=(x+1); j<y; j++){
                if(j%2!=0){
                    soma+=j;
                }
            }
            printf("%d\n", soma);
            i++;
        }


    }
