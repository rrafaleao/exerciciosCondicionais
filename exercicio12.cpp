#include <iostream>
using namespace std;

int main(){
    int n1, n2, n3, media, freq;
    printf("Digite a primeira nota: ");
    scanf("%d", &n1);
    printf("Digite a segunda nota: ");
    scanf("%d", &n2);
    printf("Digite a terceira nota: ");
    scanf("%d", &n3);
    printf("Digite sua frequencia: ");
    scanf("%d", &freq);

    media = (n1 + n2 + n3) / (3);

    if((freq < 75) || (media <= 4)){
        printf("você foi reprovado \n");
    }
    if((media >= 7) && (media <= 10)){
        printf("Parabéns! Você foi aprovado \n");
    }
    if ((media >= 6) && (media <= 7)){
        printf("Você está de recuperação \n");
    }
    
    return false;
}