#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int opcao;
    int numeroSecreto, palpite;

    printf("Menu Principal:\n");
    printf("1 - Iniciar Jogo\n");
    printf("2 - Ver Regras\n");
    printf("3 - Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Iniciando o jogo...\n");
            // Aqui você pode adicionar a lógica para iniciar o jogo
            srand (time(0));
            numeroSecreto = rand() % 10; // Número entre 1 e 100
            printf("Digite um número entre 0 e 9: ");
            scanf("%d", &palpite);
            if (palpite == numeroSecreto) {
                printf("Parabéns! Você acertou o número secreto: %d\n", numeroSecreto);
            } else {
                printf("Você errou! O número secreto era: %d\n", numeroSecreto);
            }

            break;
        case 2:
            printf("Regras do Jogo:\n");
            printf("1. Você deve adivinhar o número secreto de 0 a 9.\n");
            printf("2. Ao acertar, você vence.\n");
            // Adicione mais regras conforme necessário
            break;
        case 3:
            printf("Saindo do programa...\n");
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
    }




    return 0;
}
