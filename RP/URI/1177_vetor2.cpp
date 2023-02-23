#include<stdio.h>

    int main(){
        int i=0, N[1000], troca;

        scanf("%d", &troca);

        for(i=0; i<1000; i++){
            N[i]= i%troca;
        }
        for(i=0; i<1000; i++){
            printf("N[%d] = %d\n", i, N[i]);
        }

    return 0;
    }
