#include<stdio.h>

    int main(){
        int i, fim;

        scanf("%d", &fim);

        for(i=1; i<=fim*4; i+=4){
            printf("%d %d %d PUM\n", i, i+1, i+2);
        }
    }
