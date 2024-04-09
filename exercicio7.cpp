#include <iostream>

int main(){
    int conv;
    float temp;
    printf("Digite 1 se você quiser converter Fahrenheit para Celsius e 2 se quiser o contrário: ");
    scanf("%d", &conv);
    printf("Digite a temperatura que quer converter: ");
    scanf("%f", &temp);

    if((conv == 1)){
        printf("%.2f", (temp * 1.8) + 32 );
}
    if((conv == 2)){
        printf("%.2f", (temp - 32 ) / 1.8);
    }
    else{
        printf("digite um número válido na primeira pergunta");
    }
}