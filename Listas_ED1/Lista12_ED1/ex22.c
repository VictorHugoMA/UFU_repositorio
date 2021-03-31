#include<stdio.h>
#include<math.h>
//22 - Valor absoluto Funcao

    void abs_vet(int *vet, int n){
        for(int i=0; i<n; i++){
            vet[i]=abs(vet[i]);
        }
    }

    int main(){
        int i, *p, n;

        printf("Digite o tamanho do vetor: ");
        scanf("%d", &n);

        p=(int *)malloc(n*sizeof(int));

        for(i=0; i<n; i++){
            printf("Digite o valor %d: ", i+1);
            scanf("%d", &p[i]);
        }

        printf("\n");
        printf("O vetor de origem eh:");
        for(i=0; i<n-1; i++){
            printf(" %d,", p[i]);
        }
        printf(" %d", p[i]);

        abs_vet(p, n);

        printf("\n");
        printf("O vetor com valores absolutos eh:");
        for(i=0; i<n-1; i++){
            printf(" %d,", p[i]);
        }
        printf(" %d", p[i]);

        free(p);
    }