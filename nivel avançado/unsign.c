#include <stdio.h>

int main () {
    int numeroSinal = 3000000000; //este valor excede o limite de um int normal
    unsigned int numeroSemSinal = 3000000000; //este valor não excede o limite de um int normal

    int numeroNormal = 2147483647; //valor máximo de um int normal
    long int numeroLongo = 2147483648; //este valor excede o limite de um int normal

    double numeroPreciso = 3.141592653589793; //valor de pi com precisão de 20 casas decimais
    long double numeroMuitoPreciso = 3.141592653589793238463;

    printf("O valor do inteiro normal é: %d\n", numeroSinal);
    printf("O valor do inteiro sem sinal é: %u\n", numeroSemSinal);
    printf("O valor do inteiro normal é: %d\n", numeroNormal);
    printf("O valor do inteiro longo é: %ld\n", numeroLongo);
    printf("O valor do número com precisão é: %f\n", numeroPreciso);
    printf("O valor do número com muita precisão é: %Lf\n", numeroMuitoPreciso);



    return 0;
}