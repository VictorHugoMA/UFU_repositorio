#include<stdio.h>

    int main(){
        int cont=1, fim, num, i, soma;

        scanf("%d", &fim);

        while(cont<=fim){
            soma=0;

            scanf("%d", &num);

            for(i=1; i<num; i++){
                if(num%i==0){
                    soma+=i;
                }
            }
            if(soma==num){
                printf("%d eh perfeito\n", num);
            }
            else{
                printf("%d nao eh perfeito\n", num);
            }

            cont++;

        }
        return 0;
    }
