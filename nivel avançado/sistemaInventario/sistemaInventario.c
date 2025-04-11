#include <stdio.h>

int main () {
    // Variáveis para armazenar os dados do produto
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    //quantidade em estoque
    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    //valor do produto
    float valorA = 10.50;
    float valorB = 20.40;

    //estoque mínimo
    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    //calculo do valor total
    double valorTotalA;
    double valorTotalB;

    int resultadoA;
    int resultadoB;

    //exibir as informações dos produtos
    printf("Sistema de Controle de Estoque\n");
    printf("Produto %s tem %u unidades em estoque, e o valor unitário é R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem %u unidades em estoque, e o valor unitário é R$ %.2f\n", produtoB, estoqueB, valorB);

    //comparações com o valor minimo de estoque
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O produto %s tem estoque mínimo %d \n", produtoA, resultadoA);
    printf("O produto %s tem estoque mínimo %d \n", produtoB, resultadoB);

    //comparações entre o valor total dos produtos
    printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f)? %d \n", estoqueA * valorA, estoqueB * valorB, (estoqueA*valorA) > (estoqueB*valorB));

}