#include<stdio.h>

    int main(){
        int fim, i, R1, R2;

        scanf("%d", &fim);

        for(i=0; i<fim; i++){
            scanf("%d %d", &R1, &R2);
            printf("%d\n", R1+R2);
        }

        return 0;
    }
