#include <stdio.h>

int main(){
    int matriz[3][3]; //Declaração de uma matriz 3x3 de inteiros
    //Inicialização da matriz usando loops for aninhados
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matriz[i][j] = i + j; //Atribui a soma dos índices ao elemento da matriz
        }
    }
// Exibindo os valores da matriz
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
        }
    }    return 0;
}
