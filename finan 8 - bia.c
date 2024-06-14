#include <stdio.h>
int main() {
    float vtm,npd,vp,vf;

    printf("digite o valor total da moto \n");
    scanf("%f", &vtm);
    printf("digite o numero de parcelas desejadas \n");
    scanf("%f", &npd);

    vp=(vtm/npd)*(1+0.15);

    printf("o valor da parcela e %f \n", vp);

    vf=vp*npd;

    printf("o valor final e %f \n", vf);

    return 0;
}
