#include<stdio.h>
//7 - Troque funcao

    void troque(int *a, int *b){
        int aux;

        aux=*a;
        *a=*b;
        *b=aux;
    }

    int main(){
        int a, b;

        printf("A: ");
        scanf("%d", &a);
        printf("B: ");
        scanf("%d", &b);
        troque(&a, &b);

        printf("A = %d\nB = %d\n", a,b);
    }