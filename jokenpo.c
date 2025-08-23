// Desenvolver um programa que simule o jogo Jokenpô (Pedra, Papel e Tesoura). 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int jogador, computador;
    srand(time(NULL)); // Inicializa o gerador de números aleatórios

    printf("***Bem vindo ao Jokenpô!***\n");
    printf("Escolha sua jogada:\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    printf("Digite o número correspondente à sua escolha: ");
    scanf("%d", &jogador);

    // Gera a jogada do computador (1, 2 ou 3)
    computador = rand() % 3 + 1; // Gera número entre 1 e 3

    printf("Jogador escolheu: ");
    switch (jogador) {
        case 1:
            printf("Pedra\n");
            break;
        case 2:
            printf("Papel\n");
            break;
        case 3:
            printf("Tesoura\n");
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    printf("Computador escolheu: ");
    switch (computador) {
        case 1:
            printf("Pedra\n");
            break;
        case 2:
            printf("Papel\n");
            break;
        case 3:
            printf("Tesoura\n");
            break;
    }

    // Determina o vencedor
    if (jogador == computador) {
        printf("Empate!\n");
    } else if ((jogador == 1 && computador == 3) ||
               (jogador == 2 && computador == 1) ||
               (jogador == 3 && computador == 2)) {
        printf("Jogador vence!\n");
    } else {
        printf("Computador vence!\n");
    }

    return 0;
}