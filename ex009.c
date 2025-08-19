/* Uso do switch
   Exemplo de uso do comando switch em C.
   O programa lê os dias da semana.
*/

#include <stdio.h>

int main() {
    int dia;

    printf("Digite um número de 1 a 7 para o dia da semana:\n");
    printf("1. Domingo\n");
    printf("2. Segunda-feira\n");
    printf("3. Terça-feira\n");
    printf("4. Quarta-feira\n");
    printf("5. Quinta-feira\n");
    printf("6. Sexta-feira\n");
    printf("7. Sábado\n");
    scanf("%d", &dia);

    switch (dia) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Número inválido! Por favor, digite um número entre 1 e 7.\n");
            break;
    }

    return 0;
}   