#include <stdio.h>

int main(){

    int opcao = 0;
    int numero;

    while(opcao != 4){

        printf("\n===== MENU =====\n");
        printf("1 - Verificar numero par ou impar\n");
        printf("2 - Verificar se e positivo ou negativo\n");
        printf("3 - Calcular o quadrado do numero\n");
        printf("4 - Sair\n");

        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao){

            case 1:

                printf("\nDigite um numero: ");
                scanf("%d", &numero);

                if(numero % 2 == 0){
                    printf("O numero e par.");
                }
                else{
                    printf("O numero e impar.");
                }

                if(numero > 0){
                    printf("\nO numero e positivo.");
                }
                else if(numero < 0){
                    printf("\nO numero e negativo.");
                }
                else{
                    printf("\nO numero e zero.");
                }

                break;


            case 2:

                printf("\nDigite um numero: ");
                scanf("%d", &numero);

                if(numero > 0){
                    printf("O numero e positivo.");
                }
                else if(numero < 0){
                    printf("O numero e negativo.");
                }
                else{
                    printf("O numero e zero.");
                }

                break;


            case 3:

                printf("\nDigite um numero: ");
                scanf("%d", &numero);

                printf("O quadrado de %d e %d.", numero, numero * numero);

                break;


            case 4:

                printf("\nPrograma encerrado.");

                break;


            default:

                printf("\nOpcao invalida.");

                break;
        }
    }

    return 0;
}
