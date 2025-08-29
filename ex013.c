/* 
Operador Ternário 
Determinação de maior número entre dois valores usando o operador ternário.
*/

#include <stdio.h>

int main() {
    int num1 = 10, num2 = 20;
    int maior;

    maior = (num1 > num2) ? num1 : num2;

    printf("O maior número entre %d e %d é: %d\n", num1, num2, maior);

    return 0;

}