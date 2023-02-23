#include<stdio.h>
#include<math.h>

    int main(){
        double A, B, C, del, R1, R2;

        scanf("%lf %lf %lf", &A, &B, &C);

        del=B*B - 4*A*C;

        if(A==0 || del<0){
            printf("Impossivel calcular\n");
        }
        else{

           R1=(-B+sqrt(del))/(2*A);
           R2=(-B-sqrt(del))/(2*A);

           printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
        }

    }
