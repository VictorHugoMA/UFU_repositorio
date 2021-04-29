#include<stdio.h>
#include<math.h>
//5 - Quadrado perfeito funcao

    int quadPerf(int x){
        float nr;

        nr=sqrt(x);

        return ((nr*nr)==x);
        
    }

    int main(){
        int num;

        printf("Digite o valor de n: ");
        scanf("%d", &num);

        if(quadPerf(num))
            printf("O numero %d eh um quadrado perfeito", num);
        else
            printf("O numero %d nao eh um quadrado perfeito", num);
            
    }