#include <stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome[50];

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite sua matrícula: \n");
    scanf("%d", &matricula);
    
    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Nome do aluno: %s \n", nome);
    printf("Sua idade é: %d \n", idade);
    printf("Sua altura é: %.2f \n", altura);
    printf("Sua matrícula é: %d", matricula);

    return 0;



}