#include <iostream>
using namespace std;

int main(){
    int x, y;
    printf("Digite o X: ");
    scanf("%d", &x);
    printf("Digite o y: ");
    scanf("%d", &y);

    if((x > 0) && (y > 0)){
        printf("Primeiro Quadrante \n");
    }
    if((x < 0) && (y > 0)){
        printf("Segundo Quadrante \n");
    }
    if((x < 0) && (y < 0)){
        printf("Terceiro Quadrante \n");
    }
    if((x > 0) && (y < 0)){
        printf("Quarto Quadrante \n");
    }
    return false; 
}
