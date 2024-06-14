#include <stdio.h>
int main() {
    float sb,imp;

    printf("digite seu salario bruto \n");
    scanf("%f", &sb);

    imp=sb*0.15;

    printf("o valor do imposto e %f", imp);

    return 0;
}
