#include <stdio.h>

int main(){
    char nome[20];
    double salarioFixo, vendas, comissao, totalReceber;

    printf("Insira o nome do vendedor: ");
    scanf("%19s", &nome);

    printf("Insira o salário fixo do vendedor: ");
    scanf("%lf", &salarioFixo);

    printf("Insira o montante total vendidos pelo vendedor: ");
    scanf("%lf",&vendas);

    comissao = vendas*0.15;
    totalReceber = salarioFixo + comissao;

    printf("TOTAL = R$ %.2f", totalReceber);

    return 0;
}