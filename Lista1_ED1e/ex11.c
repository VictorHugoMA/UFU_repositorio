#include<stdio.h>
#include<math.h>

    int main(){
        float zr, zi, wr, wi;

        printf("<<Numero complexo>>\n");
        printf("Informe a parte real de z: ");
        scanf("%f", &zr);
        printf("Informe a parte imaginaria de z: ");
        scanf("%f", &zi);
        printf("Informe a parte real de w: ");
        scanf("%f", &wr);
        printf("Informe a parte imaginario de w: ");
        scanf("%f", &wi);

        printf("z + w = %.1f + %.1fi\n", zr+wr, zi+wi);
        printf("z - w = %.1f + %.1fi\n", zr-wr, zi-wi);
        printf("z * w = %.1f + %.1fi\n", (zr*wr-zi*wi), (zr*wi+zi*wr));
        printf("|z| = %.4f\n", sqrt(zr*zr+zi*zi));
        printf("|w| = %.4f\n", sqrt(wr*wr+wi*wi));

    }