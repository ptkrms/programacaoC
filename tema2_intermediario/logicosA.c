#include <stdio.h>

int main (){


    int a=10, b=5;

    if( a > 0 && b > 0 ) {
        printf("Ambos são positivos\n");
    } else if ( a < 0 || b < 0 ) {
        printf("Pelo menos um é negativo\n");
    } else {
        printf("Ambos são zero\n");
    }

    return 0;
}