#include<stdio.h>
/*
    int main(){
        int p, j1, j2, r, a;

        scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);

        if(r==1 && a==0){
            printf("Jogador 1 ganha!\n");
        }
        else if(r==0 && a==1){
            printf("Jogador 1 ganha!\n");
        }
        else if((r+a)==2){
            printf("Jogador 2 ganha!\n");
        }

        else if(p==1){
            if((j1+j2)%2==0){
                printf("Jogador 1 ganha!\n");
            }
            else if((j1+j2)%2!=0){
                printf("Jogador 2 ganha!\n");
            }
        }
        else if(p==0){
            if((j1+j2)%2!=0){
                printf("Jogador 1 ganha!\n");
            }
            else if((j1+j2)%2==0){
                printf("Jogador 2 ganha!\n");
            }
        }
        return 0;
    }*/

    int main(){
        int p, j1, j2, r, a, ven, soma;

        scanf("%d %d %d %d %d", &p, &j1, &j2, &r, &a);

            soma=j1+j2;

            if((soma%2==0 && p==1) || (soma%2!=0 && p==0)){
                ven=1;
            }
            else{
                ven=2;
            }
            if((r==1 && a==0) || (r==0 && a==1)){
                ven=1;
            }
            else if(r==1 && a==1){
                ven=2;
            }
        printf("Jogador %d ganha!\n", ven);

        return 0;
    }
