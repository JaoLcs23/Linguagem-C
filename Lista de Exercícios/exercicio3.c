//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: João Lucas de Oliveira Ramos
//RA: 5167887
//Atividade: Lista de Exercícios 2 - Exercício 3

#include <stdio.h>
   
   int main(){
   int N;

   printf("Informe um número: ");  
   scanf("%d", &N);

   for(int i=1; i<N; i++){
      if (i%7==0){
         printf("%d\n", i);
      }
   }
    
   return 0;
   }