#include <stdio.h>
int main() {
    float t, vi,js;

    printf("digite o valor inicial do investimento \n"),
    scanf("%f", &vi);
    printf("digite o numero de anos \n");
    scanf("%f", &t);
    printf("a taxa de juros anual sera de 0.05 \n");

    js=vi+(vi*0.05*t);

    printf("o seu investimento rendera %2.f", js);

    return 0;
}


