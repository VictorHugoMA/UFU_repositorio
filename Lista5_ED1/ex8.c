#include<stdio.h>
#include<math.h>
//8 - Media e desvio padrao

    int main(){
        int i;
        double vet[5], soma=0, media, dp;

        printf("<<Media e desvio-padrao>>\n");
        
        for(i=0; i<5; i++){
            printf("Digite o valor %d: ", i+1);
            scanf("%lf", &vet[i]);

            soma+=vet[i];
        }

        media=soma/5.0;
        dp=sqrt(((vet[0]-media)*(vet[0]-media)+(vet[1]-media)*(vet[1]-media)+(vet[2]-media)*(vet[2]-media)+(vet[3]-media)*(vet[3]-media)+(vet[4]-media)*(vet[4]-media))/4.0);

        printf("A media e %.1lf e o desvio-padrao e %lf\n", media, dp);

    }