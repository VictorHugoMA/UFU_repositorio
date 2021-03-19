#include<stdio.h>
//13 - Zerando negativos 

    int main(){
        int vet[5], i;

        printf("<< Zerando negativos >>\n");
        for(i=0; i<5; i++){
            printf("Entre com o numero %d: ", i+1);
            scanf("%d", &vet[i]);

            if(vet[i]<0)
                vet[i]=0;
        }

        printf("Negativos zerados: ");
        for(i=0; i<5; i++){
            printf("%d ", vet[i]);
        }
    }