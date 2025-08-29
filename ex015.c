// Maior, menor ou igual


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

// Gerar número aleatório
srand(time(0));
numeroComputador = rand() % 100 + 1; // Número entre 1 e 100

// Início do jogo
printf("Bem-vindo ao jogo de adivinhação!\n");
printf("Escolha o número e o tipo de comparação:\n");
printf("M. - Maior\n");
printf("N. - Menor\n");
printf("I. - Igual\n");

printf("Escolha a comparação: ");
scanf("%c", &tipoComparacao);

printf("Escolha o número (1-100): ");
scanf("%d", &numeroJogador);

// Exibir o número do computador
printf("Número do computador: %d\n", numeroComputador);

switch (tipoComparacao) {
    case 'M':
    case 'm':
        resultado = numeroJogador > numeroComputador ? 1 : 0;
        if (numeroJogador > numeroComputador) {
            printf("Você venceu! Seu número é maior.\n");
        } else {
            printf("Você perdeu! Seu número não é maior.\n");
        }
        break;
    case 'N':
    case 'n':
        resultado = numeroJogador < numeroComputador ? 1 : 0;
        if (numeroJogador < numeroComputador) {
            printf("Você venceu! Seu número é menor.\n");
        } else {
            printf("Você perdeu! Seu número não é menor.\n");
        }
        break;
    case 'I':
    case 'i':
        resultado = numeroJogador == numeroComputador ? 1 : 0;
        if (numeroJogador == numeroComputador) {
            printf("Você venceu! Seu número é igual.\n");
        } else {
            printf("Você perdeu! Seu número não é igual.\n");
        }
        break;
    
        printf("O número do computador é: %d\n e o do jogador é: %d\n", numeroComputador, numeroJogador);

    default:
        printf("Opção inválida!\n");
        break;

}
}