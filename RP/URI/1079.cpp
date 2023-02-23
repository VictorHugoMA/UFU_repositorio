#include<stdio.h>

    int main(){
        int fim, i;
        float nota1, nota2, nota3;

        scanf("%d", &fim);

        for(i=1; i<=fim; i++){
            scanf("%f %f %f", &nota1, &nota2, &nota3);
            printf("%.1f\n", (nota1*2.0+nota2*3.0+nota3*5.0)/10.0);

        }

    }

    /*#include<stdio.h>

    int main(){
        int fim, i;
        float nota1, nota2, nota3, total, media;

        scanf("%d", &fim);

        for(i=1; i<=fim; i++){
            scanf("%f %f %f", &nota1, &nota2, &nota3);

            total=nota1*2.0+nota2*3.0+nota3*5.0;
            media=total/10.0;
            printf("%.1f\n", media);
        }
        return 0;

    }
*/

