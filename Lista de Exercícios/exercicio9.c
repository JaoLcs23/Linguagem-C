//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: João Lucas de Oliveira Ramos
//RA: 5167887
//Atividade: Lista de Exercícios 2 - Exercício 9

#include <stdio.h>
   
   int main(){
   int N;
   float A=0;

   printf("Informe um número: ");
   scanf("%d", &N);

   for (int i = 1; i <= N; i++) {
        A = A + (float)(N - (i - 1)) / i;
   }

   printf("O valor de A é: %.2f\n", A);
    
   return 0;
   }