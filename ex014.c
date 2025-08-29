// Sistema de Gerenciamento de Notas Escolares Usando Integração de Estruturas De Decisão

#include <stdio.h>
#include <stdlib.h> 

    int main() {
        int opcao;
        float nota1, nota2, media;

        // Loop do menu
        printf("***Menu de Gerenciamento de Estudantes***");
        printf("1. Calcular Média de Notas\n");
        printf("2. Determinar Status\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) // Entrada das notas e cálculo da média
        {
            case 1:
             printf("calcular a Média de duas notas.\n");
             printf("Digite a primeira nota: ");
             scanf("%f", &nota1);
             printf("Digite a segunda nota: ");
             scanf("%f", &nota2);
             
             //Testar se as notas são válidas, se a nota é >= 0 e <= 10
             if((nota1 >= 0 && nota1 <=10) && (nota2 >= 0 && nota2 <=10)) {
                 printf("Calculando a média.\n");
                 media = (nota1 + nota2) / 2;
                    printf("Média: %.2f\n", media);
         } else {
                printf("Notas inválidas, digite novamente!\n");
                      break;
                 }

            // Usando operador ternário para determinar se o estudante está aprovado ou reprovado
            case 2:
             printf("Determinar o Status do Estudante com base na média.\n");
             printf("Digite a média do estudante: ");
             scanf("%f", &media);
                media >= 5 ? printf("Status: Aprovado\n") : printf("Status: Reprovado\n");

                if(media >=7)
                {
                    printf("Status: Aprovado!\n");
                } else if(media >=5)
                {
                    printf("Status: Recuperação!\n");
                } else {
                    printf("Status: Reprovado!\n");
                }
            break;

            case 3:
             printf("Sair do programa.\n");
            break;

            default:
             printf("Opção inválida! Tente novamente.\n");

        }
        return 0;
    }