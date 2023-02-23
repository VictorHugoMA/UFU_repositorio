#include<stdio.h>

    int main(){
        int fim, i, j, num, cont;

        scanf("%d", &fim);

        for(i=1; i<=fim; i++){
            cont=0;
            scanf("%d", &num);

            for(j=2; j<=num/2; j++){
                if(num%j==0){
                    cont++;
                    break;
                }
            }
            if(cont==0 && num!=1){
                printf("%d eh primo\n", num);
            }
            else{
                printf("%d nao eh primo\n", num);
            }
        }
        return 0;
    }
