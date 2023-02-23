#include<stdio.h>

    int main(){
        int A, N, i, soma=0;

        scanf("%d", &A);

        do{
           scanf("%d", &N);
        }
        while(N<=0);

        for(i=0; i<=N-1; i++){
            soma += A + i;
        }
        printf("%d\n", soma);

    return 0;
    }
