/* Estrutura de Decisão IF E IF ELSE
- CRIAR UM PROGRAMA QUE VERIFICA AS ESTRUTURAS DE SEGURANÇA DE UM ARMAZÉM
1. TEMPERATURA
2. UMIDADE
3. NÍVEL DE ESTOQUE
- SE QUALQUER UMA DESSAS CONDIÇÕES ESTIVER FORA DO LIMITE SEGURO, O PROGRAMA DEVERÁ EMITIR UM ALERTA
*/

#include <stdio.h>

int main() {
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000; 
    // unsigned int = NÃO ARMAZENA VALORES NEGATIVOS, APENAS ZERO E NÚMEROS POSITIVOS

    printf("**** Programa para teste de ambiente **** \n");
    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura);

    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);

    printf("Entre com o estoque total: \n");
    scanf("%u", &estoque);

    // Estruturas de decisãol
    if (temperatura > 30) {
        printf("Temperatura está alta! \n");
    } else {
        printf("A temperatura está dentro dos parâmetros. \n");
    }

    if (umidade > 50) {
        printf("Umidade elevada!\n");
    } else {
        printf("A umidade está dentro dos parâmetros. \n");
    }

    if (estoque < estoqueMinimo) {
        printf("Estoque abaixo do ideal! \n");
    } else {
        printf("Estoque normal. \n");
    }

    return 0;
}

    

 