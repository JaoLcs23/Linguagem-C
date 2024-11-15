//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: João Lucas de Oliveira Ramos
//RA: 5167887
//Atividade: Lista de Exercícios 2 - Exercício 6

#include <stdio.h>

int main() {
    int M, N;

    printf("Informe um número M: ");
    scanf("%d", &M);

    printf("Informe um número N: ");
    scanf("%d", &N);

   if (M > N) {
        printf("M deve ser menor que N.\n");
   }

    for (int i = M; i <= N; i++) {
        if (i % 2 == 1) {
            printf("%d\n", i);
        }
    }

    return 0;
}