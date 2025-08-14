/* Super Trunfo - Nível Aventureiro
    Calculando Densidade Populacional e PIB per Capita
    O que será feito:
    Aprimorar o Super Trunfo nível iniciante. O programa continuará lendo as mesmas instruções do usuário.
A diferença é que, agora, o programa deve, também:
1. CALCULAR A DENSIDADE POPULACIONAL;
2. CALCULAR O PIB PER CAPITA;
3. EXIBIR TODOS OS RESULTADOS
*/

#include <stdio.h>
#include <string.h>

// Criando as Cartas 1 e 2

int main() {
    char estado1[3], estado2[3];
    char carta1[5], carta2[5];
    char cidade1[30], cidade2[30];
    double populacao1, populacao2;
    double area1, area2, pib1, pib2;
    int turisticos1, turisticos2;
    double densidade1, densidade2;
    double pibcapita1, pibcapita2;

// Solicitando a entrada dos dados de cada carta

    printf("Digite a letra do Primeiro Estado: \n");
    scanf("%2s", estado1);

    printf("Digite a letra do Segundo Estado: \n");
    scanf("%2s", estado2);

    printf("Digite o código da Primeira Carta: \n");
    scanf("%4s", carta1);

    printf("Digite o código da Segunda Carta: \n");
    scanf("%4s", carta2);

    printf("Digite o nome da Primeira Cidade: \n");
    scanf("%29s", cidade1);

    printf("Digite o nome da Segunda Cidade: \n");
    scanf("%29s", cidade2);

    printf("Qual a população total da Primeira Cidade?: \n");
    scanf("%lf", &populacao1);

    printf("Qual a população total da Segunda Cidade?: \n");
    scanf("%lf", &populacao2);

    printf("Qual a área total da Primeira Cidade?: \n");
    scanf("%lf", &area1);

    printf("Qual a área total da Segunda Cidade?: \n");
    scanf("%lf", &area2);

    printf("Qual o PIB da Primeira Cidade? (em bilhões): \n");
    scanf("%lf", &pib1);

    printf("Qual o PIB da Segunda Cidade? (em bilhões): \n");
    scanf("%lf", &pib2);

    printf("Quantos pontos turísticos há na Primeira Cidade?: \n");
    scanf("%d", &turisticos1);

    printf("Quantos pontos turísticos há na Segunda Cidade?: \n");
    scanf("%d", &turisticos2);

// Calculando a densidade demográfica de cada cidade
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

// Calculando o PIB per Capita de cada cidade
    pibcapita1 = (pib1 * 1e9) / populacao1; // PIB está em bilhões
    pibcapita2 = (pib2 * 1e9) / populacao2;

// Mostrando Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", carta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %lfd\n", populacao1);
    printf("Área total: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibcapita1);

// Mostrando Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", carta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %.2lf\n", populacao2);
    printf("Área total: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibcapita2);

    return 0;
}
