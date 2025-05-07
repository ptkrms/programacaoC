#include <stdio.h>

int main() {

    int opcao;
    float nota1, nota2, media;

    printf("Menu de Gerenciamento de Estudantes:\n ");
    printf("1. Calcular média \n");
    printf("2. Determinar Status \n");
    printf("3. Sair \n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Você escolheu calcular a média.\n");
            printf("Digite a primeira nota: ");
            scanf("%f", &nota1);
            printf("Digite a segunda nota: ");
            scanf("%f", &nota2);
            // testar a condição se a nota é maior que 0 e menor que 10
            if (nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10) {
                printf("Notas válidas.\n");
                media = (nota1 + nota2) / 2;
                printf("A média é: %.2f\n", media);
            } else {
                printf("Notas inválidas. As notas devem estar entre 0 e 10.\n");
                return 1; // sair do programa
            }
            break;
        case 2:
            printf("Você escolheu determinar o status.\n");
            printf("Digite a média: ");
            scanf("%f", &media);
            media >= 5 ? printf("Aprovado\n") : printf("Reprovado\n");
            break;
        case 3:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}