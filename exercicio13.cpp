#include <iostream>
using namespace std;

int main (){
    int nota, recup, presen, calculo;
    printf("Digite a nota que tirou: ");
    scanf("%d", &nota);
    printf("Digite a nota da recuperação que tirou: ");
    scanf("%d", &recup);
    printf("Digite sua presença: ");
    scanf("%d", &presen);
    calculo = (nota + recup);

    if((presen < 75) || (calculo < 10)){
        printf("Reprovado \n");
    }
    if((calculo >= 10) && (presen >= 75)){
        printf("Aprovado \n");
    }

    return false;
}