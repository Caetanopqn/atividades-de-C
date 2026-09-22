#include <stdio.h>

int main() {
    int passos;
    total = 0;
    horas = 0;

    while (total < 10000) {
        printf("digite a quantidade de passos: ");
        scanf("%d", &passos);

        total += passos;
        horas++;
    }

    printf("meta atingida em %d horas!\n", horas);

    return 0;
}
