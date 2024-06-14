#include <stdio.h>
int main() {
    float ve,p,es;

    printf("digite o valor do emprestimo (100 ate 10000) \n"),
    scanf("%f", &ve);
    printf("digite o prazo de pagamento em meses (ate 36 meses) \n");
    scanf("%f", &p);
    printf("a taxa de juros mensal e 0.07 \n");

    es=ve*(1+0.07*p)/p;

    printf("o valor final do emprestimo e %f", es);

    return 0;
}
