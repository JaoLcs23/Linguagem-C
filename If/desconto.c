#include <stdio.h>

int main(){
    float valorProduto;
    int tipoCliente;

    printf("Insira o valor do produto: ");
    scanf("%f", &valorProduto);

    printf("Insira o tipo de cliente: ");
    scanf("%d", &tipoCliente);

    switch (tipoCliente)
    {
    case 1:
        printf("O valor final do produto é: R$ %.2f", valorProduto);        

        break;

    case 2:
        printf("O valor final do produto é: R$ %.2f", valorProduto-(valorProduto*0.1));
    
        break;
        
    default:
        break;
    }
    

    return 0;
}