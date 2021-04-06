#include<stdio.h>
//2 - testes ponteiro

    int main(){
        int a = 40;     // cria uma variável do tipo inteiro, chamada a, e inicializa 
                        //  com valor 40 

        int *p;         // cria uma variável do tipo ponteiro para inteiro, chamada p, e o   
                        //conteúdo inicial é lixo

        p = &a;         // faz p receber o endereço de a. Dizemos que p aponta para a

        //a
        printf("\nValor de a = %d\n", a);
        printf("Endereco de a (&a): %d\n", &a);
        printf("Endereco de a (p): %d\n", p);

        //b
        printf("Alterando o valor de a sem &: ");
        scanf("%d", p);
        printf("a = %d\n", a);

        //c
        int val[5] = {2,4,5,8,10};

        int *p2;

        p2=&val[4];

        printf("Alterando o valor de val[4]: ");
        scanf("%d", p2);
        printf("\nVetor modificdo: ");
        for(int i=0; i<5; i++){
            printf("%d ", val[i]);
        }

        //d
        printf("\n\n----Mapa de memoria----\n\n");

        printf("Valor de a = %d\n", a);
        printf("Endereco de a = %d\n\n", &a);

        printf("Valor de p = %d\n", *p);
        printf("Endereco de p = %d\n\n", p);

        for(int i=0; i<5; i++){
            printf("Valor de val[%d] = %d\n", i, val[i]);
            printf("Endereco de val[%d] = %d\n\n", i, &val[i]);
        }


    }