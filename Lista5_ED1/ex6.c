#include<stdio.h>
//6 - 5 valores com indice

    int main(){
        int vet[5], maior, menor, ima=0, ime=0, soma=0, i;
        float media;

        printf("<< Five Values with index >>\n");

        for(i=0; i<5; i++){
            printf("Imput #%d: ", i+1);
            scanf("%d", &vet[i]);
        }

            maior=vet[0];
            menor=vet[0];

        for(i=0; i<5; i++){
            soma+=vet[i];

            if(vet[i]>maior){
                maior=vet[i];
                ima=i;
            }

            if(vet[i]<menor){
                menor=vet[i];
                ime=i;
            }
        }
            media=soma/5.0;

            printf("\nThe numbers entered are: ");
            for(i=0; i<5; i++){
                printf("%d ", vet[i]);
            }
            printf("\nMax. Value: %d, index %d of the array\n", maior, ima);
            printf("Min. Value: %d, index %d of the array\n", menor, ime);
            printf("Mean: %.1f\n", media);
    }