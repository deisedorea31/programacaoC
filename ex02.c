

// função fgets

#include <stdio.h>
#include <string.h>

int main(){
    char nome[50];
    printf("Digite seu nome completo:");
    fgets(nome, 50, stdin); // Lê no máximo 49 caracteres da entrada padrão (stdin = teclado)
    // fgets inclui o '\n', então podemos removê-lo se necessário
    nome[strcspn(nome, "\n")] = 0;
    printf("Nome completo digitado: %s\n", nome);
}