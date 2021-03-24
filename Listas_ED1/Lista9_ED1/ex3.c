#include<stdio.h>
#include<string.h>
//3 - Endereco Struct

    struct endereco{
        char rua[20], compl[20], cidade[20], estado[3], cep[10];
        int numero;
    };

    int main(){
        int i;
        struct endereco end[3];
        char mg[3] ="MG";

        for(i=0; i<3; i++){
            printf("Endereco %d\n", i+1);

            printf("Rua: ");
            gets(end[i].rua);

            printf("Numero: ");
            scanf("%d", &end[i].numero);
            
            setbuf(stdin, NULL);
            printf("Complemento: ");
            gets(end[i].compl);
            
            printf("Cidade: ");
            gets(end[i].cidade);

            printf("Estado(abrev.): ");
            fgets(end[i].estado, 4, stdin);
            end[i].estado[strcspn(end[i].estado, "\n")] = '\0'; 

            setbuf(stdin, NULL);
            printf("CEP: ");
            gets(end[i].cep);
        }

        for(i=0; i<3; i++){
            if(strcmp(end[i].estado, mg)==0){
                printf("\nEndereco em MG\n");
                printf("Rua: %s\n", end[i].rua);
                printf("Numero: %d\n", end[i].numero);
                printf("Complemento: %s\n", end[i].compl);
                printf("Cidade: %s\n", end[i].cidade);
                printf("Estado: %s\n", end[i].estado);
                printf("CEP: %s\n", end[i].cep);
    
            }
        }
    }
    