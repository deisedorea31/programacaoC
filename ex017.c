// Estrutura de repetição do-while

#include <stdio.h>

int main(){
    int num;

    do {
        printf("Digite um número (negativo para sair): \n");
        scanf("%d", &num);

        if (num >= 0) {
            printf("Você digitou: %d\n", num);
        } 
    } while (num >= 0);
    printf("Número negativo digitado. Saindo...\n");

    return 0;
    }
    
