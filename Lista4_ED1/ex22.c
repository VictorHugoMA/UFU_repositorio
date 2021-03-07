#include<stdio.h>
//22 - Fatorial 2

    int main(){
            int i, j;
            long long int total=1;

            for(i=10; i<=15; i++){
                for(j=i; j>=1; j--){
                    total*=j;
                }
                printf("%d! = %lld\n", i, total);
                total=1;
            }
        }
        /*foi necessario a utilizacao do long long int para a solucao 
        do problema, pois o int nao comporta numeros tao grandes quanto 15! */