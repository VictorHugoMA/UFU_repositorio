    #include<stdio.h>
    //7 - Pagamento encanador 

        int main(){
            int dia;
            float vb;

            printf("<<Pagamento encanador>>\n");
            printf("Digite o numero de dias trabalhados: ");
            scanf("%d", &dia);

            vb = dia*30;

            printf("Valor bruto R$: %.2f\n", vb);
            printf("Valor liquido R$: %.2f\n", vb*0.88);
            printf("ISS R$: %.2f\n", vb*0.04);
            printf("IR R$: %.2f\n", vb* 0.08);

        }