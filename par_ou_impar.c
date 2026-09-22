#include <stdio.h>

int main() {
    int numero;
    int pares = 0;
    int impares = 0;

    for (int i = 1; i <= 10; i++) {
        printf("digite um valor: ");
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            printf("esse valor é par\n");
            pares++;
        } else {
            printf("esse valor é impar\n");
            impares++;
        }

        printf("\n//////////\n");
    }

    printf("\nquantidade de pares: %d\n", pares);
    printf("quantidade de impares: %d\n", impares);

    return 0;
}
