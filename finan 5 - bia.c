#include <stdio.h>
int main() {
    float vi,va,lp;

    printf("digite o valor inicial \n"),
    scanf("%f", &vi);
    printf("digite o valo atual \n");
    scanf(" %f", &va);

    if(vi<va){
        lp=va-vi;
        printf("voce teve um lucro de %f", lp);
    }

    else{
        lp=vi-va;
        printf("voce teve um prejuizo de %f", lp);
    }

    return 0;
}
