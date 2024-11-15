#include <stdio.h>

int main()
{
    int n, contDiv, total;
    
    printf("Insira um número inteiro: ");
    scanf("%d", &n);
    
    for(int i = 0; i <= n; i++){
        if(i % 3 == 0){
            printf("%d é múltiplo de 3\n", i);
            total += i;
            contDiv = contDiv + 1;
        }
    }
    
    printf("Têm %d número divisíveis por 3\n", contDiv);
    printf("O resultado total dos números múltiplos de 3 é: %d", total);
    
    return 0;
}