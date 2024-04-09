#include <iostream>

int main(){
    int conv;
    float temp;
    printf("Digite 1 se você quiser converter Fahrenheit para Celsius e 2 se quiser o contrário: ");
    scanf("%d", &conv);
   
    if((conv == 1)){
        printf("Digite quantos Fahrenheit você quer converter para celsius: ");
        scanf("%f", &temp);
    }
    if(conv == 1){
        printf("%.2f\n", (temp - 32) / 1.8);
    }

if((conv == 2)){
        printf("Digite quantos Celsius você quer converter para Fahrenheit: ");
        scanf("%f", &temp);
    }
    if(conv == 2){
        printf("%.2f\n", (temp * 1.8) + 32);
    }

if((conv >= 3)){
    printf("Digite um número válido\n");
}
}