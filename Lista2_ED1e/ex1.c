#include<stdio.h>
//1 - Calculo da Media

    int main(){
        float n1, n2;

        printf("<<Calculo da Media>>\n");
        printf("Digite a nota da prova 1: ");
        scanf("%f", &n1);
        printf("Digite a nota da prova 2: ");
        scanf("%f", &n2);

        printf("A nota media e: %.1f\n", (n1+n2)/2);
    }
