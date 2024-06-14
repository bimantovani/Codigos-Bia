#include <stdio.h>

int main(){
    int numeros[] = {1,2,3,4,5,6,7,8,9,10};
    int maior = numeros[0];

    for (int i = 0; i < 10; i++) {
        if(numeros[i] >maior) {
            maior=numeros[i];
        }
    }

    printf("o maior numero e: %i\n", maior);

    return 0;
}
