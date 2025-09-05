/*
Desafio: nível mestre
Habilidades especiais e áreas de efeito
Neste desafio final, será adicionaod um toque estratégico ao seu jogo de Batalha Naval, 
implementando habilidades especiais com áreas de efeito distintas. 
Continuará trabalhando no mesmo projeto iniciado nos níveis anteriores, 
adicionando a lógica para representar e exibir essas habilidades no tabuleiro.
- O que será feito:
1- Representar o Tabuleiro: Utilizar uma matriz (array bidimensional) para representar o tabuleiro do Batalha Naval. 
Neste nível novato, o tabuleiro terá um tamanho fixo 10x10. Inicialize todas as posições do tabuleiro com o valor 0, 
representando água.
2- Criar Matrizes de Habilidade: Crie três matrizes separadas, cada uma representando a área de efeito de uma habilidade especial:
Cone: Uma matriz que represente uma área em forma de cone, com o ponto de origem no topo e expandindo-se em direção à base. Imagine um cone apontando para baixo. A matriz deve representar essa forma, com o ponto de origem (o topo do cone) na parte superior e a área se expandindo para baixo.
Cruz: Uma matriz que represente uma área em forma de cruz, com o ponto de origem no centro. 
Octaedro: Uma matriz que represente a vista frontal de um octaedro (imagine como se estivesse olhando diretamente para ele), resultando em um formato que se assemelha a um losango, com o ponto de origem no centro.
As matrizes de habilidade devem indicar quais posições são afetadas pela habilidade com o valor 1, e quais não são afetadas com o valor 0. Defina um tamanho razoável para as matrizes de habilidade (por exemplo, 5x5 ou 7x7).
Integrar Habilidades ao Tabuleiro:
Defina um ponto de origem para cada habilidade no tabuleiro (coordenadas linha e coluna). Este ponto de origem será o centro da habilidade, a partir do qual a área de efeito será calculada.
Crie a lógica para sobrepor a matriz de habilidade ao tabuleiro, centrando a matriz de habilidade no ponto de origem definido.
As posições do tabuleiro que estiverem dentro da área de efeito da habilidade (valor 1 na matriz de habilidade) devem ser marcadas visualmente. Utilize um valor diferente de 0 e 3 para representar as posições afetadas pela habilidade (por exemplo, o valor 5).
Exibir o Tabuleiro com Habilidade: Utilize loops aninhados e o comando printf para exibir o tabuleiro no console, mostrando as áreas afetadas pelas habilidades. Utilize caracteres diferentes para representar:
Água (0)
Navio (3)
Área afetada pela habilidade (5)
Requisitos funcionais
O programa deve criar as matrizes de efeito para as habilidades Cone, Cruz e Octaedro.
As matrizes de habilidade devem utilizar os valores 0 e 1 para indicar as áreas não afetadas e afetadas, respectivamente.
O programa deve permitir definir um ponto de origem para cada habilidade no tabuleiro.
O programa deve sobrepor as matrizes de habilidade ao tabuleiro, marcando as áreas afetadas.
A saída do programa deve exibir o tabuleiro com os navios e as áreas de efeito das habilidades, utilizando diferentes caracteres para cada elemento.
A construção das matrizes de habilidade e a sobreposição no tabuleiro devem obrigatoriamente utilizar estruturas de repetição aninhadas e condicionais.
*/

#include <stdio.h>

#define TAM 10
#define HABIL 5  // tamanho das matrizes de habilidade (5x5)

// Função para imprimir o tabuleiro com números
void imprimirTabuleiro(int tabuleiro[TAM][TAM]) {
    int i, j;

    // Cabeçalho com letras
    printf("   ");
    for (j = 0; j < TAM; j++) {
        printf(" %c ", 'A' + j);
    }
    printf("\n");

    // Corpo do tabuleiro
    for (i = 0; i < TAM; i++) {
        printf("%2d ", i); // índice da linha
        for (j = 0; j < TAM; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int i, j;

    // --- Matrizes das habilidades ---
    int cone[HABIL][HABIL] = {
        {0,0,1,0,0},
        {0,1,1,1,0},
        {1,1,1,1,1},
        {0,0,0,0,0},
        {0,0,0,0,0}
    };

    int cruz[HABIL][HABIL] = {
        {0,0,1,0,0},
        {0,0,1,0,0},
        {1,1,1,1,1},
        {0,0,1,0,0},
        {0,0,1,0,0}
    };

    int octaedro[HABIL][HABIL] = {
        {0,0,1,0,0},
        {0,1,1,1,0},
        {1,1,1,1,1},
        {0,1,1,1,0},
        {0,0,1,0,0}
    };

    // --- Posições de origem ---
    int origemConeL = 1, origemConeC = 1;
    int origemCruzL = 5, origemCruzC = 5;
    int origemOctL = 7, origemOctC = 7;

    // --- Tabuleiro base (com navios) ---
    int base[TAM][TAM] = {0};

    // Navios fixos
    for(i = 0; i < 3; i++) base[2][3+i] = 3; // horizontal
    for(i = 0; i < 3; i++) base[5+i][6] = 3; // vertical
    for(i = 0; i < 3; i++) if(0+i<TAM && 0+i<TAM) base[0+i][0+i] = 3; // diagonal 1
    for(i = 0; i < 3; i++) if(7+i<TAM && 2-i>=0) base[7+i][2-i] = 3; // diagonal 2

    // --- Gerar e imprimir tabuleiros separadamente ---

    // Cone
    int tabCone[TAM][TAM];
    for(i=0;i<TAM;i++) for(j=0;j<TAM;j++) tabCone[i][j] = base[i][j];
    for(i=0;i<HABIL;i++){
        for(j=0;j<HABIL;j++){
            if(cone[i][j]==1){
                int linha = origemConeL + i - HABIL/2;
                int coluna = origemConeC + j - HABIL/2;
                if(linha>=0 && linha<TAM && coluna>=0 && coluna<TAM && tabCone[linha][coluna]==0)
                    tabCone[linha][coluna]=5;
            }
        }
    }
    printf("\n=== Tabuleiro com Cone ===\n");
    imprimirTabuleiro(tabCone);

    // Cruz
    int tabCruz[TAM][TAM];
    for(i=0;i<TAM;i++) for(j=0;j<TAM;j++) tabCruz[i][j] = base[i][j];
    for(i=0;i<HABIL;i++){
        for(j=0;j<HABIL;j++){
            if(cruz[i][j]==1){
                int linha = origemCruzL + i - HABIL/2;
                int coluna = origemCruzC + j - HABIL/2;
                if(linha>=0 && linha<TAM && coluna>=0 && coluna<TAM && tabCruz[linha][coluna]==0)
                    tabCruz[linha][coluna]=5;
            }
        }
    }
    printf("\n=== Tabuleiro com Cruz ===\n");
    imprimirTabuleiro(tabCruz);

    // Octaedro
    int tabOct[TAM][TAM];
    for(i=0;i<TAM;i++) for(j=0;j<TAM;j++) tabOct[i][j] = base[i][j];
    for(i=0;i<HABIL;i++){
        for(j=0;j<HABIL;j++){
            if(octaedro[i][j]==1){
                int linha = origemOctL + i - HABIL/2;
                int coluna = origemOctC + j - HABIL/2;
                if(linha>=0 && linha<TAM && coluna>=0 && coluna<TAM && tabOct[linha][coluna]==0)
                    tabOct[linha][coluna]=5;
            }
        }
    }
    printf("\n=== Tabuleiro com Octaedro ===\n");
    imprimirTabuleiro(tabOct);

    return 0;
}
