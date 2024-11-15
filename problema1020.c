#include <stdio.h>

int main() {
    int total_dias, anos, meses, dias;

    scanf("%d", &total_dias);

    anos = total_dias / 365;
    
    meses = (total_dias % 365) / 30;
    
    dias = (total_dias % 365) % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);

    return 0;
}