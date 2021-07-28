#include<stdio.h>
#include<string.h>

    int main(){
        int n, i, anoC, tempV, anoS, menorA;
        char planeta[50], menors[50];

        do{
            scanf("%d", &n);

            for(i=0; i<n; i++){
                scanf("%s %d %d", planeta, &anoC, &tempV);

                anoS = anoC-tempV;

                if(i==0 || menorA>anoS){
                    menorA=anoS;
                    strcpy(menors, planeta);
                }
            }
            if(n!=0)
                printf("%s\n", menors);            
        }
        while (n!=0);
        
    }