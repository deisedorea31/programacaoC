/* Criar um menu interativo de um jogo de advinhação que apresenta ao usuário três opções:
    1. Iniciar novo jogo
    2. Carregar regras
    3. Sair do jogo
    
    O programa deve solicitar ao usuário que escolha uma opção e, em seguida,
    exibir uma mensagem correspondente à escolha feita. 
    O usuário precisa acertar um número entre 1 e 10.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main() {
        int opcao, regras;
        int numeroSecreto, palpite;

        printf("***Bem-vindo ao jogo de adivinhação!***\n");

        printf("Menu principal \n");
        printf("1. Iniciar novo jogo \n");
        printf("2. Carregar regras \n");
        printf("3. Sair do jogo \n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
          srand(time(0));
          numeroSecreto = rand() % 10; // Gera um número aleatório entre 1 e 9
          printf("Digite um número entre 0 e 9: ");
          scanf("%d", &palpite);
          if (numeroSecreto == palpite) {
              printf("Parabéns! Você acertou o número!\n");
          } else {
              printf("Você errou! O número secreto é: %d.\n", numeroSecreto);
          }
          break;
        case 2:
          printf("***As regras são:***\n");
          printf("1. Digite a opção relativa as regras do jogo.\n");
          scanf("%d", &regras);         
          switch (regras)
          {
          case 1:
              printf("Regra 1: \n");
              break;
          case 2:
              printf("Regra 2: \n");
              break;
          }
            break;
        case 3:
          printf("Saindo do jogo...\n");
          exit(0);
            break;
        default:
            printf("Opção inválida. Tente novamente.\n");
            break;
        }
    }