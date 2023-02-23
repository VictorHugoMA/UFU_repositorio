#include<stdio.h>

    int main(){
        int f, i, vel, aux;

        while(scanf("%d", &f) != EOF){

            aux=0;

            for(i=0; i<f; i++){
                scanf("%d", &vel);

                    if(aux < vel){
                        aux=vel;
                    }
            }
            if(aux<10){
                printf("1\n");
            }
            else if(aux<20){
                printf("2\n");
            }
            else{
                printf("3\n");
            }
        }

        return 0;
    }
