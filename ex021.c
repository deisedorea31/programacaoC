// Loops aninhados com while

// Programa que imprime uma tabela de multiplicação

#include <stdio.h>

int main() {
    int i = 1, j;
    while(i <= 10) {
        j = 1;
        while(j <= 10) {
            printf("%d\t", i * j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}