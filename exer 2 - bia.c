#include <stdio.h>

int main() {
  int figura;
  char continuar;
  do{
    printf("digite o numeros de lados da forma \n");
    scanf("%i", &figura);

    switch (figura) {
        case 3:
            printf("triangulo");
            break;

        case 4:
            printf("quadrado");
            break;

        case 5:
            printf("pentagono");
            break;

        case 6:
            printf("hexagono");
            break;

        case 7:
            printf("hepitagono");
            break;

        default:
            printf("figura geometrica invalida");
  }
    printf("\nDeseja ver outra forma? (s/n): ");
    scanf(" %c", &continuar);
  } while (continuar == 's' || continuar == 'S');

  printf("Programa finalizado.\n");

  return 0;
}
