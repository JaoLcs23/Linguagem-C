#include <stdio.h>

int main()
{
    int i, n, fatorial = 1;
    
    printf("Insira um valor n: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++){
        fatorial *= i;
    }
    
    printf("O fatorial de %d é: %d", n, fatorial);

    return 0;
}