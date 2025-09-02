
/*
Desafio: nível mestre
Criando Movimentos Complexos
Neste desafio final, o programa de xadrez será aprimorado, explorando técnicas avançadas de programação para simular os movimentos das peças. 
- O que será feito:
- Modificar o programa em C, que já contém a movimentação da Torre, Bispo, Rainha e Cavalo, realizando as seguintes alterações:
- Recursividade: Substituir os loops simples que controlam os movimentos da Torre, Bispo e Rainha por funções recursivas. 
- Cada função recursiva deverá simular o movimento da respectiva peça, imprimindo a direção correta a cada casa.
- Loops Complexos para o Cavalo: Aprimorar a movimentação do Cavalo, utilizando loops aninhados com múltiplas variáveis e/ou condições. 
- Usar continue e break para controlar o fluxo do loop de forma mais precisa. 
- O movimento do Cavalo agora será para cima e para a direita, em "L" (duas casas para cima e uma para a direita).
- Bispo com Loops Aninhados: O Bispo deve ser implementado com recursividade, e também com loops aninhados, 
utilizando o loop mais externo para o movimento vertical, e o mais interno para o movimento horizontal.
- Requisitos funcionais
- Entrada de Dados: Os valores para o número de casas a serem movidas (para recursão) e as condições dos loops (para o Cavalo) 
devem ser definidos diretamente no código, como variáveis ou constantes.
-Recursividade (Torre, Bispo e Rainha): Implementar funções recursivas para simular o movimento de cada peça, substituindo os loops originais.
- Loops Complexos (Cavalo): Utilize loops aninhados com múltiplas variáveis e/ou condições para simular o movimento do Cavalo em "L" (duas casas para cima e uma para a direita).
- Loops Aninhados (Bispo): Utilize loops aninhados para o bispo, sendo o loop mais externo o vertical, e o mais interno o horizontal.
- Saída de Dados: O programa deverá imprimir no console, de forma clara e organizada, a direção do movimento a cada casa percorrida por cada peça. 
- Utilizar o comando printf para exibir as informações. 
- As saídas devem seguir o padrão: printf("Cima\n");, printf("Baixo\n");, printf("Esquerda\n");, printf("Direita\n");. 
- Utilizar linhas em branco para separar a saída de cada peça.
*/

#include <stdio.h>

// Função recursiva para mover a Torre
void moverTorre(int casas) {
    if (casas > 0) { // caso base
        printf("Direita\n");
        moverTorre(casas - 1); // chamada recursiva
    }
}

// Função recursiva + loops aninhados para mover o Bispo
void moverBispo(int vertical, int horizontal) {
    if (vertical > 0) { // controla movimento vertical
        for (int j = 0; j < horizontal; j++) { // loop horizontal
            printf("Direita\n");
        }
        printf("Cima\n");
        moverBispo(vertical - 1, horizontal); // recursão
    }
}

// Função recursiva para mover a Rainha
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

// Movimento complexo do Cavalo com loops e controle de fluxo
void moverCavalo(int movimentos) {
    int i, j;
    for (i = 1, j = 2; movimentos > 0; i++, j--) {
        if (j == 0) { // quando terminar o movimento vertical
            printf("Direita\n");
            break; // sai do loop, movimento em L completo
        }
        printf("Cima\n");
        if (i > 2) { // segurança extra para não ultrapassar
            continue;
        }
        movimentos--;
    }
}

int main() {
    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // Movimento do Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(4, 1); // 4 casas na vertical, 1 passo na horizontal por vez
    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(3);
    printf("\n");

    // Movimento do Cavalo
    printf("Movimento do Cavalo:\n");
    moverCavalo(3); // movimento em L (2 cima + 1 direita)
    printf("\n");

    return 0;
}
