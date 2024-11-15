#include <stdio.h>

int main(){
    int codP1, numP1, codP2, numP2;
    float valUniP1, valUniP2, valTot;

    printf("Insira as informações da peça 1: ");
    scanf("%d, %d, %f", &codP1, &numP1, &valUniP1);
    
    printf("Insira as informações da peça 2: ");
    scanf("%d, %d, %f", &codP2, &numP2, &valUniP2);

    valTot = (numP1 * valUniP1) + (numP2 * valUniP2);

    printf("VALOR A PAGAR: R$ %.2f", valTot);

    return 0;
}