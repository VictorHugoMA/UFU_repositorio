#include<stdio.h>

    int main(){
        float soma=0;
        int i;

        for(i=1; i<=100; i++){
            soma += (float)1/i;
        }
        printf("%.2f\n", soma);

    return 0;
    }
