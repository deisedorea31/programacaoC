/*
Uso de continue e break
Continue: Faz com que o loop pule a iteração atual e prossiga com a próxima iteração, 
verificando a condição do loop novamente.
Break: Interrompe o loop imediatamente, saindo dele antes que todas as iterações sejam concluídas.
Nesse exemplo, quando i é 5, continue pula a impressão, e quando i é 8, break termina o loop.
*/

#include <stdio.h>

int main(){
    for(int i = 0; i < 10; i++){
        if(i == 5){
            continue; // Pula a iteração quando i é 5
        }
        if(i == 8){
            break; // Sai do loop quando i é 8
        }
        printf("i: %d\n", i);
    }
    return 0;
}

