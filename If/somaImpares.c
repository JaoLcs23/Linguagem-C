#include <stdio.h>

int main()
{
    int n, soma;
    
    printf("Insira um número inteiro: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            soma += i;
        }
    }
    
    printf("A soma dos números ímpares é: %d", soma);
    
    return 0;
}