#include<stdio.h>
//18 - Conversor velocidade

    int main(){
        float vel;
        char op;

        while(op!='q'){
            printf("<<Conversor>>\n");
            printf("Digite uma opcao\n");
            printf("1 - para converter de km/h para m/s\n");
            printf("2 - para converter de m/s para km/h\n");
            printf("q - para sair\n");
            setbuf(stdin, NULL);
            scanf("%c", &op);

            if(op=='1'){
                printf("Digite a velocidade (km/h): ");
                scanf("%f", &vel);
                printf("A velocidade em m/s e %.2f\n\n", vel/3.6);
            }
            else if(op=='2'){
                printf("Digite a velocidade (m/s): ");
                scanf("%f", &vel);
                printf("A velocidade em km/h e %.2f\n\n", vel*3.6);
            }
        }
    }