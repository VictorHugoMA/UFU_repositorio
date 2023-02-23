#include<stdio.h>

    int main(){
        int N, i, num1, num2, aux;

        scanf("%d", &N);

        if(N==0){
            printf("0\n");
            return 0;
        }

        num1=1;
        num2=1;
        printf("0");

        for(i=1; i<N; i++){
            printf(" %d", num1);

            aux = num1;
            num1 = num2;
            num2= num2 + aux;
        }
        printf("\n");
        return 0;
    }
