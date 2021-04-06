#include<stdio.h>
//1 - Alterar valor com endereco de memoria

    int main(){
        int val[5] = {2,4,5,8,10};
        unsigned int end;

        end=&val[2];

        printf("Novo valor de val[2]: ");
        scanf("%d", end);
        

        for(int i=0; i<5; i++){
            printf("%d ", val[i]);
        }
    }