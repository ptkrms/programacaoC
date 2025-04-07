#include <stdio.h>

int main () {

    // Declaração de variáveis
    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    // Entrada de dados
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);


    //operacao soma
    soma = numero1 + numero2;

    //operacao subtracao
    subtracao = numero1 - numero2;

    //operacao multiplicacao
    multiplicacao = numero1 * numero2;

    //operacao divisao
    divisao = numero1 / numero2;

    // Exibição dos resultados

    printf("A soma é: %d\n", soma);
    printf("A subtracao é: %d\n", subtracao);
    printf("A multiplicacao é: %d\n", multiplicacao);
    printf("A divisao é: %d\n", divisao);

}