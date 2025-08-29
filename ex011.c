// Operador Ternário

// Veriricar se uma pessoa é maior ou menor de idade usando o operador ternário

#include <stdio.h>

int main() {
    int idade = 16;
    const char *resultado;
    
   resultado = (idade >= 18) ? "Maior de idade" : "Menor de idade";

    printf("%s\n", resultado);
    
    return 0;
}