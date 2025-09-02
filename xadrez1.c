/*
Desafio: nível aventureiro
Movimentando o Cavalo
Neste desafio, será dada continuidade ao programa do nível básico, 
adicionando a lógica para movimentar o Cavalo no tabuleiro de xadrez. 
A principal diferença é que o Cavalo se move em "L", o que exigirá o uso de loops aninhados 
(um loop dentro do outro) para simular esse movimento.
- O que será feito:
- Implementar, no mesmo programa em C do desafio anterior, 
a lógica para o movimento do Cavalo. O Cavalo se move duas casas em uma direção (horizontal ou vertical) 
e depois uma casa perpendicularmente, formando um "L". 
Para este desafio, o Cavalo deverá se mover duas casas para baixo e uma casa para a esquerda. 
Você precisará usar pelo menos dois loops aninhados, sendo um deles obrigatoriamente um loop for. 
O outro loop pode ser while ou do-while, à sua escolha. 
Assim como nas outras peças, você imprimirá a direção do movimento a cada casa percorrida.

- Requisitos funcionais
Entrada de Dados: Os valores para o número de casas a serem movidas (duas para baixo, uma para a esquerda) 
devem ser definidos no código como variáveis ou constantes.
Lógica de Movimentação: O programa deverá implementar a lógica específica do movimento em "L" do Cavalo 
usando loops aninhados (um loop for e um loop while ou do-while).
Saída de Dados: O programa deverá imprimir no console a direção de cada etapa do movimento do Cavalo 
("Baixo", "Baixo", "Esquerda"), utilizando o comando printf. Para as outras peças as saídas devem seguir o padrão: 
printf("Cima\n");, printf("Baixo\n");, printf("Esquerda\n");, printf("Direita\n");. 
Separe o movimento do Cavalo dos movimentos anteriores com uma linha em branco.
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

    // Movimento do Cavalo: 2 casas para cima e 1 casa para a direita
    printf("\nMovimento do Cavalo:\n");
    int movimentoCompleto = 1; // Flag para controlar o movimento completo do Cavalo
    while(movimentoCompleto--){
        for(int i = 0; i < 2; i++){
            printf("Casa %d: Cima\n", i + 1); // Move 2 casas para cima
        }
        printf("Casa %d: Direita\n", 1); // Move 1 casa para a direita
    }


    return 0;
}