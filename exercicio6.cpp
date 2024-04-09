#include <iostream>

int main(){
    int ano;
    printf("digite um ano: ");
    scanf("%d", &ano);
    if((ano % 4 == 0) && (ano % 100 != 0) || (ano % 400 == 0)){
    printf("Seu ano é bissexto \n");
}
else{
    printf("o ano não é bissexto \n");
}
return 0;
}
