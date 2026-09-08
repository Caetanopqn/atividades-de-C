#include <stdio.h>

int main(){

    int A, B, C;

    printf("Digite os valores de A, B e C: ");
    scanf("%d %d %d", &A, &B, &C);

    /* MAIOR VALOR */

    if (A >= B && A >= C){
        printf("\nMaior valor: %d", A);
    }
    else if (B >= A && B >= C){
        printf("\nMaior valor: %d", B);
    }
    else{
        printf("\nMaior valor: %d", C);
    }

    /* MENOR VALOR */

    if (A <= B && A <= C){
        printf("\nMenor valor: %d", A);
    }
    else if (B <= A && B <= C){
        printf("\nMenor valor: %d", B);
    }
    else{
        printf("\nMenor valor: %d", C);
    }

    /* VALOR INTERMEDIARIO */

    if ((A >= B && A <= C) || (A <= B && A >= C)){
        printf("\nValor intermediario: %d", A);
    }
    else if ((B >= A && B <= C) || (B <= A && B >= C)){
        printf("\nValor intermediario: %d", B);
    }
    else{
        printf("\nValor intermediario: %d", C);
    }

    /* VALORES REPETIDOS */

    if (A == B || A == C || B == C){
        printf("\nExistem valores repetidos.");
    }
    else{
        printf("\nNao existem valores repetidos.");
    }

    /* OS TRES SAO IGUAIS */

    if (A == B && B == C){
        printf("\nOs tres valores sao iguais.");
    }
    else{
        printf("\nOs tres valores nao sao iguais.");
    }

    /* ORDEM CRESCENTE */

    if (A < B && B < C){
        printf("\nEstao em ordem crescente.");
    }
    else{
        printf("\nNao estao em ordem crescente.");
    }

    /* ORDEM DECRESCENTE */

    if (A > B && B > C){
        printf("\nEstao em ordem decrescente.");
    }
    else{
        printf("\nNao estao em ordem decrescente.");
    }

    return 0;
}
