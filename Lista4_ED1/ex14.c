#include<stdio.h>
//14 - Numeros primos

    int main(){
        int num, cont=0;

        printf("<<Numeros primos>>\n");
        printf("Entre com o valor: ");
        scanf("%d", &num);

        for(int i=2; i<=num/2; i++){
            if(num%i==0){
                cont++;
                break;
            }
        }

        if(cont==0 && num!=1)
            printf("O numero %d e primo\n", num);
        
            else
                printf("O numero %d nao e primo\n", num);
    }