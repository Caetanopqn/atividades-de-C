#include <stdio.h>

int main() {
    float nota1;
    float nota2; 
    float nota3; 
    float media;
    int aprovados = 0;
    int recuperacao = 0; 
    int reprovados = 0;
    char continuar = 's';

    while (continuar == 's' || continuar == 'S') {
        printf("digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("digite a segunda nota: ");
        scanf("%f", &nota2);

        printf("digite a terceira nota: ");
        scanf("%f", &nota3);

        media = (nota1 + nota2 + nota3)/3;

        printf("media: %.2f\n", media);

        if (media >= 7) {
            printf("aprovado\n");
            aprovados++;
        } else if (media >= 5) {
            printf("aecuperacao\n");
            recuperacao++;
        } else {
            printf("reprovado\n");
            reprovados++;
        }

        printf("\ndeseja cadastrar outro aluno? (s/n): ");
        scanf(" %c", &continuar);
    }

    printf("\naprovados: %d\n", aprovados);
    printf("recuperacao: %d\n", recuperacao);
    printf("reprovados: %d\n", reprovados);

    return 0;
}
