// funções printf e scanf

#include <stdio.h>

int main(){
    int idade;
    float altura;
    double peso;
    char letra = 'D';
    char nome[20] = "Deise";

    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("A sua altura é: \n");
    scanf("%f", &altura);
    printf("Seu peso é: \n");
    scanf("%f", &peso);
    printf("A inicial é:%c\n", letra);
    printf("Seu nome é: %s", nome);

return 0;

}
