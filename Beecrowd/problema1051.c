#include <stdio.h>

int main() {
    float salario, imposto = 0;

    scanf("%f", &salario);

    if (salario <= 2000) {
        printf("Isento\n");
    } else {
        if (salario > 2000 && salario <= 3000) {
            imposto = (salario - 2000) * 0.08;
        } else if (salario > 3000 && salario <= 4500) {
            imposto = (1000 * 0.08) + (salario - 3000) * 0.18;
        } else if (salario > 4500) {
            imposto = (1000 * 0.08) + (1500 * 0.18) + (salario - 4500) * 0.28;
        }

        printf("R$ %.2f\n", imposto);
    }

    return 0;
}