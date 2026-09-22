#include <stdio.h>

int main() {
    int numero;
    int fatorial = 1;

    do {
        printf("digite um numero entre 0 e 10: ");
        scanf("%d", &numero);
    } while (numero < 0 || numero > 10);

    for (int i = 1; i <= numero; i++) {
        fatorial *= i;
    }

    printf("%d! = %d\n", numero, fatorial);

    return 0;
}
