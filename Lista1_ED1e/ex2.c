#include<stdio.h>
//2 - Temperatura Celsius para Fahrenheit

    int main(){
        float x;

        printf("<<Conversor de Temperatura>>\n");
        printf("Digite a temperatura (em Celsius): ");
        scanf("%f", &x);
        printf("%.2f graus Celsius correspondem a %.2f Fahrenheit\n", x, x*(9.0/5.0)+32.0);
    }