#include<stdio.h>

    int main(){
        int X;
        double Y, consumo;

        scanf("%d %lf", &X, &Y);

        consumo = X/Y;

        printf("%.3lf km/l\n", consumo);

    }
