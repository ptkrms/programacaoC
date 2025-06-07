#include <stdio.h>

#define LINHA 5
#define COLUNA 5

int main() {
    
    int matriz[LINHA][COLUNA];

    int target = 5;
    int found = 0;
    int soma = 1;

    // Preenchendo a matriz com valores de 1 a 25
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            matriz[i][j] = soma;
            soma++;
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    //busca condicional do elemento alvo
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            if (matriz[i][j] == target) {
                printf("Elemento %d encontrado na posicao [%d][%d]\n", target, i, j);
                found = 1;
                break; // sai do loop interno se o elemento for encontrado
            }
        }
        if (found) break; // sai do loop externo se o elemento for encontrado
    }

    if (!found) {
        printf("Elemento %d nao encontrado na matriz\n", target);
    }

    return 0;

}

