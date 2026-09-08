#include <stdio.h>

int main(){

    int notas200 = 3;
    int notas100 = 3;
    int notas50 = 3;
    int notas20 = 3;
    int notas10 = 3;
    int notas5 = 3;

    int saque;

    int qtd200 = 0;
    int qtd100 = 0;
    int qtd50 = 0;
    int qtd20 = 0;
    int qtd10 = 0;
    int qtd5 = 0;

    int totalCedulas = 0;

    printf("Digite o valor do saque: R$ ");
    scanf("%d", &saque);

    // verificar se o valor e valido
    if (saque <= 0){
        printf("\nValor de saque invalido.\n");
        return 0;
    }

    // verificar se o valor e multiplo de 5
    if (saque % 5 != 0){
        printf("\nO valor deve ser multiplo de R$ 5.\n");
        return 0;
    }

    int restante = saque; // o restante sera diminuido até o valor ser atingido

    /* cada quantidade pode ser, no maximo: quantidade disponivel - 1
    pelo menos uma nota deve permanecer no caixa. */

    // notas de R$ 200
    qtd200 = restante / 200;

    if (qtd200 > notas200 - 1){
        qtd200 = notas200 - 1;
    }

    restante -= qtd200 * 200;

    // notas de R$ 100
    qtd100 = restante / 100;

    if (qtd100 > notas100 - 1){
        qtd100 = notas100 - 1;
    }

    restante -= qtd100 * 100;

    // notas de R$ 50
    qtd50 = restante / 50;

    if (qtd50 > notas50 - 1){
        qtd50 = notas50 - 1;
    }

    restante -= qtd50 * 50;

    // notas de R$ 20
    qtd20 = restante / 20;

    if (qtd20 > notas20 - 1){
        qtd20 = notas20 - 1;
    }

    restante -= qtd20 * 20;

    // notas de R$ 10
    qtd10 = restante / 10;

    if (qtd10 > notas10 - 1){
        qtd10 = notas10 - 1;
    }

    restante -= qtd10 * 10;

    // notas de R$ 5
    qtd5 = restante / 5;

    if (qtd5 > notas5 - 1){
        qtd5 = notas5 - 1;
    }

    restante -= qtd5 * 5;

    // verificar se o saque foi possivel
    if (restante != 0){

        printf("\nNao e possivel realizar o saque.");
        printf("\nO caixa nao consegue fornecer esse valor sem violar a regra.\n");

        return 0;
    }

    // calcular quantidade total de cedulas
    totalCedulas = qtd200 + qtd100 + qtd50 + qtd20 + qtd10 + qtd5;

    // mostrar resultado
    printf("\nSaque realizado com sucesso!\n");

    printf("\nNotas entregues:");

    if (qtd200 > 0)
        printf("\nR$ 200: %d", qtd200);

    if (qtd100 > 0)
        printf("\nR$ 100: %d", qtd100);

    if (qtd50 > 0)
        printf("\nR$ 50: %d", qtd50);

    if (qtd20 > 0)
        printf("\nR$ 20: %d", qtd20);

    if (qtd10 > 0)
        printf("\nR$ 10: %d", qtd10);

    if (qtd5 > 0)
        printf("\nR$ 5: %d", qtd5);

    printf("\n\nQuantidade total de cedulas: %d\n", totalCedulas);

    return 0;
}
