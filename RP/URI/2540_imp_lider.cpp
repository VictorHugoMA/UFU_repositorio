#include<stdio.h>

    int main(){
        int jogadores, voto, cont, i;
        float maioria;

        while(scanf("%d", &jogadores) !=EOF){
            cont=0;
            maioria=(2.0/3.0)*(float)jogadores;


            for(i=0; i<jogadores; i++){
                scanf("%d", &voto);
                if(voto==1){
                    cont++;
                }
            }

            if(cont>=maioria){
                printf("impeachment\n");
            }
            else{
                printf("acusacao arquivada\n");
            }
        }

        return 0;
    }
