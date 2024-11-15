#include <stdio.h>

int main(){
    int cont=0;

    for(int i=1; i<=20; i++){
        if(i%2 == 0){
            printf("%d\n", i);
            cont++;
        }
    }

    printf("Numero total de pares: %d", cont);
    
    return 0;
}