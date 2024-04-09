#include <iostream>

int main (){
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    if((num % 3 == 0)&&(num % 5 == 0)){
    printf("seu numero é divisivel por 3 e 5\n");
}
else {
    printf("Seu numero NÃO é divisivel por 3 e 5\n");
}
return 0;
}
