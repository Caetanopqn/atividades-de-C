#include <stdio.h>

int main() {
    int passos;
    int total = 0;
    int horas = 0;

    while (total < 10000) {
        printf("digite a quantidade de passos: ");
        scanf("%d", &passos);

        total += passos;
        horas++;
    }

    printf("meta atingida em %d horas!\n", horas);

    return 0;
}
