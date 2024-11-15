#include <stdio.h>



int main() {
    int a, b, c, maior;

    scanf("%d %d %d", &a, &b, &c);
    
    int maiorAB(int a, int b) {
        return (a + b + abs(a - b)) / 2;
    }

    maior = maiorAB(a, b);

    maior = maiorAB(maior, c);

    printf("%d eh o maior\n", maior);

    return 0;
}