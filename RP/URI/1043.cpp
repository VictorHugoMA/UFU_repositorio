#include<stdio.h>
#include<math.h>

    int main(){
        float A, B, C;

        scanf("%f %f %f", &A, &B, &C);

        if(fabs(B-C)<A && A<(B+C) && fabs(A-C)<B && B<(A+C) && fabs(A-B)<C && C<(A+B)){
            printf("Perimetro = %.1f\n", A+B+C);
        }
        else{
            printf("Area = %.1f\n", (A+B)*C/2);
        }
    }
