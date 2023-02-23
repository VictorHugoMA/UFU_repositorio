/*#include<stdio.h>

    int main(){
        double raio;

        scanf("%lf", &raio);

        printf("VOLUME = %.3lf\n", (4.0/3.0)*3.14159*raio*raio*raio);

        return 0;
    }


#include<stdio.h>

    int main(){
        double A, B, C;

        scanf("%lf %lf %lf", &A, &B, &C);

            printf("TRIANGULO: %.3lf\n", (A*C)/2);
            printf("CIRCULO: %.3lf\n", 3.14159*(C*C));
            printf("TRAPEZIO: %.3lf\n", ((A+B)*C)/2);
            printf("QUADRADO: %.3lf\n", B*B);
            printf("RETANGULO: %.3lf\n", A*B);

        return 0;
    }
*/
#include<stdio.h>

    int main(){
        int dist;
        double litros;

        scanf("%d %lf", &dist, &litros);

        printf("%.3lf km/l\n", (double)dist/litros);

        return 0;
    }
