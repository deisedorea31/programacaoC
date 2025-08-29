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
    int jogador1, jogador2;
    printf("\n****Escolha o atributo para comparar:****\n");
    printf("1. População\n");   
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("6. PIB per capita\n");
    printf("Digite o número correspondente à sua escolha: ");
    scanf("%d", &jogador1);

    printf("Escolha o segundo atributo (diferente do primeiro): ");
    scanf("%d", &jogador2);

    if (jogador1 == jogador2) {
        printf("⚠️ Você não pode escolher o mesmo atributo duas vezes!\n");
        return 1;
    }

    // ---------- Comparação do primeiro atributo ----------
    printf("\n--- Resultado da Primeira Comparação ---\n");
    switch (jogador1) {
        case 1: // População
            printf("População -> %s: %d | %s: %d\n", cidade1, populacao1, cidade2, populacao2);
            if (populacao1 > populacao2) printf("Vencedor: %s\n", cidade1);
            else if (populacao2 > populacao1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 2: // Área
            printf("Área -> %s: %.2f | %s: %.2f\n", cidade1, area1, cidade2, area2);
            if (area1 > area2) printf("Vencedor: %s\n", cidade1);
            else if (area2 > area1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 3: // PIB
            printf("PIB -> %s: %.2f | %s: %.2f\n", cidade1, pib1, cidade2, pib2);
            if (pib1 > pib2) printf("Vencedor: %s\n", cidade1);
            else if (pib2 > pib1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 4: // Pontos turísticos
            printf("Pontos turísticos -> %s: %d | %s: %d\n", cidade1, turisticos1, cidade2, turisticos2);
            if (turisticos1 > turisticos2) printf("Vencedor: %s\n", cidade1);
            else if (turisticos2 > turisticos1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 5: // Densidade (menor vence)
            printf("Densidade -> %s: %.2f | %s: %.2f\n", cidade1, densidade1, cidade2, densidade2);
            if (densidade1 < densidade2) printf("Vencedor: %s\n", cidade1);
            else if (densidade2 < densidade1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 6: // PIB per capita
            printf("PIB per capita -> %s: %.2f | %s: %.2f\n", cidade1, pibcapita1, cidade2, pibcapita2);
            if (pibcapita1 > pibcapita2) printf("Vencedor: %s\n", cidade1);
            else if (pibcapita2 > pibcapita1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;
    }

    // ---------- Comparação do segundo atributo ----------
    printf("\n--- Resultado da Segunda Comparação ---\n");
    switch (jogador2) {
        case 1: // População
            printf("População -> %s: %d | %s: %d\n", cidade1, populacao1, cidade2, populacao2);
            if (populacao1 > populacao2) printf("Vencedor: %s\n", cidade1);
            else if (populacao2 > populacao1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 2: // Área
            printf("Área -> %s: %.2f | %s: %.2f\n", cidade1, area1, cidade2, area2);
            if (area1 > area2) printf("Vencedor: %s\n", cidade1);
            else if (area2 > area1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 3: // PIB
            printf("PIB -> %s: %.2f | %s: %.2f\n", cidade1, pib1, cidade2, pib2);
            if (pib1 > pib2) printf("Vencedor: %s\n", cidade1);
            else if (pib2 > pib1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 4: // Pontos turísticos
            printf("Pontos turísticos -> %s: %d | %s: %d\n", cidade1, turisticos1, cidade2, turisticos2);
            if (turisticos1 > turisticos2) printf("Vencedor: %s\n", cidade1);
            else if (turisticos2 > turisticos1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 5: // Densidade (menor vence)
            printf("Densidade -> %s: %.2f | %s: %.2f\n", cidade1, densidade1, cidade2, densidade2);
            if (densidade1 < densidade2) printf("Vencedor: %s\n", cidade1);
            else if (densidade2 < densidade1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

        case 6: // PIB per capita
            printf("PIB per capita -> %s: %.2f | %s: %.2f\n", cidade1, pibcapita1, cidade2, pibcapita2);
            if (pibcapita1 > pibcapita2) printf("Vencedor: %s\n", cidade1);
            else if (pibcapita2 > pibcapita1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;

    
    }
    // ---------- Soma dos dois atributos escolhidos ----------
    float soma1 = 0, soma2 = 0;

    // Primeiro atributo escolhido
    switch (jogador1) {
        case 1: soma1 += populacao1; soma2 += populacao2; break;
        case 2: soma1 += area1; soma2 += area2; break;
        case 3: soma1 += pib1; soma2 += pib2; break;
        case 4: soma1 += turisticos1; soma2 += turisticos2; break;
        case 5: soma1 += (1/densidade1); soma2 += (1/densidade2); break; // menor vence, então usamos inverso
        case 6: soma1 += pibcapita1; soma2 += pibcapita2; break;
    }

    // Segundo atributo escolhido
    switch (jogador2) {
        case 1: soma1 += populacao1; soma2 += populacao2; break;
        case 2: soma1 += area1; soma2 += area2; break;
        case 3: soma1 += pib1; soma2 += pib2; break;
        case 4: soma1 += turisticos1; soma2 += turisticos2; break;
        case 5: soma1 += (1/densidade1); soma2 += (1/densidade2); break; // idem, inverso
        case 6: soma1 += pibcapita1; soma2 += pibcapita2; break;
    }

    printf("\n--- Resultado pela SOMA dos dois atributos ---\n");
    printf("%s: %.2f | %s: %.2f\n", cidade1, soma1, cidade2, soma2);

    if (soma1 > soma2) {
        printf("Vencedor pela soma: %s\n", cidade1);
    } else if (soma2 > soma1) {
        printf("Vencedor pela soma: %s\n", cidade2);
    } else {
        printf("Empate na soma!\n");
    }

    return 0;
}