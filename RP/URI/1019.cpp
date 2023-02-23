#include <stdio.h>

    int main() {
        int T, H, H_S, M, S;

        H_S=3600;

        scanf("%d", &T);

        H=(T/H_S);

        M=(T -(H_S*H))/60;

        S= (T-(H_S*H)-(M*60));

        printf("%d:%d:%d\n",H,M,S);

}
