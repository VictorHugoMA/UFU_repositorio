/*#include<stdio.h>
//1001
    int main(){
        int A, B, X;

        scanf("%d %d", &A, &B);

        X = A + B;

        printf("X = %d\n", X);

        return 0;
    }


#include<stdio.h>
//1002
    int main(){
        double raio;

        scanf("%lf", &raio);

        printf("A=%.4lf\n", 3.14159*raio*raio);

        return 0;
    }



#include<stdio.h>
//1003
    int main(){
        int A, B, SOMA;

        scanf("%d %d", &A, &B);

        SOMA = A + B;

        printf("SOMA = %d\n", SOMA);

        return 0;
    }


#include<stdio.h>
//1005
    int main(){
        double A, B;

        scanf("%lf %lf", &A, &B);

        printf("MEDIA = %.5lf\n", (A*3.5+B*7.5)/11.0);

        return 0;
    }


#include<stdio.h>
//1009
    int main(){
        char nome[15];
        double sal, vendas;

        scanf("%s %lf %lf", &nome, &sal, &vendas);

        printf("TOTAL = R$ %.2lf\n", sal+0.15*vendas);

        return 0;
    }


#include<stdio.h>
//1010
    int main(){
        int cod1, quant1, cod2, quant2;
        double valor1, valor2;

        scanf("%d %d %lf %d %d %lf", &cod1, &quant1, &valor1, &cod2, &quant2, &valor2);

        printf("VALOR A PAGAR: R$ %.2lf\n", quant1*valor1 + quant2*valor2);

        return 0;
    }
*/
#include<stdio.h>
//1078 - Tabuada
    int main(){
        int num, i;

        scanf("%d", &num);

        for(i=1; i<=10; i++){ //faz o looping de 1 ate 10
            printf("%d x %d = %d\n", i, num, i*num); //imprime a tabuado do num com o i
        }
    }

 
