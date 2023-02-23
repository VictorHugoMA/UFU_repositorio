/*
#include<stdio.h>


    int main(){
        int X, Y; //neste caso nao precisa do i(contador)

        while(X!=Y){ //enquanto x for diferente de y continua o loop
            scanf("%d %d", &X, &Y);

            if(X<Y)
                printf("Crescente\n");
    
            if(X>Y)
                printf("Decrescente\n");
        }

    }
*/

#include<stdio.h>
    int main(){
        int x, y;

        while(1){
            scanf("%d %d", &x, &y);

            if(x==y){
                break;
            }
            else{
                if(y>x){
                    printf("Crescente\n");
                }
                else{
                    printf("Decrescente\n");
                }
            }
        }
    }







