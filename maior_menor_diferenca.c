#include <stdio.h>

int main() {
    int numero; 
    int maior; 
    int menor; 
    int diferenca;

    for (int i = 1; i <= 10; i++) {
        printf("digite um numero: ");
        scanf("%d", &numero);

        if (i == 1) {
            maior = numero;
            menor = numero;
        } else {
            if (numero > maior) {
                maior = numero;
            }

            if (numero < menor) {
                menor = numero;
            }
        }
    }

    diferenca = maior - menor;

    printf("\nmaior numero: %d\n", maior);
    printf("menor numero: %d\n", menor);
    printf("diferenca: %d\n", diferenca);

    return 0;
}
