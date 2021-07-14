#include<stdio.h>

    int main(){
        int e, n, k, sil=29, a1, aEsc;

        scanf("%d", &e);

        for(int i=0; i<e; i++){
            scanf("%d %d", &n, &k);

            a1 = (sil*k)/n + 1;
            aEsc = sil*k - n + 1;

            printf("%d %d\n", a1, aEsc);
        }


    }