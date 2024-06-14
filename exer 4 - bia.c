 #include <stdio.h>

int main() {
 int livro,usuario;
 char continuar;
 do{
  printf("digite 1 para aluno \n");
  printf("digite 2 para professor \n");
  printf("digite 3 para pesquisador \n");
  printf("digite 4 para visitante \n");
  scanf("%i", &usuario);

  switch (usuario) {
    case 1:
        printf("quantos livros voce deseja pegar \n");
        scanf(" %i", &livro);

        if(livro<=3){
            printf("emprestimo aceito");
        }
        else{
            printf("emprestimo recusado");
        }
      break;

    case 2:
        printf("quantos livros voce deseja pegar \n");
        scanf(" %i", &livro);

        if(livro<=5){
            printf("emprestimo aceito");
        }
        else{
            printf("emprestimo recusado");
        }
      break;

    case 3:
        printf("quantos livros voce deseja pegar \n");
        scanf(" %i", &livro);

        if(livro<=10){
            printf("emprestimo aceito");
        }
        else{
            printf("emprestimo recusado");
        }
      break;

    case 4:
        printf("quantos livros voce deseja pegar \n");
        scanf(" %i", &livro);

        if(livro==1){
            printf("emprestimo aceito");
        }
        else{
            printf("emprestimo recusado");
        }
      break;

    default:
        printf("falha");
  }
   printf("\nDeseja reservar outro livro? (s/n): ");
    scanf(" %c", &continuar);
  } while (continuar == 's' || continuar == 'S');

  printf("Programa finalizado.\n");

  return 0;
}


