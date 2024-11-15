#include <stdio.h>

int main() {
    int numero = 5;
    long fatorial = 1;

    for (int i = 1; i <= numero; i++) {
        // * -> multiplicação
        // = -> atribuição
        // *= -> atribuição e multiplicação ao mesmo tempo

        fatorial *= i; // Multiplicação acumulativa correta
    }

    printf("Fatorial de %d e %ld", numero, fatorial);
}