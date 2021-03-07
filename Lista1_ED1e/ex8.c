    #include<stdio.h>
    //8 - Pagamento encanador 2

        int main(){
            int dia;
            float vb, vl;

            printf("<<Pagamento encanador>>\n");
            printf("Digite o numero de dias trabalhados: ");
            scanf("%d", &dia);
            
            vb = dia*30;

            printf("Valor bruto R$: %.2f\n", vb);

            vl = (vb*0.96)*0.92;

            printf("Valor liquido R$: %.2f\n", vl);
            printf("ISS R$: %.2f\n", vb*0.04);
            printf("IR R$: %.2f\n", (vb*0.96)*0.08);
        }