#include<stdio.h>
//2 - Temperatura Celsius para Fahrenheit

    int main(){
        float x;

        printf("<< Conversor de Temperatura >>\n");
        printf("Digite a temperatura (em Celsius): ");
        scanf("%f", &x);
        printf("%.0f graus Celsius correspondem a %.0f Fahrenheit\n", x, x*(9.0/5.0)+32.0);
    }