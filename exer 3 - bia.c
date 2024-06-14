#include <stdio.h>

int main() {
  int cafe,pr;
  char tam,p,m,g,continuar;
  do{
    printf("digite 1 para cafe expresso \n");
    printf("digite 2 para cappuccino \n");
    printf("digite 3 para latte \n");
    scanf("%i", &cafe);

    switch (cafe) {
        case 1:
            printf("qual tamanho voce deseja \n");
            scanf(" %c", &tam);

            if(tam=='p'){
                pr=3*1;
                printf("%i", pr);
            }
            else if(tam=='m'){
                pr=3*2;
                printf("%i", pr);
            }
            else{
                pr=3*3;
                printf("%i", pr);
            }
        break;

        case 2:
            printf("qual tamanho voce deseja \n");
            scanf(" %c", &tam);

            if(tam=='p'){
                pr=4*1;
                printf("%i", pr);
            }
            else if(tam=='m'){
                pr=4*2;
                printf("%i", pr);
            }
            else{
                pr=4*3;
                printf("%i", pr);
            }
        break;

        case 3:
            printf("qual tamanho voce deseja \n");
            scanf(" %c", &tam);

            if(tam=='p'){
                pr=5*1;
                printf("%i", pr);
            }
            else if(tam=='m'){
                pr=5*2;
                printf("%i", pr);
            }
            else{
                pr=5*3;
                printf("%i", pr);
            }
        break;

        default:
            printf("falha");
  }
    printf("\nDeseja comprar outra coisa? (s/n): ");
    scanf(" %c", &continuar);
  } while (continuar == 's' || continuar == 'S');

  printf("Programa finalizado.\n");

  return 0;
}
