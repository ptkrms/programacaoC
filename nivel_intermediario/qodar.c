#include <stdio.h>

int main () {

    float nota1, nota2, nota3;
    float media;

    printf("*** Programa de cálculo de média ***\n");

    printf("Digite a sua primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a sua segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a sua terceira nota: ");
    scanf("%f", &nota3);

    media = (float)(nota1 + nota2 + nota3) / 3;

    printf("A média é: %.1f\n", media);


    return 0;
}