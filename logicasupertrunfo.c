/* 
Super Trunfo em C: Desenvolvendo a Lógica do Jogo
Nível: Novato
Curso: Análise e Desenvolvimento de Sistemas
Universidade: Estácio de Sá

Missão:
- Desenvolver um programa em C que simule o jogo Super Trunfo. O Programa deverá:
1.Implementar a lógica de comparação entre duas cartas, considerando diferentes atributos numéricos.
2.Permitir ao jogador escolher entre diferentes atributos para a comparação através de menus interativos. 
3.Evoluir em complexidade ao longo dos três desafios:
- Comparação de cartas com base em um único atributo utilizando if e if-else.
- Comparação de cartas com múltiplos atributos usando operadores lógicos e estruturas de decisão aninhadas e encadeadas (if-else if), 
além da implementação de menus com switch.
- Comparação de cartas com base em dois atributos, utilizar o operador ternário e integrando todas as estruturas de decisão aprendidas 
para criar uma lógica mais complexa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Criando as cartas do jogo
Cada carta terá os seguintes atributos:
*/
int main() {
    char estado1[3], estado2[3];
    char carta1[5], carta2[5];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int turisticos1, turisticos2;
    float densidade1, densidade2;
    float pibcapita1, pibcapita2;

    // Solicitar dados das cartas aos usuários
    printf("Digite a letra do Primeiro Estado: ");
    scanf("%2s", estado1);
    printf("Digite a letra do Segundo Estado: ");
    scanf("%2s", estado2);
    printf("Digite o código da Primeira Carta: ");
    scanf("%4s", carta1);
    printf("Digite o código da Segunda Carta: ");
    scanf("%4s", carta2);
    printf("Digite o nome da Primeira Cidade: ");
    scanf("%29s", cidade1);
    printf("Digite o nome da Segunda Cidade: ");
    scanf("%29s", cidade2);
    printf("Qual a população total da Primeira Cidade?: ");
    scanf("%d", &populacao1);
    printf("Qual a população total da Segunda Cidade?: ");
    scanf("%d", &populacao2);
    printf("Qual a área total da Primeira Cidade?: ");
    scanf("%f", &area1);
    printf("Qual a área total da Segunda Cidade?: ");
    scanf("%f", &area2);
    printf("Qual o PIB da Primeira Cidade? (em bilhões): ");
    scanf("%f", &pib1);
    printf("Qual o PIB da Segunda Cidade? (em bilhões): ");
    scanf("%f", &pib2);
    printf("Quantos pontos turísticos há na Primeira Cidade?: ");
    scanf("%d", &turisticos1);
    printf("Quantos pontos turísticos há na Segunda Cidade?: ");
    scanf("%d", &turisticos2);

    // Cálculo de densidade populacional e PIB per capita
    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;
    pibcapita1 = (pib1 * 1000000000) / populacao1; // PIB em bilhões
    pibcapita2 = (pib2 * 1000000000) / populacao2;

    // Mostrando as cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\nDensidade: %.2f hab/km²\nPIB per capita: %.2f reais\n",
           estado1, carta1, cidade1, populacao1, area1, pib1, turisticos1, densidade1, pibcapita1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\nDensidade: %.2f hab/km²\nPIB per capita: %.2f reais\n",
           estado2, carta2, cidade2, populacao2, area2, pib2, turisticos2, densidade2, pibcapita2);

// Lógica de comparação entre as cartas

printf("\n--- Resultados das Comparações ---\n");

// População
printf("\nPopulação:\n");
printf("Carta 1 (%s): %d habitantes\n", cidade1, populacao1);
printf("Carta 2 (%s): %d habitantes\n", cidade2, populacao2);
if(populacao1 > populacao2)
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
else if(populacao1 < populacao2)
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);

// Área
printf("\nÁrea (km²):\n");
printf("Carta 1 (%s): %.2f\n", cidade1, area1);
printf("Carta 2 (%s): %.2f\n", cidade2, area2);
if(area1 > area2)
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
else if(area1 < area2)
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);

// PIB
printf("\nPIB (bilhões de reais):\n");
printf("Carta 1 (%s): %.2f\n", cidade1, pib1);
printf("Carta 2 (%s): %.2f\n", cidade2, pib2);
if(pib1 > pib2)
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
else if(pib1 < pib2)
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);

// Pontos turísticos
printf("\nPontos turísticos:\n");
printf("Carta 1 (%s): %d\n", cidade1, turisticos1);
printf("Carta 2 (%s): %d\n", cidade2, turisticos2);
if(turisticos1 > turisticos2)
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
else if(turisticos1 < turisticos2)
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);

// Densidade populacional
printf("\nDensidade populacional (hab/km²):\n");
printf("Carta 1 (%s): %.2f\n", cidade1, densidade1);
printf("Carta 2 (%s): %.2f\n", cidade2, densidade2);
if(densidade1 > densidade2)
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
else if(densidade1 < densidade2)
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);

// PIB per capita
printf("\nPIB per capita (reais):\n");
printf("Carta 1 (%s): %.2f\n", cidade1, pibcapita1);
printf("Carta 2 (%s): %.2f\n", cidade2, pibcapita2);
if(pibcapita1 > pibcapita2)
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
else if(pibcapita1 < pibcapita2)
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);

return 0;
}   
