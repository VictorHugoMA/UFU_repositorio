#include<stdio.h>
//3 - Fatorial e linha funcao

    int fatorial(int x){
        int i, total=1;

        for(int i=x; i>=1; i--){
            total*=i;
        }
        return total;
    }
    void Desenhalinha(){
        for(int i=0; i<15; i++){
            printf("=");
        }
        printf("\n");
    }

    int main(){
        int x;

        Desenhalinha();
        printf("Numero: ");
        scanf("%d", &x);
        x = fatorial(x);
        printf("Fatorial = %d\n", x);
        Desenhalinha();
    }