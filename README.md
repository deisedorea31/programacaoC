# programacaoC
Aprendizado de C - Universidade Estácio de Sá
Curso: Análise e Desenvolvimento de Sistemas

--Criando as Cartas do Super Trunfo--

Neste primeiro nível, meu objetivo é construir a base do jogo Super Trunfo de Países: um sistema para cadastrar as cartas com informações sobre as cidades. Você vai praticar a leitura de dados do usuário, o armazenamento em variáveis e a exibição dessas informações na tela.


O que será feito:

Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. Para cada carta, o usuário deverá fornecer as seguintes informações:

- Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
- Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
- Nome da Cidade: O nome da cidade. Tipo: char[] (string)
- População: O número de habitantes da cidade. Tipo: int
- Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
- PIB: O Produto Interno Bruto da cidade. Tipo: float
- Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
 
Após o usuário inserir os dados de cada carta, o programa deve exibir na tela as informações cadastradas, de forma organizada e legível. Para cada carta, imprimir cada informação em uma linha separada, com uma descrição clara. Por exemplo:
 
Carta 1:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50
 
Carta 2:
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30    

Requisitos funcionais

O programa deve ler corretamente os dados de duas cartas do usuário via entrada padrão (teclado).
O programa deve armazenar os dados lidos em variáveis apropriadas.
O programa deve exibir os dados de cada carta na tela, formatados de forma clara e organizada, conforme o exemplo acima.

Requisitos não funcionais

Usabilidade: O programa deve ser fácil de usar, com instruções claras para o usuário.
Legibilidade: O código deve ser bem indentado, com comentários explicativos e nomes de variáveis significativos, facilitando a leitura e compreensão.
Corretude: O programa deve funcionar corretamente, sem erros de compilação ou execução.

Simplificações para o desafio

Você só precisa implementar o cadastro e a exibição de duas cartas.
Neste nível, foque apenas na leitura, armazenamento e exibição das informações. Você não precisa implementar nenhuma lógica de comparação entre as cartas ou qualquer outro recurso adicional.
Não utilize estruturas de repetição (como for ou while) ou estruturas de decisão (como if ou else). Seu código deve ser uma sequência simples de instruções.

Entregando seu Projeto

Desenvolva seu projeto no GitHub: Crie um repositório público no GitHub para o seu projeto. Recomendamos usar o GitHub Codespaces para facilitar o desenvolvimento.
Crie o arquivo do seu código: No seu repositório, crie um arquivo chamado super_trunfo.c com o seu código C.
Compile e teste: Compile e teste seu programa localmente para garantir que ele funciona corretamente.
Faça commit e push: Faça commit das suas alterações e envie (push) para o seu repositório no GitHub.
Envie o link do repositório: Copie o link do seu repositório no GitHub e envie-o através da plataforma SAVA, seguindo as instruções fornecidas.
 
Lembre-se: este é o primeiro passo. Concentre-se em entender os fundamentos de entrada, processamento e saída de dados em C. Nos próximos níveis, você adicionará mais funcionalidades e complexidade ao seu jogo.