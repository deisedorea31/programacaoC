// Inicializando uma matriz 3x3 e imprimindo seus elementos

#include <stdio.h>

int main(){
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    printf("O elemento na linha 2, coluna 3 é: %d\n", matriz[1][2]);
    printf("O elemento na linha 3, coluna 1 é: %d\n", matriz[2][0]);
    return 0;
}