#include <stdio.h>
int main () {

    int numero1 = 1, resultado;
    printf("Antes do incremento - numero 1 = %d\n", numero1);

    resultado = numero1++;
    printf("Após pós-incremento - numero 1 = %d  - resultado: %d\n", resultado);

    resultado = ++numero1;
    printf("Após pré-incremento - numero 1 = %d  - resultado: %d\n", resultado);

    resultado = numero1--;
    printf("Após pós-decremento - numero 1 = %d  - resultado: %d\n", resultado);

    resultado = --numero1;
    printf("Após pré-decremento - numero 1 = %d  - resultado: %d\n", resultado);
    
    printf("Resultado final - numero 1 = %d\n", numero1);
    printf("Resultado final - resultado = %d\n", resultado);

}
