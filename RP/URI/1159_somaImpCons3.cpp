#include<stdio.h>

    int main(){
        int cont, fim, i, X, Y, j, soma;

        scanf("%d", &fim);

        for(cont=1; cont<=fim; cont++){

            soma=0;

            scanf("%d %d", &X, &Y);

            for(j=1, i=X; j<=Y; i++){
                if(i%2!=0){
                    soma+=i;
                    j++;
                }
            }
            printf("%d\n", soma);
        }
    return 0;
    }
