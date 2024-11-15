//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: João Lucas de Oliveira Ramos
//RA: 5167887
//Atividade: Lista de Exercícios 2 - Exercício 7

#include <stdio.h>
   
   int main(){
   int N, elevado;
   
   printf("Informe um número: ");
   scanf("%d", &N);

   for (int i = 1; i <= N; i++){
      elevado = i*i;

      printf("\n%d", elevado);
   }
    
   return 0;
   }