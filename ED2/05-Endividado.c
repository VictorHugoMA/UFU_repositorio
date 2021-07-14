#include<stdio.h>

    int main(){
        int n, i, val, total, cont;

        do{
            total=0, cont=0;

            scanf("%d", &n);
            for(i=0; i<n; i++){
                scanf("%d", &val);
                total+=val;

                if(total%100==0){
                    cont++;
                }
            }

            if(n!=-1)
                printf("%d\n", cont);            
        }
        while(n!=-1);
    }