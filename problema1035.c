#include <stdio.h>

int main() {
    int A, B, C, D;

    // Leitura dos quatro valores
    scanf("%d %d %d %d", &A, &B, &C, &D);

    // Verificação das condições para aceitar os valores
    if (B > C && D > A && (C + D) > (A + B) && C > 0 && D > 0 && A % 2 == 0) {
        printf("Valores aceitos\n");
    } else {
        printf("Valores nao aceitos\n");
    }

    return 0;
}

/*#include <stdio.h>

int main() {
    int A, B, C, D;

    scanf("%d %d %d %d", &A, &B, &C, &D);

    if (B>C || D>A)
    {
        if (C+D > A+B)
        {
            if (C>0 || D>0)
            {
                if (A%2==0)
                {
                    printf("Valores aceitos");
                }   
            }
        }
    }

    else{
        printf("Valores nao aceitos");
    }

    return 0;
}*/