/* Uso do switch
   Exemplo de uso do comando switch em C.
   O programa lê um número de 1 a 3 e exibe o opções de caixa eletrônico.
*/

#include <stdio.h>

int main(){
    int opcao, conta;
    char banco[20]; // Corrigido para char array
    float saldo = 1000; // Exemplo de saldo inicial  
    float valor;

    printf("****Bem-vindo ao caixa eletrônico!****\n");
    printf("Escolha uma opção:\n");
    printf("1. Verificar saldo\n");
    printf("2. Fazer depósito\n");
    printf("3. Fazer saque\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("O seu saldo é: R$ %.2f\n", saldo);
        break;
    case 2:
        printf("Digite o banco de depósito:\n");
        scanf("%S", &banco);
        printf("Digite o valor a ser depositado:\n");
        scanf("%f", &valor);
        saldo += valor; // atualiza o saldo
        printf("Digite a conta para depósito\n");
        scanf("%d", &conta);
        break;
    case 3:
        printf("Digite o valor a ser sacado: "); 
        scanf("%f", &valor);  
        break;
    default:
        printf("Opção inválida! Por favor, escolha uma opção entre 1 e 3.\n");
        break;
        }

        return 0;
}
