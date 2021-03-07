#include<stdio.h>
//20 - Triangulo de Floyd 

    int main(){
        int n, seq=1, i, j;

        printf("Digite um numero: ");
        scanf("%d", &n);

        for(i=1; i<=n; i++){
            for(j=1; j<=i; j++){
                printf("%d ", seq);
                seq++;
            }
            printf("\n");
        }
    }