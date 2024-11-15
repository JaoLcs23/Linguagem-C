//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: João Lucas de Oliveira Ramos
//RA: 5167887
//Atividade: Lista de Exercícios 2 - Exercício 12

#include <stdio.h>
#include <limits.h>

int main() {
    int num;
    int maior = INT_MIN;
    int menor = INT_MAX;

    printf("Insira números inteiros (digite 0 para sair):\n");

    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break;
        }
        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
    }

        printf("Maior número lido: %d\n", maior);
        printf("Menor número lido: %d\n", menor);

    return 0;
}