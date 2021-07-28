#include<stdio.h>

    int main(){
        int e, n, k, sil=29, a1, aEsc;

        scanf("%d", &e);

        for(int i=0; i<e; i++){
            scanf("%d %d", &n, &k);

            aEsc = (sil*k)%n + 1;


            if(sil*k==n || n==1)
                a1 = (sil*k)/n;

            else if(sil*k>n)
                a1 = (sil*k)/n + 1;
                
            else{
                a1=1;
                aEsc=sil*k+1;
            }

            printf("%d %d\n", a1, aEsc);
        }


    }