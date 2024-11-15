#include <stdio.h>

int main() {
    int tempo, velMed;
    double gasto;

    scanf("%d %d", &tempo, &velMed);

    gasto = (tempo * velMed) / 12.0;

    printf("%.3lf\n", gasto);

    return 0;
}
