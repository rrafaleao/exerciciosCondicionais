#include <iostream>

int main(){
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    if (num > 0){
        printf("Seu número é positivo \n");
    }
    else{
        printf("Seu número é negativo \n");
    }
    return 0;
}