#include<stdio.h>
//3 - Venda com Imposto

    int main(){
        int cod;
        float valor;

        printf("<<Valor do Produto com imposto>>\n");
        printf("Digite o valor do produto R$: ");
        scanf("%f", &valor);
        printf("Digite a unidade de federacao: ");
        scanf("%d", &cod);

        if(cod==1)
            printf("Valor final com imposto R$: %.2f\n", valor*1.07); 
            else if(cod==2)
                printf("Valor final com imposto R$: %.2f\n", valor*1.12); 
            else if(cod==3)
                printf("Valor final com imposto R$: %.2f\n", valor*1.15); 
            else if(cod==4)
                printf("Valor final com imposto R$: %.2f\n", valor*1.08); 
                else
                    printf("Codigo invalido\n");

                
    }