#include <stdio.h>

int main(){
    int matriz1[2][2] = {{1, 2}, {3, 4}}; //Declaração e inicialização da primeira matriz 2x2
    int matriz2[2][2] = {{5, 6}, {7, 8}}; //Declaração e inicialização da segunda matriz 2x2
    int soma[2][2]; //Declaração da matriz para armazenar a soma

    //Somando as duas matrizes usando loops for aninhados
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            soma[i][j] = matriz1[i][j] + matriz2[i][j]; //Soma dos elementos correspondentes
        }
    }
    // Exibindo os valores da matriz soma
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("soma[%d][%d] = %d\n", i, j, soma[i][j]);
        }
    }
    return 0;
}