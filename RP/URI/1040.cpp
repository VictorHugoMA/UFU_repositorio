#include<stdio.h>

    int main(){
        float n1, n2, n3, n4, media, ex, mediaf;

        scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

        media =(n1*2+n2*3+n3*4+n4*1)/10;

        printf("Media: %.1f\n", media);v

        if(media>=7.0){
            printf("Aluno aprovado.\n");
        }
        else if(media<5.0){
            printf("Aluno reprovado.\n");
        }
        else if(5.0<=media<=6.9){
            printf("Aluno em exame.\n");
            scanf("%f", &ex);
            printf("Nota do exame: %.1f\n", ex);

            mediaf = (media+ex)/2;

                if(mediaf>=5.0){
                    printf("Aluno aprovado.\n");
                }
                else{
                    printf("Aluno reprovado.\n");
                }
            printf("Media final: %.1f\n", mediaf);
        }

    }
