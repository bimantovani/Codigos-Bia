#include <stdio.h>


int main() {
  char operacao,continuar;
  float a,b,conta;
   do {
    printf("Digite a operacao desejada (+, -, *, /): \n");
    scanf(" %c", &operacao);
    printf("digite um numero \n");
    scanf("%f", &a);
    printf("digite um numero \n");
    scanf("%f", &b);

    switch (operacao) {
        case '+':
            conta=a+b;
            printf("%.2f", conta);
            break;

        case '-':
            conta=a-b;
            printf("%.2f", conta);
            break;

        case '*':
            conta=a*b;
            printf("%.2f", conta);
            break;

        case '/':
            conta=a/b;
            printf("%.2f", conta);
            break;

        default:
            printf("Operacao invalida!\n");

  }
        printf("\nDeseja ver outra conta? (s/n): ");
        scanf(" %c", &continuar);
  } while (continuar == 's' || continuar == 'S');

  printf("Programa finalizado.\n");


  return 0;
}
