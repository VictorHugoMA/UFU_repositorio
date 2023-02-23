#include<stdio.h>

    int main(){
        double m[12][12], soma=0;
        int i, j, cont=0, inicio=1, fim=10;
        char op;

        scanf("%c", &op);

        for(i=0; i<12; i++){
            for(j=0; j<12; j++){
                scanf("%lf", &m[i][j]);
            }
        }

            for(i=0; i<5; i++){
                for(j=inicio; j<=fim; j++){
                    soma+=m[i][j];
                    cont++;
                }
                inicio++;
                fim--;
            }

        if(op=='S'){
            printf("%.1lf\n", soma);
        }
        else if(op=='M'){
            printf("%.1lf\n", soma/cont);
        }

        return 0;
    }

/*
    int main ()
{
    int inicio=1, fim=10, i, j, cont = 0;
    char op;
    float m[12][12], soma = 0;

    scanf("%c", &op);

    for (i=0; i<12; i++)
        for(j=0; j< 12; j++)
        scanf("%f", &m[i][j]);

    for (i=0; i<5; i++)
    {
        for(j=inicio; j<=fim; j++)
        {
            soma = soma + m[i][j];
            cont++;
        }
        inicio++;
        fim--;
    }
    if (op == 'S')
        printf("%.1f\n",soma);

    if (op == 'M')
    {
        soma = soma/cont;
        printf("%.1f\n",soma);
    }
    return 0;
}
*/
