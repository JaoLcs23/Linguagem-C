#include <stdio.h>

int main(){
    double A, B, media;

    printf("Insira a nota A: ");
    scanf("%lf", &A);

    printf("Insira a nota B: ");
    scanf("%lf", &B);

    media = (A * 3.5 + B * 7.5) / 11;

    printf("\nMEDIA = %.5lf", media);

    return  0;
}