💻 Exercícios Resolvidos em C

🎮 Projeto Prático 1 - Caixa Eletrônico
Simulação de um caixa eletrônico, com verificação de saldo, depósito e saque
Programa que imprime o nome do dia da semana com base em números de 1 a 7
Jogo de advinhação

🎮 Projeto Prático 2 – Super Trunfo de Países
Durante os estudos, desenvolvi um mini-projeto inspirado no jogo Super Trunfo, que foi sendo aprimorado a cada módulo:
1. Cadastro inicial das cartas: Estado (A–H), código da carta, nome da cidade, população, área, PIB e pontos turísticos.
2. Entrada via teclado e exibição formatada na tela.
3. Cálculos adicionais
4. Implementação da densidade populacional e PIB per capita.
5. Exibição dos resultados junto às informações cadastradas.
6. Comparação de cartas
7. Implementação da lógica de comparação entre atributos.
8. Uso de estruturas de decisão (if / else).
9. Será implementado um menu interativo usando switch para que o jogador possa escolher o atributo de comparação entre duas cartas de países.
10. Exibição do Resultado: Mostrar na tela, de forma clara, o resultado da comparação, incluindo:
a. O nome dos dois países.
b. A escolha de dois atributos.
c. Mostrar os atributos usados na comparação.
d. Evitar a repetição na escolha dos atributos
e. A soma dos valores dos atributo para cada carta.
f. Qual carta venceu.
g. Em caso de empate, exibir a mensagem "Empate!".

📌 Esse projeto foi importante para aplicar conceitos como entrada/saída, variáveis, operadores matemáticos, relacionais e lógicos, além de reforçar o pensamento computacional.

🎮 Projeto Prático 3 – Jokenpô
🪨📄✂️ Jokenpô em C
Este projeto é uma simulação do clássico jogo Jokenpô (Pedra, Papel e Tesoura), implementado em linguagem C.
O programa permite que o usuário jogue contra o computador, que faz sua escolha de forma aleatória.
🚀 Funcionalidades
1. Jogar contra o computador.
2. Entrada de escolha do jogador: 1 - Pedra, 2 - Papel, 3 - Tesoura.
3. Geração aleatória da jogada do computador.
4. Exibição do vencedor da rodada.
Possibilidade de jogar várias vezes até decidir sair.
📚 Estudei
Biblioteca stdio.h → Entrada e saída de dados.
Biblioteca stdlib.h → Funções de aleatoriedade (rand, srand).
Biblioteca time.h → Usada para gerar sementes aleatórias.
Estrutura switch → Controle de fluxo para verificar a escolha do jogador e determinar o vencedor.
🎯 Objetivo do projeto
Este programa foi desenvolvido como exercício prático para aprimorar lógica de programação em C, uso de estruturas de decisão (switch) e funções de geração aleatória.

🎮 Projeto Prático 4 – Jogo de Xadrez
Descrição do Projeto
Movimentando as Peças do xadrez
Este desafio foca na movimentação das peças de xadrez usando estruturas de repetição em C. Será aplicado o que foi aprendido sobre for, while e do-while para simular movimentos no tabuleiro.
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
- Requisitos funcionais
- Entrada de Dados: Os valores para o número de casas a serem movidas serão definidos diretamente no código através de variáveis ou constantes.
- Lógica de Movimentação: Cada programa deverá implementar a lógica de movimento específica de cada peça (Torre, Bispo, Rainha).
- Saída de Dados: O programa deverá imprimir no console a direção do movimento a cada casa percorrida pela peça. Para movimentos na diagonal (Bispo), imprimir a combinação de duas direções. Utilize o comando printf para exibir as informações. As saídas devem seguir o padrão: printf("Cima\n");, printf("Baixo\n");, printf("Esquerda\n");, printf("Direita\n");, printf("Cima Esquerda\n"); printf("Direita\n");
- Requisitos não funcionais
- Performance: O código deve ser eficiente e executar sem atrasos perceptíveis.
- Documentação: O código deve ser bem documentado com comentários explicando a lógica de cada parte.
- Legibilidade: O código deve ser claro, organizado e fácil de entender, com nomes de variáveis descritivos e indentação adequada. Utilize apenas variáveis do tipo inteiro e string.
🎯Este desafio visa avaliar sua compreensão e aplicação prática das estruturas de repetição em C.

♟️ Desafio Nível Mestre – Criando Movimentos Complexos
📌 Descrição
Neste desafio, o programa de xadrez foi aprimorado para explorar técnicas avançadas de programação em C, simulando a movimentação de diferentes peças. Foram aplicados conceitos de recursividade, loops complexos, loops aninhados, continue e break.
🚀 O que foi feito
Recursividade:
Substituímos os loops simples da Torre, Bispo e Rainha por funções recursivas.
Cada função chama a si mesma até percorrer todas as casas definidas.
Loops Complexos para o Cavalo:
Movimentação em “L” (duas casas para cima e uma para a direita).
Uso de loops aninhados com múltiplas variáveis e condições.
Controle do fluxo com continue e break para simular com precisão a regra do cavalo.
Bispo com Loops Aninhados:
Além da versão recursiva, o Bispo também foi implementado usando loops aninhados.
O loop externo representa o movimento vertical e o interno o movimento horizontal.
⚙️ Requisitos Funcionais
Entrada de Dados: Os valores de casas a percorrer são definidos diretamente no código.
Recursividade: Torre, Bispo e Rainha devem obrigatoriamente ser implementados com funções recursivas.
Loops Complexos (Cavalo): Implementar a movimentação em “L” com múltiplas variáveis, continue e break.
Loops Aninhados (Bispo): Implementação adicional para simular o deslocamento diagonal.
🎯 Objetivo
Este desafio consolida conceitos fundamentais e avançados de C, como:
Estruturas de repetição;
Recursividade;
Controle de fluxo com break e continue;
Loops aninhados;
Legibilidade e organização do código.
Assim, o programa final simula de forma clara e organizada os movimentos das principais peças do xadrez, levando o aprendizado a um nível mestre.

♟️️ Jogo: Batalha Naval
️Desafio: nível novato
Posicionando Navios no Tabuleiro
📌 Descrição
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


