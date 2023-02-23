#include<stdio.h>
#include<math.h>

    int main(){
        int A, B, C, mab;

        scanf("%d %d %d", &A, &B, &C);

        mab = (A + B + fabs(A-B))/2;
        mab = (C + mab + fabs(mab-C))/2;

        printf("%d eh o maior\n", mab);
    }
