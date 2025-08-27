/* 
Super Trunfo em C: Desenvolvendo a Lógica do Jogo
Nível: Avançado
Curso: Análise e Desenvolvimento de Sistemas
Universidade: Estácio de Sá

Missão:
Será integrado tudo o que foi aprendido sobre estruturas de decisão em C para criar uma lógica de comparação ainda mais sofisticada. 
O jogador escolherá dois atributos para comparar as cartas de países.
Serão desenvolvidos menus dinâmicos com switch e o operador ternário será usado para tornar o código mais elegante. 
Este desafio é a culminação dos desafios anteriores, onde houve o cadastro das cartas e implementação da comparação com um único atributo.
- Exibição do Resultado: Mostrar na tela, de forma clara, o resultado da comparação, incluindo:
1. O nome dos dois países.
2. Os atributos usado na comparação.
3. Os valores do atributo para cada carta.
4. A soma dos valores dos atributos.
5. Qual carta venceu.
6. Em caso de empate, exibir a mensagem "Empate!".
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

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
    pibcapita1 = (pib1 * 1000000000) / populacao1; // PIB em bilhões convertido para reais
    pibcapita2 = (pib2 * 1000000000) / populacao2;

    // Mostrando as cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\nDensidade: %.2f hab/km²\nPIB per capita: %.2f reais\n",
           estado1, carta1, cidade1, populacao1, area1, pib1, turisticos1, densidade1, pibcapita1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões\nPontos turísticos: %d\nDensidade: %.2f hab/km²\nPIB per capita: %.2f reais\n",
           estado2, carta2, cidade2, populacao2, area2, pib2, turisticos2, densidade2, pibcapita2);

    // Menu para o jogador escolher o atributo
    int jogador;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1. População\n");   
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("Digite o número correspondente à sua escolha: ");
    scanf("%d", &jogador);

    // Mostrar a escolha do jogador 
    switch (jogador) { 
        case 1: 
            printf("Você escolheu comparar: População\n"); 
        break; 
        case 2: 
            printf("Você escolheu comparar: Área\n"); 
        break; 
        case 3: 
            printf("Você escolheu comparar: PIB\n"); 
        break; 
        case 4: 
            printf("Você escolheu comparar: Pontos turísticos\n"); 
        break; 
        case 5: 
            printf("Você escolheu comparar: Densidade populacional\n"); 
        break; 
        case 6: 
            printf("Você escolheu comparar: PIB per capita\n"); 
        break; 
        default: 
            printf("Opção inválida!\n"); 
        return 1; }
    
    printf("\n--- Resultado da Comparação ---\n");

    // Comparação com base no atributo escolhido
    switch (jogador) {
        case 1: // População
            printf("Atributo: População\n");
            printf("%s: %d habitantes | %s: %d habitantes\n", cidade1, populacao1, cidade2, populacao2);
            if (populacao1 > populacao2) printf("Vencedor: %s\n", cidade1);
            else if (populacao2 > populacao1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 2: // Área
            printf("Atributo: Área (km²)\n");
            printf("%s: %.2f km² | %s: %.2f km²\n", cidade1, area1, cidade2, area2);
            if (area1 > area2) printf("Vencedor: %s\n", cidade1);
            else if (area2 > area1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 3: // PIB
            printf("Atributo: PIB (bilhões de reais)\n");
            printf("%s: %.2f | %s: %.2f\n", cidade1, pib1, cidade2, pib2);
            if (pib1 > pib2) printf("Vencedor: %s\n", cidade1);
            else if (pib2 > pib1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 4: // Pontos turísticos
            printf("Atributo: Pontos turísticos\n");
            printf("%s: %d | %s: %d\n", cidade1, turisticos1, cidade2, turisticos2);
            if (turisticos1 > turisticos2) printf("Vencedor: %s\n", cidade1);
            else if (turisticos2 > turisticos1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 5: // Densidade (regra invertida: menor vence)
            printf("Atributo: Densidade populacional (hab/km²)\n");
            printf("%s: %.2f | %s: %.2f\n", cidade1, densidade1, cidade2, densidade2);
            if (densidade1 < densidade2) printf("Vencedor: %s\n", cidade1);
            else if (densidade2 < densidade1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 6: // PIB per capita
            printf("Atributo: PIB per capita (reais)\n");
            printf("%s: %.2f | %s: %.2f\n", cidade1, pibcapita1, cidade2, pibcapita2);
            if (pibcapita1 > pibcapita2) printf("Vencedor: %s\n", cidade1);
            else if (pibcapita2 > pibcapita1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
