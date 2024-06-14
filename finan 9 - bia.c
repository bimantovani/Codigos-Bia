#include <stdio.h>
int main() {
    float vii,ndm,tt;

    printf("digite o valor inicial do investimento \n");
    scanf("%f", &vii);
    printf("digite o numero de meses que deseja manter o investimento \n");
    scanf("%f", &ndm);

    tt=vii+(vii*0.10*ndm);

    printf("o valor final e de %f \n", tt);

    return 0;
}
