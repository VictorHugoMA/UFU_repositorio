#include<stdio.h>
//2 - Data Struct

    struct data{
        int dia, mes, ano;
    };

    int main(){
        int i, maior=0;
        struct data d[3];

        for(i=0; i<3; i++){
            printf("Digite o dia, mes e ano: ");
            scanf("%d %d %d", &d[i].dia, &d[i].mes, &d[i].ano);
            
            if(maior<d[i].ano)
                maior=d[i].ano;
        }

        printf("Maior ano: %d\n", maior);
            
    }