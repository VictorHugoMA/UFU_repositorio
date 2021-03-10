#include<stdio.h>
//15 - Vetor com valores iguais

    int main(){
        int vet[8], i, j, k, ig[8], aux=1, cont=0;

        printf("<<Valores Iguais>>\n");

        for(i=0; i<8; i++){
            printf("Entre com o numero %d: ", i+1);
            scanf("%d", &vet[i]);

        }

        for(i=0; i<8; i++){
            for(j=i+1; j<8; j++){
                if(vet[i]==vet[j]){
                   for(k=0; k<8; k++){
                       if(vet[i]==ig[k]){
                           aux=0;
                       }
                   }
                   if(aux==1){
                       ig[cont]=vet[i];
                       cont++;
                   }
                }
                aux=1;
            }
        }

        printf("\nValores repetidos:");
        for(i=0; i<cont; i++){
            printf(" %d", ig[i]);
            if(i<cont-1)
                printf(",");
        }
    }