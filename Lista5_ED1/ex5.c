#include<stdio.h>
//5 - 5 valores

    int main(){
        int vet[5], maior, menor, soma=0, i;
        float media;

        printf("<<5 valores>>\n");

        for(i=0; i<5; i++){
            printf("Entre com o valor %d: ", i+1);
            scanf("%d", &vet[i]);
        }

            maior=vet[0];
            menor=vet[0];

        for(i=0; i<5; i++){
            soma+=vet[i];

            if(vet[i]>maior)
                maior=vet[i];

            if(vet[i]<menor)
                menor=vet[i];

        }
            media=soma/5.0;

            printf("Os numeros digitados sao: ");
            for(i=0; i<5; i++){
                printf("%d ", vet[i]);
            }
            printf("\nO maior valor e: %d\n", maior);
            printf("O menor valor e: %d\n", menor);
            printf("A media e: %.1f\n", media);
    }