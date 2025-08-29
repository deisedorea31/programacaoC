/*
Operador Ternário
Verificar a temperatura e classificar como "Quente" ou "Frio" usando o operador ternário.
*/ 

#include <stdio.h>

int main() {
    int temperatura = 28;
    int resultado;

    temperatura > 25 ? "Quente" : "Frio";

    printf("A temperatura está: %s\n", resultado ? "Quente" : "Frio");


    return 0;   
}