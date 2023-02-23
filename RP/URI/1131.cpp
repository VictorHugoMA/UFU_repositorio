#include<stdio.h>

    int main(){
        int gi, gg, partidas=0, vi=0, vg=0, empate=0, novo;

        while(1){
            gi=0;
            gg=0;

            scanf("%d %d", &gi, &gg);

            if(gi>gg){
                vi+=1;
            }
            else if(gg>gi){
                vg+=1;
            }
            else{
                empate+=1;
            }
            partidas++;

            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d", &novo);
            if(novo==2) break;
        }

        printf("%d grenais\n", partidas);
        printf("Inter:%d\n", vi);
        printf("Gremio:%d\n", vg);
        printf("Empate:%d\n", empate);

        if(vi>vg) printf("Inter venceu mais\n");
        else if(vg>vi) printf("Gremio venceu mais\n");
        else printf("Nao houve vencedor\n");

    }
