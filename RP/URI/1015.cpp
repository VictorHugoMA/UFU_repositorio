#include<stdio.h>
#include<math.h>

    int main(){
        double x1, x2, y1, y2, ar, dist;

        scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

        ar = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);

        dist = sqrt(ar);

        printf("%.4lf\n", dist);

    }
