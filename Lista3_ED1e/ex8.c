#include<stdio.h>
#include<math.h>
//8 - Raizes da equacao 2 grau

    int main(){
        float a, b, c, delta, r1, r2;

        printf("Digite os 3 valores: ");
        scanf("%f %f %f", &a, &b, &c);

        delta = b*b - 4*a*c;

        if(a==0 || delta<0)
            printf("Nao eh possivel calcular\n");

            else{
                r1=(-b+sqrt(delta))/(2*a);
                r2=(-b-sqrt(delta))/(2*a);
                printf("Raiz 1 = %.2f\nRaiz 2 = %.2f\n", r1, r2);
            }

    }