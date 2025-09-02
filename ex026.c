/*
- Loops com múltiplas variáveis
Nesse exemplo, i é incrementado e j é decrementado em cada iteração, 
permitindo um controle simultâneo de duas variáveis dentro do mesmo loop.
*/

#include <stdio.h>

int main(){

    for (int i = 0, j = 10; i < j; i++, j--){
        printf("i: %d, j: %d\n", i, j);
    }
    return 0;
}