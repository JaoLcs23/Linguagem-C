//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: João Lucas de Oliveira Ramos
//RA: 5167887
//Atividade: Lista de Exercícios 2 - Exercício 19

#include <stdio.h>
#include <math.h>

int main() {
   float num;

   do {
        printf("Digite um número (valor negativo para sair): ");
        scanf("%f", &num);

        if (num >= 0) {
            printf("A raiz quadrada de %.2f é %.2f\n", num, sqrt(num));
        } else {
            printf("Valor negativo digitado.\n");
        }
   } while (num >= 0);

   return 0;
}