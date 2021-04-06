#include<stdio.h>
//1 - Telefone Struct

        struct telefone{
            int ddd, num;
        };
        
    int main(){
        int i;
        struct telefone t[3];

        for(i=0; i<3; i++){
            printf("Digite o DDD e o telefone: ");
            scanf("%d %d", &t[i].ddd, &t[i].num);
        }

        printf("\n");
        for(i=0; i<3; i++){
            printf("Numero %d: (%d) %d\n", i+1, t[i].ddd, t[i].num);
        }
    }