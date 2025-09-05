/*
Desafio: nível intermediário
Tabuleiro Completo e Navios Diagonais
Neste segundo desafio, será aprimorado o jogo, adicionando a complexidade de navios posicionados na diagonal, 
dando continuidade ao código que desenvolvido no Desafio do Nível Novato. 
Serão utilizados os conhecimentos de vetores (arrays unidimensionais) em C para representar um tabuleiro simplificado 
e posicionar dois navios nele: um na vertical e outro na horizontal. 
- O que será feito:
1- Representar o Tabuleiro: Utilizar uma matriz (array bidimensional) para representar o tabuleiro do Batalha Naval. 
Neste nível novato, o tabuleiro terá um tamanho fixo 10x10. Inicialize todas as posições do tabuleiro com o valor 0, 
representando água.
2- Posicionar Quatro Navios: Posicione quatro navios no tabuleiro.
Dois navios devem estar posicionados horizontalmente ou verticalmente (como no nível anterior).
Os outros dois navios devem ser posicionados na diagonal. Considere que um navio diagonal ocupa posições onde a 
linha e a coluna aumentam ou diminuem simultaneamente (ex: tabuleiro[i][i] ou tabuleiro[i][9-i] para um tabuleiro 10x10).
Represente as posições ocupadas pelos navios com o valor 3.
Escolha as coordenadas iniciais.
Valide que as posições dos navios estejam dentro dos limites do tabuleiro e que não se sobreponham. 
3- Exibir o Tabuleiro: Utilizar loops aninhados e o comando printf para exibir o tabuleiro no console. 
Mostrar a matriz completa, com 0s representando água e 3s representando as partes dos navios. 
A saída deve ser clara e organizada, permitindo visualizar facilmente a posição dos navios. 
Dica: Imprima um espaço ou outro caractere separador entre os elementos da matriz para facilitar a visualização.
Requisitos funcionais
O programa deve receber as coordenadas iniciais (linha e coluna) de cada navio como entrada (pode ser definido diretamente no código).
O programa deve validar se as coordenadas e o tamanho dos navios são válidos dentro dos limites do tabuleiro.
O programa deve garantir que os navios não se sobreponham.
O programa deve exibir o tabuleiro no console com os navios posicionados corretamente.
Requisitos não funcionais
Performance: O programa deve executar de forma eficiente, sem causar atrasos perceptíveis.
Documentação: O código deve ser bem documentado, com comentários claros explicando a lógica e o propósito de cada parte do programa. 
Utilize comentários para explicar a função de cada variável, loop e bloco de código.
Legibilidade: O código deve ser escrito de forma clara, organizada e fácil de entender, com nomes de variáveis descritivos e indentação 
consistente.
Simplificações para o nível básico
O tamanho do tabuleiro e dos navios é fixo (10x10).
Os navios têm tamanho fixo igual a 3.
As coordenadas dos navios são definidas diretamente no código, sem input do usuário.
Não é necessário implementar a lógica do jogo (ataques, acertos, etc.) neste nível.
A validação de sobreposição de navios pode ser simplificada.
Este desafio visa fortalecer as habilidades em manipulação de matrizes e loops. 
A validação de sobreposição de navios pode ser simplificada.
*/

#include <stdio.h>

int main(){
    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro 10x10 com 0 (água)
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};
    int navioDiagonal1[3] = {3, 3, 3};
    int navioDiagonal2[3] = {3, 3, 3};

    // Coordenadas iniciais dos navios
    int linhaH = 2, colunaH = 3;
    int linhaV = 5, colunaV = 6;
    int linhaD1 = 0, colunaD1 = 0;
    int linhaD2 = 7, colunaD2 = 2;
    int i, j;

    // Posiciona o navio horizontal
    for(i = 0; i < 3; i++){
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
    }   

    // Posiciona o navio vertical
    for(i = 0; i < 3; i++){
        tabuleiro[linhaV + i][colunaV] = navioVertical[i];
    }       

    // Posiciona o navio diagonal 1 (cima-esquerda para baixo-direita)
    for(i = 0; i < 3; i++){
        if(linhaD1 + i < 10 && colunaD1 + i < 10){
            tabuleiro[linhaD1 + i][colunaD1 + i] = navioDiagonal1[i];
        }
    }

    // Posiciona o navio diagonal 2 (cima-direita para baixo-esquerda)
    for(i = 0; i < 3; i++){
        if(linhaD2 + i < 10 && colunaD2 - i >= 0){
            tabuleiro[linhaD2 + i][colunaD2 - i] = navioDiagonal2[i];
        }
    }

    // Exibe o tabuleiro com numeração de linhas e colunas
    printf("***Tabuleiro Batalha Naval***\n\n");

     // Cabeçalho das colunas com letras
    printf("   "); // Espaço para coluna das linhas
    for(j = 0; j < 10; j++){
        printf(" %c ", 'A' + j); // Letras de A a J
    }
    printf("\n");

    // Corpo do tabuleiro
    for(i = 0; i < 10; i++){
        printf("%2d ", i); // Número da linha
        for(j = 0; j < 10; j++){
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
