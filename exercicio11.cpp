#include <iostream>
using namespace std;

int main(){
    int leads;
    printf("Digite o número de leads que a empresa recebeu: ");
    scanf("%d", &leads);

    if(leads <= 5){
        printf("Quantidade baixa de leads \n");
    }
    else if(leads >= 6){
        printf("Quantidade esperada de leads \n");
    }
    else{
        printf("Quantidade alta de leads \n");
    }
    
    return false;
}