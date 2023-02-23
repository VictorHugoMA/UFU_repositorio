#include<stdio.h>

    int main(){
        int M,N,aux, i, soma;

        while(1){
            scanf("%d %d", &M, &N);

            soma=0;

            if(M<=0 || N<=0){
                break;
            }

            if(M>N){
                aux=M;
                M=N;
                N=aux;
            }
            for(i=M; i<=N; i++){
                printf("%d ",i);
                soma+=i;
            }
            printf("Sum=%d\n", soma);
        }
    }
