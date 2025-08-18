// Diferença entre estruturas aninhadas e encadeadas

// Estrutura aninhada
#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 18) { // Verifica se é maior de idade
        if (idade >= 60) { // Verifica se é idoso
            printf("Adulto (Idoso)\n");
        } else {
            printf("Adulto (Nao idoso)\n");
        }
    } else { // Se não for maior de idade
        printf("Menor de idade\n");
    }

/* 
Estrutura encadeada. 
As condições são verificadas em sequência (if → else if → else).
*/
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade < 13) {
        printf("Criança\n");
    } else if (idade < 18) {
        printf("Adolescente\n");
    } else if (idade < 60) {
        printf("Adulto\n");
    } else {
        printf("Idoso\n");
    }

    return 0;
}
