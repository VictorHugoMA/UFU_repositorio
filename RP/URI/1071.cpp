#include<stdio.h>

    int main(){
        int num1, num2, aux, i, soma=0;

        scanf("%d %d", &num1, &num2);

        if(num1>num2){
            aux=num1;
            num1=num2;
            num2=aux;
        }

        for(i=(num1+1); i<num2; i++){
            if(i%2!=0){
                soma+=i;
            }
        }

        printf("%d\n", soma);
    }
