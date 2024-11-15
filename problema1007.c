#include <stdio.h>
 
int main() {
 
    int A, B, C, D, diferenca;

    printf("Insira a nota A: ");
    scanf("%d", &A);

    printf("Insira a nota B: ");
    scanf("%d", &B);

    printf("Insira a nota C: ");
    scanf("%d", &C);

    printf("Insira a nota D: ");
    scanf("%d", &D);

    diferenca = ((A * B) - (C * D));

    printf("DIFERENCA = %d", diferenca);
 
    return 0;
}