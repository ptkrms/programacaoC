#include <stdio.h>

int main () {

    int idade = 20;
    float altura = 1.75;

    if (idade >= 18 && idade <=30 && altura > 1.70) {
        printf("Você é maior de idade e tem mais de 1.70m de altura.\n");
    } else{
        printf("Você não atende aos requisitos.\n");
    } 

    return 0;
}