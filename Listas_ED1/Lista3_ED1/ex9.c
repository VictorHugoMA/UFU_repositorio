#include<stdio.h>
//9 - Tabela de vendas

    int main(){
        float venda;

        printf("Digite o valor da venda: ");
        scanf("%f", &venda);

        printf("Comissao R$: ");

        if(venda<20000)
            printf("%.2f\n", 400+0.14*venda);
            else if(venda<40000)
                printf("%.2f\n", 500+0.14*venda);
            else if(venda<60000)
                printf("%.2f\n", 550+0.14*venda);
            else if(venda<80000)
                printf("%.2f\n", 600+0.14*venda);
            else if(venda<100000)
                printf("%.2f\n", 650+0.14*venda);
                else
                    printf("%.2f\n", 700+0.16*venda);
    }