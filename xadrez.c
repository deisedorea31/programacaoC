/*
Desafio: nível novato
Movimentando as Peças do xadrez
Este desafio foca na movimentação das peças de xadrez usando estruturas de repetição em C. 
Será aplicado o que foi aprendido sobre for, while e do-while para simular movimentos no tabuleiro.
O que sera feito:
- Criar um único programa em C que simule o movimento de três peças: Torre, Bispo e Rainha. 
- Para cada peça, utilize uma estrutura de repetição diferente (for, while ou do-while) para simular seu movimento. 
- O programa deverá imprimir no console a direção do movimento a cada casa percorrida pela peça.
Instruções:
1. Torre: Move-se em linha reta horizontalmente ou verticalmente. 
O programa deverá simular o movimento da Torre cinco casas para a direita.
2. Bispo: Move-se na diagonal. 
O programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
3. Rainha: Move-se em todas as direções. 
O programa deverá simular o movimento da Rainha oito casas para a esquerda.
*/

#include <stdio.h>

int main() {
    int i;

    // Movimento da Torre: 5 casas para a direita
    printf("Movimento da Torre:\n");
    for(i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i); // Imprime a direção para cada casa
    }

    // Movimento do Bispo: 5 casas na diagonal para cima e à direita
    printf("\nMovimento do Bispo:\n");
    i = 1;
    while(i <= 5) {
        if(i <=3) {
            printf("Casa %d: Cima, Direita\n", i);
        } else {
            printf("Casa %d: Cima, Direita (movimento limitado)\n", i);
        }   
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }

    // Movimento da Rainha: 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    i = 1;
    do {
        printf("Casa %d: Esquerda\n", i);
        i++;
    } while(i <= 8);

    return 0;
}