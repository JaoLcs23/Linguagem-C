#include <stdio.h>
 
int main() {
    double R, vol, pi;

    pi = 3.14159;

    printf("Insira o valor do raio: ");
    scanf("%lf", &R);

    vol = (4/3) * pi * (R*R*R);
 
    printf("VOLUME = %.3lf", vol);

    return 0;
}