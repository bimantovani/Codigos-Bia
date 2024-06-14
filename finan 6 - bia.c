#include <stdio.h>
int main() {
    float sb,sbir,sbin,si,ir,inss,sl;
    char conti;
    int op;
    printf("digite o seu salario bruto \n");
    scanf("%f", &sb);
    do{
    printf("1. calcular o imposto de renda \n");
    printf("2. calcular o inss \n");
    printf("3. descobrir o salario liquido \n");
    scanf("%i", &op);

    switch(op){
        case 1:
            if(sb<=1903.98){
                printf("voce não paga imposto de renda");
            }
            else if(sb>=1903.99 && sb<=2826.65){
                sbir=sb-(sb*0.075);
                printf("seu impotosto de renda e de %f \n", sbir);
            }
            else if(sb>=2826.66 && sb<=3751.05){
                sbir=sb-(sb*0.15);
                printf("seu impotosto de renda e de %f \n", sbir);
            }
            else if(sb>=3751.06 && sb<=4664.68){
                sbir=sb-(sb*0.225);
                printf("seu impotosto de renda e de %f \n", sbir);
            }
            else{
                sbir=sb-(sb*0.275);
                printf("seu impotosto de renda e de %f \n", sbir);
            }
            break;

        case 2:
            if(sb<=1100.00){
                sbin=sb-(sb*0.075);
                printf("seu inss e de %f \n", sbin);
            }
            else if(sb>=1100.01 && sb<=2203.48){
                sbin=sb-(sb*0.09);
                printf("seu inss e de %f \n", sbin);
            }
            else if(sb>=2203.48 && sb<=3305.22){
                sbin=sb-(sb*0.12);
                printf("seu inss e de %f \n", sbin);
            }
            else if(sb>=3305.23 && sb<=6433.57){
                sbin=sb-(sb*0.14);
                printf("seu inss e de %f \n", sbin);
            }
            else{
                printf("voce nao paga inss \n");
            }
            break;

        case 3:
            printf("digite seu ir \n");
            scanf("%f", &ir);
            printf("digite seu inss \n");
            scanf("%f", &inss);
            sl=sb-(inss-ir);
            printf("seu salario liquido e de %f \n", sl);
            break;

    }
    printf("deseja continuar \n");
    scanf(" %c", &conti);
    }while (conti == 's' || conti == 'S');

        printf("progrma finalizado");

    return 0;
}
