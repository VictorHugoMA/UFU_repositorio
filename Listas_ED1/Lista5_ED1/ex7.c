#include<stdio.h>
//7 - Notas normalizadas

    int main(){
        int i;
        float nota[5], maior=0, r;
        
        printf("<< Normalizando as notas >>\n");
        for(i=0; i<5; i++){
            printf("Entre com a nota do aluno %d: ", i+1);
            scanf("%f", &nota[i]);
            if(nota[i]>maior)
                maior=nota[i];
        }

        r=100/maior;

        printf("\nNotas normalizadas\n");
        for(i=0; i<5; i++){
            printf("A nota do aluno %d e %.0f\n", i+1, nota[i]*r);
        }
    }