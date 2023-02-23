#include<stdio.h>

    int media();

    int main(){

        media();

    }


    int media(){
        float nota, total=0;
        int X=0, cont=0;


        while(cont!=2){

            scanf("%f", &nota);

            if(nota>=0.0 && nota<=10.0){
                total+=nota;
                cont++;
            }
            else{
                printf("nota invalida\n");
            }
        }

        cont=0;
        printf("media = %.2f\n", total/2);
        X=0;

        do{
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &X);

            if(X==1){

                media();

            }

        }

        while((X!=1) && (X!=2));

    }



