#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    //Inicialização das variáveis
    int bispo = 0, torre = 0, rainha = 0, cavaloExterno = 0, cavaloInterno = 0;

    // Movimentação do Bispo
    printf("Movimentação do Bispo: 5 casas para a diagonal superior direita\n");
    do {        
        printf("Cima\n");
        printf("Direita\n");
        bispo++;
    } while (bispo < 5);

    // Movimentação da Torre
    printf("Movimentação da Torre: 5 casas para a direita\n");
    for (torre; torre < 5; torre++) {
        printf("Direita\n");
    }

    // Movimentação da Rainha
    printf("Movimentação da Rainha: 5 casas para a esquerda\n");
    while(rainha < 5) {
        printf("Esquerda\n");
        rainha++;
    }
    
    //movimentação do Cavalo
    printf("Movimentação do Cavalo: 2 casas para baixo e uma para a esquerda\n");
    for (cavaloExterno = 0; cavaloExterno < 1; cavaloExterno++) {
        while (cavaloInterno < 2) {
            printf("Baixo\n");
            cavaloInterno++;
            
        }
        printf("Esquerda\n");
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
