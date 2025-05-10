#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    //gerar numero aleatório
    srand(time(0));
    numeroComputador = rand() % 100 + 1; // gera um número entre 1 e 100

    //Inicio do jogo
    printf("Bem-vindo ao jogo do Maior, Menor ou Igual!\n");
    printf("Você deve escolher um número e o tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a Comparação (M/N/I): ");
    scanf(" %c", &tipoComparacao);

    printf("Escolha um número entre 1 e 100: ");
    scanf("%d", &numeroJogador);

    //mostrando o numero do computador
    

    switch (tipoComparacao) {
        case 'M':
        case 'm':
            printf("Você escolheu o tipo de comparação: Maior\n");
            resultado = numeroJogador > numeroComputador ? 1 : 0;
            break;
        case 'N':
        case 'n':
            printf("Você escolheu o tipo de comparação: Menor\n");
            resultado = numeroJogador < numeroComputador ? 1 : 0;
            break;
        case 'I':
        case 'i':
            printf("Você escolheu o tipo de comparação: Igual\n");
            resultado = numeroJogador == numeroComputador ? 1 : 0;
            break;
        default:
            printf("Tipo de comparação inválido!\n");
            break;
    }

    printf("O número do computador é: %d e o número do jogador é: %d\n", numeroComputador, numeroJogador);
    
    //verificando o resultado
    if (resultado == 1) {
        printf("Parabéns! Você ganhou!\n");
    } else if (resultado == 0) {
        printf("Você perdeu! Tente novamente.\n");
    } else {
        printf("Erro ao verificar o resultado.\n");
    }

        return 0;   
}

