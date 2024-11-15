#include <stdio.h>

int main(){
    int cod, quant;
    float valTot;

    scanf("%d %d", &cod, &quant);

    if (cod == 1)
    {
        valTot = quant*4;
        
        printf("Total: R$ %.2f\n", valTot);
    }
    
    else if (cod == 2)
    {
        valTot = quant*4.5;
        
        printf("Total: R$ %.2f\n", valTot);
    }

    else if (cod == 3)
    {
        valTot = quant*5;
        
        printf("Total: R$ %.2f\n", valTot);
    }

    else if (cod == 4)
    {
        valTot = quant*2;
        
        printf("Total: R$ %.2f\n", valTot);
    }

    else if (cod == 5)
    {
        valTot = quant*1.5;
        
        printf("Total: R$ %.2f\n", valTot);
    }

    return 0;
}