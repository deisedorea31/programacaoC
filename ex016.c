/*
Estruturas de repetição - while
*/

// Utilização de loops while para leitura de dados até que uma condição seja satisfeita.
#include <stdio.h>

int main() {
    int num;

    printf("Digite um número (negativo para sair): \n");
    scanf("%d", &num);

    while (num >=0){
        printf("Você digitou: %d\n", num);

        printf("Digite outro número (negativo para sair): \n");
        scanf("%d", &num);
    printf("Número negativo digitado. Saindo...\n");

    return 0;
    }
}

