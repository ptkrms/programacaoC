#include <stdio.h>

int main () {

    int idade;
    int dependentes;
    float renda;

    //primeira condição: idade do usuario está entre 18 e 65 anos
    //segunda condição: se a renda do usuario é menor que 3000
    //terceira condição: se o usuario tem mais de 2 dependentes

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Digite a sua renda: ");
    scanf("%f", &renda);
    
    printf("Digite o número de dependentes: ");
    scanf("%d", &dependentes);

    if( idade >= 18 && idade <= 65 ) {
        if( renda < 3000 ) {
            if( dependentes > 2 ) {
                printf("Você atende à todos os critérios.\n");
            } else {
                printf("Você não atende ao critério dependente.\n");
            }
        } else {
            printf("Você não atende a renda mínima.\n");
        }
    } else {
        printf("Você não atende ao critério idade.\n");
    }



    return 0;
}
// O código acima verifica se o usuário atende a três critérios para receber um desconto.
