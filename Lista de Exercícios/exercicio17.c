//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: João Lucas de Oliveira Ramos
//RA: 5167887
//Atividade: Lista de Exercícios 2 - Exercício 17

#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    printf("Menu de Opções:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Divisão\n");
    printf("4 - Multiplicação\n");
    printf("5 - Sair\n");

    while (1) {
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 5) {
            printf("Programa encerrado.\n");
            break;
        }

        switch (opcao) {
            case 1:
                printf("Digite o 1° número: ");
                scanf("%f", &num1);

                printf("Digite o 2° número: ");
                scanf("%f", &num2);

                resultado = num1 + num2;

                printf("%f + %f = %.2f\n", num1, num2, resultado);
                break;

            case 2:
                printf("Digite o 1° número: ");
                scanf("%f", &num1);

                printf("Digite o 2° número: ");
                scanf("%f", &num2);

                resultado = num1 - num2;
                
                printf("%f - %f = %.2f\n", num1, num2, resultado);
                break;

            case 3:
                printf("Digite o 1° número: ");
                scanf("%f", &num1);

                printf("Digite o 2° número: ");
                scanf("%f", &num2);

                resultado = num1 / num2;
                
                printf("%f / %f = %.2f\n", num1, num2, resultado);
                break;

            case 4:
                printf("Digite o 1° número: ");
                scanf("%f", &num1);

                printf("Digite o 2° número: ");
                scanf("%f", &num2);

                resultado = num1 * num2;
                
                printf("%f * %f = %.2f\n", num1, num2, resultado);
                break;
                
            default:
                printf("Opção inválida\n");
        }

         printf("Menu de Opções:\n");
         printf("1 - Soma\n");
         printf("2 - Subtração\n");
         printf("3 - Divisão\n");
         printf("4 - Multiplicação\n");
         printf("5 - Sair\n");
    }

    return 0;
}