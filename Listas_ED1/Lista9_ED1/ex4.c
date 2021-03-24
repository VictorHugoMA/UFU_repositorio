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

    struct cadastro{
        char nome[20], cpf[15], sexo[2], est_civil[10], ident[15];
        int salario;
        struct endereco com;
        struct endereco cas;
        struct telefone pes;
        struct telefone res;
        struct data nasc;
        struct data ing;
    };

    int main(){
        struct cadastro cad;

        cad.nasc.ano = 1990;

        printf("Ano %d\n", cad.nasc.ano);
    }
