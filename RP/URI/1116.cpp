#include<stdio.h>


    int main(){
        int fim, i, X, Y;
        float resultado;

        scanf("%d", &fim);

        for(i=1; i<=fim; i++){
            scanf("%d %d", &X, &Y);

            if(Y==0){
                printf("divisao impossivel\n");
            }
            else{
                resultado=(float)X/Y;
                printf("%.1f\n", resultado);
            }
        }

    }
