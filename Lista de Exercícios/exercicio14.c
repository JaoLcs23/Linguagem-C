//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: João Lucas de Oliveira Ramos
//RA: 5167887
//Atividade: Lista de Exercícios 2 - Exercício 14

#include <stdio.h>
#include <math.h>

int main() {
    int N, i = 0;
    int somatorio = 0;

    printf("Insira o valor de N: ");
    scanf("%d", &N);

    while (i <= N) {
        somatorio += pow(3, i);
        i++;
    }

    printf("O somatório da série é: %d\n", somatorio);

    return 0;
}