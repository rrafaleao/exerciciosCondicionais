#include <iostream>
using namespace std;

int main(){
    int num1, num2, soma, subtracao, divisao, multiplicacao;
    char sinal;
    printf("Digite Um número: ");
    scanf("%d", &num1);
    printf("Digite Um número: ");
    scanf("%d", &num2);
    printf("Digite se quer soma, multiplicacao, subtracao ou divisao:");
    scanf("%s", &sinal);

    soma = num1 + num2;
    subtracao = num1 - num2;
    divisao = num1 / num2;
    multiplicacao = num1 * num2;

    
}
    