#include<stdio.h>

    int main(){
        float A, B, C, aux;

        scanf("%f %f %f", &A, &B, &C);

        if(A<B){
            aux=B;
            B=A;
            A=aux;
        }
        if(A<C){
            aux=C;
            C=A;
            A=aux;
        }
        if(B<C){
            aux=C;
            C=B;
            B=aux;
        }

        if(A>=B+C)
            printf("NAO FORMA TRIANGULO\n");

        else if(A*A==(B*B+C*C))
            printf("TRIANGULO RETANGULO\n");

        else if(A*A>(B*B+C*C))
            printf("TRIANGULO OBTUSANGULO\n");

        else if(A*A<(B*B+C*C))
            printf("TRIANGULO ACUTANGULO\n");

        if(A==B && A==C)
            printf("TRIANGULO EQUILATERO\n");

        else if(A==B || B==C)
            printf("TRIANGULO ISOSCELES\n");


    }
