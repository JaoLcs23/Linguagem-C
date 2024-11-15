#include <stdio.h>

int main(){
    double A, B, C, media;

    printf("Insira a nota A: ");
    scanf("%lf", &A);

    printf("Insira a nota B: ");
    scanf("%lf", &B);

    printf("Insira a nota C: ");
    scanf("%lf", &C);

    media = (A * 2 + B * 3 + C * 5) / 10;

    printf("\nMEDIA = %.1lf", media);

    return  0;
}