#include <stdio.h>

int main() {
    int secreto = 57;
    int palpite;
    int tentativas = 0;
    int acertou = 0;

    while (tentativas < 10) {
        printf("digite seu palpite (1 a 100): ");
        scanf("%d", &palpite);

        tentativas++;

        if (palpite < secreto) {
            printf("o numero secreto e maior.\n");
        } else if (palpite > secreto) {
            printf("o numero secreto e menor.\n");
        } else {
            printf("voce acertou! :)\n");
            acertou = 1;
            break;
        }
    }

    printf("\nTentativas realizadas: %d\n", tentativas);

    if (acertou == 0) {
        printf("Voce nao acertou... o numero secreto era %d. :(\n", secreto);
    }

    return 0;
}
