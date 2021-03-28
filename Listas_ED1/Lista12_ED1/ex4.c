#include<stdio.h>
//4 - Potencia funcao

    int potencia(int x, int n){
        int i, pot=x;

        if(n>=0){
            for(i=1; i<n; i++){ //1 pois ja foi inicializada com x
                pot*=x;
            }
            return pot;
        }
        else
            return 0;
    }

    int main(){
        int x, n;

        printf("Base: ");
        scanf("%d", &x);
        printf("Expoente: ");
        scanf("%d", &n);
        printf("Potencia = %d\n", potencia(x,n));
    }