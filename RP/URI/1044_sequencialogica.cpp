#include<stdio.h>

    int main(){
        int i, fim;

        scanf("%d", &fim);

        for(i=1; i<=fim; i++){
            printf("%d %d %d\n", i, i*i, i*i*i);
            printf("%d %d %d\n", i, i*i+1, i*i*i+1);
        }
    }
