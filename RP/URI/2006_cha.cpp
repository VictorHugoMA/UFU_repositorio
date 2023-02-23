#include<stdio.h>

    int main(){
        int t, a, b, c, d, e, cont=0;

        scanf("%d", &t);
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

            if(t==a){
                cont++;
            }
             if(t==b){
                cont++;
            }
             if(t==c){
                cont++;
            }
             if(t==d){
                cont++;
            }
             if(t==e){
                cont++;
            }

        printf("%d\n", cont);

        return 0;

    }
