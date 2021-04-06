#include<stdio.h>
//3 - Fatorial e linha funcao

    int fatorial(int x){
        int i, total=1;

        for(int i=x; i>=1; i--){
            total*=i;
        }
        return total;
    }
    void Desenhalinha(int n){
        for(int i=0; i<n; i++){
            printf("=");
        }
        printf("\n");
    }

    int main(){
        int x, n;

        printf("Digite o tamanho da linha: ");
        scanf("%d", &n);
        printf("Digite o numero que deseja calcular o fatorial: ");
        scanf("%d", &x);
        Desenhalinha(n);
        printf("O fatorial de %d eh %d\n", x, fatorial(x));
        Desenhalinha(n);
        
    }