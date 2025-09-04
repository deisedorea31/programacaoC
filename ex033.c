/*
Faça um algoritimo que processe e mostre o resultado em um jogo de azar, onde são lidos: -40 números com os resultados; -As apostas contendo
número do jogador (inteiro) e sua aposta (número inteiro). Esses dados terminam quando for lido o 
número de jogador negativo. O programa deve indicar o número de todos os jogadores
que ganharam, ou seja, que sua aposta esteja entre os 20 núimeros sorteados inicialmente.
*/

#include <stdio.h>

int main(){
    int resultados[40], jogador, aposta;
    int i, j, ganhou;

    // Leitura dos 40 números sorteados
    printf("Digite os 40 números sorteados (entre 0 e 99):\n");
    for(i = 0; i < 40; i++){
        scanf("%d", &resultados[i]);
    }

    // Leitura das apostas dos jogadores
    printf("Digite o número do jogador e sua aposta (número negativo para terminar):\n");
    while(1){
        scanf("%d", &jogador);
        if(jogador < 0) break; // Termina se o número do jogador for negativo
        scanf("%d", &aposta);

        // Verifica se a aposta está entre os números sorteados
        ganhou = 0;
        for(j = 0; j < 40; j++){
            if(resultados[j] == aposta){
                ganhou = 1;
                break;
            }
        }

        // Mostra o resultado para o jogador
        if(ganhou){
            printf("Jogador %d ganhou com a aposta %d!\n", jogador, aposta);
        } else {
            printf("Jogador %d não ganhou com a aposta %d.\n", jogador, aposta);
        }
    }

    return 0;
}