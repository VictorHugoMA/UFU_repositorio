#include<stdio.h>

    int main(){
        int i, num, par=0, imp=0, pos=0, neg=0;

        for(i=1; i<=5; i++){
            scanf("%d", &num);

            if(num%2==0){
                par++;
            }
            else if(num%2!=0){
                imp++;
            }
            if(num>0){
                pos++;
            }
            else if(num<0){
                neg++;
            }
        }
        printf("%d valor(es) par(es)\n", par);
        printf("%d valor(es) impar(es)\n", imp);
        printf("%d valor(es) positivo(s)\n", pos);
        printf("%d valor(es) negativo(s)\n", neg);


    }
