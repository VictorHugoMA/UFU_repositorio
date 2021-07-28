#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#define true 1
#define false 0

int main(){
    int c[200], n, i, j, num, aux;
    char string[6000];

    scanf("%d", &n);

        for(j=0; j<n; j++){
            scanf("%s", string);

        i = 0;
        memset(c, 0, sizeof(c));

        while (string[i]){
            aux=(int)string[i++];
            c[aux]++;
        }

        for(i=0, num=0; i<200; i++){
            if (c[i] & 1){
                num++;
            }
        }

        printf("%d\n", num <= 1 ? 0 : num - 1);

    }
}