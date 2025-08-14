/*
Faculdade: Estácio de Sá
Curso: Análise e Desenvolvimento de Sistemas - Desafio Inicial

Super Trunfo - Nível Iniciante
Criar um sistema para cadastrar as cartas com informações sobre as cidades. 
*/

/*
Para cada carta, o usuário deverá fornecer as seguintes informações:
- Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
- Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
- Nome da Cidade: O nome da cidade. Tipo: char[] (string)
- População: O número de habitantes da cidade. Tipo: int
- Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
- PIB: O Produto Interno Bruto da cidade. Tipo: float
- Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
*/



#include <stdio.h>
#include <string.h>

// Criando a Carta 1 

int main() {
    char estado1[20];
    char carta1[5];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int turisticos1;

// Criando a Carta 2

    char estado2[20];
    char carta2[5];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int turisticos2;

// Solicitando a entrada de dados de cada carta   

    printf("Digite a letra do Primeiro Estado: \n");
    scanf("%1s", estado1);

    printf("Digite a letra do Segundo Estado: \n");
    scanf("%1s", estado2);

    printf("Digite o código da Primeira Carta: \n");
    scanf("%3s", carta1);

    printf("Digiteo código da Segunda Carta: \n");
    scanf("%3s", carta2);

    printf("Digite o nome da Primeira Cidade: \n");
    scanf("%s", cidade1);

    printf("Digite o nome da Segunda Cidade: \n");
    scanf("%s", cidade2);

    printf("Qual a população total da Primeira Cidade?: \n");
    scanf("%d", &populacao1);

    printf("Qual a população total da Segunda Cidade?: \n");
    scanf("%d", &populacao2);

    printf("Qual a área total da Primeira Cidade?: \n");
    scanf("%f", &area1);

    printf("Qual a área total da Segunda Cidade?: \n");
    scanf("%f", &area2);

    printf("Qual o PIB da Primeira Cidade?: \n");
    scanf("%f", &pib1);

    printf("Qual o PIB da Segunda Cidade?: \n");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos há na Primeira Cidade?: \n");
    scanf("%d", &turisticos1);

    printf("Quantos pontos turísticos há na Segunda Cidade?: \n");
    scanf("%d", &turisticos2);

// Mostrando o resultado de cada Carta

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", carta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área total: %.2f km²\n", area1);
    printf("O PIB é: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", turisticos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", carta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área total: %.2f km²\n", area2);
    printf("O PIB é: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", turisticos2);

    return 0;
}
