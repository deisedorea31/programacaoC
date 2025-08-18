/*
Operadores lógicos
&&, ||, !
*/

#include <stdio.h>

int main() {
    // Exemplo de uso do operador lógico "E (AND)" (&&)
    int a = 5;
    int b = 10;

    if (a > 0 && b > 0) {
        printf("Ambos os números são positivos\n");
    }

    // Exemplo de uso do operador lógico "OU (OR)" (||)
    a = 5;
    b = -10;

    if (a > 0 || b > 0) {
        printf("Pelo menos um dos números é positivo\n");
    }

    // Exemplo de uso do operador lógico "NÃO (NOT)" (!)
    a = -5;

    if (!(a > 0)) {
        printf("a não é um número positivo\n");
    }

    return 0;
}

