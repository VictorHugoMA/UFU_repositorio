#include<stdio.h>
//3 - Pares e impares Aloc dinamica

    int main(){
        int *p, n, i, tp=0, ti=0;

        printf("Digite a quantidade de valores: ");
        scanf("%d", &n);

        p=(int *)malloc(n*sizeof(int));

        for(i=0; i<n; i++){
            printf("Digite o valor %d: ", i+1);
            scanf("%d", &p[i]);

            if(p[i]%2==0)
                tp+=1;
            else
                ti+=1;

        }

        printf("Quantidade de pares: %d\n", tp);
        printf("Quantidade de impares: %d\n", ti);
    }