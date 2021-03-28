#include<stdio.h>
//6 - Neperiano funcao

    double neperiano(int x){
        int i, j;
        double fat, e=1.0;

        for(i=1; i<=x; i++){
            fat=1.0;
            for(j=1; j<=i; j++){
                fat*=j;
            }
            e+=1.0/fat;
        }
        return e;
    }
    void Desenhalinha(){
        for(int i=0; i<20; i++){
            printf("=");
        }
        printf("\n");
    }

    int main(){
        int num;

        Desenhalinha();
        printf("Numero de termos: ");
        scanf("%d", &num);
        printf("Neperiano = %lf\n", neperiano(num));
        Desenhalinha();
    }