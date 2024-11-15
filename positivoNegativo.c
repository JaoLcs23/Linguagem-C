#include <stdio.h>

int main(){
    int num;

    printf("Insira um número: ");
    scanf("%d", &num);

    if(num<0){
        printf("O número é negativo");
    }
    else if(num==0){
        printf("O número é 0");
    }
    else if(num>0){
        printf("O número é positivo");
    }
}