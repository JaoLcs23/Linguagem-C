//ATIVIDADE AVALIATIVA – LINGUAGEM E TÉCNICAS DE PROGRAMAÇÃO
//Nome: João Lucas de Oliveira Ramos
//RA: 5167887
//Atividade: Lista de Exercícios 2 - Exercício 16

#include <stdio.h>

int main() {
    int opcao;
    float temperatura, resultado;

    printf("Menu de Opções:\n");
    printf("1 - Converter Celsius para Fahrenheit\n");
    printf("2 - Converter Celsius para Kelvin\n");
    printf("3 - Converter Fahrenheit para Celsius\n");
    printf("4 - Sair\n");

    // Laço while para repetição até a opção 4
    while (1) {
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 4) {
            // Encerra o programa
            printf("Programa encerrado.\n");
            break;
        }

        switch (opcao) {
            case 1:
                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &temperatura);
                resultado = (temperatura * 9 / 5) + 32;
                printf("%.2f °C = %.2f °F\n", temperatura, resultado);
                break;

            case 2:
                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &temperatura);
                resultado = temperatura + 273.15;
                printf("%.2f °C = %.2f K\n", temperatura, resultado);
                break;

                

            case 3:
                printf("Digite a temperatura em Fahrenheit: ");
                scanf("%f", &temperatura);
                resultado = (temperatura - 32) * 5 / 9;
                printf("%.2f °F = %.2f °C\n", temperatura, resultado);
                break;
                
            default:
                printf("Opção inválida\n");
        }

        printf("Menu de Opções:\n");
        printf("1 - Converter Celsius para Fahrenheit\n");
        printf("2 - Converter Celsius para Kelvin\n");
        printf("3 - Converter Fahrenheit para Celsius\n");
        printf("4 - Sair\n");
    }

    return 0;
}