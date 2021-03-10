#include<stdio.h>
//11 - Vetores pares e impares

    int main(){
        int v[5], v1[5], v2[5], i, tp=0, ti=0;

        printf("<<Pares e Impares>>\n");

        for(i=0; i<5; i++){
            printf("Digite o valor %d: ", i+1);
            scanf("%d", &v[i]);

            if(v[i]%2==0){
                v2[tp]=v[i];
                tp++;
            }
                else{
                    v1[ti]=v[i];
                    ti++;
                }
        }

        printf("\nImpares:");
        for(i=0; i<ti; i++){
            printf(" %d", v1[i]);
            if(i<ti-1)
                printf(",");
        }
        
        printf("\nPares:");
        for(i=0; i<tp; i++){
            printf(" %d", v2[i]);
            if(i<tp-1)
                printf(",");
        }
        
    }