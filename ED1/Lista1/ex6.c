    #include<stdio.h>
    //6 - Loteria 

        int main(){
            float total;
        
            printf("<< Loteria >>\n");
            printf("Valor total do premio: ");
            scanf("%f", &total);
            printf("Primeiro vencedor: %.0f\n", 0.46*total);
            printf("Segundo vencedor: %.0f\n", 0.32*total);
            printf("Terceiro vencedor: %.0f\n", 0.22*total);

        }