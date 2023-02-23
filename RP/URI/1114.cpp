#include<stdio.h>

    int main(){
        int senha;

        while(1){
            scanf("%d", &senha);

            if(senha!=2002){
                printf("Senha Invalida\n");
            }
            else{
                printf("Acesso Permitido\n");
                break;
            }
        }


    }
