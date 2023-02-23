#include<stdio.h>

    int main(){

        int cont=0;
        float nota, soma=0, media;

        while(1){

            if(cont==2){
                media=soma/2;
                printf("media = %.2f\n", media);
                break;
            }

            scanf("%f", &nota);

            if(nota>=0 && nota<=10){
                soma+=nota;
                cont++;
            }

            else{
                printf("nota invalida\n");
            }
        }
    }
