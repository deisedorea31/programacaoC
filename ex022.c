// Loops aninhados com do-while

// Programa que imprime uma tabela de multiplicação

#include <stdio.h>

int main() {
    int i = 1, j;
    do {
        j = 1;
        do {
            printf("%d\t", i * j);
            j++;
        } while(j <= 10);
        printf("\n");
        i++;
    } while(i <= 10);
    return 0;
}