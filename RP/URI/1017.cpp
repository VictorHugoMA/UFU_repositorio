#include<stdio.h>

    int main(){
        int horas, vm;
        double dist, litros;

        scanf("%d %d", &horas, &vm);

        dist = vm * horas;
        litros = dist/12;

        printf("%.3lf\n", litros);

    }
