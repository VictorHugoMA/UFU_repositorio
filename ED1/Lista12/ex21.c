#include<stdio.h>
//21 - Multiplicacao de vetor Funcao

    void multvet(int *vet, int n, int escalar){
        for(int i=0; i<n; i++){
            vet[i]*=escalar;
        }
    }

    int main(){
        int i, *p, n, esc;

        printf("Digite o tamanho do vetor: ");
        scanf("%d", &n);

        p=(int *)malloc(n*sizeof(int));

        for(i=0; i<n; i++){
            printf("Digite o valor %d: ", i+1);
            scanf("%d", &p[i]);
        }
        printf("Digite o valor do escalar: ");
        scanf("%d", &esc);

        printf("\n");
        printf("O vetor de origem eh:");
        for(i=0; i<n-1; i++){
            printf(" %d,", p[i]);
        }
        printf(" %d", p[i]);

        multvet(p, n, esc);

        printf("\n");
        printf("O vetor final eh:");
        for(i=0; i<n-1; i++){
            printf(" %d,", p[i]);
        }
        printf(" %d", p[i]);

        free(p);


    }