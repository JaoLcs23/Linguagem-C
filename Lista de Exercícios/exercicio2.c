//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: João Lucas de Oliveira Ramos
//RA: 5167887
//Atividade: Lista de Exercícios 2 - Exercício 2

#include <stdio.h>
   
   int main(){
   int soma = 0;

   for (int i = 1; i <= 500; i++) {
        if (i % 2 != 0 && i % 3 == 0) {
            soma += i;
        }
   }

   printf("A soma dos números ímpares múltiplos de três entre 1 e 500 é: %d\n", soma);
    
   return 0;
   }