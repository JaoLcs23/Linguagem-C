//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: João Lucas de Oliveira Ramos
//RA: 5167887
//Atividade: Lista de Exercícios 2 - Exercício 11

#include <stdio.h>

int main() {
    float raio = -1, circunferencia;

    while (raio < 0) {
        printf("Insira o raio do círculo (valor maior que 0): ");
        scanf("%f", &raio);
    }

    circunferencia = 2 * 3.14 * raio;
    
    printf("O comprimento da circunferência é: %.2f\n", circunferencia);

    return 0;
}