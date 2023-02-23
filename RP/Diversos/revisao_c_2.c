/*
#include<stdio.h>

    int main(){
        double raio;

        scanf("%lf", &raio);

        printf("VOLUME = %.3lf\n", (4.0/3.0)*3.14159*raio*raio*raio);

        return 0;
    }


#include<stdio.h>
#include<math.h>

    int main(){
        double x1, y1, x2, y2, raiz;

        scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

        raiz=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);

        printf("%.4lf\n", sqrt(raiz));

        return 0;
    }


#include<stdio.h>

    int main(){
        int dist;

        scanf("%d", &dist);

        printf("%d minutos\n", dist*2);

        return 0;
    }
*/

#include<stdio.h>

    int main(){
        int hrs, vel;

        scanf("%d %d", &hrs, &vel);

        printf("%.3lf\n", (double)(hrs*vel)/12.0);

        return 0;
    }
