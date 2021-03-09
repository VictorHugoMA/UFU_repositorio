#include<stdio.h>
//6 - 5 valores com indice

    int main(){
        int vet[5], maior, menor, ima=0, ime=0, soma=0, i;
        float media;

        printf("<<5 valores>>\n");

        for(i=0; i<5; i++){
            printf("Entre com o numero %d: ", i+1);
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

            printf("Os numeros digitados sao: ");
            for(i=0; i<5; i++){
                printf("%d ", vet[i]);
            }
            printf("\nO maior valor e: %d, localizado na posicao %d do vetor\n", maior, ima);
            printf("O menor valor e: %d, localizado na posicao %d do vetor\n", menor, ime);
            printf("A media e: %.1f\n", media);
    }