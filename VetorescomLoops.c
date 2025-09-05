#include <stdio.h>

int main(){
    int vetor[5]; //Declaração de um vetor de inteiros com 5 elementos
    //Inicialização do vetor usando loop for
    for(int i = 0; i < 5; i++){
        vetor[i] = i * 2; //Atribui o dobro do índice ao elemento do vetor
    }
    // Exibindo os valores do vetor
    for(int i = 0; i < 5; i++){
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
}