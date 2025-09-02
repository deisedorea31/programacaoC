/* LOOPS ANINHADOS
Nesse exemplo, temos um loop for dentro de outro loop for. 
O loop externo controla as linhas (multiplicando), e o loop interno controla as colunas (multiplicador). 
Para cada valor de i (de 1 a 10), o loop interno percorre j (de 1 a 10), e, em cada iteração do loop interno, 
a multiplicação de i e j é impressa.

*/

#include <stdio.h>

int main() {
    for(int i = 1; i <=10; i++){
        for(int j = 1; j <=10; j++){
            printf("%d\t", i * j);
            }
    }
    return 0;
}
    

