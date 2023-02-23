#include<stdio.h>

    int main(){
        int X, Z, i, soma=0, cont=0;

        scanf("%d", &X);

        do{
            scanf("%d", &Z);
        }
        while(Z<=X);

        for(i=X; ; i++){
            soma+=i;
            cont++;

            if(soma>Z){
                break;
            }
        }
        printf("%d\n", cont);

        return 0;
    }
