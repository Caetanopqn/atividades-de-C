#include <stdio.h>

int main() {
    int numero;
    int positivos_soma = 0:
    int negativos_soma = 0;
    int positivos_quant = 0; 
    int negativos_quant = 0;

    printf("digite um numero (0 para parar): ");
    scanf("%d", &numero);

    while (numero != 0) {
        if (numero > 0) {
            positivos_soma += numero;
            positivos_quant++;
        } else {
            negativos_soma += numero;
            negativos_quant++;
        }

        printf("digite um numero (0 para parar): ");
        scanf("%d", &numero);
    }

    printf("\nsoma dos positivos: %d\n", positivos_soma);
    printf("soma dos negativos: %d\n", negativos_soma);
    printf("quantidade de positivos: %d\n", positivos_quant);
    printf("quantidade de negativos: %d\n", negativos_quant);

    return 0;
}
