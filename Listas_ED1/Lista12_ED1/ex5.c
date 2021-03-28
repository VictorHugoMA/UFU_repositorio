#include<stdio.h>
#include<math.h>
//5 - Quadrado perfeito funcao

    int quadPerf(int x){
        float nr;

        nr=sqrt(x);

        if((nr*nr)==x)
            return 1;
        else
            return 0;
    }

    int main(){
        int num;

        printf("Numero: ");
        scanf("%d", &num);

        if(quadPerf(num))
            printf("Eh quadrado perfeito\n");
        else
            printf("Nao eh quadrado perfeito\n");
    }