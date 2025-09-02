/*
Loops com atualizações complexas
Nesse exemplo, a variável i é atualizada de maneira diferente dependendo de sua paridade: se i for par, 
é incrementado por 1; se for ímpar, é incrementado por 2. 
Essa lógica de atualização complexa permite que o loop siga um padrão de iteração não trivial.
*/

#include <stdio.h>  

int main(){
    for(int i = 0; i <100; i += (i % 2 == 0) ? 1 : 2){
        printf("i: %d\n", i);
    }
    return 0;
}