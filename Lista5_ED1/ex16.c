#include<stdio.h>
//16 - Vetor com valores iguais 2

    int main(){
        int vet[8], i, j, k, ig[8], aux=1, cont=0, qig[8];
        qig[0]=1;
        qig[1]=1;
        qig[2]=1;
        qig[3]=1;
        

        printf("<<Valores Iguais>>\n");

        for(i=0; i<8; i++){
            printf("Entre com o numero %d: ", i+1);
            scanf("%d", &vet[i]);

        }
        for(i=0; i<8; i++){
            for(j=i+1; j<8; j++){
                if(vet[i]==vet[j]){
                   for(k=0; k<8; k++){
                       if(vet[i]==ig[k]){
                        qig[vet[i]]+=1;
                           aux=0;
                       }
                   }
                   if(aux==1){
                       ig[cont]=vet[i];
                       cont++;
                   }
                }
                aux=1;
                
            }
        }
      
        printf("\nValores repetidos:\n");
        for(i=0; i<cont; i++){
            printf("%d aparece %d vezes\n", ig[i], qig[ig[i]]);
        }
    }