#include <iostream>

using namespace std;

int main (){
    int n1, n2, n3;
    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite um número: ");
    scanf("%d", &n2);
    printf("Digite um número: ");
    scanf("%d", &n3);
    if((n1 == n2) && (n2 == n3)){
        printf("seu triangulo isosceles \n");
    }
    else {
        printf("Seu triangulo é Escaleno \n");
    }
    return 0;
}