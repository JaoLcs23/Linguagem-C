#include <stdio.h>

int main(){
    int idade;
    
    printf("Insira sua idade: ");
    scanf("%d", &idade);

    if(idade>0 && idade<18){
        printf("Menor de idade");
    }
    else if(idade>=18 && idade<=65){
        printf("Maior de idade");
    }
    else if(idade>65){
        printf("Idosa");
    }
    else{
        printf("Pessoa não é nascida");
    }

    return 0;
}