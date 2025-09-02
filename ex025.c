// triângulo de letras em C

#include <stdio.h>

int main() {
    int i, j;
    char letra;

    for (i = 1; i <= 5; i++) {     // laço externo: controla as linhas (1 a 5)
        letra = 'A';               // reinicia a letra como 'A' a cada linha
        for (j = 1; j <= i; j++) { // laço interno: controla as colunas da linha
            printf("%c", letra);   // imprime a letra atual
            letra++;               // avança para a próxima letra do alfabeto
        }
        printf("\n");              // quebra de linha depois de cada linha
    }

    return 0;
}

/*
O que cada parte faz

int i, j;
Duas variáveis inteiras para controlar os laços (linha e coluna).

char letra;
Variável de caractere que guarda a letra a ser impressa.

for (i = 1; i <= 5; i++)
Laço externo. Ele cria 5 linhas (i = 1, 2, 3, 4, 5).

letra = 'A';
Em toda nova linha, a letra volta a ser 'A'.
(Por isso cada linha começa com A.)

for (j = 1; j <= i; j++)
Laço interno. Para cada linha i, imprime exatamente i letras:

Se i = 1, imprime 1 letra.

Se i = 2, imprime 2 letras.

…

Se i = 5, imprime 5 letras.

printf("%c", letra); letra++;
Imprime a letra atual e depois incrementa (letra++) para a próxima letra da tabela ASCII: A → B → C → …

printf("\n");
Quebra a linha ao terminar a linha atual.
*/