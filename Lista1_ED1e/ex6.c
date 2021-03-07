    #include<stdio.h>
    //6 - Loteria 

        int main(){
            float total = 780000;
        
            printf("<<Loteria>>\n");
            printf("Valor total do premio: %.2f\n", total);
            printf("Primeiro vencedor: %.2f\n", 0.46*total);
            printf("Segundo vencedor: %.2f\n", 0.32*total);
            printf("Terceiro vencedor: %.2f\n", 0.22*total);

        }