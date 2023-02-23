#include<stdio.h>

    int main(){
        long long int A, B, C, aux;

        scanf("%lld %lld %lld", &A, &B, &C);

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

        if(A>=B+C){
            printf("Invalido\n");
        }
        else{

            if(A==B && B==C)
                printf("Valido-Equilatero\n");

            else if(A!=B && B!=C && C!=A)
                printf("Valido-Escaleno\n");

            else if(A==B || B==C)
                printf("Valido-Isoceles\n");


            if(A*A==(B*B+C*C))
                printf("Retangulo: S\n");
            else
                printf("Retangulo: N\n");

        }
        return 0;
    }
