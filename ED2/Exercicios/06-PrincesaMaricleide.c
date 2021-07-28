#include<stdio.h>
#include<stdlib.h>
 
    int main(){
        int i, j, k, fim, n, total, prim, seg;
        int *moedas;

        scanf("%d", &fim);

        for(i=0; i<fim; i++){
            scanf("%d", &n);

            if(n==0)
                printf("Caso %d: %d\n", i+1, 0);
            else{
            
            prim = 0;
            seg = 0;
            
            moedas = malloc(n*sizeof(int));

            for(j=0; j<n; j++){
                scanf("%d", &moedas[j]);
            }

                if(n==1)
                    printf("Caso %d: %d\n", i+1, moedas[0]);

                else if(n==2){
                    if(moedas[0]<moedas[1])
                        printf("Caso %d: %d\n", i+1, moedas[1]);
                    else
                        printf("Caso %d: %d\n", i+1, moedas[0]);
                }
                else{
                    for(k=0; k<n; k+=2){
                        prim+=moedas[k];
                    }
                    for(k=1; k<n; k+=2){
                        seg+=moedas[k];
                    }

                        if(seg>prim)
                            total = seg;
                        else
                            total=prim;
                    
                    printf("Caso %d: %d\n", i+1, total);

                }
        
                free(moedas);
            }
        }
        
    }