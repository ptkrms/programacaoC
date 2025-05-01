#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int escolhaJogador, escolhaComputador;
    srand(time(0)); // Inicializa o gerador de números aleatórios

    printf("***Jogo de Jokenpô***\n");
    printf("Escolha uma opção:\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 3 + 1; // Gera um número aleatório entre 1 e 3

    switch (escolhaJogador) {
        case 1:
            printf("Jogador: Pedra - ");
            break;
        case 2:
            printf("Jogador: Papel - ");
            break;
        case 3:
            printf("Jogador: Tesoura - ");
            break;
        default:
            printf("Escolha inválida. Tente novamente.\n");
            break;
    }

    switch (escolhaComputador) {
        case 1:
            printf("Computador: Pedra\n");
            break;
        case 2:
            printf("Computador: Papel\n");
            break;
        case 3:
            printf("Computador: Tesoura\n");
            break;
    }

    if (escolhaJogador == escolhaComputador) {
        printf("Empate!\n");
    } else if ((escolhaJogador == 1 && escolhaComputador == 3) ||
               (escolhaJogador == 2 && escolhaComputador == 1) ||
               (escolhaJogador == 3 && escolhaComputador == 2)) {
        printf("Você venceu!\n");
    } else {
        printf("Você perdeu!\n");
    }
    printf("Obrigado por jogar!\n");



    return 0;
}