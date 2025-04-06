#include <stdio.h>

int main (){

    int idade;
    float altura;
    char opcao;
    char nome [20];

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %.2f\n", altura);

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("O nome é: %s\n", nome);

}