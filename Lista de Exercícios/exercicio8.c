//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: João Lucas de Oliveira Ramos
//RA: 5167887
//Atividade: Lista de Exercícios 2 - Exercício 8

#include <stdio.h>

int main() {
   int num, fatorial = 1;

   printf("Informe um número: ");
   scanf("%d", &num);

   for (int i = 1; i <= num; i++) {
        fatorial = fatorial*i;
   }
    
   printf("O fatorial de %d é: %d\n", num, fatorial);

   return 0;
}