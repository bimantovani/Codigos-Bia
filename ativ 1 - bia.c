#include <stdio.h>

int main() {
 int menu,cpf,dia,cod;
 char continuar,livro;
 do{
  printf("digite 1 para exibir os livros disponiveis com codigo \n");
  printf("digite 2 para informacoes de acesso a biblioteca \n");
  printf("digite 3 para documentos necessarios para cadastro \n");
  printf("digite 4 para emprestimo de livros \n");
  scanf("%i", &menu);

  switch (menu) {
    case 1:
        printf("o codigo da vinci - 00001 \n");
        printf("e assim que acaba - 00002 \n");
        printf("verity - 00003 \n");
        printf("o verao que mudou a minha vida - 00004 \n");
        printf("amor e gelato - 00005 \n");
      break;

    case 2:
        printf("horario de funcionamento: \n");
        printf("segunda a sexta: 09h-18h \n");
        printf("sabado: 09h-15h \n");
        printf("rua: ana livia evangelista n 127 \n");
        printf("whatsapp: 14 12345-6789 \n");
        printf("instagram: @bibliotecanovaera \n");
      break;

    case 3:
        printf("para realizar o cadrastro e necessario o cpf \n");
      break;

    case 4:
        printf("que livro voce deseja emprestar \n");
        scanf("%s", &livro);
        printf("digite o codigo do livro \n");
        scanf("%i", &cod);
        printf("digite seu cpf \n");
        scanf("%i", &cpf);
        printf("digite o dia que voce deseja emprestar \n");

    default:
        printf("falha");
  }
   printf("\nDeseja procurar outro coisa? (s/n): ");
    scanf(" %c", &continuar);
  } while (continuar == 's' || continuar == 'S');

  printf("progrma realizado com sucesso");

  return 0;
}


