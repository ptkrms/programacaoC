#include <stdio.h>

int main () {

    int variavel;

    printf("Digite um valor: ");
    scanf("%d", &variavel);

    switch (variavel) {
        case 1:
            // Aqui você pode colocar o código que deseja executar para a opção 1
            printf("Você escolheu a opção 1.\n");
            break;
        case 2:
            // Aqui você pode colocar o código que deseja executar para a opção 2
            printf("Você escolheu a opção 2.\n");
            break;
        case 3:
            // Aqui você pode colocar o código que deseja executar para a opção 3
            printf("Você escolheu a opção 3.\n");
            break;
        default:
            printf("Opção inválida.\n");
    }



    return 0;
}
