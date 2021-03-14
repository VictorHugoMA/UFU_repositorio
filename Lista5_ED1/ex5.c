#include<stdio.h>
//5 - 5 valores

    int main(){
        int vet[5], maior, menor, soma=0, i;
        float media;

        printf("<< Five Values >>\n");

        for(i=0; i<5; i++){
            printf("Imput #%d: ", i+1);
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

            printf("\nThe numbers entered are: ");
            for(i=0; i<5; i++){
                printf("%d ", vet[i]);
            }
            printf("\nMax. Value: %d\n", maior);
            printf("Min. Value: %d\n", menor);
            printf("Mean: %.1f\n", media);
    }