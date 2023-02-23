#include<stdio.h>

    int main(){
        int fim, inicial, dif;

        scanf("%d %d", &fim, &inicial);

            if (fim==inicial){
                dif = 0;
            }
            else{
                dif = fim - inicial;
            }

        printf("%d\n", dif);

        return 0;
    }
