#include<stdio.h>
//4 - Notas da turma 

    int main(){
        char a1, a2, a3, ama, ame;
        float n1, n2, n3, maior, menor;

        printf("<<Notas da Turma>>\n");
        printf("Entre com o nome do aluno #1: ");
        setbuf(stdin,NULL);
        scanf("%c", &a1);
        printf("Entre com a nota do aluno #1: ");
        scanf("%f", &n1);

        printf("Entre com o nome do aluno #2: ");
        setbuf(stdin,NULL);
        scanf("%c", &a2);
        printf("Entre com a nota do aluno #2: ");
        scanf("%f", &n2);

        printf("Entre com o nome do aluno #3: ");
        setbuf(stdin,NULL);
        scanf("%c", &a3);
        printf("Entre com a nota do aluno #3: ");
        scanf("%f", &n3);

        if(n1>n2 && n1>n3){
            maior = n1;
            ama = a1;
            if(n2>n3){
                menor = n3;
                ame = a3;
            }
                else{
                    menor = n2;
                    ame = a2;
                }
        }
        else if(n1<n2 && n1<n3){
            menor = n1;
            ame = a1;
            if(n2>n3){
                menor = n3;
                ame = a3;
            }
                else{
                    menor = n2;
                    ame = a1;
                }
        }
        else if(n3>n2){
            maior = n3;
            ama = a3;
            menor = n2;
            ame = a2;
        }
        else{
            menor = n3;
            ame = a3;
            maior = n2;
            ama = a2;
        }

        if(n1==n2 && n1==n3)
            printf("Notas iguais: %c tem a maior nota (%.1f)\n", a1, n1);
            else
                printf("%c. tem a maior nota (%.1f) e %c. tem a menor nota (%.1f)\n", ama, maior, ame, menor);
                       
    }