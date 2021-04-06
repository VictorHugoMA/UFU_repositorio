#include<stdio.h>
//10 - Subtracao de vetor

    int main(){
        int a[3], b[3], c[3], i;

        printf("<< Subtracao de vetores >>\n");

        for(i=0; i<3; i++){
            printf("Digite o valor %d de A: ", i+1);
            scanf("%d", &a[i]);
        }
        printf("\n");

        for(i=0; i<3; i++){
            printf("Digite o valor %d de B: ", i+1);
            scanf("%d", &b[i]);
        }
        printf("\n");

        for(i=0; i<3; i++){
            c[i]=a[i]-b[i];
        }

        printf("O vetor C, definido como C = A-B: (%d, %d, %d)\n", c[0], c[1], c[2]);
    }