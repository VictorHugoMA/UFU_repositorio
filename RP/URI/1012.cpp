#include<stdio.h>

    int main(){
        double A, B, C, atri, acir, atra, aqua, aret;

        scanf("%lf %lf %lf", &A, &B, &C);

        atri = (A*C)/2;
        acir = 3.14159 * C * C;
        atra = (A+B) * C /2;
        aqua = B * B;
        aret = A * B;

        printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", atri, acir, atra, aqua, aret);

    }
