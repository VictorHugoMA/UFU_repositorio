#include<stdio.h>

    int main(){
        int fim, i;

        scanf("%d", &fim);

        for(i=1; i<=fim; i++){
            printf("%d %d %d\n", i, i*i, i*i*i);
        }
    }
