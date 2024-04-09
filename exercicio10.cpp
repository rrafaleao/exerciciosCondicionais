#include <iostream>
using namespace std;

int main (){
    int saldo, ret;
    printf("Digite quanto você quer retirar do caixa: ");
    scanf("%d", &ret);

    saldo = 500;

    if(saldo >= ret){
        printf("Você retirou %d Reais \n", ret);
    }
    else{
        printf("Saque Negado\n");
    }
}