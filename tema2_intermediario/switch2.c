#include <stdio.h>

int main () {

    int opcao;
    float saldo = 1000.00;

    printf("Escolha uma opção:\n");
    printf("1 - Verificar saldo\n");
    printf("2 - Depositar\n");
    printf("3 - Sacar\n");   
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Seu saldo é: %.2f\n", saldo);
            break;
        case 2:
            printf("Digite o valor a depositar: ");
            float deposito;
            scanf("%f", &deposito);
            saldo += deposito;
            printf("Depósito realizado. Novo saldo: %.2f\n", saldo);
            break;
        case 3:
            printf("Digite o valor a sacar: ");
            float saque;
            scanf("%f", &saque);
            if (saque > saldo) {
                printf("Saldo insuficiente.\n");
            } else {
                saldo -= saque;
                printf("Saque realizado. Novo saldo: %.2f\n", saldo);
            }
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}