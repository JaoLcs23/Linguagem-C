//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: João Lucas de Oliveira Ramos
//RA: 5167887
//Atividade: Lista de Exercícios 2 - Exercício 13

#include <stdio.h>

int main() {
   int num, soma=0;

   printf("Insira números inteiros (digite 0 para sair):\n");

   while (1) {
      scanf("%d", &num);

      if (num == 0) {
         break;
      }
      if (num % 3 == 0) {
         soma += num;
      }
   }

   printf("Soma dos números múltiplos de 3: %d\n", soma);

   return 0;
}