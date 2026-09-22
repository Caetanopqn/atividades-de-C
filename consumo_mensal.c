#include <stdio.h>

int main()
{
    int consumo_mensal = 0;
    int consumo_mensal_total = 0;
    
    for (int i = 0; i < 5; i++){
        printf("\ndigite o consumo mensal do morador %d (em m^3): ", i+1);
        scanf("%d", &consumo_mensal);
        
        if (consumo_mensal > 20){
            printf("\no consumo está FORA da média (acima de 20m^3)");
        }else{
            printf("\no consumo está DENTRO da média (abaixo de 20m^3)");
        }
        
        consumo_mensal_total = consumo_mensal_total + consumo_mensal;
        
        printf("\n//////////");
    }
    
    printf("\no consumo médio geral foi de: %dm^3", consumo_mensal_total/5);

    return 0;
}
