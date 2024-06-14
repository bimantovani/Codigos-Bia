#include <stdio.h>

int main(){
    int numeros[] = {1,2,3,4,5,6,7,8,9,10};
    int media,soma=0;
    for (int i = 0; i <= 10; i++) {
        soma=soma+i;
        media=soma/10;
    }

    printf("a media e: %i\n", media);

    return 0;
}
