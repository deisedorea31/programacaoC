#include <stdio.h>
#include <string.h>

int main() {
    char estado1[3], estado2[3];
    char carta1[5], carta2[5];
    char cidade1[30], cidade2[30];
    double populacao1, populacao2;
    double area1, area2, pib1, pib2;
    int turisticos1, turisticos2;
    double densidade1, densidade2;
    double pibcapita1, pibcapita2;

    // Entrada de dados
    printf("Digite a sigla do Primeiro Estado: ");
    scanf("%2s", estado1);
    printf("Digite a sigla do Segundo Estado: ");
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
    scanf("%lf", &populacao1);
    printf("Qual a população total da Segunda Cidade?: ");
    scanf("%lf", &populacao2);

    printf("Qual a área total da Primeira Cidade (km²)?: ");
    scanf("%lf", &area1);
    printf("Qual a área total da Segunda Cidade (km²)?: ");
    scanf("%lf", &area2);

    printf("Qual o PIB da Primeira Cidade? (em bilhões): ");
    scanf("%lf", &pib1);
    printf("Qual o PIB da Segunda Cidade? (em bilhões): ");
    scanf("%lf", &pib2);

    printf("Quantos pontos turísticos há na Primeira Cidade?: ");
    scanf("%d", &turisticos1);
    printf("Quantos pontos turísticos há na Segunda Cidade?: ");
    scanf("%d", &turisticos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pibcapita1 = (pib1 * 1000000000) / populacao1; 
    pibcapita2 = (pib2 * 1000000000) / populacao2;

    // Exibindo Cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\n", estado1, carta1, cidade1);
    printf("População: %.0lf\nÁrea: %.2f km²\nPIB: %.2f bilhões\n", populacao1, area1, pib1);
    printf("Pontos Turísticos: %d\nDensidade: %.2f hab/km²\nPIB per Capita: %.2f reais\n", 
           turisticos1, densidade1, pibcapita1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\n", estado2, carta2, cidade2);
    printf("População: %.0lf\nÁrea: %.2f km²\nPIB: %.2f bilhões\n", populacao2, area2, pib2);
    printf("Pontos Turísticos: %d\nDensidade: %.2f hab/km²\nPIB per Capita: %.2f reais\n", 
           turisticos2, densidade2, pibcapita2);

    // Comparações
    printf("\n--- Resultados das Comparações ---\n");

    // População
    if(populacao1 > populacao2)
        printf("População: %s venceu! (%.0lf > %.0lf)\n", cidade1, populacao1, populacao2);
    else if(populacao1 < populacao2)
        printf("População: %s venceu! (%.0lf < %.0lf)\n", cidade2, populacao1, populacao2);
    else
        printf("População: Empate! (%.0lf = %.0lf)\n", populacao1, populacao2);

    // Área
    if(area1 > area2)
        printf("Área: %s venceu! (%.2f > %.2f)\n", cidade1, area1, area2);
    else if(area1 < area2)
        printf("Área: %s venceu! (%.2f < %.2f)\n", cidade2, area1, area2);
    else
        printf("Área: Empate! (%.2f = %.2f)\n", area1, area2);

    // PIB
    if(pib1 > pib2)
        printf("PIB: %s venceu! (%.2f > %.2f bilhões)\n", cidade1, pib1, pib2);
    else if(pib1 < pib2)
        printf("PIB: %s venceu! (%.2f < %.2f bilhões)\n", cidade2, pib1, pib2);
    else
        printf("PIB: Empate! (%.2f = %.2f bilhões)\n", pib1, pib2);

    // Pontos turísticos
    if(turisticos1 > turisticos2)
        printf("Pontos Turísticos: %s venceu! (%d > %d)\n", cidade1, turisticos1, turisticos2);
    else if(turisticos1 < turisticos2)
        printf("Pontos Turísticos: %s venceu! (%d < %d)\n", cidade2, turisticos1, turisticos2);
    else
        printf("Pontos Turísticos: Empate! (%d = %d)\n", turisticos1, turisticos2);

    // Densidade
    if(densidade1 > densidade2)
        printf("Densidade: %s venceu! (%.2f > %.2f)\n", cidade1, densidade1, densidade2);
    else if(densidade1 < densidade2)
        printf("Densidade: %s venceu! (%.2f < %.2f)\n", cidade2, densidade1, densidade2);
    else
        printf("Densidade: Empate! (%.2f = %.2f)\n", densidade1, densidade2);

    // PIB per capita
    if(pibcapita1 > pibcapita2)
        printf("PIB per Capita: %s venceu! (%.2f > %.2f)\n", cidade1, pibcapita1, pibcapita2);
    else if(pibcapita1 < pibcapita2)
        printf("PIB per Capita: %s venceu! (%.2f < %.2f)\n", cidade2, pibcapita1, pibcapita2);
    else
        printf("PIB per Capita: Empate! (%.2f = %.2f)\n", pibcapita1, pibcapita2);

    return 0;
}
