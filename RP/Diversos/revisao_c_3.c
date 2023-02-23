/*#include<stdio.h>

    int main(){
        int A, B, C, D;

        scanf("%d %d %d %d", &A, &B, &C, &D);

        if(B>C && D>A && (C+D)>(A+B) && C>=0 && D>=0 && A%2==0)
            printf("Valores aceitos\n");
        else
            printf("Valores nao aceitos\n");

    return 0;
    }*/
#include<stdio.h>

    int main(){
        int cod, quant;

        scanf("%d %d", &cod, &quant);

            if(cod==1)
                printf("Total: R$ %.2f\n", quant*4.0);
            else if(cod==2)
                printf("Total: R$ %.2f\n", quant*4.5);
            else if(cod==3)
                printf("Total: R$ %.2f\n", quant*5.0);
            else if(cod==4)
                printf("Total: R$ %.2f\n", quant*2.0);
            else if(cod==5)
                printf("Total: R$ %.2f\n", quant*1.5);

    return 0;
    }
