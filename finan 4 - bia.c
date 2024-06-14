#include <stdio.h>
int main() {
    int ia,f;
    char sg;

    printf("digite sua idade atual \n"),
    scanf("%i", &ia);
    printf("digite seu genero (f ou m)\n");
    scanf(" %c", &sg);

    if(sg='m'){
        f=65-ia;
        printf("falta %i", f);
    }

    else{
        f=62-ia;
        printf("falta %i", f);
    }

    return 0;
}
