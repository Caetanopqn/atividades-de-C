#include <stdio.h>

int main() {
    int numero;
    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {
        printf("digite um numero: ");
        scanf("%d", &numero);

        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", numero, i, numero * i);
        }

        printf("\ndeseja calcular outra tabuada? (s/n): ");
        scanf(" %c", &continuar);
    }

    return 0;
}
