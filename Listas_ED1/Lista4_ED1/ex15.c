#include<stdio.h>
#include<math.h>
//15 - Conversor binario decimal

    int main(){
        int fim, i, j, bits[20], dec=0;

        printf("<<Conversor binario-decimal>>\n");
        printf("Entre com o numero de bits: ");
        scanf("%d", &fim);

        for(i=0; i<fim; i++){
            printf("Digite o bit # %d: ", i+1);
            scanf("%d", &bits[i]);
        }

        for(i=0, j=fim-1; i<fim, j>=0; i++, j--){
            dec+=bits[i]*(pow(2, j));
        }

            printf("O numero binario ");
            for(i=0; i<fim; i++){
                printf("%d", bits[i]);
            }
            printf(" em decimal e %d\n", dec);

    }

       