#include <stdio.h>

int main(){
    float nota;

    printf("Insira a nota: ");
    scanf("%f", &nota);

    if (nota <= 10 || nota >= 8)
    {
        printf("Aluno conceito A");
    }
    
    else if (nota < 8 || nota >= 6)
    {
        printf("Aluno conceito B");
    }
    
    else if (nota < 6 || nota >= 3)
    {
        printf("Aluno conceito C");
    }

    else if (nota < 3)
    {
        printf("Aluno conceito D");
    }

    return 0;
}