#include <stdio.h>

int main(){
    int num, horas;
    float valorHora, salario;

    printf("Insira seu número de funcionário: ");
    scanf("%d", &num);

    printf("Insira a quantidade de horas trabalhadas: ");
    scanf("%d", &horas);

    printf("Insira o valor recebido por horas: ");
    scanf("%f", &valorHora);

    salario = horas * valorHora;

    printf("NUMBER = %d", num);
    printf("\nSALARY = U$ %.2f", salario);

    return 0;
}