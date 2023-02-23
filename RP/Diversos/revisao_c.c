/*#include<stdio.h>

    int main(){
        double r;

        scanf("%lf", &r);

        printf("A=%.4lf\n", 3.14159*r*r);

        return 0;
    }



#include<stdio.h>

    int main(){
        int A, B, SOMA;

        scanf("%d %d", &A, &B);

        SOMA = A + B;

        printf("SOMA = %d\n", SOMA);

        return 0;
    }

#include<stdio.h>

    int main(){
        int x, y, PROD;

        scanf("%d %d", &x, &y);

        PROD = x * y;

        printf("PROD = %d\n", PROD);

        return 0;
    }

#include<stdio.h>

    void main(){
        double A, B;

        scanf("%lf %lf", &A, &B);

        printf("MEDIA = %.5lf\n", (A*3.5+B*7.5)/11);

    }


#include<stdio.h>

    void main(){
        double A, B, C;

        scanf("%lf %lf %lf", &A, &B, &C);

        printf("MEDIA = %.1lf\n", (A*2+B*3+C*5)/10);

    }


#include<stdio.h>

    int main(){
        int A, B, C, D;

        scanf("%d %d %d %d", &A, &B, &C, &D);

        printf("DIFERENCA = %d\n", (A*B-C*D));

        return 0;
    }

#include<stdio.h>

    int main(){
        int num, hrs;
        double val;

        scanf("%d %d %lf", &num, &hrs, &val);

        printf("NUMBER = %d\n", num);
        printf("SALARY = U$ %.2lf\n", val*hrs);

        return 0;
    }
    *//*

#include<stdio.h>

    int main(){
        char nome[15];
        double fixo, vendas;

        scanf("%s %lf %lf", nome, &fixo, &vendas);


        printf("TOTAL = R$ %.2lf\n", (vendas*0.15) + fixo);

        return 0;
    }
*/

#include<stdio.h>

    int main(){
      int cod1, num1, cod2, num2;
      double val1, val2;

      scanf("%d %d %lf", &cod1, &num1, &val1);
      scanf("%d %d %lf", &cod2, &num2, &val2);

      printf("VALOR A PAGAR: R$ %.2lf\n", num1*val1+num2*val2);

      return 0;
    }
