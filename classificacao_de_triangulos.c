#include <stdio.h>

int main(){

    float ladoA;
    float ladoB;
    float ladoC;

    while (1){

        printf("\nDigite o valor do lado A, B e C: ");

        int resultado = scanf("%f %f %f", &ladoA, &ladoB, &ladoC);

        if (resultado != 3){ // verificar se a quantidade de valores digitados é a certa
            printf("\nInsira exatamente 3 valores.");
            continue;
        }

        if (ladoA <= 0 || ladoB <= 0 || ladoC <= 0){ // verificar se os lados são maiores que 0
            printf("\nAlgum dos lados digitados e invalido.");
            continue;
        }

        /* VERIFICAR SE O TRIANGULO E POSSIVEL*/
        if (ladoA + ladoB <= ladoC ||
            ladoA + ladoC <= ladoB ||
            ladoB + ladoC <= ladoA){

            printf("\nEsses lados nao formam um triangulo.");
            continue;
        }

        /* VERIFICAR TIPO DE TRIANGULO POR LADOS */

        if (ladoA == ladoB && ladoB == ladoC){
            printf("\nTipo por lado: Equilatero.");
        }
        else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC){
            printf("\nTipo por lado: Isoceles.");
        }
        else{
            printf("\nTipo por lado: Escaleno.");
        }

        /* VERIFICAR TIPO DE TRIANGULO POR ANGULO */

        if (ladoA >= ladoB && ladoA >= ladoC){ // caso o ladoA seja o maior lado

            if (ladoA * ladoA == ladoB * ladoB + ladoC * ladoC){
                printf("\nTipo por Angulo: Retangulo.");
            }
            else if (ladoA * ladoA > ladoB * ladoB + ladoC * ladoC){
                printf("\nTipo por Angulo: Obtusangulo.");
            }
            else{
                printf("\nTipo por Angulo: Acutangulo.");
            }

        }
        else if (ladoB >= ladoA && ladoB >= ladoC){ // caso o ladoB seja o maior lado

            if (ladoB * ladoB == ladoA * ladoA + ladoC * ladoC){
                printf("\nTipo por Angulo: Retangulo.");
            }
            else if (ladoB * ladoB > ladoA * ladoA + ladoC * ladoC){
                printf("\nTipo por Angulo: Obtusangulo.");
            }
            else{
                printf("\nTipo por Angulo: Acutangulo.");
            }

        }
        else{ // caso o ladoC seja o maior lado

            if (ladoC * ladoC == ladoA * ladoA + ladoB * ladoB){
                printf("\nTipo por Angulo: Retangulo.");
            }
            else if (ladoC * ladoC > ladoA * ladoA + ladoB * ladoB){
                printf("\nTipo por Angulo: Obtusangulo.");
            }
            else{
                printf("\nTipo por Angulo: Acutangulo.");
            }
        }
        break;
    }
    return 0;
}
