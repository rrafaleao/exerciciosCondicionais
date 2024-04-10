#include <iostream>
using namespace std;

int main(){
    int num1, num2, sinal;
    printf("Digite Um número: ");
    scanf("%d", &num1);
    printf("Digite Um número: ");
    scanf("%d", &num2);
    printf("Digite 1 se quer somar, 2 multiplicar, 3 subtrair, 4 dividir: ");
    scanf("%d", &sinal);
    
    if(sinal == 1){
        printf("%d\n", num1 + num2);
    }
    if(sinal == 2){
        printf("%d\n", num1 * num2);
    }
    if (sinal == 3){
        printf("%d\n", num1 - num2);
    }
    if(sinal == 4){
        printf("%d\n", num1 / num2);
    }
}
    