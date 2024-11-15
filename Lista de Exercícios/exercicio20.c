//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: João Lucas de Oliveira Ramos
//RA: 5167887
//Atividade: Lista de Exercícios 2 - Exercício 20

#include <stdio.h>

int main() {
   int numero, maiorNumero;

   maiorNumero = -1;

   printf("Digite números inteiros positivos (digite -1 para encerrar).\n");

   do {
      printf("Digite um número: ");
      scanf("%d", &numero);

      if (numero >= 0) {
         if (numero > maiorNumero) {
            maiorNumero = numero;
         }
      } else {
         break;
      }
   } while (numero != -1);

   if (maiorNumero != -1) {
      printf("O maior número digitado foi: %d\n", maiorNumero);
   } else {
      printf("Nenhum número positivo foi digitado.\n");
   }

   return 0;
}