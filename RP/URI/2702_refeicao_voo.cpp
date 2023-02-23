#include<stdio.h>

    int main(){
        int FR, BI, MA, ef, eb, em, soma=0;

        scanf("%d %d %d", &FR, &BI, &MA);
        scanf("%d %d %d", &ef, &eb, &em);

            if(ef>FR){
                soma+=ef-FR;
            }
            if(eb>BI){
                soma+=eb-BI;
            }
            if(em>MA){
                soma+=em-MA;
            }

        printf("%d\n", soma);

        return 0;
    }
