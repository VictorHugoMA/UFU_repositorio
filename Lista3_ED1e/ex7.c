#include<stdio.h>
//7 - Tipo de triangulo 

    int main(){
        int A, B, C, aux;

        printf("Digite os 3 lados do triangulo: ");
        scanf("%d %d %d", &A, &B, &C);

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

        if(A>(B+C) || A<=0 ||B<=0 || C<=0)
            printf("Nao forma triangulo\n");
            else if(A*A == B*B+C*C)
                printf("Triangulo Retangulo\n");
            else if(A*A > B*B+C*C)
                printf("Triangulo Obtusangulo\n");
            else if(A*A < B*B+C*C)
                printf("Triangulo Acutangulo\n");

    }