#include<stdio.h>
//4 - Leitura de vetor par

    int main(){
        int vet[6], i=0;

        printf("<< Listando um vetor de numeros pares >>\n");

        while(i<6){
            printf("Entre com o numero %d: ", i+1);
            scanf("%d", &vet[i]);

            if(vet[i]%2==0)
                i++;
                else 
                    printf("Erro: Valor invalido\n\n");
        }
            printf("Os numeros pares digitados foram: ");
            for(i=0; i<6; i++){
                printf("%d ", vet[i]);
            }
    }