#include <stdio.h>

int main(){
    int vetor[5] = {1, 2, 3, 4, 5}; //Declaração e inicialização de um vetor de inteiros com 5 elementos
    int soma = 0; //Variável para armazenar a soma dos elementos do vetor

    //Somando os elementos do vetor usando loop for
    for(int i = 0; i < 5; i++){
        soma += vetor[i]; //Adiciona o elemento atual à soma
    }
    printf("A soma dos elementos do vetor é: %d\n", soma); //Exibe o resultado da soma
}