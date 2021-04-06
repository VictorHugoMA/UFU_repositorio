#include<stdio.h>
#include<math.h>
//23 - Funcao e Aloc dinamica

    void maior_menor_vet(int *vet, int n, int *maior, int *menor);
    int negativos(int *vet, int n);
    void abs_vet(int *vet, int n);
    void copiarvet(int *vet, int *vet2, int n);
    void multvet(int *vet, int n, int escalar);

    int main(){
        int i, n, maior, menor, esc;
        int *p, *p2;

        printf("Entre com o tamanho do vetor: ");
        scanf("%d", &n);

        p=(int *)malloc(n*sizeof(int));
        p2=(int *)malloc(n*sizeof(int));


        for(i=0; i<n; i++){
            printf("Entre com o elemento %d: ", i+1);
            scanf("%d", &p[i]);
        }

        maior=p[0];
        menor=p[0];

        printf("\n");
        printf("Vetor:");
        for(i=0; i<n-1; i++){
            printf(" %d,", p[i]);
        }
        printf(" %d\n", p[i]);

        maior_menor_vet(p, n, &maior, &menor); //Funcao maior e menor 
        printf("Maior: %d   Menor: %d\n", maior, menor);

        printf("Numero de negativos: %d\n", negativos(p, n)); //Funcao negativos

        abs_vet(p, n); //Funcao valor absoluto


        printf("\nCopiando para outro vetor (alocado dinamincamente)\n");
        copiarvet(p, p2, n); //Funcao copia vetor
        printf("\nVetor original:");
        for(i=0; i<n-1; i++){
            printf(" %d,", p[i]);
        }
        printf(" %d\n", p[i]);

        printf("Vetor copiado:");
        for(i=0; i<n-1; i++){
            printf(" %d,", p2[i]);
        }
        printf(" %d\n", p2[i]);

        printf("\nEntre com o valor escalar para multiplicar o vetor original: ");
        scanf("%d", &esc);
        multvet(p, n, esc); //Funcao multiplica vetor

        printf("\nVetor original:");
        for(i=0; i<n-1; i++){
            printf(" %d,", p[i]);
        }
        printf(" %d\n", p[i]);

        printf("Vetor copiado:");
        for(i=0; i<n-1; i++){
            printf(" %d,", p2[i]);
        }
        printf(" %d", p2[i]);

        free(p);
        free(p2);

    }
    void maior_menor_vet(int *vet, int n, int *maior, int *menor){

        for(int i=0; i<n; i++){
            if(*maior<vet[i])
                *maior=vet[i];

            if(*menor>vet[i])
                *menor=vet[i];
        }
    }

    int negativos(int *vet, int n){
        int total=0;

        for(int i=0; i<n; i++){
            if(vet[i]<0){
                total+=1;
            }
        }
        return total;
    }

    void abs_vet(int *vet, int n){
        int i;

        printf("Vetor absoluto:");
        for(i=0; i<n-1; i++){
            printf(" %d,",abs(vet[i]));
        }
        printf(" %d\n", abs(vet[i]));
    }

    void copiarvet(int *vet, int *vet2, int n){
        for(int i=0; i<n; i++){
            vet2[i]=vet[i];
        }
    }

    void multvet(int *vet, int n, int escalar){
        for(int i=0; i<n; i++){
            vet[i]*=escalar;
        }
    }