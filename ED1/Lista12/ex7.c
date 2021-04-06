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

        printf("Digite o numero A: ");
        scanf("%d", &a);
        printf("Digite o numero B: ");
        scanf("%d", &b);
        troque(&a, &b);

        printf("O numero A eh: %d\n", a);
        printf("O numero B eh: %d", b);
    }