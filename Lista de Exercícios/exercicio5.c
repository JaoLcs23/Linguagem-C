//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: João Lucas de Oliveira Ramos
//RA: 5167887
//Atividade: Lista de Exercícios 2 - Exercício 5

#include <stdio.h>

   int main() {
   for (int i = 1; i <= 100; i++) {
      if (i % 10 == 0) {
         printf("O número %d é múltiplo de 10\n", i);
      }
      printf("%d\n", i);
   }

   return 0;
   }