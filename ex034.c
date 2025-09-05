#include <stdio.h>

#define LINHAS 5
#define COLUNAS 5

int main(){
    int matriz[LINHAS][COLUNAS]; //Declaração de uma matriz 5x5 de inteiros
  
    int soma = 0; //Variável para armazenar a soma dos elementos da matriz
    //Inicialização da matriz usando loops for aninhados
    for(int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){
           soma++;
           matriz[i][j] = soma; //Atribui o valor da soma ao elemento da matriz
           printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}