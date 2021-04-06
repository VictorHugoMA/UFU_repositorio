#include<stdio.h>
#include<string.h>
//4 - Cadastro Struct

    struct endereco{
        char rua[20], compl[20], cidade[20], estado[3], cep[10];
        int numero;
    };
    struct data{
        int dia, mes, ano;
    };
    struct telefone{
        int ddd, num;
    };

    typedef struct cadastro{
        char nome[20], cpf[15], sexo[2], est_civil[10], ident[15];
        float salario;
        struct endereco com;
        struct endereco cas;
        struct telefone pes;
        struct telefone res;
        struct data nasc;
        struct data ing;
    }cadastro;

    int menu(){
        int op;
        printf("\n\n=======Menu=======\n\n");
        printf("1 - Listar todos os clientes\n");
        printf("2 - Cadastrar/Sobrescrever novo cliente\n");
        printf("3 - Listar quem nasceu depois de 1990\n");
        printf("4 - Copiar de um cadastro para outro\n");
        printf("0 - Sair\n\n");
        printf("Escolha uma opcao valida: ");
        scanf("%d", &op);

        return op;
    }
    void imprimeCad(cadastro *cad){
        int i;
        for(i=0; i<5; i++){
            printf("Nome %d: %s\n", i+1, *cad[i].nome);
            printf("CPF %d: %d\n", i+1, *cad[i].cpf);
            printf("Sexo %d: %s\n", i+1, *cad[i].sexo);
            printf("Estado civil %d: %s\n", i+1, *cad[i].est_civil);
            printf("Salario %d: %.2f\n", i+1, cad[i].salario);
        }
        printf("\n\n");

    }

    int main(){
        cadastro *cad;
        int op;

        cad=(cadastro *)calloc(5, sizeof(cadastro));

        cad[0].nasc.ano = 1990;
        cad[0].salario=500;

        printf("Ano %d\n", cad[0].nasc.ano);

        do{
            op=menu();
            switch(op){
            case 0:
                break;
            case 1:
                imprimeCad(cad);
                break;
            
            default:
                printf("Opcao Invalida\n");
            }
        }
        while(op!=0);

        
        free(cad);
    }
