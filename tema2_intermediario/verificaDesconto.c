#include <stdio.h>
int main () {

        int idade;
        float renda;
        
        printf("Digite a sua idade: ");
        scanf("%d", &idade);
        printf("Digite a sua renda: ");
        scanf("%f", &renda);

        if (idade <=18 || idade >= 60) {
            printf("Aceito com relação à idade.\n");
            if (renda < 2000) {
            printf("Você tem direito a desconto.\n");
        } else {
            printf("Você não tem direito a desconto devido à renda.\n");
        }
        } else {
            printf("Você não tem direito a desconto devido à idade.\n");
        }



    return 0;
}