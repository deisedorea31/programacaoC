/*
Loops com condições múltiplas
Nesse exemplo, o loop continua enquanto i for menor que 5 e j for maior que 5. 
 As duas condições são avaliadas simultaneamente e o loop só prossegue se ambas forem verdadeiras.
*/

#include <stdio.h>

int main(){
    for(int i = 0, j=10; i < 5 && j > 5; i++, j--){
        printf("i: %d, j: %d\n", i, j);
    }
    return 0;
}