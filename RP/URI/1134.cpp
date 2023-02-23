#include<stdio.h>


    int main(){
        int tipo, diesel=0, gasolina=0, alcool=0;

        while(1){
            scanf("%d", &tipo);

            if(tipo==4){
                break;
            }
            else if(tipo==3){
                diesel+=1;
            }
            else if(tipo==2){
                gasolina+=1;
            }
            else if(tipo==1){
                alcool+=1;
            }
        }
        printf("MUITO OBRIGADO\n");
        printf("Alcool: %d\n", alcool);
        printf("Gasolina: %d\n", gasolina);
        printf("Diesel: %d\n", diesel);

    }
