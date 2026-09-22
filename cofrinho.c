#include <stdio.h>

int main()
{
    int opcao = 0;
    float cofrinho = 0;
    
    while(opcao != 4){
        
        printf("\n===== Cofrinho =====\n");
        printf("1 - adicionar R$0,50\n");
        printf("2 - adicionar R$1,00\n");
        printf("3 - adicionar R$2,00\n");
        printf("4 - sair/parar\n");
        
        printf("\ndigite um valor e execute sua ação respectiva: ");
        scanf("%d", &opcao);
        
        switch(opcao){
            case 1:
                printf("\nR$0,50 foram adicionados no cofrinho");
                cofrinho += 0.5;
                break;
            case 2:
                printf("\nR$1 foram adicionados no cofrinho");
                cofrinho += 1;
                break;
            case 3:
                printf("\nR$2 foram adicionados no cofrinho");
                cofrinho += 2;
                break;
            case 4:
                break;
            default:
                printf("\nopção invalida!");
                break;
        }
        
        printf("\n//////////\n");
    }
    
    printf("valor total do cofinho: %.2f", cofrinho);
    
    return 0;
}
