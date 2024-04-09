#include <iostream>

int main(){
    float altura, peso, imc;
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    imc = peso /(altura * altura);
    printf("Seu imc é %.2f\n", imc);

    if(imc < 18.5){
        printf("Categoria: Abaixo do peso\n");
    }
    if(imc >= 18.5 && imc < 25){
        printf("Categoria: Peso normal\n");
    }
    if(imc >= 25 && imc < 30){
        printf("Categoria: Sobrepeso\n");
    }
    if(imc >= 30){
        printf("Categoria: Obeso\n");
    }

}