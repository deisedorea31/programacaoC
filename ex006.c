// Precedência de operadores

/*Operadores de comparação e lógicos
*/
// Assim, a expressão a<10 && 5∗b<c é avaliada como (a<10) && ((5∗b)<c).

#include <stdio.h>

int main() {
  int a = 5;
  int b = -10;
  int c = 0;

  if (a > 0 && b < 0 || c == 0) {
    printf("A condição é verdadeira\n");
  } else {
    printf("A condição é falsa\n");
  }

  // Verificação de idade e altura
    int idade = 20;
    float altura = 1.75;

  if (idade >= 18 && idade <= 30 && altura > 1.70) {
    printf("Você está na faixa etária e tem a altura adequada\n");
  } else {
    printf("Você não atende aos critérios\n");
  }

  // Verificação de temperatura e umidade
    float temperatura = 25.0;
    float umidade = 55.0;

  if (temperatura >= 20.0 && temperatura <= 30.0 && umidade > 50.0) {
    printf("As condições estão favoráveis\n");
  } else {
    printf("As condições não estão favoráveis\n");
  }

}