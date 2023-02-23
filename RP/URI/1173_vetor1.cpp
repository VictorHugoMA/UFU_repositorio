#include<stdio.h>

    int main(){
        int i, valor;

        scanf("%d", &valor);

        for(i=0; i<=9; i++){
            printf("N[%d] = %d\n", i, valor);
            valor*= 2;
        }
    return 0;
    }
