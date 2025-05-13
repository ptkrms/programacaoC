#include <stdio.h>

int main () {

    //while que só imprime numeros pares
    int i = 0;

    while (i <= 10) {
        if (i % 2 == 0) {
            printf("O número %d é par\n", i);
        }
        i++;
    }

    return 0;
}