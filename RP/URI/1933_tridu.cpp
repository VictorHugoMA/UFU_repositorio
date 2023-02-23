#include<stdio.h>

    int main(){
        unsigned short int A, B, temp;

        scanf("%hu %hu", &A, &B);

            if(A<B){
                temp=A;
                A=B;
                B=temp;
            }

        printf("%hu\n", A);

    return 0;
    }


#include<stdio.h>

    int f2(){
        unsigned short int A, B;

        scanf("%hu %hu", &A, &B);

            if(A>B)
                printf("%hu\n", A);

            else
                printf("%hu\n", B);

    return 0;
    }
