#include<stdio.h>
#include<math.h>
//9 - distancia ponto ate origem

    int main(){
        int x, y;
        float dist;

        printf("<<Distancia>>\n");
        printf("Entre com a cordenada x: ");
        scanf("%d", &x);
        printf("Entre com a cordenada y: ");
        scanf("%d", &y);

        dist = sqrt((0-x)*(0-x)+(0-y)*(0-y));

        printf("A distancia entre os pontos (%d,%d) e (0,0) eh %.1f",x, y, dist);

    }