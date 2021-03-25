#include<stdio.h>
#include<string.h>
//6 - Energia Struct

    struct eletro{
        char nome[16];
        float pot, tempo;
    };

    int main(){
        int i, dia;
        struct eletro el[5];
        float consumo[5], consumot=0;

        for(i=0; i<5; i++){
            printf("Digite o nome do eletrodomestico (%d): ", i+1);
            setbuf(stdin, NULL);
            gets(el[i].nome);
            printf("Digite a potencia (%d): ", i+1);
            scanf("%f", &el[i].pot);
            printf("Digite o tempo ativo por dia (%d): ", i+1);
            scanf("%f", &el[i].tempo);
            printf("\n");

            consumo[i]=el[i].pot*el[i].tempo;
            consumot+=consumo[i];
        }

        printf("Valor de tempo(dias): ");
        scanf("%d", &dia);

        printf("Consumo total da casa no periodo: %.1f kWh\n",consumot*dia);

        for(i=0; i<5; i++){
            printf("Consumo relativo do(a) %s: %.1f%%\n", el[i].nome, ((consumo[i]*dia)/(consumot*dia))*100.0);
        }



    }