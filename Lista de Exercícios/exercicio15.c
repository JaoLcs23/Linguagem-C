//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: João Lucas de Oliveira Ramos
//RA: 5167887
//Atividade: Lista de Exercícios 2 - Exercício 15

#include <stdio.h>

int main() {
    int num, fatorial = 1, i = 1;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Número negativo\n");
    } else {
        while (i <= num) {
            fatorial *= i;
            i++;
        }
        printf("O fatorial de %d é: %d\n", num, fatorial);
    }

    return 0;
}