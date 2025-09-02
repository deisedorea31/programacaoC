#include <stdio.h>

int main() {
   int num, ind, soma = 0;
   
   for(ind = 1; ind <= 5; ind++) {
       printf("Digite o %dº número: ", ind);
       scanf("%d", &num);

       if(num % 2 == 0) {
           soma = soma + num;
       }
   }

   printf("A soma dos números pares é: %d\n", soma);
   return 0;
}


    