   #include<stdio.h>
    //5 - Aumento Salarial

        int main(){
            float sal; 

            printf("<<Aumento Salarial>>\n");
            printf("Digite o valor do salario R$: ");
            scanf("%f", &sal);
            printf("Apos 25%% de aumento o salario fica em  R$ %.2f.\n", sal*1.25);
        }