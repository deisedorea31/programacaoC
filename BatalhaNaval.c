/*
Desafio: nível novato
Posicionando Navios no Tabuleiro
Neste primeiro desafio, será dado o primeiro passo na construção do seu jogo de Batalha Naval. 
Serão utilizados os conhecimentos de vetores (arrays unidimensionais) em C para representar um tabuleiro simplificado 
e posicionar dois navios nele: um na vertical e outro na horizontal. 
- O que será feito:
1- Representar o Tabuleiro: Utilizar uma matriz (array bidimensional) para representar o tabuleiro do Batalha Naval. 
Neste nível novato, o tabuleiro terá um tamanho fixo 10x10. Inicialize todas as posições do tabuleiro com o valor 0, representando água.
2- Posicione os Navios: Declare e inicialize dois vetores (arrays unidimensionais) para representar os navios. 
Cada navio ocupará um número fixo de posições no tabuleiro (defina esse tamanho, por exemplo, 3 posições). 
Um navio será posicionado horizontalmente e o outro verticalmente. 
Serão representadas as posições ocupadas pelos navios na matriz do tabuleiro com o valor 3. 
Serão escolhidas as coordenadas iniciais de cada navio e garantir que eles estejam completamente dentro dos limites do tabuleiro 
e não se sobreponham. 
Dica: O posicionamento do navio pode ser feito copiando o valor 3 de cada posição do vetor do navio para as posições correspondentes na
matriz do tabuleiro, de acordo com a orientação (horizontal ou vertical) do navio.
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
*/

#include <stdio.h>

int main(){
    int tabuleiro[10][10] = {0}; // Inicializa o tabuleiro 10x10 com 0 (água)
    int navioHorizontal[3] = {3, 3, 3}; // Navio horizontal de tamanho 3
    int navioVertical[3] = {3, 3, 3};   // Navio vertical de tamanho 3
    int linhaH = 2, colunaH = 3; // Coordenadas iniciais do navio horizontal
    int linhaV = 5, colunaV = 6; // Coordenadas iniciais do navio vertical
    int i, j;
    // Posiciona o navio horizontal no tabuleiro
    for(i = 0; i < 3; i++){
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
    }   
    // Posiciona o navio vertical no tabuleiro
    for(i = 0; i < 3; i++){
        tabuleiro[linhaV + i][colunaV] = navioVertical[i];
    }       
    // Exibe o tabuleiro
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }               
    return 0;
}