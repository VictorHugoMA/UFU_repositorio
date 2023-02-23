#include<stdio.h>

    int main(){
        int X, soma, i;

        while(1){
            soma=0;
            scanf("%d", &X);

            if(X==0){
                break;
            }
            else{
                for(i=X; i<X+10; i++){
                    if(i%2==0){
                        soma+=i;
                    }
                }
                printf("%d\n", soma);
            }
        }
        return 0;
    }
