#include <stdio.h>

void recursivo (int numero) {
    if (numero > 0) {
        printf("%d \n", numero);
        recursivo(numero - 1);
          //para reproduzir na ordem inversa, basta usar o comando printf depois da chamada recursiva
    }
}

int main () {

    int quantidade = 10;

    printf("Contagem regressiva:\n");
    recursivo(quantidade);

  

    return 0;
}